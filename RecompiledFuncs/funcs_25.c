#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800F7800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F7804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F7808: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F780C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7810: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7814: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800F7818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F781C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F7824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7828: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F782C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800F7830: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800F7834: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F7838: beq         $s0, $at, L_800F7854
    if (ctx->r16 == ctx->r1) {
        // 0x800F783C: nop
    
            goto L_800F7854;
    }
    // 0x800F783C: nop

    // 0x800F7840: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F7844: beq         $s0, $at, L_800F7864
    if (ctx->r16 == ctx->r1) {
        // 0x800F7848: nop
    
            goto L_800F7864;
    }
    // 0x800F7848: nop

    // 0x800F784C: b           L_800F7874
    // 0x800F7850: nop

        goto L_800F7874;
    // 0x800F7850: nop

L_800F7854:
    // 0x800F7854: jal         0x800F7544
    // 0x800F7858: nop

    func_800F7544(rdram, ctx);
        goto after_0;
    // 0x800F7858: nop

    after_0:
    // 0x800F785C: b           L_800F787C
    // 0x800F7860: nop

        goto L_800F787C;
    // 0x800F7860: nop

L_800F7864:
    // 0x800F7864: jal         0x800F770C
    // 0x800F7868: nop

    func_800F770C(rdram, ctx);
        goto after_1;
    // 0x800F7868: nop

    after_1:
    // 0x800F786C: b           L_800F787C
    // 0x800F7870: nop

        goto L_800F787C;
    // 0x800F7870: nop

L_800F7874:
    // 0x800F7874: b           L_800F787C
    // 0x800F7878: nop

        goto L_800F787C;
    // 0x800F7878: nop

L_800F787C:
    // 0x800F787C: b           L_800F7884
    // 0x800F7880: nop

        goto L_800F7884;
    // 0x800F7880: nop

L_800F7884:
    // 0x800F7884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7888: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F788C: jr          $ra
    // 0x800F7890: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F7890: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008B0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B0F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B0F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B0FC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008B100: lh          $t6, 0x4C1A($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4C1A);
    // 0x8008B104: nop

    // 0x8008B108: bne         $t6, $zero, L_8008B12C
    if (ctx->r14 != 0) {
        // 0x8008B10C: nop
    
            goto L_8008B12C;
    }
    // 0x8008B10C: nop

    // 0x8008B110: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008B114: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B118: swc1        $f4, 0x4F74($at)
    MEM_W(0X4F74, ctx->r1) = ctx->f4.u32l;
    // 0x8008B11C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8008B120: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B124: b           L_8008B154
    // 0x8008B128: sh          $t7, 0x4C1A($at)
    MEM_H(0X4C1A, ctx->r1) = ctx->r15;
        goto L_8008B154;
    // 0x8008B128: sh          $t7, 0x4C1A($at)
    MEM_H(0X4C1A, ctx->r1) = ctx->r15;
L_8008B12C:
    // 0x8008B12C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008B130: lh          $t8, 0x4C1A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4C1A);
    // 0x8008B134: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008B138: beq         $t8, $at, L_8008B154
    if (ctx->r24 == ctx->r1) {
        // 0x8008B13C: nop
    
            goto L_8008B154;
    }
    // 0x8008B13C: nop

    // 0x8008B140: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008B144: lh          $t9, 0x4C1A($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4C1A);
    // 0x8008B148: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B14C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8008B150: sh          $t0, 0x4C1A($at)
    MEM_H(0X4C1A, ctx->r1) = ctx->r8;
L_8008B154:
    // 0x8008B154: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008B158: lh          $t1, 0x4C1C($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4C1C);
    // 0x8008B15C: nop

    // 0x8008B160: bne         $t1, $zero, L_8008B19C
    if (ctx->r9 != 0) {
        // 0x8008B164: nop
    
            goto L_8008B19C;
    }
    // 0x8008B164: nop

    // 0x8008B168: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008B16C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B170: swc1        $f6, 0x4F50($at)
    MEM_W(0X4F50, ctx->r1) = ctx->f6.u32l;
    // 0x8008B174: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008B178: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B17C: swc1        $f8, 0x4F54($at)
    MEM_W(0X4F54, ctx->r1) = ctx->f8.u32l;
    // 0x8008B180: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8008B184: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B188: swc1        $f10, 0x4F58($at)
    MEM_W(0X4F58, ctx->r1) = ctx->f10.u32l;
    // 0x8008B18C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8008B190: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B194: b           L_8008B1C4
    // 0x8008B198: sh          $t2, 0x4C1C($at)
    MEM_H(0X4C1C, ctx->r1) = ctx->r10;
        goto L_8008B1C4;
    // 0x8008B198: sh          $t2, 0x4C1C($at)
    MEM_H(0X4C1C, ctx->r1) = ctx->r10;
L_8008B19C:
    // 0x8008B19C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008B1A0: lh          $t3, 0x4C1C($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4C1C);
    // 0x8008B1A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008B1A8: beq         $t3, $at, L_8008B1C4
    if (ctx->r11 == ctx->r1) {
        // 0x8008B1AC: nop
    
            goto L_8008B1C4;
    }
    // 0x8008B1AC: nop

    // 0x8008B1B0: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8008B1B4: lh          $t4, 0x4C1C($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4C1C);
    // 0x8008B1B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B1BC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8008B1C0: sh          $t5, 0x4C1C($at)
    MEM_H(0X4C1C, ctx->r1) = ctx->r13;
L_8008B1C4:
    // 0x8008B1C4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008B1C8: lh          $t6, 0x4C1E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4C1E);
    // 0x8008B1CC: nop

    // 0x8008B1D0: bne         $t6, $zero, L_8008B200
    if (ctx->r14 != 0) {
        // 0x8008B1D4: nop
    
            goto L_8008B200;
    }
    // 0x8008B1D4: nop

    // 0x8008B1D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008B1DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B1E0: swc1        $f16, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f16.u32l;
    // 0x8008B1E4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008B1E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B1EC: swc1        $f18, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f18.u32l;
    // 0x8008B1F0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8008B1F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B1F8: b           L_8008B228
    // 0x8008B1FC: sh          $t7, 0x4C1E($at)
    MEM_H(0X4C1E, ctx->r1) = ctx->r15;
        goto L_8008B228;
    // 0x8008B1FC: sh          $t7, 0x4C1E($at)
    MEM_H(0X4C1E, ctx->r1) = ctx->r15;
L_8008B200:
    // 0x8008B200: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008B204: lh          $t8, 0x4C1E($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4C1E);
    // 0x8008B208: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008B20C: beq         $t8, $at, L_8008B228
    if (ctx->r24 == ctx->r1) {
        // 0x8008B210: nop
    
            goto L_8008B228;
    }
    // 0x8008B210: nop

    // 0x8008B214: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008B218: lh          $t9, 0x4C1E($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4C1E);
    // 0x8008B21C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B220: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8008B224: sh          $t0, 0x4C1E($at)
    MEM_H(0X4C1E, ctx->r1) = ctx->r8;
L_8008B228:
    // 0x8008B228: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008B22C: lb          $t1, -0x1ECC($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1ECC);
    // 0x8008B230: nop

    // 0x8008B234: bne         $t1, $zero, L_8008B3CC
    if (ctx->r9 != 0) {
        // 0x8008B238: nop
    
            goto L_8008B3CC;
    }
    // 0x8008B238: nop

    // 0x8008B23C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B240: lwc1        $f12, 0x4F34($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4F34);
    // 0x8008B244: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B248: lwc1        $f14, 0x4F5C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4F5C);
    // 0x8008B24C: jal         0x80015538
    // 0x8008B250: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8008B250: nop

    after_0:
    // 0x8008B254: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B258: swc1        $f0, 0x4F34($at)
    MEM_W(0X4F34, ctx->r1) = ctx->f0.u32l;
    // 0x8008B25C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B260: lwc1        $f12, 0x4F38($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4F38);
    // 0x8008B264: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B268: lwc1        $f14, 0x4F60($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4F60);
    // 0x8008B26C: jal         0x80015538
    // 0x8008B270: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8008B270: nop

    after_1:
    // 0x8008B274: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B278: swc1        $f0, 0x4F38($at)
    MEM_W(0X4F38, ctx->r1) = ctx->f0.u32l;
    // 0x8008B27C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B280: lwc1        $f4, 0x4F40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F40);
    // 0x8008B284: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B288: lwc1        $f6, 0x4F74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F74);
    // 0x8008B28C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B290: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008B294: swc1        $f8, 0x4F40($at)
    MEM_W(0X4F40, ctx->r1) = ctx->f8.u32l;
    // 0x8008B298: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8008B29C: lh          $t2, 0x4FA4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4FA4);
    // 0x8008B2A0: nop

    // 0x8008B2A4: bne         $t2, $zero, L_8008B304
    if (ctx->r10 != 0) {
        // 0x8008B2A8: nop
    
            goto L_8008B304;
    }
    // 0x8008B2A8: nop

    // 0x8008B2AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B2B0: lwc1        $f10, 0x4F28($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F28);
    // 0x8008B2B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B2B8: lwc1        $f16, 0x4F50($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F50);
    // 0x8008B2BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B2C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008B2C4: swc1        $f18, 0x4F28($at)
    MEM_W(0X4F28, ctx->r1) = ctx->f18.u32l;
    // 0x8008B2C8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B2CC: lwc1        $f4, 0x4F2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F2C);
    // 0x8008B2D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B2D4: lwc1        $f6, 0x4F54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F54);
    // 0x8008B2D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B2DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008B2E0: swc1        $f8, 0x4F2C($at)
    MEM_W(0X4F2C, ctx->r1) = ctx->f8.u32l;
    // 0x8008B2E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B2E8: lwc1        $f10, 0x4F30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F30);
    // 0x8008B2EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B2F0: lwc1        $f16, 0x4F58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F58);
    // 0x8008B2F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B2F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008B2FC: b           L_8008B3C4
    // 0x8008B300: swc1        $f18, 0x4F30($at)
    MEM_W(0X4F30, ctx->r1) = ctx->f18.u32l;
        goto L_8008B3C4;
    // 0x8008B300: swc1        $f18, 0x4F30($at)
    MEM_W(0X4F30, ctx->r1) = ctx->f18.u32l;
L_8008B304:
    // 0x8008B304: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008B308: lw          $t3, 0x4FA8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4FA8);
    // 0x8008B30C: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008B310: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008B314: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008B318: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008B31C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008B320: lw          $t5, 0x4D48($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4D48);
    // 0x8008B324: nop

    // 0x8008B328: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8008B32C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B330: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008B334: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008B338: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008B33C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008B340: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008B344: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008B348: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008B34C: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8008B350: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B354: swc1        $f4, 0x4F28($at)
    MEM_W(0X4F28, ctx->r1) = ctx->f4.u32l;
    // 0x8008B358: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B35C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8008B360: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008B364: lh          $t0, 0x4FA6($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4FA6);
    // 0x8008B368: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008B36C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008B370: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8008B374: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008B378: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008B37C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008B380: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008B384: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008B388: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x8008B38C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B390: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8008B394: swc1        $f16, 0x4F2C($at)
    MEM_W(0X4F2C, ctx->r1) = ctx->f16.u32l;
    // 0x8008B398: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B39C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008B3A0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008B3A4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008B3A8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008B3AC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008B3B0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8008B3B4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008B3B8: lwc1        $f18, 0x4158($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8008B3BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B3C0: swc1        $f18, 0x4F30($at)
    MEM_W(0X4F30, ctx->r1) = ctx->f18.u32l;
L_8008B3C4:
    // 0x8008B3C4: b           L_8008B5BC
    // 0x8008B3C8: nop

        goto L_8008B5BC;
    // 0x8008B3C8: nop

L_8008B3CC:
    // 0x8008B3CC: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008B3D0: lh          $t3, 0x4C20($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4C20);
    // 0x8008B3D4: nop

    // 0x8008B3D8: bne         $t3, $zero, L_8008B414
    if (ctx->r11 != 0) {
        // 0x8008B3DC: nop
    
            goto L_8008B414;
    }
    // 0x8008B3DC: nop

    // 0x8008B3E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008B3E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B3E8: swc1        $f4, 0x4F68($at)
    MEM_W(0X4F68, ctx->r1) = ctx->f4.u32l;
    // 0x8008B3EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008B3F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B3F4: swc1        $f8, 0x4F6C($at)
    MEM_W(0X4F6C, ctx->r1) = ctx->f8.u32l;
    // 0x8008B3F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008B3FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B400: swc1        $f6, 0x4F70($at)
    MEM_W(0X4F70, ctx->r1) = ctx->f6.u32l;
    // 0x8008B404: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8008B408: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B40C: b           L_8008B43C
    // 0x8008B410: sh          $t4, 0x4C20($at)
    MEM_H(0X4C20, ctx->r1) = ctx->r12;
        goto L_8008B43C;
    // 0x8008B410: sh          $t4, 0x4C20($at)
    MEM_H(0X4C20, ctx->r1) = ctx->r12;
L_8008B414:
    // 0x8008B414: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008B418: lh          $t5, 0x4C20($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4C20);
    // 0x8008B41C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008B420: beq         $t5, $at, L_8008B43C
    if (ctx->r13 == ctx->r1) {
        // 0x8008B424: nop
    
            goto L_8008B43C;
    }
    // 0x8008B424: nop

    // 0x8008B428: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008B42C: lh          $t6, 0x4C20($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4C20);
    // 0x8008B430: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B434: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8008B438: sh          $t7, 0x4C20($at)
    MEM_H(0X4C20, ctx->r1) = ctx->r15;
L_8008B43C:
    // 0x8008B43C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B440: lwc1        $f10, 0x4F44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F44);
    // 0x8008B444: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B448: lwc1        $f16, 0x4F68($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F68);
    // 0x8008B44C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B450: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008B454: swc1        $f18, 0x4F44($at)
    MEM_W(0X4F44, ctx->r1) = ctx->f18.u32l;
    // 0x8008B458: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B45C: lwc1        $f4, 0x4F48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F48);
    // 0x8008B460: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B464: lwc1        $f8, 0x4F6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F6C);
    // 0x8008B468: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B46C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8008B470: swc1        $f6, 0x4F48($at)
    MEM_W(0X4F48, ctx->r1) = ctx->f6.u32l;
    // 0x8008B474: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B478: lwc1        $f10, 0x4F4C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F4C);
    // 0x8008B47C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B480: lwc1        $f16, 0x4F70($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F70);
    // 0x8008B484: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B488: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008B48C: swc1        $f18, 0x4F4C($at)
    MEM_W(0X4F4C, ctx->r1) = ctx->f18.u32l;
    // 0x8008B490: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008B494: lh          $t8, 0x4FA4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4FA4);
    // 0x8008B498: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008B49C: bne         $t8, $at, L_8008B568
    if (ctx->r24 != ctx->r1) {
        // 0x8008B4A0: nop
    
            goto L_8008B568;
    }
    // 0x8008B4A0: nop

    // 0x8008B4A4: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008B4A8: lw          $t9, 0x4FA8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4FA8);
    // 0x8008B4AC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008B4B0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008B4B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008B4B8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008B4BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008B4C0: lw          $t1, 0x4D48($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4D48);
    // 0x8008B4C4: nop

    // 0x8008B4C8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8008B4CC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B4D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008B4D4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008B4D8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008B4DC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008B4E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008B4E4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008B4E8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008B4EC: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8008B4F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B4F4: swc1        $f4, 0x4F28($at)
    MEM_W(0X4F28, ctx->r1) = ctx->f4.u32l;
    // 0x8008B4F8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B4FC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8008B500: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008B504: lh          $t6, 0x4FA6($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4FA6);
    // 0x8008B508: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008B50C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008B510: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8008B514: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008B518: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008B51C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008B520: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008B524: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008B528: lwc1        $f8, 0x4154($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x8008B52C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B530: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8008B534: swc1        $f16, 0x4F2C($at)
    MEM_W(0X4F2C, ctx->r1) = ctx->f16.u32l;
    // 0x8008B538: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B53C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008B540: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008B544: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008B548: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008B54C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008B550: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008B554: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008B558: lwc1        $f18, 0x4158($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8008B55C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B560: b           L_8008B5BC
    // 0x8008B564: swc1        $f18, 0x4F30($at)
    MEM_W(0X4F30, ctx->r1) = ctx->f18.u32l;
        goto L_8008B5BC;
    // 0x8008B564: swc1        $f18, 0x4F30($at)
    MEM_W(0X4F30, ctx->r1) = ctx->f18.u32l;
L_8008B568:
    // 0x8008B568: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B56C: lwc1        $f4, 0x4F28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F28);
    // 0x8008B570: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B574: lwc1        $f6, 0x4F50($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F50);
    // 0x8008B578: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B57C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008B580: swc1        $f8, 0x4F28($at)
    MEM_W(0X4F28, ctx->r1) = ctx->f8.u32l;
    // 0x8008B584: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B588: lwc1        $f10, 0x4F2C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F2C);
    // 0x8008B58C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B590: lwc1        $f16, 0x4F54($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F54);
    // 0x8008B594: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B598: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008B59C: swc1        $f18, 0x4F2C($at)
    MEM_W(0X4F2C, ctx->r1) = ctx->f18.u32l;
    // 0x8008B5A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B5A4: lwc1        $f4, 0x4F30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F30);
    // 0x8008B5A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B5AC: lwc1        $f6, 0x4F58($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F58);
    // 0x8008B5B0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B5B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008B5B8: swc1        $f8, 0x4F30($at)
    MEM_W(0X4F30, ctx->r1) = ctx->f8.u32l;
L_8008B5BC:
    // 0x8008B5BC: b           L_8008B5C4
    // 0x8008B5C0: nop

        goto L_8008B5C4;
    // 0x8008B5C0: nop

L_8008B5C4:
    // 0x8008B5C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B5C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008B5CC: jr          $ra
    // 0x8008B5D0: nop

    return;
    // 0x8008B5D0: nop

;}
RECOMP_FUNC void func_800C5F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5F30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C5F34: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800C5F38: nop

    // 0x800C5F3C: bne         $t6, $zero, L_800C5F70
    if (ctx->r14 != 0) {
        // 0x800C5F40: nop
    
            goto L_800C5F70;
    }
    // 0x800C5F40: nop

    // 0x800C5F44: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800C5F48: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800C5F4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C5F50: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800C5F54: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C5F58: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C5F5C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C5F60: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C5F64: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C5F68: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x800C5F6C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800C5F70:
    // 0x800C5F70: jr          $ra
    // 0x800C5F74: nop

    return;
    // 0x800C5F74: nop

    // 0x800C5F78: jr          $ra
    // 0x800C5F7C: nop

    return;
    // 0x800C5F7C: nop

;}
RECOMP_FUNC void func_80077840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077840: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80077844: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80077848: bne         $a0, $zero, L_80077874
    if (ctx->r4 != 0) {
        // 0x8007784C: nop
    
            goto L_80077874;
    }
    // 0x8007784C: nop

    // 0x80077850: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077854: lwc1        $f6, 0x4BE8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4BE8);
    // 0x80077858: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8007785C: nop

    // 0x80077860: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80077864: b           L_80077898
    // 0x80077868: nop

        goto L_80077898;
    // 0x80077868: nop

    // 0x8007786C: b           L_80077890
    // 0x80077870: nop

        goto L_80077890;
    // 0x80077870: nop

L_80077874:
    // 0x80077874: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80077878: lwc1        $f10, 0x4BEC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4BEC);
    // 0x8007787C: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80077880: nop

    // 0x80077884: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80077888: b           L_80077898
    // 0x8007788C: nop

        goto L_80077898;
    // 0x8007788C: nop

L_80077890:
    // 0x80077890: b           L_80077898
    // 0x80077894: nop

        goto L_80077898;
    // 0x80077894: nop

L_80077898:
    // 0x80077898: jr          $ra
    // 0x8007789C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007789C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800D97A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D97A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800D97A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D97AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D97B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D97B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D97B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D97BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D97C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D97C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D97C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D97CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D97D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D97D4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800D97D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D97DC: nop

    // 0x800D97E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D97E4: nop

    // 0x800D97E8: bne         $t1, $zero, L_800D9858
    if (ctx->r9 != 0) {
        // 0x800D97EC: nop
    
            goto L_800D9858;
    }
    // 0x800D97EC: nop

    // 0x800D97F0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D97F4: nop

    // 0x800D97F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D97FC: nop

    // 0x800D9800: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D9804: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D9808: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D980C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x800D9810: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800D9814: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800D9818: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D981C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D9820: nop

    // 0x800D9824: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800D9828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D982C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9830: jal         0x8002A46C
    // 0x800D9834: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800D9834: nop

    after_0:
    // 0x800D9838: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800D983C: nop

    // 0x800D9840: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800D9844: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800D9848: nop

    // 0x800D984C: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800D9850: nop

    // 0x800D9854: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
L_800D9858:
    // 0x800D9858: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800D985C: nop

    // 0x800D9860: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x800D9864: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D9868: nop

    // 0x800D986C: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800D9870: nop

    // 0x800D9874: bne         $t3, $zero, L_800D98B4
    if (ctx->r11 != 0) {
        // 0x800D9878: nop
    
            goto L_800D98B4;
    }
    // 0x800D9878: nop

    // 0x800D987C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9880: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D9884: jal         0x80028FA0
    // 0x800D9888: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800D9888: nop

    after_1:
    // 0x800D988C: beq         $v0, $zero, L_800D98AC
    if (ctx->r2 == 0) {
        // 0x800D9890: nop
    
            goto L_800D98AC;
    }
    // 0x800D9890: nop

    // 0x800D9894: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800D9898: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800D989C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800D98A0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800D98A4: nop

    // 0x800D98A8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800D98AC:
    // 0x800D98AC: b           L_800D98CC
    // 0x800D98B0: nop

        goto L_800D98CC;
    // 0x800D98B0: nop

L_800D98B4:
    // 0x800D98B4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D98B8: nop

    // 0x800D98BC: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800D98C0: nop

    // 0x800D98C4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800D98C8: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
L_800D98CC:
    // 0x800D98CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D98D0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800D98D4: nop

    // 0x800D98D8: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x800D98DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D98E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D98E4: jal         0x80029C40
    // 0x800D98E8: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800D98E8: nop

    after_2:
    // 0x800D98EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D98F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D98F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D98F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D98FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800D9900: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x800D9904: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D9908: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D990C: jal         0x80029018
    // 0x800D9910: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800D9910: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x800D9914: beq         $v0, $zero, L_800D9928
    if (ctx->r2 == 0) {
        // 0x800D9918: nop
    
            goto L_800D9928;
    }
    // 0x800D9918: nop

    // 0x800D991C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D9920: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800D9924: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_800D9928:
    // 0x800D9928: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x800D992C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D9930: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D9934: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9938: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D993C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800D9940: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x800D9944: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D9948: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800D994C: jal         0x800295C0
    // 0x800D9950: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800D9950: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x800D9954: beq         $v0, $zero, L_800D9968
    if (ctx->r2 == 0) {
        // 0x800D9958: nop
    
            goto L_800D9968;
    }
    // 0x800D9958: nop

    // 0x800D995C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800D9960: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800D9964: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
L_800D9968:
    // 0x800D9968: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800D996C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D9970: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D9974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D9978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D997C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800D9980: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x800D9984: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D9988: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800D998C: jal         0x800295C0
    // 0x800D9990: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x800D9990: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x800D9994: beq         $v0, $zero, L_800D99A8
    if (ctx->r2 == 0) {
        // 0x800D9998: nop
    
            goto L_800D99A8;
    }
    // 0x800D9998: nop

    // 0x800D999C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800D99A0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D99A4: sh          $t2, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r10;
L_800D99A8:
    // 0x800D99A8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800D99AC: nop

    // 0x800D99B0: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800D99B4: nop

    // 0x800D99B8: beq         $t8, $zero, L_800D99FC
    if (ctx->r24 == 0) {
        // 0x800D99BC: nop
    
            goto L_800D99FC;
    }
    // 0x800D99BC: nop

    // 0x800D99C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D99C4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800D99C8: nop

    // 0x800D99CC: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
    // 0x800D99D0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800D99D4: nop

    // 0x800D99D8: lwc1        $f16, 0x2C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800D99DC: nop

    // 0x800D99E0: swc1        $f16, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f16.u32l;
    // 0x800D99E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800D99E8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800D99EC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800D99F0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800D99F4: nop

    // 0x800D99F8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800D99FC:
    // 0x800D99FC: b           L_800D9A04
    // 0x800D9A00: nop

        goto L_800D9A04;
    // 0x800D9A00: nop

L_800D9A04:
    // 0x800D9A04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D9A08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800D9A0C: jr          $ra
    // 0x800D9A10: nop

    return;
    // 0x800D9A10: nop

;}
RECOMP_FUNC void func_800C7130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C713C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7140: jal         0x8002B0E4
    // 0x800C7144: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800C7144: nop

    after_0:
    // 0x800C7148: b           L_800C7150
    // 0x800C714C: nop

        goto L_800C7150;
    // 0x800C714C: nop

L_800C7150:
    // 0x800C7150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C7154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C7158: jr          $ra
    // 0x800C715C: nop

    return;
    // 0x800C715C: nop

;}
RECOMP_FUNC void func_800D58C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D58C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D58C4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D58C8: nop

    // 0x800D58CC: bne         $t6, $zero, L_800D5928
    if (ctx->r14 != 0) {
        // 0x800D58D0: nop
    
            goto L_800D5928;
    }
    // 0x800D58D0: nop

    // 0x800D58D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800D58D8: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800D58DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D58E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D58E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D58E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D58EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D58F0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800D58F4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D58F8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800D58FC: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800D5900: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D5904: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D5908: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D590C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D5910: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D5914: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D5918: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D591C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D5920: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D5924: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800D5928:
    // 0x800D5928: jr          $ra
    // 0x800D592C: nop

    return;
    // 0x800D592C: nop

    // 0x800D5930: jr          $ra
    // 0x800D5934: nop

    return;
    // 0x800D5934: nop

;}
RECOMP_FUNC void func_8009C9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C9F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009C9FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009CA00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009CA04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009CA08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009CA0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009CA10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CA14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009CA18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CA1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009CA20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009CA24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009CA28: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009CA2C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009CA30: nop

    // 0x8009CA34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009CA38: nop

    // 0x8009CA3C: bne         $t1, $zero, L_8009CA78
    if (ctx->r9 != 0) {
        // 0x8009CA40: nop
    
            goto L_8009CA78;
    }
    // 0x8009CA40: nop

    // 0x8009CA44: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8009CA48: nop

    // 0x8009CA4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009CA50: nop

    // 0x8009CA54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009CA58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009CA5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009CA60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009CA64: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009CA68: addiu       $a3, $a3, 0x6A18
    ctx->r7 = ADD32(ctx->r7, 0X6A18);
    // 0x8009CA6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009CA70: jal         0x8001ABF4
    // 0x8009CA74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8009CA74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_8009CA78:
    // 0x8009CA78: b           L_8009CA80
    // 0x8009CA7C: nop

        goto L_8009CA80;
    // 0x8009CA7C: nop

L_8009CA80:
    // 0x8009CA80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009CA84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009CA88: jr          $ra
    // 0x8009CA8C: nop

    return;
    // 0x8009CA8C: nop

;}
RECOMP_FUNC void func_800B7398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B7398: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800B739C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800B73A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B73A4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800B73A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B73AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800B73B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B73B4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800B73B8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800B73BC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800B73C0: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800B73C4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800B73C8: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800B73CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B73D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800B73D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B73D8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B73DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B73E0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B73E4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B73E8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B73EC: jr          $ra
    // 0x800B73F0: nop

    return;
    // 0x800B73F0: nop

    // 0x800B73F4: jr          $ra
    // 0x800B73F8: nop

    return;
    // 0x800B73F8: nop

;}
RECOMP_FUNC void func_800A32E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A32E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A32E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A32EC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A32F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800A32F4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A32F8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A32FC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A3300: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A3304: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A3308: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A330C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A3310: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A3314: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A3318: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A331C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A3320: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A3324: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A3328: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A332C: addiu       $a1, $a1, 0x38B0
    ctx->r5 = ADD32(ctx->r5, 0X38B0);
    // 0x800A3330: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A3334: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A3338: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A333C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A3340: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A3344: jal         0x80027464
    // 0x800A3348: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A3348: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A334C: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x800A3350: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3354: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A3358: beq         $t1, $at, L_800A347C
    if (ctx->r9 == ctx->r1) {
        // 0x800A335C: nop
    
            goto L_800A347C;
    }
    // 0x800A335C: nop

    // 0x800A3360: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3364: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3368: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A336C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A3370: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A3374: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A3378: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A337C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A3380: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A3384: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800A3388: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800A338C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3390: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A3394: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A3398: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A339C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A33A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A33A4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A33A8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A33AC: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x800A33B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A33B4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800A33B8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A33BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A33C0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A33C4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A33C8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A33CC: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x800A33D0: sh          $t8, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r24;
    // 0x800A33D4: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800A33D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A33DC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800A33E0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A33E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A33E8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A33EC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A33F0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A33F4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800A33F8: sh          $t0, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r8;
    // 0x800A33FC: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800A3400: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800A3404: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A3408: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A340C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A3410: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A3414: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A3418: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A341C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3420: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A3424: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800A3428: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800A342C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800A3430: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A3434: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A3438: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A343C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A3440: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A3444: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800A3448: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x800A344C: lwc1        $f20, 0xC($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800A3450: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3454: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x800A3458: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x800A345C: nop

    // 0x800A3460: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x800A3464: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800A3468: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A346C: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800A3470: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A3474: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A3478: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
L_800A347C:
    // 0x800A347C: b           L_800A3484
    // 0x800A3480: nop

        goto L_800A3484;
    // 0x800A3480: nop

L_800A3484:
    // 0x800A3484: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A3488: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800A348C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A3490: jr          $ra
    // 0x800A3494: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A3494: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A8500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A8504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A8508: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A850C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800A8510: nop

    // 0x800A8514: beq         $t6, $zero, L_800A8528
    if (ctx->r14 == 0) {
        // 0x800A8518: nop
    
            goto L_800A8528;
    }
    // 0x800A8518: nop

    // 0x800A851C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A8520: bne         $t6, $at, L_800A8568
    if (ctx->r14 != ctx->r1) {
        // 0x800A8524: nop
    
            goto L_800A8568;
    }
    // 0x800A8524: nop

L_800A8528:
    // 0x800A8528: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800A852C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800A8530: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8534: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800A8538: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A853C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A8540: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A8544: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A8548: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A854C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800A8550: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8554: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8558: jal         0x8002B0E4
    // 0x800A855C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800A855C: nop

    after_0:
    // 0x800A8560: b           L_800A8570
    // 0x800A8564: nop

        goto L_800A8570;
    // 0x800A8564: nop

L_800A8568:
    // 0x800A8568: b           L_800A8570
    // 0x800A856C: nop

        goto L_800A8570;
    // 0x800A856C: nop

L_800A8570:
    // 0x800A8570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A8574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A8578: jr          $ra
    // 0x800A857C: nop

    return;
    // 0x800A857C: nop

;}
RECOMP_FUNC void func_800FC1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC1D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FC1DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FC1E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FC1E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FC1E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FC1EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FC1F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FC1F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FC1F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FC1FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FC200: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FC204: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FC208: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800FC20C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FC210: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800FC214: nop

    // 0x800FC218: beq         $t0, $zero, L_800FC234
    if (ctx->r8 == 0) {
        // 0x800FC21C: nop
    
            goto L_800FC234;
    }
    // 0x800FC21C: nop

    // 0x800FC220: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FC224: beq         $t0, $at, L_800FC234
    if (ctx->r8 == ctx->r1) {
        // 0x800FC228: nop
    
            goto L_800FC234;
    }
    // 0x800FC228: nop

    // 0x800FC22C: b           L_800FC2D4
    // 0x800FC230: nop

        goto L_800FC2D4;
    // 0x800FC230: nop

L_800FC234:
    // 0x800FC234: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800FC238: lw          $t1, 0x7A64($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A64);
    // 0x800FC23C: nop

    // 0x800FC240: bne         $t1, $zero, L_800FC2A8
    if (ctx->r9 != 0) {
        // 0x800FC244: nop
    
            goto L_800FC2A8;
    }
    // 0x800FC244: nop

    // 0x800FC248: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800FC24C: lb          $t2, 0x5242($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5242);
    // 0x800FC250: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FC254: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800FC258: sb          $t3, 0x5242($at)
    MEM_B(0X5242, ctx->r1) = ctx->r11;
    // 0x800FC25C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC260: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800FC264: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FC268: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800FC26C: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x800FC270: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800FC274: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x800FC278: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800FC27C: jal         0x80081468
    // 0x800FC280: addiu       $a0, $zero, 0x2CB
    ctx->r4 = ADD32(0, 0X2CB);
    func_80081468(rdram, ctx);
        goto after_0;
    // 0x800FC280: addiu       $a0, $zero, 0x2CB
    ctx->r4 = ADD32(0, 0X2CB);
    after_0:
    // 0x800FC284: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC288: nop

    // 0x800FC28C: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x800FC290: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC294: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800FC298: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800FC29C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC2A0: b           L_800FC2CC
    // 0x800FC2A4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_800FC2CC;
    // 0x800FC2A4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800FC2A8:
    // 0x800FC2A8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC2AC: nop

    // 0x800FC2B0: sh          $zero, 0x108($t9)
    MEM_H(0X108, ctx->r25) = 0;
    // 0x800FC2B4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC2B8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800FC2BC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800FC2C0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800FC2C4: nop

    // 0x800FC2C8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800FC2CC:
    // 0x800FC2CC: b           L_800FC2D4
    // 0x800FC2D0: nop

        goto L_800FC2D4;
    // 0x800FC2D0: nop

L_800FC2D4:
    // 0x800FC2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FC2D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FC2DC: jr          $ra
    // 0x800FC2E0: nop

    return;
    // 0x800FC2E0: nop

;}
RECOMP_FUNC void func_800F95F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F95F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F95F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F95FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F9600: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F9604: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F9608: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F960C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9610: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F9614: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9618: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F961C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F9620: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F9624: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F9628: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F962C: nop

    // 0x800F9630: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F9634: nop

    // 0x800F9638: bne         $t1, $zero, L_800F96A8
    if (ctx->r9 != 0) {
        // 0x800F963C: nop
    
            goto L_800F96A8;
    }
    // 0x800F963C: nop

    // 0x800F9640: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9644: nop

    // 0x800F9648: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F964C: nop

    // 0x800F9650: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F9654: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F9658: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F965C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9660: nop

    // 0x800F9664: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800F9668: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F966C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9670: nop

    // 0x800F9674: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x800F9678: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F967C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9680: nop

    // 0x800F9684: swc1        $f8, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f8.u32l;
    // 0x800F9688: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800F968C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F9690: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9694: nop

    // 0x800F9698: swc1        $f10, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f10.u32l;
    // 0x800F969C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800F96A0: nop

    // 0x800F96A4: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
L_800F96A8:
    // 0x800F96A8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F96AC: nop

    // 0x800F96B0: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800F96B4: nop

    // 0x800F96B8: bne         $t1, $zero, L_800F9714
    if (ctx->r9 != 0) {
        // 0x800F96BC: nop
    
            goto L_800F9714;
    }
    // 0x800F96BC: nop

    // 0x800F96C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F96C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F96C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F96CC: lwc1        $f16, 0x48($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X48);
    // 0x800F96D0: nop

    // 0x800F96D4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F96D8: swc1        $f4, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f4.u32l;
    // 0x800F96DC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F96E0: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x800F96E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F96E8: lwc1        $f6, 0x48($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X48);
    // 0x800F96EC: nop

    // 0x800F96F0: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800F96F4: nop

    // 0x800F96F8: bc1f        L_800F970C
    if (!c1cs) {
        // 0x800F96FC: nop
    
            goto L_800F970C;
    }
    // 0x800F96FC: nop

    // 0x800F9700: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9704: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F9708: sh          $t2, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r10;
L_800F970C:
    // 0x800F970C: b           L_800F977C
    // 0x800F9710: nop

        goto L_800F977C;
    // 0x800F9710: nop

L_800F9714:
    // 0x800F9714: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9718: nop

    // 0x800F971C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800F9720: nop

    // 0x800F9724: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x800F9728: beq         $at, $zero, L_800F9760
    if (ctx->r1 == 0) {
        // 0x800F972C: nop
    
            goto L_800F9760;
    }
    // 0x800F972C: nop

    // 0x800F9730: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800F9734: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F9738: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800F973C: nop

    // 0x800F9740: swc1        $f10, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f10.u32l;
    // 0x800F9744: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9748: nop

    // 0x800F974C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800F9750: nop

    // 0x800F9754: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800F9758: b           L_800F977C
    // 0x800F975C: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
        goto L_800F977C;
    // 0x800F975C: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_800F9760:
    // 0x800F9760: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9764: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F9768: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F976C: lwc1        $f16, 0x48($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X48);
    // 0x800F9770: nop

    // 0x800F9774: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800F9778: swc1        $f4, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f4.u32l;
L_800F977C:
    // 0x800F977C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9780: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9788: jal         0x8001B6BC
    // 0x800F978C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_0;
    // 0x800F978C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x800F9790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9798: jal         0x80029C40
    // 0x800F979C: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800F979C: nop

    after_1:
    // 0x800F97A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F97A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F97A8: jal         0x80029D04
    // 0x800F97AC: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800F97AC: nop

    after_2:
    // 0x800F97B0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F97B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F97B8: lwc1        $f6, 0x48($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X48);
    // 0x800F97BC: nop

    // 0x800F97C0: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800F97C4: nop

    // 0x800F97C8: bc1f        L_800F97E8
    if (!c1cs) {
        // 0x800F97CC: nop
    
            goto L_800F97E8;
    }
    // 0x800F97CC: nop

    // 0x800F97D0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800F97D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F97D8: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800F97DC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F97E0: nop

    // 0x800F97E4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800F97E8:
    // 0x800F97E8: b           L_800F97F0
    // 0x800F97EC: nop

        goto L_800F97F0;
    // 0x800F97EC: nop

L_800F97F0:
    // 0x800F97F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F97F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F97F8: jr          $ra
    // 0x800F97FC: nop

    return;
    // 0x800F97FC: nop

;}
RECOMP_FUNC void func_800969AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800969AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800969B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800969B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800969B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800969BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800969C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800969C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800969C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800969CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800969D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800969D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800969D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800969DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800969E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800969E4: nop

    // 0x800969E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800969EC: nop

    // 0x800969F0: bne         $t1, $zero, L_80096A38
    if (ctx->r9 != 0) {
        // 0x800969F4: nop
    
            goto L_80096A38;
    }
    // 0x800969F4: nop

    // 0x800969F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800969FC: nop

    // 0x80096A00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80096A04: nop

    // 0x80096A08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80096A0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80096A10: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80096A14: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x80096A18: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x80096A1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80096A20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80096A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80096A28: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x80096A2C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80096A30: jal         0x800175F0
    // 0x80096A34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80096A34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_80096A38:
    // 0x80096A38: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80096A3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80096A40: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x80096A44: nop

    // 0x80096A48: bne         $t8, $at, L_80096BB0
    if (ctx->r24 != ctx->r1) {
        // 0x80096A4C: nop
    
            goto L_80096BB0;
    }
    // 0x80096A4C: nop

    // 0x80096A50: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80096A54: nop

    // 0x80096A58: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80096A5C: nop

    // 0x80096A60: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x80096A64: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x80096A68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80096A6C: jal         0x80096894
    // 0x80096A70: nop

    func_80096894(rdram, ctx);
        goto after_1;
    // 0x80096A70: nop

    after_1:
    // 0x80096A74: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80096A78: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80096A7C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80096A80: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x80096A84: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
L_80096A88:
    // 0x80096A88: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80096A8C: jal         0x80026E58
    // 0x80096A90: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_2;
    // 0x80096A90: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    after_2:
    // 0x80096A94: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80096A98: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80096A9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80096AA0: bne         $t5, $at, L_80096AB0
    if (ctx->r13 != ctx->r1) {
        // 0x80096AA4: nop
    
            goto L_80096AB0;
    }
    // 0x80096AA4: nop

    // 0x80096AA8: b           L_80096BB0
    // 0x80096AAC: nop

        goto L_80096BB0;
    // 0x80096AAC: nop

L_80096AB0:
    // 0x80096AB0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80096AB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80096AB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80096ABC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096AC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096AC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096ACC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80096AD0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80096AD4: lh          $t8, 0x41FE($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41FE);
    // 0x80096AD8: lh          $t1, 0xAE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAE);
    // 0x80096ADC: nop

    // 0x80096AE0: bne         $t8, $t1, L_80096B98
    if (ctx->r24 != ctx->r9) {
        // 0x80096AE4: nop
    
            goto L_80096B98;
    }
    // 0x80096AE4: nop

    // 0x80096AE8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80096AEC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80096AF0: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80096AF4: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x80096AF8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80096AFC: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x80096B00: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80096B04: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80096B08: lh          $t4, 0x41F4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F4);
    // 0x80096B0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80096B10: bne         $t4, $at, L_80096B44
    if (ctx->r12 != ctx->r1) {
        // 0x80096B14: nop
    
            goto L_80096B44;
    }
    // 0x80096B14: nop

    // 0x80096B18: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80096B1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096B20: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80096B24: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80096B28: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80096B2C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80096B30: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80096B34: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80096B38: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80096B3C: b           L_80096B6C
    // 0x80096B40: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
        goto L_80096B6C;
    // 0x80096B40: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
L_80096B44:
    // 0x80096B44: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80096B48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096B4C: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80096B50: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80096B54: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80096B58: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80096B5C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80096B60: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80096B64: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80096B68: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_80096B6C:
    // 0x80096B6C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80096B70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096B74: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80096B78: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80096B7C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80096B80: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80096B84: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80096B88: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80096B8C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80096B90: b           L_80096BB0
    // 0x80096B94: nop

        goto L_80096BB0;
    // 0x80096B94: nop

L_80096B98:
    // 0x80096B98: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80096B9C: nop

    // 0x80096BA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80096BA4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80096BA8: b           L_80096A88
    // 0x80096BAC: nop

        goto L_80096A88;
    // 0x80096BAC: nop

L_80096BB0:
    // 0x80096BB0: b           L_80096BB8
    // 0x80096BB4: nop

        goto L_80096BB8;
    // 0x80096BB4: nop

L_80096BB8:
    // 0x80096BB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80096BBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80096BC0: jr          $ra
    // 0x80096BC4: nop

    return;
    // 0x80096BC4: nop

;}
RECOMP_FUNC void func_800B6F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B6F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B6F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B6F34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6F38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6F3C: jal         0x8001BB34
    // 0x800B6F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800B6F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B6F44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6F48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6F4C: jal         0x8002B0E4
    // 0x800B6F50: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800B6F50: nop

    after_1:
    // 0x800B6F54: b           L_800B6F5C
    // 0x800B6F58: nop

        goto L_800B6F5C;
    // 0x800B6F58: nop

L_800B6F5C:
    // 0x800B6F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B6F60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B6F64: jr          $ra
    // 0x800B6F68: nop

    return;
    // 0x800B6F68: nop

;}
RECOMP_FUNC void func_800A0DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0DAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A0DB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A0DB4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A0DB8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800A0DBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A0DC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A0DC4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A0DC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A0DCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0DD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A0DD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0DD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A0DDC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A0DE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A0DE4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A0DE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A0DEC: nop

    // 0x800A0DF0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A0DF4: nop

    // 0x800A0DF8: bne         $t1, $zero, L_800A0E2C
    if (ctx->r9 != 0) {
        // 0x800A0DFC: nop
    
            goto L_800A0E2C;
    }
    // 0x800A0DFC: nop

    // 0x800A0E00: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A0E04: nop

    // 0x800A0E08: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A0E0C: nop

    // 0x800A0E10: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A0E14: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800A0E18: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A0E1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A0E20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A0E24: nop

    // 0x800A0E28: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
L_800A0E2C:
    // 0x800A0E2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A0E30: nop

    // 0x800A0E34: lh          $t7, 0xAC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAC);
    // 0x800A0E38: nop

    // 0x800A0E3C: bne         $t7, $zero, L_800A0E74
    if (ctx->r15 != 0) {
        // 0x800A0E40: nop
    
            goto L_800A0E74;
    }
    // 0x800A0E40: nop

    // 0x800A0E44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A0E48: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A0E4C: nop

    // 0x800A0E50: swc1        $f6, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f6.u32l;
    // 0x800A0E54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A0E58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A0E5C: jal         0x80029D8C
    // 0x800A0E60: nop

    func_80029D8C(rdram, ctx);
        goto after_0;
    // 0x800A0E60: nop

    after_0:
    // 0x800A0E64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A0E68: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A0E6C: b           L_800A0F00
    // 0x800A0E70: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
        goto L_800A0F00;
    // 0x800A0E70: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
L_800A0E74:
    // 0x800A0E74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A0E78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A0E7C: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x800A0E80: nop

    // 0x800A0E84: bne         $t1, $at, L_800A0ED0
    if (ctx->r9 != ctx->r1) {
        // 0x800A0E88: nop
    
            goto L_800A0ED0;
    }
    // 0x800A0E88: nop

    // 0x800A0E8C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A0E90: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A0E94: nop

    // 0x800A0E98: swc1        $f10, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f10.u32l;
    // 0x800A0E9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A0EA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A0EA4: jal         0x80029D8C
    // 0x800A0EA8: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x800A0EA8: nop

    after_1:
    // 0x800A0EAC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A0EB0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A0EB4: nop

    // 0x800A0EB8: swc1        $f16, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f16.u32l;
    // 0x800A0EBC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A0EC0: nop

    // 0x800A0EC4: lwc1        $f18, 0x2C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800A0EC8: b           L_800A0F00
    // 0x800A0ECC: swc1        $f18, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f18.u32l;
        goto L_800A0F00;
    // 0x800A0ECC: swc1        $f18, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f18.u32l;
L_800A0ED0:
    // 0x800A0ED0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A0ED4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A0ED8: nop

    // 0x800A0EDC: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800A0EE0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A0EE4: nop

    // 0x800A0EE8: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800A0EEC: nop

    // 0x800A0EF0: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800A0EF4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A0EF8: nop

    // 0x800A0EFC: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
L_800A0F00:
    // 0x800A0F00: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A0F04: nop

    // 0x800A0F08: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x800A0F0C: nop

    // 0x800A0F10: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x800A0F14: beq         $at, $zero, L_800A0F8C
    if (ctx->r1 == 0) {
        // 0x800A0F18: nop
    
            goto L_800A0F8C;
    }
    // 0x800A0F18: nop

    // 0x800A0F1C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A0F20: nop

    // 0x800A0F24: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800A0F28: lwc1        $f10, 0x44($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X44);
    // 0x800A0F2C: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x800A0F30: nop

    // 0x800A0F34: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A0F38: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800A0F3C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800A0F40: nop

    // 0x800A0F44: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800A0F48: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0F4C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0F50: nop

    // 0x800A0F54: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A0F58: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x800A0F5C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800A0F60: sh          $t4, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r12;
    // 0x800A0F64: nop

    // 0x800A0F68: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A0F6C: nop

    // 0x800A0F70: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x800A0F74: nop

    // 0x800A0F78: bgtz        $t5, L_800A0F8C
    if (SIGNED(ctx->r13) > 0) {
        // 0x800A0F7C: nop
    
            goto L_800A0F8C;
    }
    // 0x800A0F7C: nop

    // 0x800A0F80: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A0F84: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800A0F88: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
L_800A0F8C:
    // 0x800A0F8C: b           L_800A0F94
    // 0x800A0F90: nop

        goto L_800A0F94;
    // 0x800A0F90: nop

L_800A0F94:
    // 0x800A0F94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0F98: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800A0F9C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800A0FA0: jr          $ra
    // 0x800A0FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A0FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006A168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A168: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006A16C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A170: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006A174: lb          $t6, -0x1C2C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C2C);
    // 0x8006A178: nop

    // 0x8006A17C: bne         $t6, $zero, L_8006A198
    if (ctx->r14 != 0) {
        // 0x8006A180: nop
    
            goto L_8006A198;
    }
    // 0x8006A180: nop

    // 0x8006A184: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006A188: lh          $t7, -0x1BCE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCE);
    // 0x8006A18C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A190: b           L_8006A1DC
    // 0x8006A194: sw          $t7, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r15;
        goto L_8006A1DC;
    // 0x8006A194: sw          $t7, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r15;
L_8006A198:
    // 0x8006A198: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006A19C: lw          $t8, -0x1BD8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1BD8);
    // 0x8006A1A0: nop

    // 0x8006A1A4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8006A1A8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006A1AC: lh          $t9, -0x1BCE($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1BCE);
    // 0x8006A1B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A1B4: sw          $t9, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r25;
    // 0x8006A1B8: jal         0x80069FD8
    // 0x8006A1BC: nop

    func_80069FD8(rdram, ctx);
        goto after_0;
    // 0x8006A1BC: nop

    after_0:
    // 0x8006A1C0: jal         0x8006A054
    // 0x8006A1C4: nop

    func_8006A054(rdram, ctx);
        goto after_1;
    // 0x8006A1C4: nop

    after_1:
    // 0x8006A1C8: beq         $v0, $zero, L_8006A1DC
    if (ctx->r2 == 0) {
        // 0x8006A1CC: nop
    
            goto L_8006A1DC;
    }
    // 0x8006A1CC: nop

    // 0x8006A1D0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A1D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A1D8: sw          $t0, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r8;
L_8006A1DC:
    // 0x8006A1DC: b           L_8006A1E4
    // 0x8006A1E0: nop

        goto L_8006A1E4;
    // 0x8006A1E0: nop

L_8006A1E4:
    // 0x8006A1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A1E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006A1EC: jr          $ra
    // 0x8006A1F0: nop

    return;
    // 0x8006A1F0: nop

;}
RECOMP_FUNC void func_8009F71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F71C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009F720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009F724: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009F728: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009F72C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009F730: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009F734: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009F738: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009F73C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009F740: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009F744: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009F748: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009F74C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009F750: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F754: nop

    // 0x8009F758: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009F75C: nop

    // 0x8009F760: bne         $t1, $zero, L_8009F7E4
    if (ctx->r9 != 0) {
        // 0x8009F764: nop
    
            goto L_8009F7E4;
    }
    // 0x8009F764: nop

    // 0x8009F768: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F76C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009F770: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8009F774: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8009F778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009F77C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F780: nop

    // 0x8009F784: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
    // 0x8009F788: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F78C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009F790: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009F794: lwc1        $f12, 0x40($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X40);
    // 0x8009F798: jal         0x80015538
    // 0x8009F79C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8009F79C: nop

    after_0:
    // 0x8009F7A0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F7A4: nop

    // 0x8009F7A8: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
    // 0x8009F7AC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8009F7B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009F7B4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F7B8: nop

    // 0x8009F7BC: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x8009F7C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F7C4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F7C8: nop

    // 0x8009F7CC: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x8009F7D0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F7D4: nop

    // 0x8009F7D8: lwc1        $f10, 0x44($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X44);
    // 0x8009F7DC: nop

    // 0x8009F7E0: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
L_8009F7E4:
    // 0x8009F7E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009F7E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009F7EC: jal         0x80029D04
    // 0x8009F7F0: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x8009F7F0: nop

    after_1:
    // 0x8009F7F4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F7F8: nop

    // 0x8009F7FC: lwc1        $f16, 0xD4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x8009F800: lwc1        $f18, 0x48($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X48);
    // 0x8009F804: nop

    // 0x8009F808: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8009F80C: swc1        $f4, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f4.u32l;
    // 0x8009F810: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F814: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009F818: lwc1        $f6, 0xD4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x8009F81C: nop

    // 0x8009F820: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x8009F824: nop

    // 0x8009F828: bc1f        L_8009F848
    if (!c1cs) {
        // 0x8009F82C: nop
    
            goto L_8009F848;
    }
    // 0x8009F82C: nop

    // 0x8009F830: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F834: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8009F838: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8009F83C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F840: nop

    // 0x8009F844: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8009F848:
    // 0x8009F848: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F84C: nop

    // 0x8009F850: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8009F854: nop

    // 0x8009F858: beq         $t6, $zero, L_8009F878
    if (ctx->r14 == 0) {
        // 0x8009F85C: nop
    
            goto L_8009F878;
    }
    // 0x8009F85C: nop

    // 0x8009F860: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F864: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8009F868: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8009F86C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F870: nop

    // 0x8009F874: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_8009F878:
    // 0x8009F878: b           L_8009F880
    // 0x8009F87C: nop

        goto L_8009F880;
    // 0x8009F87C: nop

L_8009F880:
    // 0x8009F880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009F884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009F888: jr          $ra
    // 0x8009F88C: nop

    return;
    // 0x8009F88C: nop

;}
RECOMP_FUNC void func_8009E7F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E7F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009E7F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009E7F8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009E7FC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009E800: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
    // 0x8009E804: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8009E808: nop

    // 0x8009E80C: bne         $t7, $at, L_8009E82C
    if (ctx->r15 != ctx->r1) {
        // 0x8009E810: nop
    
            goto L_8009E82C;
    }
    // 0x8009E810: nop

    // 0x8009E814: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8009E818: addiu       $t8, $t8, 0x367C
    ctx->r24 = ADD32(ctx->r24, 0X367C);
    // 0x8009E81C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8009E820: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8009E824: b           L_8009E840
    // 0x8009E828: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
        goto L_8009E840;
    // 0x8009E828: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_8009E82C:
    // 0x8009E82C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8009E830: addiu       $t0, $t0, 0x3688
    ctx->r8 = ADD32(ctx->r8, 0X3688);
    // 0x8009E834: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8009E838: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8009E83C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_8009E840:
    // 0x8009E840: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8009E844: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x8009E848: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8009E84C: lh          $t5, 0x6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X6);
    // 0x8009E850: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x8009E854: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8009E858: lh          $t4, 0x4($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X4);
    // 0x8009E85C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009E860: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8009E864: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8009E868: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009E86C: lh          $t6, 0x8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X8);
    // 0x8009E870: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009E874: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8009E878: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009E87C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009E880: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009E884: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009E888: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009E88C: jal         0x80027464
    // 0x8009E890: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009E890: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009E894: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8009E898: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8009E89C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009E8A0: beq         $t7, $at, L_8009E93C
    if (ctx->r15 == ctx->r1) {
        // 0x8009E8A4: nop
    
            goto L_8009E93C;
    }
    // 0x8009E8A4: nop

    // 0x8009E8A8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8009E8AC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8009E8B0: lw          $t8, 0x5100($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5100);
    // 0x8009E8B4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8009E8B8: lh          $t9, 0xA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA);
    // 0x8009E8BC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8009E8C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009E8C4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8009E8C8: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x8009E8CC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009E8D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009E8D4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8009E8D8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8009E8DC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8009E8E0: sh          $t0, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r8;
    // 0x8009E8E4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8009E8E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009E8EC: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x8009E8F0: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x8009E8F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8009E8F8: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x8009E8FC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8009E900: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009E904: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8009E908: sh          $t4, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r12;
    // 0x8009E90C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8009E910: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009E914: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8009E918: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009E91C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009E920: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009E924: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009E928: lh          $t7, 0xC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC);
    // 0x8009E92C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009E930: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009E934: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009E938: sh          $t7, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r15;
L_8009E93C:
    // 0x8009E93C: b           L_8009E944
    // 0x8009E940: nop

        goto L_8009E944;
    // 0x8009E940: nop

L_8009E944:
    // 0x8009E944: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E948: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009E94C: jr          $ra
    // 0x8009E950: nop

    return;
    // 0x8009E950: nop

;}
RECOMP_FUNC void func_80091138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091138: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009113C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091140: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091144: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091148: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009114C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091150: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091154: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091158: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009115C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091160: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091164: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091168: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009116C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091170: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091174: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091178: addiu       $a1, $a1, 0x1510
    ctx->r5 = ADD32(ctx->r5, 0X1510);
    // 0x8009117C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091180: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091184: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091188: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009118C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091190: jal         0x80027464
    // 0x80091194: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091194: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091198: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009119C: b           L_800911A4
    // 0x800911A0: nop

        goto L_800911A4;
    // 0x800911A0: nop

L_800911A4:
    // 0x800911A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800911A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800911AC: jr          $ra
    // 0x800911B0: nop

    return;
    // 0x800911B0: nop

;}
RECOMP_FUNC void func_800C785C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C785C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C7860: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C7864: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C7868: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C786C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C7870: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C7874: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C7878: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C787C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C7880: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C7884: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C7888: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C788C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C7890: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C7894: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800C7898: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C789C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C78A0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C78A4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C78A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C78AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C78B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C78B4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C78B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C78BC: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C78C0: nop

    // 0x800C78C4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x800C78C8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C78CC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C78D0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C78D4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C78D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C78DC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C78E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C78E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C78E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C78EC: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C78F0: nop

    // 0x800C78F4: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x800C78F8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C78FC: nop

    // 0x800C7900: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800C7904: nop

    // 0x800C7908: bne         $t7, $zero, L_800C7B8C
    if (ctx->r15 != 0) {
        // 0x800C790C: nop
    
            goto L_800C7B8C;
    }
    // 0x800C790C: nop

    // 0x800C7910: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C7914: nop

    // 0x800C7918: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800C791C: nop

    // 0x800C7920: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C7924: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800C7928: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C792C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800C7930: addiu       $t1, $t1, -0x7E84
    ctx->r9 = ADD32(ctx->r9, -0X7E84);
    // 0x800C7934: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7938: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800C793C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C7940: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C7944: jal         0x8001C0EC
    // 0x800C7948: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C7948: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_0:
    // 0x800C794C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7950: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7954: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C7958: addiu       $a3, $a3, -0x7E4C
    ctx->r7 = ADD32(ctx->r7, -0X7E4C);
    // 0x800C795C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C7960: jal         0x8001ABF4
    // 0x800C7964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C7964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C7968: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800C796C: addiu       $t2, $t2, -0x7E84
    ctx->r10 = ADD32(ctx->r10, -0X7E84);
    // 0x800C7970: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C7974: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800C7978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C797C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C7980: jal         0x8001C0EC
    // 0x800C7984: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800C7984: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_2:
    // 0x800C7988: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C798C: addiu       $a3, $a3, -0x7E4C
    ctx->r7 = ADD32(ctx->r7, -0X7E4C);
    // 0x800C7990: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C7994: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C7998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C799C: jal         0x8001ABF4
    // 0x800C79A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800C79A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800C79A4: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800C79A8: addiu       $t3, $t3, -0x7E84
    ctx->r11 = ADD32(ctx->r11, -0X7E84);
    // 0x800C79AC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800C79B0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800C79B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C79B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C79BC: jal         0x8001C0EC
    // 0x800C79C0: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800C79C0: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_4:
    // 0x800C79C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C79C8: addiu       $a3, $a3, -0x7E4C
    ctx->r7 = ADD32(ctx->r7, -0X7E4C);
    // 0x800C79CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800C79D0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C79D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C79D8: jal         0x8001ABF4
    // 0x800C79DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800C79DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x800C79E0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C79E4: lwc1        $f4, 0x4E78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4E78);
    // 0x800C79E8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800C79EC: nop

    // 0x800C79F0: swc1        $f4, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f4.u32l;
    // 0x800C79F4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C79F8: nop

    // 0x800C79FC: lwc1        $f20, 0x14($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800C7A00: nop

    // 0x800C7A04: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x800C7A08: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C7A0C: nop

    // 0x800C7A10: swc1        $f20, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
    // 0x800C7A14: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800C7A18: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800C7A1C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800C7A20: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C7A24: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800C7A28: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C7A2C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7A30: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800C7A34: lwc1        $f6, 0x4E7C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4E7C);
    // 0x800C7A38: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C7A3C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C7A40: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C7A44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C7A48: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800C7A4C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800C7A50: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C7A54: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800C7A58: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C7A5C: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x800C7A60: swc1        $f6, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f6.u32l;
    // 0x800C7A64: lwc1        $f20, 0x14($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800C7A68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C7A6C: swc1        $f20, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f20.u32l;
    // 0x800C7A70: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800C7A74: nop

    // 0x800C7A78: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C7A7C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C7A80: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C7A84: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C7A88: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C7A8C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800C7A90: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x800C7A94: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C7A98: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C7A9C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800C7AA0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C7AA4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800C7AA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C7AAC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C7AB0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C7AB4: lwc1        $f8, 0x4E80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E80);
    // 0x800C7AB8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C7ABC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C7AC0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C7AC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C7AC8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800C7ACC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C7AD0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C7AD4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800C7AD8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C7ADC: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x800C7AE0: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x800C7AE4: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x800C7AE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C7AEC: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x800C7AF0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C7AF4: nop

    // 0x800C7AF8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800C7AFC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C7B00: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C7B04: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C7B08: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C7B0C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800C7B10: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x800C7B14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7B18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7B1C: jal         0x8001BBDC
    // 0x800C7B20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x800C7B20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x800C7B24: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C7B28: jal         0x8001BBDC
    // 0x800C7B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_7;
    // 0x800C7B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x800C7B30: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800C7B34: jal         0x8001BBDC
    // 0x800C7B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x800C7B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x800C7B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7B44: jal         0x8001BB34
    // 0x800C7B48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_9;
    // 0x800C7B48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x800C7B4C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C7B50: jal         0x8001BB34
    // 0x800C7B54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_10;
    // 0x800C7B54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x800C7B58: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800C7B5C: jal         0x8001BB34
    // 0x800C7B60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_11;
    // 0x800C7B60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x800C7B64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7B68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7B6C: jal         0x8001BB04
    // 0x800C7B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_12;
    // 0x800C7B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x800C7B74: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C7B78: jal         0x8001BB04
    // 0x800C7B7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_13;
    // 0x800C7B7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x800C7B80: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800C7B84: jal         0x8001BB04
    // 0x800C7B88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_14;
    // 0x800C7B88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
L_800C7B8C:
    // 0x800C7B8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C7B90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C7B94: jal         0x8002A1FC
    // 0x800C7B98: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_15;
    // 0x800C7B98: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_15:
    // 0x800C7B9C: beq         $v0, $zero, L_800C7BBC
    if (ctx->r2 == 0) {
        // 0x800C7BA0: nop
    
            goto L_800C7BBC;
    }
    // 0x800C7BA0: nop

    // 0x800C7BA4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800C7BA8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800C7BAC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800C7BB0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C7BB4: nop

    // 0x800C7BB8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800C7BBC:
    // 0x800C7BBC: b           L_800C7BC4
    // 0x800C7BC0: nop

        goto L_800C7BC4;
    // 0x800C7BC0: nop

L_800C7BC4:
    // 0x800C7BC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C7BC8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C7BCC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C7BD0: jr          $ra
    // 0x800C7BD4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800C7BD4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8007A938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A938: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A93C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A940: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007A944: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007A948: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007A94C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007A950: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A954: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A958: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A95C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007A960: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007A964: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007A968: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007A96C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007A970: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8007A974: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007A978: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8007A97C: lwc1        $f9, -0x35F8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X35F8);
    // 0x8007A980: lwc1        $f8, -0x35F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X35F4);
    // 0x8007A984: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007A988: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8007A98C: jal         0x80034970
    // 0x8007A990: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8007A990: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x8007A994: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8007A998: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007A99C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007A9A0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8007A9A4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8007A9A8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A9AC: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8007A9B0: nop

    // 0x8007A9B4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8007A9B8: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    // 0x8007A9BC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007A9C0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007A9C4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007A9C8: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8007A9CC: lwc1        $f17, -0x35F0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X35F0);
    // 0x8007A9D0: lwc1        $f16, -0x35EC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X35EC);
    // 0x8007A9D4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8007A9D8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8007A9DC: jal         0x80036570
    // 0x8007A9E0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8007A9E0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_1:
    // 0x8007A9E4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8007A9E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007A9EC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007A9F0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8007A9F4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8007A9F8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A9FC: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8007AA00: nop

    // 0x8007AA04: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8007AA08: swc1        $f10, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
    // 0x8007AA0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007AA10: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8007AA14: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8007AA18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007AA1C: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8007AA20: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AA24: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8007AA28: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    // 0x8007AA2C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007AA30: jal         0x80079778
    // 0x8007AA34: nop

    func_80079778(rdram, ctx);
        goto after_2;
    // 0x8007AA34: nop

    after_2:
    // 0x8007AA38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007AA3C: jal         0x800797FC
    // 0x8007AA40: nop

    func_800797FC(rdram, ctx);
        goto after_3;
    // 0x8007AA40: nop

    after_3:
    // 0x8007AA44: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AA48: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8007AA4C: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x8007AA50: nop

    // 0x8007AA54: bne         $t9, $at, L_8007AA68
    if (ctx->r25 != ctx->r1) {
        // 0x8007AA58: nop
    
            goto L_8007AA68;
    }
    // 0x8007AA58: nop

    // 0x8007AA5C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AA60: addiu       $t0, $zero, 0x23
    ctx->r8 = ADD32(0, 0X23);
    // 0x8007AA64: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
L_8007AA68:
    // 0x8007AA68: b           L_8007AA70
    // 0x8007AA6C: nop

        goto L_8007AA70;
    // 0x8007AA6C: nop

L_8007AA70:
    // 0x8007AA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AA74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007AA78: jr          $ra
    // 0x8007AA7C: nop

    return;
    // 0x8007AA7C: nop

;}
RECOMP_FUNC void func_800C1B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1B5C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C1B60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C1B64: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C1B68: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C1B6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C1B70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C1B74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C1B78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C1B7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1B80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C1B84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1B88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C1B8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C1B90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C1B94: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C1B98: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C1B9C: nop

    // 0x800C1BA0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C1BA4: nop

    // 0x800C1BA8: bne         $t1, $zero, L_800C1C6C
    if (ctx->r9 != 0) {
        // 0x800C1BAC: nop
    
            goto L_800C1C6C;
    }
    // 0x800C1BAC: nop

    // 0x800C1BB0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C1BB4: nop

    // 0x800C1BB8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C1BBC: nop

    // 0x800C1BC0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C1BC4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C1BC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C1BCC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C1BD0: nop

    // 0x800C1BD4: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800C1BD8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C1BDC: nop

    // 0x800C1BE0: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800C1BE4: nop

    // 0x800C1BE8: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800C1BEC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C1BF0: nop

    // 0x800C1BF4: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800C1BF8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C1BFC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x800C1C00: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800C1C04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1C08: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800C1C0C: addiu       $t0, $t0, 0x7FF0
    ctx->r8 = ADD32(ctx->r8, 0X7FF0);
    // 0x800C1C10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1C14: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800C1C18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C1C1C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800C1C20: jal         0x8001C0EC
    // 0x800C1C24: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C1C24: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_0:
    // 0x800C1C28: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C1C2C: nop

    // 0x800C1C30: lh          $t3, 0xB6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB6);
    // 0x800C1C34: nop

    // 0x800C1C38: bne         $t3, $zero, L_800C1C6C
    if (ctx->r11 != 0) {
        // 0x800C1C3C: nop
    
            goto L_800C1C6C;
    }
    // 0x800C1C3C: nop

    // 0x800C1C40: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C1C44: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800C1C48: sh          $t4, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r12;
    // 0x800C1C4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1C50: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C1C54: addiu       $a3, $a3, -0x7FBC
    ctx->r7 = ADD32(ctx->r7, -0X7FBC);
    // 0x800C1C58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1C5C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C1C60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C1C64: jal         0x8001ABF4
    // 0x800C1C68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C1C68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800C1C6C:
    // 0x800C1C6C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C1C70: nop

    // 0x800C1C74: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800C1C78: nop

    // 0x800C1C7C: bne         $t6, $zero, L_800C1CD4
    if (ctx->r14 != 0) {
        // 0x800C1C80: nop
    
            goto L_800C1CD4;
    }
    // 0x800C1C80: nop

    // 0x800C1C84: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C1C88: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800C1C8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C1C90: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800C1C94: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800C1C98: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x800C1C9C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C1CA0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800C1CA4: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800C1CA8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800C1CAC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C1CB0: addiu       $a1, $a1, 0x3EE0
    ctx->r5 = ADD32(ctx->r5, 0X3EE0);
    // 0x800C1CB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C1CB8: jal         0x80027464
    // 0x800C1CBC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x800C1CBC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x800C1CC0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800C1CC4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C1CC8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x800C1CCC: b           L_800C1CEC
    // 0x800C1CD0: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
        goto L_800C1CEC;
    // 0x800C1CD0: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_800C1CD4:
    // 0x800C1CD4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C1CD8: nop

    // 0x800C1CDC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800C1CE0: nop

    // 0x800C1CE4: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800C1CE8: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_800C1CEC:
    // 0x800C1CEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1CF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1CF4: jal         0x8001B44C
    // 0x800C1CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800C1CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800C1CFC: beq         $v0, $zero, L_800C1D1C
    if (ctx->r2 == 0) {
        // 0x800C1D00: nop
    
            goto L_800C1D1C;
    }
    // 0x800C1D00: nop

    // 0x800C1D04: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C1D08: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x800C1D0C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800C1D10: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C1D14: nop

    // 0x800C1D18: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800C1D1C:
    // 0x800C1D1C: b           L_800C1D24
    // 0x800C1D20: nop

        goto L_800C1D24;
    // 0x800C1D20: nop

L_800C1D24:
    // 0x800C1D24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C1D28: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C1D2C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C1D30: jr          $ra
    // 0x800C1D34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C1D34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800F9800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F9804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F9808: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F980C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F9810: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F9814: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800F9818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F981C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F9824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9828: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F982C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800F9830: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800F9834: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F9838: beq         $s0, $at, L_800F986C
    if (ctx->r16 == ctx->r1) {
        // 0x800F983C: nop
    
            goto L_800F986C;
    }
    // 0x800F983C: nop

    // 0x800F9840: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F9844: beq         $s0, $at, L_800F987C
    if (ctx->r16 == ctx->r1) {
        // 0x800F9848: nop
    
            goto L_800F987C;
    }
    // 0x800F9848: nop

    // 0x800F984C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F9850: beq         $s0, $at, L_800F988C
    if (ctx->r16 == ctx->r1) {
        // 0x800F9854: nop
    
            goto L_800F988C;
    }
    // 0x800F9854: nop

    // 0x800F9858: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800F985C: beq         $s0, $at, L_800F989C
    if (ctx->r16 == ctx->r1) {
        // 0x800F9860: nop
    
            goto L_800F989C;
    }
    // 0x800F9860: nop

    // 0x800F9864: b           L_800F98AC
    // 0x800F9868: nop

        goto L_800F98AC;
    // 0x800F9868: nop

L_800F986C:
    // 0x800F986C: jal         0x800F91A4
    // 0x800F9870: nop

    func_800F91A4(rdram, ctx);
        goto after_0;
    // 0x800F9870: nop

    after_0:
    // 0x800F9874: b           L_800F98AC
    // 0x800F9878: nop

        goto L_800F98AC;
    // 0x800F9878: nop

L_800F987C:
    // 0x800F987C: jal         0x800F9294
    // 0x800F9880: nop

    func_800F9294(rdram, ctx);
        goto after_1;
    // 0x800F9880: nop

    after_1:
    // 0x800F9884: b           L_800F98AC
    // 0x800F9888: nop

        goto L_800F98AC;
    // 0x800F9888: nop

L_800F988C:
    // 0x800F988C: jal         0x800F94A8
    // 0x800F9890: nop

    func_800F94A8(rdram, ctx);
        goto after_2;
    // 0x800F9890: nop

    after_2:
    // 0x800F9894: b           L_800F98AC
    // 0x800F9898: nop

        goto L_800F98AC;
    // 0x800F9898: nop

L_800F989C:
    // 0x800F989C: jal         0x800F95F4
    // 0x800F98A0: nop

    func_800F95F4(rdram, ctx);
        goto after_3;
    // 0x800F98A0: nop

    after_3:
    // 0x800F98A4: b           L_800F98AC
    // 0x800F98A8: nop

        goto L_800F98AC;
    // 0x800F98A8: nop

L_800F98AC:
    // 0x800F98AC: b           L_800F98B4
    // 0x800F98B0: nop

        goto L_800F98B4;
    // 0x800F98B0: nop

L_800F98B4:
    // 0x800F98B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F98B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F98BC: jr          $ra
    // 0x800F98C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F98C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800AEB9C_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AEC88: jr          $ra
    // 0x800AEC8C: nop

    return;
    // 0x800AEC8C: nop

    // 0x800AEC90: jr          $ra
    // 0x800AEC94: nop

    return;
    // 0x800AEC94: nop

;}
RECOMP_FUNC void func_800C3E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3E18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C3E1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3E20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C3E24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C3E28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C3E2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C3E30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3E34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C3E38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3E3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C3E40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C3E44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C3E48: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C3E4C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C3E50: nop

    // 0x800C3E54: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C3E58: nop

    // 0x800C3E5C: bne         $t1, $zero, L_800C3EA0
    if (ctx->r9 != 0) {
        // 0x800C3E60: nop
    
            goto L_800C3EA0;
    }
    // 0x800C3E60: nop

    // 0x800C3E64: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C3E68: nop

    // 0x800C3E6C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C3E70: nop

    // 0x800C3E74: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C3E78: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C3E7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C3E80: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C3E84: nop

    // 0x800C3E88: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C3E8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3E90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3E94: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x800C3E98: jal         0x80029EF8
    // 0x800C3E9C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800C3E9C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_0:
L_800C3EA0:
    // 0x800C3EA0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C3EA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C3EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3EAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3EB0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C3EB4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C3EB8: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C3EBC: jal         0x80029F58
    // 0x800C3EC0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_1;
    // 0x800C3EC0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x800C3EC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C3EC8: bne         $v0, $at, L_800C3EE8
    if (ctx->r2 != ctx->r1) {
        // 0x800C3ECC: nop
    
            goto L_800C3EE8;
    }
    // 0x800C3ECC: nop

    // 0x800C3ED0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C3ED4: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800C3ED8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800C3EDC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C3EE0: nop

    // 0x800C3EE4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800C3EE8:
    // 0x800C3EE8: b           L_800C3EF0
    // 0x800C3EEC: nop

        goto L_800C3EF0;
    // 0x800C3EEC: nop

L_800C3EF0:
    // 0x800C3EF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C3EF8: jr          $ra
    // 0x800C3EFC: nop

    return;
    // 0x800C3EFC: nop

;}
RECOMP_FUNC void func_800C9FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9FF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9FFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CA000: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CA004: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CA008: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CA00C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CA010: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA014: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CA018: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA01C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CA020: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CA024: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CA028: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800CA02C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CA030: nop

    // 0x800CA034: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CA038: nop

    // 0x800CA03C: bne         $t1, $zero, L_800CA0F8
    if (ctx->r9 != 0) {
        // 0x800CA040: nop
    
            goto L_800CA0F8;
    }
    // 0x800CA040: nop

    // 0x800CA044: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800CA048: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800CA04C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800CA050: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CA054: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CA058: nop

    // 0x800CA05C: swc1        $f4, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f4.u32l;
    // 0x800CA060: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CA064: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800CA068: nop

    // 0x800CA06C: swc1        $f6, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f6.u32l;
    // 0x800CA070: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CA074: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CA078: nop

    // 0x800CA07C: swc1        $f8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f8.u32l;
    // 0x800CA080: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800CA084: nop

    // 0x800CA088: lwc1        $f10, 0x1C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800CA08C: nop

    // 0x800CA090: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
    // 0x800CA094: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA098: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800CA09C: addiu       $t8, $t8, -0x7E10
    ctx->r24 = ADD32(ctx->r24, -0X7E10);
    // 0x800CA0A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA0A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800CA0A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CA0AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CA0B0: jal         0x8001C0EC
    // 0x800CA0B4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CA0B4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_0:
    // 0x800CA0B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA0BC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800CA0C0: addiu       $t9, $t9, -0x7E00
    ctx->r25 = ADD32(ctx->r25, -0X7E00);
    // 0x800CA0C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA0C8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800CA0CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CA0D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CA0D4: jal         0x8001C0EC
    // 0x800CA0D8: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800CA0D8: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_1:
    // 0x800CA0DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA0E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA0E4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CA0E8: addiu       $a3, $a3, -0x7DCC
    ctx->r7 = ADD32(ctx->r7, -0X7DCC);
    // 0x800CA0EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CA0F0: jal         0x8001ABF4
    // 0x800CA0F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800CA0F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
L_800CA0F8:
    // 0x800CA0F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA0FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA100: jal         0x8002A1FC
    // 0x800CA104: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x800CA104: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    after_3:
    // 0x800CA108: beq         $v0, $zero, L_800CA128
    if (ctx->r2 == 0) {
        // 0x800CA10C: nop
    
            goto L_800CA128;
    }
    // 0x800CA10C: nop

    // 0x800CA110: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800CA114: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800CA118: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800CA11C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CA120: nop

    // 0x800CA124: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800CA128:
    // 0x800CA128: b           L_800CA130
    // 0x800CA12C: nop

        goto L_800CA130;
    // 0x800CA12C: nop

L_800CA130:
    // 0x800CA130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CA138: jr          $ra
    // 0x800CA13C: nop

    return;
    // 0x800CA13C: nop

;}
RECOMP_FUNC void func_800CCD5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CCD5C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800CCD60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CCD64: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800CCD68: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800CCD6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CCD70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CCD74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CCD78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CCD7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCD80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CCD84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCD88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CCD8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CCD90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CCD94: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800CCD98: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CCD9C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CCDA0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800CCDA4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CCDA8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CCDAC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CCDB0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CCDB4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CCDB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CCDBC: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800CCDC0: nop

    // 0x800CCDC4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x800CCDC8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800CCDCC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800CCDD0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800CCDD4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CCDD8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CCDDC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CCDE0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CCDE4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CCDE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CCDEC: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800CCDF0: nop

    // 0x800CCDF4: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x800CCDF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CCDFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CCE00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CCE04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CCE08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCE0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CCE10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCE14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CCE18: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CCE1C: lh          $t8, 0x423C($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423C);
    // 0x800CCE20: nop

    // 0x800CCE24: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x800CCE28: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800CCE2C: nop

    // 0x800CCE30: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x800CCE34: nop

    // 0x800CCE38: bne         $t0, $zero, L_800CD188
    if (ctx->r8 != 0) {
        // 0x800CCE3C: nop
    
            goto L_800CD188;
    }
    // 0x800CCE3C: nop

    // 0x800CCE40: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800CCE44: nop

    // 0x800CCE48: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800CCE4C: nop

    // 0x800CCE50: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800CCE54: sb          $t3, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r11;
    // 0x800CCE58: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800CCE5C: nop

    // 0x800CCE60: sh          $zero, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = 0;
    // 0x800CCE64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CCE68: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800CCE6C: nop

    // 0x800CCE70: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800CCE74: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800CCE78: nop

    // 0x800CCE7C: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800CCE80: nop

    // 0x800CCE84: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800CCE88: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800CCE8C: nop

    // 0x800CCE90: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800CCE94: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800CCE98: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800CCE9C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CCEA0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CCEA4: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x800CCEA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CCEAC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800CCEB0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CCEB4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CCEB8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CCEBC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CCEC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCEC4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800CCEC8: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800CCECC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CCED0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800CCED4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CCED8: addu        $t1, $t2, $t3
    ctx->r9 = ADD32(ctx->r10, ctx->r11);
    // 0x800CCEDC: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x800CCEE0: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800CCEE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCEE8: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x800CCEEC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800CCEF0: nop

    // 0x800CCEF4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800CCEF8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CCEFC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800CCF00: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CCF04: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800CCF08: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800CCF0C: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CCF10: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CCF14: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800CCF18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CCF1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCF20: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CCF24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CCF28: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CCF2C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CCF30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCF34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CCF38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CCF3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCF40: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800CCF44: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CCF48: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CCF4C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800CCF50: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CCF54: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x800CCF58: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x800CCF5C: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800CCF60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCF64: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x800CCF68: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800CCF6C: nop

    // 0x800CCF70: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x800CCF74: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x800CCF78: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CCF7C: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x800CCF80: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CCF84: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CCF88: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CCF8C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800CCF90: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800CCF94: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800CCF98: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CCF9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CCFA0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800CCFA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCFA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CCFAC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CCFB0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CCFB4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800CCFB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCFBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CCFC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCFC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CCFC8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CCFCC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800CCFD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CCFD4: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x800CCFD8: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800CCFDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCFE0: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x800CCFE4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800CCFE8: nop

    // 0x800CCFEC: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x800CCFF0: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800CCFF4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CCFF8: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800CCFFC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CD000: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CD004: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CD008: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CD00C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800CD010: addiu       $t3, $t3, -0x7D2C
    ctx->r11 = ADD32(ctx->r11, -0X7D2C);
    // 0x800CD014: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CD018: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800CD01C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CD020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CD024: jal         0x8001C0EC
    // 0x800CD028: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CD028: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    after_0:
    // 0x800CD02C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CD030: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CD034: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CD038: addiu       $a3, $a3, -0x7CF4
    ctx->r7 = ADD32(ctx->r7, -0X7CF4);
    // 0x800CD03C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CD040: jal         0x8001ABF4
    // 0x800CD044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800CD044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800CD048: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CD04C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CD050: jal         0x8001BBDC
    // 0x800CD054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800CD054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800CD058: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800CD05C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800CD060: sh          $t1, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r9;
    // 0x800CD064: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800CD068: addiu       $t5, $t5, -0x7CBC
    ctx->r13 = ADD32(ctx->r13, -0X7CBC);
    // 0x800CD06C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800CD070: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800CD074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CD078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CD07C: jal         0x8001C0EC
    // 0x800CD080: addiu       $a3, $zero, 0x8D
    ctx->r7 = ADD32(0, 0X8D);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800CD080: addiu       $a3, $zero, 0x8D
    ctx->r7 = ADD32(0, 0X8D);
    after_3:
    // 0x800CD084: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800CD088: addiu       $t6, $t6, -0x7CB8
    ctx->r14 = ADD32(ctx->r14, -0X7CB8);
    // 0x800CD08C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800CD090: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800CD094: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CD098: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CD09C: jal         0x8001C0EC
    // 0x800CD0A0: addiu       $a3, $zero, 0x8E
    ctx->r7 = ADD32(0, 0X8E);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800CD0A0: addiu       $a3, $zero, 0x8E
    ctx->r7 = ADD32(0, 0X8E);
    after_4:
    // 0x800CD0A4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CD0A8: addiu       $a3, $a3, -0x7C88
    ctx->r7 = ADD32(ctx->r7, -0X7C88);
    // 0x800CD0AC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800CD0B0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800CD0B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CD0B8: jal         0x8001ABF4
    // 0x800CD0BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800CD0BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x800CD0C0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CD0C4: addiu       $t7, $t7, -0x7BE8
    ctx->r15 = ADD32(ctx->r15, -0X7BE8);
    // 0x800CD0C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CD0CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800CD0D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CD0D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CD0D8: jal         0x8001C0EC
    // 0x800CD0DC: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x800CD0DC: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    after_6:
    // 0x800CD0E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CD0E4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CD0E8: addiu       $a3, $a3, -0x7B5C
    ctx->r7 = ADD32(ctx->r7, -0X7B5C);
    // 0x800CD0EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CD0F0: jal         0x8001ABF4
    // 0x800CD0F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x800CD0F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x800CD0F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CD0FC: addiu       $a3, $a3, -0x7B5C
    ctx->r7 = ADD32(ctx->r7, -0X7B5C);
    // 0x800CD100: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CD104: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800CD108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800CD10C: jal         0x8001ABF4
    // 0x800CD110: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x800CD110: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x800CD114: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CD118: addiu       $a3, $a3, -0x7B5C
    ctx->r7 = ADD32(ctx->r7, -0X7B5C);
    // 0x800CD11C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CD120: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800CD124: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800CD128: jal         0x8001ABF4
    // 0x800CD12C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x800CD12C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_9:
    // 0x800CD130: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CD134: addiu       $a3, $a3, -0x7B5C
    ctx->r7 = ADD32(ctx->r7, -0X7B5C);
    // 0x800CD138: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CD13C: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800CD140: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CD144: jal         0x8001ABF4
    // 0x800CD148: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x800CD148: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_10:
    // 0x800CD14C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CD150: jal         0x8001BBDC
    // 0x800CD154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x800CD154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x800CD158: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CD15C: jal         0x8001BB34
    // 0x800CD160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_12;
    // 0x800CD160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x800CD164: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800CD168: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CD16C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CD170: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CD174: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CD178: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CD17C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CD180: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CD184: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800CD188:
    // 0x800CD188: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CD18C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CD190: jal         0x8002A1FC
    // 0x800CD194: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    func_8002A1FC(rdram, ctx);
        goto after_13;
    // 0x800CD194: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    after_13:
    // 0x800CD198: beq         $v0, $zero, L_800CD1B8
    if (ctx->r2 == 0) {
        // 0x800CD19C: nop
    
            goto L_800CD1B8;
    }
    // 0x800CD19C: nop

    // 0x800CD1A0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800CD1A4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800CD1A8: sh          $t0, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r8;
    // 0x800CD1AC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800CD1B0: nop

    // 0x800CD1B4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800CD1B8:
    // 0x800CD1B8: b           L_800CD1C0
    // 0x800CD1BC: nop

        goto L_800CD1C0;
    // 0x800CD1BC: nop

L_800CD1C0:
    // 0x800CD1C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CD1C4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800CD1C8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CD1CC: jr          $ra
    // 0x800CD1D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800CD1D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800EFECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EFECC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EFED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EFED4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EFED8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EFEDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EFEE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EFEE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EFEE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EFEEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EFEF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EFEF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EFEF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EFEFC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800EFF00: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFF04: nop

    // 0x800EFF08: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800EFF0C: nop

    // 0x800EFF10: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800EFF14: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFF18: nop

    // 0x800EFF1C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EFF20: nop

    // 0x800EFF24: bne         $t3, $zero, L_800F0098
    if (ctx->r11 != 0) {
        // 0x800EFF28: nop
    
            goto L_800F0098;
    }
    // 0x800EFF28: nop

    // 0x800EFF2C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFF30: nop

    // 0x800EFF34: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800EFF38: nop

    // 0x800EFF3C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800EFF40: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800EFF44: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFF48: nop

    // 0x800EFF4C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800EFF50: nop

    // 0x800EFF54: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800EFF58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EFF5C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800EFF60: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800EFF64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EFF68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800EFF6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EFF70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EFF74: jal         0x8001C0EC
    // 0x800EFF78: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EFF78: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800EFF7C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800EFF80: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800EFF84: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800EFF88: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800EFF8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EFF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EFF94: jal         0x8001C0EC
    // 0x800EFF98: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EFF98: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800EFF9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EFFA0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EFFA4: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800EFFA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EFFAC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800EFFB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EFFB4: jal         0x8001ABF4
    // 0x800EFFB8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800EFFB8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800EFFBC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EFFC0: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800EFFC4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800EFFC8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800EFFCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EFFD0: jal         0x8001ABF4
    // 0x800EFFD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800EFFD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800EFFD8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EFFDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EFFE0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFFE4: nop

    // 0x800EFFE8: swc1        $f4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f4.u32l;
    // 0x800EFFEC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EFFF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EFFF4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFFF8: nop

    // 0x800EFFFC: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x800F0000: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F0004: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F0008: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F000C: nop

    // 0x800F0010: swc1        $f8, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f8.u32l;
    // 0x800F0014: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800F0018: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F001C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800F0020: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F0024: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F0028: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F002C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F0030: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F0034: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0038: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F003C: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x800F0040: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800F0044: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F0048: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800F004C: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F0050: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F0054: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F0058: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F005C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F0060: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0064: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800F0068: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x800F006C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800F0070: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F0074: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F0078: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F007C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F0080: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F0084: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F0088: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F008C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0090: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F0094: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
L_800F0098:
    // 0x800F0098: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F009C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F00A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F00A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F00A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800F00AC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800F00B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F00B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800F00B8: jal         0x800295C0
    // 0x800F00BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800F00BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800F00C0: beq         $v0, $zero, L_800F00D8
    if (ctx->r2 == 0) {
        // 0x800F00C4: nop
    
            goto L_800F00D8;
    }
    // 0x800F00C4: nop

    // 0x800F00C8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800F00CC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F00D0: b           L_800F00E8
    // 0x800F00D4: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
        goto L_800F00E8;
    // 0x800F00D4: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_800F00D8:
    // 0x800F00D8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F00DC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F00E0: nop

    // 0x800F00E4: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
L_800F00E8:
    // 0x800F00E8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F00EC: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800F00F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F00F4: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800F00F8: nop

    // 0x800F00FC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F0100: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
    // 0x800F0104: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800F0108: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F010C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800F0110: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F0114: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F0118: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F011C: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800F0120: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F0124: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0128: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F012C: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x800F0130: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0134: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0138: jal         0x8002A1FC
    // 0x800F013C: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800F013C: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_5:
    // 0x800F0140: beq         $v0, $zero, L_800F0160
    if (ctx->r2 == 0) {
        // 0x800F0144: nop
    
            goto L_800F0160;
    }
    // 0x800F0144: nop

    // 0x800F0148: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F014C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800F0150: sh          $t4, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r12;
    // 0x800F0154: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0158: nop

    // 0x800F015C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800F0160:
    // 0x800F0160: b           L_800F0168
    // 0x800F0164: nop

        goto L_800F0168;
    // 0x800F0164: nop

L_800F0168:
    // 0x800F0168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F016C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F0170: jr          $ra
    // 0x800F0174: nop

    return;
    // 0x800F0174: nop

;}
RECOMP_FUNC void func_8009EA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EA00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009EA04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009EA08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009EA0C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009EA10: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8009EA14: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009EA18: nop

    // 0x8009EA1C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8009EA20: nop

    // 0x8009EA24: bne         $t7, $zero, L_8009EAD0
    if (ctx->r15 != 0) {
        // 0x8009EA28: nop
    
            goto L_8009EAD0;
    }
    // 0x8009EA28: nop

    // 0x8009EA2C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8009EA30: nop

    // 0x8009EA34: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8009EA38: nop

    // 0x8009EA3C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009EA40: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8009EA44: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8009EA48: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8009EA4C: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x8009EA50: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8009EA54: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
    // 0x8009EA58: lh          $t4, 0xE4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE4);
    // 0x8009EA5C: nop

    // 0x8009EA60: bne         $t4, $at, L_8009EA78
    if (ctx->r12 != ctx->r1) {
        // 0x8009EA64: nop
    
            goto L_8009EA78;
    }
    // 0x8009EA64: nop

    // 0x8009EA68: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8009EA6C: addiu       $t5, $t5, 0x6E50
    ctx->r13 = ADD32(ctx->r13, 0X6E50);
    // 0x8009EA70: b           L_8009EA88
    // 0x8009EA74: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
        goto L_8009EA88;
    // 0x8009EA74: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_8009EA78:
    // 0x8009EA78: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8009EA7C: addiu       $t6, $t6, 0x6E50
    ctx->r14 = ADD32(ctx->r14, 0X6E50);
    // 0x8009EA80: addiu       $t7, $t6, 0x38
    ctx->r15 = ADD32(ctx->r14, 0X38);
    // 0x8009EA84: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8009EA88:
    // 0x8009EA88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009EA8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009EA90: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8009EA94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009EA98: jal         0x8001ABF4
    // 0x8009EA9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8009EA9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8009EAA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009EAA4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8009EAA8: nop

    // 0x8009EAAC: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x8009EAB0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8009EAB4: nop

    // 0x8009EAB8: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x8009EABC: nop

    // 0x8009EAC0: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x8009EAC4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8009EAC8: nop

    // 0x8009EACC: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
L_8009EAD0:
    // 0x8009EAD0: b           L_8009EAD8
    // 0x8009EAD4: nop

        goto L_8009EAD8;
    // 0x8009EAD4: nop

L_8009EAD8:
    // 0x8009EAD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009EADC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8009EAE0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8009EAE4: jr          $ra
    // 0x8009EAE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009EAE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800B6C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B6C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B6C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B6C68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B6C6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B6C70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B6C74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B6C78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B6C7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B6C80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B6C84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B6C88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B6C8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B6C90: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B6C94: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B6C98: nop

    // 0x800B6C9C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B6CA0: nop

    // 0x800B6CA4: bne         $t1, $zero, L_800B6CD8
    if (ctx->r9 != 0) {
        // 0x800B6CA8: nop
    
            goto L_800B6CD8;
    }
    // 0x800B6CA8: nop

    // 0x800B6CAC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B6CB0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B6CB4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B6CB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B6CBC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B6CC0: nop

    // 0x800B6CC4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B6CC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B6CCC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B6CD0: nop

    // 0x800B6CD4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_800B6CD8:
    // 0x800B6CD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6CDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6CE0: jal         0x80029C40
    // 0x800B6CE4: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B6CE4: nop

    after_0:
    // 0x800B6CE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6CEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6CF0: jal         0x80029D04
    // 0x800B6CF4: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B6CF4: nop

    after_1:
    // 0x800B6CF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B6CFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B6D00: jal         0x8001B44C
    // 0x800B6D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x800B6D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800B6D08: beq         $v0, $zero, L_800B6D28
    if (ctx->r2 == 0) {
        // 0x800B6D0C: nop
    
            goto L_800B6D28;
    }
    // 0x800B6D0C: nop

    // 0x800B6D10: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B6D14: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800B6D18: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800B6D1C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800B6D20: nop

    // 0x800B6D24: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800B6D28:
    // 0x800B6D28: b           L_800B6D30
    // 0x800B6D2C: nop

        goto L_800B6D30;
    // 0x800B6D2C: nop

L_800B6D30:
    // 0x800B6D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B6D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B6D38: jr          $ra
    // 0x800B6D3C: nop

    return;
    // 0x800B6D3C: nop

;}
RECOMP_FUNC void func_800DD160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DD160: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DD164: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DD168: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DD16C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DD170: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DD174: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DD178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD17C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DD180: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD184: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DD188: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DD18C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DD190: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DD194: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DD198: nop

    // 0x800DD19C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DD1A0: nop

    // 0x800DD1A4: bne         $t1, $zero, L_800DD23C
    if (ctx->r9 != 0) {
        // 0x800DD1A8: nop
    
            goto L_800DD23C;
    }
    // 0x800DD1A8: nop

    // 0x800DD1AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DD1B0: nop

    // 0x800DD1B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DD1B8: nop

    // 0x800DD1BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DD1C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DD1C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD1C8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DD1CC: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DD1D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD1D4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DD1D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DD1DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800DD1E0: jal         0x8001C0EC
    // 0x800DD1E4: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DD1E4: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DD1E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD1EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD1F0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DD1F4: addiu       $a3, $a3, -0x6F34
    ctx->r7 = ADD32(ctx->r7, -0X6F34);
    // 0x800DD1F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DD1FC: jal         0x8001ABF4
    // 0x800DD200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DD200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DD204: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD208: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DD20C: addiu       $a3, $a3, -0x6F34
    ctx->r7 = ADD32(ctx->r7, -0X6F34);
    // 0x800DD210: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD214: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DD218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DD21C: jal         0x8001ABF4
    // 0x800DD220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DD220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DD224: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DD228: nop

    // 0x800DD22C: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800DD230: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DD234: nop

    // 0x800DD238: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
L_800DD23C:
    // 0x800DD23C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD240: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD244: jal         0x80028FA0
    // 0x800DD248: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800DD248: nop

    after_3:
    // 0x800DD24C: beq         $v0, $zero, L_800DD288
    if (ctx->r2 == 0) {
        // 0x800DD250: nop
    
            goto L_800DD288;
    }
    // 0x800DD250: nop

    // 0x800DD254: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DD258: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800DD25C: lh          $t9, 0x106($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X106);
    // 0x800DD260: nop

    // 0x800DD264: beq         $t9, $at, L_800DD278
    if (ctx->r25 == ctx->r1) {
        // 0x800DD268: nop
    
            goto L_800DD278;
    }
    // 0x800DD268: nop

    // 0x800DD26C: addiu       $at, $zero, 0xA3
    ctx->r1 = ADD32(0, 0XA3);
    // 0x800DD270: bne         $t9, $at, L_800DD288
    if (ctx->r25 != ctx->r1) {
        // 0x800DD274: nop
    
            goto L_800DD288;
    }
    // 0x800DD274: nop

L_800DD278:
    // 0x800DD278: jal         0x800E3EE4
    // 0x800DD27C: nop

    func_800E3EE4(rdram, ctx);
        goto after_4;
    // 0x800DD27C: nop

    after_4:
    // 0x800DD280: b           L_800DD2F0
    // 0x800DD284: nop

        goto L_800DD2F0;
    // 0x800DD284: nop

L_800DD288:
    // 0x800DD288: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD28C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD290: jal         0x8002A8B4
    // 0x800DD294: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x800DD294: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x800DD298: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DD29C: nop

    // 0x800DD2A0: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800DD2A4: nop

    // 0x800DD2A8: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x800DD2AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DD2B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DD2B4: jal         0x8001B4AC
    // 0x800DD2B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x800DD2B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800DD2BC: beq         $v0, $zero, L_800DD2E8
    if (ctx->r2 == 0) {
        // 0x800DD2C0: nop
    
            goto L_800DD2E8;
    }
    // 0x800DD2C0: nop

    // 0x800DD2C4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800DD2C8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800DD2CC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800DD2D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DD2D4: nop

    // 0x800DD2D8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800DD2DC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800DD2E0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800DD2E4: sh          $t2, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r10;
L_800DD2E8:
    // 0x800DD2E8: b           L_800DD2F0
    // 0x800DD2EC: nop

        goto L_800DD2F0;
    // 0x800DD2EC: nop

L_800DD2F0:
    // 0x800DD2F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DD2F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DD2F8: jr          $ra
    // 0x800DD2FC: nop

    return;
    // 0x800DD2FC: nop

;}
RECOMP_FUNC void func_8007A7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A7B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A7B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A7BC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8007A7C0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x8007A7C4: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x8007A7C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007A7CC: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8007A7D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007A7D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007A7D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A7DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A7E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A7E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007A7E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007A7EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007A7F0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007A7F4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A7F8: addiu       $t0, $zero, 0x26
    ctx->r8 = ADD32(0, 0X26);
    // 0x8007A7FC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8007A800: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007A804: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8007A808: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A80C: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8007A810: nop

    // 0x8007A814: swc1        $f4, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f4.u32l;
    // 0x8007A818: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8007A81C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007A820: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A824: nop

    // 0x8007A828: swc1        $f6, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f6.u32l;
    // 0x8007A82C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007A830: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8007A834: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A838: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8007A83C: nop

    // 0x8007A840: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x8007A844: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x8007A848: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007A84C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A850: nop

    // 0x8007A854: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
    // 0x8007A858: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007A85C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8007A860: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007A864: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8007A868: lwc1        $f5, -0x3608($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X3608);
    // 0x8007A86C: lwc1        $f4, -0x3604($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3604);
    // 0x8007A870: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8007A874: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8007A878: jal         0x80034970
    // 0x8007A87C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8007A87C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_0:
    // 0x8007A880: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007A884: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A888: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8007A88C: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8007A890: nop

    // 0x8007A894: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8007A898: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
    // 0x8007A89C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A8A0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007A8A4: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8007A8A8: nop

    // 0x8007A8AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007A8B0: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
    // 0x8007A8B4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007A8B8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8007A8BC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007A8C0: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8007A8C4: lwc1        $f19, -0x3600($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X3600);
    // 0x8007A8C8: lwc1        $f18, -0x35FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X35FC);
    // 0x8007A8CC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8007A8D0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8007A8D4: jal         0x80036570
    // 0x8007A8D8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8007A8D8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_1:
    // 0x8007A8DC: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007A8E0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A8E4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8007A8E8: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8007A8EC: nop

    // 0x8007A8F0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8007A8F4: swc1        $f16, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f16.u32l;
    // 0x8007A8F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007A8FC: lh          $a0, -0x1F00($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1F00);
    // 0x8007A900: jal         0x800799A8
    // 0x8007A904: nop

    func_800799A8(rdram, ctx);
        goto after_2;
    // 0x8007A904: nop

    after_2:
    // 0x8007A908: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007A90C: lh          $a0, -0x1F00($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1F00);
    // 0x8007A910: jal         0x80079AD8
    // 0x8007A914: nop

    func_80079AD8(rdram, ctx);
        goto after_3;
    // 0x8007A914: nop

    after_3:
    // 0x8007A918: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A91C: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007A920: b           L_8007A928
    // 0x8007A924: nop

        goto L_8007A928;
    // 0x8007A924: nop

L_8007A928:
    // 0x8007A928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A92C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A930: jr          $ra
    // 0x8007A934: nop

    return;
    // 0x8007A934: nop

;}
RECOMP_FUNC void func_800C7FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7FE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C7FE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C7FEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C7FF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C7FF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C7FF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C7FFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8000: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C8004: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8008: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C800C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C8010: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C8014: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800C8018: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C801C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C8020: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C8024: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C8028: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C802C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C8030: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C8034: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C8038: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C803C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C8040: nop

    // 0x800C8044: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x800C8048: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C804C: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C8050: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C8054: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C8058: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C805C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C8060: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C8064: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C8068: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C806C: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C8070: nop

    // 0x800C8074: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x800C8078: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C807C: nop

    // 0x800C8080: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800C8084: nop

    // 0x800C8088: bne         $t7, $zero, L_800C8148
    if (ctx->r15 != 0) {
        // 0x800C808C: nop
    
            goto L_800C8148;
    }
    // 0x800C808C: nop

    // 0x800C8090: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8094: nop

    // 0x800C8098: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800C809C: nop

    // 0x800C80A0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C80A4: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800C80A8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800C80AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C80B0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800C80B4: nop

    // 0x800C80B8: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x800C80BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C80C0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800C80C4: addiu       $t2, $t2, -0x7E84
    ctx->r10 = ADD32(ctx->r10, -0X7E84);
    // 0x800C80C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C80CC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800C80D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C80D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C80D8: jal         0x8001C0EC
    // 0x800C80DC: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C80DC: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_0:
    // 0x800C80E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C80E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C80E8: jal         0x8001BBDC
    // 0x800C80EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800C80EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C80F0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800C80F4: addiu       $t3, $t3, -0x7E84
    ctx->r11 = ADD32(ctx->r11, -0X7E84);
    // 0x800C80F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C80FC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800C8100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C8104: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C8108: jal         0x8001C0EC
    // 0x800C810C: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800C810C: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_2:
    // 0x800C8110: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800C8114: jal         0x8001BBDC
    // 0x800C8118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800C8118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800C811C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800C8120: addiu       $t4, $t4, -0x7E84
    ctx->r12 = ADD32(ctx->r12, -0X7E84);
    // 0x800C8124: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800C8128: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800C812C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C8130: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C8134: jal         0x8001C0EC
    // 0x800C8138: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800C8138: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_4:
    // 0x800C813C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800C8140: jal         0x8001BBDC
    // 0x800C8144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800C8144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_800C8148:
    // 0x800C8148: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C814C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C8150: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C8154: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800C8158: jal         0x80015538
    // 0x800C815C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x800C815C: nop

    after_6:
    // 0x800C8160: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8164: nop

    // 0x800C8168: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x800C816C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8170: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C8174: lh          $t9, 0xA6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA6);
    // 0x800C8178: lwc1        $f11, 0x4ED0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4ED0);
    // 0x800C817C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800C8180: lwc1        $f10, 0x4ED4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4ED4);
    // 0x800C8184: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x800C8188: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800C818C: jal         0x80034970
    // 0x800C8190: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x800C8190: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_7:
    // 0x800C8194: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8198: nop

    // 0x800C819C: lh          $t8, 0xBA($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XBA);
    // 0x800C81A0: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x800C81A4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800C81A8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800C81AC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C81B0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800C81B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C81B8: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800C81BC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x800C81C0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800C81C4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C81C8: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800C81CC: lwc1        $f9, 0x4ED8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4ED8);
    // 0x800C81D0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x800C81D4: lwc1        $f8, 0x4EDC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4EDC);
    // 0x800C81D8: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x800C81DC: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x800C81E0: jal         0x80036570
    // 0x800C81E4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_8;
    // 0x800C81E4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_8:
    // 0x800C81E8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800C81EC: nop

    // 0x800C81F0: lh          $t5, 0xBA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBA);
    // 0x800C81F4: lh          $t6, 0xB8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XB8);
    // 0x800C81F8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x800C81FC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800C8200: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C8204: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800C8208: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C820C: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800C8210: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x800C8214: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8218: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C821C: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800C8220: nop

    // 0x800C8224: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800C8228: swc1        $f4, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f4.u32l;
    // 0x800C822C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8230: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C8234: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800C8238: nop

    // 0x800C823C: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x800C8240: swc1        $f6, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f6.u32l;
    // 0x800C8244: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8248: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800C824C: lh          $t0, 0xA6($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA6);
    // 0x800C8250: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C8254: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800C8258: jal         0x80015538
    // 0x800C825C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x800C825C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_9:
    // 0x800C8260: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800C8264: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8268: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800C826C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C8270: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C8274: nop

    // 0x800C8278: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C827C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x800C8280: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800C8284: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800C8288: nop

    // 0x800C828C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800C8290: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C8294: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800C8298: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800C829C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C82A0: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800C82A4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C82A8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800C82AC: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x800C82B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C82B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C82B8: jal         0x80015538
    // 0x800C82BC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x800C82BC: nop

    after_10:
    // 0x800C82C0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800C82C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C82C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C82CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C82D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C82D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C82D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C82DC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C82E0: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x800C82E4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800C82E8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800C82EC: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800C82F0: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800C82F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C82F8: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800C82FC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C8300: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800C8304: lh          $t0, 0x41F6($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F6);
    // 0x800C8308: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C830C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800C8310: lwc1        $f9, 0x4EE0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4EE0);
    // 0x800C8314: cvt.d.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.d = CVT_D_W(ctx->f4.u32l);
    // 0x800C8318: lwc1        $f8, 0x4EE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4EE4);
    // 0x800C831C: nop

    // 0x800C8320: mul.d       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f8.d);
    // 0x800C8324: jal         0x80034970
    // 0x800C8328: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_11;
    // 0x800C8328: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_11:
    // 0x800C832C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800C8330: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800C8334: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800C8338: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C833C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C8340: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C8344: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C8348: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C834C: lh          $t3, 0x420A($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X420A);
    // 0x800C8350: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8354: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800C8358: lh          $t4, 0xB6($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XB6);
    // 0x800C835C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C8360: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800C8364: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800C8368: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C836C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800C8370: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x800C8374: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800C8378: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800C837C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C8380: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8384: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C8388: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C838C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C8390: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C8394: lh          $t9, 0x41F6($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F6);
    // 0x800C8398: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C839C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800C83A0: lwc1        $f19, 0x4EE8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4EE8);
    // 0x800C83A4: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x800C83A8: lwc1        $f18, 0x4EEC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4EEC);
    // 0x800C83AC: nop

    // 0x800C83B0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x800C83B4: jal         0x80036570
    // 0x800C83B8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_12;
    // 0x800C83B8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_12:
    // 0x800C83BC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800C83C0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800C83C4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800C83C8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800C83CC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C83D0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800C83D4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C83D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C83DC: lh          $t1, 0x420A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X420A);
    // 0x800C83E0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800C83E4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800C83E8: lh          $t3, 0xB8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB8);
    // 0x800C83EC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C83F0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800C83F4: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800C83F8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C83FC: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800C8400: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x800C8404: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800C8408: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800C840C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800C8410: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800C8414: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C8418: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800C841C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C8420: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800C8424: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x800C8428: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800C842C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C8430: nop

    // 0x800C8434: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x800C8438: swc1        $f16, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f16.u32l;
    // 0x800C843C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800C8440: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800C8444: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800C8448: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800C844C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C8450: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800C8454: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C8458: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800C845C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800C8460: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800C8464: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C8468: nop

    // 0x800C846C: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x800C8470: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x800C8474: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800C8478: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C847C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C8480: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C8484: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C8488: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C848C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C8490: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800C8494: lh          $t5, 0x41F6($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X41F6);
    // 0x800C8498: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800C849C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800C84A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C84A4: jal         0x80015538
    // 0x800C84A8: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_13;
    // 0x800C84A8: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_13:
    // 0x800C84AC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800C84B0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800C84B4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800C84B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C84BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C84C0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800C84C4: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C84C8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C84CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C84D0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C84D4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x800C84D8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C84DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C84E0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800C84E4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C84E8: sh          $t6, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r14;
    // 0x800C84EC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C84F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C84F4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800C84F8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800C84FC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C8500: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800C8504: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C8508: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800C850C: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x800C8510: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C8514: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C8518: jal         0x80015538
    // 0x800C851C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_14;
    // 0x800C851C: nop

    after_14:
    // 0x800C8520: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C8524: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C8528: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800C852C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C8530: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C8534: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C8538: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C853C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800C8540: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x800C8544: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C8548: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800C854C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800C8550: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800C8554: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C8558: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800C855C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C8560: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800C8564: lh          $t4, 0x41F6($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F6);
    // 0x800C8568: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C856C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800C8570: lwc1        $f19, 0x4EF0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4EF0);
    // 0x800C8574: cvt.d.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.d = CVT_D_W(ctx->f16.u32l);
    // 0x800C8578: lwc1        $f18, 0x4EF4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4EF4);
    // 0x800C857C: nop

    // 0x800C8580: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x800C8584: jal         0x80034970
    // 0x800C8588: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_15;
    // 0x800C8588: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_15:
    // 0x800C858C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C8590: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800C8594: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800C8598: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x800C859C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C85A0: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x800C85A4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C85A8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800C85AC: lh          $t9, 0x420A($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X420A);
    // 0x800C85B0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C85B4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C85B8: lh          $t0, 0xB6($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XB6);
    // 0x800C85BC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C85C0: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800C85C4: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800C85C8: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C85CC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800C85D0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x800C85D4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C85D8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800C85DC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800C85E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C85E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C85E8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C85EC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C85F0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C85F4: lh          $t3, 0x41F6($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F6);
    // 0x800C85F8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C85FC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800C8600: lwc1        $f11, 0x4EF8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4EF8);
    // 0x800C8604: cvt.d.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.d = CVT_D_W(ctx->f8.u32l);
    // 0x800C8608: lwc1        $f10, 0x4EFC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4EFC);
    // 0x800C860C: nop

    // 0x800C8610: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x800C8614: jal         0x80036570
    // 0x800C8618: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_16;
    // 0x800C8618: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_16:
    // 0x800C861C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C8620: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800C8624: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800C8628: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800C862C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C8630: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800C8634: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C8638: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800C863C: lh          $t7, 0x420A($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X420A);
    // 0x800C8640: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C8644: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800C8648: lh          $t9, 0xB8($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XB8);
    // 0x800C864C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C8650: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800C8654: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800C8658: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C865C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800C8660: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x800C8664: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C8668: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800C866C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800C8670: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800C8674: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C8678: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800C867C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C8680: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800C8684: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800C8688: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800C868C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800C8690: nop

    // 0x800C8694: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800C8698: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x800C869C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C86A0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800C86A4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800C86A8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800C86AC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C86B0: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800C86B4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C86B8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800C86BC: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x800C86C0: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800C86C4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C86C8: nop

    // 0x800C86CC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800C86D0: swc1        $f16, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f16.u32l;
    // 0x800C86D4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C86D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C86DC: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800C86E0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800C86E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C86E8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800C86EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C86F0: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800C86F4: lh          $t8, 0x41F6($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F6);
    // 0x800C86F8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800C86FC: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800C8700: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C8704: jal         0x80015538
    // 0x800C8708: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_17;
    // 0x800C8708: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_17:
    // 0x800C870C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800C8710: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C8714: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800C8718: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C871C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C8720: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C8724: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C8728: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C872C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C8730: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C8734: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x800C8738: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C873C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C8740: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800C8744: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C8748: sh          $t1, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r9;
    // 0x800C874C: b           L_800C8754
    // 0x800C8750: nop

        goto L_800C8754;
    // 0x800C8750: nop

L_800C8754:
    // 0x800C8754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8758: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800C875C: jr          $ra
    // 0x800C8760: nop

    return;
    // 0x800C8760: nop

;}
RECOMP_FUNC void func_800B5074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B5074: jr          $ra
    // 0x800B5078: nop

    return;
    // 0x800B5078: nop

    // 0x800B507C: jr          $ra
    // 0x800B5080: nop

    return;
    // 0x800B5080: nop

;}
RECOMP_FUNC void func_80092294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092294: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092298: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009229C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800922A0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800922A4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800922A8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800922AC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800922B0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800922B4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800922B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800922BC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800922C0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800922C4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800922C8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800922CC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800922D0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800922D4: addiu       $a1, $a1, 0x1690
    ctx->r5 = ADD32(ctx->r5, 0X1690);
    // 0x800922D8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800922DC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800922E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800922E4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800922E8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800922EC: jal         0x80027464
    // 0x800922F0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800922F0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800922F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800922F8: b           L_80092300
    // 0x800922FC: nop

        goto L_80092300;
    // 0x800922FC: nop

L_80092300:
    // 0x80092300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092304: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092308: jr          $ra
    // 0x8009230C: nop

    return;
    // 0x8009230C: nop

;}
RECOMP_FUNC void func_80078168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007816C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078170: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80078174: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80078178: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8007817C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80078180: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80078184: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80078188: jal         0x80067748
    // 0x8007818C: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x8007818C: nop

    after_0:
    // 0x80078190: jal         0x800670E8
    // 0x80078194: nop

    func_800670E8(rdram, ctx);
        goto after_1;
    // 0x80078194: nop

    after_1:
    // 0x80078198: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8007819C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800781A0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800781A4: jal         0x80068CC4
    // 0x800781A8: nop

    func_80068CC4(rdram, ctx);
        goto after_2;
    // 0x800781A8: nop

    after_2:
    // 0x800781AC: jal         0x80069314
    // 0x800781B0: nop

    func_80069314(rdram, ctx);
        goto after_3;
    // 0x800781B0: nop

    after_3:
    // 0x800781B4: jal         0x800673D4
    // 0x800781B8: nop

    func_800673D4(rdram, ctx);
        goto after_4;
    // 0x800781B8: nop

    after_4:
    // 0x800781BC: b           L_800781C4
    // 0x800781C0: nop

        goto L_800781C4;
    // 0x800781C0: nop

L_800781C4:
    // 0x800781C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800781C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800781CC: jr          $ra
    // 0x800781D0: nop

    return;
    // 0x800781D0: nop

;}
RECOMP_FUNC void func_800B955C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B955C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B9560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B9564: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B9568: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B956C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B9570: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B9574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B9578: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B957C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B9580: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B9584: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B9588: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B958C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B9590: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9594: nop

    // 0x800B9598: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B959C: nop

    // 0x800B95A0: bne         $t1, $zero, L_800B9604
    if (ctx->r9 != 0) {
        // 0x800B95A4: nop
    
            goto L_800B9604;
    }
    // 0x800B95A4: nop

    // 0x800B95A8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B95AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B95B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B95B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B95B8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B95BC: nop

    // 0x800B95C0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B95C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B95C8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B95CC: nop

    // 0x800B95D0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B95D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B95D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800B95DC: nop

    // 0x800B95E0: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x800B95E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B95E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B95EC: jal         0x80029C40
    // 0x800B95F0: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B95F0: nop

    after_0:
    // 0x800B95F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B95F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B95FC: jal         0x80029D04
    // 0x800B9600: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B9600: nop

    after_1:
L_800B9604:
    // 0x800B9604: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800B9608: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800B960C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x800B9610: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9614: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800B9618: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B961C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800B9620: lwc1        $f16, 0x58($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X58);
    // 0x800B9624: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800B9628: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800B962C: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x800B9630: nop

    // 0x800B9634: bc1f        L_800B9684
    if (!c1cs) {
        // 0x800B9638: nop
    
            goto L_800B9684;
    }
    // 0x800B9638: nop

    // 0x800B963C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9640: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800B9644: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800B9648: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800B964C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B9650: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9654: nop

    // 0x800B9658: swc1        $f6, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f6.u32l;
    // 0x800B965C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9660: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x800B9664: sh          $t3, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r11;
    // 0x800B9668: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B966C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B9670: nop

    // 0x800B9674: swc1        $f8, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f8.u32l;
    // 0x800B9678: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800B967C: nop

    // 0x800B9680: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800B9684:
    // 0x800B9684: b           L_800B968C
    // 0x800B9688: nop

        goto L_800B968C;
    // 0x800B9688: nop

L_800B968C:
    // 0x800B968C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B9690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B9694: jr          $ra
    // 0x800B9698: nop

    return;
    // 0x800B9698: nop

;}
RECOMP_FUNC void func_800945E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800945E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800945EC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800945F0: nop

    // 0x800945F4: bne         $t6, $zero, L_8009462C
    if (ctx->r14 != 0) {
        // 0x800945F8: nop
    
            goto L_8009462C;
    }
    // 0x800945F8: nop

    // 0x800945FC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80094600: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80094604: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80094608: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8009460C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80094610: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80094614: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80094618: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009461C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80094620: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80094624: b           L_80094648
    // 0x80094628: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_80094648;
    // 0x80094628: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_8009462C:
    // 0x8009462C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80094630: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80094634: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80094638: bne         $t0, $at, L_80094648
    if (ctx->r8 != ctx->r1) {
        // 0x8009463C: nop
    
            goto L_80094648;
    }
    // 0x8009463C: nop

    // 0x80094640: b           L_80094648
    // 0x80094644: nop

        goto L_80094648;
    // 0x80094644: nop

L_80094648:
    // 0x80094648: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8009464C: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80094650: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80094654: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80094658: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009465C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80094660: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80094664: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80094668: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8009466C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80094670: jr          $ra
    // 0x80094674: nop

    return;
    // 0x80094674: nop

    // 0x80094678: jr          $ra
    // 0x8009467C: nop

    return;
    // 0x8009467C: nop

;}
RECOMP_FUNC void func_800C04C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C04C4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800C04C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800C04CC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800C04D0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800C04D4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800C04D8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800C04DC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C04E0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800C04E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C04E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C04EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C04F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C04F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C04F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C04FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C0500: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C0504: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C0508: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C050C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800C0510: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800C0514: nop

    // 0x800C0518: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C051C: nop

    // 0x800C0520: bne         $t1, $zero, L_800C0694
    if (ctx->r9 != 0) {
        // 0x800C0524: nop
    
            goto L_800C0694;
    }
    // 0x800C0524: nop

    // 0x800C0528: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800C052C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C0530: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800C0534: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C0538: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800C053C: nop

    // 0x800C0540: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800C0544: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800C0548: nop

    // 0x800C054C: lh          $t6, 0xAE($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAE);
    // 0x800C0550: nop

    // 0x800C0554: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800C0558: nop

    // 0x800C055C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C0560: swc1        $f8, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f8.u32l;
    // 0x800C0564: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800C0568: nop

    // 0x800C056C: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800C0570: nop

    // 0x800C0574: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800C0578: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800C057C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C0580: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800C0584: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C0588: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C058C: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x800C0590: addiu       $t0, $t9, 0x168
    ctx->r8 = ADD32(ctx->r25, 0X168);
    // 0x800C0594: slti        $at, $t0, 0xB5
    ctx->r1 = SIGNED(ctx->r8) < 0XB5 ? 1 : 0;
    // 0x800C0598: bne         $at, $zero, L_800C05FC
    if (ctx->r1 != 0) {
        // 0x800C059C: nop
    
            goto L_800C05FC;
    }
    // 0x800C059C: nop

    // 0x800C05A0: slti        $at, $t0, 0x168
    ctx->r1 = SIGNED(ctx->r8) < 0X168 ? 1 : 0;
    // 0x800C05A4: bne         $at, $zero, L_800C05B4
    if (ctx->r1 != 0) {
        // 0x800C05A8: nop
    
            goto L_800C05B4;
    }
    // 0x800C05A8: nop

    // 0x800C05AC: b           L_800C05E8
    // 0x800C05B0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
        goto L_800C05E8;
    // 0x800C05B0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_800C05B4:
    // 0x800C05B4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800C05B8: nop

    // 0x800C05BC: lh          $s0, 0xA8($t1)
    ctx->r16 = MEM_H(ctx->r9, 0XA8);
    // 0x800C05C0: nop

    // 0x800C05C4: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x800C05C8: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x800C05CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C05D0: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x800C05D4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C05D8: addu        $t2, $t2, $s0
    ctx->r10 = ADD32(ctx->r10, ctx->r16);
    // 0x800C05DC: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x800C05E0: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800C05E4: addiu       $s0, $s0, 0x168
    ctx->r16 = ADD32(ctx->r16, 0X168);
L_800C05E8:
    // 0x800C05E8: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x800C05EC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800C05F0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C05F4: b           L_800C0680
    // 0x800C05F8: swc1        $f16, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f16.u32l;
        goto L_800C0680;
    // 0x800C05F8: swc1        $f16, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f16.u32l;
L_800C05FC:
    // 0x800C05FC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800C0600: nop

    // 0x800C0604: lh          $t6, 0xA8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XA8);
    // 0x800C0608: nop

    // 0x800C060C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800C0610: subu        $t5, $t5, $t6
    ctx->r13 = SUB32(ctx->r13, ctx->r14);
    // 0x800C0614: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C0618: subu        $t5, $t5, $t6
    ctx->r13 = SUB32(ctx->r13, ctx->r14);
    // 0x800C061C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C0620: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800C0624: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x800C0628: addiu       $t7, $t5, 0x168
    ctx->r15 = ADD32(ctx->r13, 0X168);
    // 0x800C062C: bgez        $t7, L_800C063C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800C0630: nop
    
            goto L_800C063C;
    }
    // 0x800C0630: nop

    // 0x800C0634: b           L_800C0670
    // 0x800C0638: addiu       $s1, $t5, 0x2D0
    ctx->r17 = ADD32(ctx->r13, 0X2D0);
        goto L_800C0670;
    // 0x800C0638: addiu       $s1, $t5, 0x2D0
    ctx->r17 = ADD32(ctx->r13, 0X2D0);
L_800C063C:
    // 0x800C063C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800C0640: nop

    // 0x800C0644: lh          $s1, 0xA8($t8)
    ctx->r17 = MEM_H(ctx->r24, 0XA8);
    // 0x800C0648: nop

    // 0x800C064C: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x800C0650: subu        $t0, $t0, $s1
    ctx->r8 = SUB32(ctx->r8, ctx->r17);
    // 0x800C0654: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C0658: subu        $t0, $t0, $s1
    ctx->r8 = SUB32(ctx->r8, ctx->r17);
    // 0x800C065C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C0660: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x800C0664: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x800C0668: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x800C066C: addiu       $s1, $s1, 0x168
    ctx->r17 = ADD32(ctx->r17, 0X168);
L_800C0670:
    // 0x800C0670: mtc1        $s1, $f18
    ctx->f18.u32l = ctx->r17;
    // 0x800C0674: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800C0678: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C067C: swc1        $f4, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f4.u32l;
L_800C0680:
    // 0x800C0680: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800C0684: nop

    // 0x800C0688: lh          $t2, 0xAC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAC);
    // 0x800C068C: nop

    // 0x800C0690: sh          $t2, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r10;
L_800C0694:
    // 0x800C0694: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0698: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C069C: jal         0x80029C40
    // 0x800C06A0: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800C06A0: nop

    after_0:
    // 0x800C06A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C06A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C06AC: jal         0x80029D04
    // 0x800C06B0: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800C06B0: nop

    after_1:
    // 0x800C06B4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800C06B8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C06BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C06C0: lwc1        $f6, 0x18($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X18);
    // 0x800C06C4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C06C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800C06CC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C06D0: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800C06D4: nop

    // 0x800C06D8: bc1f        L_800C0730
    if (!c1cs) {
        // 0x800C06DC: nop
    
            goto L_800C0730;
    }
    // 0x800C06DC: nop

    // 0x800C06E0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800C06E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C06E8: nop

    // 0x800C06EC: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x800C06F0: nop

    // 0x800C06F4: bc1f        L_800C070C
    if (!c1cs) {
        // 0x800C06F8: nop
    
            goto L_800C070C;
    }
    // 0x800C06F8: nop

    // 0x800C06FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800C0700: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C0704: b           L_800C0724
    // 0x800C0708: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
        goto L_800C0724;
    // 0x800C0708: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
L_800C070C:
    // 0x800C070C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800C0710: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C0714: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C0718: lwc1        $f6, 0x18($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X18);
    // 0x800C071C: nop

    // 0x800C0720: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
L_800C0724:
    // 0x800C0724: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800C0728: b           L_800C0798
    // 0x800C072C: swc1        $f20, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f20.u32l;
        goto L_800C0798;
    // 0x800C072C: swc1        $f20, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f20.u32l;
L_800C0730:
    // 0x800C0730: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800C0734: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C0738: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C073C: lwc1        $f16, 0x18($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X18);
    // 0x800C0740: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C0744: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800C0748: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x800C074C: nop

    // 0x800C0750: bc1f        L_800C0774
    if (!c1cs) {
        // 0x800C0754: nop
    
            goto L_800C0774;
    }
    // 0x800C0754: nop

    // 0x800C0758: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800C075C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C0760: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C0764: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C0768: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800C076C: b           L_800C078C
    // 0x800C0770: add.s       $f22, $f8, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f18.fl;
        goto L_800C078C;
    // 0x800C0770: add.s       $f22, $f8, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f18.fl;
L_800C0774:
    // 0x800C0774: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800C0778: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C077C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C0780: lwc1        $f10, 0x18($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X18);
    // 0x800C0784: nop

    // 0x800C0788: add.s       $f22, $f10, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f4.fl;
L_800C078C:
    // 0x800C078C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800C0790: nop

    // 0x800C0794: swc1        $f22, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f22.u32l;
L_800C0798:
    // 0x800C0798: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800C079C: nop

    // 0x800C07A0: lh          $t9, 0xA6($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XA6);
    // 0x800C07A4: lwc1        $f8, 0x48($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X48);
    // 0x800C07A8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800C07AC: nop

    // 0x800C07B0: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C07B4: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800C07B8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800C07BC: nop

    // 0x800C07C0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800C07C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C07C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C07CC: nop

    // 0x800C07D0: cvt.w.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800C07D4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800C07D8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800C07DC: sh          $t1, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r9;
    // 0x800C07E0: nop

    // 0x800C07E4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800C07E8: nop

    // 0x800C07EC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800C07F0: nop

    // 0x800C07F4: bgtz        $t4, L_800C082C
    if (SIGNED(ctx->r12) > 0) {
        // 0x800C07F8: nop
    
            goto L_800C082C;
    }
    // 0x800C07F8: nop

    // 0x800C07FC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800C0800: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800C0804: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800C0808: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800C080C: nop

    // 0x800C0810: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800C0814: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800C0818: nop

    // 0x800C081C: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800C0820: nop

    // 0x800C0824: negu        $t2, $t9
    ctx->r10 = SUB32(0, ctx->r25);
    // 0x800C0828: sh          $t2, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r10;
L_800C082C:
    // 0x800C082C: b           L_800C0834
    // 0x800C0830: nop

        goto L_800C0834;
    // 0x800C0830: nop

L_800C0834:
    // 0x800C0834: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800C0838: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800C083C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800C0840: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C0844: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C0848: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800C084C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800C0850: jr          $ra
    // 0x800C0854: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800C0854: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800B4EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4EFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B4F00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B4F04: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800B4F08: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800B4F0C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800B4F10: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800B4F14: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800B4F18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B4F1C: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800B4F20: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800B4F24: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800B4F28: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800B4F2C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B4F30: lwc1        $f16, 0x3C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800B4F34: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800B4F38: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B4F3C: addiu       $a1, $a1, 0x39F4
    ctx->r5 = ADD32(ctx->r5, 0X39F4);
    // 0x800B4F40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B4F44: jal         0x80027464
    // 0x800B4F48: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B4F48: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800B4F4C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x800B4F50: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x800B4F54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B4F58: beq         $t7, $at, L_800B5040
    if (ctx->r15 == ctx->r1) {
        // 0x800B4F5C: nop
    
            goto L_800B5040;
    }
    // 0x800B4F5C: nop

    // 0x800B4F60: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x800B4F64: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x800B4F68: jal         0x80026F10
    // 0x800B4F6C: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x800B4F6C: nop

    after_1:
    // 0x800B4F70: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x800B4F74: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800B4F78: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B4F7C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B4F80: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B4F84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B4F88: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B4F8C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800B4F90: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800B4F94: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800B4F98: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B4F9C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B4FA0: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800B4FA4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B4FA8: addiu       $t4, $zero, 0x5A
    ctx->r12 = ADD32(0, 0X5A);
    // 0x800B4FAC: sh          $t4, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r12;
    // 0x800B4FB0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B4FB4: nop

    // 0x800B4FB8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800B4FBC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800B4FC0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B4FC4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B4FC8: nop

    // 0x800B4FCC: swc1        $f18, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f18.u32l;
    // 0x800B4FD0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800B4FD4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800B4FD8: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800B4FDC: nop

    // 0x800B4FE0: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x800B4FE4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800B4FE8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800B4FEC: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x800B4FF0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800B4FF4: addiu       $t2, $t2, 0x7A5C
    ctx->r10 = ADD32(ctx->r10, 0X7A5C);
    // 0x800B4FF8: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800B4FFC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800B5000: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B5008: jal         0x8001C0EC
    // 0x800B500C: addiu       $a3, $zero, 0xB7
    ctx->r7 = ADD32(0, 0XB7);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800B500C: addiu       $a3, $zero, 0xB7
    ctx->r7 = ADD32(0, 0XB7);
    after_2:
    // 0x800B5010: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800B5014: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B5018: addiu       $a3, $a3, 0x7A7C
    ctx->r7 = ADD32(ctx->r7, 0X7A7C);
    // 0x800B501C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5020: jal         0x8001ABF4
    // 0x800B5024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800B5024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800B5028: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800B502C: jal         0x80029C40
    // 0x800B5030: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800B5030: nop

    after_4:
    // 0x800B5034: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800B5038: jal         0x80029D04
    // 0x800B503C: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800B503C: nop

    after_5:
L_800B5040:
    // 0x800B5040: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x800B5044: b           L_800B5054
    // 0x800B5048: nop

        goto L_800B5054;
    // 0x800B5048: nop

    // 0x800B504C: b           L_800B5054
    // 0x800B5050: nop

        goto L_800B5054;
    // 0x800B5050: nop

L_800B5054:
    // 0x800B5054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B5058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B505C: jr          $ra
    // 0x800B5060: nop

    return;
    // 0x800B5060: nop

;}
RECOMP_FUNC void func_800C0898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0898: jr          $ra
    // 0x800C089C: nop

    return;
    // 0x800C089C: nop

    // 0x800C08A0: jr          $ra
    // 0x800C08A4: nop

    return;
    // 0x800C08A4: nop

;}
RECOMP_FUNC void func_800EC408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC408: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EC40C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC410: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800EC414: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800EC418: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EC41C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800EC420: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800EC424: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800EC428: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800EC42C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EC430: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800EC434: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800EC438: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EC43C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800EC440: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EC444: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800EC448: addiu       $a1, $a1, 0x44C8
    ctx->r5 = ADD32(ctx->r5, 0X44C8);
    // 0x800EC44C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EC450: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800EC454: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EC458: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EC45C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800EC460: jal         0x80027464
    // 0x800EC464: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800EC464: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800EC468: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800EC46C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800EC470: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EC474: beq         $t1, $at, L_800EC494
    if (ctx->r9 == ctx->r1) {
        // 0x800EC478: nop
    
            goto L_800EC494;
    }
    // 0x800EC478: nop

    // 0x800EC47C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800EC480: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EC484: addiu       $a3, $a3, -0x6654
    ctx->r7 = ADD32(ctx->r7, -0X6654);
    // 0x800EC488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EC48C: jal         0x8001ABF4
    // 0x800EC490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800EC490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800EC494:
    // 0x800EC494: b           L_800EC49C
    // 0x800EC498: nop

        goto L_800EC49C;
    // 0x800EC498: nop

L_800EC49C:
    // 0x800EC49C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC4A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EC4A4: jr          $ra
    // 0x800EC4A8: nop

    return;
    // 0x800EC4A8: nop

;}
RECOMP_FUNC void func_8009F13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F13C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009F140: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009F144: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009F148: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009F14C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8009F150: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009F154: nop

    // 0x8009F158: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8009F15C: nop

    // 0x8009F160: bne         $t7, $zero, L_8009F20C
    if (ctx->r15 != 0) {
        // 0x8009F164: nop
    
            goto L_8009F20C;
    }
    // 0x8009F164: nop

    // 0x8009F168: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8009F16C: nop

    // 0x8009F170: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8009F174: nop

    // 0x8009F178: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009F17C: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8009F180: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8009F184: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8009F188: sb          $t1, 0x102($t2)
    MEM_B(0X102, ctx->r10) = ctx->r9;
    // 0x8009F18C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8009F190: nop

    // 0x8009F194: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
    // 0x8009F198: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x8009F19C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009F1A0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8009F1A4: nop

    // 0x8009F1A8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8009F1AC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8009F1B0: addiu       $at, $zero, 0x169
    ctx->r1 = ADD32(0, 0X169);
    // 0x8009F1B4: lh          $t6, 0xE4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE4);
    // 0x8009F1B8: nop

    // 0x8009F1BC: bne         $t6, $at, L_8009F1E8
    if (ctx->r14 != ctx->r1) {
        // 0x8009F1C0: nop
    
            goto L_8009F1E8;
    }
    // 0x8009F1C0: nop

    // 0x8009F1C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009F1C8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8009F1CC: nop

    // 0x8009F1D0: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x8009F1D4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009F1D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009F1DC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8009F1E0: b           L_8009F20C
    // 0x8009F1E4: swc1        $f8, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f8.u32l;
        goto L_8009F20C;
    // 0x8009F1E4: swc1        $f8, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f8.u32l;
L_8009F1E8:
    // 0x8009F1E8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8009F1EC: nop

    // 0x8009F1F0: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8009F1F4: nop

    // 0x8009F1F8: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
    // 0x8009F1FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009F200: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8009F204: nop

    // 0x8009F208: swc1        $f16, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f16.u32l;
L_8009F20C:
    // 0x8009F20C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009F210: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009F214: jal         0x80029D8C
    // 0x8009F218: nop

    func_80029D8C(rdram, ctx);
        goto after_0;
    // 0x8009F218: nop

    after_0:
    // 0x8009F21C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8009F220: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8009F224: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x8009F228: nop

    // 0x8009F22C: bne         $t2, $at, L_8009F27C
    if (ctx->r10 != ctx->r1) {
        // 0x8009F230: nop
    
            goto L_8009F27C;
    }
    // 0x8009F230: nop

    // 0x8009F234: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8009F238: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8009F23C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8009F240: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8009F244: nop

    // 0x8009F248: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x8009F24C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F250: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009F254: nop

    // 0x8009F258: swc1        $f18, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f18.u32l;
    // 0x8009F25C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8009F260: nop

    // 0x8009F264: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8009F268: nop

    // 0x8009F26C: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x8009F270: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8009F274: b           L_8009F294
    // 0x8009F278: swc1        $f20, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f20.u32l;
        goto L_8009F294;
    // 0x8009F278: swc1        $f20, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f20.u32l;
L_8009F27C:
    // 0x8009F27C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8009F280: nop

    // 0x8009F284: lh          $t8, 0xA6($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA6);
    // 0x8009F288: nop

    // 0x8009F28C: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x8009F290: sh          $t1, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r9;
L_8009F294:
    // 0x8009F294: b           L_8009F29C
    // 0x8009F298: nop

        goto L_8009F29C;
    // 0x8009F298: nop

L_8009F29C:
    // 0x8009F29C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F2A0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8009F2A4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8009F2A8: jr          $ra
    // 0x8009F2AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009F2AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C2EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2EC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C2ECC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C2ED0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C2ED4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C2ED8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C2EDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C2EE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2EE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C2EE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2EEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C2EF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C2EF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C2EF8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C2EFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C2F00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C2F04: nop

    // 0x800C2F08: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x800C2F0C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C2F10: nop

    // 0x800C2F14: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800C2F18: nop

    // 0x800C2F1C: bne         $t2, $zero, L_800C2F48
    if (ctx->r10 != 0) {
        // 0x800C2F20: nop
    
            goto L_800C2F48;
    }
    // 0x800C2F20: nop

    // 0x800C2F24: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C2F28: nop

    // 0x800C2F2C: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x800C2F30: nop

    // 0x800C2F34: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800C2F38: sb          $t5, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r13;
    // 0x800C2F3C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C2F40: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C2F44: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_800C2F48:
    // 0x800C2F48: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C2F4C: nop

    // 0x800C2F50: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800C2F54: nop

    // 0x800C2F58: beq         $t9, $zero, L_800C2FC8
    if (ctx->r25 == 0) {
        // 0x800C2F5C: nop
    
            goto L_800C2FC8;
    }
    // 0x800C2F5C: nop

    // 0x800C2F60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C2F64: nop

    // 0x800C2F68: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
    // 0x800C2F6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2F70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2F74: lui         $a1, 0x4166
    ctx->r5 = S32(0X4166 << 16);
    // 0x800C2F78: lui         $a2, 0x3F87
    ctx->r6 = S32(0X3F87 << 16);
    // 0x800C2F7C: ori         $a2, $a2, 0xCB3E
    ctx->r6 = ctx->r6 | 0XCB3E;
    // 0x800C2F80: jal         0x80029EF8
    // 0x800C2F84: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800C2F84: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    after_0:
    // 0x800C2F88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2F8C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800C2F90: addiu       $t1, $t1, -0x7F04
    ctx->r9 = ADD32(ctx->r9, -0X7F04);
    // 0x800C2F94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2F98: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800C2F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C2FA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C2FA4: jal         0x8001C0EC
    // 0x800C2FA8: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C2FA8: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    after_1:
    // 0x800C2FAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2FB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C2FB8: addiu       $a2, $zero, 0x56
    ctx->r6 = ADD32(0, 0X56);
    // 0x800C2FBC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C2FC0: jal         0x80017664
    // 0x800C2FC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_2;
    // 0x800C2FC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800C2FC8:
    // 0x800C2FC8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C2FCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C2FD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2FD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2FD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C2FDC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C2FE0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C2FE4: jal         0x80029F58
    // 0x800C2FE8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_3;
    // 0x800C2FE8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800C2FEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C2FF0: bne         $v0, $at, L_800C3034
    if (ctx->r2 != ctx->r1) {
        // 0x800C2FF4: nop
    
            goto L_800C3034;
    }
    // 0x800C2FF4: nop

    // 0x800C2FF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2FFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3000: jal         0x8002A1FC
    // 0x800C3004: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x800C3004: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_4:
    // 0x800C3008: beq         $v0, $zero, L_800C3028
    if (ctx->r2 == 0) {
        // 0x800C300C: nop
    
            goto L_800C3028;
    }
    // 0x800C300C: nop

    // 0x800C3010: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C3014: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800C3018: sh          $t2, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r10;
    // 0x800C301C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C3020: b           L_800C3034
    // 0x800C3024: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_800C3034;
    // 0x800C3024: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800C3028:
    // 0x800C3028: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C302C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800C3030: sh          $t3, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r11;
L_800C3034:
    // 0x800C3034: b           L_800C303C
    // 0x800C3038: nop

        goto L_800C303C;
    // 0x800C3038: nop

L_800C303C:
    // 0x800C303C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3040: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C3044: jr          $ra
    // 0x800C3048: nop

    return;
    // 0x800C3048: nop

;}
RECOMP_FUNC void func_8009AC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AC94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009AC98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009AC9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009ACA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009ACA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009ACA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009ACAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009ACB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009ACB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009ACB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009ACBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009ACC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009ACC4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8009ACC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009ACCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009ACD0: jal         0x8002AA94
    // 0x8009ACD4: nop

    func_8002AA94(rdram, ctx);
        goto after_0;
    // 0x8009ACD4: nop

    after_0:
    // 0x8009ACD8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8009ACDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009ACE0: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8009ACE4: nop

    // 0x8009ACE8: bne         $t1, $at, L_8009AD5C
    if (ctx->r9 != ctx->r1) {
        // 0x8009ACEC: nop
    
            goto L_8009AD5C;
    }
    // 0x8009ACEC: nop

    // 0x8009ACF0: b           L_8009ACF8
    // 0x8009ACF4: nop

        goto L_8009ACF8;
    // 0x8009ACF4: nop

L_8009ACF8:
    // 0x8009ACF8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8009ACFC: nop

    // 0x8009AD00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009AD04: nop

    // 0x8009AD08: bne         $t3, $zero, L_8009AD40
    if (ctx->r11 != 0) {
        // 0x8009AD0C: nop
    
            goto L_8009AD40;
    }
    // 0x8009AD0C: nop

    // 0x8009AD10: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8009AD14: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8009AD18: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x8009AD1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AD20: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8009AD24: addiu       $t6, $t6, 0x6944
    ctx->r14 = ADD32(ctx->r14, 0X6944);
    // 0x8009AD28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AD2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8009AD30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009AD34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009AD38: jal         0x8001C0EC
    // 0x8009AD3C: addiu       $a3, $zero, 0xAC
    ctx->r7 = ADD32(0, 0XAC);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8009AD3C: addiu       $a3, $zero, 0xAC
    ctx->r7 = ADD32(0, 0XAC);
    after_1:
L_8009AD40:
    // 0x8009AD40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AD44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AD48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009AD4C: jal         0x80098864
    // 0x8009AD50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098864(rdram, ctx);
        goto after_2;
    // 0x8009AD50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8009AD54: b           L_8009AD5C
    // 0x8009AD58: nop

        goto L_8009AD5C;
    // 0x8009AD58: nop

L_8009AD5C:
    // 0x8009AD5C: b           L_8009AD64
    // 0x8009AD60: nop

        goto L_8009AD64;
    // 0x8009AD60: nop

L_8009AD64:
    // 0x8009AD64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009AD68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009AD6C: jr          $ra
    // 0x8009AD70: nop

    return;
    // 0x8009AD70: nop

;}
RECOMP_FUNC void func_8007A620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A628: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007A62C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007A630: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007A634: bne         $t6, $at, L_8007A64C
    if (ctx->r14 != ctx->r1) {
        // 0x8007A638: nop
    
            goto L_8007A64C;
    }
    // 0x8007A638: nop

    // 0x8007A63C: jal         0x8007A488
    // 0x8007A640: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8007A488(rdram, ctx);
        goto after_0;
    // 0x8007A640: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8007A644: b           L_8007A6C4
    // 0x8007A648: nop

        goto L_8007A6C4;
    // 0x8007A648: nop

L_8007A64C:
    // 0x8007A64C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8007A650: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007A654: bne         $t7, $at, L_8007A674
    if (ctx->r15 != ctx->r1) {
        // 0x8007A658: nop
    
            goto L_8007A674;
    }
    // 0x8007A658: nop

    // 0x8007A65C: jal         0x8007A488
    // 0x8007A660: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007A488(rdram, ctx);
        goto after_1;
    // 0x8007A660: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8007A664: jal         0x8007A488
    // 0x8007A668: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8007A488(rdram, ctx);
        goto after_2;
    // 0x8007A668: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8007A66C: b           L_8007A6C4
    // 0x8007A670: nop

        goto L_8007A6C4;
    // 0x8007A670: nop

L_8007A674:
    // 0x8007A674: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8007A678: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007A67C: bne         $t8, $at, L_8007A6A4
    if (ctx->r24 != ctx->r1) {
        // 0x8007A680: nop
    
            goto L_8007A6A4;
    }
    // 0x8007A680: nop

    // 0x8007A684: jal         0x8007A488
    // 0x8007A688: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8007A488(rdram, ctx);
        goto after_3;
    // 0x8007A688: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x8007A68C: jal         0x8007A488
    // 0x8007A690: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8007A488(rdram, ctx);
        goto after_4;
    // 0x8007A690: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x8007A694: jal         0x8007A488
    // 0x8007A698: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8007A488(rdram, ctx);
        goto after_5;
    // 0x8007A698: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x8007A69C: b           L_8007A6C4
    // 0x8007A6A0: nop

        goto L_8007A6C4;
    // 0x8007A6A0: nop

L_8007A6A4:
    // 0x8007A6A4: jal         0x8007A488
    // 0x8007A6A8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8007A488(rdram, ctx);
        goto after_6;
    // 0x8007A6A8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_6:
    // 0x8007A6AC: jal         0x8007A488
    // 0x8007A6B0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8007A488(rdram, ctx);
        goto after_7;
    // 0x8007A6B0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_7:
    // 0x8007A6B4: jal         0x8007A488
    // 0x8007A6B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8007A488(rdram, ctx);
        goto after_8;
    // 0x8007A6B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x8007A6BC: jal         0x8007A488
    // 0x8007A6C0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8007A488(rdram, ctx);
        goto after_9;
    // 0x8007A6C0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_9:
L_8007A6C4:
    // 0x8007A6C4: b           L_8007A6CC
    // 0x8007A6C8: nop

        goto L_8007A6CC;
    // 0x8007A6C8: nop

L_8007A6CC:
    // 0x8007A6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A6D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A6D4: jr          $ra
    // 0x8007A6D8: nop

    return;
    // 0x8007A6D8: nop

;}
RECOMP_FUNC void func_800FDF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FDF98: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800FDF9C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x800FDFA0: lw          $t6, 0x4218($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4218);
    // 0x800FDFA4: nop

    // 0x800FDFA8: beq         $t6, $zero, L_800FDFC4
    if (ctx->r14 == 0) {
        // 0x800FDFAC: nop
    
            goto L_800FDFC4;
    }
    // 0x800FDFAC: nop

    // 0x800FDFB0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800FDFB4: lw          $t7, 0x4218($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4218);
    // 0x800FDFB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FDFBC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800FDFC0: sw          $t8, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r24;
L_800FDFC4:
    // 0x800FDFC4: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x800FDFC8: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FDFCC: lw          $t9, 0x4218($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4218);
    // 0x800FDFD0: nop

    // 0x800FDFD4: bne         $t9, $zero, L_800FE0B0
    if (ctx->r25 != 0) {
        // 0x800FDFD8: nop
    
            goto L_800FE0B0;
    }
    // 0x800FDFD8: nop

    // 0x800FDFDC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FDFE0: addiu       $t0, $t0, -0x1D10
    ctx->r8 = ADD32(ctx->r8, -0X1D10);
    // 0x800FDFE4: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x800FDFE8: nop

    // 0x800FDFEC: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x800FDFF0: beq         $t2, $zero, L_800FE010
    if (ctx->r10 == 0) {
        // 0x800FDFF4: nop
    
            goto L_800FE010;
    }
    // 0x800FDFF4: nop

    // 0x800FDFF8: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x800FDFFC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE000: sw          $t3, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r11;
    // 0x800FE004: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800FE008: b           L_800FE0A8
    // 0x800FE00C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
        goto L_800FE0A8;
    // 0x800FE00C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
L_800FE010:
    // 0x800FE010: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800FE014: addiu       $t5, $t5, -0x1D10
    ctx->r13 = ADD32(ctx->r13, -0X1D10);
    // 0x800FE018: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x800FE01C: nop

    // 0x800FE020: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x800FE024: beq         $t7, $zero, L_800FE044
    if (ctx->r15 == 0) {
        // 0x800FE028: nop
    
            goto L_800FE044;
    }
    // 0x800FE028: nop

    // 0x800FE02C: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x800FE030: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE034: sw          $t8, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r24;
    // 0x800FE038: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800FE03C: b           L_800FE0A8
    // 0x800FE040: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
        goto L_800FE0A8;
    // 0x800FE040: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_800FE044:
    // 0x800FE044: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FE048: addiu       $t0, $t0, -0x1D10
    ctx->r8 = ADD32(ctx->r8, -0X1D10);
    // 0x800FE04C: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x800FE050: nop

    // 0x800FE054: andi        $t2, $t1, 0x800
    ctx->r10 = ctx->r9 & 0X800;
    // 0x800FE058: beq         $t2, $zero, L_800FE078
    if (ctx->r10 == 0) {
        // 0x800FE05C: nop
    
            goto L_800FE078;
    }
    // 0x800FE05C: nop

    // 0x800FE060: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x800FE064: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE068: sw          $t3, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r11;
    // 0x800FE06C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800FE070: b           L_800FE0A8
    // 0x800FE074: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
        goto L_800FE0A8;
    // 0x800FE074: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
L_800FE078:
    // 0x800FE078: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800FE07C: addiu       $t5, $t5, -0x1D10
    ctx->r13 = ADD32(ctx->r13, -0X1D10);
    // 0x800FE080: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x800FE084: nop

    // 0x800FE088: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x800FE08C: beq         $t7, $zero, L_800FE0A8
    if (ctx->r15 == 0) {
        // 0x800FE090: nop
    
            goto L_800FE0A8;
    }
    // 0x800FE090: nop

    // 0x800FE094: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x800FE098: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE09C: sw          $t8, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r24;
    // 0x800FE0A0: addiu       $t9, $zero, -0x2
    ctx->r25 = ADD32(0, -0X2);
    // 0x800FE0A4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_800FE0A8:
    // 0x800FE0A8: b           L_800FE1E8
    // 0x800FE0AC: nop

        goto L_800FE1E8;
    // 0x800FE0AC: nop

L_800FE0B0:
    // 0x800FE0B0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FE0B4: addiu       $t0, $t0, -0x1D30
    ctx->r8 = ADD32(ctx->r8, -0X1D30);
    // 0x800FE0B8: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x800FE0BC: nop

    // 0x800FE0C0: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x800FE0C4: beq         $t2, $zero, L_800FE0FC
    if (ctx->r10 == 0) {
        // 0x800FE0C8: nop
    
            goto L_800FE0FC;
    }
    // 0x800FE0C8: nop

    // 0x800FE0CC: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800FE0D0: lw          $t3, 0x4218($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4218);
    // 0x800FE0D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE0D8: bne         $t3, $at, L_800FE0F4
    if (ctx->r11 != ctx->r1) {
        // 0x800FE0DC: nop
    
            goto L_800FE0F4;
    }
    // 0x800FE0DC: nop

    // 0x800FE0E0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800FE0E4: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x800FE0E8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800FE0EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE0F0: sw          $t5, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r13;
L_800FE0F4:
    // 0x800FE0F4: b           L_800FE1E8
    // 0x800FE0F8: nop

        goto L_800FE1E8;
    // 0x800FE0F8: nop

L_800FE0FC:
    // 0x800FE0FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FE100: addiu       $t6, $t6, -0x1D30
    ctx->r14 = ADD32(ctx->r14, -0X1D30);
    // 0x800FE104: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x800FE108: nop

    // 0x800FE10C: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x800FE110: beq         $t8, $zero, L_800FE148
    if (ctx->r24 == 0) {
        // 0x800FE114: nop
    
            goto L_800FE148;
    }
    // 0x800FE114: nop

    // 0x800FE118: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800FE11C: lw          $t9, 0x4218($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4218);
    // 0x800FE120: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE124: bne         $t9, $at, L_800FE140
    if (ctx->r25 != ctx->r1) {
        // 0x800FE128: nop
    
            goto L_800FE140;
    }
    // 0x800FE128: nop

    // 0x800FE12C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800FE130: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x800FE134: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800FE138: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE13C: sw          $t1, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r9;
L_800FE140:
    // 0x800FE140: b           L_800FE1E8
    // 0x800FE144: nop

        goto L_800FE1E8;
    // 0x800FE144: nop

L_800FE148:
    // 0x800FE148: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800FE14C: addiu       $t2, $t2, -0x1D30
    ctx->r10 = ADD32(ctx->r10, -0X1D30);
    // 0x800FE150: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x800FE154: nop

    // 0x800FE158: andi        $t4, $t3, 0x800
    ctx->r12 = ctx->r11 & 0X800;
    // 0x800FE15C: beq         $t4, $zero, L_800FE194
    if (ctx->r12 == 0) {
        // 0x800FE160: nop
    
            goto L_800FE194;
    }
    // 0x800FE160: nop

    // 0x800FE164: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800FE168: lw          $t5, 0x4218($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4218);
    // 0x800FE16C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE170: bne         $t5, $at, L_800FE18C
    if (ctx->r13 != ctx->r1) {
        // 0x800FE174: nop
    
            goto L_800FE18C;
    }
    // 0x800FE174: nop

    // 0x800FE178: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800FE17C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x800FE180: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800FE184: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE188: sw          $t7, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r15;
L_800FE18C:
    // 0x800FE18C: b           L_800FE1E8
    // 0x800FE190: nop

        goto L_800FE1E8;
    // 0x800FE190: nop

L_800FE194:
    // 0x800FE194: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FE198: addiu       $t8, $t8, -0x1D30
    ctx->r24 = ADD32(ctx->r24, -0X1D30);
    // 0x800FE19C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x800FE1A0: nop

    // 0x800FE1A4: andi        $t0, $t9, 0x400
    ctx->r8 = ctx->r25 & 0X400;
    // 0x800FE1A8: beq         $t0, $zero, L_800FE1E0
    if (ctx->r8 == 0) {
        // 0x800FE1AC: nop
    
            goto L_800FE1E0;
    }
    // 0x800FE1AC: nop

    // 0x800FE1B0: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800FE1B4: lw          $t1, 0x4218($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4218);
    // 0x800FE1B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FE1BC: bne         $t1, $at, L_800FE1D8
    if (ctx->r9 != ctx->r1) {
        // 0x800FE1C0: nop
    
            goto L_800FE1D8;
    }
    // 0x800FE1C0: nop

    // 0x800FE1C4: addiu       $t2, $zero, -0x2
    ctx->r10 = ADD32(0, -0X2);
    // 0x800FE1C8: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x800FE1CC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800FE1D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE1D4: sw          $t3, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = ctx->r11;
L_800FE1D8:
    // 0x800FE1D8: b           L_800FE1E8
    // 0x800FE1DC: nop

        goto L_800FE1E8;
    // 0x800FE1DC: nop

L_800FE1E0:
    // 0x800FE1E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800FE1E4: sw          $zero, 0x4218($at)
    MEM_W(0X4218, ctx->r1) = 0;
L_800FE1E8:
    // 0x800FE1E8: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x800FE1EC: b           L_800FE1FC
    // 0x800FE1F0: nop

        goto L_800FE1FC;
    // 0x800FE1F0: nop

    // 0x800FE1F4: b           L_800FE1FC
    // 0x800FE1F8: nop

        goto L_800FE1FC;
    // 0x800FE1F8: nop

L_800FE1FC:
    // 0x800FE1FC: jr          $ra
    // 0x800FE200: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800FE200: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80072160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072160: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072164: sw          $zero, 0x763C($at)
    MEM_W(0X763C, ctx->r1) = 0;
    // 0x80072168: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007216C: sw          $zero, 0x7644($at)
    MEM_W(0X7644, ctx->r1) = 0;
    // 0x80072170: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072174: sw          $zero, 0x764C($at)
    MEM_W(0X764C, ctx->r1) = 0;
    // 0x80072178: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007217C: sw          $zero, 0x7660($at)
    MEM_W(0X7660, ctx->r1) = 0;
    // 0x80072180: jr          $ra
    // 0x80072184: nop

    return;
    // 0x80072184: nop

    // 0x80072188: jr          $ra
    // 0x8007218C: nop

    return;
    // 0x8007218C: nop

;}
RECOMP_FUNC void func_80081468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081468: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008146C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80081470: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80081474: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80081478: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008147C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80081480: addiu       $t6, $zero, 0x8F
    ctx->r14 = ADD32(0, 0X8F);
    // 0x80081484: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80081488:
    // 0x80081488: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8008148C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80081490: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80081494: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80081498: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008149C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800814A0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800814A4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800814A8: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x800814AC: nop

    // 0x800814B0: bne         $t9, $zero, L_800816CC
    if (ctx->r25 != 0) {
        // 0x800814B4: nop
    
            goto L_800816CC;
    }
    // 0x800814B4: nop

    // 0x800814B8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800814BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800814C0: sw          $t0, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r8;
    // 0x800814C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800814C8: jal         0x8001A928
    // 0x800814CC: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x800814CC: nop

    after_0:
    // 0x800814D0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800814D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800814D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800814DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800814E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800814E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800814E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800814EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800814F0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800814F4: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x800814F8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800814FC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80081500: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80081504: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80081508: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008150C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80081510: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80081514: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80081518: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008151C: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80081520: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80081524: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80081528: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008152C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80081530: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80081534: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80081538: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008153C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80081540: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80081544: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80081548: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8008154C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80081550: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80081554: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80081558: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008155C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80081560: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80081564: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80081568: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008156C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80081570: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80081574: nop

    // 0x80081578: addiu       $t2, $t0, -0x2BC
    ctx->r10 = ADD32(ctx->r8, -0X2BC);
    // 0x8008157C: sltiu       $at, $t2, 0x12
    ctx->r1 = ctx->r10 < 0X12 ? 1 : 0;
    // 0x80081580: beq         $at, $zero, L_800816C4
    if (ctx->r1 == 0) {
        // 0x80081584: nop
    
            goto L_800816C4;
    }
    // 0x80081584: nop

    // 0x80081588: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008158C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80081590: addu        $at, $at, $t2
    gpr jr_addend_8008159C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80081594: lw          $t2, -0x34C0($at)
    ctx->r10 = ADD32(ctx->r1, -0X34C0);
    // 0x80081598: nop

    // 0x8008159C: jr          $t2
    // 0x800815A0: nop

    switch (jr_addend_8008159C >> 2) {
        case 0: goto L_800815A4; break;
        case 1: goto L_800815B4; break;
        case 2: goto L_800815C4; break;
        case 3: goto L_800815D4; break;
        case 4: goto L_800815E4; break;
        case 5: goto L_800815F4; break;
        case 6: goto L_80081604; break;
        case 7: goto L_80081634; break;
        case 8: goto L_80081624; break;
        case 9: goto L_80081614; break;
        case 10: goto L_80081644; break;
        case 11: goto L_80081654; break;
        case 12: goto L_80081664; break;
        case 13: goto L_80081674; break;
        case 14: goto L_80081684; break;
        case 15: goto L_80081694; break;
        case 16: goto L_800816A4; break;
        case 17: goto L_800816B4; break;
        default: switch_error(__func__, 0x8008159C, 0x8010CB40);
    }
    // 0x800815A0: nop

L_800815A4:
    // 0x800815A4: jal         0x8007F5CC
    // 0x800815A8: nop

    func_8007F5CC(rdram, ctx);
        goto after_1;
    // 0x800815A8: nop

    after_1:
    // 0x800815AC: b           L_800816C4
    // 0x800815B0: nop

        goto L_800816C4;
    // 0x800815B0: nop

L_800815B4:
    // 0x800815B4: jal         0x8007F778
    // 0x800815B8: nop

    func_8007F778(rdram, ctx);
        goto after_2;
    // 0x800815B8: nop

    after_2:
    // 0x800815BC: b           L_800816C4
    // 0x800815C0: nop

        goto L_800816C4;
    // 0x800815C0: nop

L_800815C4:
    // 0x800815C4: jal         0x8007FB34
    // 0x800815C8: nop

    func_8007FB34(rdram, ctx);
        goto after_3;
    // 0x800815C8: nop

    after_3:
    // 0x800815CC: b           L_800816C4
    // 0x800815D0: nop

        goto L_800816C4;
    // 0x800815D0: nop

L_800815D4:
    // 0x800815D4: jal         0x8007FD5C
    // 0x800815D8: nop

    func_8007FD5C(rdram, ctx);
        goto after_4;
    // 0x800815D8: nop

    after_4:
    // 0x800815DC: b           L_800816C4
    // 0x800815E0: nop

        goto L_800816C4;
    // 0x800815E0: nop

L_800815E4:
    // 0x800815E4: jal         0x8007FDDC
    // 0x800815E8: nop

    func_8007FDDC(rdram, ctx);
        goto after_5;
    // 0x800815E8: nop

    after_5:
    // 0x800815EC: b           L_800816C4
    // 0x800815F0: nop

        goto L_800816C4;
    // 0x800815F0: nop

L_800815F4:
    // 0x800815F4: jal         0x8007FF44
    // 0x800815F8: nop

    func_8007FF44(rdram, ctx);
        goto after_6;
    // 0x800815F8: nop

    after_6:
    // 0x800815FC: b           L_800816C4
    // 0x80081600: nop

        goto L_800816C4;
    // 0x80081600: nop

L_80081604:
    // 0x80081604: jal         0x80080198
    // 0x80081608: nop

    func_80080198(rdram, ctx);
        goto after_7;
    // 0x80081608: nop

    after_7:
    // 0x8008160C: b           L_800816C4
    // 0x80081610: nop

        goto L_800816C4;
    // 0x80081610: nop

L_80081614:
    // 0x80081614: jal         0x8007F964
    // 0x80081618: nop

    func_8007F964(rdram, ctx);
        goto after_8;
    // 0x80081618: nop

    after_8:
    // 0x8008161C: b           L_800816C4
    // 0x80081620: nop

        goto L_800816C4;
    // 0x80081620: nop

L_80081624:
    // 0x80081624: jal         0x8008057C
    // 0x80081628: nop

    func_8008057C(rdram, ctx);
        goto after_9;
    // 0x80081628: nop

    after_9:
    // 0x8008162C: b           L_800816C4
    // 0x80081630: nop

        goto L_800816C4;
    // 0x80081630: nop

L_80081634:
    // 0x80081634: jal         0x80080388
    // 0x80081638: nop

    func_80080388(rdram, ctx);
        goto after_10;
    // 0x80081638: nop

    after_10:
    // 0x8008163C: b           L_800816C4
    // 0x80081640: nop

        goto L_800816C4;
    // 0x80081640: nop

L_80081644:
    // 0x80081644: jal         0x800806DC
    // 0x80081648: nop

    func_800806DC(rdram, ctx);
        goto after_11;
    // 0x80081648: nop

    after_11:
    // 0x8008164C: b           L_800816C4
    // 0x80081650: nop

        goto L_800816C4;
    // 0x80081650: nop

L_80081654:
    // 0x80081654: jal         0x80080834
    // 0x80081658: nop

    func_80080834(rdram, ctx);
        goto after_12;
    // 0x80081658: nop

    after_12:
    // 0x8008165C: b           L_800816C4
    // 0x80081660: nop

        goto L_800816C4;
    // 0x80081660: nop

L_80081664:
    // 0x80081664: jal         0x80080AFC
    // 0x80081668: nop

    func_80080AFC(rdram, ctx);
        goto after_13;
    // 0x80081668: nop

    after_13:
    // 0x8008166C: b           L_800816C4
    // 0x80081670: nop

        goto L_800816C4;
    // 0x80081670: nop

L_80081674:
    // 0x80081674: jal         0x80080D00
    // 0x80081678: nop

    func_80080D00(rdram, ctx);
        goto after_14;
    // 0x80081678: nop

    after_14:
    // 0x8008167C: b           L_800816C4
    // 0x80081680: nop

        goto L_800816C4;
    // 0x80081680: nop

L_80081684:
    // 0x80081684: jal         0x80080EF4
    // 0x80081688: nop

    func_80080EF4(rdram, ctx);
        goto after_15;
    // 0x80081688: nop

    after_15:
    // 0x8008168C: b           L_800816C4
    // 0x80081690: nop

        goto L_800816C4;
    // 0x80081690: nop

L_80081694:
    // 0x80081694: jal         0x80080F6C
    // 0x80081698: nop

    func_80080F6C(rdram, ctx);
        goto after_16;
    // 0x80081698: nop

    after_16:
    // 0x8008169C: b           L_800816C4
    // 0x800816A0: nop

        goto L_800816C4;
    // 0x800816A0: nop

L_800816A4:
    // 0x800816A4: jal         0x80081120
    // 0x800816A8: nop

    func_80081120(rdram, ctx);
        goto after_17;
    // 0x800816A8: nop

    after_17:
    // 0x800816AC: b           L_800816C4
    // 0x800816B0: nop

        goto L_800816C4;
    // 0x800816B0: nop

L_800816B4:
    // 0x800816B4: jal         0x800812D4
    // 0x800816B8: nop

    func_800812D4(rdram, ctx);
        goto after_18;
    // 0x800816B8: nop

    after_18:
    // 0x800816BC: b           L_800816C4
    // 0x800816C0: nop

        goto L_800816C4;
    // 0x800816C0: nop

L_800816C4:
    // 0x800816C4: b           L_800816E4
    // 0x800816C8: nop

        goto L_800816E4;
    // 0x800816C8: nop

L_800816CC:
    // 0x800816CC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800816D0: nop

    // 0x800816D4: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x800816D8: slti        $at, $t3, 0xCF
    ctx->r1 = SIGNED(ctx->r11) < 0XCF ? 1 : 0;
    // 0x800816DC: bne         $at, $zero, L_80081488
    if (ctx->r1 != 0) {
        // 0x800816E0: sw          $t3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r11;
            goto L_80081488;
    }
    // 0x800816E0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_800816E4:
    // 0x800816E4: b           L_800816EC
    // 0x800816E8: nop

        goto L_800816EC;
    // 0x800816E8: nop

L_800816EC:
    // 0x800816EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800816F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800816F4: jr          $ra
    // 0x800816F8: nop

    return;
    // 0x800816F8: nop

;}
