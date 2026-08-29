#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800DA56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA56C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DA570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DA574: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DA578: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DA57C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DA580: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800DA584: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DA588: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800DA58C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DA590: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DA594: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DA598: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800DA59C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DA5A0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800DA5A4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DA5A8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800DA5AC: addiu       $a1, $a1, 0x42D0
    ctx->r5 = ADD32(ctx->r5, 0X42D0);
    // 0x800DA5B0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DA5B4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DA5B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DA5BC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DA5C0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DA5C4: jal         0x80027464
    // 0x800DA5C8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DA5C8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DA5CC: b           L_800DA5D4
    // 0x800DA5D0: nop

        goto L_800DA5D4;
    // 0x800DA5D0: nop

L_800DA5D4:
    // 0x800DA5D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DA5D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DA5DC: jr          $ra
    // 0x800DA5E0: nop

    return;
    // 0x800DA5E0: nop

;}
RECOMP_FUNC void func_80069D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069D88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069D90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80069D94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80069D98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80069D9C: lb          $t6, -0x1C34($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C34);
    // 0x80069DA0: nop

    // 0x80069DA4: beq         $t6, $zero, L_80069DB4
    if (ctx->r14 == 0) {
        // 0x80069DA8: nop
    
            goto L_80069DB4;
    }
    // 0x80069DA8: nop

    // 0x80069DAC: b           L_80069DF0
    // 0x80069DB0: nop

        goto L_80069DF0;
    // 0x80069DB0: nop

L_80069DB4:
    // 0x80069DB4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80069DB8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80069DBC: nop

    // 0x80069DC0: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x80069DC4: nop

    // 0x80069DC8: bne         $t8, $zero, L_80069DD8
    if (ctx->r24 != 0) {
        // 0x80069DCC: nop
    
            goto L_80069DD8;
    }
    // 0x80069DCC: nop

    // 0x80069DD0: b           L_80069DF0
    // 0x80069DD4: nop

        goto L_80069DF0;
    // 0x80069DD4: nop

L_80069DD8:
    // 0x80069DD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80069DDC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80069DE0: jal         0x80069AD8
    // 0x80069DE4: nop

    func_80069AD8(rdram, ctx);
        goto after_0;
    // 0x80069DE4: nop

    after_0:
    // 0x80069DE8: b           L_80069DF0
    // 0x80069DEC: nop

        goto L_80069DF0;
    // 0x80069DEC: nop

L_80069DF0:
    // 0x80069DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80069DF8: jr          $ra
    // 0x80069DFC: nop

    return;
    // 0x80069DFC: nop

;}
RECOMP_FUNC void func_8009C18C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C18C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009C190: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8009C194: nop

    // 0x8009C198: bne         $t6, $zero, L_8009C1F8
    if (ctx->r14 != 0) {
        // 0x8009C19C: nop
    
            goto L_8009C1F8;
    }
    // 0x8009C19C: nop

    // 0x8009C1A0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8009C1A4: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x8009C1A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009C1AC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8009C1B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009C1B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009C1B8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009C1BC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009C1C0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009C1C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8009C1C8: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8009C1CC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8009C1D0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8009C1D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009C1D8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009C1DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009C1E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009C1E4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009C1E8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009C1EC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009C1F0: b           L_8009C214
    // 0x8009C1F4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
        goto L_8009C214;
    // 0x8009C1F4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8009C1F8:
    // 0x8009C1F8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8009C1FC: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x8009C200: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009C204: bne         $t2, $at, L_8009C214
    if (ctx->r10 != ctx->r1) {
        // 0x8009C208: nop
    
            goto L_8009C214;
    }
    // 0x8009C208: nop

    // 0x8009C20C: b           L_8009C214
    // 0x8009C210: nop

        goto L_8009C214;
    // 0x8009C210: nop

L_8009C214:
    // 0x8009C214: jr          $ra
    // 0x8009C218: nop

    return;
    // 0x8009C218: nop

    // 0x8009C21C: jr          $ra
    // 0x8009C220: nop

    return;
    // 0x8009C220: nop

;}
RECOMP_FUNC void func_80091420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091420: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091428: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009142C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091430: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091434: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091438: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009143C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091440: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091444: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091448: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009144C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091450: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091454: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091458: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009145C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091460: addiu       $a1, $a1, 0x1558
    ctx->r5 = ADD32(ctx->r5, 0X1558);
    // 0x80091464: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091468: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009146C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091470: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091474: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091478: jal         0x80027464
    // 0x8009147C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009147C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091480: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091484: b           L_8009148C
    // 0x80091488: nop

        goto L_8009148C;
    // 0x80091488: nop

L_8009148C:
    // 0x8009148C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091490: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091494: jr          $ra
    // 0x80091498: nop

    return;
    // 0x80091498: nop

;}
RECOMP_FUNC void func_800F1478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F1478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F147C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F1480: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1488: jal         0x8002B114
    // 0x800F148C: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x800F148C: nop

    after_0:
    // 0x800F1490: b           L_800F1498
    // 0x800F1494: nop

        goto L_800F1498;
    // 0x800F1494: nop

L_800F1498:
    // 0x800F1498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F149C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F14A0: jr          $ra
    // 0x800F14A4: nop

    return;
    // 0x800F14A4: nop

;}
RECOMP_FUNC void func_80091C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091C44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091C48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091C4C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091C50: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091C54: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091C58: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091C5C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091C60: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091C64: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091C68: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091C6C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091C70: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091C74: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091C78: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091C7C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091C80: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091C84: addiu       $a1, $a1, 0x160C
    ctx->r5 = ADD32(ctx->r5, 0X160C);
    // 0x80091C88: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091C8C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091C90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091C94: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091C98: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091C9C: jal         0x80027464
    // 0x80091CA0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091CA0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091CA4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091CA8: b           L_80091CB0
    // 0x80091CAC: nop

        goto L_80091CB0;
    // 0x80091CAC: nop

L_80091CB0:
    // 0x80091CB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091CB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091CB8: jr          $ra
    // 0x80091CBC: nop

    return;
    // 0x80091CBC: nop

;}
RECOMP_FUNC void func_800FE6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE6D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800FE6DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800FE6E0: jal         0x8001D4D0
    // 0x800FE6E4: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x800FE6E4: nop

    after_0:
    // 0x800FE6E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FE6EC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x800FE6F0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x800FE6F4: jal         0x8001D638
    // 0x800FE6F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x800FE6F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800FE6FC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800FE700: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FE704: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x800FE708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FE70C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800FE710: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FE714: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FE718: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x800FE71C: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x800FE720: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x800FE724: addiu       $a1, $sp, 0x3E
    ctx->r5 = ADD32(ctx->r29, 0X3E);
    // 0x800FE728: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x800FE72C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800FE730: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800FE734: jal         0x80036E70
    // 0x800FE738: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x800FE738: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x800FE73C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FE740: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x800FE744: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE748: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800FE74C: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800FE750: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x800FE754: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800FE758: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x800FE75C: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x800FE760: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800FE764: lhu         $t0, 0x3E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3E);
    // 0x800FE768: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800FE76C: nop

    // 0x800FE770: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x800FE774: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE778: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x800FE77C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE780: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x800FE784: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE788: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x800FE78C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE790: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x800FE794: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE798: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x800FE79C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE7A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FE7A4: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x800FE7A8: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x800FE7AC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800FE7B0: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FE7B4: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x800FE7B8: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x800FE7BC: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x800FE7C0: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x800FE7C4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800FE7C8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x800FE7CC: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x800FE7D0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x800FE7D4: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800FE7D8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x800FE7DC: jal         0x80037188
    // 0x800FE7E0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x800FE7E0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x800FE7E4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800FE7E8: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x800FE7EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE7F0: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x800FE7F4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x800FE7F8: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x800FE7FC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800FE800: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x800FE804: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x800FE808: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x800FE80C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FE810: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x800FE814: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800FE818: nop

    // 0x800FE81C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x800FE820: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FE824: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x800FE828: jal         0x800FDD48
    // 0x800FE82C: nop

    Debug_Action_Menu(rdram, ctx);
        goto after_4;
    // 0x800FE82C: nop

    after_4:
    // 0x800FE830: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x800FE834: jal         0x8005E6A0
    // 0x800FE838: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    Debug_DrawProfiler(rdram, ctx);
        goto after_5;
    // 0x800FE838: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_5:
    // 0x800FE83C: b           L_800FE844
    // 0x800FE840: nop

        goto L_800FE844;
    // 0x800FE840: nop

L_800FE844:
    // 0x800FE844: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800FE848: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800FE84C: jr          $ra
    // 0x800FE850: nop

    return;
    // 0x800FE850: nop

;}
RECOMP_FUNC void func_8007897C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007897C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80078980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078984: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80078988: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007898C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80078990: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80078994: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80078998: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007899C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800789A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800789A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800789A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800789AC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800789B0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800789B4: nop

    // 0x800789B8: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800789BC: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800789C0: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x800789C4: jal         0x80078168
    // 0x800789C8: nop

    func_80078168(rdram, ctx);
        goto after_0;
    // 0x800789C8: nop

    after_0:
    // 0x800789CC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800789D0: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x800789D4: nop

    // 0x800789D8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x800789DC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800789E0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800789E4: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x800789E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800789EC: sb          $t3, 0x7960($at)
    MEM_B(0X7960, ctx->r1) = ctx->r11;
    // 0x800789F0: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x800789F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800789F8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800789FC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80078A00: lw          $t6, 0x76F0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X76F0);
    // 0x80078A04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078A08: sw          $t6, 0x7968($at)
    MEM_W(0X7968, ctx->r1) = ctx->r14;
    // 0x80078A0C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80078A10: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80078A14: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80078A18: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80078A1C: lw          $t9, 0x7700($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7700);
    // 0x80078A20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078A24: sw          $t9, 0x7970($at)
    MEM_W(0X7970, ctx->r1) = ctx->r25;
    // 0x80078A28: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80078A2C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80078A30: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80078A34: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80078A38: lw          $t2, 0x7710($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7710);
    // 0x80078A3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078A40: sw          $t2, 0x7978($at)
    MEM_W(0X7978, ctx->r1) = ctx->r10;
    // 0x80078A44: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80078A48: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80078A4C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80078A50: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80078A54: lw          $t5, 0x7720($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7720);
    // 0x80078A58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078A5C: sw          $t5, 0x7980($at)
    MEM_W(0X7980, ctx->r1) = ctx->r13;
    // 0x80078A60: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80078A64: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80078A68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80078A6C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80078A70: lw          $t8, 0x7730($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7730);
    // 0x80078A74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078A78: sw          $t8, 0x7988($at)
    MEM_W(0X7988, ctx->r1) = ctx->r24;
    // 0x80078A7C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80078A80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078A84: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80078A88: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80078A8C: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80078A90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078A94: swc1        $f4, 0x7990($at)
    MEM_W(0X7990, ctx->r1) = ctx->f4.u32l;
    // 0x80078A98: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80078A9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078AA0: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80078AA4: nop

    // 0x80078AA8: swc1        $f6, 0x7998($at)
    MEM_W(0X7998, ctx->r1) = ctx->f6.u32l;
    // 0x80078AAC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80078AB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078AB4: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80078AB8: nop

    // 0x80078ABC: swc1        $f8, 0x79A0($at)
    MEM_W(0X79A0, ctx->r1) = ctx->f8.u32l;
    // 0x80078AC0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80078AC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078AC8: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80078ACC: nop

    // 0x80078AD0: swc1        $f10, 0x79A8($at)
    MEM_W(0X79A8, ctx->r1) = ctx->f10.u32l;
    // 0x80078AD4: b           L_80078ADC
    // 0x80078AD8: nop

        goto L_80078ADC;
    // 0x80078AD8: nop

L_80078ADC:
    // 0x80078ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078AE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80078AE4: jr          $ra
    // 0x80078AE8: nop

    return;
    // 0x80078AE8: nop

;}
RECOMP_FUNC void func_8007CDE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CDE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007CDEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CDF0: jal         0x8007944C
    // 0x8007CDF4: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007CDF4: nop

    after_0:
    // 0x8007CDF8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007CDFC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CE00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007CE04: beq         $t6, $at, L_8007CEA0
    if (ctx->r14 == ctx->r1) {
        // 0x8007CE08: nop
    
            goto L_8007CEA0;
    }
    // 0x8007CE08: nop

    // 0x8007CE0C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CE10: jal         0x8007CCE8
    // 0x8007CE14: nop

    func_8007CCE8(rdram, ctx);
        goto after_1;
    // 0x8007CE14: nop

    after_1:
    // 0x8007CE18: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CE1C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007CE20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007CE24: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007CE28: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007CE2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007CE30: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007CE34: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8007CE38: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007CE3C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8007CE40: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007CE44: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x8007CE48: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8007CE4C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007CE50: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007CE54: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007CE58: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8007CE5C: nop

    // 0x8007CE60: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x8007CE64: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007CE68: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8007CE6C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007CE70: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8007CE74: nop

    // 0x8007CE78: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x8007CE7C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007CE80: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8007CE84: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007CE88: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8007CE8C: nop

    // 0x8007CE90: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x8007CE94: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CE98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007CE9C: sh          $t9, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = ctx->r25;
L_8007CEA0:
    // 0x8007CEA0: b           L_8007CEA8
    // 0x8007CEA4: nop

        goto L_8007CEA8;
    // 0x8007CEA4: nop

L_8007CEA8:
    // 0x8007CEA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CEAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007CEB0: jr          $ra
    // 0x8007CEB4: nop

    return;
    // 0x8007CEB4: nop

;}
RECOMP_FUNC void func_8006BA5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BA5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006BA60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006BA64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006BA68: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006BA6C: nop

    // 0x8006BA70: bne         $t6, $zero, L_8006BA84
    if (ctx->r14 != 0) {
        // 0x8006BA74: nop
    
            goto L_8006BA84;
    }
    // 0x8006BA74: nop

    // 0x8006BA78: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006BA7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BA80: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
L_8006BA84:
    // 0x8006BA84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006BA88: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8006BA8C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006BA90: jal         0x80017BEC
    // 0x8006BA94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80017BEC(rdram, ctx);
        goto after_0;
    // 0x8006BA94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006BA98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006BA9C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8006BAA0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006BAA4: jal         0x80017CFC
    // 0x8006BAA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80017CFC(rdram, ctx);
        goto after_1;
    // 0x8006BAA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8006BAAC: b           L_8006BAB4
    // 0x8006BAB0: nop

        goto L_8006BAB4;
    // 0x8006BAB0: nop

L_8006BAB4:
    // 0x8006BAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006BAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006BABC: jr          $ra
    // 0x8006BAC0: nop

    return;
    // 0x8006BAC0: nop

;}
RECOMP_FUNC void func_800FA7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA7D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FA7DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FA7E0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800FA7E4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800FA7E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800FA7EC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800FA7F0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800FA7F4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800FA7F8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800FA7FC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800FA800: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FA804: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800FA808: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800FA80C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800FA810: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800FA814: addiu       $a1, $a1, 0x3838
    ctx->r5 = ADD32(ctx->r5, 0X3838);
    // 0x800FA818: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FA81C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800FA820: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FA824: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800FA828: jal         0x80027464
    // 0x800FA82C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800FA82C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800FA830: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800FA834: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FA838: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FA83C: beq         $t0, $at, L_800FA870
    if (ctx->r8 == ctx->r1) {
        // 0x800FA840: nop
    
            goto L_800FA870;
    }
    // 0x800FA840: nop

    // 0x800FA844: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800FA848: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800FA84C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800FA850: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800FA854: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800FA858: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FA85C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800FA860: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800FA864: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FA868: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800FA86C: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
L_800FA870:
    // 0x800FA870: b           L_800FA878
    // 0x800FA874: nop

        goto L_800FA878;
    // 0x800FA874: nop

L_800FA878:
    // 0x800FA878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA87C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FA880: jr          $ra
    // 0x800FA884: nop

    return;
    // 0x800FA884: nop

;}
RECOMP_FUNC void func_8006E1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E1B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8006E1B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006E1BC: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8006E1C0: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8006E1C4: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8006E1C8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8006E1CC: lh          $t7, 0xE4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE4);
    // 0x8006E1D0: nop

    // 0x8006E1D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006E1D8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8006E1DC: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x8006E1E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006E1E4: lb          $t9, 0x4DA1($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4DA1);
    // 0x8006E1E8: nop

    // 0x8006E1EC: sb          $t9, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r25;
    // 0x8006E1F0: lb          $t0, 0x47($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X47);
    // 0x8006E1F4: nop

    // 0x8006E1F8: bne         $t0, $zero, L_8006E208
    if (ctx->r8 != 0) {
        // 0x8006E1FC: nop
    
            goto L_8006E208;
    }
    // 0x8006E1FC: nop

    // 0x8006E200: b           L_8006E7BC
    // 0x8006E204: nop

        goto L_8006E7BC;
    // 0x8006E204: nop

L_8006E208:
    // 0x8006E208: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x8006E20C: nop

    // 0x8006E210: lbu         $t2, 0x13A($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X13A);
    // 0x8006E214: nop

    // 0x8006E218: beq         $t2, $zero, L_8006E228
    if (ctx->r10 == 0) {
        // 0x8006E21C: nop
    
            goto L_8006E228;
    }
    // 0x8006E21C: nop

    // 0x8006E220: b           L_8006E7BC
    // 0x8006E224: nop

        goto L_8006E7BC;
    // 0x8006E224: nop

L_8006E228:
    // 0x8006E228: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x8006E22C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006E230: lh          $t4, 0xE4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE4);
    // 0x8006E234: nop

    // 0x8006E238: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8006E23C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8006E240: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x8006E244: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006E248: lbu         $t6, 0x4DA0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X4DA0);
    // 0x8006E24C: nop

    // 0x8006E250: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8006E254: bgez        $t6, L_8006E26C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8006E258: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8006E26C;
    }
    // 0x8006E258: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006E25C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8006E260: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006E264: nop

    // 0x8006E268: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8006E26C:
    // 0x8006E26C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8006E270: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006E274: nop

    // 0x8006E278: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8006E27C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x8006E280: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8006E284: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8006E288: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x8006E28C: lwc1        $f4, 0x14($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X14);
    // 0x8006E290: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006E294: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8006E298: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006E29C: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8006E2A0: nop

    // 0x8006E2A4: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8006E2A8: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x8006E2AC: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8006E2B0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8006E2B4: lh          $t9, 0xE4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE4);
    // 0x8006E2B8: nop

    // 0x8006E2BC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006E2C0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8006E2C4: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x8006E2C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8006E2CC: lh          $t1, 0x4D98($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4D98);
    // 0x8006E2D0: nop

    // 0x8006E2D4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8006E2D8: nop

    // 0x8006E2DC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006E2E0: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8006E2E4: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8006E2E8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8006E2EC: lh          $t3, 0xE4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE4);
    // 0x8006E2F0: nop

    // 0x8006E2F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006E2F8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8006E2FC: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x8006E300: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8006E304: lh          $t5, 0x4D9C($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4D9C);
    // 0x8006E308: nop

    // 0x8006E30C: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x8006E310: nop

    // 0x8006E314: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006E318: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x8006E31C: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8006E320: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006E324: lwc1        $f16, 0x1C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8006E328: lwc1        $f5, 0x55C0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X55C0);
    // 0x8006E32C: lwc1        $f4, 0x55C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X55C4);
    // 0x8006E330: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8006E334: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8006E338: jal         0x80034970
    // 0x8006E33C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8006E33C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_0:
    // 0x8006E340: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8006E344: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8006E348: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8006E34C: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8006E350: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006E354: lw          $t8, 0x7594($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7594);
    // 0x8006E358: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8006E35C: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
    // 0x8006E360: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8006E364: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006E368: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8006E36C: lwc1        $f7, 0x55C8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X55C8);
    // 0x8006E370: lwc1        $f6, 0x55CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55CC);
    // 0x8006E374: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8006E378: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x8006E37C: jal         0x80036570
    // 0x8006E380: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8006E380: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8006E384: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8006E388: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8006E38C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8006E390: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8006E394: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006E398: lw          $t1, 0x7594($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7594);
    // 0x8006E39C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8006E3A0: swc1        $f8, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f8.u32l;
    // 0x8006E3A4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x8006E3A8: nop

    // 0x8006E3AC: bne         $t2, $zero, L_8006E3EC
    if (ctx->r10 != 0) {
        // 0x8006E3B0: nop
    
            goto L_8006E3EC;
    }
    // 0x8006E3B0: nop

    // 0x8006E3B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006E3B8: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x8006E3BC: jal         0x800682E0
    // 0x8006E3C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800682E0(rdram, ctx);
        goto after_2;
    // 0x8006E3C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8006E3C4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006E3C8: lw          $t3, 0x7594($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7594);
    // 0x8006E3CC: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x8006E3D0: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8006E3D4: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    // 0x8006E3D8: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8006E3DC: jal         0x800843CC
    // 0x8006E3E0: nop

    func_800843CC(rdram, ctx);
        goto after_3;
    // 0x8006E3E0: nop

    after_3:
    // 0x8006E3E4: b           L_8006E464
    // 0x8006E3E8: nop

        goto L_8006E464;
    // 0x8006E3E8: nop

L_8006E3EC:
    // 0x8006E3EC: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x8006E3F0: nop

    // 0x8006E3F4: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x8006E3F8: bne         $at, $zero, L_8006E444
    if (ctx->r1 != 0) {
        // 0x8006E3FC: nop
    
            goto L_8006E444;
    }
    // 0x8006E3FC: nop

    // 0x8006E400: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x8006E404: beq         $at, $zero, L_8006E444
    if (ctx->r1 == 0) {
        // 0x8006E408: nop
    
            goto L_8006E444;
    }
    // 0x8006E408: nop

    // 0x8006E40C: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8006E410: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8006E414: jal         0x800682E0
    // 0x8006E418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800682E0(rdram, ctx);
        goto after_4;
    // 0x8006E418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006E41C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006E420: lw          $t6, 0x7594($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7594);
    // 0x8006E424: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8006E428: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8006E42C: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x8006E430: lwc1        $f14, 0x4($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8006E434: jal         0x80078168
    // 0x8006E438: nop

    func_80078168(rdram, ctx);
        goto after_5;
    // 0x8006E438: nop

    after_5:
    // 0x8006E43C: b           L_8006E464
    // 0x8006E440: nop

        goto L_8006E464;
    // 0x8006E440: nop

L_8006E444:
    // 0x8006E444: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006E448: lw          $t8, 0x7594($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7594);
    // 0x8006E44C: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8006E450: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8006E454: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x8006E458: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8006E45C: jal         0x80067748
    // 0x8006E460: nop

    func_80067748(rdram, ctx);
        goto after_6;
    // 0x8006E460: nop

    after_6:
L_8006E464:
    // 0x8006E464: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006E468: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x8006E46C: nop

    // 0x8006E470: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8006E474: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x8006E478: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8006E47C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006E480: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8006E484: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8006E488: lw          $t3, 0x76F0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X76F0);
    // 0x8006E48C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006E490: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006E494: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006E498: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x8006E49C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8006E4A0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8006E4A4: lw          $t5, 0x7700($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7700);
    // 0x8006E4A8: lw          $t7, 0x7710($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7710);
    // 0x8006E4AC: lw          $t9, 0x7720($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7720);
    // 0x8006E4B0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x8006E4B4: sra         $a0, $t3, 31
    ctx->r4 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8006E4B8: addiu       $t3, $sp, 0x5C
    ctx->r11 = ADD32(ctx->r29, 0X5C);
    // 0x8006E4BC: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x8006E4C0: addiu       $t0, $sp, 0x68
    ctx->r8 = ADD32(ctx->r29, 0X68);
    // 0x8006E4C4: addiu       $t1, $sp, 0x64
    ctx->r9 = ADD32(ctx->r29, 0X64);
    // 0x8006E4C8: sra         $t6, $t7, 31
    ctx->r14 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8006E4CC: sra         $t8, $t9, 31
    ctx->r24 = S32(SIGNED(ctx->r25) >> 31);
    // 0x8006E4D0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8006E4D4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8006E4D8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8006E4DC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8006E4E0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8006E4E4: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8006E4E8: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8006E4EC: sra         $a2, $t5, 31
    ctx->r6 = S32(SIGNED(ctx->r13) >> 31);
    // 0x8006E4F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8006E4F4: jal         0x80016A80
    // 0x8006E4F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_80016A80(rdram, ctx);
        goto after_7;
    // 0x8006E4F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_7:
    // 0x8006E4FC: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8006E500: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x8006E504: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E508: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006E50C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8006E510: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8006E514: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8006E518: nop

    // 0x8006E51C: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8006E520: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x8006E524: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8006E528: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8006E52C: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8006E530: bne         $t4, $t8, L_8006E568
    if (ctx->r12 != ctx->r24) {
        // 0x8006E534: nop
    
            goto L_8006E568;
    }
    // 0x8006E534: nop

    // 0x8006E538: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x8006E53C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006E540: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8006E544: nop

    // 0x8006E548: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8006E54C: nop

    // 0x8006E550: bc1f        L_8006E560
    if (!c1cs) {
        // 0x8006E554: nop
    
            goto L_8006E560;
    }
    // 0x8006E554: nop

    // 0x8006E558: b           L_8006E7BC
    // 0x8006E55C: nop

        goto L_8006E7BC;
    // 0x8006E55C: nop

L_8006E560:
    // 0x8006E560: b           L_8006E590
    // 0x8006E564: nop

        goto L_8006E590;
    // 0x8006E564: nop

L_8006E568:
    // 0x8006E568: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x8006E56C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006E570: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8006E574: nop

    // 0x8006E578: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x8006E57C: nop

    // 0x8006E580: bc1f        L_8006E590
    if (!c1cs) {
        // 0x8006E584: nop
    
            goto L_8006E590;
    }
    // 0x8006E584: nop

    // 0x8006E588: b           L_8006E7BC
    // 0x8006E58C: nop

        goto L_8006E7BC;
    // 0x8006E58C: nop

L_8006E590:
    // 0x8006E590: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8006E594: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006E598: nop

    // 0x8006E59C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8006E5A0: nop

    // 0x8006E5A4: bc1f        L_8006E5B8
    if (!c1cs) {
        // 0x8006E5A8: nop
    
            goto L_8006E5B8;
    }
    // 0x8006E5A8: nop

    // 0x8006E5AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8006E5B0: b           L_8006E5E8
    // 0x8006E5B4: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
        goto L_8006E5E8;
    // 0x8006E5B4: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
L_8006E5B8:
    // 0x8006E5B8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8006E5BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006E5C0: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8006E5C4: nop

    // 0x8006E5C8: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x8006E5CC: nop

    // 0x8006E5D0: bc1f        L_8006E5E8
    if (!c1cs) {
        // 0x8006E5D4: nop
    
            goto L_8006E5E8;
    }
    // 0x8006E5D4: nop

    // 0x8006E5D8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8006E5DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006E5E0: nop

    // 0x8006E5E4: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
L_8006E5E8:
    // 0x8006E5E8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006E5EC: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8006E5F0: lwc1        $f19, 0x55D0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X55D0);
    // 0x8006E5F4: lwc1        $f18, 0x55D4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X55D4);
    // 0x8006E5F8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8006E5FC: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8006E600: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8006E604: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8006E608: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8006E60C: nop

    // 0x8006E610: add.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f4.d + ctx->f8.d;
    // 0x8006E614: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8006E618: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x8006E61C: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8006E620: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E624: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006E628: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8006E62C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006E630: lw          $t1, 0x7594($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7594);
    // 0x8006E634: lwc1        $f16, 0x7760($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8006E638: nop

    // 0x8006E63C: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
    // 0x8006E640: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006E644: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8006E648: lwc1        $f19, 0x55D8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X55D8);
    // 0x8006E64C: lwc1        $f18, 0x55DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X55DC);
    // 0x8006E650: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8006E654: mul.d       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f8.d);
    // 0x8006E658: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8006E65C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8006E660: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8006E664: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006E668: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x8006E66C: lw          $t2, 0x7594($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7594);
    // 0x8006E670: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8006E674: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x8006E678: swc1        $f18, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f18.u32l;
    // 0x8006E67C: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x8006E680: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006E684: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8006E688: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006E68C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8006E690: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006E694: lw          $t6, 0x7710($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7710);
    // 0x8006E698: lw          $t7, 0x76F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X76F0);
    // 0x8006E69C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8006E6A0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8006E6A4: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006E6A8: jal         0x80014F50
    // 0x8006E6AC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_Atan2f(rdram, ctx);
        goto after_8;
    // 0x8006E6AC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_8:
    // 0x8006E6B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006E6B4: lw          $t4, 0x7594($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7594);
    // 0x8006E6B8: nop

    // 0x8006E6BC: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x8006E6C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006E6C4: lw          $t8, 0x7594($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7594);
    // 0x8006E6C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8006E6CC: nop

    // 0x8006E6D0: swc1        $f8, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f8.u32l;
    // 0x8006E6D4: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8006E6D8: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8006E6DC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006E6E0: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8006E6E4: lw          $t9, 0x7594($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7594);
    // 0x8006E6E8: nop

    // 0x8006E6EC: swc1        $f18, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f18.u32l;
    // 0x8006E6F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006E6F4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006E6F8: lw          $t0, 0x7594($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7594);
    // 0x8006E6FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006E700: nop

    // 0x8006E704: swc1        $f6, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f6.u32l;
    // 0x8006E708: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8006E70C: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8006E710: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006E714: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8006E718: lw          $t1, 0x7594($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7594);
    // 0x8006E71C: nop

    // 0x8006E720: swc1        $f16, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f16.u32l;
    // 0x8006E724: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    // 0x8006E728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E72C: jal         0x80019510
    // 0x8006E730: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80019510(rdram, ctx);
        goto after_9;
    // 0x8006E730: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x8006E734: lb          $t2, 0x47($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X47);
    // 0x8006E738: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006E73C: bne         $t2, $at, L_8006E780
    if (ctx->r10 != ctx->r1) {
        // 0x8006E740: nop
    
            goto L_8006E780;
    }
    // 0x8006E740: nop

    // 0x8006E744: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006E748: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006E74C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E750: addiu       $t6, $t3, 0x8
    ctx->r14 = ADD32(ctx->r11, 0X8);
    // 0x8006E754: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006E758: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x8006E75C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8006E760: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8006E764: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8006E768: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8006E76C: lui         $t4, 0x100
    ctx->r12 = S32(0X100 << 16);
    // 0x8006E770: addiu       $t4, $t4, 0x630
    ctx->r12 = ADD32(ctx->r12, 0X630);
    // 0x8006E774: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x8006E778: b           L_8006E7B4
    // 0x8006E77C: nop

        goto L_8006E7B4;
    // 0x8006E77C: nop

L_8006E780:
    // 0x8006E780: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006E784: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006E788: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E78C: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006E790: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8006E794: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8006E798: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8006E79C: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8006E7A0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006E7A4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8006E7A8: lui         $t3, 0x100
    ctx->r11 = S32(0X100 << 16);
    // 0x8006E7AC: addiu       $t3, $t3, 0x6C8
    ctx->r11 = ADD32(ctx->r11, 0X6C8);
    // 0x8006E7B0: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
L_8006E7B4:
    // 0x8006E7B4: b           L_8006E7BC
    // 0x8006E7B8: nop

        goto L_8006E7BC;
    // 0x8006E7B8: nop

L_8006E7BC:
    // 0x8006E7BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006E7C0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8006E7C4: jr          $ra
    // 0x8006E7C8: nop

    return;
    // 0x8006E7C8: nop

;}
RECOMP_FUNC void func_80094C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094C20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80094C24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80094C28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80094C2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80094C30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80094C34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80094C38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80094C3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80094C40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80094C44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80094C48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80094C4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80094C50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80094C54: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80094C58: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80094C5C: nop

    // 0x80094C60: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80094C64: nop

    // 0x80094C68: bne         $t1, $zero, L_80094CC0
    if (ctx->r9 != 0) {
        // 0x80094C6C: nop
    
            goto L_80094CC0;
    }
    // 0x80094C6C: nop

    // 0x80094C70: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80094C74: nop

    // 0x80094C78: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80094C7C: nop

    // 0x80094C80: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80094C84: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80094C88: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80094C8C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80094C90: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80094C94: jal         0x80014E80
    // 0x80094C98: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80094C98: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x80094C9C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80094CA0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80094CA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80094CA8: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x80094CAC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80094CB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80094CB4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80094CB8: nop

    // 0x80094CBC: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
L_80094CC0:
    // 0x80094CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094CC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094CC8: jal         0x80028FA0
    // 0x80094CCC: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80094CCC: nop

    after_1:
    // 0x80094CD0: beq         $v0, $zero, L_80094CE8
    if (ctx->r2 == 0) {
        // 0x80094CD4: nop
    
            goto L_80094CE8;
    }
    // 0x80094CD4: nop

    // 0x80094CD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094CDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094CE0: jal         0x80029B60
    // 0x80094CE4: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x80094CE4: nop

    after_2:
L_80094CE8:
    // 0x80094CE8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80094CEC: nop

    // 0x80094CF0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80094CF4: nop

    // 0x80094CF8: beq         $t0, $zero, L_80094D20
    if (ctx->r8 == 0) {
        // 0x80094CFC: nop
    
            goto L_80094D20;
    }
    // 0x80094CFC: nop

    // 0x80094D00: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80094D04: nop

    // 0x80094D08: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
    // 0x80094D0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094D10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094D14: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80094D18: jal         0x80029EF8
    // 0x80094D1C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x80094D1C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
L_80094D20:
    // 0x80094D20: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80094D24: nop

    // 0x80094D28: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80094D2C: nop

    // 0x80094D30: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80094D34: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80094D38: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80094D3C: nop

    // 0x80094D40: swc1        $f16, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f16.u32l;
    // 0x80094D44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094D48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094D4C: jal         0x80029C40
    // 0x80094D50: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80094D50: nop

    after_4:
    // 0x80094D54: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80094D58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80094D5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094D60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094D64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80094D68: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80094D6C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80094D70: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80094D74: jal         0x80029018
    // 0x80094D78: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80094D78: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80094D7C: beq         $v0, $zero, L_80094DA0
    if (ctx->r2 == 0) {
        // 0x80094D80: nop
    
            goto L_80094DA0;
    }
    // 0x80094D80: nop

    // 0x80094D84: jal         0x800297DC
    // 0x80094D88: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x80094D88: nop

    after_6:
    // 0x80094D8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094D90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094D94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80094D98: jal         0x80029824
    // 0x80094D9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x80094D9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_80094DA0:
    // 0x80094DA0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80094DA4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80094DA8: nop

    // 0x80094DAC: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
    // 0x80094DB0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80094DB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80094DB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094DBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80094DC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80094DC4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80094DC8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80094DCC: jal         0x80029F58
    // 0x80094DD0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_8;
    // 0x80094DD0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80094DD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80094DD8: bne         $v0, $at, L_80094DEC
    if (ctx->r2 != ctx->r1) {
        // 0x80094DDC: nop
    
            goto L_80094DEC;
    }
    // 0x80094DDC: nop

    // 0x80094DE0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80094DE4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80094DE8: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_80094DEC:
    // 0x80094DEC: b           L_80094DF4
    // 0x80094DF0: nop

        goto L_80094DF4;
    // 0x80094DF0: nop

L_80094DF4:
    // 0x80094DF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80094DF8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80094DFC: jr          $ra
    // 0x80094E00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80094E00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80090A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090A84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090A88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090A8C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090A90: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090A94: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090A98: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090A9C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090AA0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090AA4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090AA8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090AAC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090AB0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090AB4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090AB8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090ABC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090AC0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090AC4: addiu       $a1, $a1, 0x1474
    ctx->r5 = ADD32(ctx->r5, 0X1474);
    // 0x80090AC8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090ACC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090AD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090AD4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090AD8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090ADC: jal         0x80027464
    // 0x80090AE0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090AE0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090AE4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090AE8: b           L_80090AF0
    // 0x80090AEC: nop

        goto L_80090AF0;
    // 0x80090AEC: nop

L_80090AF0:
    // 0x80090AF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090AF8: jr          $ra
    // 0x80090AFC: nop

    return;
    // 0x80090AFC: nop

;}
RECOMP_FUNC void func_800D6C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D6C44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D6C48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D6C4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D6C50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D6C54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D6C58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D6C5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D6C60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D6C64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D6C68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D6C6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D6C70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D6C74: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800D6C78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D6C7C: bne         $t8, $at, L_800D6CF4
    if (ctx->r24 != ctx->r1) {
        // 0x800D6C80: nop
    
            goto L_800D6CF4;
    }
    // 0x800D6C80: nop

    // 0x800D6C84: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800D6C88: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800D6C8C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D6C90: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800D6C94: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D6C98: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D6C9C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D6CA0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D6CA4: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800D6CA8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D6CAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D6CB0: beq         $s0, $at, L_800D6CCC
    if (ctx->r16 == ctx->r1) {
        // 0x800D6CB4: nop
    
            goto L_800D6CCC;
    }
    // 0x800D6CB4: nop

    // 0x800D6CB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D6CBC: beq         $s0, $at, L_800D6CDC
    if (ctx->r16 == ctx->r1) {
        // 0x800D6CC0: nop
    
            goto L_800D6CDC;
    }
    // 0x800D6CC0: nop

    // 0x800D6CC4: b           L_800D6CEC
    // 0x800D6CC8: nop

        goto L_800D6CEC;
    // 0x800D6CC8: nop

L_800D6CCC:
    // 0x800D6CCC: jal         0x800D6684
    // 0x800D6CD0: nop

    func_800D6684(rdram, ctx);
        goto after_0;
    // 0x800D6CD0: nop

    after_0:
    // 0x800D6CD4: b           L_800D6CF4
    // 0x800D6CD8: nop

        goto L_800D6CF4;
    // 0x800D6CD8: nop

L_800D6CDC:
    // 0x800D6CDC: jal         0x800D6C14
    // 0x800D6CE0: nop

    func_800D6C14(rdram, ctx);
        goto after_1;
    // 0x800D6CE0: nop

    after_1:
    // 0x800D6CE4: b           L_800D6CF4
    // 0x800D6CE8: nop

        goto L_800D6CF4;
    // 0x800D6CE8: nop

L_800D6CEC:
    // 0x800D6CEC: b           L_800D6CF4
    // 0x800D6CF0: nop

        goto L_800D6CF4;
    // 0x800D6CF0: nop

L_800D6CF4:
    // 0x800D6CF4: b           L_800D6CFC
    // 0x800D6CF8: nop

        goto L_800D6CFC;
    // 0x800D6CF8: nop

L_800D6CFC:
    // 0x800D6CFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D6D00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D6D04: jr          $ra
    // 0x800D6D08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D6D08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800929D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800929D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800929D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800929D8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800929DC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800929E0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800929E4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800929E8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800929EC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800929F0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800929F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800929F8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800929FC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092A00: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092A04: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092A08: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092A0C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092A10: addiu       $a1, $a1, 0x172C
    ctx->r5 = ADD32(ctx->r5, 0X172C);
    // 0x80092A14: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092A18: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092A1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092A20: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092A24: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092A28: jal         0x80027464
    // 0x80092A2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092A2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092A30: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092A34: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80092A38: addiu       $t1, $t1, 0x6F3C
    ctx->r9 = ADD32(ctx->r9, 0X6F3C);
    // 0x80092A3C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092A40: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80092A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092A48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80092A4C: jal         0x8001C0EC
    // 0x80092A50: addiu       $a3, $zero, 0x27A
    ctx->r7 = ADD32(0, 0X27A);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80092A50: addiu       $a3, $zero, 0x27A
    ctx->r7 = ADD32(0, 0X27A);
    after_1:
    // 0x80092A54: b           L_80092A5C
    // 0x80092A58: nop

        goto L_80092A5C;
    // 0x80092A58: nop

L_80092A5C:
    // 0x80092A5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092A60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092A64: jr          $ra
    // 0x80092A68: nop

    return;
    // 0x80092A68: nop

;}
RECOMP_FUNC void func_800C1490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1490: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C1494: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800C1498: nop

    // 0x800C149C: bne         $t6, $zero, L_800C14D4
    if (ctx->r14 != 0) {
        // 0x800C14A0: nop
    
            goto L_800C14D4;
    }
    // 0x800C14A0: nop

    // 0x800C14A4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800C14A8: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800C14AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C14B0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800C14B4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C14B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C14BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C14C0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C14C4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C14C8: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x800C14CC: b           L_800C155C
    // 0x800C14D0: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800C155C;
    // 0x800C14D0: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800C14D4:
    // 0x800C14D4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C14D8: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800C14DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C14E0: bne         $t0, $at, L_800C155C
    if (ctx->r8 != ctx->r1) {
        // 0x800C14E4: nop
    
            goto L_800C155C;
    }
    // 0x800C14E4: nop

    // 0x800C14E8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800C14EC: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x800C14F0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800C14F4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800C14F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C14FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C1500: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C1504: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C1508: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800C150C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800C1510: lh          $t5, 0xB2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB2);
    // 0x800C1514: nop

    // 0x800C1518: bne         $t5, $zero, L_800C155C
    if (ctx->r13 != 0) {
        // 0x800C151C: nop
    
            goto L_800C155C;
    }
    // 0x800C151C: nop

    // 0x800C1520: lh          $t6, 0xA4($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XA4);
    // 0x800C1524: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C1528: bne         $t6, $at, L_800C155C
    if (ctx->r14 != ctx->r1) {
        // 0x800C152C: nop
    
            goto L_800C155C;
    }
    // 0x800C152C: nop

    // 0x800C1530: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800C1534: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800C1538: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C153C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800C1540: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C1544: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C1548: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C154C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C1550: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C1554: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x800C1558: sh          $t8, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r24;
L_800C155C:
    // 0x800C155C: jr          $ra
    // 0x800C1560: nop

    return;
    // 0x800C1560: nop

    // 0x800C1564: jr          $ra
    // 0x800C1568: nop

    return;
    // 0x800C1568: nop

;}
RECOMP_FUNC void func_800D88F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D88F4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800D88F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D88FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D8900: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D8904: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D8908: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D890C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D8910: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D8914: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D8918: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D891C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D8920: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800D8924: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800D8928: nop

    // 0x800D892C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D8930: nop

    // 0x800D8934: bne         $t1, $zero, L_800D8948
    if (ctx->r9 != 0) {
        // 0x800D8938: nop
    
            goto L_800D8948;
    }
    // 0x800D8938: nop

    // 0x800D893C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800D8940: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D8944: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800D8948:
    // 0x800D8948: b           L_800D8950
    // 0x800D894C: nop

        goto L_800D8950;
    // 0x800D894C: nop

L_800D8950:
    // 0x800D8950: jr          $ra
    // 0x800D8954: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800D8954: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F88B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F88B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800F88BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F88C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800F88C4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F88C8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F88CC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F88D0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F88D4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F88D8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F88DC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F88E0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F88E4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F88E8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F88EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F88F0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F88F4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F88F8: addiu       $a1, $a1, 0x37B4
    ctx->r5 = ADD32(ctx->r5, 0X37B4);
    // 0x800F88FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F8900: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F8904: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800F8908: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F890C: jal         0x80027464
    // 0x800F8910: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F8910: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800F8914: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800F8918: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800F891C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8920: beq         $t0, $at, L_800F8AA0
    if (ctx->r8 == ctx->r1) {
        // 0x800F8924: nop
    
            goto L_800F8AA0;
    }
    // 0x800F8924: nop

    // 0x800F8928: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800F892C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800F8930: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800F8934: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800F8938: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F893C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800F8940: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800F8944: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800F8948: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800F894C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x800F8950: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800F8954: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x800F8958: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F895C: lh          $t7, 0xA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA);
    // 0x800F8960: nop

    // 0x800F8964: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800F8968: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
L_800F896C:
    // 0x800F896C: lh          $t9, 0x2C($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2C);
    // 0x800F8970: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F8974: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800F8978: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x800F897C: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x800F8980: nop

    // 0x800F8984: sh          $t2, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r10;
    // 0x800F8988: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800F898C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8990: bne         $t3, $at, L_800F89A0
    if (ctx->r11 != ctx->r1) {
        // 0x800F8994: nop
    
            goto L_800F89A0;
    }
    // 0x800F8994: nop

    // 0x800F8998: b           L_800F8A80
    // 0x800F899C: nop

        goto L_800F8A80;
    // 0x800F899C: nop

L_800F89A0:
    // 0x800F89A0: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800F89A4: lw          $t4, 0x5100($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5100);
    // 0x800F89A8: nop

    // 0x800F89AC: lh          $t5, 0xA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA);
    // 0x800F89B0: nop

    // 0x800F89B4: bne         $t5, $zero, L_800F8A20
    if (ctx->r13 != 0) {
        // 0x800F89B8: nop
    
            goto L_800F8A20;
    }
    // 0x800F89B8: nop

    // 0x800F89BC: lh          $t7, 0x2C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2C);
    // 0x800F89C0: nop

    // 0x800F89C4: bne         $t7, $zero, L_800F89D4
    if (ctx->r15 != 0) {
        // 0x800F89C8: nop
    
            goto L_800F89D4;
    }
    // 0x800F89C8: nop

    // 0x800F89CC: b           L_800F89D8
    // 0x800F89D0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_800F89D8;
    // 0x800F89D0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_800F89D4:
    // 0x800F89D4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800F89D8:
    // 0x800F89D8: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x800F89DC: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x800F89E0: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x800F89E4: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x800F89E8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800F89EC: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800F89F0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F89F4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800F89F8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800F89FC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F8A00: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800F8A04: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800F8A08: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F8A0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8A10: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800F8A14: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800F8A18: b           L_800F8A80
    // 0x800F8A1C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
        goto L_800F8A80;
    // 0x800F8A1C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
L_800F8A20:
    // 0x800F8A20: lh          $t1, 0x2C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2C);
    // 0x800F8A24: nop

    // 0x800F8A28: bne         $t1, $zero, L_800F8A38
    if (ctx->r9 != 0) {
        // 0x800F8A2C: nop
    
            goto L_800F8A38;
    }
    // 0x800F8A2C: nop

    // 0x800F8A30: b           L_800F8A3C
    // 0x800F8A34: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_800F8A3C;
    // 0x800F8A34: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
L_800F8A38:
    // 0x800F8A38: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_800F8A3C:
    // 0x800F8A3C: sll         $t2, $s0, 4
    ctx->r10 = S32(ctx->r16 << 4);
    // 0x800F8A40: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x800F8A44: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800F8A48: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x800F8A4C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800F8A50: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F8A54: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800F8A58: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800F8A5C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F8A60: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800F8A64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F8A68: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F8A6C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F8A70: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F8A74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8A78: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F8A7C: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
L_800F8A80:
    // 0x800F8A80: lh          $t7, 0x2C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2C);
    // 0x800F8A84: nop

    // 0x800F8A88: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800F8A8C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800F8A90: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800F8A94: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x800F8A98: bne         $at, $zero, L_800F896C
    if (ctx->r1 != 0) {
        // 0x800F8A9C: sh          $t8, 0x2C($sp)
        MEM_H(0X2C, ctx->r29) = ctx->r24;
            goto L_800F896C;
    }
    // 0x800F8A9C: sh          $t8, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r24;
L_800F8AA0:
    // 0x800F8AA0: b           L_800F8AA8
    // 0x800F8AA4: nop

        goto L_800F8AA8;
    // 0x800F8AA4: nop

L_800F8AA8:
    // 0x800F8AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F8AAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800F8AB0: jr          $ra
    // 0x800F8AB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800F8AB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8008E8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E8A4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008E8A8: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008E8AC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008E8B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008E8B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008E8B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008E8BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008E8C0: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008E8C4: nop

    // 0x8008E8C8: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008E8CC: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008E8D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008E8D4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008E8D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008E8DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008E8E0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008E8E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008E8E8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008E8EC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008E8F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008E8F4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008E8F8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008E8FC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008E900: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008E904: swc1        $f10, 0x41B0($at)
    MEM_W(0X41B0, ctx->r1) = ctx->f10.u32l;
    // 0x8008E908: b           L_8008E910
    // 0x8008E90C: nop

        goto L_8008E910;
    // 0x8008E90C: nop

L_8008E910:
    // 0x8008E910: jr          $ra
    // 0x8008E914: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008E914: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800ED3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED3A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800ED3A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ED3AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ED3B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ED3B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ED3B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ED3BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED3C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ED3C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED3C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ED3CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ED3D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ED3D4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800ED3D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ED3DC: nop

    // 0x800ED3E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ED3E4: nop

    // 0x800ED3E8: bne         $t1, $zero, L_800ED428
    if (ctx->r9 != 0) {
        // 0x800ED3EC: nop
    
            goto L_800ED428;
    }
    // 0x800ED3EC: nop

    // 0x800ED3F0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800ED3F4: nop

    // 0x800ED3F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800ED3FC: nop

    // 0x800ED400: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800ED404: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800ED408: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800ED40C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800ED410: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800ED414: nop

    // 0x800ED418: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
    // 0x800ED41C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800ED420: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x800ED424: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_800ED428:
    // 0x800ED428: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800ED42C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800ED430: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x800ED434: nop

    // 0x800ED438: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800ED43C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800ED440: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800ED444: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800ED448: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800ED44C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800ED450: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x800ED454: nop

    // 0x800ED458: bne         $t1, $zero, L_800ED480
    if (ctx->r9 != 0) {
        // 0x800ED45C: nop
    
            goto L_800ED480;
    }
    // 0x800ED45C: nop

    // 0x800ED460: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ED464: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ED468: jal         0x8002B114
    // 0x800ED46C: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x800ED46C: nop

    after_0:
    // 0x800ED470: b           L_800ED9D8
    // 0x800ED474: nop

        goto L_800ED9D8;
    // 0x800ED474: nop

    // 0x800ED478: b           L_800ED9D0
    // 0x800ED47C: nop

        goto L_800ED9D0;
    // 0x800ED47C: nop

L_800ED480:
    // 0x800ED480: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ED484: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800ED488: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800ED48C: lwc1        $f6, 0x28($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800ED490: nop

    // 0x800ED494: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800ED498: swc1        $f10, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f10.u32l;
    // 0x800ED49C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800ED4A0: nop

    // 0x800ED4A4: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800ED4A8: nop

    // 0x800ED4AC: bne         $t2, $zero, L_800ED798
    if (ctx->r10 != 0) {
        // 0x800ED4B0: nop
    
            goto L_800ED798;
    }
    // 0x800ED4B0: nop

    // 0x800ED4B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800ED4B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ED4BC: lh          $t6, 0xC2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC2);
    // 0x800ED4C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ED4C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ED4C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED4CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ED4D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED4D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ED4D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ED4DC: lwc1        $f16, 0x24($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X24);
    // 0x800ED4E0: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800ED4E4: lui         $at, 0x4325
    ctx->r1 = S32(0X4325 << 16);
    // 0x800ED4E8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ED4EC: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800ED4F0: lwc1        $f16, 0x2C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800ED4F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800ED4F8: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800ED4FC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800ED500: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800ED504: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800ED508: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800ED50C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800ED510: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800ED514: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800ED518: addiu       $a1, $a1, 0x44EC
    ctx->r5 = ADD32(ctx->r5, 0X44EC);
    // 0x800ED51C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800ED520: jal         0x80027464
    // 0x800ED524: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x800ED524: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x800ED528: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800ED52C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800ED530: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800ED534: beq         $t0, $at, L_800ED790
    if (ctx->r8 == ctx->r1) {
        // 0x800ED538: nop
    
            goto L_800ED790;
    }
    // 0x800ED538: nop

    // 0x800ED53C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800ED540: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800ED544: lh          $a0, 0xC2($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XC2);
    // 0x800ED548: jal         0x80026F10
    // 0x800ED54C: nop

    func_80026F10(rdram, ctx);
        goto after_2;
    // 0x800ED54C: nop

    after_2:
    // 0x800ED550: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800ED554: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ED558: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800ED55C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800ED560: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800ED564: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800ED568: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x800ED56C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800ED570: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED574: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800ED578: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x800ED57C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800ED580: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800ED584: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800ED588: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800ED58C: nop

    // 0x800ED590: lh          $t9, 0xC0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC0);
    // 0x800ED594: nop

    // 0x800ED598: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800ED59C: sltiu       $at, $t0, 0x5
    ctx->r1 = ctx->r8 < 0X5 ? 1 : 0;
    // 0x800ED5A0: beq         $at, $zero, L_800ED790
    if (ctx->r1 == 0) {
        // 0x800ED5A4: nop
    
            goto L_800ED790;
    }
    // 0x800ED5A4: nop

    // 0x800ED5A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800ED5AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800ED5B0: addu        $at, $at, $t0
    gpr jr_addend_800ED5BC = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800ED5B4: lw          $t0, 0x55A0($at)
    ctx->r8 = ADD32(ctx->r1, 0X55A0);
    // 0x800ED5B8: nop

    // 0x800ED5BC: jr          $t0
    // 0x800ED5C0: nop

    switch (jr_addend_800ED5BC >> 2) {
        case 0: goto L_800ED5C4; break;
        case 1: goto L_800ED620; break;
        case 2: goto L_800ED67C; break;
        case 3: goto L_800ED6D8; break;
        case 4: goto L_800ED734; break;
        default: switch_error(__func__, 0x800ED5BC, 0x801155A0);
    }
    // 0x800ED5C0: nop

L_800ED5C4:
    // 0x800ED5C4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800ED5C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED5CC: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800ED5D0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800ED5D4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800ED5D8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800ED5DC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800ED5E0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800ED5E4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800ED5E8: sh          $t1, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r9;
    // 0x800ED5EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800ED5F0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800ED5F4: lh          $t6, 0xC2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC2);
    // 0x800ED5F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED5FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ED600: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED604: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ED608: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED60C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ED610: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800ED614: sh          $t4, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r12;
    // 0x800ED618: b           L_800ED790
    // 0x800ED61C: nop

        goto L_800ED790;
    // 0x800ED61C: nop

L_800ED620:
    // 0x800ED620: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800ED624: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED628: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800ED62C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800ED630: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800ED634: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800ED638: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800ED63C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800ED640: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800ED644: sh          $t8, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r24;
    // 0x800ED648: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800ED64C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800ED650: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x800ED654: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED658: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800ED65C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800ED660: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800ED664: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800ED668: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800ED66C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800ED670: sh          $t3, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = ctx->r11;
    // 0x800ED674: b           L_800ED790
    // 0x800ED678: nop

        goto L_800ED790;
    // 0x800ED678: nop

L_800ED67C:
    // 0x800ED67C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800ED680: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED684: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800ED688: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800ED68C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ED690: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800ED694: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ED698: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800ED69C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800ED6A0: sh          $t6, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r14;
    // 0x800ED6A4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800ED6A8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800ED6AC: lh          $t0, 0xC2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XC2);
    // 0x800ED6B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED6B4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800ED6B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800ED6BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800ED6C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800ED6C4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800ED6C8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800ED6CC: sh          $t9, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r25;
    // 0x800ED6D0: b           L_800ED790
    // 0x800ED6D4: nop

        goto L_800ED790;
    // 0x800ED6D4: nop

L_800ED6D8:
    // 0x800ED6D8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800ED6DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED6E0: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800ED6E4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800ED6E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800ED6EC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800ED6F0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800ED6F4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800ED6F8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800ED6FC: sh          $t2, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r10;
    // 0x800ED700: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800ED704: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800ED708: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x800ED70C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED710: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800ED714: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800ED718: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800ED71C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800ED720: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800ED724: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800ED728: sh          $t4, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r12;
    // 0x800ED72C: b           L_800ED790
    // 0x800ED730: nop

        goto L_800ED790;
    // 0x800ED730: nop

L_800ED734:
    // 0x800ED734: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800ED738: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED73C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800ED740: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800ED744: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800ED748: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800ED74C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800ED750: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800ED754: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800ED758: sh          $t0, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r8;
    // 0x800ED75C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800ED760: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800ED764: lh          $t5, 0xC2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XC2);
    // 0x800ED768: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED76C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800ED770: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800ED774: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800ED778: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800ED77C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800ED780: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800ED784: sh          $t3, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r11;
    // 0x800ED788: b           L_800ED790
    // 0x800ED78C: nop

        goto L_800ED790;
    // 0x800ED78C: nop

L_800ED790:
    // 0x800ED790: b           L_800ED7B0
    // 0x800ED794: nop

        goto L_800ED7B0;
    // 0x800ED794: nop

L_800ED798:
    // 0x800ED798: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800ED79C: nop

    // 0x800ED7A0: lh          $t4, 0xA6($t7)
    ctx->r12 = MEM_H(ctx->r15, 0XA6);
    // 0x800ED7A4: nop

    // 0x800ED7A8: addiu       $t8, $t4, -0x1
    ctx->r24 = ADD32(ctx->r12, -0X1);
    // 0x800ED7AC: sh          $t8, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r24;
L_800ED7B0:
    // 0x800ED7B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800ED7B4: nop

    // 0x800ED7B8: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800ED7BC: nop

    // 0x800ED7C0: slti        $at, $t0, -0xE
    ctx->r1 = SIGNED(ctx->r8) < -0XE ? 1 : 0;
    // 0x800ED7C4: beq         $at, $zero, L_800ED924
    if (ctx->r1 == 0) {
        // 0x800ED7C8: nop
    
            goto L_800ED924;
    }
    // 0x800ED7C8: nop

    // 0x800ED7CC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800ED7D0: nop

    // 0x800ED7D4: lh          $t2, 0xC0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC0);
    // 0x800ED7D8: nop

    // 0x800ED7DC: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x800ED7E0: sltiu       $at, $t5, 0x5
    ctx->r1 = ctx->r13 < 0X5 ? 1 : 0;
    // 0x800ED7E4: beq         $at, $zero, L_800ED90C
    if (ctx->r1 == 0) {
        // 0x800ED7E8: nop
    
            goto L_800ED90C;
    }
    // 0x800ED7E8: nop

    // 0x800ED7EC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800ED7F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800ED7F4: addu        $at, $at, $t5
    gpr jr_addend_800ED800 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800ED7F8: lw          $t5, 0x55B4($at)
    ctx->r13 = ADD32(ctx->r1, 0X55B4);
    // 0x800ED7FC: nop

    // 0x800ED800: jr          $t5
    // 0x800ED804: nop

    switch (jr_addend_800ED800 >> 2) {
        case 0: goto L_800ED808; break;
        case 1: goto L_800ED83C; break;
        case 2: goto L_800ED870; break;
        case 3: goto L_800ED8A4; break;
        case 4: goto L_800ED8D8; break;
        default: switch_error(__func__, 0x800ED800, 0x801155B4);
    }
    // 0x800ED804: nop

L_800ED808:
    // 0x800ED808: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ED80C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED810: lh          $t6, 0xC2($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XC2);
    // 0x800ED814: nop

    // 0x800ED818: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800ED81C: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800ED820: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800ED824: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800ED828: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800ED82C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800ED830: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
    // 0x800ED834: b           L_800ED90C
    // 0x800ED838: nop

        goto L_800ED90C;
    // 0x800ED838: nop

L_800ED83C:
    // 0x800ED83C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800ED840: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED844: lh          $t7, 0xC2($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XC2);
    // 0x800ED848: nop

    // 0x800ED84C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800ED850: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800ED854: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800ED858: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800ED85C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800ED860: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800ED864: sh          $zero, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = 0;
    // 0x800ED868: b           L_800ED90C
    // 0x800ED86C: nop

        goto L_800ED90C;
    // 0x800ED86C: nop

L_800ED870:
    // 0x800ED870: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ED874: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED878: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x800ED87C: nop

    // 0x800ED880: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800ED884: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800ED888: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800ED88C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800ED890: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800ED894: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800ED898: sh          $zero, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = 0;
    // 0x800ED89C: b           L_800ED90C
    // 0x800ED8A0: nop

        goto L_800ED90C;
    // 0x800ED8A0: nop

L_800ED8A4:
    // 0x800ED8A4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800ED8A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED8AC: lh          $t3, 0xC2($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XC2);
    // 0x800ED8B0: nop

    // 0x800ED8B4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x800ED8B8: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x800ED8BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800ED8C0: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x800ED8C4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800ED8C8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800ED8CC: sh          $zero, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = 0;
    // 0x800ED8D0: b           L_800ED90C
    // 0x800ED8D4: nop

        goto L_800ED90C;
    // 0x800ED8D4: nop

L_800ED8D8:
    // 0x800ED8D8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800ED8DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED8E0: lh          $t8, 0xC2($t4)
    ctx->r24 = MEM_H(ctx->r12, 0XC2);
    // 0x800ED8E4: nop

    // 0x800ED8E8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800ED8EC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800ED8F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ED8F4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800ED8F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ED8FC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800ED900: sh          $zero, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = 0;
    // 0x800ED904: b           L_800ED90C
    // 0x800ED908: nop

        goto L_800ED90C;
    // 0x800ED908: nop

L_800ED90C:
    // 0x800ED90C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ED910: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ED914: jal         0x8002B114
    // 0x800ED918: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x800ED918: nop

    after_3:
    // 0x800ED91C: b           L_800ED9D8
    // 0x800ED920: nop

        goto L_800ED9D8;
    // 0x800ED920: nop

L_800ED924:
    // 0x800ED924: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800ED928: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800ED92C: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x800ED930: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800ED934: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800ED938: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800ED93C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800ED940: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800ED944: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800ED948: addu        $t5, $t1, $t2
    ctx->r13 = ADD32(ctx->r9, ctx->r10);
    // 0x800ED94C: lwc1        $f8, 0x24($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X24);
    // 0x800ED950: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800ED954: nop

    // 0x800ED958: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800ED95C: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    // 0x800ED960: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ED964: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ED968: lh          $t6, 0xC2($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XC2);
    // 0x800ED96C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ED970: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800ED974: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800ED978: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800ED97C: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800ED980: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800ED984: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x800ED988: lwc1        $f18, 0x2C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800ED98C: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800ED990: nop

    // 0x800ED994: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800ED998: swc1        $f6, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f6.u32l;
    // 0x800ED99C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ED9A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ED9A4: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x800ED9A8: nop

    // 0x800ED9AC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800ED9B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800ED9B4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800ED9B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800ED9BC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800ED9C0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800ED9C4: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x800ED9C8: nop

    // 0x800ED9CC: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
L_800ED9D0:
    // 0x800ED9D0: b           L_800ED9D8
    // 0x800ED9D4: nop

        goto L_800ED9D8;
    // 0x800ED9D4: nop

L_800ED9D8:
    // 0x800ED9D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED9DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800ED9E0: jr          $ra
    // 0x800ED9E4: nop

    return;
    // 0x800ED9E4: nop

;}
RECOMP_FUNC void func_800FEB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FEB6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FEB70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FEB74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEB78: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEB7C: addiu       $a1, $a1, 0x43F4
    ctx->r5 = ADD32(ctx->r5, 0X43F4);
    // 0x800FEB80: jal         0x80036BE4
    // 0x800FEB84: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x800FEB84: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_0:
    // 0x800FEB88: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEB8C: jal         0x8005F9EC
    // 0x800FEB90: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_1;
    // 0x800FEB90: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800FEB94: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800FEB98: addiu       $t6, $t6, -0x5A48
    ctx->r14 = ADD32(ctx->r14, -0X5A48);
    // 0x800FEB9C: lbu         $a2, 0x0($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X0);
    // 0x800FEBA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEBA4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEBA8: addiu       $a1, $a1, 0x4404
    ctx->r5 = ADD32(ctx->r5, 0X4404);
    // 0x800FEBAC: jal         0x80036BE4
    // 0x800FEBB0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x800FEBB0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_2:
    // 0x800FEBB4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEBB8: jal         0x8005F9EC
    // 0x800FEBBC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_3;
    // 0x800FEBBC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x800FEBC0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800FEBC4: addiu       $t7, $t7, -0x5A48
    ctx->r15 = ADD32(ctx->r15, -0X5A48);
    // 0x800FEBC8: lbu         $a2, 0x1($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X1);
    // 0x800FEBCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEBD0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEBD4: addiu       $a1, $a1, 0x4418
    ctx->r5 = ADD32(ctx->r5, 0X4418);
    // 0x800FEBD8: jal         0x80036BE4
    // 0x800FEBDC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x800FEBDC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_4:
    // 0x800FEBE0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEBE4: jal         0x8005F9EC
    // 0x800FEBE8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    Debug_PrintXY(rdram, ctx);
        goto after_5;
    // 0x800FEBE8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_5:
    // 0x800FEBEC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800FEBF0: addiu       $t8, $t8, -0x5A48
    ctx->r24 = ADD32(ctx->r24, -0X5A48);
    // 0x800FEBF4: lbu         $a2, 0x2($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X2);
    // 0x800FEBF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEBFC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEC00: addiu       $a1, $a1, 0x442C
    ctx->r5 = ADD32(ctx->r5, 0X442C);
    // 0x800FEC04: jal         0x80036BE4
    // 0x800FEC08: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_6;
    // 0x800FEC08: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_6:
    // 0x800FEC0C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEC10: jal         0x8005F9EC
    // 0x800FEC14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_7;
    // 0x800FEC14: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_7:
    // 0x800FEC18: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800FEC1C: addiu       $t9, $t9, -0x5A48
    ctx->r25 = ADD32(ctx->r25, -0X5A48);
    // 0x800FEC20: lbu         $a2, 0x8($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X8);
    // 0x800FEC24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEC28: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEC2C: addiu       $a1, $a1, 0x4440
    ctx->r5 = ADD32(ctx->r5, 0X4440);
    // 0x800FEC30: jal         0x80036BE4
    // 0x800FEC34: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x800FEC34: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_8:
    // 0x800FEC38: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEC3C: jal         0x8005F9EC
    // 0x800FEC40: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    Debug_PrintXY(rdram, ctx);
        goto after_9;
    // 0x800FEC40: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_9:
    // 0x800FEC44: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800FEC48: addiu       $t0, $t0, -0x5A48
    ctx->r8 = ADD32(ctx->r8, -0X5A48);
    // 0x800FEC4C: lbu         $a2, 0x9($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X9);
    // 0x800FEC50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEC54: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEC58: addiu       $a1, $a1, 0x4454
    ctx->r5 = ADD32(ctx->r5, 0X4454);
    // 0x800FEC5C: jal         0x80036BE4
    // 0x800FEC60: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_10;
    // 0x800FEC60: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_10:
    // 0x800FEC64: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEC68: jal         0x8005F9EC
    // 0x800FEC6C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    Debug_PrintXY(rdram, ctx);
        goto after_11;
    // 0x800FEC6C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_11:
    // 0x800FEC70: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800FEC74: addiu       $t1, $t1, -0x5A48
    ctx->r9 = ADD32(ctx->r9, -0X5A48);
    // 0x800FEC78: lbu         $a2, 0xA($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0XA);
    // 0x800FEC7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEC80: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEC84: addiu       $a1, $a1, 0x4468
    ctx->r5 = ADD32(ctx->r5, 0X4468);
    // 0x800FEC88: jal         0x80036BE4
    // 0x800FEC8C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_12;
    // 0x800FEC8C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_12:
    // 0x800FEC90: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEC94: jal         0x8005F9EC
    // 0x800FEC98: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    Debug_PrintXY(rdram, ctx);
        goto after_13;
    // 0x800FEC98: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_13:
    // 0x800FEC9C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800FECA0: addiu       $t2, $t2, -0x5A48
    ctx->r10 = ADD32(ctx->r10, -0X5A48);
    // 0x800FECA4: lb          $a2, 0x10($t2)
    ctx->r6 = MEM_B(ctx->r10, 0X10);
    // 0x800FECA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FECAC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FECB0: addiu       $a1, $a1, 0x447C
    ctx->r5 = ADD32(ctx->r5, 0X447C);
    // 0x800FECB4: jal         0x80036BE4
    // 0x800FECB8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_14;
    // 0x800FECB8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_14:
    // 0x800FECBC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FECC0: jal         0x8005F9EC
    // 0x800FECC4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    Debug_PrintXY(rdram, ctx);
        goto after_15;
    // 0x800FECC4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_15:
    // 0x800FECC8: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x800FECCC: addiu       $t3, $t3, -0x5A48
    ctx->r11 = ADD32(ctx->r11, -0X5A48);
    // 0x800FECD0: lb          $a2, 0x11($t3)
    ctx->r6 = MEM_B(ctx->r11, 0X11);
    // 0x800FECD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FECD8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FECDC: addiu       $a1, $a1, 0x4490
    ctx->r5 = ADD32(ctx->r5, 0X4490);
    // 0x800FECE0: jal         0x80036BE4
    // 0x800FECE4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_16;
    // 0x800FECE4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_16:
    // 0x800FECE8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FECEC: jal         0x8005F9EC
    // 0x800FECF0: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    Debug_PrintXY(rdram, ctx);
        goto after_17;
    // 0x800FECF0: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    after_17:
    // 0x800FECF4: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800FECF8: addiu       $t4, $t4, -0x5A48
    ctx->r12 = ADD32(ctx->r12, -0X5A48);
    // 0x800FECFC: lb          $a2, 0x12($t4)
    ctx->r6 = MEM_B(ctx->r12, 0X12);
    // 0x800FED00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FED04: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FED08: addiu       $a1, $a1, 0x44A4
    ctx->r5 = ADD32(ctx->r5, 0X44A4);
    // 0x800FED0C: jal         0x80036BE4
    // 0x800FED10: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_18;
    // 0x800FED10: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_18:
    // 0x800FED14: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FED18: jal         0x8005F9EC
    // 0x800FED1C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    Debug_PrintXY(rdram, ctx);
        goto after_19;
    // 0x800FED1C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_19:
    // 0x800FED20: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800FED24: addiu       $t5, $t5, -0x5A48
    ctx->r13 = ADD32(ctx->r13, -0X5A48);
    // 0x800FED28: lb          $t6, 0x10($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X10);
    // 0x800FED2C: nop

    // 0x800FED30: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800FED34: nop

    // 0x800FED38: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FED3C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x800FED40: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800FED44: addiu       $t7, $t7, -0x5A48
    ctx->r15 = ADD32(ctx->r15, -0X5A48);
    // 0x800FED48: lb          $t8, 0x11($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X11);
    // 0x800FED4C: nop

    // 0x800FED50: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800FED54: nop

    // 0x800FED58: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FED5C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x800FED60: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800FED64: addiu       $t9, $t9, -0x5A48
    ctx->r25 = ADD32(ctx->r25, -0X5A48);
    // 0x800FED68: lb          $t0, 0x12($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X12);
    // 0x800FED6C: nop

    // 0x800FED70: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800FED74: nop

    // 0x800FED78: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FED7C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x800FED80: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800FED84: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800FED88: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x800FED8C: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800FED90: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x800FED94: nop

    // 0x800FED98: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x800FED9C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800FEDA0: jal         0x800366E0
    // 0x800FEDA4: add.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f4.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_20;
    // 0x800FEDA4: add.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f4.fl;
    after_20:
    // 0x800FEDA8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x800FEDAC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800FEDB0: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800FEDB4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800FEDB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FEDBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FEDC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEDC4: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FEDC8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEDCC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800FEDD0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800FEDD4: addiu       $a1, $a1, 0x44B8
    ctx->r5 = ADD32(ctx->r5, 0X44B8);
    // 0x800FEDD8: jal         0x80036BE4
    // 0x800FEDDC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_21;
    // 0x800FEDDC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_21:
    // 0x800FEDE0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEDE4: jal         0x8005F9EC
    // 0x800FEDE8: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    Debug_PrintXY(rdram, ctx);
        goto after_22;
    // 0x800FEDE8: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    after_22:
    // 0x800FEDEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEDF0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEDF4: addiu       $a1, $a1, 0x44CC
    ctx->r5 = ADD32(ctx->r5, 0X44CC);
    // 0x800FEDF8: jal         0x80036BE4
    // 0x800FEDFC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_23;
    // 0x800FEDFC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_23:
    // 0x800FEE00: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800FEE04: lh          $a1, -0x1C0C($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X1C0C);
    // 0x800FEE08: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x800FEE0C: sll         $t2, $a1, 4
    ctx->r10 = S32(ctx->r5 << 4);
    // 0x800FEE10: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x800FEE14: jal         0x8005F9EC
    // 0x800FEE18: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_24;
    // 0x800FEE18: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    after_24:
    // 0x800FEE1C: b           L_800FEE24
    // 0x800FEE20: nop

        goto L_800FEE24;
    // 0x800FEE20: nop

L_800FEE24:
    // 0x800FEE24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FEE28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FEE2C: jr          $ra
    // 0x800FEE30: nop

    return;
    // 0x800FEE30: nop

;}
RECOMP_FUNC void func_800B0628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B0628: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800B062C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800B0630: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B0634: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800B0638: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B063C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800B0640: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B0644: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800B0648: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800B064C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800B0650: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800B0654: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800B0658: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800B065C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B0660: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800B0664: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B0668: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B066C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B0670: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B0674: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B0678: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B067C: jr          $ra
    // 0x800B0680: nop

    return;
    // 0x800B0680: nop

    // 0x800B0684: jr          $ra
    // 0x800B0688: nop

    return;
    // 0x800B0688: nop

;}
RECOMP_FUNC void func_800BA934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA934: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BA938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA93C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BA940: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BA944: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BA948: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800BA94C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BA950: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA954: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BA958: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA95C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BA960: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800BA964: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800BA968: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BA96C: beq         $s0, $at, L_800BA988
    if (ctx->r16 == ctx->r1) {
        // 0x800BA970: nop
    
            goto L_800BA988;
    }
    // 0x800BA970: nop

    // 0x800BA974: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800BA978: beq         $s0, $at, L_800BA998
    if (ctx->r16 == ctx->r1) {
        // 0x800BA97C: nop
    
            goto L_800BA998;
    }
    // 0x800BA97C: nop

    // 0x800BA980: b           L_800BA9A8
    // 0x800BA984: nop

        goto L_800BA9A8;
    // 0x800BA984: nop

L_800BA988:
    // 0x800BA988: jal         0x800BA7C0
    // 0x800BA98C: nop

    func_800BA7C0(rdram, ctx);
        goto after_0;
    // 0x800BA98C: nop

    after_0:
    // 0x800BA990: b           L_800BA9B0
    // 0x800BA994: nop

        goto L_800BA9B0;
    // 0x800BA994: nop

L_800BA998:
    // 0x800BA998: jal         0x800BA904
    // 0x800BA99C: nop

    func_800BA904(rdram, ctx);
        goto after_1;
    // 0x800BA99C: nop

    after_1:
    // 0x800BA9A0: b           L_800BA9B0
    // 0x800BA9A4: nop

        goto L_800BA9B0;
    // 0x800BA9A4: nop

L_800BA9A8:
    // 0x800BA9A8: b           L_800BA9B0
    // 0x800BA9AC: nop

        goto L_800BA9B0;
    // 0x800BA9AC: nop

L_800BA9B0:
    // 0x800BA9B0: b           L_800BA9B8
    // 0x800BA9B4: nop

        goto L_800BA9B8;
    // 0x800BA9B4: nop

L_800BA9B8:
    // 0x800BA9B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA9BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BA9C0: jr          $ra
    // 0x800BA9C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BA9C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800682E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800682E0: addiu       $sp, $sp, -0x268
    ctx->r29 = ADD32(ctx->r29, -0X268);
    // 0x800682E4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x800682E8: sw          $a0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r4;
    // 0x800682EC: sw          $a1, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r5;
    // 0x800682F0: sw          $a2, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r6;
    // 0x800682F4: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x800682F8: lw          $t6, 0x268($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X268);
    // 0x800682FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80068300: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80068304: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80068308: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006830C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80068310: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80068314: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80068318: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8006831C: sw          $t9, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = ctx->r25;
    // 0x80068320: sw          $zero, 0x248($sp)
    MEM_W(0X248, ctx->r29) = 0;
L_80068324:
    // 0x80068324: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x80068328: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006832C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80068330: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80068334: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x80068338: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8006833C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80068340: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80068344: sh          $zero, 0x6610($at)
    MEM_H(0X6610, ctx->r1) = 0;
    // 0x80068348: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x8006834C: nop

    // 0x80068350: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80068354: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x80068358: bne         $at, $zero, L_80068324
    if (ctx->r1 != 0) {
        // 0x8006835C: sw          $t3, 0x248($sp)
        MEM_W(0X248, ctx->r29) = ctx->r11;
            goto L_80068324;
    }
    // 0x8006835C: sw          $t3, 0x248($sp)
    MEM_W(0X248, ctx->r29) = ctx->r11;
    // 0x80068360: sw          $zero, 0x248($sp)
    MEM_W(0X248, ctx->r29) = 0;
    // 0x80068364: addiu       $t4, $zero, 0xE
    ctx->r12 = ADD32(0, 0XE);
    // 0x80068368: sw          $t4, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r12;
L_8006836C:
    // 0x8006836C: lw          $t5, 0x264($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X264);
    // 0x80068370: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80068374: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80068378: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006837C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80068380: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80068384: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80068388: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006838C: lh          $t7, 0x41F4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F4);
    // 0x80068390: nop

    // 0x80068394: beq         $t7, $zero, L_80068C94
    if (ctx->r15 == 0) {
        // 0x80068398: nop
    
            goto L_80068C94;
    }
    // 0x80068398: nop

    // 0x8006839C: lw          $t8, 0x264($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X264);
    // 0x800683A0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800683A4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800683A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800683AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800683B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800683B4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800683B8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800683BC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800683C0: sw          $t1, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r9;
    // 0x800683C4: lw          $t2, 0x270($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X270);
    // 0x800683C8: nop

    // 0x800683CC: bne         $t2, $zero, L_80068440
    if (ctx->r10 != 0) {
        // 0x800683D0: nop
    
            goto L_80068440;
    }
    // 0x800683D0: nop

    // 0x800683D4: lw          $t3, 0x250($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X250);
    // 0x800683D8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800683DC: lh          $t4, 0xE4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE4);
    // 0x800683E0: nop

    // 0x800683E4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800683E8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800683EC: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x800683F0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800683F4: lbu         $t6, 0x4D90($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X4D90);
    // 0x800683F8: nop

    // 0x800683FC: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x80068400: beq         $t7, $zero, L_80068434
    if (ctx->r15 == 0) {
        // 0x80068404: nop
    
            goto L_80068434;
    }
    // 0x80068404: nop

    // 0x80068408: lw          $t8, 0x250($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X250);
    // 0x8006840C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80068410: lh          $t9, 0xE4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE4);
    // 0x80068414: nop

    // 0x80068418: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006841C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80068420: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x80068424: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80068428: lw          $t1, 0x4DB8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4DB8);
    // 0x8006842C: b           L_80068438
    // 0x80068430: sw          $t1, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r9;
        goto L_80068438;
    // 0x80068430: sw          $t1, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r9;
L_80068434:
    // 0x80068434: sw          $zero, 0x260($sp)
    MEM_W(0X260, ctx->r29) = 0;
L_80068438:
    // 0x80068438: b           L_800684A4
    // 0x8006843C: nop

        goto L_800684A4;
    // 0x8006843C: nop

L_80068440:
    // 0x80068440: lw          $t2, 0x250($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X250);
    // 0x80068444: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80068448: lh          $t3, 0xE4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE4);
    // 0x8006844C: nop

    // 0x80068450: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80068454: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80068458: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x8006845C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80068460: lbu         $t5, 0x4D90($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X4D90);
    // 0x80068464: nop

    // 0x80068468: andi        $t6, $t5, 0x8
    ctx->r14 = ctx->r13 & 0X8;
    // 0x8006846C: beq         $t6, $zero, L_800684A0
    if (ctx->r14 == 0) {
        // 0x80068470: nop
    
            goto L_800684A0;
    }
    // 0x80068470: nop

    // 0x80068474: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x80068478: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006847C: lh          $t8, 0xE4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE4);
    // 0x80068480: nop

    // 0x80068484: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80068488: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8006848C: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x80068490: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80068494: lw          $t0, 0x4DB8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4DB8);
    // 0x80068498: b           L_800684A4
    // 0x8006849C: sw          $t0, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r8;
        goto L_800684A4;
    // 0x8006849C: sw          $t0, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r8;
L_800684A0:
    // 0x800684A0: sw          $zero, 0x260($sp)
    MEM_W(0X260, ctx->r29) = 0;
L_800684A4:
    // 0x800684A4: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x800684A8: addiu       $at, $zero, 0x148
    ctx->r1 = ADD32(0, 0X148);
    // 0x800684AC: lh          $t2, 0xE4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE4);
    // 0x800684B0: nop

    // 0x800684B4: bne         $t2, $at, L_800684D4
    if (ctx->r10 != ctx->r1) {
        // 0x800684B8: nop
    
            goto L_800684D4;
    }
    // 0x800684B8: nop

    // 0x800684BC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x800684C0: lb          $t3, 0x5260($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X5260);
    // 0x800684C4: nop

    // 0x800684C8: beq         $t3, $zero, L_800684D4
    if (ctx->r11 == 0) {
        // 0x800684CC: nop
    
            goto L_800684D4;
    }
    // 0x800684CC: nop

    // 0x800684D0: sw          $zero, 0x260($sp)
    MEM_W(0X260, ctx->r29) = 0;
L_800684D4:
    // 0x800684D4: lw          $t4, 0x260($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X260);
    // 0x800684D8: nop

    // 0x800684DC: beq         $t4, $zero, L_80068C94
    if (ctx->r12 == 0) {
        // 0x800684E0: nop
    
            goto L_80068C94;
    }
    // 0x800684E0: nop

    // 0x800684E4: lw          $t5, 0x260($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X260);
    // 0x800684E8: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x800684EC: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x800684F0: lw          $t8, 0x24C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24C);
    // 0x800684F4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800684F8: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800684FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80068500: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80068504: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80068508: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8006850C: swc1        $f18, 0x25C($sp)
    MEM_W(0X25C, ctx->r29) = ctx->f18.u32l;
    // 0x80068510: lw          $t9, 0x260($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X260);
    // 0x80068514: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x80068518: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x8006851C: lw          $t2, 0x24C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24C);
    // 0x80068520: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80068524: lwc1        $f18, 0x26C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X26C);
    // 0x80068528: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006852C: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80068530: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80068534: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80068538: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8006853C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80068540: swc1        $f6, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->f6.u32l;
    // 0x80068544: lw          $t3, 0x260($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X260);
    // 0x80068548: lw          $t5, 0x250($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X250);
    // 0x8006854C: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x80068550: lw          $t6, 0x24C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24C);
    // 0x80068554: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80068558: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8006855C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80068560: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80068564: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80068568: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8006856C: swc1        $f6, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->f6.u32l;
    // 0x80068570: lw          $t7, 0x260($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X260);
    // 0x80068574: lwc1        $f8, 0x25C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X25C);
    // 0x80068578: lh          $t8, 0x6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X6);
    // 0x8006857C: mul.s       $f16, $f8, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80068580: nop

    // 0x80068584: multu       $t8, $t8
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80068588: lwc1        $f18, 0x258($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X258);
    // 0x8006858C: lwc1        $f6, 0x254($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X254);
    // 0x80068590: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80068594: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80068598: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8006859C: mflo        $t9
    ctx->r25 = lo;
    // 0x800685A0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800685A4: add.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800685A8: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800685AC: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x800685B0: nop

    // 0x800685B4: bc1f        L_80068C94
    if (!c1cs) {
        // 0x800685B8: nop
    
            goto L_80068C94;
    }
    // 0x800685B8: nop

    // 0x800685BC: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x800685C0: nop

    // 0x800685C4: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x800685C8: bne         $at, $zero, L_800685D8
    if (ctx->r1 != 0) {
        // 0x800685CC: nop
    
            goto L_800685D8;
    }
    // 0x800685CC: nop

    // 0x800685D0: b           L_80068CAC
    // 0x800685D4: nop

        goto L_80068CAC;
    // 0x800685D4: nop

L_800685D8:
    // 0x800685D8: lw          $t1, 0x260($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X260);
    // 0x800685DC: nop

    // 0x800685E0: addiu       $t2, $t1, 0xA
    ctx->r10 = ADD32(ctx->r9, 0XA);
    // 0x800685E4: sw          $t2, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r10;
    // 0x800685E8: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x800685EC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800685F0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800685F4: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800685F8: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x800685FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80068600: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80068604: addiu       $t5, $t5, 0x6610
    ctx->r13 = ADD32(ctx->r13, 0X6610);
    // 0x80068608: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8006860C: sw          $t6, 0x240($sp)
    MEM_W(0X240, ctx->r29) = ctx->r14;
    // 0x80068610: lw          $t7, 0x264($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X264);
    // 0x80068614: lw          $t8, 0x240($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X240);
    // 0x80068618: nop

    // 0x8006861C: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x80068620: sw          $zero, 0x244($sp)
    MEM_W(0X244, ctx->r29) = 0;
L_80068624:
    // 0x80068624: lw          $t0, 0x244($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X244);
    // 0x80068628: lw          $t9, 0x240($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X240);
    // 0x8006862C: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x80068630: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80068634: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x80068638: sw          $t3, 0x23C($sp)
    MEM_W(0X23C, ctx->r29) = ctx->r11;
    // 0x8006863C: lw          $t4, 0x244($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X244);
    // 0x80068640: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80068644: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80068648: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8006864C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80068650: addiu       $t6, $t6, 0x4F18
    ctx->r14 = ADD32(ctx->r14, 0X4F18);
    // 0x80068654: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80068658: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x8006865C: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80068660: lw          $t8, 0x260($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X260);
    // 0x80068664: lb          $t9, 0x0($t0)
    ctx->r25 = MEM_B(ctx->r8, 0X0);
    // 0x80068668: addiu       $t4, $sp, 0x21C
    ctx->r12 = ADD32(ctx->r29, 0X21C);
    // 0x8006866C: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x80068670: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80068674: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80068678: nop

    // 0x8006867C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80068680: nop

    // 0x80068684: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068688: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x8006868C: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x80068690: lw          $t5, 0x260($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X260);
    // 0x80068694: lb          $t7, 0x1($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X1);
    // 0x80068698: addiu       $t1, $sp, 0x20C
    ctx->r9 = ADD32(ctx->r29, 0X20C);
    // 0x8006869C: sll         $t0, $t7, 1
    ctx->r8 = S32(ctx->r15 << 1);
    // 0x800686A0: addu        $t9, $t5, $t0
    ctx->r25 = ADD32(ctx->r13, ctx->r8);
    // 0x800686A4: lh          $t8, 0x0($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X0);
    // 0x800686A8: nop

    // 0x800686AC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800686B0: nop

    // 0x800686B4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800686B8: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
    // 0x800686BC: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x800686C0: lw          $t2, 0x260($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X260);
    // 0x800686C4: lb          $t4, 0x2($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X2);
    // 0x800686C8: addiu       $t0, $sp, 0x1FC
    ctx->r8 = ADD32(ctx->r29, 0X1FC);
    // 0x800686CC: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x800686D0: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x800686D4: lh          $t5, 0x0($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X0);
    // 0x800686D8: nop

    // 0x800686DC: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x800686E0: nop

    // 0x800686E4: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800686E8: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x800686EC: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x800686F0: lw          $t9, 0x260($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X260);
    // 0x800686F4: lb          $t1, 0x3($t8)
    ctx->r9 = MEM_B(ctx->r24, 0X3);
    // 0x800686F8: addiu       $t6, $sp, 0x21C
    ctx->r14 = ADD32(ctx->r29, 0X21C);
    // 0x800686FC: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x80068700: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x80068704: lh          $t2, 0x0($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X0);
    // 0x80068708: nop

    // 0x8006870C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80068710: nop

    // 0x80068714: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068718: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x8006871C: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x80068720: lw          $t7, 0x260($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X260);
    // 0x80068724: lb          $t0, 0x4($t5)
    ctx->r8 = MEM_B(ctx->r13, 0X4);
    // 0x80068728: addiu       $t3, $sp, 0x20C
    ctx->r11 = ADD32(ctx->r29, 0X20C);
    // 0x8006872C: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x80068730: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x80068734: lh          $t9, 0x0($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X0);
    // 0x80068738: nop

    // 0x8006873C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80068740: nop

    // 0x80068744: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80068748: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
    // 0x8006874C: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x80068750: lw          $t4, 0x260($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X260);
    // 0x80068754: lb          $t6, 0x5($t2)
    ctx->r14 = MEM_B(ctx->r10, 0X5);
    // 0x80068758: addiu       $t8, $sp, 0x1FC
    ctx->r24 = ADD32(ctx->r29, 0X1FC);
    // 0x8006875C: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80068760: addu        $t0, $t4, $t5
    ctx->r8 = ADD32(ctx->r12, ctx->r13);
    // 0x80068764: lh          $t7, 0x0($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X0);
    // 0x80068768: nop

    // 0x8006876C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80068770: nop

    // 0x80068774: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80068778: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x8006877C: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x80068780: lw          $t1, 0x260($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X260);
    // 0x80068784: lb          $t3, 0x6($t9)
    ctx->r11 = MEM_B(ctx->r25, 0X6);
    // 0x80068788: addiu       $t5, $sp, 0x21C
    ctx->r13 = ADD32(ctx->r29, 0X21C);
    // 0x8006878C: sll         $t2, $t3, 1
    ctx->r10 = S32(ctx->r11 << 1);
    // 0x80068790: addu        $t6, $t1, $t2
    ctx->r14 = ADD32(ctx->r9, ctx->r10);
    // 0x80068794: lh          $t4, 0x0($t6)
    ctx->r12 = MEM_H(ctx->r14, 0X0);
    // 0x80068798: nop

    // 0x8006879C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x800687A0: nop

    // 0x800687A4: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800687A8: swc1        $f4, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f4.u32l;
    // 0x800687AC: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x800687B0: lw          $t0, 0x260($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X260);
    // 0x800687B4: lb          $t8, 0x7($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X7);
    // 0x800687B8: addiu       $t2, $sp, 0x20C
    ctx->r10 = ADD32(ctx->r29, 0X20C);
    // 0x800687BC: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800687C0: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x800687C4: lh          $t1, 0x0($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X0);
    // 0x800687C8: nop

    // 0x800687CC: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800687D0: nop

    // 0x800687D4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800687D8: swc1        $f16, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f16.u32l;
    // 0x800687DC: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x800687E0: lw          $t6, 0x260($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X260);
    // 0x800687E4: lb          $t5, 0x8($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X8);
    // 0x800687E8: addiu       $t9, $sp, 0x1FC
    ctx->r25 = ADD32(ctx->r29, 0X1FC);
    // 0x800687EC: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x800687F0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800687F4: lh          $t0, 0x0($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X0);
    // 0x800687F8: nop

    // 0x800687FC: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80068800: nop

    // 0x80068804: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80068808: swc1        $f10, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f10.u32l;
    // 0x8006880C: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x80068810: lw          $t3, 0x260($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X260);
    // 0x80068814: lb          $t2, 0x9($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X9);
    // 0x80068818: addiu       $t7, $sp, 0x21C
    ctx->r15 = ADD32(ctx->r29, 0X21C);
    // 0x8006881C: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x80068820: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80068824: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x80068828: nop

    // 0x8006882C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80068830: nop

    // 0x80068834: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068838: swc1        $f4, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f4.u32l;
    // 0x8006883C: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x80068840: lw          $t8, 0x260($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X260);
    // 0x80068844: lb          $t9, 0xA($t0)
    ctx->r25 = MEM_B(ctx->r8, 0XA);
    // 0x80068848: addiu       $t4, $sp, 0x20C
    ctx->r12 = ADD32(ctx->r29, 0X20C);
    // 0x8006884C: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x80068850: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80068854: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80068858: nop

    // 0x8006885C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80068860: nop

    // 0x80068864: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80068868: swc1        $f16, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f16.u32l;
    // 0x8006886C: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x80068870: lw          $t5, 0x260($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X260);
    // 0x80068874: lb          $t7, 0xB($t6)
    ctx->r15 = MEM_B(ctx->r14, 0XB);
    // 0x80068878: addiu       $t1, $sp, 0x1FC
    ctx->r9 = ADD32(ctx->r29, 0X1FC);
    // 0x8006887C: sll         $t0, $t7, 1
    ctx->r8 = S32(ctx->r15 << 1);
    // 0x80068880: addu        $t9, $t5, $t0
    ctx->r25 = ADD32(ctx->r13, ctx->r8);
    // 0x80068884: lh          $t8, 0x0($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X0);
    // 0x80068888: nop

    // 0x8006888C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80068890: nop

    // 0x80068894: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80068898: swc1        $f10, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f10.u32l;
    // 0x8006889C: jal         0x800361F0
    // 0x800688A0: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x800688A0: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    after_0:
    // 0x800688A4: lw          $t2, 0x250($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X250);
    // 0x800688A8: addiu       $a0, $sp, 0x1BC
    ctx->r4 = ADD32(ctx->r29, 0X1BC);
    // 0x800688AC: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x800688B0: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x800688B4: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x800688B8: jal         0x80037200
    // 0x800688BC: nop

    guTranslateF(rdram, ctx);
        goto after_1;
    // 0x800688BC: nop

    after_1:
    // 0x800688C0: lw          $t3, 0x250($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X250);
    // 0x800688C4: addiu       $a0, $sp, 0x17C
    ctx->r4 = ADD32(ctx->r29, 0X17C);
    // 0x800688C8: lw          $a1, 0xC($t3)
    ctx->r5 = MEM_W(ctx->r11, 0XC);
    // 0x800688CC: lw          $a2, 0x10($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X10);
    // 0x800688D0: lw          $a3, 0x14($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X14);
    // 0x800688D4: jal         0x80037490
    // 0x800688D8: nop

    guScaleF(rdram, ctx);
        goto after_2;
    // 0x800688D8: nop

    after_2:
    // 0x800688DC: lw          $t4, 0x250($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X250);
    // 0x800688E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800688E4: lw          $a1, 0x18($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X18);
    // 0x800688E8: addiu       $a0, $sp, 0x13C
    ctx->r4 = ADD32(ctx->r29, 0X13C);
    // 0x800688EC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x800688F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800688F4: jal         0x800372A0
    // 0x800688F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_3;
    // 0x800688F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800688FC: lw          $t6, 0x250($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X250);
    // 0x80068900: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80068904: lw          $a1, 0x1C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1C);
    // 0x80068908: addiu       $a0, $sp, 0xFC
    ctx->r4 = ADD32(ctx->r29, 0XFC);
    // 0x8006890C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80068910: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80068914: jal         0x800372A0
    // 0x80068918: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_4;
    // 0x80068918: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x8006891C: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x80068920: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80068924: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80068928: lw          $a1, 0x20($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X20);
    // 0x8006892C: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x80068930: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80068934: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80068938: jal         0x800372A0
    // 0x8006893C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    guRotateF(rdram, ctx);
        goto after_5;
    // 0x8006893C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80068940: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
L_80068944:
    // 0x80068944: lw          $t5, 0x264($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X264);
    // 0x80068948: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8006894C: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80068950: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x80068954: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80068958: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x8006895C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80068960: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80068964: addu        $t8, $t0, $t9
    ctx->r24 = ADD32(ctx->r8, ctx->r25);
    // 0x80068968: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x8006896C: lbu         $s0, 0x4286($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X4286);
    // 0x80068970: nop

    // 0x80068974: beq         $s0, $zero, L_8006899C
    if (ctx->r16 == 0) {
        // 0x80068978: nop
    
            goto L_8006899C;
    }
    // 0x80068978: nop

    // 0x8006897C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80068980: beq         $s0, $at, L_800689B8
    if (ctx->r16 == ctx->r1) {
        // 0x80068984: nop
    
            goto L_800689B8;
    }
    // 0x80068984: nop

    // 0x80068988: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006898C: beq         $s0, $at, L_800689D4
    if (ctx->r16 == ctx->r1) {
        // 0x80068990: nop
    
            goto L_800689D4;
    }
    // 0x80068990: nop

    // 0x80068994: b           L_800689F0
    // 0x80068998: nop

        goto L_800689F0;
    // 0x80068998: nop

L_8006899C:
    // 0x8006899C: addiu       $t1, $sp, 0x7C
    ctx->r9 = ADD32(ctx->r29, 0X7C);
    // 0x800689A0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800689A4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x800689A8: jal         0x80036400
    // 0x800689AC: addiu       $a1, $sp, 0x13C
    ctx->r5 = ADD32(ctx->r29, 0X13C);
    guMtxCatF(rdram, ctx);
        goto after_6;
    // 0x800689AC: addiu       $a1, $sp, 0x13C
    ctx->r5 = ADD32(ctx->r29, 0X13C);
    after_6:
    // 0x800689B0: b           L_800689F0
    // 0x800689B4: nop

        goto L_800689F0;
    // 0x800689B4: nop

L_800689B8:
    // 0x800689B8: addiu       $t2, $sp, 0x7C
    ctx->r10 = ADD32(ctx->r29, 0X7C);
    // 0x800689BC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800689C0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x800689C4: jal         0x80036400
    // 0x800689C8: addiu       $a1, $sp, 0xFC
    ctx->r5 = ADD32(ctx->r29, 0XFC);
    guMtxCatF(rdram, ctx);
        goto after_7;
    // 0x800689C8: addiu       $a1, $sp, 0xFC
    ctx->r5 = ADD32(ctx->r29, 0XFC);
    after_7:
    // 0x800689CC: b           L_800689F0
    // 0x800689D0: nop

        goto L_800689F0;
    // 0x800689D0: nop

L_800689D4:
    // 0x800689D4: addiu       $t3, $sp, 0x7C
    ctx->r11 = ADD32(ctx->r29, 0X7C);
    // 0x800689D8: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x800689DC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x800689E0: jal         0x80036400
    // 0x800689E4: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    guMtxCatF(rdram, ctx);
        goto after_8;
    // 0x800689E4: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    after_8:
    // 0x800689E8: b           L_800689F0
    // 0x800689EC: nop

        goto L_800689F0;
    // 0x800689EC: nop

L_800689F0:
    // 0x800689F0: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x800689F4: nop

    // 0x800689F8: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800689FC: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80068A00: bne         $at, $zero, L_80068944
    if (ctx->r1 != 0) {
        // 0x80068A04: sw          $t6, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r14;
            goto L_80068944;
    }
    // 0x80068A04: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x80068A08: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x80068A0C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80068A10: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80068A14: jal         0x80036400
    // 0x80068A18: addiu       $a1, $sp, 0x17C
    ctx->r5 = ADD32(ctx->r29, 0X17C);
    guMtxCatF(rdram, ctx);
        goto after_9;
    // 0x80068A18: addiu       $a1, $sp, 0x17C
    ctx->r5 = ADD32(ctx->r29, 0X17C);
    after_9:
    // 0x80068A1C: addiu       $t5, $sp, 0x7C
    ctx->r13 = ADD32(ctx->r29, 0X7C);
    // 0x80068A20: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80068A24: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80068A28: jal         0x80036400
    // 0x80068A2C: addiu       $a1, $sp, 0x1BC
    ctx->r5 = ADD32(ctx->r29, 0X1BC);
    guMtxCatF(rdram, ctx);
        goto after_10;
    // 0x80068A2C: addiu       $a1, $sp, 0x1BC
    ctx->r5 = ADD32(ctx->r29, 0X1BC);
    after_10:
    // 0x80068A30: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_80068A34:
    // 0x80068A34: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x80068A38: addiu       $t8, $sp, 0x21C
    ctx->r24 = ADD32(ctx->r29, 0X21C);
    // 0x80068A3C: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80068A40: addiu       $t2, $sp, 0x20C
    ctx->r10 = ADD32(ctx->r29, 0X20C);
    // 0x80068A44: addiu       $t4, $sp, 0x1FC
    ctx->r12 = ADD32(ctx->r29, 0X1FC);
    // 0x80068A48: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x80068A4C: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x80068A50: addu        $t1, $t9, $t8
    ctx->r9 = ADD32(ctx->r25, ctx->r24);
    // 0x80068A54: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80068A58: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80068A5C: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x80068A60: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80068A64: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80068A68: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80068A6C: jal         0x80036360
    // 0x80068A70: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    guMtxXFMF(rdram, ctx);
        goto after_11;
    // 0x80068A70: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    after_11:
    // 0x80068A74: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x80068A78: nop

    // 0x80068A7C: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x80068A80: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80068A84: bne         $at, $zero, L_80068A34
    if (ctx->r1 != 0) {
        // 0x80068A88: sw          $t5, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r13;
            goto L_80068A34;
    }
    // 0x80068A88: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
    // 0x80068A8C: addiu       $t2, $sp, 0x1FC
    ctx->r10 = ADD32(ctx->r29, 0X1FC);
    // 0x80068A90: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80068A94: addiu       $t0, $sp, 0x21C
    ctx->r8 = ADD32(ctx->r29, 0X21C);
    // 0x80068A98: addiu       $t8, $sp, 0x20C
    ctx->r24 = ADD32(ctx->r29, 0X20C);
    // 0x80068A9C: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80068AA0: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80068AA4: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80068AA8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80068AAC: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x80068AB0: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80068AB4: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x80068AB8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80068ABC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80068AC0: swc1        $f9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x80068AC4: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80068AC8: cvt.d.s     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f14.d = CVT_D_S(ctx->f18.fl);
    // 0x80068ACC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80068AD0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80068AD4: swc1        $f19, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x80068AD8: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80068ADC: addiu       $t9, $sp, 0x238
    ctx->r25 = ADD32(ctx->r29, 0X238);
    // 0x80068AE0: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80068AE4: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80068AE8: swc1        $f7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x80068AEC: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80068AF0: addiu       $t4, $sp, 0x234
    ctx->r12 = ADD32(ctx->r29, 0X234);
    // 0x80068AF4: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80068AF8: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80068AFC: swc1        $f9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x80068B00: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80068B04: addiu       $t1, $sp, 0x230
    ctx->r9 = ADD32(ctx->r29, 0X230);
    // 0x80068B08: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80068B0C: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80068B10: swc1        $f19, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x80068B14: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80068B18: addiu       $t3, $sp, 0x22C
    ctx->r11 = ADD32(ctx->r29, 0X22C);
    // 0x80068B1C: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80068B20: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80068B24: swc1        $f7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x80068B28: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x80068B2C: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x80068B30: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x80068B34: jal         0x80015944
    // 0x80068B38: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    func_80015944(rdram, ctx);
        goto after_12;
    // 0x80068B38: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    after_12:
    // 0x80068B3C: lw          $t6, 0x238($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X238);
    // 0x80068B40: lw          $t7, 0x23C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X23C);
    // 0x80068B44: nop

    // 0x80068B48: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x80068B4C: lw          $t5, 0x234($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X234);
    // 0x80068B50: lw          $t0, 0x23C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X23C);
    // 0x80068B54: nop

    // 0x80068B58: sw          $t5, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r13;
    // 0x80068B5C: lw          $t8, 0x230($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X230);
    // 0x80068B60: lw          $t2, 0x23C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X23C);
    // 0x80068B64: nop

    // 0x80068B68: sw          $t8, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r24;
    // 0x80068B6C: lw          $t9, 0x22C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X22C);
    // 0x80068B70: lw          $t4, 0x23C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X23C);
    // 0x80068B74: nop

    // 0x80068B78: sw          $t9, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->r25;
    // 0x80068B7C: addiu       $t1, $sp, 0x21C
    ctx->r9 = ADD32(ctx->r29, 0X21C);
    // 0x80068B80: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80068B84: lw          $t3, 0x23C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X23C);
    // 0x80068B88: nop

    // 0x80068B8C: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x80068B90: addiu       $t6, $sp, 0x20C
    ctx->r14 = ADD32(ctx->r29, 0X20C);
    // 0x80068B94: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80068B98: lw          $t7, 0x23C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X23C);
    // 0x80068B9C: nop

    // 0x80068BA0: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x80068BA4: addiu       $t5, $sp, 0x1FC
    ctx->r13 = ADD32(ctx->r29, 0X1FC);
    // 0x80068BA8: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80068BAC: lw          $t0, 0x23C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X23C);
    // 0x80068BB0: nop

    // 0x80068BB4: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
    // 0x80068BB8: addiu       $t8, $sp, 0x21C
    ctx->r24 = ADD32(ctx->r29, 0X21C);
    // 0x80068BBC: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80068BC0: lw          $t2, 0x23C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X23C);
    // 0x80068BC4: nop

    // 0x80068BC8: swc1        $f18, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f18.u32l;
    // 0x80068BCC: addiu       $t9, $sp, 0x20C
    ctx->r25 = ADD32(ctx->r29, 0X20C);
    // 0x80068BD0: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80068BD4: lw          $t4, 0x23C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X23C);
    // 0x80068BD8: nop

    // 0x80068BDC: swc1        $f10, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f10.u32l;
    // 0x80068BE0: addiu       $t1, $sp, 0x1FC
    ctx->r9 = ADD32(ctx->r29, 0X1FC);
    // 0x80068BE4: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80068BE8: lw          $t3, 0x23C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X23C);
    // 0x80068BEC: nop

    // 0x80068BF0: swc1        $f6, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f6.u32l;
    // 0x80068BF4: addiu       $t6, $sp, 0x21C
    ctx->r14 = ADD32(ctx->r29, 0X21C);
    // 0x80068BF8: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80068BFC: lw          $t7, 0x23C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X23C);
    // 0x80068C00: nop

    // 0x80068C04: swc1        $f4, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f4.u32l;
    // 0x80068C08: addiu       $t5, $sp, 0x20C
    ctx->r13 = ADD32(ctx->r29, 0X20C);
    // 0x80068C0C: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80068C10: lw          $t0, 0x23C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X23C);
    // 0x80068C14: nop

    // 0x80068C18: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x80068C1C: addiu       $t8, $sp, 0x1FC
    ctx->r24 = ADD32(ctx->r29, 0X1FC);
    // 0x80068C20: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80068C24: lw          $t2, 0x23C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X23C);
    // 0x80068C28: nop

    // 0x80068C2C: swc1        $f16, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f16.u32l;
    // 0x80068C30: addiu       $t9, $sp, 0x21C
    ctx->r25 = ADD32(ctx->r29, 0X21C);
    // 0x80068C34: lwc1        $f18, 0xC($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80068C38: lw          $t4, 0x23C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X23C);
    // 0x80068C3C: nop

    // 0x80068C40: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
    // 0x80068C44: addiu       $t1, $sp, 0x20C
    ctx->r9 = ADD32(ctx->r29, 0X20C);
    // 0x80068C48: lwc1        $f10, 0xC($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80068C4C: lw          $t3, 0x23C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X23C);
    // 0x80068C50: nop

    // 0x80068C54: swc1        $f10, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f10.u32l;
    // 0x80068C58: addiu       $t6, $sp, 0x1FC
    ctx->r14 = ADD32(ctx->r29, 0X1FC);
    // 0x80068C5C: lwc1        $f6, 0xC($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80068C60: lw          $t7, 0x23C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X23C);
    // 0x80068C64: nop

    // 0x80068C68: swc1        $f6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f6.u32l;
    // 0x80068C6C: lw          $t5, 0x244($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X244);
    // 0x80068C70: nop

    // 0x80068C74: addiu       $t0, $t5, 0x1
    ctx->r8 = ADD32(ctx->r13, 0X1);
    // 0x80068C78: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x80068C7C: bne         $at, $zero, L_80068624
    if (ctx->r1 != 0) {
        // 0x80068C80: sw          $t0, 0x244($sp)
        MEM_W(0X244, ctx->r29) = ctx->r8;
            goto L_80068624;
    }
    // 0x80068C80: sw          $t0, 0x244($sp)
    MEM_W(0X244, ctx->r29) = ctx->r8;
    // 0x80068C84: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x80068C88: nop

    // 0x80068C8C: addiu       $t2, $t8, 0x1
    ctx->r10 = ADD32(ctx->r24, 0X1);
    // 0x80068C90: sw          $t2, 0x248($sp)
    MEM_W(0X248, ctx->r29) = ctx->r10;
L_80068C94:
    // 0x80068C94: lw          $t9, 0x264($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X264);
    // 0x80068C98: nop

    // 0x80068C9C: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x80068CA0: slti        $at, $t4, 0x4E
    ctx->r1 = SIGNED(ctx->r12) < 0X4E ? 1 : 0;
    // 0x80068CA4: bne         $at, $zero, L_8006836C
    if (ctx->r1 != 0) {
        // 0x80068CA8: sw          $t4, 0x264($sp)
        MEM_W(0X264, ctx->r29) = ctx->r12;
            goto L_8006836C;
    }
    // 0x80068CA8: sw          $t4, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r12;
L_80068CAC:
    // 0x80068CAC: b           L_80068CB4
    // 0x80068CB0: nop

        goto L_80068CB4;
    // 0x80068CB0: nop

L_80068CB4:
    // 0x80068CB4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80068CB8: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80068CBC: jr          $ra
    // 0x80068CC0: addiu       $sp, $sp, 0x268
    ctx->r29 = ADD32(ctx->r29, 0X268);
    return;
    // 0x80068CC0: addiu       $sp, $sp, 0x268
    ctx->r29 = ADD32(ctx->r29, 0X268);
;}
RECOMP_FUNC void func_80099EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099EDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80099EE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80099EE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80099EE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099EEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099EF0: jal         0x8002AA94
    // 0x80099EF4: nop

    func_8002AA94(rdram, ctx);
        goto after_0;
    // 0x80099EF4: nop

    after_0:
    // 0x80099EF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80099EFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80099F00: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80099F04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80099F08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80099F0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80099F10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80099F14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80099F18: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80099F1C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80099F20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80099F24: beq         $s0, $at, L_80099F40
    if (ctx->r16 == ctx->r1) {
        // 0x80099F28: nop
    
            goto L_80099F40;
    }
    // 0x80099F28: nop

    // 0x80099F2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80099F30: beq         $s0, $at, L_80099F50
    if (ctx->r16 == ctx->r1) {
        // 0x80099F34: nop
    
            goto L_80099F50;
    }
    // 0x80099F34: nop

    // 0x80099F38: b           L_80099F60
    // 0x80099F3C: nop

        goto L_80099F60;
    // 0x80099F3C: nop

L_80099F40:
    // 0x80099F40: jal         0x80099454
    // 0x80099F44: nop

    func_80099454(rdram, ctx);
        goto after_1;
    // 0x80099F44: nop

    after_1:
    // 0x80099F48: b           L_80099F68
    // 0x80099F4C: nop

        goto L_80099F68;
    // 0x80099F4C: nop

L_80099F50:
    // 0x80099F50: jal         0x80099C4C
    // 0x80099F54: nop

    func_80099C4C(rdram, ctx);
        goto after_2;
    // 0x80099F54: nop

    after_2:
    // 0x80099F58: b           L_80099F68
    // 0x80099F5C: nop

        goto L_80099F68;
    // 0x80099F5C: nop

L_80099F60:
    // 0x80099F60: b           L_80099F68
    // 0x80099F64: nop

        goto L_80099F68;
    // 0x80099F64: nop

L_80099F68:
    // 0x80099F68: b           L_80099F70
    // 0x80099F6C: nop

        goto L_80099F70;
    // 0x80099F6C: nop

L_80099F70:
    // 0x80099F70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80099F74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80099F78: jr          $ra
    // 0x80099F7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80099F7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E4728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4728: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E472C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E4730: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E4734: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E4738: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E473C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E4740: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E4744: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E4748: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E474C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E4750: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E4754: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E4758: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E475C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E4760: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800E4764: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E4768: nop

    // 0x800E476C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E4770: nop

    // 0x800E4774: bne         $t1, $zero, L_800E4804
    if (ctx->r9 != 0) {
        // 0x800E4778: nop
    
            goto L_800E4804;
    }
    // 0x800E4778: nop

    // 0x800E477C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E4780: nop

    // 0x800E4784: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E4788: nop

    // 0x800E478C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E4790: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E4794: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E4798: nop

    // 0x800E479C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E47A0: nop

    // 0x800E47A4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E47A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E47AC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E47B0: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E47B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E47B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E47BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E47C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800E47C4: jal         0x8001C0EC
    // 0x800E47C8: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E47C8: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E47CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E47D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E47D4: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E47D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E47DC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E47E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E47E4: jal         0x8001ABF4
    // 0x800E47E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E47E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E47EC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E47F0: nop

    // 0x800E47F4: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800E47F8: nop

    // 0x800E47FC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800E4800: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_800E4804:
    // 0x800E4804: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4808: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E480C: jal         0x8002A8B4
    // 0x800E4810: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800E4810: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x800E4814: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E4818: nop

    // 0x800E481C: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800E4820: nop

    // 0x800E4824: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
    // 0x800E4828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E482C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4830: jal         0x8001B4AC
    // 0x800E4834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x800E4834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800E4838: beq         $v0, $zero, L_800E4990
    if (ctx->r2 == 0) {
        // 0x800E483C: nop
    
            goto L_800E4990;
    }
    // 0x800E483C: nop

    // 0x800E4840: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
    // 0x800E4844: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E4848: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E484C: nop

    // 0x800E4850: swc1        $f6, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f6.u32l;
    // 0x800E4854: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4858: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E485C: lui         $a1, 0x42A6
    ctx->r5 = S32(0X42A6 << 16);
    // 0x800E4860: jal         0x80029EF8
    // 0x800E4864: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x800E4864: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_4:
    // 0x800E4868: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E486C: nop

    // 0x800E4870: lwc1        $f8, 0x28($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800E4874: nop

    // 0x800E4878: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x800E487C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E4880: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E4884: nop

    // 0x800E4888: swc1        $f10, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f10.u32l;
    // 0x800E488C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4890: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4894: jal         0x80029C40
    // 0x800E4898: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800E4898: nop

    after_5:
    // 0x800E489C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E48A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E48A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E48A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E48AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E48B0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800E48B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E48B8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800E48BC: jal         0x80029018
    // 0x800E48C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800E48C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800E48C4: beq         $v0, $zero, L_800E48E4
    if (ctx->r2 == 0) {
        // 0x800E48C8: nop
    
            goto L_800E48E4;
    }
    // 0x800E48C8: nop

    // 0x800E48CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E48D0: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x800E48D4: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x800E48D8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E48DC: b           L_800E4940
    // 0x800E48E0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_800E4940;
    // 0x800E48E0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800E48E4:
    // 0x800E48E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E48E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E48EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E48F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E48F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E48F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E48FC: jal         0x80029F58
    // 0x800E4900: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80029F58(rdram, ctx);
        goto after_7;
    // 0x800E4900: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x800E4904: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E4908: bne         $v0, $at, L_800E4928
    if (ctx->r2 != ctx->r1) {
        // 0x800E490C: nop
    
            goto L_800E4928;
    }
    // 0x800E490C: nop

    // 0x800E4910: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E4914: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x800E4918: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E491C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E4920: b           L_800E4940
    // 0x800E4924: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_800E4940;
    // 0x800E4924: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800E4928:
    // 0x800E4928: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E492C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800E4930: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800E4934: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E4938: nop

    // 0x800E493C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E4940:
    // 0x800E4940: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800E4944: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E4948: nop

    // 0x800E494C: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
    // 0x800E4950: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E4954: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E4958: nop

    // 0x800E495C: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x800E4960: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E4964: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E4968: nop

    // 0x800E496C: swc1        $f10, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f10.u32l;
    // 0x800E4970: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E4974: nop

    // 0x800E4978: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800E497C: nop

    // 0x800E4980: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800E4984: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E4988: nop

    // 0x800E498C: swc1        $f20, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f20.u32l;
L_800E4990:
    // 0x800E4990: b           L_800E4998
    // 0x800E4994: nop

        goto L_800E4998;
    // 0x800E4994: nop

L_800E4998:
    // 0x800E4998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E499C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E49A0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E49A4: jr          $ra
    // 0x800E49A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800E49A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80085804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80085808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008580C: jal         0x80085424
    // 0x80085810: nop

    func_80085424(rdram, ctx);
        goto after_0;
    // 0x80085810: nop

    after_0:
    // 0x80085814: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80085818: lh          $t7, 0x5270($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X5270);
    // 0x8008581C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80085820: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80085824: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80085828: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008582C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80085830: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80085834: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80085838: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008583C: sh          $t6, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r14;
    // 0x80085840: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80085844: lh          $t0, 0x5270($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X5270);
    // 0x80085848: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008584C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80085850: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80085854: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80085858: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008585C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80085860: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80085864: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80085868: sh          $t9, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r25;
    // 0x8008586C: b           L_80085874
    // 0x80085870: nop

        goto L_80085874;
    // 0x80085870: nop

L_80085874:
    // 0x80085874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008587C: jr          $ra
    // 0x80085880: nop

    return;
    // 0x80085880: nop

;}
RECOMP_FUNC void func_800AB748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB748: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AB74C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AB750: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AB754: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AB758: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AB75C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AB760: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AB764: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AB768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AB76C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AB770: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AB774: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AB778: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AB77C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AB780: nop

    // 0x800AB784: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AB788: nop

    // 0x800AB78C: bne         $t1, $zero, L_800AB814
    if (ctx->r9 != 0) {
        // 0x800AB790: nop
    
            goto L_800AB814;
    }
    // 0x800AB790: nop

    // 0x800AB794: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AB798: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AB79C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AB7A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AB7A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AB7A8: nop

    // 0x800AB7AC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AB7B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AB7B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AB7B8: nop

    // 0x800AB7BC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AB7C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AB7C4: nop

    // 0x800AB7C8: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800AB7CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AB7D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AB7D4: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x800AB7D8: nop

    // 0x800AB7DC: bne         $t8, $at, L_800AB814
    if (ctx->r24 != ctx->r1) {
        // 0x800AB7E0: nop
    
            goto L_800AB814;
    }
    // 0x800AB7E0: nop

    // 0x800AB7E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AB7E8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800AB7EC: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
    // 0x800AB7F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB7F4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800AB7F8: addiu       $t1, $t1, 0x75D0
    ctx->r9 = ADD32(ctx->r9, 0X75D0);
    // 0x800AB7FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB800: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800AB804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB808: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800AB80C: jal         0x8001C0EC
    // 0x800AB810: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800AB810: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
L_800AB814:
    // 0x800AB814: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800AB818: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800AB81C: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x800AB820: nop

    // 0x800AB824: bne         $t3, $at, L_800AB874
    if (ctx->r11 != ctx->r1) {
        // 0x800AB828: nop
    
            goto L_800AB874;
    }
    // 0x800AB828: nop

    // 0x800AB82C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB834: jal         0x8001B44C
    // 0x800AB838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x800AB838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800AB83C: beq         $v0, $zero, L_800AB874
    if (ctx->r2 == 0) {
        // 0x800AB840: nop
    
            goto L_800AB874;
    }
    // 0x800AB840: nop

    // 0x800AB844: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AB848: nop

    // 0x800AB84C: sh          $zero, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = 0;
    // 0x800AB850: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB854: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800AB858: addiu       $t5, $t5, 0x75D0
    ctx->r13 = ADD32(ctx->r13, 0X75D0);
    // 0x800AB85C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB860: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800AB864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800AB86C: jal         0x8001C0EC
    // 0x800AB870: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800AB870: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_2:
L_800AB874:
    // 0x800AB874: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AB878: nop

    // 0x800AB87C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800AB880: nop

    // 0x800AB884: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800AB888: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x800AB88C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800AB890: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x800AB894: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800AB898: nop

    // 0x800AB89C: bne         $t0, $at, L_800AB8E4
    if (ctx->r8 != ctx->r1) {
        // 0x800AB8A0: nop
    
            goto L_800AB8E4;
    }
    // 0x800AB8A0: nop

    // 0x800AB8A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB8A8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800AB8AC: addiu       $t1, $t1, 0x75D0
    ctx->r9 = ADD32(ctx->r9, 0X75D0);
    // 0x800AB8B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB8B4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800AB8B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB8BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800AB8C0: jal         0x8001C0EC
    // 0x800AB8C4: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800AB8C4: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_3:
    // 0x800AB8C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB8CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB8D0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AB8D4: addiu       $a3, $a3, 0x7620
    ctx->r7 = ADD32(ctx->r7, 0X7620);
    // 0x800AB8D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AB8DC: jal         0x8001ABF4
    // 0x800AB8E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x800AB8E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_800AB8E4:
    // 0x800AB8E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800AB8E8: nop

    // 0x800AB8EC: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800AB8F0: nop

    // 0x800AB8F4: slti        $at, $t3, 0x78
    ctx->r1 = SIGNED(ctx->r11) < 0X78 ? 1 : 0;
    // 0x800AB8F8: bne         $at, $zero, L_800AB994
    if (ctx->r1 != 0) {
        // 0x800AB8FC: nop
    
            goto L_800AB994;
    }
    // 0x800AB8FC: nop

    // 0x800AB900: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AB904: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800AB908: lwc1        $f8, 0xC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800AB90C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800AB910: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800AB914: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800AB918: c.le.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d <= ctx->f10.d;
    // 0x800AB91C: nop

    // 0x800AB920: bc1f        L_800AB994
    if (!c1cs) {
        // 0x800AB924: nop
    
            goto L_800AB994;
    }
    // 0x800AB924: nop

    // 0x800AB928: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AB92C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AB930: lwc1        $f18, 0xC($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0XC);
    // 0x800AB934: lwc1        $f7, 0x4A78($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4A78);
    // 0x800AB938: lwc1        $f6, 0x4A7C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4A7C);
    // 0x800AB93C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800AB940: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x800AB944: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800AB948: swc1        $f10, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f10.u32l;
    // 0x800AB94C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AB950: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AB954: lwc1        $f16, 0x10($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X10);
    // 0x800AB958: lwc1        $f5, 0x4A80($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4A80);
    // 0x800AB95C: lwc1        $f4, 0x4A84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4A84);
    // 0x800AB960: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800AB964: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x800AB968: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800AB96C: swc1        $f8, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f8.u32l;
    // 0x800AB970: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AB974: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AB978: lwc1        $f10, 0x14($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X14);
    // 0x800AB97C: lwc1        $f19, 0x4A88($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4A88);
    // 0x800AB980: lwc1        $f18, 0x4A8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4A8C);
    // 0x800AB984: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800AB988: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x800AB98C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800AB990: swc1        $f6, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f6.u32l;
L_800AB994:
    // 0x800AB994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB998: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB99C: jal         0x80029C40
    // 0x800AB9A0: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800AB9A0: nop

    after_5:
    // 0x800AB9A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB9A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB9AC: jal         0x80029D04
    // 0x800AB9B0: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800AB9B0: nop

    after_6:
    // 0x800AB9B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB9B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB9BC: jal         0x80028FA0
    // 0x800AB9C0: nop

    func_80028FA0(rdram, ctx);
        goto after_7;
    // 0x800AB9C0: nop

    after_7:
    // 0x800AB9C4: beq         $v0, $zero, L_800AB9F0
    if (ctx->r2 == 0) {
        // 0x800AB9C8: nop
    
            goto L_800AB9F0;
    }
    // 0x800AB9C8: nop

    // 0x800AB9CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB9D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB9D4: jal         0x80029B60
    // 0x800AB9D8: nop

    func_80029B60(rdram, ctx);
        goto after_8;
    // 0x800AB9D8: nop

    after_8:
    // 0x800AB9DC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AB9E0: nop

    // 0x800AB9E4: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800AB9E8: nop

    // 0x800AB9EC: swc1        $f8, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f8.u32l;
L_800AB9F0:
    // 0x800AB9F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AB9F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AB9F8: jal         0x8002A1FC
    // 0x800AB9FC: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x800AB9FC: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_9:
    // 0x800ABA00: beq         $v0, $zero, L_800ABA20
    if (ctx->r2 == 0) {
        // 0x800ABA04: nop
    
            goto L_800ABA20;
    }
    // 0x800ABA04: nop

    // 0x800ABA08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ABA0C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800ABA10: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800ABA14: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800ABA18: nop

    // 0x800ABA1C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800ABA20:
    // 0x800ABA20: b           L_800ABA28
    // 0x800ABA24: nop

        goto L_800ABA28;
    // 0x800ABA24: nop

L_800ABA28:
    // 0x800ABA28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ABA2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800ABA30: jr          $ra
    // 0x800ABA34: nop

    return;
    // 0x800ABA34: nop

;}
RECOMP_FUNC void func_80069E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069E90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80069E94: lw          $t6, 0x78F4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X78F4);
    // 0x80069E98: nop

    // 0x80069E9C: bne         $t6, $zero, L_80069EAC
    if (ctx->r14 != 0) {
        // 0x80069EA0: nop
    
            goto L_80069EAC;
    }
    // 0x80069EA0: nop

    // 0x80069EA4: b           L_80069EFC
    // 0x80069EA8: nop

        goto L_80069EFC;
    // 0x80069EA8: nop

L_80069EAC:
    // 0x80069EAC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80069EB0: lw          $t7, 0x78F4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X78F4);
    // 0x80069EB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069EB8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80069EBC: sw          $t8, 0x78F4($at)
    MEM_W(0X78F4, ctx->r1) = ctx->r24;
    // 0x80069EC0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80069EC4: lw          $t9, 0x78F4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X78F4);
    // 0x80069EC8: nop

    // 0x80069ECC: beq         $t9, $zero, L_80069EDC
    if (ctx->r25 == 0) {
        // 0x80069ED0: nop
    
            goto L_80069EDC;
    }
    // 0x80069ED0: nop

    // 0x80069ED4: b           L_80069EFC
    // 0x80069ED8: nop

        goto L_80069EFC;
    // 0x80069ED8: nop

L_80069EDC:
    // 0x80069EDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80069EE0: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80069EE4: lw          $a1, 0x7904($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7904);
    // 0x80069EE8: lw          $a0, 0x78FC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78FC);
    // 0x80069EEC: jal         0x80069D88
    // 0x80069EF0: nop

    func_80069D88(rdram, ctx);
        goto after_0;
    // 0x80069EF0: nop

    after_0:
    // 0x80069EF4: b           L_80069EFC
    // 0x80069EF8: nop

        goto L_80069EFC;
    // 0x80069EF8: nop

L_80069EFC:
    // 0x80069EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80069F04: jr          $ra
    // 0x80069F08: nop

    return;
    // 0x80069F08: nop

;}
RECOMP_FUNC void func_80091E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091E3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091E40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091E44: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091E48: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091E4C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091E50: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091E54: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091E58: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091E5C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091E60: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091E64: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091E68: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091E6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091E70: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091E74: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091E78: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091E7C: addiu       $a1, $a1, 0x1630
    ctx->r5 = ADD32(ctx->r5, 0X1630);
    // 0x80091E80: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091E84: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091E88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091E8C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091E90: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091E94: jal         0x80027464
    // 0x80091E98: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091E98: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091E9C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091EA0: b           L_80091EA8
    // 0x80091EA4: nop

        goto L_80091EA8;
    // 0x80091EA4: nop

L_80091EA8:
    // 0x80091EA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091EAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091EB0: jr          $ra
    // 0x80091EB4: nop

    return;
    // 0x80091EB4: nop

;}
RECOMP_FUNC void Cutscene_HandleSpecialPrints(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089E48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80089E4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80089E50: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80089E54: lb          $t6, 0x4BF0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4BF0);
    // 0x80089E58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80089E5C: bne         $t6, $at, L_80089FAC
    if (ctx->r14 != ctx->r1) {
        // 0x80089E60: nop
    
            goto L_80089FAC;
    }
    // 0x80089E60: nop

    // 0x80089E64: addiu       $t7, $zero, 0x45
    ctx->r15 = ADD32(0, 0X45);
    // 0x80089E68: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x80089E6C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80089E70: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80089E74: jal         0x8006AA60
    // 0x80089E78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    Score_UpdateTimer(rdram, ctx);
        goto after_0;
    // 0x80089E78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x80089E7C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80089E80: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80089E84: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x80089E88: jal         0x80089D30
    // 0x80089E8C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    Cutscene_PrintWithLeadingZeros(rdram, ctx);
        goto after_1;
    // 0x80089E8C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x80089E90: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x80089E94: addiu       $t1, $zero, 0x1A
    ctx->r9 = ADD32(0, 0X1A);
    // 0x80089E98: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80089E9C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x80089EA0: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x80089EA4: bgez        $t8, L_80089EB8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80089EA8: andi        $a2, $t8, 0x1F
        ctx->r6 = ctx->r24 & 0X1F;
            goto L_80089EB8;
    }
    // 0x80089EA8: andi        $a2, $t8, 0x1F
    ctx->r6 = ctx->r24 & 0X1F;
    // 0x80089EAC: beq         $a2, $zero, L_80089EB8
    if (ctx->r6 == 0) {
        // 0x80089EB0: nop
    
            goto L_80089EB8;
    }
    // 0x80089EB0: nop

    // 0x80089EB4: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80089EB8:
    // 0x80089EB8: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x80089EBC: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80089EC0: bgez        $t8, L_80089ED0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80089EC4: sra         $a3, $t8, 5
        ctx->r7 = S32(SIGNED(ctx->r24) >> 5);
            goto L_80089ED0;
    }
    // 0x80089EC4: sra         $a3, $t8, 5
    ctx->r7 = S32(SIGNED(ctx->r24) >> 5);
    // 0x80089EC8: addiu       $at, $t8, 0x1F
    ctx->r1 = ADD32(ctx->r24, 0X1F);
    // 0x80089ECC: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_80089ED0:
    // 0x80089ED0: sll         $t0, $a3, 4
    ctx->r8 = S32(ctx->r7 << 4);
    // 0x80089ED4: jal         0x8008A870
    // 0x80089ED8: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    Cutscene_RenderChar(rdram, ctx);
        goto after_2;
    // 0x80089ED8: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    after_2:
    // 0x80089EDC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80089EE0: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    // 0x80089EE4: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x80089EE8: jal         0x80089D30
    // 0x80089EEC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    Cutscene_PrintWithLeadingZeros(rdram, ctx);
        goto after_3;
    // 0x80089EEC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_3:
    // 0x80089EF0: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x80089EF4: addiu       $t5, $zero, 0x1A
    ctx->r13 = ADD32(0, 0X1A);
    // 0x80089EF8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80089EFC: addiu       $a0, $zero, 0xE0
    ctx->r4 = ADD32(0, 0XE0);
    // 0x80089F00: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x80089F04: bgez        $t2, L_80089F18
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80089F08: andi        $a2, $t2, 0x1F
        ctx->r6 = ctx->r10 & 0X1F;
            goto L_80089F18;
    }
    // 0x80089F08: andi        $a2, $t2, 0x1F
    ctx->r6 = ctx->r10 & 0X1F;
    // 0x80089F0C: beq         $a2, $zero, L_80089F18
    if (ctx->r6 == 0) {
        // 0x80089F10: nop
    
            goto L_80089F18;
    }
    // 0x80089F10: nop

    // 0x80089F14: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80089F18:
    // 0x80089F18: sll         $t3, $a2, 3
    ctx->r11 = S32(ctx->r6 << 3);
    // 0x80089F1C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80089F20: bgez        $t2, L_80089F30
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80089F24: sra         $a3, $t2, 5
        ctx->r7 = S32(SIGNED(ctx->r10) >> 5);
            goto L_80089F30;
    }
    // 0x80089F24: sra         $a3, $t2, 5
    ctx->r7 = S32(SIGNED(ctx->r10) >> 5);
    // 0x80089F28: addiu       $at, $t2, 0x1F
    ctx->r1 = ADD32(ctx->r10, 0X1F);
    // 0x80089F2C: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_80089F30:
    // 0x80089F30: sll         $t4, $a3, 4
    ctx->r12 = S32(ctx->r7 << 4);
    // 0x80089F34: jal         0x8008A870
    // 0x80089F38: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    Cutscene_RenderChar(rdram, ctx);
        goto after_4;
    // 0x80089F38: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    after_4:
    // 0x80089F3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80089F40: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x80089F44: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x80089F48: jal         0x80089D30
    // 0x80089F4C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    Cutscene_PrintWithLeadingZeros(rdram, ctx);
        goto after_5;
    // 0x80089F4C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x80089F50: addiu       $t6, $zero, 0x3F
    ctx->r14 = ADD32(0, 0X3F);
    // 0x80089F54: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x80089F58: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80089F5C: addiu       $t0, $zero, 0x1A
    ctx->r8 = ADD32(0, 0X1A);
    // 0x80089F60: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80089F64: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    // 0x80089F68: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x80089F6C: bgez        $t7, L_80089F80
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80089F70: andi        $a2, $t7, 0x1F
        ctx->r6 = ctx->r15 & 0X1F;
            goto L_80089F80;
    }
    // 0x80089F70: andi        $a2, $t7, 0x1F
    ctx->r6 = ctx->r15 & 0X1F;
    // 0x80089F74: beq         $a2, $zero, L_80089F80
    if (ctx->r6 == 0) {
        // 0x80089F78: nop
    
            goto L_80089F80;
    }
    // 0x80089F78: nop

    // 0x80089F7C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80089F80:
    // 0x80089F80: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x80089F84: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80089F88: bgez        $t7, L_80089F98
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80089F8C: sra         $a3, $t7, 5
        ctx->r7 = S32(SIGNED(ctx->r15) >> 5);
            goto L_80089F98;
    }
    // 0x80089F8C: sra         $a3, $t7, 5
    ctx->r7 = S32(SIGNED(ctx->r15) >> 5);
    // 0x80089F90: addiu       $at, $t7, 0x1F
    ctx->r1 = ADD32(ctx->r15, 0X1F);
    // 0x80089F94: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_80089F98:
    // 0x80089F98: sll         $t8, $a3, 4
    ctx->r24 = S32(ctx->r7 << 4);
    // 0x80089F9C: jal         0x8008A870
    // 0x80089FA0: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    Cutscene_RenderChar(rdram, ctx);
        goto after_6;
    // 0x80089FA0: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    after_6:
    // 0x80089FA4: b           L_80089FE8
    // 0x80089FA8: nop

        goto L_80089FE8;
    // 0x80089FA8: nop

L_80089FAC:
    // 0x80089FAC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80089FB0: lb          $t1, 0x4BF0($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4BF0);
    // 0x80089FB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80089FB8: bne         $t1, $at, L_80089FE8
    if (ctx->r9 != ctx->r1) {
        // 0x80089FBC: nop
    
            goto L_80089FE8;
    }
    // 0x80089FBC: nop

    // 0x80089FC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80089FC4: lh          $a0, 0x7600($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7600);
    // 0x80089FC8: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x80089FCC: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x80089FD0: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80089FD4: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x80089FD8: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80089FDC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x80089FE0: jal         0x80089D30
    // 0x80089FE4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    Cutscene_PrintWithLeadingZeros(rdram, ctx);
        goto after_7;
    // 0x80089FE4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_7:
L_80089FE8:
    // 0x80089FE8: b           L_80089FF0
    // 0x80089FEC: nop

        goto L_80089FF0;
    // 0x80089FEC: nop

L_80089FF0:
    // 0x80089FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80089FF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80089FF8: jr          $ra
    // 0x80089FFC: nop

    return;
    // 0x80089FFC: nop

;}
RECOMP_FUNC void func_8007F834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F834: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007F838: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007F83C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8007F840: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8007F844: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007F848: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007F84C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007F850: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8007F854: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007F858: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007F85C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007F860: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007F864: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007F868: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007F86C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007F870: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007F874: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007F878: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007F87C: nop

    // 0x8007F880: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8007F884: nop

    // 0x8007F888: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x8007F88C: bne         $t2, $zero, L_8007F8B8
    if (ctx->r10 != 0) {
        // 0x8007F890: nop
    
            goto L_8007F8B8;
    }
    // 0x8007F890: nop

    // 0x8007F894: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8007F898: nop

    // 0x8007F89C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8007F8A0: nop

    // 0x8007F8A4: bgez        $t4, L_8007F8B4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8007F8A8: sra         $t5, $t4, 2
        ctx->r13 = S32(SIGNED(ctx->r12) >> 2);
            goto L_8007F8B4;
    }
    // 0x8007F8A8: sra         $t5, $t4, 2
    ctx->r13 = S32(SIGNED(ctx->r12) >> 2);
    // 0x8007F8AC: addiu       $at, $t4, 0x3
    ctx->r1 = ADD32(ctx->r12, 0X3);
    // 0x8007F8B0: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_8007F8B4:
    // 0x8007F8B4: sh          $t5, 0xC0($t3)
    MEM_H(0XC0, ctx->r11) = ctx->r13;
L_8007F8B8:
    // 0x8007F8B8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007F8BC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8007F8C0: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8007F8C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007F8C8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8007F8CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007F8D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007F8D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007F8D8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007F8DC: add.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8007F8E0: swc1        $f22, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f22.u32l;
    // 0x8007F8E4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8007F8E8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x8007F8EC: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x8007F8F0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8007F8F4: nop

    // 0x8007F8F8: swc1        $f20, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f20.u32l;
    // 0x8007F8FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007F900: nop

    // 0x8007F904: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8007F908: nop

    // 0x8007F90C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8007F910: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x8007F914: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8007F918: nop

    // 0x8007F91C: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x8007F920: nop

    // 0x8007F924: slti        $at, $t5, 0x20
    ctx->r1 = SIGNED(ctx->r13) < 0X20 ? 1 : 0;
    // 0x8007F928: bne         $at, $zero, L_8007F940
    if (ctx->r1 != 0) {
        // 0x8007F92C: nop
    
            goto L_8007F940;
    }
    // 0x8007F92C: nop

    // 0x8007F930: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007F934: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8007F938: jal         0x8001A928
    // 0x8007F93C: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007F93C: nop

    after_0:
L_8007F940:
    // 0x8007F940: b           L_8007F948
    // 0x8007F944: nop

        goto L_8007F948;
    // 0x8007F944: nop

L_8007F948:
    // 0x8007F948: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007F94C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007F950: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007F954: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007F958: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007F95C: jr          $ra
    // 0x8007F960: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007F960: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80065C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065C20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80065C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065C28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80065C2C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80065C30: lh          $t7, 0x7914($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7914);
    // 0x80065C34: lh          $t6, 0x7910($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7910);
    // 0x80065C38: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80065C3C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065C40: lh          $t9, 0x7918($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7918);
    // 0x80065C44: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80065C48: mflo        $t8
    ctx->r24 = lo;
    // 0x80065C4C: nop

    // 0x80065C50: nop

    // 0x80065C54: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065C58: mflo        $t0
    ctx->r8 = lo;
    // 0x80065C5C: blez        $t0, L_80065D70
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80065C60: nop
    
            goto L_80065D70;
    }
    // 0x80065C60: nop

L_80065C64:
    // 0x80065C64: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80065C68:
    // 0x80065C68: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80065C6C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80065C70: lw          $t1, 0x794C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X794C);
    // 0x80065C74: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80065C78: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x80065C7C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80065C80: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80065C84: lbu         $t7, 0xB($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XB);
    // 0x80065C88: nop

    // 0x80065C8C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80065C90: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80065C94: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80065C98: beq         $t8, $at, L_80065D0C
    if (ctx->r24 == ctx->r1) {
        // 0x80065C9C: nop
    
            goto L_80065D0C;
    }
    // 0x80065C9C: nop

    // 0x80065CA0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80065CA4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80065CA8: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80065CAC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80065CB0: lw          $t2, 0x2B08($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2B08);
    // 0x80065CB4: nop

    // 0x80065CB8: lh          $t1, 0x14($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X14);
    // 0x80065CBC: nop

    // 0x80065CC0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80065CC4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80065CC8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80065CCC: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80065CD0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80065CD4: lw          $t5, -0x3560($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3560);
    // 0x80065CD8: nop

    // 0x80065CDC: bne         $t5, $zero, L_80065D0C
    if (ctx->r13 != 0) {
        // 0x80065CE0: nop
    
            goto L_80065D0C;
    }
    // 0x80065CE0: nop

    // 0x80065CE4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80065CE8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80065CEC: addiu       $t8, $t8, 0x2B08
    ctx->r24 = ADD32(ctx->r24, 0X2B08);
    // 0x80065CF0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80065CF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80065CF8: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    // 0x80065CFC: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x80065D00: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80065D04: jal         0x8001EA68
    // 0x80065D08: nop

    DecompressFile(rdram, ctx);
        goto after_0;
    // 0x80065D08: nop

    after_0:
L_80065D0C:
    // 0x80065D0C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80065D10: nop

    // 0x80065D14: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80065D18: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80065D1C: bne         $at, $zero, L_80065C68
    if (ctx->r1 != 0) {
        // 0x80065D20: sw          $t2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r10;
            goto L_80065C68;
    }
    // 0x80065D20: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80065D24: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80065D28: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80065D2C: lh          $t5, 0x7914($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7914);
    // 0x80065D30: lh          $t4, 0x7910($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X7910);
    // 0x80065D34: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80065D38: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065D3C: lh          $t7, 0x7918($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7918);
    // 0x80065D40: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80065D44: nop

    // 0x80065D48: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80065D4C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80065D50: mflo        $t6
    ctx->r14 = lo;
    // 0x80065D54: nop

    // 0x80065D58: nop

    // 0x80065D5C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065D60: mflo        $t8
    ctx->r24 = lo;
    // 0x80065D64: slt         $at, $t3, $t8
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80065D68: bne         $at, $zero, L_80065C64
    if (ctx->r1 != 0) {
        // 0x80065D6C: nop
    
            goto L_80065C64;
    }
    // 0x80065D6C: nop

L_80065D70:
    // 0x80065D70: b           L_80065D78
    // 0x80065D74: nop

        goto L_80065D78;
    // 0x80065D74: nop

L_80065D78:
    // 0x80065D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80065D80: jr          $ra
    // 0x80065D84: nop

    return;
    // 0x80065D84: nop

;}
RECOMP_FUNC void func_800FC2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC2E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FC2E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC2EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FC2F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FC2F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FC2F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FC2FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FC300: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FC304: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FC308: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FC30C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FC310: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FC314: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800FC318: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC31C: nop

    // 0x800FC320: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FC324: nop

    // 0x800FC328: bne         $t1, $zero, L_800FC39C
    if (ctx->r9 != 0) {
        // 0x800FC32C: nop
    
            goto L_800FC39C;
    }
    // 0x800FC32C: nop

    // 0x800FC330: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC334: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FC338: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800FC33C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800FC340: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FC344: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC348: nop

    // 0x800FC34C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800FC350: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FC354: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC358: nop

    // 0x800FC35C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800FC360: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC364: nop

    // 0x800FC368: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800FC36C: nop

    // 0x800FC370: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800FC374: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800FC378: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800FC37C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800FC380: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800FC384: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FC388: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x800FC38C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800FC390: nop

    // 0x800FC394: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FC398: swc1        $f10, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f10.u32l;
L_800FC39C:
    // 0x800FC39C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC3A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC3A4: jal         0x80029C40
    // 0x800FC3A8: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800FC3A8: nop

    after_0:
    // 0x800FC3AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC3B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC3B4: jal         0x80029D04
    // 0x800FC3B8: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800FC3B8: nop

    after_1:
    // 0x800FC3BC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC3C0: nop

    // 0x800FC3C4: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x800FC3C8: nop

    // 0x800FC3CC: bne         $t0, $zero, L_800FC41C
    if (ctx->r8 != 0) {
        // 0x800FC3D0: nop
    
            goto L_800FC41C;
    }
    // 0x800FC3D0: nop

    // 0x800FC3D4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC3D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FC3DC: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x800FC3E0: nop

    // 0x800FC3E4: beq         $t2, $at, L_800FC41C
    if (ctx->r10 == ctx->r1) {
        // 0x800FC3E8: nop
    
            goto L_800FC41C;
    }
    // 0x800FC3E8: nop

    // 0x800FC3EC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC3F0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800FC3F4: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
    // 0x800FC3F8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC3FC: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800FC400: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800FC404: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC408: nop

    // 0x800FC40C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800FC410: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC414: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800FC418: sh          $t6, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r14;
L_800FC41C:
    // 0x800FC41C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC420: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC424: jal         0x8002A1FC
    // 0x800FC428: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800FC428: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_2:
    // 0x800FC42C: beq         $v0, $zero, L_800FC47C
    if (ctx->r2 == 0) {
        // 0x800FC430: nop
    
            goto L_800FC47C;
    }
    // 0x800FC430: nop

    // 0x800FC434: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC438: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FC43C: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x800FC440: nop

    // 0x800FC444: beq         $t1, $at, L_800FC47C
    if (ctx->r9 == ctx->r1) {
        // 0x800FC448: nop
    
            goto L_800FC47C;
    }
    // 0x800FC448: nop

    // 0x800FC44C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC450: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800FC454: sh          $t2, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r10;
    // 0x800FC458: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC45C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800FC460: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800FC464: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC468: nop

    // 0x800FC46C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800FC470: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC474: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800FC478: sh          $t8, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r24;
L_800FC47C:
    // 0x800FC47C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC480: nop

    // 0x800FC484: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800FC488: lwc1        $f4, 0x44($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X44);
    // 0x800FC48C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800FC490: nop

    // 0x800FC494: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FC498: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800FC49C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800FC4A0: nop

    // 0x800FC4A4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800FC4A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FC4AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FC4B0: nop

    // 0x800FC4B4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800FC4B8: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x800FC4BC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800FC4C0: sh          $t2, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r10;
    // 0x800FC4C4: nop

    // 0x800FC4C8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC4CC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800FC4D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FC4D4: lwc1        $f10, 0x54($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X54);
    // 0x800FC4D8: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800FC4DC: lwc1        $f6, 0x28($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800FC4E0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800FC4E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FC4E8: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x800FC4EC: nop

    // 0x800FC4F0: bc1f        L_800FC530
    if (!c1cs) {
        // 0x800FC4F4: nop
    
            goto L_800FC530;
    }
    // 0x800FC4F4: nop

    // 0x800FC4F8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC4FC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800FC500: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800FC504: lwc1        $f10, 0x54($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X54);
    // 0x800FC508: nop

    // 0x800FC50C: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800FC510: swc1        $f4, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f4.u32l;
    // 0x800FC514: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FC518: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC51C: nop

    // 0x800FC520: swc1        $f6, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f6.u32l;
    // 0x800FC524: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC528: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800FC52C: sb          $t7, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r15;
L_800FC530:
    // 0x800FC530: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC534: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800FC538: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FC53C: lwc1        $f18, 0x54($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X54);
    // 0x800FC540: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800FC544: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800FC548: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800FC54C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800FC550: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x800FC554: nop

    // 0x800FC558: bc1f        L_800FC598
    if (!c1cs) {
        // 0x800FC55C: nop
    
            goto L_800FC598;
    }
    // 0x800FC55C: nop

    // 0x800FC560: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC564: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800FC568: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FC56C: lwc1        $f18, 0x54($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X54);
    // 0x800FC570: nop

    // 0x800FC574: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800FC578: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
    // 0x800FC57C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FC580: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC584: nop

    // 0x800FC588: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x800FC58C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC590: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800FC594: sb          $t2, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r10;
L_800FC598:
    // 0x800FC598: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC59C: nop

    // 0x800FC5A0: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800FC5A4: nop

    // 0x800FC5A8: bgtz        $t4, L_800FC6A4
    if (SIGNED(ctx->r12) > 0) {
        // 0x800FC5AC: nop
    
            goto L_800FC6A4;
    }
    // 0x800FC5AC: nop

    // 0x800FC5B0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC5B4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800FC5B8: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800FC5BC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC5C0: nop

    // 0x800FC5C4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800FC5C8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC5CC: addiu       $t6, $zero, 0x258
    ctx->r14 = ADD32(0, 0X258);
    // 0x800FC5D0: sh          $t6, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r14;
    // 0x800FC5D4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC5D8: nop

    // 0x800FC5DC: sh          $zero, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = 0;
    // 0x800FC5E0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC5E4: nop

    // 0x800FC5E8: lh          $t9, 0xA8($t2)
    ctx->r25 = MEM_H(ctx->r10, 0XA8);
    // 0x800FC5EC: nop

    // 0x800FC5F0: addiu       $t3, $t9, 0x2
    ctx->r11 = ADD32(ctx->r25, 0X2);
    // 0x800FC5F4: bgez        $t3, L_800FC608
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800FC5F8: andi        $t4, $t3, 0x3
        ctx->r12 = ctx->r11 & 0X3;
            goto L_800FC608;
    }
    // 0x800FC5F8: andi        $t4, $t3, 0x3
    ctx->r12 = ctx->r11 & 0X3;
    // 0x800FC5FC: beq         $t4, $zero, L_800FC608
    if (ctx->r12 == 0) {
        // 0x800FC600: nop
    
            goto L_800FC608;
    }
    // 0x800FC600: nop

    // 0x800FC604: addiu       $t4, $t4, -0x4
    ctx->r12 = ADD32(ctx->r12, -0X4);
L_800FC608:
    // 0x800FC608: sh          $t4, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r12;
    // 0x800FC60C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC610: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC614: jal         0x8002A1FC
    // 0x800FC618: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x800FC618: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_3:
    // 0x800FC61C: bne         $v0, $zero, L_800FC664
    if (ctx->r2 != 0) {
        // 0x800FC620: nop
    
            goto L_800FC664;
    }
    // 0x800FC620: nop

    // 0x800FC624: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC628: nop

    // 0x800FC62C: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x800FC630: nop

    // 0x800FC634: bgez        $t7, L_800FC648
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800FC638: nop
    
            goto L_800FC648;
    }
    // 0x800FC638: nop

    // 0x800FC63C: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x800FC640: b           L_800FC65C
    // 0x800FC644: sh          $t8, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r24;
        goto L_800FC65C;
    // 0x800FC644: sh          $t8, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r24;
L_800FC648:
    // 0x800FC648: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC64C: nop

    // 0x800FC650: lh          $t0, 0xAA($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XAA);
    // 0x800FC654: nop

    // 0x800FC658: sh          $t0, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r8;
L_800FC65C:
    // 0x800FC65C: b           L_800FC6A4
    // 0x800FC660: nop

        goto L_800FC6A4;
    // 0x800FC660: nop

L_800FC664:
    // 0x800FC664: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC668: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FC66C: lh          $t9, 0xAA($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XAA);
    // 0x800FC670: nop

    // 0x800FC674: beq         $t9, $at, L_800FC68C
    if (ctx->r25 == ctx->r1) {
        // 0x800FC678: nop
    
            goto L_800FC68C;
    }
    // 0x800FC678: nop

    // 0x800FC67C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC680: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800FC684: b           L_800FC6A4
    // 0x800FC688: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
        goto L_800FC6A4;
    // 0x800FC688: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
L_800FC68C:
    // 0x800FC68C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC690: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FC694: sh          $t2, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r10;
    // 0x800FC698: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC69C: nop

    // 0x800FC6A0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800FC6A4:
    // 0x800FC6A4: b           L_800FC6AC
    // 0x800FC6A8: nop

        goto L_800FC6AC;
    // 0x800FC6A8: nop

L_800FC6AC:
    // 0x800FC6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC6B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FC6B4: jr          $ra
    // 0x800FC6B8: nop

    return;
    // 0x800FC6B8: nop

;}
RECOMP_FUNC void func_800A0A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0A08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A0A0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A0A10: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A0A14: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A0A18: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A0A1C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A0A20: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A0A24: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A0A28: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A0A2C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A0A30: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A0A34: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A0A38: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A0A3C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A0A40: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A0A44: addiu       $a1, $a1, 0x3448
    ctx->r5 = ADD32(ctx->r5, 0X3448);
    // 0x800A0A48: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A0A4C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A0A50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A0A54: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A0A58: jal         0x80027464
    // 0x800A0A5C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A0A5C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800A0A60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800A0A64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A0A68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A0A6C: beq         $t0, $at, L_800A0D24
    if (ctx->r8 == ctx->r1) {
        // 0x800A0A70: nop
    
            goto L_800A0D24;
    }
    // 0x800A0A70: nop

    // 0x800A0A74: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A0A78: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800A0A7C: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800A0A80: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800A0A84: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x800A0A88: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A0A8C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A0A90: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A0A94: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x800A0A98: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800A0A9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0AA0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800A0AA4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A0AA8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800A0AAC: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x800A0AB0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800A0AB4: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800A0AB8: nop

    // 0x800A0ABC: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x800A0AC0: nop

    // 0x800A0AC4: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800A0AC8: beq         $at, $zero, L_800A0B40
    if (ctx->r1 == 0) {
        // 0x800A0ACC: nop
    
            goto L_800A0B40;
    }
    // 0x800A0ACC: nop

    // 0x800A0AD0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A0AD4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A0AD8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800A0ADC: lh          $t9, 0xC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XC);
    // 0x800A0AE0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A0AE4: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800A0AE8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A0AEC: lh          $t1, 0x48C0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X48C0);
    // 0x800A0AF0: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A0AF4: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800A0AF8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A0AFC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A0B00: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800A0B04: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A0B08: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A0B0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0B10: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A0B14: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x800A0B18: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A0B1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0B20: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800A0B24: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800A0B28: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A0B2C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800A0B30: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800A0B34: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800A0B38: b           L_800A0BFC
    // 0x800A0B3C: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
        goto L_800A0BFC;
    // 0x800A0B3C: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
L_800A0B40:
    // 0x800A0B40: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800A0B44: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800A0B48: nop

    // 0x800A0B4C: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x800A0B50: nop

    // 0x800A0B54: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x800A0B58: beq         $at, $zero, L_800A0BD4
    if (ctx->r1 == 0) {
        // 0x800A0B5C: nop
    
            goto L_800A0BD4;
    }
    // 0x800A0B5C: nop

    // 0x800A0B60: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A0B64: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A0B68: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800A0B6C: lh          $t9, 0xC($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XC);
    // 0x800A0B70: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A0B74: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800A0B78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A0B7C: lh          $t1, 0x48C0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X48C0);
    // 0x800A0B80: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A0B84: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800A0B88: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A0B8C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A0B90: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A0B94: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A0B98: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A0B9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0BA0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A0BA4: swc1        $f8, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f8.u32l;
    // 0x800A0BA8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A0BAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0BB0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A0BB4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A0BB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A0BBC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A0BC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A0BC4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A0BC8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800A0BCC: b           L_800A0BFC
    // 0x800A0BD0: sh          $t3, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r11;
        goto L_800A0BFC;
    // 0x800A0BD0: sh          $t3, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r11;
L_800A0BD4:
    // 0x800A0BD4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A0BD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0BDC: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800A0BE0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800A0BE4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A0BE8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800A0BEC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A0BF0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A0BF4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800A0BF8: sh          $t8, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r24;
L_800A0BFC:
    // 0x800A0BFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A0C00: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800A0C04: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A0C08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A0C0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A0C10: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A0C14: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A0C18: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800A0C1C: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x800A0C20: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800A0C24: nop

    // 0x800A0C28: sh          $t5, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r13;
    // 0x800A0C2C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A0C30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0C34: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x800A0C38: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x800A0C3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A0C40: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x800A0C44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A0C48: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A0C4C: lwc1        $f12, 0x418C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x800A0C50: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A0C54: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0C58: jal         0x80015538
    // 0x800A0C5C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800A0C5C: nop

    after_1:
    // 0x800A0C60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A0C64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0C68: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800A0C6C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800A0C70: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A0C74: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800A0C78: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A0C7C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A0C80: swc1        $f0, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f0.u32l;
    // 0x800A0C84: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A0C88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0C8C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800A0C90: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A0C94: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A0C98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A0C9C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800A0CA0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A0CA4: lwc1        $f12, 0x4190($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x800A0CA8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A0CAC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A0CB0: jal         0x80015538
    // 0x800A0CB4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800A0CB4: nop

    after_2:
    // 0x800A0CB8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A0CBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0CC0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800A0CC4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800A0CC8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800A0CCC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800A0CD0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800A0CD4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800A0CD8: swc1        $f0, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f0.u32l;
    // 0x800A0CDC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A0CE0: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800A0CE4: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x800A0CE8: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x800A0CEC: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x800A0CF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A0CF4: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x800A0CF8: lh          $t4, 0xE($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XE);
    // 0x800A0CFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A0D00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0D04: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A0D08: sh          $t4, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r12;
    // 0x800A0D0C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A0D10: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800A0D14: addiu       $a3, $a3, -0x46D4
    ctx->r7 = ADD32(ctx->r7, -0X46D4);
    // 0x800A0D18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A0D1C: jal         0x8001ABF4
    // 0x800A0D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800A0D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800A0D24:
    // 0x800A0D24: b           L_800A0D2C
    // 0x800A0D28: nop

        goto L_800A0D2C;
    // 0x800A0D28: nop

L_800A0D2C:
    // 0x800A0D2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0D30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A0D34: jr          $ra
    // 0x800A0D38: nop

    return;
    // 0x800A0D38: nop

;}
RECOMP_FUNC void func_800D1764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1764: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D1768: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D176C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D1770: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D1774: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D1778: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D177C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D1780: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1784: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D1788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D178C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D1790: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D1794: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D1798: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D179C: beq         $s0, $at, L_800D17B8
    if (ctx->r16 == ctx->r1) {
        // 0x800D17A0: nop
    
            goto L_800D17B8;
    }
    // 0x800D17A0: nop

    // 0x800D17A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D17A8: beq         $s0, $at, L_800D17C8
    if (ctx->r16 == ctx->r1) {
        // 0x800D17AC: nop
    
            goto L_800D17C8;
    }
    // 0x800D17AC: nop

    // 0x800D17B0: b           L_800D17D8
    // 0x800D17B4: nop

        goto L_800D17D8;
    // 0x800D17B4: nop

L_800D17B8:
    // 0x800D17B8: jal         0x800D13D0
    // 0x800D17BC: nop

    func_800D13D0(rdram, ctx);
        goto after_0;
    // 0x800D17BC: nop

    after_0:
    // 0x800D17C0: b           L_800D17E0
    // 0x800D17C4: nop

        goto L_800D17E0;
    // 0x800D17C4: nop

L_800D17C8:
    // 0x800D17C8: jal         0x800D14A8
    // 0x800D17CC: nop

    func_800D14A8(rdram, ctx);
        goto after_1;
    // 0x800D17CC: nop

    after_1:
    // 0x800D17D0: b           L_800D17E0
    // 0x800D17D4: nop

        goto L_800D17E0;
    // 0x800D17D4: nop

L_800D17D8:
    // 0x800D17D8: b           L_800D17E0
    // 0x800D17DC: nop

        goto L_800D17E0;
    // 0x800D17DC: nop

L_800D17E0:
    // 0x800D17E0: b           L_800D17E8
    // 0x800D17E4: nop

        goto L_800D17E8;
    // 0x800D17E4: nop

L_800D17E8:
    // 0x800D17E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D17EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D17F0: jr          $ra
    // 0x800D17F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D17F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800CC6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC6D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CC6DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CC6E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800CC6E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CC6E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CC6EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CC6F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CC6F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CC6F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CC6FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CC700: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CC704: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CC708: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CC70C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800CC710: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CC714: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CC718: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800CC71C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CC720: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CC724: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CC728: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CC72C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CC730: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC734: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800CC738: nop

    // 0x800CC73C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x800CC740: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800CC744: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800CC748: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800CC74C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CC750: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC754: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CC758: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC75C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CC760: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CC764: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800CC768: nop

    // 0x800CC76C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x800CC770: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CC774: nop

    // 0x800CC778: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800CC77C: nop

    // 0x800CC780: bne         $t7, $zero, L_800CC7F4
    if (ctx->r15 != 0) {
        // 0x800CC784: nop
    
            goto L_800CC7F4;
    }
    // 0x800CC784: nop

    // 0x800CC788: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800CC78C: nop

    // 0x800CC790: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800CC794: nop

    // 0x800CC798: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800CC79C: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800CC7A0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CC7A4: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x800CC7A8: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x800CC7AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC7B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC7B4: jal         0x800281A4
    // 0x800CC7B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800CC7B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800CC7BC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CC7C0: jal         0x8002B0E4
    // 0x800CC7C4: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800CC7C4: nop

    after_1:
    // 0x800CC7C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC7CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC7D0: jal         0x80017B3C
    // 0x800CC7D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80017B3C(rdram, ctx);
        goto after_2;
    // 0x800CC7D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800CC7D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC7DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC7E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CC7E4: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    // 0x800CC7E8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800CC7EC: jal         0x800175F0
    // 0x800CC7F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x800CC7F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_800CC7F4:
    // 0x800CC7F4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800CC7F8: nop

    // 0x800CC7FC: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x800CC800: nop

    // 0x800CC804: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x800CC808: bne         $at, $zero, L_800CC998
    if (ctx->r1 != 0) {
        // 0x800CC80C: nop
    
            goto L_800CC998;
    }
    // 0x800CC80C: nop

    // 0x800CC810: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800CC814: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC818: lh          $s0, 0x108($t5)
    ctx->r16 = MEM_H(ctx->r13, 0X108);
    // 0x800CC81C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC820: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x800CC824: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800CC828: sltiu       $t7, $s0, 0x1
    ctx->r15 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800CC82C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x800CC830: jal         0x8001BB34
    // 0x800CC834: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x800CC834: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x800CC838: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800CC83C: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800CC840: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CC844: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800CC848: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CC84C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800CC850: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CC854: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800CC858: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800CC85C: lh          $t8, 0x423A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423A);
    // 0x800CC860: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CC864: beq         $t8, $at, L_800CC990
    if (ctx->r24 == ctx->r1) {
        // 0x800CC868: nop
    
            goto L_800CC990;
    }
    // 0x800CC868: nop

    // 0x800CC86C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC870: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800CC874: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800CC878: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC87C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CC880: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC884: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CC888: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800CC88C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800CC890: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CC894: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800CC898: lwc1        $f9, 0x4FF8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4FF8);
    // 0x800CC89C: lwc1        $f8, 0x4FFC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4FFC);
    // 0x800CC8A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800CC8A4: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x800CC8A8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800CC8AC: swc1        $f16, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f16.u32l;
    // 0x800CC8B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC8B4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800CC8B8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CC8BC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CC8C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC8C4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CC8C8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CC8CC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800CC8D0: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x800CC8D4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CC8D8: lwc1        $f18, 0x10($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X10);
    // 0x800CC8DC: lwc1        $f7, 0x5000($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5000);
    // 0x800CC8E0: lwc1        $f6, 0x5004($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5004);
    // 0x800CC8E4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800CC8E8: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x800CC8EC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800CC8F0: swc1        $f10, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f10.u32l;
    // 0x800CC8F4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC8F8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800CC8FC: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800CC900: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800CC904: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CC908: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800CC90C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CC910: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800CC914: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x800CC918: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CC91C: lwc1        $f16, 0x14($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800CC920: lwc1        $f5, 0x5008($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5008);
    // 0x800CC924: lwc1        $f4, 0x500C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X500C);
    // 0x800CC928: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800CC92C: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x800CC930: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800CC934: swc1        $f8, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f8.u32l;
    // 0x800CC938: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC93C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC940: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CC944: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC948: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CC94C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC950: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CC954: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800CC958: lwc1        $f10, 0x415C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X415C);
    // 0x800CC95C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CC960: nop

    // 0x800CC964: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x800CC968: nop

    // 0x800CC96C: bc1f        L_800CC990
    if (!c1cs) {
        // 0x800CC970: nop
    
            goto L_800CC990;
    }
    // 0x800CC970: nop

    // 0x800CC974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC97C: jal         0x800281A4
    // 0x800CC980: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_5;
    // 0x800CC980: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800CC984: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC988: jal         0x8002B0E4
    // 0x800CC98C: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800CC98C: nop

    after_6:
L_800CC990:
    // 0x800CC990: b           L_800CCA10
    // 0x800CC994: nop

        goto L_800CCA10;
    // 0x800CC994: nop

L_800CC998:
    // 0x800CC998: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC99C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC9A0: jal         0x8001BB34
    // 0x800CC9A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_7;
    // 0x800CC9A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800CC9A8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800CC9AC: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x800CC9B0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800CC9B4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CC9B8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CC9BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC9C0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CC9C4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CC9C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CC9CC: lh          $t7, 0x423A($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X423A);
    // 0x800CC9D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CC9D4: beq         $t7, $at, L_800CC9F8
    if (ctx->r15 == ctx->r1) {
        // 0x800CC9D8: nop
    
            goto L_800CC9F8;
    }
    // 0x800CC9D8: nop

    // 0x800CC9DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC9E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC9E4: jal         0x800281A4
    // 0x800CC9E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_8;
    // 0x800CC9E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x800CC9EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC9F0: jal         0x8002B0E4
    // 0x800CC9F4: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800CC9F4: nop

    after_9:
L_800CC9F8:
    // 0x800CC9F8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800CC9FC: nop

    // 0x800CCA00: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800CCA04: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800CCA08: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800CCA0C: sh          $t0, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r8;
L_800CCA10:
    // 0x800CCA10: b           L_800CCA18
    // 0x800CCA14: nop

        goto L_800CCA18;
    // 0x800CCA14: nop

L_800CCA18:
    // 0x800CCA18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CCA1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800CCA20: jr          $ra
    // 0x800CCA24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800CCA24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800A966C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A966C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A9670: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A9674: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A9678: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A967C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A9680: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A9684: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A9688: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A968C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A9690: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9694: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A9698: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A969C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A96A0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800A96A4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A96A8: nop

    // 0x800A96AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A96B0: nop

    // 0x800A96B4: bne         $t1, $zero, L_800A9710
    if (ctx->r9 != 0) {
        // 0x800A96B8: nop
    
            goto L_800A9710;
    }
    // 0x800A96B8: nop

    // 0x800A96BC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A96C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A96C4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A96C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A96CC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A96D0: nop

    // 0x800A96D4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A96D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A96DC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A96E0: nop

    // 0x800A96E4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A96E8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A96EC: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x800A96F0: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800A96F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A96F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A96FC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A9700: addiu       $a3, $a3, 0x7620
    ctx->r7 = ADD32(ctx->r7, 0X7620);
    // 0x800A9704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9708: jal         0x8001ABF4
    // 0x800A970C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800A970C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800A9710:
    // 0x800A9710: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9714: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9718: jal         0x8002A8B4
    // 0x800A971C: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800A971C: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_1:
    // 0x800A9720: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9724: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9728: jal         0x80028FA0
    // 0x800A972C: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800A972C: nop

    after_2:
    // 0x800A9730: beq         $v0, $zero, L_800A9748
    if (ctx->r2 == 0) {
        // 0x800A9734: nop
    
            goto L_800A9748;
    }
    // 0x800A9734: nop

    // 0x800A9738: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A973C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9740: jal         0x80029B60
    // 0x800A9744: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800A9744: nop

    after_3:
L_800A9748:
    // 0x800A9748: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A974C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9750: jal         0x80029C40
    // 0x800A9754: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A9754: nop

    after_4:
    // 0x800A9758: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A975C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9760: jal         0x80029D04
    // 0x800A9764: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A9764: nop

    after_5:
    // 0x800A9768: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A976C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A9770: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9774: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9778: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800A977C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800A9780: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A9784: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800A9788: jal         0x80029018
    // 0x800A978C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800A978C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x800A9790: beq         $v0, $zero, L_800A97B4
    if (ctx->r2 == 0) {
        // 0x800A9794: nop
    
            goto L_800A97B4;
    }
    // 0x800A9794: nop

    // 0x800A9798: jal         0x800297DC
    // 0x800A979C: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800A979C: nop

    after_7:
    // 0x800A97A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A97A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A97A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A97AC: jal         0x80029824
    // 0x800A97B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800A97B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800A97B4:
    // 0x800A97B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A97B8: nop

    // 0x800A97BC: lwc1        $f16, 0x3C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800A97C0: nop

    // 0x800A97C4: swc1        $f16, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f16.u32l;
    // 0x800A97C8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A97CC: nop

    // 0x800A97D0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800A97D4: nop

    // 0x800A97D8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800A97DC: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x800A97E0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800A97E4: nop

    // 0x800A97E8: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800A97EC: nop

    // 0x800A97F0: bgtz        $t3, L_800A9810
    if (SIGNED(ctx->r11) > 0) {
        // 0x800A97F4: nop
    
            goto L_800A9810;
    }
    // 0x800A97F4: nop

    // 0x800A97F8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A97FC: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x800A9800: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800A9804: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9808: nop

    // 0x800A980C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800A9810:
    // 0x800A9810: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9814: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9818: jal         0x8002A560
    // 0x800A981C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    func_8002A560(rdram, ctx);
        goto after_9;
    // 0x800A981C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_9:
    // 0x800A9820: bne         $v0, $zero, L_800A9888
    if (ctx->r2 != 0) {
        // 0x800A9824: nop
    
            goto L_800A9888;
    }
    // 0x800A9824: nop

    // 0x800A9828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A982C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9830: jal         0x8002A1FC
    // 0x800A9834: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_10;
    // 0x800A9834: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_10:
    // 0x800A9838: beq         $v0, $zero, L_800A9858
    if (ctx->r2 == 0) {
        // 0x800A983C: nop
    
            goto L_800A9858;
    }
    // 0x800A983C: nop

    // 0x800A9840: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9844: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800A9848: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800A984C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9850: nop

    // 0x800A9854: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800A9858:
    // 0x800A9858: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A985C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9860: lh          $t9, 0xA8($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XA8);
    // 0x800A9864: nop

    // 0x800A9868: bne         $t9, $at, L_800A9888
    if (ctx->r25 != ctx->r1) {
        // 0x800A986C: nop
    
            goto L_800A9888;
    }
    // 0x800A986C: nop

    // 0x800A9870: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9874: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800A9878: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800A987C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9880: nop

    // 0x800A9884: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800A9888:
    // 0x800A9888: b           L_800A9890
    // 0x800A988C: nop

        goto L_800A9890;
    // 0x800A988C: nop

L_800A9890:
    // 0x800A9890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A9894: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A9898: jr          $ra
    // 0x800A989C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A989C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CF140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF148: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CF14C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CF150: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CF154: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CF158: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF15C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CF160: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF164: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CF168: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CF16C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800CF170: nop

    // 0x800CF174: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800CF178: sltiu       $at, $t9, 0xA
    ctx->r1 = ctx->r25 < 0XA ? 1 : 0;
    // 0x800CF17C: beq         $at, $zero, L_800CF240
    if (ctx->r1 == 0) {
        // 0x800CF180: nop
    
            goto L_800CF240;
    }
    // 0x800CF180: nop

    // 0x800CF184: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CF188: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CF18C: addu        $at, $at, $t9
    gpr jr_addend_800CF198 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CF190: lw          $t9, 0x5018($at)
    ctx->r25 = ADD32(ctx->r1, 0X5018);
    // 0x800CF194: nop

    // 0x800CF198: jr          $t9
    // 0x800CF19C: nop

    switch (jr_addend_800CF198 >> 2) {
        case 0: goto L_800CF1A0; break;
        case 1: goto L_800CF1B0; break;
        case 2: goto L_800CF1C0; break;
        case 3: goto L_800CF1D0; break;
        case 4: goto L_800CF1E0; break;
        case 5: goto L_800CF1F0; break;
        case 6: goto L_800CF200; break;
        case 7: goto L_800CF210; break;
        case 8: goto L_800CF220; break;
        case 9: goto L_800CF230; break;
        default: switch_error(__func__, 0x800CF198, 0x80115018);
    }
    // 0x800CF19C: nop

L_800CF1A0:
    // 0x800CF1A0: jal         0x800CCD5C
    // 0x800CF1A4: nop

    func_800CCD5C(rdram, ctx);
        goto after_0;
    // 0x800CF1A4: nop

    after_0:
    // 0x800CF1A8: b           L_800CF248
    // 0x800CF1AC: nop

        goto L_800CF248;
    // 0x800CF1AC: nop

L_800CF1B0:
    // 0x800CF1B0: jal         0x800CD1D4
    // 0x800CF1B4: nop

    func_800CD1D4(rdram, ctx);
        goto after_1;
    // 0x800CF1B4: nop

    after_1:
    // 0x800CF1B8: b           L_800CF248
    // 0x800CF1BC: nop

        goto L_800CF248;
    // 0x800CF1BC: nop

L_800CF1C0:
    // 0x800CF1C0: jal         0x800CD1E4
    // 0x800CF1C4: nop

    func_800CD1E4(rdram, ctx);
        goto after_2;
    // 0x800CF1C4: nop

    after_2:
    // 0x800CF1C8: b           L_800CF248
    // 0x800CF1CC: nop

        goto L_800CF248;
    // 0x800CF1CC: nop

L_800CF1D0:
    // 0x800CF1D0: jal         0x800CD528
    // 0x800CF1D4: nop

    func_800CD528(rdram, ctx);
        goto after_3;
    // 0x800CF1D4: nop

    after_3:
    // 0x800CF1D8: b           L_800CF248
    // 0x800CF1DC: nop

        goto L_800CF248;
    // 0x800CF1DC: nop

L_800CF1E0:
    // 0x800CF1E0: jal         0x800CD808
    // 0x800CF1E4: nop

    func_800CD808(rdram, ctx);
        goto after_4;
    // 0x800CF1E4: nop

    after_4:
    // 0x800CF1E8: b           L_800CF248
    // 0x800CF1EC: nop

        goto L_800CF248;
    // 0x800CF1EC: nop

L_800CF1F0:
    // 0x800CF1F0: jal         0x800CDFD4
    // 0x800CF1F4: nop

    func_800CDFD4(rdram, ctx);
        goto after_5;
    // 0x800CF1F4: nop

    after_5:
    // 0x800CF1F8: b           L_800CF248
    // 0x800CF1FC: nop

        goto L_800CF248;
    // 0x800CF1FC: nop

L_800CF200:
    // 0x800CF200: jal         0x800CE51C
    // 0x800CF204: nop

    func_800CE51C(rdram, ctx);
        goto after_6;
    // 0x800CF204: nop

    after_6:
    // 0x800CF208: b           L_800CF248
    // 0x800CF20C: nop

        goto L_800CF248;
    // 0x800CF20C: nop

L_800CF210:
    // 0x800CF210: jal         0x800CECB0
    // 0x800CF214: nop

    func_800CECB0(rdram, ctx);
        goto after_7;
    // 0x800CF214: nop

    after_7:
    // 0x800CF218: b           L_800CF248
    // 0x800CF21C: nop

        goto L_800CF248;
    // 0x800CF21C: nop

L_800CF220:
    // 0x800CF220: jal         0x800CECC0
    // 0x800CF224: nop

    func_800CECC0(rdram, ctx);
        goto after_8;
    // 0x800CF224: nop

    after_8:
    // 0x800CF228: b           L_800CF248
    // 0x800CF22C: nop

        goto L_800CF248;
    // 0x800CF22C: nop

L_800CF230:
    // 0x800CF230: jal         0x800CD738
    // 0x800CF234: nop

    func_800CD738(rdram, ctx);
        goto after_9;
    // 0x800CF234: nop

    after_9:
    // 0x800CF238: b           L_800CF248
    // 0x800CF23C: nop

        goto L_800CF248;
    // 0x800CF23C: nop

L_800CF240:
    // 0x800CF240: b           L_800CF248
    // 0x800CF244: nop

        goto L_800CF248;
    // 0x800CF244: nop

L_800CF248:
    // 0x800CF248: b           L_800CF250
    // 0x800CF24C: nop

        goto L_800CF250;
    // 0x800CF24C: nop

L_800CF250:
    // 0x800CF250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CF258: jr          $ra
    // 0x800CF25C: nop

    return;
    // 0x800CF25C: nop

;}
RECOMP_FUNC void func_8009F3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F3E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009F3EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F3F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009F3F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009F3F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009F3FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009F400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009F404: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009F408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009F40C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009F410: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009F414: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009F418: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009F41C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F420: nop

    // 0x8009F424: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8009F428: nop

    // 0x8009F42C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8009F430: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x8009F434: beq         $at, $zero, L_8009F4BC
    if (ctx->r1 == 0) {
        // 0x8009F438: nop
    
            goto L_8009F4BC;
    }
    // 0x8009F438: nop

    // 0x8009F43C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8009F440: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8009F444: addu        $at, $at, $t2
    gpr jr_addend_8009F450 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8009F448: lw          $t2, 0x4910($at)
    ctx->r10 = ADD32(ctx->r1, 0X4910);
    // 0x8009F44C: nop

    // 0x8009F450: jr          $t2
    // 0x8009F454: nop

    switch (jr_addend_8009F450 >> 2) {
        case 0: goto L_8009F458; break;
        case 1: goto L_8009F46C; break;
        case 2: goto L_8009F480; break;
        case 3: goto L_8009F494; break;
        case 4: goto L_8009F4A8; break;
        default: switch_error(__func__, 0x8009F450, 0x80114910);
    }
    // 0x8009F454: nop

L_8009F458:
    // 0x8009F458: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F45C: jal         0x8009EE54
    // 0x8009F460: nop

    func_8009EE54(rdram, ctx);
        goto after_0;
    // 0x8009F460: nop

    after_0:
    // 0x8009F464: b           L_8009F4BC
    // 0x8009F468: nop

        goto L_8009F4BC;
    // 0x8009F468: nop

L_8009F46C:
    // 0x8009F46C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F470: jal         0x8009EF20
    // 0x8009F474: nop

    func_8009EF20(rdram, ctx);
        goto after_1;
    // 0x8009F474: nop

    after_1:
    // 0x8009F478: b           L_8009F4BC
    // 0x8009F47C: nop

        goto L_8009F4BC;
    // 0x8009F47C: nop

L_8009F480:
    // 0x8009F480: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F484: jal         0x8009F0B0
    // 0x8009F488: nop

    func_8009F0B0(rdram, ctx);
        goto after_2;
    // 0x8009F488: nop

    after_2:
    // 0x8009F48C: b           L_8009F4BC
    // 0x8009F490: nop

        goto L_8009F4BC;
    // 0x8009F490: nop

L_8009F494:
    // 0x8009F494: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F498: jal         0x8009F13C
    // 0x8009F49C: nop

    func_8009F13C(rdram, ctx);
        goto after_3;
    // 0x8009F49C: nop

    after_3:
    // 0x8009F4A0: b           L_8009F4BC
    // 0x8009F4A4: nop

        goto L_8009F4BC;
    // 0x8009F4A4: nop

L_8009F4A8:
    // 0x8009F4A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F4AC: jal         0x8009F2B0
    // 0x8009F4B0: nop

    func_8009F2B0(rdram, ctx);
        goto after_4;
    // 0x8009F4B0: nop

    after_4:
    // 0x8009F4B4: b           L_8009F4BC
    // 0x8009F4B8: nop

        goto L_8009F4BC;
    // 0x8009F4B8: nop

L_8009F4BC:
    // 0x8009F4BC: b           L_8009F4C4
    // 0x8009F4C0: nop

        goto L_8009F4C4;
    // 0x8009F4C0: nop

L_8009F4C4:
    // 0x8009F4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F4C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009F4CC: jr          $ra
    // 0x8009F4D0: nop

    return;
    // 0x8009F4D0: nop

;}
RECOMP_FUNC void func_800669E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800669E0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800669E4: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_800669E8:
    // 0x800669E8: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x800669EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800669F0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800669F4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800669F8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800669FC: sb          $t6, 0x65D8($at)
    MEM_B(0X65D8, ctx->r1) = ctx->r14;
    // 0x80066A00: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x80066A04: nop

    // 0x80066A08: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80066A0C: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80066A10: bne         $at, $zero, L_800669E8
    if (ctx->r1 != 0) {
        // 0x80066A14: sw          $t0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r8;
            goto L_800669E8;
    }
    // 0x80066A14: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x80066A18: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80066A1C: lw          $t1, 0x7778($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7778);
    // 0x80066A20: nop

    // 0x80066A24: lw          $t2, 0x40($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X40);
    // 0x80066A28: nop

    // 0x80066A2C: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x80066A30: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80066A34: nop

    // 0x80066A38: beq         $t3, $zero, L_80066AD8
    if (ctx->r11 == 0) {
        // 0x80066A3C: nop
    
            goto L_80066AD8;
    }
    // 0x80066A3C: nop

    // 0x80066A40: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_80066A44:
    // 0x80066A44: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x80066A48: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80066A4C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80066A50: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x80066A54: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80066A58: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x80066A5C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80066A60: bne         $t8, $at, L_80066A70
    if (ctx->r24 != ctx->r1) {
        // 0x80066A64: nop
    
            goto L_80066A70;
    }
    // 0x80066A64: nop

    // 0x80066A68: b           L_80066AD8
    // 0x80066A6C: nop

        goto L_80066AD8;
    // 0x80066A6C: nop

L_80066A70:
    // 0x80066A70: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80066A74: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80066A78: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80066A7C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80066A80: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80066A84: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80066A88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066A8C: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x80066A90: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80066A94: sb          $t3, 0x65D8($at)
    MEM_B(0X65D8, ctx->r1) = ctx->r11;
    // 0x80066A98: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80066A9C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80066AA0: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80066AA4: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x80066AA8: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x80066AAC: lbu         $t9, 0x2($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X2);
    // 0x80066AB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066AB4: sll         $t1, $t7, 1
    ctx->r9 = S32(ctx->r15 << 1);
    // 0x80066AB8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80066ABC: sb          $t9, 0x65D9($at)
    MEM_B(0X65D9, ctx->r1) = ctx->r25;
    // 0x80066AC0: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x80066AC4: nop

    // 0x80066AC8: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x80066ACC: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80066AD0: bne         $at, $zero, L_80066A44
    if (ctx->r1 != 0) {
        // 0x80066AD4: sw          $t0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r8;
            goto L_80066A44;
    }
    // 0x80066AD4: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
L_80066AD8:
    // 0x80066AD8: b           L_80066AE0
    // 0x80066ADC: nop

        goto L_80066AE0;
    // 0x80066ADC: nop

L_80066AE0:
    // 0x80066AE0: jr          $ra
    // 0x80066AE4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80066AE4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800C0858_stub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0888: jr          $ra
    // 0x800C088C: nop

    return;
    // 0x800C088C: nop

    // 0x800C0890: jr          $ra
    // 0x800C0894: nop

    return;
    // 0x800C0894: nop

;}
RECOMP_FUNC void func_800DB504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DB508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DB50C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DB510: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DB514: jal         0x8002B0E4
    // 0x800DB518: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800DB518: nop

    after_0:
    // 0x800DB51C: b           L_800DB524
    // 0x800DB520: nop

        goto L_800DB524;
    // 0x800DB520: nop

L_800DB524:
    // 0x800DB524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DB528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DB52C: jr          $ra
    // 0x800DB530: nop

    return;
    // 0x800DB530: nop

;}
RECOMP_FUNC void func_8008C9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C9B4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008C9B8: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008C9BC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008C9C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008C9C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008C9C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008C9CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008C9D0: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008C9D4: nop

    // 0x8008C9D8: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8008C9DC: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008C9E0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008C9E4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008C9E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008C9EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008C9F0: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8008C9F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C9F8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008C9FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008CA00: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008CA04: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008CA08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008CA0C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008CA10: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008CA14: swc1        $f10, 0x4180($at)
    MEM_W(0X4180, ctx->r1) = ctx->f10.u32l;
    // 0x8008CA18: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8008CA1C:
    // 0x8008CA1C: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8008CA20: lh          $t4, 0x6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6);
    // 0x8008CA24: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008CA28: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CA2C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008CA30: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008CA34: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008CA38: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8008CA3C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8008CA40: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008CA44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008CA48: lh          $t7, 0x4238($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4238);
    // 0x8008CA4C: nop

    // 0x8008CA50: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8008CA54: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8008CA58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008CA5C: beq         $t8, $at, L_8008CAAC
    if (ctx->r24 == ctx->r1) {
        // 0x8008CA60: nop
    
            goto L_8008CAAC;
    }
    // 0x8008CA60: nop

    // 0x8008CA64: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x8008CA68: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x8008CA6C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008CA70: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008CA74: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008CA78: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8008CA7C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008CA80: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008CA84: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8008CA88: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008CA8C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008CA90: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008CA94: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008CA98: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8008CA9C: lwc1        $f16, 0x30($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X30);
    // 0x8008CAA0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008CAA4: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x8008CAA8: swc1        $f16, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->f16.u32l;
L_8008CAAC:
    // 0x8008CAAC: lh          $t6, 0x6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6);
    // 0x8008CAB0: nop

    // 0x8008CAB4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8008CAB8: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8008CABC: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8008CAC0: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8008CAC4: bne         $at, $zero, L_8008CA1C
    if (ctx->r1 != 0) {
        // 0x8008CAC8: sh          $t7, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r15;
            goto L_8008CA1C;
    }
    // 0x8008CAC8: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
    // 0x8008CACC: b           L_8008CAD4
    // 0x8008CAD0: nop

        goto L_8008CAD4;
    // 0x8008CAD0: nop

L_8008CAD4:
    // 0x8008CAD4: jr          $ra
    // 0x8008CAD8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008CAD8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800D5938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5938: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D593C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D5940: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D5944: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D5948: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D594C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D5950: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D5954: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D5958: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D595C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D5960: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D5964: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D5968: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D596C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D5970: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800D5974: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D5978: nop

    // 0x800D597C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D5980: nop

    // 0x800D5984: bne         $t1, $zero, L_800D5A08
    if (ctx->r9 != 0) {
        // 0x800D5988: nop
    
            goto L_800D5A08;
    }
    // 0x800D5988: nop

    // 0x800D598C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D5990: nop

    // 0x800D5994: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D5998: nop

    // 0x800D599C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D59A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D59A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D59A8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800D59AC: nop

    // 0x800D59B0: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800D59B4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D59B8: nop

    // 0x800D59BC: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800D59C0: nop

    // 0x800D59C4: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800D59C8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D59CC: nop

    // 0x800D59D0: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800D59D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D59D8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D59DC: addiu       $t8, $t8, -0x7798
    ctx->r24 = ADD32(ctx->r24, -0X7798);
    // 0x800D59E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D59E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800D59E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D59EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800D59F0: jal         0x8001C0EC
    // 0x800D59F4: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D59F4: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_0:
    // 0x800D59F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D59FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5A00: jal         0x8001BBDC
    // 0x800D5A04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D5A04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800D5A08:
    // 0x800D5A08: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D5A0C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D5A10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D5A14: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800D5A18: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800D5A1C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800D5A20: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800D5A24: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800D5A28: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x800D5A2C: nop

    // 0x800D5A30: bc1f        L_800D5A70
    if (!c1cs) {
        // 0x800D5A34: nop
    
            goto L_800D5A70;
    }
    // 0x800D5A34: nop

    // 0x800D5A38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5A3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5A40: jal         0x8002A1FC
    // 0x800D5A44: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800D5A44: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_2:
    // 0x800D5A48: beq         $v0, $zero, L_800D5A68
    if (ctx->r2 == 0) {
        // 0x800D5A4C: nop
    
            goto L_800D5A68;
    }
    // 0x800D5A4C: nop

    // 0x800D5A50: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800D5A54: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800D5A58: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800D5A5C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800D5A60: nop

    // 0x800D5A64: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800D5A68:
    // 0x800D5A68: b           L_800D5A88
    // 0x800D5A6C: nop

        goto L_800D5A88;
    // 0x800D5A6C: nop

L_800D5A70:
    // 0x800D5A70: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800D5A74: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800D5A78: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800D5A7C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D5A80: nop

    // 0x800D5A84: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800D5A88:
    // 0x800D5A88: b           L_800D5A90
    // 0x800D5A8C: nop

        goto L_800D5A90;
    // 0x800D5A8C: nop

L_800D5A90:
    // 0x800D5A90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D5A94: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D5A98: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D5A9C: jr          $ra
    // 0x800D5AA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800D5AA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CBB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBB58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CBB5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CBB60: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800CBB64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CBB68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CBB6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CBB70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CBB74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CBB78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CBB7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CBB80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CBB84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CBB88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CBB8C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800CBB90: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CBB94: nop

    // 0x800CBB98: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CBB9C: nop

    // 0x800CBBA0: bne         $t1, $zero, L_800CBCB4
    if (ctx->r9 != 0) {
        // 0x800CBBA4: nop
    
            goto L_800CBCB4;
    }
    // 0x800CBBA4: nop

    // 0x800CBBA8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CBBAC: nop

    // 0x800CBBB0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CBBB4: nop

    // 0x800CBBB8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CBBBC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CBBC0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800CBBC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CBBC8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800CBBCC: nop

    // 0x800CBBD0: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800CBBD4: jal         0x80014E80
    // 0x800CBBD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800CBBD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x800CBBDC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CBBE0: nop

    // 0x800CBBE4: sh          $v0, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r2;
    // 0x800CBBE8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800CBBEC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800CBBF0: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800CBBF4: nop

    // 0x800CBBF8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800CBBFC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CBC00: lh          $t0, 0x4E40($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4E40);
    // 0x800CBC04: nop

    // 0x800CBC08: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800CBC0C: nop

    // 0x800CBC10: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CBC14: swc1        $f8, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f8.u32l;
    // 0x800CBC18: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800CBC1C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800CBC20: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800CBC24: nop

    // 0x800CBC28: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800CBC2C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CBC30: lh          $t2, 0x4E48($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4E48);
    // 0x800CBC34: nop

    // 0x800CBC38: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800CBC3C: nop

    // 0x800CBC40: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CBC44: swc1        $f16, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f16.u32l;
    // 0x800CBC48: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800CBC4C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800CBC50: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800CBC54: nop

    // 0x800CBC58: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x800CBC5C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CBC60: lh          $t9, 0x4E50($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4E50);
    // 0x800CBC64: nop

    // 0x800CBC68: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800CBC6C: nop

    // 0x800CBC70: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800CBC74: swc1        $f4, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f4.u32l;
    // 0x800CBC78: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CBC7C: nop

    // 0x800CBC80: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x800CBC84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBC88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBC8C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    // 0x800CBC90: jal         0x80029EF8
    // 0x800CBC94: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800CBC94: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x800CBC98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBC9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBCA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CBCA4: addiu       $a2, $zero, 0x56
    ctx->r6 = ADD32(0, 0X56);
    // 0x800CBCA8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800CBCAC: jal         0x800175F0
    // 0x800CBCB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800CBCB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800CBCB4:
    // 0x800CBCB4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800CBCB8: nop

    // 0x800CBCBC: lh          $t3, 0xA8($t7)
    ctx->r11 = MEM_H(ctx->r15, 0XA8);
    // 0x800CBCC0: nop

    // 0x800CBCC4: bne         $t3, $zero, L_800CBD08
    if (ctx->r11 != 0) {
        // 0x800CBCC8: nop
    
            goto L_800CBD08;
    }
    // 0x800CBCC8: nop

    // 0x800CBCCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBCD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBCD4: jal         0x80028FA0
    // 0x800CBCD8: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800CBCD8: nop

    after_3:
    // 0x800CBCDC: beq         $v0, $zero, L_800CBD00
    if (ctx->r2 == 0) {
        // 0x800CBCE0: nop
    
            goto L_800CBD00;
    }
    // 0x800CBCE0: nop

    // 0x800CBCE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBCE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBCEC: jal         0x800CB834
    // 0x800CBCF0: nop

    func_800CB834(rdram, ctx);
        goto after_4;
    // 0x800CBCF0: nop

    after_4:
    // 0x800CBCF4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CBCF8: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x800CBCFC: sh          $t4, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r12;
L_800CBD00:
    // 0x800CBD00: b           L_800CBD20
    // 0x800CBD04: nop

        goto L_800CBD20;
    // 0x800CBD04: nop

L_800CBD08:
    // 0x800CBD08: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800CBD0C: nop

    // 0x800CBD10: lh          $t6, 0xA8($t1)
    ctx->r14 = MEM_H(ctx->r9, 0XA8);
    // 0x800CBD14: nop

    // 0x800CBD18: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x800CBD1C: sh          $t8, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r24;
L_800CBD20:
    // 0x800CBD20: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800CBD24: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800CBD28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CBD2C: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x800CBD30: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x800CBD34: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800CBD38: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x800CBD3C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800CBD40: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800CBD44: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800CBD48: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x800CBD4C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800CBD50: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800CBD54: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800CBD58: nop

    // 0x800CBD5C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800CBD60: mfc1        $s0, $f8
    ctx->r16 = (int32_t)ctx->f8.u32l;
    // 0x800CBD64: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800CBD68: beq         $s0, $zero, L_800CBD9C
    if (ctx->r16 == 0) {
        // 0x800CBD6C: nop
    
            goto L_800CBD9C;
    }
    // 0x800CBD6C: nop

    // 0x800CBD70: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x800CBD74: beq         $s0, $at, L_800CBDC0
    if (ctx->r16 == ctx->r1) {
        // 0x800CBD78: nop
    
            goto L_800CBDC0;
    }
    // 0x800CBD78: nop

    // 0x800CBD7C: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x800CBD80: beq         $s0, $at, L_800CBDE4
    if (ctx->r16 == ctx->r1) {
        // 0x800CBD84: nop
    
            goto L_800CBDE4;
    }
    // 0x800CBD84: nop

    // 0x800CBD88: addiu       $at, $zero, 0x10E
    ctx->r1 = ADD32(0, 0X10E);
    // 0x800CBD8C: beq         $s0, $at, L_800CBE08
    if (ctx->r16 == ctx->r1) {
        // 0x800CBD90: nop
    
            goto L_800CBE08;
    }
    // 0x800CBD90: nop

    // 0x800CBD94: b           L_800CBE2C
    // 0x800CBD98: nop

        goto L_800CBE2C;
    // 0x800CBD98: nop

L_800CBD9C:
    // 0x800CBD9C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800CBDA0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800CBDA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CBDA8: lwc1        $f10, 0x18($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X18);
    // 0x800CBDAC: nop

    // 0x800CBDB0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800CBDB4: swc1        $f18, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f18.u32l;
    // 0x800CBDB8: b           L_800CBE34
    // 0x800CBDBC: nop

        goto L_800CBE34;
    // 0x800CBDBC: nop

L_800CBDC0:
    // 0x800CBDC0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800CBDC4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800CBDC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CBDCC: lwc1        $f4, 0x20($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X20);
    // 0x800CBDD0: nop

    // 0x800CBDD4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800CBDD8: swc1        $f8, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f8.u32l;
    // 0x800CBDDC: b           L_800CBE34
    // 0x800CBDE0: nop

        goto L_800CBE34;
    // 0x800CBDE0: nop

L_800CBDE4:
    // 0x800CBDE4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800CBDE8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800CBDEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CBDF0: lwc1        $f10, 0x18($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X18);
    // 0x800CBDF4: nop

    // 0x800CBDF8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800CBDFC: swc1        $f18, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f18.u32l;
    // 0x800CBE00: b           L_800CBE34
    // 0x800CBE04: nop

        goto L_800CBE34;
    // 0x800CBE04: nop

L_800CBE08:
    // 0x800CBE08: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CBE0C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800CBE10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CBE14: lwc1        $f4, 0x20($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X20);
    // 0x800CBE18: nop

    // 0x800CBE1C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800CBE20: swc1        $f8, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f8.u32l;
    // 0x800CBE24: b           L_800CBE34
    // 0x800CBE28: nop

        goto L_800CBE34;
    // 0x800CBE28: nop

L_800CBE2C:
    // 0x800CBE2C: b           L_800CBE34
    // 0x800CBE30: nop

        goto L_800CBE34;
    // 0x800CBE30: nop

L_800CBE34:
    // 0x800CBE34: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CBE38: nop

    // 0x800CBE3C: lwc1        $f10, 0x28($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800CBE40: nop

    // 0x800CBE44: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x800CBE48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CBE4C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800CBE50: nop

    // 0x800CBE54: swc1        $f16, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f16.u32l;
    // 0x800CBE58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBE5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBE60: jal         0x80029C40
    // 0x800CBE64: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800CBE64: nop

    after_5:
    // 0x800CBE68: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800CBE6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CBE70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBE74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBE78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CBE7C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800CBE80: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CBE84: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800CBE88: jal         0x80029018
    // 0x800CBE8C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800CBE8C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x800CBE90: beq         $v0, $zero, L_800CBEA8
    if (ctx->r2 == 0) {
        // 0x800CBE94: nop
    
            goto L_800CBEA8;
    }
    // 0x800CBE94: nop

    // 0x800CBE98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBE9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBEA0: jal         0x800CB834
    // 0x800CBEA4: nop

    func_800CB834(rdram, ctx);
        goto after_7;
    // 0x800CBEA4: nop

    after_7:
L_800CBEA8:
    // 0x800CBEA8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800CBEAC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800CBEB0: nop

    // 0x800CBEB4: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
    // 0x800CBEB8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800CBEBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800CBEC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBEC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBEC8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800CBECC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800CBED0: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    // 0x800CBED4: jal         0x80029F58
    // 0x800CBED8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_8;
    // 0x800CBED8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x800CBEDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CBEE0: bne         $v0, $at, L_800CBF44
    if (ctx->r2 != ctx->r1) {
        // 0x800CBEE4: nop
    
            goto L_800CBF44;
    }
    // 0x800CBEE4: nop

    // 0x800CBEE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBEEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBEF0: jal         0x800CB834
    // 0x800CBEF4: nop

    func_800CB834(rdram, ctx);
        goto after_9;
    // 0x800CBEF4: nop

    after_9:
    // 0x800CBEF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CBEFC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800CBF00: nop

    // 0x800CBF04: swc1        $f10, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f10.u32l;
    // 0x800CBF08: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800CBF0C: nop

    // 0x800CBF10: lwc1        $f16, 0x20($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X20);
    // 0x800CBF14: nop

    // 0x800CBF18: swc1        $f16, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f16.u32l;
    // 0x800CBF1C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800CBF20: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CBF24: nop

    // 0x800CBF28: swc1        $f18, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f18.u32l;
    // 0x800CBF2C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800CBF30: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800CBF34: sh          $t7, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r15;
    // 0x800CBF38: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800CBF3C: nop

    // 0x800CBF40: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800CBF44:
    // 0x800CBF44: b           L_800CBF4C
    // 0x800CBF48: nop

        goto L_800CBF4C;
    // 0x800CBF48: nop

L_800CBF4C:
    // 0x800CBF4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CBF50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800CBF54: jr          $ra
    // 0x800CBF58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800CBF58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void Demo_SetView(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C438: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8005C43C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005C440: lw          $t6, 0x479C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X479C);
    // 0x8005C444: nop

    // 0x8005C448: bne         $t6, $zero, L_8005C458
    if (ctx->r14 != 0) {
        // 0x8005C44C: nop
    
            goto L_8005C458;
    }
    // 0x8005C44C: nop

    // 0x8005C450: b           L_8005C948
    // 0x8005C454: nop

        goto L_8005C948;
    // 0x8005C454: nop

L_8005C458:
    // 0x8005C458: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005C45C: lw          $t7, 0x47AC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X47AC);
    // 0x8005C460: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C464: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8005C468: lwc1        $f8, 0x47A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X47A8);
    // 0x8005C46C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005C470: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8005C474: nop

    // 0x8005C478: bc1f        L_8005C778
    if (!c1cs) {
        // 0x8005C47C: nop
    
            goto L_8005C778;
    }
    // 0x8005C47C: nop

    // 0x8005C480: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8005C484: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C488: swc1        $f10, 0x47A8($at)
    MEM_W(0X47A8, ctx->r1) = ctx->f10.u32l;
    // 0x8005C48C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005C490: lw          $t9, 0x47B0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X47B0);
    // 0x8005C494: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8005C498: lw          $t8, 0x47A0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X47A0);
    // 0x8005C49C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8005C4A0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8005C4A4: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8005C4A8: lw          $t3, 0x1C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X1C);
    // 0x8005C4AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C4B0: sw          $t3, 0x47AC($at)
    MEM_W(0X47AC, ctx->r1) = ctx->r11;
    // 0x8005C4B4: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8005C4B8: lw          $t4, 0x47AC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X47AC);
    // 0x8005C4BC: nop

    // 0x8005C4C0: beq         $t4, $zero, L_8005C758
    if (ctx->r12 == 0) {
        // 0x8005C4C4: nop
    
            goto L_8005C758;
    }
    // 0x8005C4C4: nop

    // 0x8005C4C8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005C4CC: lw          $t6, 0x47B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X47B0);
    // 0x8005C4D0: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8005C4D4: lw          $t5, 0x47A0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X47A0);
    // 0x8005C4D8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8005C4DC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8005C4E0: addu        $t0, $t5, $t9
    ctx->r8 = ADD32(ctx->r13, ctx->r25);
    // 0x8005C4E4: lw          $t8, 0x18($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X18);
    // 0x8005C4E8: nop

    // 0x8005C4EC: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8005C4F0: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005C4F4: lw          $t2, 0x47B0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X47B0);
    // 0x8005C4F8: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8005C4FC: lw          $t1, 0x47A0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X47A0);
    // 0x8005C500: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8005C504: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8005C508: addu        $t6, $t1, $t4
    ctx->r14 = ADD32(ctx->r9, ctx->r12);
    // 0x8005C50C: lw          $t7, 0x20($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X20);
    // 0x8005C510: nop

    // 0x8005C514: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x8005C518: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8005C51C: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8005C520: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8005C524: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005C528: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8005C52C: lw          $t5, 0x47A4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X47A4);
    // 0x8005C530: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005C534: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8005C538: addu        $t2, $t5, $t8
    ctx->r10 = ADD32(ctx->r13, ctx->r24);
    // 0x8005C53C: lwc1        $f16, 0x40($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X40);
    // 0x8005C540: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C544: swc1        $f16, 0x47B4($at)
    MEM_W(0X47B4, ctx->r1) = ctx->f16.u32l;
    // 0x8005C548: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8005C54C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005C550: sll         $t4, $t1, 3
    ctx->r12 = S32(ctx->r9 << 3);
    // 0x8005C554: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8005C558: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8005C55C: lw          $t3, 0x47A4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X47A4);
    // 0x8005C560: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8005C564: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8005C568: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x8005C56C: lwc1        $f18, 0x44($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X44);
    // 0x8005C570: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C574: swc1        $f18, 0x47B8($at)
    MEM_W(0X47B8, ctx->r1) = ctx->f18.u32l;
    // 0x8005C578: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8005C57C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005C580: sll         $t5, $t0, 3
    ctx->r13 = S32(ctx->r8 << 3);
    // 0x8005C584: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x8005C588: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8005C58C: lw          $t9, 0x47A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X47A4);
    // 0x8005C590: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x8005C594: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8005C598: addu        $t2, $t9, $t8
    ctx->r10 = ADD32(ctx->r25, ctx->r24);
    // 0x8005C59C: lwc1        $f4, 0x48($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X48);
    // 0x8005C5A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C5A4: swc1        $f4, 0x47BC($at)
    MEM_W(0X47BC, ctx->r1) = ctx->f4.u32l;
    // 0x8005C5A8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8005C5AC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8005C5B0: sll         $t3, $t4, 3
    ctx->r11 = S32(ctx->r12 << 3);
    // 0x8005C5B4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8005C5B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8005C5BC: lw          $t1, 0x47A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X47A4);
    // 0x8005C5C0: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8005C5C4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8005C5C8: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x8005C5CC: lwc1        $f6, 0x70($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X70);
    // 0x8005C5D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C5D4: swc1        $f6, 0x47C0($at)
    MEM_W(0X47C0, ctx->r1) = ctx->f6.u32l;
    // 0x8005C5D8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8005C5DC: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005C5E0: sll         $t9, $t5, 3
    ctx->r25 = S32(ctx->r13 << 3);
    // 0x8005C5E4: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x8005C5E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005C5EC: lw          $t0, 0x47A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X47A4);
    // 0x8005C5F0: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x8005C5F4: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8005C5F8: addu        $t2, $t0, $t8
    ctx->r10 = ADD32(ctx->r8, ctx->r24);
    // 0x8005C5FC: lwc1        $f8, 0x74($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X74);
    // 0x8005C600: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C604: swc1        $f8, 0x47C4($at)
    MEM_W(0X47C4, ctx->r1) = ctx->f8.u32l;
    // 0x8005C608: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8005C60C: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8005C610: sll         $t1, $t3, 3
    ctx->r9 = S32(ctx->r11 << 3);
    // 0x8005C614: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8005C618: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8005C61C: lw          $t4, 0x47A4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X47A4);
    // 0x8005C620: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8005C624: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8005C628: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8005C62C: lwc1        $f10, 0x78($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X78);
    // 0x8005C630: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C634: swc1        $f10, 0x47C8($at)
    MEM_W(0X47C8, ctx->r1) = ctx->f10.u32l;
    // 0x8005C638: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8005C63C: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8005C640: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8005C644: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005C648: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8005C64C: lw          $t5, 0x47A4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X47A4);
    // 0x8005C650: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005C654: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8005C658: addu        $t2, $t5, $t8
    ctx->r10 = ADD32(ctx->r13, ctx->r24);
    // 0x8005C65C: lwc1        $f16, 0x40($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X40);
    // 0x8005C660: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C664: swc1        $f16, 0x47CC($at)
    MEM_W(0X47CC, ctx->r1) = ctx->f16.u32l;
    // 0x8005C668: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x8005C66C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005C670: sll         $t4, $t1, 3
    ctx->r12 = S32(ctx->r9 << 3);
    // 0x8005C674: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8005C678: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8005C67C: lw          $t3, 0x47A4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X47A4);
    // 0x8005C680: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8005C684: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8005C688: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x8005C68C: lwc1        $f18, 0x44($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X44);
    // 0x8005C690: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C694: swc1        $f18, 0x47D0($at)
    MEM_W(0X47D0, ctx->r1) = ctx->f18.u32l;
    // 0x8005C698: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8005C69C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005C6A0: sll         $t5, $t0, 3
    ctx->r13 = S32(ctx->r8 << 3);
    // 0x8005C6A4: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x8005C6A8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8005C6AC: lw          $t9, 0x47A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X47A4);
    // 0x8005C6B0: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x8005C6B4: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8005C6B8: addu        $t2, $t9, $t8
    ctx->r10 = ADD32(ctx->r25, ctx->r24);
    // 0x8005C6BC: lwc1        $f4, 0x48($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X48);
    // 0x8005C6C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C6C4: swc1        $f4, 0x47D4($at)
    MEM_W(0X47D4, ctx->r1) = ctx->f4.u32l;
    // 0x8005C6C8: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x8005C6CC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8005C6D0: sll         $t3, $t4, 3
    ctx->r11 = S32(ctx->r12 << 3);
    // 0x8005C6D4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8005C6D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8005C6DC: lw          $t1, 0x47A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X47A4);
    // 0x8005C6E0: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8005C6E4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8005C6E8: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x8005C6EC: lwc1        $f6, 0x70($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X70);
    // 0x8005C6F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C6F4: swc1        $f6, 0x47D8($at)
    MEM_W(0X47D8, ctx->r1) = ctx->f6.u32l;
    // 0x8005C6F8: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x8005C6FC: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005C700: sll         $t9, $t5, 3
    ctx->r25 = S32(ctx->r13 << 3);
    // 0x8005C704: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x8005C708: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005C70C: lw          $t0, 0x47A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X47A4);
    // 0x8005C710: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x8005C714: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8005C718: addu        $t2, $t0, $t8
    ctx->r10 = ADD32(ctx->r8, ctx->r24);
    // 0x8005C71C: lwc1        $f8, 0x74($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X74);
    // 0x8005C720: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C724: swc1        $f8, 0x47DC($at)
    MEM_W(0X47DC, ctx->r1) = ctx->f8.u32l;
    // 0x8005C728: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8005C72C: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8005C730: sll         $t1, $t3, 3
    ctx->r9 = S32(ctx->r11 << 3);
    // 0x8005C734: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8005C738: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8005C73C: lw          $t4, 0x47A4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X47A4);
    // 0x8005C740: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8005C744: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8005C748: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8005C74C: lwc1        $f10, 0x78($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X78);
    // 0x8005C750: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C754: swc1        $f10, 0x47E0($at)
    MEM_W(0X47E0, ctx->r1) = ctx->f10.u32l;
L_8005C758:
    // 0x8005C758: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8005C75C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C760: sb          $t5, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = ctx->r13;
    // 0x8005C764: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005C768: lw          $t9, 0x47B0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X47B0);
    // 0x8005C76C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C770: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8005C774: sw          $t0, 0x47B0($at)
    MEM_W(0X47B0, ctx->r1) = ctx->r8;
L_8005C778:
    // 0x8005C778: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8005C77C: lw          $t8, 0x47AC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X47AC);
    // 0x8005C780: nop

    // 0x8005C784: beq         $t8, $zero, L_8005C924
    if (ctx->r24 == 0) {
        // 0x8005C788: nop
    
            goto L_8005C924;
    }
    // 0x8005C788: nop

    // 0x8005C78C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C790: lwc1        $f16, 0x47CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X47CC);
    // 0x8005C794: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C798: lwc1        $f18, 0x47B4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X47B4);
    // 0x8005C79C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005C7A0: lw          $t2, 0x47AC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X47AC);
    // 0x8005C7A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C7A8: lwc1        $f6, 0x47A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X47A8);
    // 0x8005C7AC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8005C7B0: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8005C7B4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8005C7B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C7BC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8005C7C0: nop

    // 0x8005C7C4: div.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8005C7C8: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8005C7CC: swc1        $f6, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f6.u32l;
    // 0x8005C7D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C7D4: lwc1        $f10, 0x47D0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X47D0);
    // 0x8005C7D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C7DC: lwc1        $f8, 0x47B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X47B8);
    // 0x8005C7E0: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005C7E4: lw          $t3, 0x47AC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X47AC);
    // 0x8005C7E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C7EC: lwc1        $f4, 0x47A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X47A8);
    // 0x8005C7F0: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8005C7F4: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8005C7F8: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8005C7FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C800: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005C804: nop

    // 0x8005C808: div.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8005C80C: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8005C810: swc1        $f4, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f4.u32l;
    // 0x8005C814: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C818: lwc1        $f6, 0x47D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X47D4);
    // 0x8005C81C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C820: lwc1        $f18, 0x47BC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X47BC);
    // 0x8005C824: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8005C828: lw          $t1, 0x47AC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X47AC);
    // 0x8005C82C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C830: lwc1        $f16, 0x47A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X47A8);
    // 0x8005C834: sub.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8005C838: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8005C83C: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8005C840: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C844: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005C848: nop

    // 0x8005C84C: div.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8005C850: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8005C854: swc1        $f16, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f16.u32l;
    // 0x8005C858: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C85C: lwc1        $f4, 0x47D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X47D8);
    // 0x8005C860: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C864: lwc1        $f8, 0x47C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X47C0);
    // 0x8005C868: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8005C86C: lw          $t4, 0x47AC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X47AC);
    // 0x8005C870: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C874: lwc1        $f10, 0x47A8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X47A8);
    // 0x8005C878: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8005C87C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8005C880: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8005C884: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C888: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8005C88C: nop

    // 0x8005C890: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8005C894: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8005C898: swc1        $f10, -0x1EB4($at)
    MEM_W(-0X1EB4, ctx->r1) = ctx->f10.u32l;
    // 0x8005C89C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C8A0: lwc1        $f16, 0x47DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X47DC);
    // 0x8005C8A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C8A8: lwc1        $f18, 0x47C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X47C4);
    // 0x8005C8AC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005C8B0: lw          $t6, 0x47AC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X47AC);
    // 0x8005C8B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C8B8: lwc1        $f6, 0x47A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X47A8);
    // 0x8005C8BC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8005C8C0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8005C8C4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8005C8C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C8CC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8005C8D0: nop

    // 0x8005C8D4: div.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8005C8D8: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8005C8DC: swc1        $f6, -0x1EB0($at)
    MEM_W(-0X1EB0, ctx->r1) = ctx->f6.u32l;
    // 0x8005C8E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C8E4: lwc1        $f10, 0x47E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X47E0);
    // 0x8005C8E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C8EC: lwc1        $f8, 0x47C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X47C8);
    // 0x8005C8F0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005C8F4: lw          $t7, 0x47AC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X47AC);
    // 0x8005C8F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C8FC: lwc1        $f4, 0x47A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X47A8);
    // 0x8005C900: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8005C904: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8005C908: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8005C90C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005C910: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005C914: nop

    // 0x8005C918: div.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8005C91C: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8005C920: swc1        $f4, -0x1EAC($at)
    MEM_W(-0X1EAC, ctx->r1) = ctx->f4.u32l;
L_8005C924:
    // 0x8005C924: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C928: lwc1        $f6, 0x47A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X47A8);
    // 0x8005C92C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8005C930: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8005C934: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005C938: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8005C93C: swc1        $f10, 0x47A8($at)
    MEM_W(0X47A8, ctx->r1) = ctx->f10.u32l;
    // 0x8005C940: b           L_8005C948
    // 0x8005C944: nop

        goto L_8005C948;
    // 0x8005C944: nop

L_8005C948:
    // 0x8005C948: jr          $ra
    // 0x8005C94C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8005C94C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800A4F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4F08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A4F0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A4F10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A4F14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A4F18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A4F1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A4F20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A4F24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A4F28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A4F2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A4F30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A4F34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A4F38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A4F3C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800A4F40: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A4F44: nop

    // 0x800A4F48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A4F4C: nop

    // 0x800A4F50: bne         $t1, $zero, L_800A5068
    if (ctx->r9 != 0) {
        // 0x800A4F54: nop
    
            goto L_800A5068;
    }
    // 0x800A4F54: nop

    // 0x800A4F58: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A4F5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A4F60: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A4F64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A4F68: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A4F6C: nop

    // 0x800A4F70: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A4F74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A4F78: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A4F7C: nop

    // 0x800A4F80: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A4F84: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A4F88: nop

    // 0x800A4F8C: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800A4F90: nop

    // 0x800A4F94: bne         $t7, $zero, L_800A4FFC
    if (ctx->r15 != 0) {
        // 0x800A4F98: nop
    
            goto L_800A4FFC;
    }
    // 0x800A4F98: nop

    // 0x800A4F9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4FA0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800A4FA4: addiu       $t8, $t8, 0x7028
    ctx->r24 = ADD32(ctx->r24, 0X7028);
    // 0x800A4FA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4FAC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A4FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A4FB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A4FB8: jal         0x8001C0EC
    // 0x800A4FBC: addiu       $a3, $zero, 0x5F
    ctx->r7 = ADD32(0, 0X5F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A4FBC: addiu       $a3, $zero, 0x5F
    ctx->r7 = ADD32(0, 0X5F);
    after_0:
    // 0x800A4FC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4FC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4FC8: jal         0x8001BBDC
    // 0x800A4FCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800A4FCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800A4FD0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A4FD4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800A4FD8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800A4FDC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A4FE0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A4FE4: sh          $t1, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r9;
    // 0x800A4FE8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A4FEC: nop

    // 0x800A4FF0: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800A4FF4: b           L_800A527C
    // 0x800A4FF8: nop

        goto L_800A527C;
    // 0x800A4FF8: nop

L_800A4FFC:
    // 0x800A4FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5004: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A5008: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x800A500C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A5010: jal         0x800175F0
    // 0x800A5014: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800A5014: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x800A5018: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800A501C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A5020: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A5024: nop

    // 0x800A5028: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
    // 0x800A502C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A5030: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A5034: nop

    // 0x800A5038: swc1        $f10, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f10.u32l;
    // 0x800A503C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800A5040: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A5044: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A5048: nop

    // 0x800A504C: swc1        $f16, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f16.u32l;
    // 0x800A5050: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5054: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5058: lui         $a2, 0x3F7A
    ctx->r6 = S32(0X3F7A << 16);
    // 0x800A505C: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    // 0x800A5060: jal         0x80029EF8
    // 0x800A5064: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800A5064: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
L_800A5068:
    // 0x800A5068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A506C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5070: jal         0x80029C40
    // 0x800A5074: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A5074: nop

    after_4:
    // 0x800A5078: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A507C: nop

    // 0x800A5080: lwc1        $f18, 0x28($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800A5084: nop

    // 0x800A5088: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x800A508C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A5090: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A5094: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5098: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A509C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A50A0: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x800A50A4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A50A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800A50AC: jal         0x80029018
    // 0x800A50B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800A50B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x800A50B4: beq         $v0, $zero, L_800A51B4
    if (ctx->r2 == 0) {
        // 0x800A50B8: nop
    
            goto L_800A51B4;
    }
    // 0x800A50B8: nop

    // 0x800A50BC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A50C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A50C4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A50C8: nop

    // 0x800A50CC: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x800A50D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800A50D4: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x800A50D8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800A50DC: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800A50E0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A50E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800A50E8: lw          $t2, 0x7740($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7740);
    // 0x800A50EC: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x800A50F0: bne         $t2, $at, L_800A5118
    if (ctx->r10 != ctx->r1) {
        // 0x800A50F4: nop
    
            goto L_800A5118;
    }
    // 0x800A50F4: nop

    // 0x800A50F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A50FC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A5100: nop

    // 0x800A5104: swc1        $f10, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f10.u32l;
    // 0x800A5108: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800A510C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A5110: nop

    // 0x800A5114: swc1        $f16, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f16.u32l;
L_800A5118:
    // 0x800A5118: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800A511C: lh          $t5, 0x51A0($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X51A0);
    // 0x800A5120: nop

    // 0x800A5124: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x800A5128: beq         $t6, $zero, L_800A5198
    if (ctx->r14 == 0) {
        // 0x800A512C: nop
    
            goto L_800A5198;
    }
    // 0x800A512C: nop

    // 0x800A5130: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A5134: lui         $at, 0x44F0
    ctx->r1 = S32(0X44F0 << 16);
    // 0x800A5138: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A513C: lwc1        $f4, 0x54($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X54);
    // 0x800A5140: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800A5144: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800A5148: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x800A514C: nop

    // 0x800A5150: bc1t        L_800A5178
    if (c1cs) {
        // 0x800A5154: nop
    
            goto L_800A5178;
    }
    // 0x800A5154: nop

    // 0x800A5158: lui         $at, 0x44F0
    ctx->r1 = S32(0X44F0 << 16);
    // 0x800A515C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A5160: nop

    // 0x800A5164: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x800A5168: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800A516C: nop

    // 0x800A5170: bc1f        L_800A5198
    if (!c1cs) {
        // 0x800A5174: nop
    
            goto L_800A5198;
    }
    // 0x800A5174: nop

L_800A5178:
    // 0x800A5178: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A517C: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x800A5180: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800A5184: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A5188: nop

    // 0x800A518C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800A5190: b           L_800A527C
    // 0x800A5194: nop

        goto L_800A527C;
    // 0x800A5194: nop

L_800A5198:
    // 0x800A5198: jal         0x800297DC
    // 0x800A519C: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x800A519C: nop

    after_6:
    // 0x800A51A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A51A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A51A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A51AC: jal         0x80029824
    // 0x800A51B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x800A51B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_800A51B4:
    // 0x800A51B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A51B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A51BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A51C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A51C4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A51C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A51CC: jal         0x80029F58
    // 0x800A51D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_8;
    // 0x800A51D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x800A51D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A51D8: bne         $v0, $at, L_800A5274
    if (ctx->r2 != ctx->r1) {
        // 0x800A51DC: nop
    
            goto L_800A5274;
    }
    // 0x800A51DC: nop

    // 0x800A51E0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A51E4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800A51E8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800A51EC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A51F0: nop

    // 0x800A51F4: sh          $zero, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = 0;
    // 0x800A51F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A51FC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A5200: nop

    // 0x800A5204: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
    // 0x800A5208: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A520C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A5210: nop

    // 0x800A5214: swc1        $f4, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f4.u32l;
    // 0x800A5218: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A521C: nop

    // 0x800A5220: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800A5224: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5228: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A522C: jal         0x8001BBDC
    // 0x800A5230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x800A5230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x800A5234: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800A5238: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x800A523C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800A5240: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800A5244: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A5248: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A524C: lw          $t0, 0x7740($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7740);
    // 0x800A5250: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x800A5254: bne         $t0, $at, L_800A5274
    if (ctx->r8 != ctx->r1) {
        // 0x800A5258: nop
    
            goto L_800A5274;
    }
    // 0x800A5258: nop

    // 0x800A525C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A5260: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800A5264: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800A5268: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A526C: nop

    // 0x800A5270: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800A5274:
    // 0x800A5274: b           L_800A527C
    // 0x800A5278: nop

        goto L_800A527C;
    // 0x800A5278: nop

L_800A527C:
    // 0x800A527C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A5280: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A5284: jr          $ra
    // 0x800A5288: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800A5288: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800ACB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ACB2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800ACB30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ACB34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ACB38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ACB3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ACB40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ACB44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ACB48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ACB4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ACB50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ACB54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ACB58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ACB5C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800ACB60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ACB64: nop

    // 0x800ACB68: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ACB6C: nop

    // 0x800ACB70: bne         $t1, $zero, L_800ACBE0
    if (ctx->r9 != 0) {
        // 0x800ACB74: nop
    
            goto L_800ACBE0;
    }
    // 0x800ACB74: nop

    // 0x800ACB78: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ACB7C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ACB80: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800ACB84: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800ACB88: addiu       $t4, $zero, 0x78
    ctx->r12 = ADD32(0, 0X78);
    // 0x800ACB8C: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800ACB90: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800ACB94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800ACB98: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800ACB9C: nop

    // 0x800ACBA0: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800ACBA4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800ACBA8: nop

    // 0x800ACBAC: lh          $t8, 0xAC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAC);
    // 0x800ACBB0: nop

    // 0x800ACBB4: bne         $t8, $zero, L_800ACBE0
    if (ctx->r24 != 0) {
        // 0x800ACBB8: nop
    
            goto L_800ACBE0;
    }
    // 0x800ACBB8: nop

    // 0x800ACBBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACBC0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800ACBC4: addiu       $t9, $t9, 0x7658
    ctx->r25 = ADD32(ctx->r25, 0X7658);
    // 0x800ACBC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACBCC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800ACBD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ACBD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800ACBD8: jal         0x8001C0EC
    // 0x800ACBDC: addiu       $a3, $zero, 0x91
    ctx->r7 = ADD32(0, 0X91);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800ACBDC: addiu       $a3, $zero, 0x91
    ctx->r7 = ADD32(0, 0X91);
    after_0:
L_800ACBE0:
    // 0x800ACBE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ACBE4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800ACBE8: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800ACBEC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800ACBF0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800ACBF4: jal         0x80015538
    // 0x800ACBF8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800ACBF8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x800ACBFC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800ACC00: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800ACC04: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800ACC08: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800ACC0C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800ACC10: nop

    // 0x800ACC14: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800ACC18: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x800ACC1C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800ACC20: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
    // 0x800ACC24: nop

    // 0x800ACC28: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800ACC2C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800ACC30: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800ACC34: lwc1        $f19, 0x4AC8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4AC8);
    // 0x800ACC38: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800ACC3C: lwc1        $f18, 0x4ACC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4ACC);
    // 0x800ACC40: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x800ACC44: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x800ACC48: jal         0x80034970
    // 0x800ACC4C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x800ACC4C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x800ACC50: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x800ACC54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800ACC58: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800ACC5C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800ACC60: swc1        $f8, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f8.u32l;
    // 0x800ACC64: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800ACC68: nop

    // 0x800ACC6C: lwc1        $f12, 0xD4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x800ACC70: lwc1        $f14, 0xD8($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0XD8);
    // 0x800ACC74: jal         0x80015538
    // 0x800ACC78: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800ACC78: nop

    after_3:
    // 0x800ACC7C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800ACC80: nop

    // 0x800ACC84: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800ACC88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ACC8C: nop

    // 0x800ACC90: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800ACC94: nop

    // 0x800ACC98: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x800ACC9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACCA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACCA4: jal         0x80029C40
    // 0x800ACCA8: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800ACCA8: nop

    after_4:
    // 0x800ACCAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACCB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACCB4: jal         0x80029D04
    // 0x800ACCB8: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800ACCB8: nop

    after_5:
    // 0x800ACCBC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800ACCC0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800ACCC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACCC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACCCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800ACCD0: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800ACCD4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ACCD8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800ACCDC: jal         0x80029018
    // 0x800ACCE0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800ACCE0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800ACCE4: beq         $v0, $zero, L_800ACD20
    if (ctx->r2 == 0) {
        // 0x800ACCE8: nop
    
            goto L_800ACD20;
    }
    // 0x800ACCE8: nop

    // 0x800ACCEC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800ACCF0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800ACCF4: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800ACCF8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ACCFC: nop

    // 0x800ACD00: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800ACD04: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800ACD08: nop

    // 0x800ACD0C: lwc1        $f4, 0xD4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x800ACD10: nop

    // 0x800ACD14: swc1        $f4, 0xD8($t4)
    MEM_W(0XD8, ctx->r12) = ctx->f4.u32l;
    // 0x800ACD18: b           L_800ACDBC
    // 0x800ACD1C: nop

        goto L_800ACDBC;
    // 0x800ACD1C: nop

L_800ACD20:
    // 0x800ACD20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800ACD24: nop

    // 0x800ACD28: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800ACD2C: lwc1        $f10, 0x44($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X44);
    // 0x800ACD30: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800ACD34: nop

    // 0x800ACD38: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800ACD3C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800ACD40: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800ACD44: nop

    // 0x800ACD48: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800ACD4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800ACD50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800ACD54: nop

    // 0x800ACD58: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800ACD5C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x800ACD60: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800ACD64: sh          $t8, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r24;
    // 0x800ACD68: nop

    // 0x800ACD6C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800ACD70: nop

    // 0x800ACD74: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800ACD78: nop

    // 0x800ACD7C: bgtz        $t0, L_800ACDB4
    if (SIGNED(ctx->r8) > 0) {
        // 0x800ACD80: nop
    
            goto L_800ACDB4;
    }
    // 0x800ACD80: nop

    // 0x800ACD84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACD88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACD8C: jal         0x8001B44C
    // 0x800ACD90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x800ACD90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800ACD94: beq         $v0, $zero, L_800ACDB4
    if (ctx->r2 == 0) {
        // 0x800ACD98: nop
    
            goto L_800ACDB4;
    }
    // 0x800ACD98: nop

    // 0x800ACD9C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800ACDA0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800ACDA4: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800ACDA8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ACDAC: nop

    // 0x800ACDB0: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800ACDB4:
    // 0x800ACDB4: b           L_800ACDBC
    // 0x800ACDB8: nop

        goto L_800ACDBC;
    // 0x800ACDB8: nop

L_800ACDBC:
    // 0x800ACDBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACDC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800ACDC4: jr          $ra
    // 0x800ACDC8: nop

    return;
    // 0x800ACDC8: nop

;}
