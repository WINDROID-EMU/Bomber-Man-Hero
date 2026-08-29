#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800011E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800011E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800011EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800011F0: lui         $t6, 0x19
    ctx->r14 = S32(0X19 << 16);
    // 0x800011F4: lui         $t7, 0x19
    ctx->r15 = S32(0X19 << 16);
    // 0x800011F8: addiu       $t7, $t7, 0x4F10
    ctx->r15 = ADD32(ctx->r15, 0X4F10);
    // 0x800011FC: addiu       $t6, $t6, -0x66C0
    ctx->r14 = ADD32(ctx->r14, -0X66C0);
    // 0x80001200: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001204: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001208: jal         0x8000068C
    // 0x8000120C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x8000120C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001210: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x80001214: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x80001218: addiu       $t9, $t9, -0x5650
    ctx->r25 = ADD32(ctx->r25, -0X5650);
    // 0x8000121C: addiu       $t8, $t8, -0x57D0
    ctx->r24 = ADD32(ctx->r24, -0X57D0);
    // 0x80001220: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x80001224: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x80001228: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8000122C: jal         0x8000068C
    // 0x80001230: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80001230: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x80001234: b           L_8000123C
    // 0x80001238: nop

        goto L_8000123C;
    // 0x80001238: nop

L_8000123C:
    // 0x8000123C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001244: jr          $ra
    // 0x80001248: nop

    return;
    // 0x80001248: nop

;}
RECOMP_FUNC void func_800017D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800017D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800017D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800017D8: lui         $t6, 0x1F
    ctx->r14 = S32(0X1F << 16);
    // 0x800017DC: lui         $t7, 0x1F
    ctx->r15 = S32(0X1F << 16);
    // 0x800017E0: addiu       $t7, $t7, 0x900
    ctx->r15 = ADD32(ctx->r15, 0X900);
    // 0x800017E4: addiu       $t6, $t6, -0x810
    ctx->r14 = ADD32(ctx->r14, -0X810);
    // 0x800017E8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800017EC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800017F0: jal         0x8000068C
    // 0x800017F4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800017F4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800017F8: b           L_80001800
    // 0x800017FC: nop

        goto L_80001800;
    // 0x800017FC: nop

L_80001800:
    // 0x80001800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001808: jr          $ra
    // 0x8000180C: nop

    return;
    // 0x8000180C: nop

;}
RECOMP_FUNC void stopOsc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005A58: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80005A5C: lw          $t6, 0x2ED4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2ED4);
    // 0x80005A60: nop

    // 0x80005A64: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80005A68: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80005A6C: sw          $a0, 0x2ED4($at)
    MEM_W(0X2ED4, ctx->r1) = ctx->r4;
    // 0x80005A70: jr          $ra
    // 0x80005A74: nop

    return;
    // 0x80005A74: nop

    // 0x80005A78: jr          $ra
    // 0x80005A7C: nop

    return;
    // 0x80005A7C: nop

;}
RECOMP_FUNC void func_8000C670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C670: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8000C674: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8000C678: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8000C67C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8000C680: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000C684: lw          $t6, 0x2D88($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D88);
    // 0x8000C688: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8000C68C: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x8000C690: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C694: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x8000C698: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8000C69C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000C6A0: nop

    // 0x8000C6A4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8000C6A8: nop

    // 0x8000C6AC: bc1f        L_8000C6D0
    if (!c1cs) {
        // 0x8000C6B0: nop
    
            goto L_8000C6D0;
    }
    // 0x8000C6B0: nop

    // 0x8000C6B4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000C6B8: lw          $t9, 0x2D88($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D88);
    // 0x8000C6BC: sll         $t0, $a0, 4
    ctx->r8 = S32(ctx->r4 << 4);
    // 0x8000C6C0: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x8000C6C4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8000C6C8: b           L_8000C6E8
    // 0x8000C6CC: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
        goto L_8000C6E8;
    // 0x8000C6CC: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
L_8000C6D0:
    // 0x8000C6D0: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000C6D4: lw          $t2, 0x2D88($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2D88);
    // 0x8000C6D8: lwc1        $f16, 0x8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8000C6DC: sll         $t3, $a0, 4
    ctx->r11 = S32(ctx->r4 << 4);
    // 0x8000C6E0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8000C6E4: swc1        $f16, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f16.u32l;
L_8000C6E8:
    // 0x8000C6E8: b           L_8000C6F0
    // 0x8000C6EC: nop

        goto L_8000C6F0;
    // 0x8000C6EC: nop

L_8000C6F0:
    // 0x8000C6F0: jr          $ra
    // 0x8000C6F4: nop

    return;
    // 0x8000C6F4: nop

;}
RECOMP_FUNC void func_800016D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800016D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800016D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800016D8: lui         $t6, 0x1E
    ctx->r14 = S32(0X1E << 16);
    // 0x800016DC: lui         $t7, 0x1E
    ctx->r15 = S32(0X1E << 16);
    // 0x800016E0: addiu       $t7, $t7, 0x3FF0
    ctx->r15 = ADD32(ctx->r15, 0X3FF0);
    // 0x800016E4: addiu       $t6, $t6, -0x6EF0
    ctx->r14 = ADD32(ctx->r14, -0X6EF0);
    // 0x800016E8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800016EC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800016F0: jal         0x8000068C
    // 0x800016F4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800016F4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800016F8: b           L_80001700
    // 0x800016FC: nop

        goto L_80001700;
    // 0x800016FC: nop

L_80001700:
    // 0x80001700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001708: jr          $ra
    // 0x8000170C: nop

    return;
    // 0x8000170C: nop

;}
RECOMP_FUNC void alSndpPlay(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035330: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80035334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035338: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x8003533C: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80035340: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80035344: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035348: mflo        $t7
    ctx->r15 = lo;
    // 0x8003534C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80035350: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x80035354: bnel        $t9, $zero, L_80035388
    if (ctx->r25 != 0) {
        // 0x80035358: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80035388;
    }
    goto skip_0;
    // 0x80035358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003535C: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80035360: lw          $t0, 0x3C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3C);
    // 0x80035364: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80035368: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8003536C: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035370: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80035374: mflo        $t1
    ctx->r9 = lo;
    // 0x80035378: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8003537C: jal         0x8003E80C
    // 0x80035380: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x80035380: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_0:
    // 0x80035384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035388:
    // 0x80035388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8003538C: jr          $ra
    // 0x80035390: nop

    return;
    // 0x80035390: nop

;}
RECOMP_FUNC void func_8002B894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B894: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8002B898: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8002B89C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_8002B8A0:
    // 0x8002B8A0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8002B8A4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8002B8A8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002B8AC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002B8B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002B8B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002B8B8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8002B8BC: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8002B8C0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002B8C4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8002B8C8: nop

    // 0x8002B8CC: beq         $t1, $zero, L_8002B988
    if (ctx->r9 == 0) {
        // 0x8002B8D0: nop
    
            goto L_8002B988;
    }
    // 0x8002B8D0: nop

    // 0x8002B8D4: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002B8D8: addiu       $t3, $t3, 0x76A8
    ctx->r11 = ADD32(ctx->r11, 0X76A8);
    // 0x8002B8DC: sll         $t2, $a0, 4
    ctx->r10 = S32(ctx->r4 << 4);
    // 0x8002B8E0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8002B8E4: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8002B8E8: lh          $t6, 0xE4($t0)
    ctx->r14 = MEM_H(ctx->r8, 0XE4);
    // 0x8002B8EC: nop

    // 0x8002B8F0: bne         $t5, $t6, L_8002B988
    if (ctx->r13 != ctx->r14) {
        // 0x8002B8F4: nop
    
            goto L_8002B988;
    }
    // 0x8002B8F4: nop

    // 0x8002B8F8: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x8002B8FC: addu        $t8, $t7, $t3
    ctx->r24 = ADD32(ctx->r15, ctx->r11);
    // 0x8002B900: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x8002B904: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002B908: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002B90C: nop

    // 0x8002B910: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002B914: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8002B918: nop

    // 0x8002B91C: bc1f        L_8002B988
    if (!c1cs) {
        // 0x8002B920: nop
    
            goto L_8002B988;
    }
    // 0x8002B920: nop

    // 0x8002B924: sll         $t1, $a0, 4
    ctx->r9 = S32(ctx->r4 << 4);
    // 0x8002B928: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x8002B92C: lh          $t4, 0x4($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X4);
    // 0x8002B930: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8002B934: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8002B938: nop

    // 0x8002B93C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002B940: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8002B944: nop

    // 0x8002B948: bc1f        L_8002B988
    if (!c1cs) {
        // 0x8002B94C: nop
    
            goto L_8002B988;
    }
    // 0x8002B94C: nop

    // 0x8002B950: sll         $t5, $a0, 4
    ctx->r13 = S32(ctx->r4 << 4);
    // 0x8002B954: addu        $t6, $t5, $t3
    ctx->r14 = ADD32(ctx->r13, ctx->r11);
    // 0x8002B958: lh          $t7, 0x6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X6);
    // 0x8002B95C: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8002B960: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002B964: nop

    // 0x8002B968: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002B96C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8002B970: nop

    // 0x8002B974: bc1f        L_8002B988
    if (!c1cs) {
        // 0x8002B978: nop
    
            goto L_8002B988;
    }
    // 0x8002B978: nop

    // 0x8002B97C: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x8002B980: b           L_8002B9B0
    // 0x8002B984: nop

        goto L_8002B9B0;
    // 0x8002B984: nop

L_8002B988:
    // 0x8002B988: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8002B98C: nop

    // 0x8002B990: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8002B994: slti        $at, $t9, 0x4E
    ctx->r1 = SIGNED(ctx->r25) < 0X4E ? 1 : 0;
    // 0x8002B998: bne         $at, $zero, L_8002B8A0
    if (ctx->r1 != 0) {
        // 0x8002B99C: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_8002B8A0;
    }
    // 0x8002B99C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8002B9A0: b           L_8002B9B0
    // 0x8002B9A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002B9B0;
    // 0x8002B9A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8002B9A8: b           L_8002B9B0
    // 0x8002B9AC: nop

        goto L_8002B9B0;
    // 0x8002B9AC: nop

L_8002B9B0:
    // 0x8002B9B0: jr          $ra
    // 0x8002B9B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8002B9B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001BC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BC84: beq         $a2, $zero, L_8001BCE0
    if (ctx->r6 == 0) {
        // 0x8001BC88: nop
    
            goto L_8001BCE0;
    }
    // 0x8001BC88: nop

    // 0x8001BC8C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001BC90: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BC94: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001BC98: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BC9C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8001BCA0: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x8001BCA4: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x8001BCA8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8001BCAC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001BCB0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8001BCB4: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x8001BCB8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001BCBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8001BCC0: lbu         $t9, 0x130($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X130);
    // 0x8001BCC4: lbu         $t0, -0x5A1C($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X5A1C);
    // 0x8001BCC8: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x8001BCCC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8001BCD0: addu        $t3, $t2, $t7
    ctx->r11 = ADD32(ctx->r10, ctx->r15);
    // 0x8001BCD4: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x8001BCD8: b           L_8001BD34
    // 0x8001BCDC: sb          $t1, 0x130($t3)
    MEM_B(0X130, ctx->r11) = ctx->r9;
        goto L_8001BD34;
    // 0x8001BCDC: sb          $t1, 0x130($t3)
    MEM_B(0X130, ctx->r11) = ctx->r9;
L_8001BCE0:
    // 0x8001BCE0: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x8001BCE4: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x8001BCE8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001BCEC: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x8001BCF0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8001BCF4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8001BCF8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8001BCFC: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001BD00: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x8001BD04: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8001BD08: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001BD0C: lbu         $t9, -0x5A1C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X5A1C);
    // 0x8001BD10: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8001BD14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001BD18: lbu         $t8, 0x130($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X130);
    // 0x8001BD1C: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001BD20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001BD24: nor         $t0, $t9, $zero
    ctx->r8 = ~(ctx->r25 | 0);
    // 0x8001BD28: addu        $t1, $t7, $t5
    ctx->r9 = ADD32(ctx->r15, ctx->r13);
    // 0x8001BD2C: and         $t2, $t8, $t0
    ctx->r10 = ctx->r24 & ctx->r8;
    // 0x8001BD30: sb          $t2, 0x130($t1)
    MEM_B(0X130, ctx->r9) = ctx->r10;
L_8001BD34:
    // 0x8001BD34: jr          $ra
    // 0x8001BD38: nop

    return;
    // 0x8001BD38: nop

    // 0x8001BD3C: jr          $ra
    // 0x8001BD40: nop

    return;
    // 0x8001BD40: nop

;}
RECOMP_FUNC void func_800081B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800081B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800081B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800081B8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800081BC: lh          $t6, -0x5C9C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5C9C);
    // 0x800081C0: nop

    // 0x800081C4: bne         $t6, $zero, L_800081D4
    if (ctx->r14 != 0) {
        // 0x800081C8: nop
    
            goto L_800081D4;
    }
    // 0x800081C8: nop

    // 0x800081CC: b           L_8000825C
    // 0x800081D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000825C;
    // 0x800081D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800081D4:
    // 0x800081D4: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800081D8: lh          $t7, -0x5C9C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5C9C);
    // 0x800081DC: nop

    // 0x800081E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800081E4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800081E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800081EC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800081F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800081F4: jal         0x8000D84C
    // 0x800081F8: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x800081F8: nop

    after_0:
    // 0x800081FC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008200: sw          $v0, 0x2DA8($at)
    MEM_W(0X2DA8, ctx->r1) = ctx->r2;
    // 0x80008204: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80008208: lw          $t9, 0x2DA8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2DA8);
    // 0x8000820C: nop

    // 0x80008210: bne         $t9, $zero, L_80008220
    if (ctx->r25 != 0) {
        // 0x80008214: nop
    
            goto L_80008220;
    }
    // 0x80008214: nop

    // 0x80008218: b           L_8000825C
    // 0x8000821C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000825C;
    // 0x8000821C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80008220:
    // 0x80008220: jal         0x80008360
    // 0x80008224: nop

    func_80008360(rdram, ctx);
        goto after_1;
    // 0x80008224: nop

    after_1:
    // 0x80008228: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000822C: sb          $zero, 0x2DB5($at)
    MEM_B(0X2DB5, ctx->r1) = 0;
    // 0x80008230: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008234: sb          $zero, 0x2DB4($at)
    MEM_B(0X2DB4, ctx->r1) = 0;
    // 0x80008238: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000823C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008240: swc1        $f4, 0x2DB0($at)
    MEM_W(0X2DB0, ctx->r1) = ctx->f4.u32l;
    // 0x80008244: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008248: swc1        $f4, 0x2DAC($at)
    MEM_W(0X2DAC, ctx->r1) = ctx->f4.u32l;
    // 0x8000824C: b           L_8000825C
    // 0x80008250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000825C;
    // 0x80008250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80008254: b           L_8000825C
    // 0x80008258: nop

        goto L_8000825C;
    // 0x80008258: nop

L_8000825C:
    // 0x8000825C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80008260: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80008264: jr          $ra
    // 0x80008268: nop

    return;
    // 0x80008268: nop

;}
RECOMP_FUNC void func_8000435C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000435C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004364: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80004368: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x8000436C: jal         0x80002D90
    // 0x80004370: nop

    func_80002D90(rdram, ctx);
        goto after_0;
    // 0x80004370: nop

    after_0:
    // 0x80004374: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004378: sh          $v0, 0x2ED0($at)
    MEM_H(0X2ED0, ctx->r1) = ctx->r2;
    // 0x8000437C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80004380: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80004384: lh          $t7, 0x2ED0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2ED0);
    // 0x80004388: lh          $t6, 0x2ED2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2ED2);
    // 0x8000438C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80004390: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80004394: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004398: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x8000439C: mflo        $a1
    ctx->r5 = lo;
    // 0x800043A0: nop

    // 0x800043A4: nop

    // 0x800043A8: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x800043AC: mflo        $t8
    ctx->r24 = lo;
    // 0x800043B0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x800043B4: jal         0x800346A0
    // 0x800043B8: nop

    alSeqpSetVol(rdram, ctx);
        goto after_1;
    // 0x800043B8: nop

    after_1:
    // 0x800043BC: b           L_800043C4
    // 0x800043C0: nop

        goto L_800043C4;
    // 0x800043C0: nop

L_800043C4:
    // 0x800043C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800043C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800043CC: jr          $ra
    // 0x800043D0: nop

    return;
    // 0x800043D0: nop

;}
RECOMP_FUNC void func_800007F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800007F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800007F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800007FC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80000800: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80000804: addiu       $a1, $a1, -0x28C0
    ctx->r5 = ADD32(ctx->r5, -0X28C0);
    // 0x80000808: addiu       $a0, $a0, -0x28D8
    ctx->r4 = ADD32(ctx->r4, -0X28D8);
    // 0x8000080C: jal         0x800319C0
    // 0x80000810: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80000810: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80000814: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80000818: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8000081C: addiu       $a1, $a1, -0x1F28
    ctx->r5 = ADD32(ctx->r5, -0X1F28);
    // 0x80000820: addiu       $a0, $a0, -0x1F48
    ctx->r4 = ADD32(ctx->r4, -0X1F48);
    // 0x80000824: jal         0x800319C0
    // 0x80000828: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80000828: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8000082C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80000830: lw          $t6, -0x5D80($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5D80);
    // 0x80000834: nop

    // 0x80000838: bne         $t6, $zero, L_800008B4
    if (ctx->r14 != 0) {
        // 0x8000083C: nop
    
            goto L_800008B4;
    }
    // 0x8000083C: nop

    // 0x80000840: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x80000844: lw          $t7, 0x300($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X300);
    // 0x80000848: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000084C: bne         $t7, $at, L_80000884
    if (ctx->r15 != ctx->r1) {
        // 0x80000850: nop
    
            goto L_80000884;
    }
    // 0x80000850: nop

    // 0x80000854: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80000858: addiu       $a1, $a1, -0x2628
    ctx->r5 = ADD32(ctx->r5, -0X2628);
    // 0x8000085C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80000860: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80000864: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80000868: addiu       $a0, $a0, -0x28B8
    ctx->r4 = ADD32(ctx->r4, -0X28B8);
    // 0x8000086C: addiu       $a1, $a1, 0x2000
    ctx->r5 = ADD32(ctx->r5, 0X2000);
    // 0x80000870: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80000874: jal         0x80001CF0
    // 0x80000878: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80001CF0(rdram, ctx);
        goto after_2;
    // 0x80000878: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x8000087C: b           L_800008AC
    // 0x80000880: nop

        goto L_800008AC;
    // 0x80000880: nop

L_80000884:
    // 0x80000884: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80000888: addiu       $a1, $a1, -0x2628
    ctx->r5 = ADD32(ctx->r5, -0X2628);
    // 0x8000088C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80000890: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80000894: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80000898: addiu       $a0, $a0, -0x28B8
    ctx->r4 = ADD32(ctx->r4, -0X28B8);
    // 0x8000089C: addiu       $a1, $a1, 0x2000
    ctx->r5 = ADD32(ctx->r5, 0X2000);
    // 0x800008A0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x800008A4: jal         0x80001CF0
    // 0x800008A8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    func_80001CF0(rdram, ctx);
        goto after_3;
    // 0x800008A8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_3:
L_800008AC:
    // 0x800008AC: b           L_800008DC
    // 0x800008B0: nop

        goto L_800008DC;
    // 0x800008B0: nop

L_800008B4:
    // 0x800008B4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800008B8: addiu       $a1, $a1, -0x2628
    ctx->r5 = ADD32(ctx->r5, -0X2628);
    // 0x800008BC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800008C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800008C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800008C8: addiu       $a0, $a0, -0x28B8
    ctx->r4 = ADD32(ctx->r4, -0X28B8);
    // 0x800008CC: addiu       $a1, $a1, 0x2000
    ctx->r5 = ADD32(ctx->r5, 0X2000);
    // 0x800008D0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x800008D4: jal         0x80001CF0
    // 0x800008D8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80001CF0(rdram, ctx);
        goto after_4;
    // 0x800008D8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_4:
L_800008DC:
    // 0x800008DC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800008E0: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800008E4: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800008E8: addiu       $a2, $a2, -0x1F48
    ctx->r6 = ADD32(ctx->r6, -0X1F48);
    // 0x800008EC: addiu       $a1, $a1, 0x2D38
    ctx->r5 = ADD32(ctx->r5, 0X2D38);
    // 0x800008F0: jal         0x80001E78
    // 0x800008F4: addiu       $a0, $a0, -0x28B8
    ctx->r4 = ADD32(ctx->r4, -0X28B8);
    func_80001E78(rdram, ctx);
        goto after_5;
    // 0x800008F4: addiu       $a0, $a0, -0x28B8
    ctx->r4 = ADD32(ctx->r4, -0X28B8);
    after_5:
    // 0x800008F8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800008FC: jal         0x80001FDC
    // 0x80000900: addiu       $a0, $a0, -0x28B8
    ctx->r4 = ADD32(ctx->r4, -0X28B8);
    func_80001FDC(rdram, ctx);
        goto after_6;
    // 0x80000900: addiu       $a0, $a0, -0x28B8
    ctx->r4 = ADD32(ctx->r4, -0X28B8);
    after_6:
    // 0x80000904: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80000908: sw          $v0, -0x2630($at)
    MEM_W(-0X2630, ctx->r1) = ctx->r2;
    // 0x8000090C: b           L_80000914
    // 0x80000910: nop

        goto L_80000914;
    // 0x80000910: nop

L_80000914:
    // 0x80000914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80000918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000091C: jr          $ra
    // 0x80000920: nop

    return;
    // 0x80000920: nop

;}
RECOMP_FUNC void func_8002D8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D8FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D904: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002D908: lb          $t6, 0x7688($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7688);
    // 0x8002D90C: nop

    // 0x8002D910: bne         $t6, $zero, L_8002D950
    if (ctx->r14 != 0) {
        // 0x8002D914: nop
    
            goto L_8002D950;
    }
    // 0x8002D914: nop

    // 0x8002D918: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002D91C: jal         0x8001C1A8
    // 0x8002D920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C1A8(rdram, ctx);
        goto after_0;
    // 0x8002D920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8002D924: beq         $v0, $zero, L_8002D950
    if (ctx->r2 == 0) {
        // 0x8002D928: nop
    
            goto L_8002D950;
    }
    // 0x8002D928: nop

    // 0x8002D92C: jal         0x8001838C
    // 0x8002D930: nop

    func_8001838C(rdram, ctx);
        goto after_1;
    // 0x8002D930: nop

    after_1:
    // 0x8002D934: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002D938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002D93C: jal         0x8001B234
    // 0x8002D940: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001B234(rdram, ctx);
        goto after_2;
    // 0x8002D940: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8002D944: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002D948: jal         0x8001C384
    // 0x8002D94C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C384(rdram, ctx);
        goto after_3;
    // 0x8002D94C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_8002D950:
    // 0x8002D950: b           L_8002D958
    // 0x8002D954: nop

        goto L_8002D958;
    // 0x8002D954: nop

L_8002D958:
    // 0x8002D958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D95C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D960: jr          $ra
    // 0x8002D964: nop

    return;
    // 0x8002D964: nop

;}
RECOMP_FUNC void func_80000C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000C2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000C34: lui         $t6, 0x14
    ctx->r14 = S32(0X14 << 16);
    // 0x80000C38: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x80000C3C: addiu       $t7, $t7, -0x3AC0
    ctx->r15 = ADD32(ctx->r15, -0X3AC0);
    // 0x80000C40: addiu       $t6, $t6, 0x7BB0
    ctx->r14 = ADD32(ctx->r14, 0X7BB0);
    // 0x80000C44: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000C48: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80000C4C: jal         0x8000068C
    // 0x80000C50: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000C50: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    after_0:
    // 0x80000C54: lui         $t8, 0x15
    ctx->r24 = S32(0X15 << 16);
    // 0x80000C58: lui         $t9, 0x15
    ctx->r25 = S32(0X15 << 16);
    // 0x80000C5C: addiu       $t9, $t9, 0x28A0
    ctx->r25 = ADD32(ctx->r25, 0X28A0);
    // 0x80000C60: addiu       $t8, $t8, -0x3AC0
    ctx->r24 = ADD32(ctx->r24, -0X3AC0);
    // 0x80000C64: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80000C68: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    // 0x80000C6C: jal         0x8000068C
    // 0x80000C70: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80000C70: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_1:
    // 0x80000C74: b           L_80000C7C
    // 0x80000C78: nop

        goto L_80000C7C;
    // 0x80000C78: nop

L_80000C7C:
    // 0x80000C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000C80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000C84: jr          $ra
    // 0x80000C88: nop

    return;
    // 0x80000C88: nop

;}
RECOMP_FUNC void func_8001C5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C5B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001C5BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001C5C0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8001C5C4: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8001C5C8: addiu       $t7, $t6, 0x1260
    ctx->r15 = ADD32(ctx->r14, 0X1260);
    // 0x8001C5CC: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x8001C5D0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8001C5D4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_8001C5D8:
    // 0x8001C5D8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8001C5DC: nop

    // 0x8001C5E0: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8001C5E4: nop

    // 0x8001C5E8: beq         $t0, $zero, L_8001C6D4
    if (ctx->r8 == 0) {
        // 0x8001C5EC: nop
    
            goto L_8001C6D4;
    }
    // 0x8001C5EC: nop

    // 0x8001C5F0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8001C5F4: nop

    // 0x8001C5F8: lbu         $t2, 0x130($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X130);
    // 0x8001C5FC: nop

    // 0x8001C600: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8001C604: bne         $t3, $zero, L_8001C6D4
    if (ctx->r11 != 0) {
        // 0x8001C608: nop
    
            goto L_8001C6D4;
    }
    // 0x8001C608: nop

    // 0x8001C60C: lbu         $t4, 0x131($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X131);
    // 0x8001C610: nop

    // 0x8001C614: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x8001C618: bne         $t5, $zero, L_8001C6D4
    if (ctx->r13 != 0) {
        // 0x8001C61C: nop
    
            goto L_8001C6D4;
    }
    // 0x8001C61C: nop

    // 0x8001C620: lh          $t6, 0x146($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X146);
    // 0x8001C624: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001C628: beq         $t6, $at, L_8001C6D4
    if (ctx->r14 == ctx->r1) {
        // 0x8001C62C: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_8001C6D4;
    }
    // 0x8001C62C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8001C630: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8001C634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001C638: jal         0x80019510
    // 0x8001C63C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80019510(rdram, ctx);
        goto after_0;
    // 0x8001C63C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8001C640: jal         0x8001838C
    // 0x8001C644: nop

    func_8001838C(rdram, ctx);
        goto after_1;
    // 0x8001C644: nop

    after_1:
    // 0x8001C648: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8001C64C: jal         0x8001B014
    // 0x8001C650: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B014(rdram, ctx);
        goto after_2;
    // 0x8001C650: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8001C654: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C658: jal         0x8001A488
    // 0x8001C65C: nop

    func_8001A488(rdram, ctx);
        goto after_3;
    // 0x8001C65C: nop

    after_3:
    // 0x8001C660: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C664: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8001C668: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001C66C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001C670: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8001C674: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001C678: lw          $t9, 0x5290($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5290);
    // 0x8001C67C: nop

    // 0x8001C680: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8001C684: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8001C688: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8001C68C: sll         $t2, $t0, 3
    ctx->r10 = S32(ctx->r8 << 3);
    // 0x8001C690: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
    // 0x8001C694: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8001C698: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001C69C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001C6A0: lw          $t4, -0x1C5C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1C5C);
    // 0x8001C6A4: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x8001C6A8: lw          $a0, 0x52AC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52AC);
    // 0x8001C6AC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001C6B0: addiu       $a1, $a1, -0x1F04
    ctx->r5 = ADD32(ctx->r5, -0X1F04);
    // 0x8001C6B4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8001C6B8: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x8001C6BC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8001C6C0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8001C6C4: jal         0x8000FD9C
    // 0x8001C6C8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_8000FD9C(rdram, ctx);
        goto after_4;
    // 0x8001C6C8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_4:
    // 0x8001C6CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001C6D0: sw          $v0, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r2;
L_8001C6D4:
    // 0x8001C6D4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8001C6D8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8001C6DC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001C6E0: slti        $at, $t7, 0x4E
    ctx->r1 = SIGNED(ctx->r15) < 0X4E ? 1 : 0;
    // 0x8001C6E4: addiu       $t1, $t5, 0x150
    ctx->r9 = ADD32(ctx->r13, 0X150);
    // 0x8001C6E8: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8001C6EC: bne         $at, $zero, L_8001C5D8
    if (ctx->r1 != 0) {
        // 0x8001C6F0: sw          $t7, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r15;
            goto L_8001C5D8;
    }
    // 0x8001C6F0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8001C6F4: b           L_8001C6FC
    // 0x8001C6F8: nop

        goto L_8001C6FC;
    // 0x8001C6F8: nop

L_8001C6FC:
    // 0x8001C6FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001C700: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001C704: jr          $ra
    // 0x8001C708: nop

    return;
    // 0x8001C708: nop

;}
RECOMP_FUNC void alEnvmixerParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80040B68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80040B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80040B70: beq         $a1, $v0, L_80040C10
    if (ctx->r5 == ctx->r2) {
        // 0x80040B74: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80040C10;
    }
    // 0x80040B74: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80040B78: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80040B7C: beq         $a1, $at, L_80040B9C
    if (ctx->r5 == ctx->r1) {
        // 0x80040B80: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80040B9C;
    }
    // 0x80040B80: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80040B84: beq         $a1, $at, L_80040BBC
    if (ctx->r5 == ctx->r1) {
        // 0x80040B88: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80040BBC;
    }
    // 0x80040B88: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80040B8C: beql        $a1, $at, L_80040BEC
    if (ctx->r5 == ctx->r1) {
        // 0x80040B90: lw          $a0, 0x0($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X0);
            goto L_80040BEC;
    }
    goto skip_0;
    // 0x80040B90: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x80040B94: b           L_80040C1C
    // 0x80040B98: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
        goto L_80040C1C;
    // 0x80040B98: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80040B9C:
    // 0x80040B9C: lw          $v0, 0x40($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X40);
    // 0x80040BA0: beql        $v0, $zero, L_80040BB4
    if (ctx->r2 == 0) {
        // 0x80040BA4: sw          $a2, 0x3C($a3)
        MEM_W(0X3C, ctx->r7) = ctx->r6;
            goto L_80040BB4;
    }
    goto skip_1;
    // 0x80040BA4: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
    skip_1:
    // 0x80040BA8: b           L_80040BB4
    // 0x80040BAC: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_80040BB4;
    // 0x80040BAC: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x80040BB0: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
L_80040BB4:
    // 0x80040BB4: b           L_80040C30
    // 0x80040BB8: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
        goto L_80040C30;
    // 0x80040BB8: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
L_80040BBC:
    // 0x80040BBC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80040BC0: sw          $v0, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r2;
    // 0x80040BC4: sw          $zero, 0x48($a3)
    MEM_W(0X48, ctx->r7) = 0;
    // 0x80040BC8: beq         $a0, $zero, L_80040C30
    if (ctx->r4 == 0) {
        // 0x80040BCC: sh          $v0, 0x1A($a3)
        MEM_H(0X1A, ctx->r7) = ctx->r2;
            goto L_80040C30;
    }
    // 0x80040BCC: sh          $v0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r2;
    // 0x80040BD0: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80040BD4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80040BD8: jalr        $t9
    // 0x80040BDC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80040BDC: nop

    after_0:
    // 0x80040BE0: b           L_80040C34
    // 0x80040BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80040C34;
    // 0x80040BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80040BE8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80040BEC:
    // 0x80040BEC: sw          $v0, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->r2;
    // 0x80040BF0: beql        $a0, $zero, L_80040C34
    if (ctx->r4 == 0) {
        // 0x80040BF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80040C34;
    }
    goto skip_2;
    // 0x80040BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80040BF8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80040BFC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80040C00: jalr        $t9
    // 0x80040C04: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80040C04: nop

    after_1:
    // 0x80040C08: b           L_80040C34
    // 0x80040C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80040C34;
    // 0x80040C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80040C10:
    // 0x80040C10: b           L_80040C30
    // 0x80040C14: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_80040C30;
    // 0x80040C14: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x80040C18: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80040C1C:
    // 0x80040C1C: beql        $a0, $zero, L_80040C34
    if (ctx->r4 == 0) {
        // 0x80040C20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80040C34;
    }
    goto skip_3;
    // 0x80040C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80040C24: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80040C28: jalr        $t9
    // 0x80040C2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80040C2C: nop

    after_2:
L_80040C30:
    // 0x80040C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80040C34:
    // 0x80040C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80040C38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80040C3C: jr          $ra
    // 0x80040C40: nop

    return;
    // 0x80040C40: nop

;}
RECOMP_FUNC void alAuxBusPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800416E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800416E4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800416E8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800416EC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800416F0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800416F4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800416F8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800416FC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80041700: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80041704: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80041708: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8004170C: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80041710: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80041714: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x80041718: ori         $t6, $t6, 0x6C0
    ctx->r14 = ctx->r14 | 0X6C0;
    // 0x8004171C: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x80041720: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80041724: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x80041728: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x8004172C: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x80041730: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x80041734: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80041738: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x8004173C: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x80041740: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80041744: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80041748: blez        $t8, L_8004178C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8004174C: addiu       $s2, $t0, 0x10
        ctx->r18 = ADD32(ctx->r8, 0X10);
            goto L_8004178C;
    }
    // 0x8004174C: addiu       $s2, $t0, 0x10
    ctx->r18 = ADD32(ctx->r8, 0X10);
    // 0x80041750: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
L_80041754:
    // 0x80041754: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80041758: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8004175C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80041760: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80041764: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80041768: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8004176C: jalr        $t9
    // 0x80041770: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80041770: nop

    after_0:
    // 0x80041774: lw          $t1, 0x14($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X14);
    // 0x80041778: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004177C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80041780: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80041784: bne         $at, $zero, L_80041754
    if (ctx->r1 != 0) {
        // 0x80041788: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80041754;
    }
    // 0x80041788: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8004178C:
    // 0x8004178C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80041790: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80041794: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80041798: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8004179C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800417A0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800417A4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800417A8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800417AC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800417B0: jr          $ra
    // 0x800417B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800417B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8002B0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B0E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B0E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B0EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B0F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002B0F4: jal         0x8002AE84
    // 0x8002B0F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002AE84(rdram, ctx);
        goto after_0;
    // 0x8002B0F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8002B0FC: b           L_8002B104
    // 0x8002B100: nop

        goto L_8002B104;
    // 0x8002B100: nop

L_8002B104:
    // 0x8002B104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B10C: jr          $ra
    // 0x8002B110: nop

    return;
    // 0x8002B110: nop

;}
RECOMP_FUNC void func_8001CD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CD88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001CD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CD90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001CD94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001CD98: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001CD9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8001CDA0: jal         0x80019510
    // 0x8001CDA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80019510(rdram, ctx);
        goto after_0;
    // 0x8001CDA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001CDA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001CDAC: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001CDB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001CDB4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8001CDB8: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8001CDBC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8001CDC0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CDC4: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8001CDC8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8001CDCC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001CDD0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CDD4: nop

    // 0x8001CDD8: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8001CDDC: b           L_8001CDE4
    // 0x8001CDE0: nop

        goto L_8001CDE4;
    // 0x8001CDE0: nop

L_8001CDE4:
    // 0x8001CDE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CDE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001CDEC: jr          $ra
    // 0x8001CDF0: nop

    return;
    // 0x8001CDF0: nop

;}
RECOMP_FUNC void func_8000C7D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C7D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000C7D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C7DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000C7E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000C7E4: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000C7E8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000C7EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000C7F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000C7F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C7F8: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x8000C7FC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000C800: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C804: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000C808: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8000C80C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C810: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000C814: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x8000C818: nop

    // 0x8000C81C: beq         $t1, $at, L_8000C82C
    if (ctx->r9 == ctx->r1) {
        // 0x8000C820: nop
    
            goto L_8000C82C;
    }
    // 0x8000C820: nop

    // 0x8000C824: b           L_8000C8BC
    // 0x8000C828: nop

        goto L_8000C8BC;
    // 0x8000C828: nop

L_8000C82C:
    // 0x8000C82C: lbu         $t2, 0x27($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X27);
    // 0x8000C830: nop

    // 0x8000C834: slti        $at, $t2, 0x80
    ctx->r1 = SIGNED(ctx->r10) < 0X80 ? 1 : 0;
    // 0x8000C838: bne         $at, $zero, L_8000C848
    if (ctx->r1 != 0) {
        // 0x8000C83C: nop
    
            goto L_8000C848;
    }
    // 0x8000C83C: nop

    // 0x8000C840: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x8000C844: sb          $t3, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r11;
L_8000C848:
    // 0x8000C848: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C84C: nop

    // 0x8000C850: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8000C854: nop

    // 0x8000C858: andi        $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 & 0X1000;
    // 0x8000C85C: bne         $t6, $zero, L_8000C8A4
    if (ctx->r14 != 0) {
        // 0x8000C860: nop
    
            goto L_8000C8A4;
    }
    // 0x8000C860: nop

    // 0x8000C864: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C868: nop

    // 0x8000C86C: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8000C870: nop

    // 0x8000C874: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8000C878: sw          $t9, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r25;
    // 0x8000C87C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C880: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000C884: lb          $t1, 0x29($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X29);
    // 0x8000C888: nop

    // 0x8000C88C: bne         $t1, $at, L_8000C8A4
    if (ctx->r9 != ctx->r1) {
        // 0x8000C890: nop
    
            goto L_8000C8A4;
    }
    // 0x8000C890: nop

    // 0x8000C894: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x8000C898: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x8000C89C: jal         0x8000A8B4
    // 0x8000C8A0: nop

    func_8000A8B4(rdram, ctx);
        goto after_0;
    // 0x8000C8A0: nop

    after_0:
L_8000C8A4:
    // 0x8000C8A4: lbu         $t2, 0x27($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X27);
    // 0x8000C8A8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C8AC: nop

    // 0x8000C8B0: sb          $t2, 0x25($t3)
    MEM_B(0X25, ctx->r11) = ctx->r10;
    // 0x8000C8B4: b           L_8000C8BC
    // 0x8000C8B8: nop

        goto L_8000C8BC;
    // 0x8000C8B8: nop

L_8000C8BC:
    // 0x8000C8BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C8C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000C8C4: jr          $ra
    // 0x8000C8C8: nop

    return;
    // 0x8000C8C8: nop

;}
RECOMP_FUNC void func_80028260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028260: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80028264: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80028268: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x8002826C: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80028270: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x80028274: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80028278: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x8002827C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80028280: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80028284: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80028288: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002828C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80028290: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80028294: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80028298: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002829C: sw          $t9, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r25;
    // 0x800282A0: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x800282A4: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x800282A8: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800282AC: nop

    // 0x800282B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800282B4: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x800282B8: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x800282BC: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x800282C0: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800282C4: nop

    // 0x800282C8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800282CC: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x800282D0: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x800282D4: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x800282D8: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800282DC: nop

    // 0x800282E0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800282E4: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x800282E8: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x800282EC: nop

    // 0x800282F0: lwc1        $f10, 0x24($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X24);
    // 0x800282F4: nop

    // 0x800282F8: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x800282FC: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x80028300: nop

    // 0x80028304: lwc1        $f16, 0x28($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80028308: nop

    // 0x8002830C: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x80028310: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80028314: nop

    // 0x80028318: lwc1        $f18, 0x2C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8002831C: nop

    // 0x80028320: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x80028324: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80028328: lwc1        $f14, 0x9C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002832C: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x80028330: jal         0x80067748
    // 0x80028334: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x80028334: nop

    after_0:
    // 0x80028338: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002833C: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x80028340: nop

    // 0x80028344: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80028348: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x8002834C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80028350: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x80028354: nop

    // 0x80028358: sb          $t8, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r24;
    // 0x8002835C: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80028360: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80028364: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80028368: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002836C: lw          $t1, 0x76F0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X76F0);
    // 0x80028370: nop

    // 0x80028374: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x80028378: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8002837C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80028380: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80028384: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80028388: lw          $t4, 0x7700($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7700);
    // 0x8002838C: nop

    // 0x80028390: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x80028394: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80028398: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002839C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800283A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800283A4: lw          $t7, 0x7710($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7710);
    // 0x800283A8: nop

    // 0x800283AC: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x800283B0: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x800283B4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800283B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800283BC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800283C0: lw          $t0, 0x7720($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7720);
    // 0x800283C4: nop

    // 0x800283C8: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x800283CC: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x800283D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800283D4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800283D8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800283DC: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800283E0: nop

    // 0x800283E4: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x800283E8: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x800283EC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800283F0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800283F4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800283F8: lw          $t5, 0x7730($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7730);
    // 0x800283FC: nop

    // 0x80028400: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x80028404: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x80028408: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002840C: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80028410: jal         0x80015634
    // 0x80028414: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x80028414: nop

    after_1:
    // 0x80028418: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x8002841C: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_80028420:
    // 0x80028420: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80028424: nop

    // 0x80028428: bne         $t6, $zero, L_8002844C
    if (ctx->r14 != 0) {
        // 0x8002842C: nop
    
            goto L_8002844C;
    }
    // 0x8002842C: nop

    // 0x80028430: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80028434: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80028438: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8002843C: nop

    // 0x80028440: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80028444: b           L_80028480
    // 0x80028448: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
        goto L_80028480;
    // 0x80028448: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
L_8002844C:
    // 0x8002844C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80028450: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80028454: bne         $t7, $at, L_80028468
    if (ctx->r15 != ctx->r1) {
        // 0x80028458: nop
    
            goto L_80028468;
    }
    // 0x80028458: nop

    // 0x8002845C: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80028460: b           L_80028480
    // 0x80028464: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
        goto L_80028480;
    // 0x80028464: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
L_80028468:
    // 0x80028468: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002846C: lwc1        $f4, -0x4250($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4250);
    // 0x80028470: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80028474: nop

    // 0x80028478: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8002847C: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
L_80028480:
    // 0x80028480: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80028484: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80028488: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8002848C: nop

    // 0x80028490: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80028494: nop

    // 0x80028498: bc1f        L_800284B8
    if (!c1cs) {
        // 0x8002849C: nop
    
            goto L_800284B8;
    }
    // 0x8002849C: nop

    // 0x800284A0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800284A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800284A8: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800284AC: nop

    // 0x800284B0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800284B4: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
L_800284B8:
    // 0x800284B8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800284BC: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800284C0: lwc1        $f11, -0x4248($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4248);
    // 0x800284C4: lwc1        $f10, -0x4244($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4244);
    // 0x800284C8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800284CC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800284D0: jal         0x80034970
    // 0x800284D4: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x800284D4: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x800284D8: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x800284DC: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x800284E0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800284E4: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800284E8: nop

    // 0x800284EC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800284F0: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800284F4: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x800284F8: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800284FC: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80028500: nop

    // 0x80028504: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80028508: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x8002850C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80028510: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80028514: lwc1        $f17, -0x4240($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4240);
    // 0x80028518: lwc1        $f16, -0x423C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X423C);
    // 0x8002851C: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80028520: mul.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f16.d);
    // 0x80028524: jal         0x80036570
    // 0x80028528: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80028528: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x8002852C: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80028530: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80028534: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80028538: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8002853C: nop

    // 0x80028540: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80028544: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80028548: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x8002854C: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80028550: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80028554: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x80028558: jal         0x80067748
    // 0x8002855C: nop

    func_80067748(rdram, ctx);
        goto after_4;
    // 0x8002855C: nop

    after_4:
    // 0x80028560: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x80028564: nop

    // 0x80028568: bne         $t8, $zero, L_80028690
    if (ctx->r24 != 0) {
        // 0x8002856C: nop
    
            goto L_80028690;
    }
    // 0x8002856C: nop

    // 0x80028570: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80028574: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x80028578: nop

    // 0x8002857C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80028580: bne         $t0, $zero, L_80028628
    if (ctx->r8 != 0) {
        // 0x80028584: nop
    
            goto L_80028628;
    }
    // 0x80028584: nop

    // 0x80028588: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002858C: addiu       $t1, $t1, 0x7760
    ctx->r9 = ADD32(ctx->r9, 0X7760);
    // 0x80028590: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80028594: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80028598: nop

    // 0x8002859C: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x800285A0: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x800285A4: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800285A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800285AC: nop

    // 0x800285B0: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800285B4: nop

    // 0x800285B8: bc1f        L_800285CC
    if (!c1cs) {
        // 0x800285BC: nop
    
            goto L_800285CC;
    }
    // 0x800285BC: nop

    // 0x800285C0: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x800285C4: b           L_800285CC
    // 0x800285C8: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
        goto L_800285CC;
    // 0x800285C8: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
L_800285CC:
    // 0x800285CC: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800285D0: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800285D4: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x800285D8: nop

    // 0x800285DC: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x800285E0: jal         0x800366E0
    // 0x800285E4: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_5;
    // 0x800285E4: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_5:
    // 0x800285E8: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x800285EC: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800285F0: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x800285F4: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x800285F8: nop

    // 0x800285FC: bc1f        L_80028620
    if (!c1cs) {
        // 0x80028600: nop
    
            goto L_80028620;
    }
    // 0x80028600: nop

    // 0x80028604: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80028608: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8002860C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80028610: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x80028614: sllv        $t5, $t4, $t3
    ctx->r13 = S32(ctx->r12 << (ctx->r11 & 31));
    // 0x80028618: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x8002861C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_80028620:
    // 0x80028620: b           L_80028688
    // 0x80028624: nop

        goto L_80028688;
    // 0x80028624: nop

L_80028628:
    // 0x80028628: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002862C: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80028630: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80028634: nop

    // 0x80028638: mul.s       $f18, $f10, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8002863C: jal         0x800366E0
    // 0x80028640: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_6;
    // 0x80028640: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    after_6:
    // 0x80028644: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80028648: addiu       $t8, $t8, 0x7760
    ctx->r24 = ADD32(ctx->r24, 0X7760);
    // 0x8002864C: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80028650: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80028654: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80028658: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8002865C: add.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80028660: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80028664: nop

    // 0x80028668: bc1f        L_80028688
    if (!c1cs) {
        // 0x8002866C: nop
    
            goto L_80028688;
    }
    // 0x8002866C: nop

    // 0x80028670: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80028674: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x80028678: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8002867C: sllv        $t1, $t0, $t9
    ctx->r9 = S32(ctx->r8 << (ctx->r25 & 31));
    // 0x80028680: or          $t4, $t1, $t2
    ctx->r12 = ctx->r9 | ctx->r10;
    // 0x80028684: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
L_80028688:
    // 0x80028688: b           L_80028864
    // 0x8002868C: nop

        goto L_80028864;
    // 0x8002868C: nop

L_80028690:
    // 0x80028690: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80028694: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x80028698: nop

    // 0x8002869C: andi        $t5, $t3, 0x1
    ctx->r13 = ctx->r11 & 0X1;
    // 0x800286A0: bne         $t5, $zero, L_8002878C
    if (ctx->r13 != 0) {
        // 0x800286A4: nop
    
            goto L_8002878C;
    }
    // 0x800286A4: nop

    // 0x800286A8: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800286AC: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x800286B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800286B4: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x800286B8: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x800286BC: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x800286C0: sra         $t2, $t9, 31
    ctx->r10 = S32(SIGNED(ctx->r25) >> 31);
    // 0x800286C4: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x800286C8: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x800286CC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800286D0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800286D4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800286D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800286DC: addiu       $t4, $t4, 0x76F0
    ctx->r12 = ADD32(ctx->r12, 0X76F0);
    // 0x800286E0: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x800286E4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800286E8: sra         $a0, $t6, 31
    ctx->r4 = S32(SIGNED(ctx->r14) >> 31);
    // 0x800286EC: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800286F0: sra         $a2, $t7, 31
    ctx->r6 = S32(SIGNED(ctx->r15) >> 31);
    // 0x800286F4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800286F8: or          $t7, $t5, $zero
    ctx->r15 = ctx->r13 | 0;
    // 0x800286FC: sra         $t6, $t5, 31
    ctx->r14 = S32(SIGNED(ctx->r13) >> 31);
    // 0x80028700: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80028704: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80028708: addiu       $t8, $t8, 0x7700
    ctx->r24 = ADD32(ctx->r24, 0X7700);
    // 0x8002870C: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80028710: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80028714: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x80028718: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x8002871C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80028720: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80028724: addiu       $t1, $t1, 0x7710
    ctx->r9 = ADD32(ctx->r9, 0X7710);
    // 0x80028728: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x8002872C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80028730: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x80028734: sra         $t4, $t9, 31
    ctx->r12 = S32(SIGNED(ctx->r25) >> 31);
    // 0x80028738: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x8002873C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80028740: addiu       $t6, $t6, 0x7720
    ctx->r14 = ADD32(ctx->r14, 0X7720);
    // 0x80028744: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80028748: nop

    // 0x8002874C: or          $t9, $t7, $zero
    ctx->r25 = ctx->r15 | 0;
    // 0x80028750: sra         $t8, $t7, 31
    ctx->r24 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80028754: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80028758: jal         0x8001608C
    // 0x8002875C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    Math_ComparePlanes(rdram, ctx);
        goto after_7;
    // 0x8002875C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    after_7:
    // 0x80028760: bne         $v0, $zero, L_80028784
    if (ctx->r2 != 0) {
        // 0x80028764: nop
    
            goto L_80028784;
    }
    // 0x80028764: nop

    // 0x80028768: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8002876C: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x80028770: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80028774: addiu       $t2, $t0, 0x3
    ctx->r10 = ADD32(ctx->r8, 0X3);
    // 0x80028778: sllv        $t1, $t3, $t2
    ctx->r9 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x8002877C: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x80028780: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
L_80028784:
    // 0x80028784: b           L_80028864
    // 0x80028788: nop

        goto L_80028864;
    // 0x80028788: nop

L_8002878C:
    // 0x8002878C: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80028790: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80028794: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80028798: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x8002879C: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x800287A0: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x800287A4: sra         $t2, $t9, 31
    ctx->r10 = S32(SIGNED(ctx->r25) >> 31);
    // 0x800287A8: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x800287AC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x800287B0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800287B4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800287B8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800287BC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800287C0: addiu       $t4, $t4, 0x76F0
    ctx->r12 = ADD32(ctx->r12, 0X76F0);
    // 0x800287C4: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x800287C8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800287CC: sra         $a0, $t6, 31
    ctx->r4 = S32(SIGNED(ctx->r14) >> 31);
    // 0x800287D0: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800287D4: sra         $a2, $t7, 31
    ctx->r6 = S32(SIGNED(ctx->r15) >> 31);
    // 0x800287D8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800287DC: or          $t7, $t5, $zero
    ctx->r15 = ctx->r13 | 0;
    // 0x800287E0: sra         $t6, $t5, 31
    ctx->r14 = S32(SIGNED(ctx->r13) >> 31);
    // 0x800287E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800287E8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800287EC: addiu       $t8, $t8, 0x7700
    ctx->r24 = ADD32(ctx->r24, 0X7700);
    // 0x800287F0: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x800287F4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800287F8: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x800287FC: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x80028800: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80028804: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80028808: addiu       $t1, $t1, 0x7710
    ctx->r9 = ADD32(ctx->r9, 0X7710);
    // 0x8002880C: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x80028810: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80028814: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x80028818: sra         $t4, $t9, 31
    ctx->r12 = S32(SIGNED(ctx->r25) >> 31);
    // 0x8002881C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x80028820: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80028824: addiu       $t6, $t6, 0x7720
    ctx->r14 = ADD32(ctx->r14, 0X7720);
    // 0x80028828: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8002882C: nop

    // 0x80028830: or          $t9, $t7, $zero
    ctx->r25 = ctx->r15 | 0;
    // 0x80028834: sra         $t8, $t7, 31
    ctx->r24 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80028838: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8002883C: jal         0x8001608C
    // 0x80028840: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    Math_ComparePlanes(rdram, ctx);
        goto after_8;
    // 0x80028840: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    after_8:
    // 0x80028844: bne         $v0, $zero, L_80028864
    if (ctx->r2 != 0) {
        // 0x80028848: nop
    
            goto L_80028864;
    }
    // 0x80028848: nop

    // 0x8002884C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80028850: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x80028854: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80028858: sllv        $t3, $t2, $t0
    ctx->r11 = S32(ctx->r10 << (ctx->r8 & 31));
    // 0x8002885C: or          $t4, $t3, $t1
    ctx->r12 = ctx->r11 | ctx->r9;
    // 0x80028860: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
L_80028864:
    // 0x80028864: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80028868: nop

    // 0x8002886C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80028870: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80028874: bne         $at, $zero, L_80028420
    if (ctx->r1 != 0) {
        // 0x80028878: sw          $t6, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r14;
            goto L_80028420;
    }
    // 0x80028878: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x8002887C: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x80028880: nop

    // 0x80028884: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x80028888: bne         $t8, $zero, L_80028928
    if (ctx->r24 != 0) {
        // 0x8002888C: nop
    
            goto L_80028928;
    }
    // 0x8002888C: nop

    // 0x80028890: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80028894: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80028898: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002889C: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800288A0: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x800288A4: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x800288A8: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800288AC: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800288B0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800288B4: jal         0x80067748
    // 0x800288B8: add.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f10.fl;
    func_80067748(rdram, ctx);
        goto after_9;
    // 0x800288B8: add.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f10.fl;
    after_9:
    // 0x800288BC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800288C0: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x800288C4: nop

    // 0x800288C8: andi        $t2, $t9, 0x1
    ctx->r10 = ctx->r25 & 0X1;
    // 0x800288CC: bne         $t2, $zero, L_80028928
    if (ctx->r10 != 0) {
        // 0x800288D0: nop
    
            goto L_80028928;
    }
    // 0x800288D0: nop

    // 0x800288D4: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800288D8: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800288DC: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800288E0: nop

    // 0x800288E4: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x800288E8: jal         0x800366E0
    // 0x800288EC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_10;
    // 0x800288EC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_10:
    // 0x800288F0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800288F4: addiu       $t0, $t0, 0x7760
    ctx->r8 = ADD32(ctx->r8, 0X7760);
    // 0x800288F8: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800288FC: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80028900: nop

    // 0x80028904: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x80028908: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8002890C: nop

    // 0x80028910: bc1f        L_80028928
    if (!c1cs) {
        // 0x80028914: nop
    
            goto L_80028928;
    }
    // 0x80028914: nop

    // 0x80028918: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x8002891C: nop

    // 0x80028920: ori         $t1, $t3, 0x40
    ctx->r9 = ctx->r11 | 0X40;
    // 0x80028924: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
L_80028928:
    // 0x80028928: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x8002892C: b           L_8002893C
    // 0x80028930: nop

        goto L_8002893C;
    // 0x80028930: nop

    // 0x80028934: b           L_8002893C
    // 0x80028938: nop

        goto L_8002893C;
    // 0x80028938: nop

L_8002893C:
    // 0x8002893C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80028940: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80028944: jr          $ra
    // 0x80028948: nop

    return;
    // 0x80028948: nop

;}
RECOMP_FUNC void func_8000BBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BBC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000BBC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000BBCC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000BBD0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000BBD4: lw          $t6, 0x2D68($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D68);
    // 0x8000BBD8: nop

    // 0x8000BBDC: bne         $t6, $zero, L_8000BBEC
    if (ctx->r14 != 0) {
        // 0x8000BBE0: nop
    
            goto L_8000BBEC;
    }
    // 0x8000BBE0: nop

    // 0x8000BBE4: b           L_8000BD10
    // 0x8000BBE8: nop

        goto L_8000BD10;
    // 0x8000BBE8: nop

L_8000BBEC:
    // 0x8000BBEC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000BBF0: lw          $t7, -0x5CF4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5CF4);
    // 0x8000BBF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8000BBF8: blez        $t7, L_8000BC7C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8000BBFC: nop
    
            goto L_8000BC7C;
    }
    // 0x8000BBFC: nop

L_8000BC00:
    // 0x8000BC00: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8000BC04: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000BC08: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8000BC0C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8000BC10: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000BC14: lw          $t0, 0x2D5C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D5C);
    // 0x8000BC18: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8000BC1C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000BC20: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8000BC24: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8000BC28: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000BC2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000BC30: lw          $t3, 0xC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC);
    // 0x8000BC34: nop

    // 0x8000BC38: beq         $t3, $at, L_8000BC48
    if (ctx->r11 == ctx->r1) {
        // 0x8000BC3C: nop
    
            goto L_8000BC48;
    }
    // 0x8000BC3C: nop

    // 0x8000BC40: b           L_8000BC60
    // 0x8000BC44: nop

        goto L_8000BC60;
    // 0x8000BC44: nop

L_8000BC48:
    // 0x8000BC48: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8000BC4C: nop

    // 0x8000BC50: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8000BC54: nop

    // 0x8000BC58: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x8000BC5C: sw          $t6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r14;
L_8000BC60:
    // 0x8000BC60: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8000BC64: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000BC68: lw          $t9, -0x5CF4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5CF4);
    // 0x8000BC6C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8000BC70: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8000BC74: bne         $at, $zero, L_8000BC00
    if (ctx->r1 != 0) {
        // 0x8000BC78: sw          $t8, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r24;
            goto L_8000BC00;
    }
    // 0x8000BC78: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_8000BC7C:
    // 0x8000BC7C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BC80: sw          $zero, 0x2D68($at)
    MEM_W(0X2D68, ctx->r1) = 0;
    // 0x8000BC84: lh          $t0, 0x22($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X22);
    // 0x8000BC88: nop

    // 0x8000BC8C: beq         $t0, $zero, L_8000BCB4
    if (ctx->r8 == 0) {
        // 0x8000BC90: nop
    
            goto L_8000BCB4;
    }
    // 0x8000BC90: nop

    // 0x8000BC94: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BC98: lwc1        $f4, 0x2D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D6C);
    // 0x8000BC9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000BCA0: nop

    // 0x8000BCA4: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8000BCA8: nop

    // 0x8000BCAC: bc1f        L_8000BCBC
    if (!c1cs) {
        // 0x8000BCB0: nop
    
            goto L_8000BCBC;
    }
    // 0x8000BCB0: nop

L_8000BCB4:
    // 0x8000BCB4: b           L_8000BD10
    // 0x8000BCB8: nop

        goto L_8000BD10;
    // 0x8000BCB8: nop

L_8000BCBC:
    // 0x8000BCBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000BCC0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BCC4: swc1        $f8, 0x2D70($at)
    MEM_W(0X2D70, ctx->r1) = ctx->f8.u32l;
    // 0x8000BCC8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BCCC: sh          $zero, 0x2D76($at)
    MEM_H(0X2D76, ctx->r1) = 0;
    // 0x8000BCD0: jal         0x8000678C
    // 0x8000BCD4: nop

    func_8000678C(rdram, ctx);
        goto after_0;
    // 0x8000BCD4: nop

    after_0:
    // 0x8000BCD8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000BCDC: lh          $t1, 0x2D74($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X2D74);
    // 0x8000BCE0: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x8000BCE4: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8000BCE8: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8000BCEC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000BCF0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BCF4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8000BCF8: nop

    // 0x8000BCFC: div.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8000BD00: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8000BD04: swc1        $f8, 0x2D6C($at)
    MEM_W(0X2D6C, ctx->r1) = ctx->f8.u32l;
    // 0x8000BD08: b           L_8000BD10
    // 0x8000BD0C: nop

        goto L_8000BD10;
    // 0x8000BD0C: nop

L_8000BD10:
    // 0x8000BD10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000BD14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000BD18: jr          $ra
    // 0x8000BD1C: nop

    return;
    // 0x8000BD1C: nop

;}
RECOMP_FUNC void func_80025978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025978: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8002597C: b           L_80025984
    // 0x80025980: nop

        goto L_80025984;
    // 0x80025980: nop

L_80025984:
    // 0x80025984: jr          $ra
    // 0x80025988: nop

    return;
    // 0x80025988: nop

;}
RECOMP_FUNC void func_8001F328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F328: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001F32C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F330: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001F334: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001F338: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001F33C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8001F340: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001F344: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001F348: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001F34C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001F350: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F354: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8001F358: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F35C: jal         0x800383A0
    // 0x8001F360: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    osPfsFileState_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F360: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    after_0:
    // 0x8001F364: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8001F368: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F36C: b           L_8001F37C
    // 0x8001F370: nop

        goto L_8001F37C;
    // 0x8001F370: nop

    // 0x8001F374: b           L_8001F37C
    // 0x8001F378: nop

        goto L_8001F37C;
    // 0x8001F378: nop

L_8001F37C:
    // 0x8001F37C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001F384: jr          $ra
    // 0x8001F388: nop

    return;
    // 0x8001F388: nop

;}
RECOMP_FUNC void alSynSetVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EBB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003EBB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EBB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003EBBC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8003EBC0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8003EBC4: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8003EBC8: beql        $t7, $zero, L_8003EC40
    if (ctx->r15 == 0) {
        // 0x8003EBCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003EC40;
    }
    goto skip_0;
    // 0x8003EBCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003EBD0: jal         0x80035B20
    // 0x8003EBD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8003EBD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003EBD8: beq         $v0, $zero, L_8003EC3C
    if (ctx->r2 == 0) {
        // 0x8003EBDC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8003EC3C;
    }
    // 0x8003EBDC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8003EBE0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8003EBE4: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x8003EBE8: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x8003EBEC: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8003EBF0: lw          $t1, 0xD8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD8);
    // 0x8003EBF4: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
    // 0x8003EBF8: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8003EBFC: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8003EC00: lh          $t4, 0x2A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2A);
    // 0x8003EC04: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x8003EC08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8003EC0C: jal         0x80035A18
    // 0x8003EC10: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    _timeToSamples(rdram, ctx);
        goto after_1;
    // 0x8003EC10: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x8003EC14: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EC18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003EC1C: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x8003EC20: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8003EC24: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8003EC28: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8003EC2C: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x8003EC30: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8003EC34: jalr        $t9
    // 0x8003EC38: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8003EC38: nop

    after_2:
L_8003EC3C:
    // 0x8003EC3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EC40:
    // 0x8003EC40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003EC44: jr          $ra
    // 0x8003EC48: nop

    return;
    // 0x8003EC48: nop

;}
RECOMP_FUNC void func_8000C9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C9C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000C9C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C9CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000C9D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000C9D4: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000C9D8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000C9DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000C9E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000C9E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C9E8: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x8000C9EC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000C9F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C9F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000C9F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8000C9FC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CA00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000CA04: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x8000CA08: nop

    // 0x8000CA0C: beq         $t1, $at, L_8000CA1C
    if (ctx->r9 == ctx->r1) {
        // 0x8000CA10: nop
    
            goto L_8000CA1C;
    }
    // 0x8000CA10: nop

    // 0x8000CA14: b           L_8000CAC8
    // 0x8000CA18: nop

        goto L_8000CAC8;
    // 0x8000CA18: nop

L_8000CA1C:
    // 0x8000CA1C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CA20: nop

    // 0x8000CA24: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8000CA28: nop

    // 0x8000CA2C: andi        $t4, $t3, 0x10
    ctx->r12 = ctx->r11 & 0X10;
    // 0x8000CA30: beq         $t4, $zero, L_8000CA40
    if (ctx->r12 == 0) {
        // 0x8000CA34: nop
    
            goto L_8000CA40;
    }
    // 0x8000CA34: nop

    // 0x8000CA38: b           L_8000CAC8
    // 0x8000CA3C: nop

        goto L_8000CAC8;
    // 0x8000CA3C: nop

L_8000CA40:
    // 0x8000CA40: lb          $t5, 0x27($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X27);
    // 0x8000CA44: nop

    // 0x8000CA48: bgez        $t5, L_8000CA54
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8000CA4C: nop
    
            goto L_8000CA54;
    }
    // 0x8000CA4C: nop

    // 0x8000CA50: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
L_8000CA54:
    // 0x8000CA54: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CA58: nop

    // 0x8000CA5C: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8000CA60: nop

    // 0x8000CA64: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x8000CA68: bne         $t8, $zero, L_8000CAB0
    if (ctx->r24 != 0) {
        // 0x8000CA6C: nop
    
            goto L_8000CAB0;
    }
    // 0x8000CA6C: nop

    // 0x8000CA70: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CA74: nop

    // 0x8000CA78: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8000CA7C: nop

    // 0x8000CA80: ori         $t1, $t0, 0x8
    ctx->r9 = ctx->r8 | 0X8;
    // 0x8000CA84: sw          $t1, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r9;
    // 0x8000CA88: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CA8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000CA90: lb          $t3, 0x29($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X29);
    // 0x8000CA94: nop

    // 0x8000CA98: bne         $t3, $at, L_8000CAB0
    if (ctx->r11 != ctx->r1) {
        // 0x8000CA9C: nop
    
            goto L_8000CAB0;
    }
    // 0x8000CA9C: nop

    // 0x8000CAA0: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x8000CAA4: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x8000CAA8: jal         0x8000AAB4
    // 0x8000CAAC: nop

    func_8000AAB4(rdram, ctx);
        goto after_0;
    // 0x8000CAAC: nop

    after_0:
L_8000CAB0:
    // 0x8000CAB0: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x8000CAB4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000CAB8: nop

    // 0x8000CABC: sb          $t4, 0x28($t5)
    MEM_B(0X28, ctx->r13) = ctx->r12;
    // 0x8000CAC0: b           L_8000CAC8
    // 0x8000CAC4: nop

        goto L_8000CAC8;
    // 0x8000CAC4: nop

L_8000CAC8:
    // 0x8000CAC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000CAD0: jr          $ra
    // 0x8000CAD4: nop

    return;
    // 0x8000CAD4: nop

;}
RECOMP_FUNC void func_80017664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017664: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80017668: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001766C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80017670: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80017674: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80017678: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8001767C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80017680: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80017684: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017688: jal         0x80017460
    // 0x8001768C: nop

    func_80017460(rdram, ctx);
        goto after_0;
    // 0x8001768C: nop

    after_0:
    // 0x80017690: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80017694: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80017698: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8001769C: jal         0x800171E0
    // 0x800176A0: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    func_800171E0(rdram, ctx);
        goto after_1;
    // 0x800176A0: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    after_1:
    // 0x800176A4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x800176A8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x800176AC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800176B0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x800176B4: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x800176B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800176BC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800176C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800176C4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800176C8: jal         0x80017028
    // 0x800176CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80017028(rdram, ctx);
        goto after_2;
    // 0x800176CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_2:
    // 0x800176D0: b           L_800176E0
    // 0x800176D4: nop

        goto L_800176E0;
    // 0x800176D4: nop

    // 0x800176D8: b           L_800176E0
    // 0x800176DC: nop

        goto L_800176E0;
    // 0x800176DC: nop

L_800176E0:
    // 0x800176E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800176E4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800176E8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800176EC: jr          $ra
    // 0x800176F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800176F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80017460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017460: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80017464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017468: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8001746C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80017470: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017474: bne         $t6, $at, L_80017484
    if (ctx->r14 != ctx->r1) {
        // 0x80017478: nop
    
            goto L_80017484;
    }
    // 0x80017478: nop

    // 0x8001747C: b           L_800175E0
    // 0x80017480: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800175E0;
    // 0x80017480: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80017484:
    // 0x80017484: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80017488: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001748C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80017490: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80017494: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80017498: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001749C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800174A0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800174A4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800174A8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800174AC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800174B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800174B4: lwc1        $f4, -0x1EC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x800174B8: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800174BC: nop

    // 0x800174C0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800174C4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x800174C8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800174CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800174D0: lwc1        $f10, -0x1EBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x800174D4: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800174D8: nop

    // 0x800174DC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800174E0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x800174E4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800174E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800174EC: lwc1        $f4, -0x1EB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x800174F0: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800174F4: nop

    // 0x800174F8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800174FC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80017500: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80017504: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80017508: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8001750C: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80017510: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80017514: nop

    // 0x80017518: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8001751C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80017520: jal         0x800366E0
    // 0x80017524: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x80017524: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_0:
    // 0x80017528: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8001752C: nop

    // 0x80017530: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80017534: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80017538: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001753C: nop

    // 0x80017540: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80017544: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x80017548: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8001754C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80017550: nop

    // 0x80017554: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80017558: nop

    // 0x8001755C: slti        $at, $t6, 0x3C1
    ctx->r1 = SIGNED(ctx->r14) < 0X3C1 ? 1 : 0;
    // 0x80017560: bne         $at, $zero, L_80017574
    if (ctx->r1 != 0) {
        // 0x80017564: nop
    
            goto L_80017574;
    }
    // 0x80017564: nop

    // 0x80017568: addiu       $t7, $zero, 0x3C0
    ctx->r15 = ADD32(0, 0X3C0);
    // 0x8001756C: b           L_80017590
    // 0x80017570: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
        goto L_80017590;
    // 0x80017570: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_80017574:
    // 0x80017574: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80017578: nop

    // 0x8001757C: slti        $at, $t8, 0x1E0
    ctx->r1 = SIGNED(ctx->r24) < 0X1E0 ? 1 : 0;
    // 0x80017580: beq         $at, $zero, L_80017590
    if (ctx->r1 == 0) {
        // 0x80017584: nop
    
            goto L_80017590;
    }
    // 0x80017584: nop

    // 0x80017588: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x8001758C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_80017590:
    // 0x80017590: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80017594: ori         $t1, $zero, 0xEE20
    ctx->r9 = 0 | 0XEE20;
    // 0x80017598: div         $zero, $t1, $t0
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r8)));
    // 0x8001759C: bne         $t0, $zero, L_800175A8
    if (ctx->r8 != 0) {
        // 0x800175A0: nop
    
            goto L_800175A8;
    }
    // 0x800175A0: nop

    // 0x800175A4: break       7
    do_break(2147579300);
L_800175A8:
    // 0x800175A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800175AC: bne         $t0, $at, L_800175C0
    if (ctx->r8 != ctx->r1) {
        // 0x800175B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800175C0;
    }
    // 0x800175B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800175B4: bne         $t1, $at, L_800175C0
    if (ctx->r9 != ctx->r1) {
        // 0x800175B8: nop
    
            goto L_800175C0;
    }
    // 0x800175B8: nop

    // 0x800175BC: break       6
    do_break(2147579324);
L_800175C0:
    // 0x800175C0: mflo        $t2
    ctx->r10 = lo;
    // 0x800175C4: sh          $t2, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r10;
    // 0x800175C8: nop

    // 0x800175CC: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x800175D0: b           L_800175E0
    // 0x800175D4: nop

        goto L_800175E0;
    // 0x800175D4: nop

    // 0x800175D8: b           L_800175E0
    // 0x800175DC: nop

        goto L_800175E0;
    // 0x800175DC: nop

L_800175E0:
    // 0x800175E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800175E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800175E8: jr          $ra
    // 0x800175EC: nop

    return;
    // 0x800175EC: nop

;}
RECOMP_FUNC void Init_Pak(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FAD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001FAD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001FADC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FAE0: sw          $zero, 0x6E20($at)
    MEM_W(0X6E20, ctx->r1) = 0;
    // 0x8001FAE4: jal         0x8001F9DC
    // 0x8001FAE8: nop

    Check_PakState(rdram, ctx);
        goto after_0;
    // 0x8001FAE8: nop

    after_0:
    // 0x8001FAEC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001FAF0: lw          $t6, 0x6DF8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DF8);
    // 0x8001FAF4: nop

    // 0x8001FAF8: bne         $t6, $zero, L_8001FB0C
    if (ctx->r14 != 0) {
        // 0x8001FAFC: nop
    
            goto L_8001FB0C;
    }
    // 0x8001FAFC: nop

    // 0x8001FB00: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB04: b           L_8001FB24
    // 0x8001FB08: sw          $zero, 0x6E20($at)
    MEM_W(0X6E20, ctx->r1) = 0;
        goto L_8001FB24;
    // 0x8001FB08: sw          $zero, 0x6E20($at)
    MEM_W(0X6E20, ctx->r1) = 0;
L_8001FB0C:
    // 0x8001FB0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001FB10: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB14: sw          $t7, 0x6E20($at)
    MEM_W(0X6E20, ctx->r1) = ctx->r15;
    // 0x8001FB18: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001FB1C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FB20: sw          $t8, 0x6DF8($at)
    MEM_W(0X6DF8, ctx->r1) = ctx->r24;
L_8001FB24:
    // 0x8001FB24: b           L_8001FB2C
    // 0x8001FB28: nop

        goto L_8001FB2C;
    // 0x8001FB28: nop

L_8001FB2C:
    // 0x8001FB2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001FB30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001FB34: jr          $ra
    // 0x8001FB38: nop

    return;
    // 0x8001FB38: nop

;}
RECOMP_FUNC void func_80014A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014A08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80014A0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80014A10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80014A14: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80014A18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80014A1C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80014A20: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80014A24: jal         0x800146F8
    // 0x80014A28: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    func_800146F8(rdram, ctx);
        goto after_0;
    // 0x80014A28: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    after_0:
    // 0x80014A2C: b           L_80014A34
    // 0x80014A30: nop

        goto L_80014A34;
    // 0x80014A30: nop

L_80014A34:
    // 0x80014A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014A3C: jr          $ra
    // 0x80014A40: nop

    return;
    // 0x80014A40: nop

;}
RECOMP_FUNC void func_8002B2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B2E4: jr          $ra
    // 0x8002B2E8: nop

    return;
    // 0x8002B2E8: nop

    // 0x8002B2EC: jr          $ra
    // 0x8002B2F0: nop

    return;
    // 0x8002B2F0: nop

;}
RECOMP_FUNC void Decode(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014BA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80014BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014BA8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80014BAC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80014BB0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80014BB4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80014BB8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80014BBC: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
L_80014BC0:
    // 0x80014BC0: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80014BC4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80014BC8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80014BCC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80014BD0: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80014BD4: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x80014BD8: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80014BDC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80014BE0: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80014BE4: nop

    // 0x80014BE8: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80014BEC: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80014BF0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80014BF4: bgez        $t7, L_80014BC0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80014BF8: sh          $t5, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r13;
            goto L_80014BC0;
    }
    // 0x80014BF8: sh          $t5, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r13;
    // 0x80014BFC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80014C00: nop

    // 0x80014C04: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x80014C08: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80014C0C: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_80014C10:
    // 0x80014C10: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80014C14: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80014C18: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80014C1C: sb          $zero, 0x5D70($at)
    MEM_B(0X5D70, ctx->r1) = 0;
    // 0x80014C20: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x80014C24: nop

    // 0x80014C28: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80014C2C: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80014C30: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80014C34: slti        $at, $t4, 0xFEE
    ctx->r1 = SIGNED(ctx->r12) < 0XFEE ? 1 : 0;
    // 0x80014C38: bne         $at, $zero, L_80014C10
    if (ctx->r1 != 0) {
        // 0x80014C3C: sh          $t2, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r10;
            goto L_80014C10;
    }
    // 0x80014C3C: sh          $t2, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r10;
    // 0x80014C40: addiu       $t5, $zero, 0xFEE
    ctx->r13 = ADD32(0, 0XFEE);
    // 0x80014C44: sh          $t5, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r13;
    // 0x80014C48: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
L_80014C4C:
    // 0x80014C4C: lhu         $t6, 0x24($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X24);
    // 0x80014C50: nop

    // 0x80014C54: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x80014C58: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80014C5C: andi        $t9, $t8, 0x100
    ctx->r25 = ctx->r24 & 0X100;
    // 0x80014C60: bne         $t9, $zero, L_80014CA0
    if (ctx->r25 != 0) {
        // 0x80014C64: sh          $t7, 0x24($sp)
        MEM_H(0X24, ctx->r29) = ctx->r15;
            goto L_80014CA0;
    }
    // 0x80014C64: sh          $t7, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r15;
    // 0x80014C68: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80014C6C: jal         0x80014B00
    // 0x80014C70: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    hgetc(rdram, ctx);
        goto after_0;
    // 0x80014C70: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x80014C74: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80014C78: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80014C7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80014C80: bne         $t1, $at, L_80014C90
    if (ctx->r9 != ctx->r1) {
        // 0x80014C84: nop
    
            goto L_80014C90;
    }
    // 0x80014C84: nop

    // 0x80014C88: b           L_80014E50
    // 0x80014C8C: nop

        goto L_80014E50;
    // 0x80014C8C: nop

L_80014C90:
    // 0x80014C90: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x80014C94: nop

    // 0x80014C98: ori         $t2, $t0, 0xFF00
    ctx->r10 = ctx->r8 | 0XFF00;
    // 0x80014C9C: sh          $t2, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r10;
L_80014CA0:
    // 0x80014CA0: lhu         $t3, 0x24($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X24);
    // 0x80014CA4: nop

    // 0x80014CA8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80014CAC: beq         $t4, $zero, L_80014D2C
    if (ctx->r12 == 0) {
        // 0x80014CB0: nop
    
            goto L_80014D2C;
    }
    // 0x80014CB0: nop

    // 0x80014CB4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80014CB8: jal         0x80014B00
    // 0x80014CBC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    hgetc(rdram, ctx);
        goto after_1;
    // 0x80014CBC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80014CC0: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80014CC4: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80014CC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80014CCC: bne         $t5, $at, L_80014CDC
    if (ctx->r13 != ctx->r1) {
        // 0x80014CD0: nop
    
            goto L_80014CDC;
    }
    // 0x80014CD0: nop

    // 0x80014CD4: b           L_80014E50
    // 0x80014CD8: nop

        goto L_80014E50;
    // 0x80014CD8: nop

L_80014CDC:
    // 0x80014CDC: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80014CE0: jal         0x80014B6C
    // 0x80014CE4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    hputc(rdram, ctx);
        goto after_2;
    // 0x80014CE4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x80014CE8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80014CEC: nop

    // 0x80014CF0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80014CF4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80014CF8: lh          $t9, 0x28($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X28);
    // 0x80014CFC: lh          $t1, 0x28($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X28);
    // 0x80014D00: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x80014D04: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80014D08: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80014D0C: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x80014D10: sh          $t0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r8;
    // 0x80014D14: sb          $t8, 0x5D70($at)
    MEM_B(0X5D70, ctx->r1) = ctx->r24;
    // 0x80014D18: lh          $t2, 0x28($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X28);
    // 0x80014D1C: nop

    // 0x80014D20: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x80014D24: b           L_80014E48
    // 0x80014D28: sh          $t3, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r11;
        goto L_80014E48;
    // 0x80014D28: sh          $t3, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r11;
L_80014D2C:
    // 0x80014D2C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80014D30: jal         0x80014B00
    // 0x80014D34: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    hgetc(rdram, ctx);
        goto after_3;
    // 0x80014D34: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x80014D38: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80014D3C: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80014D40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80014D44: bne         $t4, $at, L_80014D54
    if (ctx->r12 != ctx->r1) {
        // 0x80014D48: nop
    
            goto L_80014D54;
    }
    // 0x80014D48: nop

    // 0x80014D4C: b           L_80014E50
    // 0x80014D50: nop

        goto L_80014E50;
    // 0x80014D50: nop

L_80014D54:
    // 0x80014D54: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80014D58: jal         0x80014B00
    // 0x80014D5C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    hgetc(rdram, ctx);
        goto after_4;
    // 0x80014D5C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x80014D60: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80014D64: lh          $t5, 0x2C($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2C);
    // 0x80014D68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80014D6C: bne         $t5, $at, L_80014D7C
    if (ctx->r13 != ctx->r1) {
        // 0x80014D70: nop
    
            goto L_80014D7C;
    }
    // 0x80014D70: nop

    // 0x80014D74: b           L_80014E50
    // 0x80014D78: nop

        goto L_80014E50;
    // 0x80014D78: nop

L_80014D7C:
    // 0x80014D7C: lh          $t7, 0x2C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2C);
    // 0x80014D80: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80014D84: andi        $t8, $t7, 0xF0
    ctx->r24 = ctx->r15 & 0XF0;
    // 0x80014D88: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80014D8C: or          $t1, $t6, $t9
    ctx->r9 = ctx->r14 | ctx->r25;
    // 0x80014D90: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
    // 0x80014D94: lh          $t0, 0x2C($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2C);
    // 0x80014D98: nop

    // 0x80014D9C: andi        $t2, $t0, 0xF
    ctx->r10 = ctx->r8 & 0XF;
    // 0x80014DA0: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x80014DA4: sh          $t3, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r11;
    // 0x80014DA8: lh          $t4, 0x2C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2C);
    // 0x80014DAC: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x80014DB0: bltz        $t4, L_80014E48
    if (SIGNED(ctx->r12) < 0) {
        // 0x80014DB4: nop
    
            goto L_80014E48;
    }
    // 0x80014DB4: nop

L_80014DB8:
    // 0x80014DB8: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x80014DBC: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x80014DC0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80014DC4: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80014DC8: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x80014DCC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80014DD0: lbu         $t9, 0x5D70($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5D70);
    // 0x80014DD4: nop

    // 0x80014DD8: sh          $t9, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r25;
    // 0x80014DDC: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80014DE0: jal         0x80014B6C
    // 0x80014DE4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    hputc(rdram, ctx);
        goto after_5;
    // 0x80014DE4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x80014DE8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80014DEC: nop

    // 0x80014DF0: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x80014DF4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80014DF8: lh          $t3, 0x28($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X28);
    // 0x80014DFC: lh          $t4, 0x28($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X28);
    // 0x80014E00: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x80014E04: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80014E08: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80014E0C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80014E10: sh          $t5, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r13;
    // 0x80014E14: sb          $t2, 0x5D70($at)
    MEM_B(0X5D70, ctx->r1) = ctx->r10;
    // 0x80014E18: lh          $t7, 0x28($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X28);
    // 0x80014E1C: nop

    // 0x80014E20: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80014E24: sh          $t8, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r24;
    // 0x80014E28: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x80014E2C: lh          $t2, 0x2C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2C);
    // 0x80014E30: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80014E34: sll         $t1, $t9, 16
    ctx->r9 = S32(ctx->r25 << 16);
    // 0x80014E38: sra         $t0, $t1, 16
    ctx->r8 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80014E3C: slt         $at, $t2, $t0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80014E40: beq         $at, $zero, L_80014DB8
    if (ctx->r1 == 0) {
        // 0x80014E44: sh          $t9, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r25;
            goto L_80014DB8;
    }
    // 0x80014E44: sh          $t9, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r25;
L_80014E48:
    // 0x80014E48: b           L_80014C4C
    // 0x80014E4C: nop

        goto L_80014C4C;
    // 0x80014E4C: nop

L_80014E50:
    // 0x80014E50: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80014E54: b           L_80014E64
    // 0x80014E58: nop

        goto L_80014E64;
    // 0x80014E58: nop

    // 0x80014E5C: b           L_80014E64
    // 0x80014E60: nop

        goto L_80014E64;
    // 0x80014E60: nop

L_80014E64:
    // 0x80014E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014E68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80014E6C: jr          $ra
    // 0x80014E70: nop

    return;
    // 0x80014E70: nop

;}
RECOMP_FUNC void func_800026F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800026F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800026F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800026FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80002700: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80002704: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80002708: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8000270C: nop

    // 0x80002710: beq         $t6, $zero, L_8000279C
    if (ctx->r14 == 0) {
        // 0x80002714: nop
    
            goto L_8000279C;
    }
    // 0x80002714: nop

    // 0x80002718: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8000271C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80002720: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x80002724: nop

    // 0x80002728: bne         $t8, $at, L_80002738
    if (ctx->r24 != ctx->r1) {
        // 0x8000272C: nop
    
            goto L_80002738;
    }
    // 0x8000272C: nop

    // 0x80002730: jal         0x800322B0
    // 0x80002734: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x80002734: nop

    after_0:
L_80002738:
    // 0x80002738: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8000273C: addiu       $at, $zero, -0x31
    ctx->r1 = ADD32(0, -0X31);
    // 0x80002740: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80002744: nop

    // 0x80002748: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8000274C: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x80002750: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80002754: jal         0x800323FC
    // 0x80002758: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_1;
    // 0x80002758: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_1:
    // 0x8000275C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80002760: jal         0x8003258C
    // 0x80002764: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_2;
    // 0x80002764: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_2:
    // 0x80002768: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8000276C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80002770: nop

    // 0x80002774: sw          $t2, 0x274($t3)
    MEM_W(0X274, ctx->r11) = ctx->r10;
    // 0x80002778: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8000277C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80002780: nop

    // 0x80002784: bne         $t4, $t5, L_8000279C
    if (ctx->r12 != ctx->r13) {
        // 0x80002788: nop
    
            goto L_8000279C;
    }
    // 0x80002788: nop

    // 0x8000278C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80002790: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80002794: nop

    // 0x80002798: sw          $t6, 0x278($t7)
    MEM_W(0X278, ctx->r15) = ctx->r14;
L_8000279C:
    // 0x8000279C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800027A0: nop

    // 0x800027A4: beq         $t8, $zero, L_80002804
    if (ctx->r24 == 0) {
        // 0x800027A8: nop
    
            goto L_80002804;
    }
    // 0x800027A8: nop

    // 0x800027AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800027B0: nop

    // 0x800027B4: beq         $t8, $t0, L_80002804
    if (ctx->r24 == ctx->r8) {
        // 0x800027B8: nop
    
            goto L_80002804;
    }
    // 0x800027B8: nop

    // 0x800027BC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800027C0: nop

    // 0x800027C4: lw          $t9, 0x3C($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X3C);
    // 0x800027C8: lw          $a0, 0x38($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X38);
    // 0x800027CC: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x800027D0: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x800027D4: jal         0x800325D0
    // 0x800027D8: nop

    osDpSetNextBuffer_recomp(rdram, ctx);
        goto after_3;
    // 0x800027D8: nop

    after_3:
    // 0x800027DC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800027E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800027E4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800027E8: sw          $t2, -0x5D6C($at)
    MEM_W(-0X5D6C, ctx->r1) = ctx->r10;
    // 0x800027EC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800027F0: sw          $zero, -0x5D68($at)
    MEM_W(-0X5D68, ctx->r1) = 0;
    // 0x800027F4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800027F8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800027FC: nop

    // 0x80002800: sw          $t3, 0x278($t4)
    MEM_W(0X278, ctx->r12) = ctx->r11;
L_80002804:
    // 0x80002804: b           L_8000280C
    // 0x80002808: nop

        goto L_8000280C;
    // 0x80002808: nop

L_8000280C:
    // 0x8000280C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002810: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80002814: jr          $ra
    // 0x80002818: nop

    return;
    // 0x80002818: nop

;}
RECOMP_FUNC void func_8000BAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BAAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000BAB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000BAB4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000BAB8: lw          $t6, 0x2D68($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D68);
    // 0x8000BABC: nop

    // 0x8000BAC0: beq         $t6, $zero, L_8000BAD0
    if (ctx->r14 == 0) {
        // 0x8000BAC4: nop
    
            goto L_8000BAD0;
    }
    // 0x8000BAC4: nop

    // 0x8000BAC8: b           L_8000BBB4
    // 0x8000BACC: nop

        goto L_8000BBB4;
    // 0x8000BACC: nop

L_8000BAD0:
    // 0x8000BAD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000BAD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BAD8: sw          $t7, 0x2D68($at)
    MEM_W(0X2D68, ctx->r1) = ctx->r15;
    // 0x8000BADC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000BAE0: lw          $t8, -0x5CF4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CF4);
    // 0x8000BAE4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8000BAE8: blez        $t8, L_8000BBAC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8000BAEC: nop
    
            goto L_8000BBAC;
    }
    // 0x8000BAEC: nop

L_8000BAF0:
    // 0x8000BAF0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8000BAF4: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000BAF8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8000BAFC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8000BB00: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000BB04: lw          $t1, 0x2D5C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2D5C);
    // 0x8000BB08: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8000BB0C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8000BB10: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8000BB14: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8000BB18: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8000BB1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000BB20: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x8000BB24: nop

    // 0x8000BB28: beq         $t4, $at, L_8000BB38
    if (ctx->r12 == ctx->r1) {
        // 0x8000BB2C: nop
    
            goto L_8000BB38;
    }
    // 0x8000BB2C: nop

    // 0x8000BB30: b           L_8000BB90
    // 0x8000BB34: nop

        goto L_8000BB90;
    // 0x8000BB34: nop

L_8000BB38:
    // 0x8000BB38: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000BB3C: nop

    // 0x8000BB40: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8000BB44: nop

    // 0x8000BB48: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8000BB4C: beq         $t7, $zero, L_8000BB68
    if (ctx->r15 == 0) {
        // 0x8000BB50: nop
    
            goto L_8000BB68;
    }
    // 0x8000BB50: nop

    // 0x8000BB54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000BB58: jal         0x8000B738
    // 0x8000BB5C: nop

    func_8000B738(rdram, ctx);
        goto after_0;
    // 0x8000BB5C: nop

    after_0:
    // 0x8000BB60: b           L_8000BB90
    // 0x8000BB64: nop

        goto L_8000BB90;
    // 0x8000BB64: nop

L_8000BB68:
    // 0x8000BB68: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8000BB6C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000BB70: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000BB74: lh          $a1, 0x16($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X16);
    // 0x8000BB78: jal         0x80035310
    // 0x8000BB7C: nop

    alSndpSetSound(rdram, ctx);
        goto after_1;
    // 0x8000BB7C: nop

    after_1:
    // 0x8000BB80: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000BB84: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000BB88: jal         0x80035400
    // 0x8000BB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    alSndpSetVol(rdram, ctx);
        goto after_2;
    // 0x8000BB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_8000BB90:
    // 0x8000BB90: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8000BB94: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000BB98: lw          $t1, -0x5CF4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5CF4);
    // 0x8000BB9C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8000BBA0: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8000BBA4: bne         $at, $zero, L_8000BAF0
    if (ctx->r1 != 0) {
        // 0x8000BBA8: sw          $t0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r8;
            goto L_8000BAF0;
    }
    // 0x8000BBA8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
L_8000BBAC:
    // 0x8000BBAC: b           L_8000BBB4
    // 0x8000BBB0: nop

        goto L_8000BBB4;
    // 0x8000BBB0: nop

L_8000BBB4:
    // 0x8000BBB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000BBB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000BBBC: jr          $ra
    // 0x8000BBC0: nop

    return;
    // 0x8000BBC0: nop

;}
RECOMP_FUNC void func_800038A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800038A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800038A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800038AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800038B0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800038B4: nop

    // 0x800038B8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800038BC: beq         $t7, $zero, L_800038D4
    if (ctx->r15 == 0) {
        // 0x800038C0: nop
    
            goto L_800038D4;
    }
    // 0x800038C0: nop

    // 0x800038C4: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800038C8: nop

    // 0x800038CC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800038D0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_800038D4:
    // 0x800038D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800038D8: jal         0x8000D84C
    // 0x800038DC: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x800038DC: nop

    after_0:
    // 0x800038E0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800038E4: sw          $v0, 0x2EB0($at)
    MEM_W(0X2EB0, ctx->r1) = ctx->r2;
    // 0x800038E8: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800038EC: lw          $t0, 0x2EB0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2EB0);
    // 0x800038F0: nop

    // 0x800038F4: bne         $t0, $zero, L_80003904
    if (ctx->r8 != 0) {
        // 0x800038F8: nop
    
            goto L_80003904;
    }
    // 0x800038F8: nop

    // 0x800038FC: b           L_80003930
    // 0x80003900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80003930;
    // 0x80003900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80003904:
    // 0x80003904: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003908: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8000390C: lw          $a1, 0x2EB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2EB0);
    // 0x80003910: lw          $a0, -0x5CC0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5CC0);
    // 0x80003914: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80003918: jal         0x80002CD0
    // 0x8000391C: nop

    func_80002CD0(rdram, ctx);
        goto after_1;
    // 0x8000391C: nop

    after_1:
    // 0x80003920: b           L_80003930
    // 0x80003924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80003930;
    // 0x80003924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80003928: b           L_80003930
    // 0x8000392C: nop

        goto L_80003930;
    // 0x8000392C: nop

L_80003930:
    // 0x80003930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003938: jr          $ra
    // 0x8000393C: nop

    return;
    // 0x8000393C: nop

;}
RECOMP_FUNC void func_80010408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010408: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001040C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80010410: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80010414: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80010418: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001041C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80010420: nop

    // 0x80010424: addiu       $t7, $t6, 0xC
    ctx->r15 = ADD32(ctx->r14, 0XC);
    // 0x80010428: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8001042C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80010430: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80010434: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80010438: nop

    // 0x8001043C: sltu        $at, $t0, $t9
    ctx->r1 = ctx->r8 < ctx->r25 ? 1 : 0;
    // 0x80010440: bne         $at, $zero, L_80010450
    if (ctx->r1 != 0) {
        // 0x80010444: nop
    
            goto L_80010450;
    }
    // 0x80010444: nop

    // 0x80010448: b           L_800105C8
    // 0x8001044C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800105C8;
    // 0x8001044C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80010450:
    // 0x80010450: jal         0x8002FC34
    // 0x80010454: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    malloc_game(rdram, ctx);
        goto after_0;
    // 0x80010454: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_0:
    // 0x80010458: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8001045C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80010460: jal         0x8000FEB0
    // 0x80010464: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8000FEB0(rdram, ctx);
        goto after_1;
    // 0x80010464: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x80010468: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8001046C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80010470: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80010474: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80010478: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8001047C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80010480: lw          $s0, 0x0($t4)
    ctx->r16 = MEM_W(ctx->r12, 0X0);
    // 0x80010484: nop

    // 0x80010488: beq         $s0, $zero, L_800104BC
    if (ctx->r16 == 0) {
        // 0x8001048C: nop
    
            goto L_800104BC;
    }
    // 0x8001048C: nop

    // 0x80010490: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80010494: beq         $s0, $at, L_800104E0
    if (ctx->r16 == ctx->r1) {
        // 0x80010498: nop
    
            goto L_800104E0;
    }
    // 0x80010498: nop

    // 0x8001049C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800104A0: beq         $s0, $at, L_800104BC
    if (ctx->r16 == ctx->r1) {
        // 0x800104A4: nop
    
            goto L_800104BC;
    }
    // 0x800104A4: nop

    // 0x800104A8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800104AC: beq         $s0, $at, L_800104BC
    if (ctx->r16 == ctx->r1) {
        // 0x800104B0: nop
    
            goto L_800104BC;
    }
    // 0x800104B0: nop

    // 0x800104B4: b           L_8001052C
    // 0x800104B8: nop

        goto L_8001052C;
    // 0x800104B8: nop

L_800104BC:
    // 0x800104BC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800104C0: nop

    // 0x800104C4: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x800104C8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800104CC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800104D0: nop

    // 0x800104D4: sw          $t6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r14;
    // 0x800104D8: b           L_80010534
    // 0x800104DC: nop

        goto L_80010534;
    // 0x800104DC: nop

L_800104E0:
    // 0x800104E0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800104E4: sw          $zero, 0x5D4C($at)
    MEM_W(0X5D4C, ctx->r1) = 0;
    // 0x800104E8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800104EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800104F0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800104F4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800104F8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800104FC: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80010500: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x80010504: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80010508: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x8001050C: lw          $a1, 0x4($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X4);
    // 0x80010510: jal         0x800100E8
    // 0x80010514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800100E8(rdram, ctx);
        goto after_2;
    // 0x80010514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80010518: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8001051C: nop

    // 0x80010520: sw          $v0, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->r2;
    // 0x80010524: b           L_80010534
    // 0x80010528: nop

        goto L_80010534;
    // 0x80010528: nop

L_8001052C:
    // 0x8001052C: b           L_80010534
    // 0x80010530: nop

        goto L_80010534;
    // 0x80010530: nop

L_80010534:
    // 0x80010534: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80010538:
    // 0x80010538: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001053C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80010540: lw          $t5, -0x1C54($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1C54);
    // 0x80010544: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80010548: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8001054C: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80010550: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80010554: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80010558: sw          $t9, 0x5D30($at)
    MEM_W(0X5D30, ctx->r1) = ctx->r25;
    // 0x8001055C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80010560: nop

    // 0x80010564: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x80010568: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x8001056C: bne         $at, $zero, L_80010538
    if (ctx->r1 != 0) {
        // 0x80010570: sw          $t0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r8;
            goto L_80010538;
    }
    // 0x80010570: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80010574: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80010578:
    // 0x80010578: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8001057C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80010580: lw          $t1, -0x1C54($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1C54);
    // 0x80010584: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80010588: addu        $t6, $t1, $t4
    ctx->r14 = ADD32(ctx->r9, ctx->r12);
    // 0x8001058C: lw          $t5, 0x18($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X18);
    // 0x80010590: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80010594: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80010598: sw          $t5, 0x5D40($at)
    MEM_W(0X5D40, ctx->r1) = ctx->r13;
    // 0x8001059C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800105A0: nop

    // 0x800105A4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800105A8: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x800105AC: bne         $at, $zero, L_80010578
    if (ctx->r1 != 0) {
        // 0x800105B0: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_80010578;
    }
    // 0x800105B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800105B4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x800105B8: b           L_800105C8
    // 0x800105BC: nop

        goto L_800105C8;
    // 0x800105BC: nop

    // 0x800105C0: b           L_800105C8
    // 0x800105C4: nop

        goto L_800105C8;
    // 0x800105C4: nop

L_800105C8:
    // 0x800105C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800105CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800105D0: jr          $ra
    // 0x800105D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800105D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80028E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028E60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80028E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028E68: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80028E6C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80028E70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80028E74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80028E78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80028E7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80028E80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80028E84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80028E88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80028E8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80028E90: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80028E94: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80028E98: nop

    // 0x80028E9C: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80028EA0: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80028EA4: lwc1        $f10, 0x50($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X50);
    // 0x80028EA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80028EAC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80028EB0: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80028EB4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80028EB8: nop

    // 0x80028EBC: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80028EC0: lwc1        $f4, 0x28($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X28);
    // 0x80028EC4: lwc1        $f8, 0x54($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X54);
    // 0x80028EC8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80028ECC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80028ED0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80028ED4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80028ED8: nop

    // 0x80028EDC: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80028EE0: lwc1        $f18, 0x2C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80028EE4: lwc1        $f6, 0x58($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X58);
    // 0x80028EE8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80028EEC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80028EF0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80028EF4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80028EF8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80028EFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80028F00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80028F04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80028F08: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80028F0C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80028F10: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80028F14: lh          $t5, 0x4234($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4234);
    // 0x80028F18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80028F1C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80028F20: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80028F24: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x80028F28: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80028F2C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x80028F30: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80028F34: lw          $a0, 0x4DC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4DC0);
    // 0x80028F38: lw          $a1, 0x4DC4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4DC4);
    // 0x80028F3C: jal         0x800368C8
    // 0x80028F40: nop

    __ull_to_f_recomp(rdram, ctx);
        goto after_0;
    // 0x80028F40: nop

    after_0:
    // 0x80028F44: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80028F48: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80028F4C: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80028F50: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80028F54: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80028F58: nop

    // 0x80028F5C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80028F60: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80028F64: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80028F68: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x80028F6C: nop

    // 0x80028F70: bc1f        L_80028F80
    if (!c1cs) {
        // 0x80028F74: nop
    
            goto L_80028F80;
    }
    // 0x80028F74: nop

    // 0x80028F78: b           L_80028F90
    // 0x80028F7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80028F90;
    // 0x80028F7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80028F80:
    // 0x80028F80: b           L_80028F90
    // 0x80028F84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80028F90;
    // 0x80028F84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028F88: b           L_80028F90
    // 0x80028F8C: nop

        goto L_80028F90;
    // 0x80028F8C: nop

L_80028F90:
    // 0x80028F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028F94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80028F98: jr          $ra
    // 0x80028F9C: nop

    return;
    // 0x80028F9C: nop

;}
RECOMP_FUNC void func_80024C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024C10: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80024C14: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80024C18: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80024C1C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80024C20: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x80024C24: sb          $zero, 0x3($sp)
    MEM_B(0X3, ctx->r29) = 0;
    // 0x80024C28: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80024C2C: beq         $at, $zero, L_80024C40
    if (ctx->r1 == 0) {
        // 0x80024C30: nop
    
            goto L_80024C40;
    }
    // 0x80024C30: nop

    // 0x80024C34: addiu       $t7, $zero, 0x6F
    ctx->r15 = ADD32(0, 0X6F);
    // 0x80024C38: b           L_80024C48
    // 0x80024C3C: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
        goto L_80024C48;
    // 0x80024C3C: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
L_80024C40:
    // 0x80024C40: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x80024C44: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
L_80024C48:
    // 0x80024C48: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80024C4C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80024C50: blez        $t9, L_80024C98
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80024C54: nop
    
            goto L_80024C98;
    }
    // 0x80024C54: nop

L_80024C58:
    // 0x80024C58: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x80024C5C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80024C60: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80024C64: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80024C68: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80024C6C: lbu         $t3, 0x7450($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X7450);
    // 0x80024C70: lbu         $t4, 0x3($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X3);
    // 0x80024C74: nop

    // 0x80024C78: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80024C7C: sb          $t5, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r13;
    // 0x80024C80: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80024C84: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80024C88: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80024C8C: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80024C90: bne         $at, $zero, L_80024C58
    if (ctx->r1 != 0) {
        // 0x80024C94: sw          $t7, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r15;
            goto L_80024C58;
    }
    // 0x80024C94: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
L_80024C98:
    // 0x80024C98: lbu         $v0, 0x3($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X3);
    // 0x80024C9C: b           L_80024CAC
    // 0x80024CA0: nop

        goto L_80024CAC;
    // 0x80024CA0: nop

    // 0x80024CA4: b           L_80024CAC
    // 0x80024CA8: nop

        goto L_80024CAC;
    // 0x80024CA8: nop

L_80024CAC:
    // 0x80024CAC: jr          $ra
    // 0x80024CB0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80024CB0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void Get_ObjIdx_ById(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026DBC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80026DC0: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80026DC4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80026DC8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80026DCC: addiu       $t8, $t7, 0x1260
    ctx->r24 = ADD32(ctx->r15, 0X1260);
    // 0x80026DD0: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80026DD4: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x80026DD8: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
L_80026DDC:
    // 0x80026DDC: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80026DE0: nop

    // 0x80026DE4: lh          $t0, 0xE4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE4);
    // 0x80026DE8: nop

    // 0x80026DEC: bne         $t0, $a0, L_80026E04
    if (ctx->r8 != ctx->r4) {
        // 0x80026DF0: nop
    
            goto L_80026E04;
    }
    // 0x80026DF0: nop

    // 0x80026DF4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80026DF8: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80026DFC: b           L_80026E24
    // 0x80026E00: nop

        goto L_80026E24;
    // 0x80026E00: nop

L_80026E04:
    // 0x80026E04: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x80026E08: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x80026E0C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80026E10: slti        $at, $t3, 0x4E
    ctx->r1 = SIGNED(ctx->r11) < 0X4E ? 1 : 0;
    // 0x80026E14: addiu       $t5, $t4, 0x150
    ctx->r13 = ADD32(ctx->r12, 0X150);
    // 0x80026E18: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x80026E1C: bne         $at, $zero, L_80026DDC
    if (ctx->r1 != 0) {
        // 0x80026E20: sw          $t3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r11;
            goto L_80026DDC;
    }
    // 0x80026E20: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
L_80026E24:
    // 0x80026E24: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80026E28: nop

    // 0x80026E2C: beq         $t6, $zero, L_80026E40
    if (ctx->r14 == 0) {
        // 0x80026E30: nop
    
            goto L_80026E40;
    }
    // 0x80026E30: nop

    // 0x80026E34: lw          $v0, 0xC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC);
    // 0x80026E38: b           L_80026E50
    // 0x80026E3C: nop

        goto L_80026E50;
    // 0x80026E3C: nop

L_80026E40:
    // 0x80026E40: b           L_80026E50
    // 0x80026E44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80026E50;
    // 0x80026E44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80026E48: b           L_80026E50
    // 0x80026E4C: nop

        goto L_80026E50;
    // 0x80026E4C: nop

L_80026E50:
    // 0x80026E50: jr          $ra
    // 0x80026E54: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80026E54: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void alSynFreeVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EB00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EB04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EB08: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8003EB0C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8003EB10: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8003EB14: beql        $a2, $zero, L_8003EBA4
    if (ctx->r6 == 0) {
        // 0x8003EB18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003EBA4;
    }
    goto skip_0;
    // 0x8003EB18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003EB1C: lw          $t6, 0xD8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XD8);
    // 0x8003EB20: beql        $t6, $zero, L_8003EB8C
    if (ctx->r14 == 0) {
        // 0x8003EB24: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_8003EB8C;
    }
    goto skip_1;
    // 0x8003EB24: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    skip_1:
    // 0x8003EB28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003EB2C: jal         0x80035B20
    // 0x8003EB30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8003EB30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003EB34: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EB38: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003EB3C: beq         $v0, $zero, L_8003EBA0
    if (ctx->r2 == 0) {
        // 0x8003EB40: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8003EBA0;
    }
    // 0x8003EB40: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003EB44: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x8003EB48: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x8003EB4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003EB50: lw          $t9, 0xD8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD8);
    // 0x8003EB54: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x8003EB58: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x8003EB5C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8003EB60: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x8003EB64: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8003EB68: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8003EB6C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8003EB70: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8003EB74: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8003EB78: jalr        $t9
    // 0x8003EB7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8003EB7C: nop

    after_1:
    // 0x8003EB80: b           L_8003EB9C
    // 0x8003EB84: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
        goto L_8003EB9C;
    // 0x8003EB84: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EB88: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
L_8003EB8C:
    // 0x8003EB8C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8003EB90: jal         0x80035A70
    // 0x8003EB94: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    _freePVoice(rdram, ctx);
        goto after_2;
    // 0x8003EB94: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x8003EB98: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_8003EB9C:
    // 0x8003EB9C: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
L_8003EBA0:
    // 0x8003EBA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EBA4:
    // 0x8003EBA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EBA8: jr          $ra
    // 0x8003EBAC: nop

    return;
    // 0x8003EBAC: nop

;}
RECOMP_FUNC void func_8002C184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C184: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8002C188: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8002C18C: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x8002C190: swc1        $f12, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f12.u32l;
    // 0x8002C194: swc1        $f14, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f14.u32l;
    // 0x8002C198: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8002C19C: lwc1        $f14, 0xB4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8002C1A0: lw          $a2, 0xB8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB8);
    // 0x8002C1A4: jal         0x8002C144
    // 0x8002C1A8: nop

    func_8002C144(rdram, ctx);
        goto after_0;
    // 0x8002C1A8: nop

    after_0:
    // 0x8002C1AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002C1B0: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x8002C1B4: nop

    // 0x8002C1B8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8002C1BC: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x8002C1C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002C1C4: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x8002C1C8: nop

    // 0x8002C1CC: sb          $t8, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r24;
    // 0x8002C1D0: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x8002C1D4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002C1D8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8002C1DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002C1E0: lw          $t1, 0x76F0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X76F0);
    // 0x8002C1E4: nop

    // 0x8002C1E8: sw          $t1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r9;
    // 0x8002C1EC: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x8002C1F0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002C1F4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8002C1F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8002C1FC: lw          $t4, 0x7700($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7700);
    // 0x8002C200: nop

    // 0x8002C204: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x8002C208: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x8002C20C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002C210: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002C214: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002C218: lw          $t7, 0x7710($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7710);
    // 0x8002C21C: nop

    // 0x8002C220: sw          $t7, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r15;
    // 0x8002C224: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x8002C228: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002C22C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002C230: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002C234: lw          $t0, 0x7720($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7720);
    // 0x8002C238: nop

    // 0x8002C23C: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x8002C240: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x8002C244: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002C248: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8002C24C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8002C250: lw          $t3, 0x7730($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7730);
    // 0x8002C254: nop

    // 0x8002C258: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
    // 0x8002C25C: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x8002C260: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002C264: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002C268: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8002C26C: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8002C270: nop

    // 0x8002C274: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x8002C278: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002C27C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8002C280: lw          $t7, 0x7668($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7668);
    // 0x8002C284: lw          $t6, 0x7664($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7664);
    // 0x8002C288: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002C28C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002C290: lw          $t9, 0x7670($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7670);
    // 0x8002C294: lw          $t8, 0x766C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X766C);
    // 0x8002C298: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8002C29C: sra         $a2, $t7, 31
    ctx->r6 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8002C2A0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002C2A4: sra         $a0, $t6, 31
    ctx->r4 = S32(SIGNED(ctx->r14) >> 31);
    // 0x8002C2A8: addiu       $t6, $sp, 0x84
    ctx->r14 = ADD32(ctx->r29, 0X84);
    // 0x8002C2AC: addiu       $t7, $sp, 0x80
    ctx->r15 = ADD32(ctx->r29, 0X80);
    // 0x8002C2B0: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x8002C2B4: addiu       $t5, $sp, 0x88
    ctx->r13 = ADD32(ctx->r29, 0X88);
    // 0x8002C2B8: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x8002C2BC: sra         $t2, $t9, 31
    ctx->r10 = S32(SIGNED(ctx->r25) >> 31);
    // 0x8002C2C0: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x8002C2C4: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x8002C2C8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8002C2CC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8002C2D0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8002C2D4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8002C2D8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8002C2DC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8002C2E0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8002C2E4: jal         0x80016A80
    // 0x8002C2E8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_80016A80(rdram, ctx);
        goto after_1;
    // 0x8002C2E8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_1:
    // 0x8002C2EC: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x8002C2F0: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x8002C2F4: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x8002C2F8: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8002C2FC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8002C300: sra         $a0, $t8, 31
    ctx->r4 = S32(SIGNED(ctx->r24) >> 31);
    // 0x8002C304: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8002C308: sra         $a2, $t0, 31
    ctx->r6 = S32(SIGNED(ctx->r8) >> 31);
    // 0x8002C30C: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x8002C310: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x8002C314: addiu       $t6, $sp, 0x7C
    ctx->r14 = ADD32(ctx->r29, 0X7C);
    // 0x8002C318: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x8002C31C: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x8002C320: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002C324: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x8002C328: sra         $t4, $t9, 31
    ctx->r12 = S32(SIGNED(ctx->r25) >> 31);
    // 0x8002C32C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8002C330: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8002C334: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8002C338: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8002C33C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8002C340: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8002C344: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8002C348: jal         0x80016A80
    // 0x8002C34C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_80016A80(rdram, ctx);
        goto after_2;
    // 0x8002C34C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_2:
    // 0x8002C350: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002C354: lw          $t1, 0x7664($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7664);
    // 0x8002C358: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x8002C35C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002C360: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8002C364: sra         $a0, $t1, 31
    ctx->r4 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002C368: lw          $t3, 0x766C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X766C);
    // 0x8002C36C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002C370: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002C374: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8002C378: lw          $t2, 0x7668($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7668);
    // 0x8002C37C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002C380: lw          $t1, 0x76F0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X76F0);
    // 0x8002C384: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x8002C388: sra         $t4, $t3, 31
    ctx->r12 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8002C38C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002C390: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8002C394: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8002C398: lw          $t9, 0x7670($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7670);
    // 0x8002C39C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8002C3A0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8002C3A4: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002C3A8: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x8002C3AC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002C3B0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002C3B4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002C3B8: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x8002C3BC: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x8002C3C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002C3C4: lw          $t1, 0x7720($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7720);
    // 0x8002C3C8: lw          $t5, 0x7710($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7710);
    // 0x8002C3CC: lw          $t4, 0x7700($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7700);
    // 0x8002C3D0: or          $t7, $t9, $zero
    ctx->r15 = ctx->r25 | 0;
    // 0x8002C3D4: sra         $t6, $t9, 31
    ctx->r14 = S32(SIGNED(ctx->r25) >> 31);
    // 0x8002C3D8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8002C3DC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8002C3E0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8002C3E4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8002C3E8: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002C3EC: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x8002C3F0: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x8002C3F4: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x8002C3F8: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x8002C3FC: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x8002C400: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8002C404: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8002C408: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8002C40C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8002C410: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x8002C414: jal         0x8001608C
    // 0x8002C418: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    Math_ComparePlanes(rdram, ctx);
        goto after_3;
    // 0x8002C418: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_3:
    // 0x8002C41C: beq         $v0, $zero, L_8002C44C
    if (ctx->r2 == 0) {
        // 0x8002C420: nop
    
            goto L_8002C44C;
    }
    // 0x8002C420: nop

    // 0x8002C424: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002C428: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002C42C: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8002C430: nop

    // 0x8002C434: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8002C438: nop

    // 0x8002C43C: bc1f        L_8002C44C
    if (!c1cs) {
        // 0x8002C440: nop
    
            goto L_8002C44C;
    }
    // 0x8002C440: nop

    // 0x8002C444: b           L_8002C91C
    // 0x8002C448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002C91C;
    // 0x8002C448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002C44C:
    // 0x8002C44C: lbu         $t4, 0x93($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X93);
    // 0x8002C450: nop

    // 0x8002C454: bne         $t4, $zero, L_8002C6BC
    if (ctx->r12 != 0) {
        // 0x8002C458: nop
    
            goto L_8002C6BC;
    }
    // 0x8002C458: nop

    // 0x8002C45C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002C460: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002C464: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8002C468: nop

    // 0x8002C46C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8002C470: nop

    // 0x8002C474: bc1f        L_8002C6AC
    if (!c1cs) {
        // 0x8002C478: nop
    
            goto L_8002C6AC;
    }
    // 0x8002C478: nop

    // 0x8002C47C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002C480: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002C484: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002C488: nop

    // 0x8002C48C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8002C490: nop

    // 0x8002C494: bc1f        L_8002C6AC
    if (!c1cs) {
        // 0x8002C498: nop
    
            goto L_8002C6AC;
    }
    // 0x8002C498: nop

    // 0x8002C49C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C4A0: lwc1        $f6, 0x7678($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7678);
    // 0x8002C4A4: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002C4A8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8002C4AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002C4B0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8002C4B4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8002C4B8: nop

    // 0x8002C4BC: bc1f        L_8002C4CC
    if (!c1cs) {
        // 0x8002C4C0: nop
    
            goto L_8002C4CC;
    }
    // 0x8002C4C0: nop

    // 0x8002C4C4: b           L_8002C91C
    // 0x8002C4C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002C91C;
    // 0x8002C4C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002C4CC:
    // 0x8002C4CC: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8002C4D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002C4D4: nop

    // 0x8002C4D8: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8002C4DC: nop

    // 0x8002C4E0: bc1f        L_8002C504
    if (!c1cs) {
        // 0x8002C4E4: nop
    
            goto L_8002C504;
    }
    // 0x8002C4E4: nop

    // 0x8002C4E8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002C4EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002C4F0: nop

    // 0x8002C4F4: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8002C4F8: nop

    // 0x8002C4FC: bc1t        L_8002C6AC
    if (c1cs) {
        // 0x8002C500: nop
    
            goto L_8002C6AC;
    }
    // 0x8002C500: nop

L_8002C504:
    // 0x8002C504: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002C508: lw          $t6, 0x7664($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7664);
    // 0x8002C50C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002C510: lw          $t5, 0x766C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X766C);
    // 0x8002C514: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8002C518: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002C51C: lw          $t0, 0x7670($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7670);
    // 0x8002C520: lw          $t7, 0x7668($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7668);
    // 0x8002C524: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002C528: sra         $a0, $t6, 31
    ctx->r4 = S32(SIGNED(ctx->r14) >> 31);
    // 0x8002C52C: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x8002C530: lw          $t1, 0xA8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA8);
    // 0x8002C534: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x8002C538: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x8002C53C: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x8002C540: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8002C544: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8002C548: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8002C54C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8002C550: sra         $a2, $t7, 31
    ctx->r6 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8002C554: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x8002C558: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x8002C55C: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x8002C560: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x8002C564: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x8002C568: or          $t5, $t1, $zero
    ctx->r13 = ctx->r9 | 0;
    // 0x8002C56C: sra         $t4, $t1, 31
    ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002C570: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8002C574: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8002C578: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8002C57C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8002C580: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8002C584: addiu       $t3, $sp, 0x64
    ctx->r11 = ADD32(ctx->r29, 0X64);
    // 0x8002C588: addiu       $t9, $sp, 0x58
    ctx->r25 = ADD32(ctx->r29, 0X58);
    // 0x8002C58C: addiu       $t8, $sp, 0x5C
    ctx->r24 = ADD32(ctx->r29, 0X5C);
    // 0x8002C590: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x8002C594: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x8002C598: sra         $t0, $t7, 31
    ctx->r8 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8002C59C: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x8002C5A0: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8002C5A4: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8002C5A8: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x8002C5AC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002C5B0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8002C5B4: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8002C5B8: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x8002C5BC: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x8002C5C0: jal         0x80016714
    // 0x8002C5C4: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    func_80016714(rdram, ctx);
        goto after_4;
    // 0x8002C5C4: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    after_4:
    // 0x8002C5C8: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8002C5CC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002C5D0: nop

    // 0x8002C5D4: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8002C5D8: nop

    // 0x8002C5DC: bc1f        L_8002C638
    if (!c1cs) {
        // 0x8002C5E0: nop
    
            goto L_8002C638;
    }
    // 0x8002C5E0: nop

    // 0x8002C5E4: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8002C5E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002C5EC: nop

    // 0x8002C5F0: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8002C5F4: nop

    // 0x8002C5F8: bc1f        L_8002C638
    if (!c1cs) {
        // 0x8002C5FC: nop
    
            goto L_8002C638;
    }
    // 0x8002C5FC: nop

    // 0x8002C600: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8002C604: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002C608: nop

    // 0x8002C60C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8002C610: nop

    // 0x8002C614: bc1f        L_8002C638
    if (!c1cs) {
        // 0x8002C618: nop
    
            goto L_8002C638;
    }
    // 0x8002C618: nop

    // 0x8002C61C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8002C620: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002C624: nop

    // 0x8002C628: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8002C62C: nop

    // 0x8002C630: bc1t        L_8002C6AC
    if (c1cs) {
        // 0x8002C634: nop
    
            goto L_8002C6AC;
    }
    // 0x8002C634: nop

L_8002C638:
    // 0x8002C638: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C63C: lwc1        $f12, 0x767C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X767C);
    // 0x8002C640: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8002C644: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8002C648: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C64C: lwc1        $f14, 0x7684($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7684);
    // 0x8002C650: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8002C654: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x8002C658: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8002C65C: jal         0x800162F0
    // 0x8002C660: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800162F0(rdram, ctx);
        goto after_5;
    // 0x8002C660: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x8002C664: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8002C668: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8002C66C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8002C670: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8002C674: lwc1        $f14, 0xB8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8002C678: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8002C67C: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x8002C680: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8002C684: jal         0x800162F0
    // 0x8002C688: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800162F0(rdram, ctx);
        goto after_6;
    // 0x8002C688: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x8002C68C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x8002C690: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8002C694: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8002C698: nop

    // 0x8002C69C: beq         $t7, $t0, L_8002C6AC
    if (ctx->r15 == ctx->r8) {
        // 0x8002C6A0: nop
    
            goto L_8002C6AC;
    }
    // 0x8002C6A0: nop

    // 0x8002C6A4: b           L_8002C91C
    // 0x8002C6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002C91C;
    // 0x8002C6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002C6AC:
    // 0x8002C6AC: b           L_8002C91C
    // 0x8002C6B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8002C91C;
    // 0x8002C6B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8002C6B4: b           L_8002C914
    // 0x8002C6B8: nop

        goto L_8002C914;
    // 0x8002C6B8: nop

L_8002C6BC:
    // 0x8002C6BC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002C6C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002C6C4: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8002C6C8: nop

    // 0x8002C6CC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8002C6D0: nop

    // 0x8002C6D4: bc1f        L_8002C90C
    if (!c1cs) {
        // 0x8002C6D8: nop
    
            goto L_8002C90C;
    }
    // 0x8002C6D8: nop

    // 0x8002C6DC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002C6E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002C6E4: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002C6E8: nop

    // 0x8002C6EC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8002C6F0: nop

    // 0x8002C6F4: bc1f        L_8002C90C
    if (!c1cs) {
        // 0x8002C6F8: nop
    
            goto L_8002C90C;
    }
    // 0x8002C6F8: nop

    // 0x8002C6FC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C700: lwc1        $f8, 0x7678($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7678);
    // 0x8002C704: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8002C708: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8002C70C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002C710: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8002C714: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8002C718: nop

    // 0x8002C71C: bc1f        L_8002C72C
    if (!c1cs) {
        // 0x8002C720: nop
    
            goto L_8002C72C;
    }
    // 0x8002C720: nop

    // 0x8002C724: b           L_8002C91C
    // 0x8002C728: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8002C91C;
    // 0x8002C728: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8002C72C:
    // 0x8002C72C: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8002C730: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002C734: nop

    // 0x8002C738: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8002C73C: nop

    // 0x8002C740: bc1f        L_8002C764
    if (!c1cs) {
        // 0x8002C744: nop
    
            goto L_8002C764;
    }
    // 0x8002C744: nop

    // 0x8002C748: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8002C74C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002C750: nop

    // 0x8002C754: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8002C758: nop

    // 0x8002C75C: bc1t        L_8002C90C
    if (c1cs) {
        // 0x8002C760: nop
    
            goto L_8002C90C;
    }
    // 0x8002C760: nop

L_8002C764:
    // 0x8002C764: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002C768: lw          $t2, 0x7668($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7668);
    // 0x8002C76C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8002C770: lw          $t4, 0x766C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X766C);
    // 0x8002C774: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002C778: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002C77C: lw          $t5, 0x7670($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7670);
    // 0x8002C780: lw          $t1, 0x7664($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7664);
    // 0x8002C784: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8002C788: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8002C78C: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x8002C790: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x8002C794: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x8002C798: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x8002C79C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002C7A0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002C7A4: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x8002C7A8: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x8002C7AC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8002C7B0: sra         $a0, $t1, 31
    ctx->r4 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8002C7B4: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x8002C7B8: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8002C7BC: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x8002C7C0: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x8002C7C4: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x8002C7C8: sra         $t0, $t3, 31
    ctx->r8 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8002C7CC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8002C7D0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8002C7D4: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8002C7D8: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8002C7DC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8002C7E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8002C7E4: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x8002C7E8: addiu       $t4, $sp, 0x5C
    ctx->r12 = ADD32(ctx->r29, 0X5C);
    // 0x8002C7EC: addiu       $t3, $sp, 0x64
    ctx->r11 = ADD32(ctx->r29, 0X64);
    // 0x8002C7F0: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x8002C7F4: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x8002C7F8: sra         $t0, $t7, 31
    ctx->r8 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8002C7FC: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x8002C800: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x8002C804: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8002C808: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8002C80C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8002C810: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x8002C814: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x8002C818: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x8002C81C: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x8002C820: jal         0x80016714
    // 0x8002C824: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    func_80016714(rdram, ctx);
        goto after_7;
    // 0x8002C824: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    after_7:
    // 0x8002C828: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8002C82C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002C830: nop

    // 0x8002C834: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8002C838: nop

    // 0x8002C83C: bc1f        L_8002C898
    if (!c1cs) {
        // 0x8002C840: nop
    
            goto L_8002C898;
    }
    // 0x8002C840: nop

    // 0x8002C844: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8002C848: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002C84C: nop

    // 0x8002C850: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8002C854: nop

    // 0x8002C858: bc1f        L_8002C898
    if (!c1cs) {
        // 0x8002C85C: nop
    
            goto L_8002C898;
    }
    // 0x8002C85C: nop

    // 0x8002C860: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8002C864: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002C868: nop

    // 0x8002C86C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8002C870: nop

    // 0x8002C874: bc1f        L_8002C898
    if (!c1cs) {
        // 0x8002C878: nop
    
            goto L_8002C898;
    }
    // 0x8002C878: nop

    // 0x8002C87C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8002C880: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002C884: nop

    // 0x8002C888: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8002C88C: nop

    // 0x8002C890: bc1t        L_8002C90C
    if (c1cs) {
        // 0x8002C894: nop
    
            goto L_8002C90C;
    }
    // 0x8002C894: nop

L_8002C898:
    // 0x8002C898: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C89C: lwc1        $f12, 0x767C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X767C);
    // 0x8002C8A0: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8002C8A4: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8002C8A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C8AC: lwc1        $f14, 0x7684($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7684);
    // 0x8002C8B0: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8002C8B4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x8002C8B8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8002C8BC: jal         0x800162F0
    // 0x8002C8C0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800162F0(rdram, ctx);
        goto after_8;
    // 0x8002C8C0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x8002C8C4: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8002C8C8: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8002C8CC: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8002C8D0: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8002C8D4: lwc1        $f14, 0xB8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8002C8D8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8002C8DC: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x8002C8E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8002C8E4: jal         0x800162F0
    // 0x8002C8E8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800162F0(rdram, ctx);
        goto after_9;
    // 0x8002C8E8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x8002C8EC: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x8002C8F0: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8002C8F4: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8002C8F8: nop

    // 0x8002C8FC: beq         $t6, $t8, L_8002C90C
    if (ctx->r14 == ctx->r24) {
        // 0x8002C900: nop
    
            goto L_8002C90C;
    }
    // 0x8002C900: nop

    // 0x8002C904: b           L_8002C91C
    // 0x8002C908: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8002C91C;
    // 0x8002C908: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8002C90C:
    // 0x8002C90C: b           L_8002C91C
    // 0x8002C910: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8002C91C;
    // 0x8002C910: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8002C914:
    // 0x8002C914: b           L_8002C91C
    // 0x8002C918: nop

        goto L_8002C91C;
    // 0x8002C918: nop

L_8002C91C:
    // 0x8002C91C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8002C920: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x8002C924: jr          $ra
    // 0x8002C928: nop

    return;
    // 0x8002C928: nop

;}
RECOMP_FUNC void ldiv_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047ED0: div         $zero, $a1, $a2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r6)));
    // 0x80047ED4: mflo        $v0
    ctx->r2 = lo;
    // 0x80047ED8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80047EDC: bne         $a2, $zero, L_80047EE8
    if (ctx->r6 != 0) {
        // 0x80047EE0: nop
    
            goto L_80047EE8;
    }
    // 0x80047EE0: nop

    // 0x80047EE4: break       7
    do_break(2147778276);
L_80047EE8:
    // 0x80047EE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80047EEC: bne         $a2, $at, L_80047F00
    if (ctx->r6 != ctx->r1) {
        // 0x80047EF0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80047F00;
    }
    // 0x80047EF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80047EF4: bne         $a1, $at, L_80047F00
    if (ctx->r5 != ctx->r1) {
        // 0x80047EF8: nop
    
            goto L_80047F00;
    }
    // 0x80047EF8: nop

    // 0x80047EFC: break       6
    do_break(2147778300);
L_80047F00:
    // 0x80047F00: multu       $a2, $v0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80047F04: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x80047F08: addiu       $t7, $sp, 0x0
    ctx->r15 = ADD32(ctx->r29, 0X0);
    // 0x80047F0C: mflo        $t6
    ctx->r14 = lo;
    // 0x80047F10: subu        $v1, $a1, $t6
    ctx->r3 = SUB32(ctx->r5, ctx->r14);
    // 0x80047F14: bgez        $v0, L_80047F38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80047F18: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_80047F38;
    }
    // 0x80047F18: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x80047F1C: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x80047F20: blez        $v1, L_80047F38
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80047F24: sw          $v1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r3;
            goto L_80047F38;
    }
    // 0x80047F24: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x80047F28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80047F2C: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80047F30: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x80047F34: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
L_80047F38:
    // 0x80047F38: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80047F3C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80047F40: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x80047F44: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80047F48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80047F4C: jr          $ra
    // 0x80047F50: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    return;
    // 0x80047F50: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_800175F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800175F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800175F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800175F8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800175FC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80017600: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80017604: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80017608: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8001760C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017610: jal         0x800171E0
    // 0x80017614: nop

    func_800171E0(rdram, ctx);
        goto after_0;
    // 0x80017614: nop

    after_0:
    // 0x80017618: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8001761C: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80017620: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017624: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80017628: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8001762C: lh          $a3, 0x46($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X46);
    // 0x80017630: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80017634: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80017638: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001763C: jal         0x80017028
    // 0x80017640: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80017028(rdram, ctx);
        goto after_1;
    // 0x80017640: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x80017644: b           L_80017654
    // 0x80017648: nop

        goto L_80017654;
    // 0x80017648: nop

    // 0x8001764C: b           L_80017654
    // 0x80017650: nop

        goto L_80017654;
    // 0x80017650: nop

L_80017654:
    // 0x80017654: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80017658: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8001765C: jr          $ra
    // 0x80017660: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80017660: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8000ABEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000ABEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000ABF0: sw          $a0, -0x5CAC($at)
    MEM_W(-0X5CAC, ctx->r1) = ctx->r4;
    // 0x8000ABF4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000ABF8: sw          $a1, -0x5CA8($at)
    MEM_W(-0X5CA8, ctx->r1) = ctx->r5;
    // 0x8000ABFC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000AC00: sw          $a2, -0x5CA4($at)
    MEM_W(-0X5CA4, ctx->r1) = ctx->r6;
    // 0x8000AC04: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000AC08: sw          $a3, -0x5CA0($at)
    MEM_W(-0X5CA0, ctx->r1) = ctx->r7;
    // 0x8000AC0C: jr          $ra
    // 0x8000AC10: nop

    return;
    // 0x8000AC10: nop

    // 0x8000AC14: jr          $ra
    // 0x8000AC18: nop

    return;
    // 0x8000AC18: nop

;}
RECOMP_FUNC void func_8002D080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D088: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002D08C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002D090: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D094: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8002D098: lwc1        $f9, -0x4038($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4038);
    // 0x8002D09C: lwc1        $f8, -0x4034($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4034);
    // 0x8002D0A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002D0A4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8002D0A8: jal         0x80034970
    // 0x8002D0AC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8002D0AC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x8002D0B0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002D0B4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8002D0B8: nop

    // 0x8002D0BC: lwc1        $f16, 0x44($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X44);
    // 0x8002D0C0: nop

    // 0x8002D0C4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8002D0C8: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x8002D0CC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002D0D0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8002D0D4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D0D8: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8002D0DC: lwc1        $f9, -0x4030($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4030);
    // 0x8002D0E0: lwc1        $f8, -0x402C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X402C);
    // 0x8002D0E4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8002D0E8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8002D0EC: jal         0x80036570
    // 0x8002D0F0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8002D0F0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8002D0F4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002D0F8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002D0FC: nop

    // 0x8002D100: lwc1        $f16, 0x44($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X44);
    // 0x8002D104: nop

    // 0x8002D108: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8002D10C: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x8002D110: b           L_8002D118
    // 0x8002D114: nop

        goto L_8002D118;
    // 0x8002D114: nop

L_8002D118:
    // 0x8002D118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D120: jr          $ra
    // 0x8002D124: nop

    return;
    // 0x8002D124: nop

;}
RECOMP_FUNC void func_80001058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000105C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001060: lui         $t6, 0x16
    ctx->r14 = S32(0X16 << 16);
    // 0x80001064: lui         $t7, 0x16
    ctx->r15 = S32(0X16 << 16);
    // 0x80001068: addiu       $t7, $t7, 0x7950
    ctx->r15 = ADD32(ctx->r15, 0X7950);
    // 0x8000106C: addiu       $t6, $t6, 0x560
    ctx->r14 = ADD32(ctx->r14, 0X560);
    // 0x80001070: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001074: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001078: jal         0x8000068C
    // 0x8000107C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x8000107C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001080: lui         $t8, 0x1C
    ctx->r24 = S32(0X1C << 16);
    // 0x80001084: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x80001088: addiu       $t9, $t9, -0x7CE0
    ctx->r25 = ADD32(ctx->r25, -0X7CE0);
    // 0x8000108C: addiu       $t8, $t8, 0x73D0
    ctx->r24 = ADD32(ctx->r24, 0X73D0);
    // 0x80001090: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x80001094: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x80001098: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8000109C: jal         0x8000068C
    // 0x800010A0: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x800010A0: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x800010A4: b           L_800010AC
    // 0x800010A8: nop

        goto L_800010AC;
    // 0x800010A8: nop

L_800010AC:
    // 0x800010AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800010B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800010B4: jr          $ra
    // 0x800010B8: nop

    return;
    // 0x800010B8: nop

;}
RECOMP_FUNC void __CSPPostNextSeqEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800326E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800326E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800326E8: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x800326EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800326F0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800326F4: bnel        $t6, $at, L_80032744
    if (ctx->r14 != ctx->r1) {
        // 0x800326F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80032744;
    }
    goto skip_0;
    // 0x800326F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800326FC: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x80032700: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80032704: beql        $a0, $zero, L_80032744
    if (ctx->r4 == 0) {
        // 0x80032708: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80032744;
    }
    goto skip_1;
    // 0x80032708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8003270C: jal         0x800344AC
    // 0x80032710: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    __alCSeqNextDelta(rdram, ctx);
        goto after_0;
    // 0x80032710: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x80032714: beq         $v0, $zero, L_80032740
    if (ctx->r2 == 0) {
        // 0x80032718: lw          $a3, 0x30($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X30);
            goto L_80032740;
    }
    // 0x80032718: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8003271C: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80032720: lw          $t7, 0x24($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X24);
    // 0x80032724: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80032728: addiu       $a0, $a3, 0x48
    ctx->r4 = ADD32(ctx->r7, 0X48);
    // 0x8003272C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80032730: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032734: mflo        $a2
    ctx->r6 = lo;
    // 0x80032738: jal         0x8003E80C
    // 0x8003273C: nop

    alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x8003273C: nop

    after_1:
L_80032740:
    // 0x80032740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80032744:
    // 0x80032744: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80032748: jr          $ra
    // 0x8003274C: nop

    return;
    // 0x8003274C: nop

;}
RECOMP_FUNC void func_800047C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800047C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800047CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800047D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800047D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800047D8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800047DC: lw          $t6, 0x2EBC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EBC);
    // 0x800047E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800047E4: beq         $t6, $at, L_800047F4
    if (ctx->r14 == ctx->r1) {
        // 0x800047E8: nop
    
            goto L_800047F4;
    }
    // 0x800047E8: nop

    // 0x800047EC: b           L_8000487C
    // 0x800047F0: nop

        goto L_8000487C;
    // 0x800047F0: nop

L_800047F4:
    // 0x800047F4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800047F8: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x800047FC: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x80004800: jal         0x80034830
    // 0x80004804: nop

    alSeqpGetChlProgram(rdram, ctx);
        goto after_0;
    // 0x80004804: nop

    after_0:
    // 0x80004808: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000480C: nop

    // 0x80004810: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80004814: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004818: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x8000481C: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x80004820: jal         0x800348C0
    // 0x80004824: nop

    alSeqpGetChlVol(rdram, ctx);
        goto after_1;
    // 0x80004824: nop

    after_1:
    // 0x80004828: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8000482C: nop

    // 0x80004830: sb          $v0, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r2;
    // 0x80004834: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004838: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x8000483C: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x80004840: jal         0x800348E0
    // 0x80004844: nop

    alSeqpGetChlPan(rdram, ctx);
        goto after_2;
    // 0x80004844: nop

    after_2:
    // 0x80004848: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8000484C: nop

    // 0x80004850: sb          $v0, 0x5($t9)
    MEM_B(0X5, ctx->r25) = ctx->r2;
    // 0x80004854: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004858: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x8000485C: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x80004860: jal         0x80034900
    // 0x80004864: nop

    alSeqpGetChlFXMix(rdram, ctx);
        goto after_3;
    // 0x80004864: nop

    after_3:
    // 0x80004868: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000486C: nop

    // 0x80004870: sb          $v0, 0x6($t0)
    MEM_B(0X6, ctx->r8) = ctx->r2;
    // 0x80004874: b           L_8000487C
    // 0x80004878: nop

        goto L_8000487C;
    // 0x80004878: nop

L_8000487C:
    // 0x8000487C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004884: jr          $ra
    // 0x80004888: nop

    return;
    // 0x80004888: nop

;}
RECOMP_FUNC void _freePVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80035A7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80035A80: jal         0x800357B0
    // 0x80035A84: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80035A84: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80035A88: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80035A8C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80035A90: jal         0x800357E0
    // 0x80035A94: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    alLink(rdram, ctx);
        goto after_1;
    // 0x80035A94: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x80035A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035AA0: jr          $ra
    // 0x80035AA4: nop

    return;
    // 0x80035AA4: nop

;}
RECOMP_FUNC void func_80008B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008B84: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80008B88: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80008B8C: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80008B90: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80008B94: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80008B98: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80008B9C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80008BA0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80008BA4: lw          $t6, 0x2D80($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D80);
    // 0x80008BA8: nop

    // 0x80008BAC: bne         $t6, $zero, L_80008BBC
    if (ctx->r14 != 0) {
        // 0x80008BB0: nop
    
            goto L_80008BBC;
    }
    // 0x80008BB0: nop

    // 0x80008BB4: b           L_80008CEC
    // 0x80008BB8: nop

        goto L_80008CEC;
    // 0x80008BB8: nop

L_80008BBC:
    // 0x80008BBC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80008BC0: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80008BC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80008BC8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80008BCC: lw          $t8, 0x2D84($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D84);
    // 0x80008BD0: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80008BD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80008BD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80008BDC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80008BE0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80008BE4: beq         $a2, $at, L_80008BF8
    if (ctx->r6 == ctx->r1) {
        // 0x80008BE8: nop
    
            goto L_80008BF8;
    }
    // 0x80008BE8: nop

    // 0x80008BEC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80008BF0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80008BF4: sh          $t0, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r8;
L_80008BF8:
    // 0x80008BF8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80008BFC: nop

    // 0x80008C00: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80008C04: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80008C08: nop

    // 0x80008C0C: sh          $a0, 0x8($t3)
    MEM_H(0X8, ctx->r11) = ctx->r4;
    // 0x80008C10: bgez        $a0, L_80008C20
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80008C14: nop
    
            goto L_80008C20;
    }
    // 0x80008C14: nop

    // 0x80008C18: b           L_80008CEC
    // 0x80008C1C: nop

        goto L_80008CEC;
    // 0x80008C1C: nop

L_80008C20:
    // 0x80008C20: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80008C24: lw          $t4, 0x2D80($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D80);
    // 0x80008C28: nop

    // 0x80008C2C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80008C30: nop

    // 0x80008C34: sw          $t5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r13;
    // 0x80008C38: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x80008C3C: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80008C40: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80008C44: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80008C48: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80008C4C: lw          $t0, 0x2D80($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D80);
    // 0x80008C50: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80008C54: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80008C58: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80008C5C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80008C60: nop

    // 0x80008C64: sh          $zero, 0xC($t3)
    MEM_H(0XC, ctx->r11) = 0;
    // 0x80008C68: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80008C6C: nop

    // 0x80008C70: sh          $zero, 0x1A($t4)
    MEM_H(0X1A, ctx->r12) = 0;
    // 0x80008C74: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80008C78: nop

    // 0x80008C7C: sb          $zero, 0x1C($t5)
    MEM_B(0X1C, ctx->r13) = 0;
    // 0x80008C80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80008C84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80008C88: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80008C8C: nop

    // 0x80008C90: swc1        $f4, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f4.u32l;
    // 0x80008C94: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80008C98: nop

    // 0x80008C9C: sh          $zero, 0x30($t7)
    MEM_H(0X30, ctx->r15) = 0;
    // 0x80008CA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80008CA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80008CA8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80008CAC: nop

    // 0x80008CB0: swc1        $f6, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f6.u32l;
    // 0x80008CB4: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80008CB8: nop

    // 0x80008CBC: sh          $zero, 0xE($t9)
    MEM_H(0XE, ctx->r25) = 0;
    // 0x80008CC0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80008CC4: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x80008CC8: sh          $t0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r8;
    // 0x80008CCC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80008CD0: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x80008CD4: sh          $t2, 0x12($t3)
    MEM_H(0X12, ctx->r11) = ctx->r10;
    // 0x80008CD8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80008CDC: nop

    // 0x80008CE0: sb          $zero, 0x53($t4)
    MEM_B(0X53, ctx->r12) = 0;
    // 0x80008CE4: b           L_80008CEC
    // 0x80008CE8: nop

        goto L_80008CEC;
    // 0x80008CE8: nop

L_80008CEC:
    // 0x80008CEC: jr          $ra
    // 0x80008CF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80008CF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80017E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017E70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80017E74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80017E78: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80017E7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80017E80: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80017E84: jal         0x8000B404
    // 0x80017E88: nop

    func_8000B404(rdram, ctx);
        goto after_0;
    // 0x80017E88: nop

    after_0:
    // 0x80017E8C: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x80017E90: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80017E94: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80017E98: jal         0x8000B738
    // 0x80017E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000B738(rdram, ctx);
        goto after_1;
    // 0x80017E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80017EA0: b           L_80017EA8
    // 0x80017EA4: nop

        goto L_80017EA8;
    // 0x80017EA4: nop

L_80017EA8:
    // 0x80017EA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80017EAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80017EB0: jr          $ra
    // 0x80017EB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80017EB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
