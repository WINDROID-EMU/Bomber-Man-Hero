#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8033BCDC_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BCDC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8033BCE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BCE4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8033BCE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033BCEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BCF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BCF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BCF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BCFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BD00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BD04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BD08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BD0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BD10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BD14: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8033BD18: lh          $t1, 0x42($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X42);
    // 0x8033BD1C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033BD20: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8033BD24: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8033BD28: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x8033BD2C: nop

    // 0x8033BD30: sh          $t4, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r12;
    // 0x8033BD34: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x8033BD38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033BD3C: beq         $t5, $at, L_8033BFB8
    if (ctx->r13 == ctx->r1) {
        // 0x8033BD40: nop
    
            goto L_8033BFB8;
    }
    // 0x8033BD40: nop

    // 0x8033BD44: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8033BD48: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BD4C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BD50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BD54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BD58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BD5C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BD60: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BD64: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BD68: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033BD6C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033BD70: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033BD74: lh          $t0, 0xA8($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XA8);
    // 0x8033BD78: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033BD7C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8033BD80: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8033BD84: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033BD88: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8033BD8C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033BD90: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033BD94: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8033BD98: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8033BD9C: nop

    // 0x8033BDA0: lwc1        $f12, 0x40($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X40);
    // 0x8033BDA4: jal         0x80015744
    // 0x8033BDA8: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_0;
    // 0x8033BDA8: nop

    after_0:
    // 0x8033BDAC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8033BDB0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BDB4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033BDB8: lwc1        $f9, -0x2590($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X2590);
    // 0x8033BDBC: lwc1        $f8, -0x258C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X258C);
    // 0x8033BDC0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033BDC4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033BDC8: jal         0x80036570
    // 0x8033BDCC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8033BDCC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8033BDD0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033BDD4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8033BDD8: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x8033BDDC: lwc1        $f16, 0xDC($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0XDC);
    // 0x8033BDE0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8033BDE4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8033BDE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033BDEC: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8033BDF0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x8033BDF4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BDF8: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033BDFC: lwc1        $f5, -0x2588($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2588);
    // 0x8033BE00: lwc1        $f4, -0x2584($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2584);
    // 0x8033BE04: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8033BE08: mul.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x8033BE0C: jal         0x80034970
    // 0x8033BE10: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x8033BE10: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x8033BE14: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033BE18: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033BE1C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8033BE20: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x8033BE24: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8033BE28: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8033BE2C: lwc1        $f12, 0xD4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x8033BE30: jal         0x80015538
    // 0x8033BE34: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033BE34: nop

    after_3:
    // 0x8033BE38: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8033BE3C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BE40: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033BE44: lwc1        $f5, -0x2580($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2580);
    // 0x8033BE48: lwc1        $f4, -0x257C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X257C);
    // 0x8033BE4C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8033BE50: mul.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x8033BE54: jal         0x80034970
    // 0x8033BE58: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x8033BE58: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_4:
    // 0x8033BE5C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8033BE60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033BE64: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033BE68: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033BE6C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033BE70: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8033BE74: swc1        $f16, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f16.u32l;
    // 0x8033BE78: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BE7C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033BE80: lwc1        $f7, -0x2578($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2578);
    // 0x8033BE84: lwc1        $f6, -0x2574($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2574);
    // 0x8033BE88: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x8033BE8C: mul.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x8033BE90: jal         0x80036570
    // 0x8033BE94: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x8033BE94: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_5:
    // 0x8033BE98: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033BE9C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033BEA0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8033BEA4: swc1        $f16, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f16.u32l;
    // 0x8033BEA8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033BEAC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033BEB0: lwc1        $f4, 0x50($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X50);
    // 0x8033BEB4: lwc1        $f18, 0x24($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X24);
    // 0x8033BEB8: nop

    // 0x8033BEBC: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x8033BEC0: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
    // 0x8033BEC4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033BEC8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033BECC: lwc1        $f8, 0x58($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X58);
    // 0x8033BED0: lwc1        $f10, 0x2C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033BED4: nop

    // 0x8033BED8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033BEDC: swc1        $f16, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f16.u32l;
    // 0x8033BEE0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033BEE4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033BEE8: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x8033BEEC: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x8033BEF0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033BEF4: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8033BEF8: lwc1        $f10, 0x54($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X54);
    // 0x8033BEFC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8033BF00: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8033BF04: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8033BF08: swc1        $f16, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f16.u32l;
    // 0x8033BF0C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8033BF10: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033BF14: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033BF18: nop

    // 0x8033BF1C: swc1        $f18, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f18.u32l;
    // 0x8033BF20: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8033BF24: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033BF28: lwc1        $f4, 0x18($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X18);
    // 0x8033BF2C: nop

    // 0x8033BF30: swc1        $f4, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f4.u32l;
    // 0x8033BF34: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8033BF38: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033BF3C: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x8033BF40: nop

    // 0x8033BF44: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x8033BF48: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8033BF4C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033BF50: lwc1        $f10, 0x40($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X40);
    // 0x8033BF54: nop

    // 0x8033BF58: swc1        $f10, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f10.u32l;
    // 0x8033BF5C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033BF60: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033BF64: nop

    // 0x8033BF68: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x8033BF6C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033BF70: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033BF74: nop

    // 0x8033BF78: swc1        $f16, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f16.u32l;
    // 0x8033BF7C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8033BF80: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033BF84: lwc1        $f18, 0xD4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x8033BF88: nop

    // 0x8033BF8C: swc1        $f18, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f18.u32l;
    // 0x8033BF90: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8033BF94: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033BF98: lwc1        $f4, 0xD8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XD8);
    // 0x8033BF9C: nop

    // 0x8033BFA0: swc1        $f4, 0xD8($t4)
    MEM_W(0XD8, ctx->r12) = ctx->f4.u32l;
    // 0x8033BFA4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8033BFA8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033BFAC: lwc1        $f6, 0xDC($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0XDC);
    // 0x8033BFB0: nop

    // 0x8033BFB4: swc1        $f6, 0xDC($t6)
    MEM_W(0XDC, ctx->r14) = ctx->f6.u32l;
L_8033BFB8:
    // 0x8033BFB8: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x8033BFBC: nop

    // 0x8033BFC0: sltu        $t9, $zero, $t8
    ctx->r25 = 0 < ctx->r24 ? 1 : 0;
    // 0x8033BFC4: nor         $t1, $t9, $zero
    ctx->r9 = ~(ctx->r25 | 0);
    // 0x8033BFC8: beq         $t1, $zero, L_8033BFD8
    if (ctx->r9 == 0) {
        // 0x8033BFCC: nop
    
            goto L_8033BFD8;
    }
    // 0x8033BFCC: nop

    // 0x8033BFD0: b           L_8033BFDC
    // 0x8033BFD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8033BFDC;
    // 0x8033BFD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8033BFD8:
    // 0x8033BFD8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8033BFDC:
    // 0x8033BFDC: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8033BFE0: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8033BFE4: b           L_8033BFF4
    // 0x8033BFE8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8033BFF4;
    // 0x8033BFE8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8033BFEC: b           L_8033BFF4
    // 0x8033BFF0: nop

        goto L_8033BFF4;
    // 0x8033BFF0: nop

L_8033BFF4:
    // 0x8033BFF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BFF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033BFFC: jr          $ra
    // 0x8033C000: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8033C000: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8033C56C_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C56C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033C570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033C574: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C578: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C57C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C580: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C584: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C588: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C58C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C590: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C594: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C598: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C59C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033C5A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033C5A4: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8033C5A8: nop

    // 0x8033C5AC: bne         $t0, $zero, L_8033C5E4
    if (ctx->r8 != 0) {
        // 0x8033C5B0: nop
    
            goto L_8033C5E4;
    }
    // 0x8033C5B0: nop

    // 0x8033C5B4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C5B8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033C5BC: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8033C5C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C5C4: nop

    // 0x8033C5C8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x8033C5CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033C5D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033C5D4: jal         0x80069E60
    // 0x8033C5D8: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x8033C5D8: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x8033C5DC: b           L_8033C618
    // 0x8033C5E0: nop

        goto L_8033C618;
    // 0x8033C5E0: nop

L_8033C5E4:
    // 0x8033C5E4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033C5E8: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x8033C5EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C5F0: bne         $t4, $at, L_8033C610
    if (ctx->r12 != ctx->r1) {
        // 0x8033C5F4: nop
    
            goto L_8033C610;
    }
    // 0x8033C5F4: nop

    // 0x8033C5F8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C5FC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8033C600: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x8033C604: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C608: b           L_8033C618
    // 0x8033C60C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_8033C618;
    // 0x8033C60C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033C610:
    // 0x8033C610: b           L_8033C620
    // 0x8033C614: nop

        goto L_8033C620;
    // 0x8033C614: nop

L_8033C618:
    // 0x8033C618: b           L_8033C620
    // 0x8033C61C: nop

        goto L_8033C620;
    // 0x8033C61C: nop

L_8033C620:
    // 0x8033C620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033C624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033C628: jr          $ra
    // 0x8033C62C: nop

    return;
    // 0x8033C62C: nop

;}
RECOMP_FUNC void func_8033D534_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D534: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033D538: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033D53C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033D540: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033D544: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D548: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D54C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D550: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D558: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D55C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D560: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D564: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D568: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D56C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033D570: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033D574: nop

    // 0x8033D578: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033D57C: nop

    // 0x8033D580: bne         $t1, $zero, L_8033D5EC
    if (ctx->r9 != 0) {
        // 0x8033D584: nop
    
            goto L_8033D5EC;
    }
    // 0x8033D584: nop

    // 0x8033D588: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033D58C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033D590: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033D594: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8033D598: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033D59C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033D5A0: nop

    // 0x8033D5A4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033D5A8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8033D5AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033D5B0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033D5B4: nop

    // 0x8033D5B8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033D5BC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8033D5C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033D5C4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033D5C8: nop

    // 0x8033D5CC: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x8033D5D0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033D5D4: nop

    // 0x8033D5D8: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x8033D5DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D5E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D5E4: jal         0x800272E8
    // 0x8033D5E8: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x8033D5E8: nop

    after_0:
L_8033D5EC:
    // 0x8033D5EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D5F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D5F4: jal         0x8002A8B4
    // 0x8033D5F8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x8033D5F8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_1:
    // 0x8033D5FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D600: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D604: jal         0x8002A9A4
    // 0x8033D608: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A9A4(rdram, ctx);
        goto after_2;
    // 0x8033D608: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_2:
    // 0x8033D60C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033D610: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033D614: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x8033D618: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033D61C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8033D620: jal         0x80015538
    // 0x8033D624: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033D624: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x8033D628: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8033D62C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033D630: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8033D634: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033D638: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033D63C: nop

    // 0x8033D640: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8033D644: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8033D648: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8033D64C: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x8033D650: nop

    // 0x8033D654: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033D658: nop

    // 0x8033D65C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8033D660: nop

    // 0x8033D664: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8033D668: jal         0x80034970
    // 0x8033D66C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x8033D66C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_4:
    // 0x8033D670: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033D674: nop

    // 0x8033D678: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8033D67C: nop

    // 0x8033D680: bc1f        L_8033D6AC
    if (!c1cs) {
        // 0x8033D684: nop
    
            goto L_8033D6AC;
    }
    // 0x8033D684: nop

    // 0x8033D688: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033D68C: nop

    // 0x8033D690: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8033D694: nop

    // 0x8033D698: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8033D69C: jal         0x80034970
    // 0x8033D6A0: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x8033D6A0: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x8033D6A4: b           L_8033D6CC
    // 0x8033D6A8: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
        goto L_8033D6CC;
    // 0x8033D6A8: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
L_8033D6AC:
    // 0x8033D6AC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033D6B0: nop

    // 0x8033D6B4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033D6B8: nop

    // 0x8033D6BC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8033D6C0: jal         0x80034970
    // 0x8033D6C4: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x8033D6C4: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_6:
    // 0x8033D6C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8033D6CC:
    // 0x8033D6CC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D6D0: lwc1        $f10, -0x2548($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2548);
    // 0x8033D6D4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D6D8: mul.s       $f16, $f20, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8033D6DC: lwc1        $f5, -0x2540($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X2540);
    // 0x8033D6E0: lwc1        $f4, -0x253C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X253C);
    // 0x8033D6E4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033D6E8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8033D6EC: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8033D6F0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8033D6F4: swc1        $f8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f8.u32l;
    // 0x8033D6F8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033D6FC: nop

    // 0x8033D700: lwc1        $f20, 0xC($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0XC);
    // 0x8033D704: nop

    // 0x8033D708: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x8033D70C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033D710: nop

    // 0x8033D714: swc1        $f20, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f20.u32l;
    // 0x8033D718: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033D71C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8033D720: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033D724: lwc1        $f10, 0x44($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8033D728: nop

    // 0x8033D72C: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x8033D730: nop

    // 0x8033D734: bc1f        L_8033D7D4
    if (!c1cs) {
        // 0x8033D738: nop
    
            goto L_8033D7D4;
    }
    // 0x8033D738: nop

    // 0x8033D73C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033D740: nop

    // 0x8033D744: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8033D748: nop

    // 0x8033D74C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8033D750: jal         0x80034970
    // 0x8033D754: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x8033D754: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_7:
    // 0x8033D758: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033D75C: nop

    // 0x8033D760: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8033D764: nop

    // 0x8033D768: bc1f        L_8033D794
    if (!c1cs) {
        // 0x8033D76C: nop
    
            goto L_8033D794;
    }
    // 0x8033D76C: nop

    // 0x8033D770: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033D774: nop

    // 0x8033D778: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8033D77C: nop

    // 0x8033D780: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8033D784: jal         0x80034970
    // 0x8033D788: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x8033D788: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_8:
    // 0x8033D78C: b           L_8033D7B4
    // 0x8033D790: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
        goto L_8033D7B4;
    // 0x8033D790: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
L_8033D794:
    // 0x8033D794: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033D798: nop

    // 0x8033D79C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033D7A0: nop

    // 0x8033D7A4: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8033D7A8: jal         0x80034970
    // 0x8033D7AC: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    sinf_game(rdram, ctx);
        goto after_9;
    // 0x8033D7AC: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_9:
    // 0x8033D7B0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8033D7B4:
    // 0x8033D7B4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8033D7B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033D7BC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033D7C0: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8033D7C4: lwc1        $f10, 0x44($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X44);
    // 0x8033D7C8: nop

    // 0x8033D7CC: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8033D7D0: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
L_8033D7D4:
    // 0x8033D7D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D7D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D7DC: jal         0x80029C40
    // 0x8033D7E0: nop

    func_80029C40(rdram, ctx);
        goto after_10;
    // 0x8033D7E0: nop

    after_10:
    // 0x8033D7E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D7E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D7EC: jal         0x80029D04
    // 0x8033D7F0: nop

    func_80029D04(rdram, ctx);
        goto after_11;
    // 0x8033D7F0: nop

    after_11:
    // 0x8033D7F4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x8033D7F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033D7FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033D800: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D804: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D808: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8033D80C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8033D810: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033D814: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033D818: jal         0x800295C0
    // 0x8033D81C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_12;
    // 0x8033D81C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x8033D820: beq         $v0, $zero, L_8033D840
    if (ctx->r2 == 0) {
        // 0x8033D824: nop
    
            goto L_8033D840;
    }
    // 0x8033D824: nop

    // 0x8033D828: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033D82C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8033D830: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033D834: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033D838: nop

    // 0x8033D83C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_8033D840:
    // 0x8033D840: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033D844: nop

    // 0x8033D848: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x8033D84C: nop

    // 0x8033D850: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8033D854: sh          $t5, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r13;
    // 0x8033D858: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033D85C: nop

    // 0x8033D860: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x8033D864: nop

    // 0x8033D868: bgtz        $t7, L_8033D888
    if (SIGNED(ctx->r15) > 0) {
        // 0x8033D86C: nop
    
            goto L_8033D888;
    }
    // 0x8033D86C: nop

    // 0x8033D870: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033D874: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8033D878: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033D87C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033D880: nop

    // 0x8033D884: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033D888:
    // 0x8033D888: b           L_8033D890
    // 0x8033D88C: nop

        goto L_8033D890;
    // 0x8033D88C: nop

L_8033D890:
    // 0x8033D890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033D894: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033D898: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033D89C: jr          $ra
    // 0x8033D8A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033D8A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033B180_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B180: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B188: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B18C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B190: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B194: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B19C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B1A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B1A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B1A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B1AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B1B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B1B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B1B8: nop

    // 0x8033B1BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B1C0: nop

    // 0x8033B1C4: bne         $t1, $zero, L_8033B218
    if (ctx->r9 != 0) {
        // 0x8033B1C8: nop
    
            goto L_8033B218;
    }
    // 0x8033B1C8: nop

    // 0x8033B1CC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B1D0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8033B1D4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033B1D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033B1DC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B1E0: nop

    // 0x8033B1E4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033B1E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033B1EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B1F0: nop

    // 0x8033B1F4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033B1F8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033B1FC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8033B200: sh          $t6, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r14;
    // 0x8033B204: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8033B208: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033B20C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B210: nop

    // 0x8033B214: swc1        $f8, 0xDC($t8)
    MEM_W(0XDC, ctx->r24) = ctx->f8.u32l;
L_8033B218:
    // 0x8033B218: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B21C: nop

    // 0x8033B220: lh          $t1, 0xAA($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XAA);
    // 0x8033B224: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x8033B228: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8033B22C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033B230: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8033B234: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8033B238: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033B23C: jal         0x80015538
    // 0x8033B240: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8033B240: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x8033B244: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8033B248: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B24C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8033B250: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033B254: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033B258: nop

    // 0x8033B25C: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8033B260: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8033B264: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8033B268: sh          $t4, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r12;
    // 0x8033B26C: nop

    // 0x8033B270: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B274: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x8033B278: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x8033B27C: nop

    // 0x8033B280: bne         $t7, $at, L_8033B338
    if (ctx->r15 != ctx->r1) {
        // 0x8033B284: nop
    
            goto L_8033B338;
    }
    // 0x8033B284: nop

    // 0x8033B288: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B28C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033B290: lbu         $t0, 0x132($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X132);
    // 0x8033B294: nop

    // 0x8033B298: bne         $t0, $at, L_8033B2E4
    if (ctx->r8 != ctx->r1) {
        // 0x8033B29C: nop
    
            goto L_8033B2E4;
    }
    // 0x8033B29C: nop

    // 0x8033B2A0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2A4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8033B2A8: sb          $t9, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r25;
    // 0x8033B2AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033B2B4: lh          $t3, 0xAE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAE);
    // 0x8033B2B8: nop

    // 0x8033B2BC: bne         $t3, $at, L_8033B2DC
    if (ctx->r11 != ctx->r1) {
        // 0x8033B2C0: nop
    
            goto L_8033B2DC;
    }
    // 0x8033B2C0: nop

    // 0x8033B2C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2C8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8033B2CC: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8033B2D0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2D4: nop

    // 0x8033B2D8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033B2DC:
    // 0x8033B2DC: b           L_8033B338
    // 0x8033B2E0: nop

        goto L_8033B338;
    // 0x8033B2E0: nop

L_8033B2E4:
    // 0x8033B2E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2E8: nop

    // 0x8033B2EC: lh          $t8, 0xB4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB4);
    // 0x8033B2F0: nop

    // 0x8033B2F4: bne         $t8, $zero, L_8033B32C
    if (ctx->r24 != 0) {
        // 0x8033B2F8: nop
    
            goto L_8033B32C;
    }
    // 0x8033B2F8: nop

    // 0x8033B2FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B300: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B308: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x8033B30C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033B310: jal         0x800175F0
    // 0x8033B314: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033B314: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8033B318: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8033B31C: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x8033B320: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033B324: jal         0x8033D1DC
    // 0x8033B328: nop

    func_8033D1DC_unk_bin_47(rdram, ctx);
        goto after_2;
    // 0x8033B328: nop

    after_2:
L_8033B32C:
    // 0x8033B32C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B330: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033B334: sb          $t0, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r8;
L_8033B338:
    // 0x8033B338: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B33C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033B340: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x8033B344: nop

    // 0x8033B348: bne         $t2, $at, L_8033B40C
    if (ctx->r10 != ctx->r1) {
        // 0x8033B34C: nop
    
            goto L_8033B40C;
    }
    // 0x8033B34C: nop

    // 0x8033B350: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B354: nop

    // 0x8033B358: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x8033B35C: nop

    // 0x8033B360: slti        $at, $t4, 0x19
    ctx->r1 = SIGNED(ctx->r12) < 0X19 ? 1 : 0;
    // 0x8033B364: beq         $at, $zero, L_8033B384
    if (ctx->r1 == 0) {
        // 0x8033B368: nop
    
            goto L_8033B384;
    }
    // 0x8033B368: nop

    // 0x8033B36C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B370: nop

    // 0x8033B374: lh          $t6, 0xAC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAC);
    // 0x8033B378: nop

    // 0x8033B37C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8033B380: sh          $t7, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r15;
L_8033B384:
    // 0x8033B384: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B388: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8033B38C: lh          $t0, 0xA6($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA6);
    // 0x8033B390: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033B394: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8033B398: jal         0x80015538
    // 0x8033B39C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033B39C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x8033B3A0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8033B3A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B3A8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8033B3AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033B3B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033B3B4: nop

    // 0x8033B3B8: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8033B3BC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8033B3C0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8033B3C4: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x8033B3C8: nop

    // 0x8033B3CC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B3D0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033B3D4: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8033B3D8: lwc1        $f17, -0x25C0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X25C0);
    // 0x8033B3DC: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8033B3E0: lwc1        $f16, -0x25BC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X25BC);
    // 0x8033B3E4: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8033B3E8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8033B3EC: jal         0x80036570
    // 0x8033B3F0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x8033B3F0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_4:
    // 0x8033B3F4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033B3F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033B3FC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B400: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8033B404: b           L_8033B440
    // 0x8033B408: swc1        $f6, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f6.u32l;
        goto L_8033B440;
    // 0x8033B408: swc1        $f6, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f6.u32l;
L_8033B40C:
    // 0x8033B40C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033B410: nop

    // 0x8033B414: lh          $t5, 0xAC($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XAC);
    // 0x8033B418: nop

    // 0x8033B41C: slti        $at, $t5, 0x7
    ctx->r1 = SIGNED(ctx->r13) < 0X7 ? 1 : 0;
    // 0x8033B420: bne         $at, $zero, L_8033B440
    if (ctx->r1 != 0) {
        // 0x8033B424: nop
    
            goto L_8033B440;
    }
    // 0x8033B424: nop

    // 0x8033B428: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B42C: nop

    // 0x8033B430: lh          $t0, 0xAC($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XAC);
    // 0x8033B434: nop

    // 0x8033B438: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x8033B43C: sh          $t9, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r25;
L_8033B440:
    // 0x8033B440: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B444: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033B448: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x8033B44C: lwc1        $f17, -0x25B8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X25B8);
    // 0x8033B450: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8033B454: lwc1        $f16, -0x25B4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X25B4);
    // 0x8033B458: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8033B45C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8033B460: jal         0x80034970
    // 0x8033B464: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x8033B464: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_5:
    // 0x8033B468: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033B46C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033B470: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B474: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8033B478: swc1        $f6, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f6.u32l;
    // 0x8033B47C: jal         0x8033B97C
    // 0x8033B480: nop

    func_8033B97C_unk_bin_47(rdram, ctx);
        goto after_6;
    // 0x8033B480: nop

    after_6:
    // 0x8033B484: b           L_8033B48C
    // 0x8033B488: nop

        goto L_8033B48C;
    // 0x8033B488: nop

L_8033B48C:
    // 0x8033B48C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B490: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B494: jr          $ra
    // 0x8033B498: nop

    return;
    // 0x8033B498: nop

;}
RECOMP_FUNC void func_8033A844_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A844: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033A848: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A84C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8033A850: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033A854: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8033A858: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x8033A85C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A860: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A864: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A868: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A86C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A870: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A874: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033A878: lh          $t8, 0x4200($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4200);
    // 0x8033A87C: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x8033A880: blez        $t8, L_8033ABCC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8033A884: nop
    
            goto L_8033ABCC;
    }
    // 0x8033A884: nop

L_8033A888:
    // 0x8033A888: lh          $t9, 0x3A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X3A);
    // 0x8033A88C: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x8033A890: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A894: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A898: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A89C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A8A0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A8A4: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8033A8A8: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8033A8AC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033A8B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A8B4: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x8033A8B8: nop

    // 0x8033A8BC: sh          $t4, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r12;
    // 0x8033A8C0: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x8033A8C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A8C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A8CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A8D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A8D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A8D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A8DC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033A8E0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033A8E4: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x8033A8E8: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x8033A8EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A8F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033A8F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033A8F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033A8FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033A900: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033A904: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033A908: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033A90C: lh          $t1, 0x3A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3A);
    // 0x8033A910: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x8033A914: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8033A918: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8033A91C: lh          $t2, 0x2A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2A);
    // 0x8033A920: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A924: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8033A928: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033A92C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A930: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033A934: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033A938: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8033A93C: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x8033A940: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033A944: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033A948: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x8033A94C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033A950: lh          $t7, 0xE6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE6);
    // 0x8033A954: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033A958: addu        $t1, $t9, $t6
    ctx->r9 = ADD32(ctx->r25, ctx->r14);
    // 0x8033A95C: sh          $t7, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r15;
    // 0x8033A960: lh          $t2, 0x3A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X3A);
    // 0x8033A964: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x8033A968: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x8033A96C: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033A970: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A974: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033A978: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033A97C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A980: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A984: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033A988: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A98C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A990: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x8033A994: lh          $t5, 0xB0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB0);
    // 0x8033A998: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x8033A99C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A9A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A9A4: addu        $t1, $t7, $t3
    ctx->r9 = ADD32(ctx->r15, ctx->r11);
    // 0x8033A9A8: subu        $t9, $t5, $t8
    ctx->r25 = SUB32(ctx->r13, ctx->r24);
    // 0x8033A9AC: sh          $t9, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r25;
    // 0x8033A9B0: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x8033A9B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A9B8: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x8033A9BC: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033A9C0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A9C4: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033A9C8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A9CC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A9D0: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x8033A9D4: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x8033A9D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A9DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033A9E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033A9E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A9E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033A9EC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A9F0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033A9F4: sh          $zero, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = 0;
    // 0x8033A9F8: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x8033A9FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033AA00: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8033AA04: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x8033AA08: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033AA0C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x8033AA10: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033AA14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AA18: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033AA1C: swc1        $f4, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f4.u32l;
    // 0x8033AA20: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x8033AA24: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033AA28: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8033AA2C: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8033AA30: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033AA34: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8033AA38: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033AA3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AA40: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033AA44: swc1        $f6, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f6.u32l;
    // 0x8033AA48: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8033AA4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033AA50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033AA54: jal         0x80019448
    // 0x8033AA58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x8033AA58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8033AA5C: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x8033AA60: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x8033AA64: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8033AA68: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8033AA6C: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x8033AA70: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033AA74: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033AA78: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033AA7C: lwc1        $f8, -0x25F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X25F4);
    // 0x8033AA80: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033AA84: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8033AA88: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033AA8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AA90: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033AA94: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033AA98: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033AA9C: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033AAA0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033AAA4: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x8033AAA8: swc1        $f8, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f8.u32l;
    // 0x8033AAAC: lwc1        $f20, 0xC($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0XC);
    // 0x8033AAB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AAB4: swc1        $f20, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f20.u32l;
    // 0x8033AAB8: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x8033AABC: nop

    // 0x8033AAC0: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8033AAC4: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x8033AAC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033AACC: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x8033AAD0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033AAD4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033AAD8: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x8033AADC: lh          $t7, 0x3A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3A);
    // 0x8033AAE0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033AAE4: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x8033AAE8: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8033AAEC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033AAF0: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x8033AAF4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033AAF8: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x8033AAFC: lh          $t9, 0x4204($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4204);
    // 0x8033AB00: nop

    // 0x8033AB04: beq         $t9, $zero, L_8033AB54
    if (ctx->r25 == 0) {
        // 0x8033AB08: nop
    
            goto L_8033AB54;
    }
    // 0x8033AB08: nop

    // 0x8033AB0C: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x8033AB10: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033AB14: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033AB18: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033AB1C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033AB20: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033AB24: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033AB28: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033AB2C: addu        $t4, $t2, $t0
    ctx->r12 = ADD32(ctx->r10, ctx->r8);
    // 0x8033AB30: lh          $t5, 0xAA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAA);
    // 0x8033AB34: nop

    // 0x8033AB38: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x8033AB3C: subu        $t8, $t8, $t5
    ctx->r24 = SUB32(ctx->r24, ctx->r13);
    // 0x8033AB40: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8033AB44: sh          $t8, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = ctx->r24;
    // 0x8033AB48: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8033AB4C: jal         0x8001BB34
    // 0x8033AB50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033AB50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_8033AB54:
    // 0x8033AB54: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8033AB58: nop

    // 0x8033AB5C: bne         $t6, $zero, L_8033AB8C
    if (ctx->r14 != 0) {
        // 0x8033AB60: nop
    
            goto L_8033AB8C;
    }
    // 0x8033AB60: nop

    // 0x8033AB64: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x8033AB68: lh          $t7, 0x3A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3A);
    // 0x8033AB6C: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x8033AB70: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x8033AB74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033AB78: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x8033AB7C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033AB80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AB84: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033AB88: sh          $t7, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r15;
L_8033AB8C:
    // 0x8033AB8C: lh          $t8, 0x3A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3A);
    // 0x8033AB90: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x8033AB94: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x8033AB98: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x8033AB9C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033ABA0: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x8033ABA4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033ABA8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033ABAC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8033ABB0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8033ABB4: lh          $t6, 0x4200($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4200);
    // 0x8033ABB8: sll         $t0, $t2, 16
    ctx->r8 = S32(ctx->r10 << 16);
    // 0x8033ABBC: sra         $t5, $t0, 16
    ctx->r13 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8033ABC0: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8033ABC4: bne         $at, $zero, L_8033A888
    if (ctx->r1 != 0) {
        // 0x8033ABC8: sh          $t2, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r10;
            goto L_8033A888;
    }
    // 0x8033ABC8: sh          $t2, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r10;
L_8033ABCC:
    // 0x8033ABCC: lh          $v0, 0x2A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2A);
    // 0x8033ABD0: b           L_8033ABE0
    // 0x8033ABD4: nop

        goto L_8033ABE0;
    // 0x8033ABD4: nop

    // 0x8033ABD8: b           L_8033ABE0
    // 0x8033ABDC: nop

        goto L_8033ABE0;
    // 0x8033ABDC: nop

L_8033ABE0:
    // 0x8033ABE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ABE4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8033ABE8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8033ABEC: jr          $ra
    // 0x8033ABF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033ABF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033C374_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C374: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033C378: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033C37C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033C380: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033C384: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033C388: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033C38C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033C390: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033C394: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033C398: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033C39C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033C3A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033C3A4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033C3A8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033C3AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033C3B0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033C3B4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033C3B8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033C3BC: addiu       $a1, $a1, 0x3D84
    ctx->r5 = ADD32(ctx->r5, 0X3D84);
    // 0x8033C3C0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033C3C4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033C3C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033C3CC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033C3D0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033C3D4: jal         0x80027464
    // 0x8033C3D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033C3D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033C3DC: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x8033C3E0: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C3E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033C3E8: beq         $t1, $at, L_8033C550
    if (ctx->r9 == ctx->r1) {
        // 0x8033C3EC: nop
    
            goto L_8033C550;
    }
    // 0x8033C3EC: nop

    // 0x8033C3F0: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C3F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C3F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033C3FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033C400: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033C404: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033C408: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033C40C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033C410: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033C414: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x8033C418: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C41C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C420: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033C424: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033C428: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C42C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033C430: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C434: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033C438: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x8033C43C: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C440: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C444: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033C448: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C44C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033C450: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C454: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033C458: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033C45C: sh          $zero, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = 0;
    // 0x8033C460: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C464: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C468: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8033C46C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033C470: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033C474: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033C478: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033C47C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033C480: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033C484: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C488: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033C48C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033C490: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033C494: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033C498: lwc1        $f4, -0x255C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X255C);
    // 0x8033C49C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033C4A0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033C4A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C4A8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033C4AC: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x8033C4B0: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C4B4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033C4B8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8033C4BC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033C4C0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033C4C4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033C4C8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033C4CC: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033C4D0: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x8033C4D4: lwc1        $f20, 0xC($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0XC);
    // 0x8033C4D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C4DC: swc1        $f20, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f20.u32l;
    // 0x8033C4E0: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C4E4: nop

    // 0x8033C4E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033C4EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C4F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033C4F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C4F8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033C4FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033C500: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x8033C504: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C508: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033C50C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033C510: jal         0x80019448
    // 0x8033C514: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x8033C514: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8033C518: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8033C51C: addiu       $t6, $t6, 0x7494
    ctx->r14 = ADD32(ctx->r14, 0X7494);
    // 0x8033C520: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C524: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8033C528: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C52C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033C530: jal         0x8001C0EC
    // 0x8033C534: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x8033C534: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    after_2:
    // 0x8033C538: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8033C53C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8033C540: addiu       $a3, $a3, 0x74CC
    ctx->r7 = ADD32(ctx->r7, 0X74CC);
    // 0x8033C544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C548: jal         0x8001ABF4
    // 0x8033C54C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8033C54C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_8033C550:
    // 0x8033C550: b           L_8033C558
    // 0x8033C554: nop

        goto L_8033C558;
    // 0x8033C554: nop

L_8033C558:
    // 0x8033C558: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033C55C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033C560: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033C564: jr          $ra
    // 0x8033C568: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033C568: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033B758_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B758: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033B75C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B760: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033B764: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B768: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B76C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B770: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B774: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B778: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B77C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B780: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B784: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B788: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B78C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033B790: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B794: nop

    // 0x8033B798: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B79C: nop

    // 0x8033B7A0: bne         $t1, $zero, L_8033B7D4
    if (ctx->r9 != 0) {
        // 0x8033B7A4: nop
    
            goto L_8033B7D4;
    }
    // 0x8033B7A4: nop

    // 0x8033B7A8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B7AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033B7B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033B7B4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8033B7B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033B7BC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B7C0: nop

    // 0x8033B7C4: swc1        $f4, 0xDC($t4)
    MEM_W(0XDC, ctx->r12) = ctx->f4.u32l;
    // 0x8033B7C8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B7CC: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x8033B7D0: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
L_8033B7D4:
    // 0x8033B7D4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B7D8: nop

    // 0x8033B7DC: lh          $s0, 0x108($t7)
    ctx->r16 = MEM_H(ctx->r15, 0X108);
    // 0x8033B7E0: nop

    // 0x8033B7E4: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x8033B7E8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8033B7EC: sltiu       $t9, $s0, 0x1
    ctx->r25 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033B7F0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8033B7F4: sh          $s0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r16;
    // 0x8033B7F8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B7FC: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x8033B800: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x8033B804: nop

    // 0x8033B808: blez        $t1, L_8033B868
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8033B80C: nop
    
            goto L_8033B868;
    }
    // 0x8033B80C: nop

L_8033B810:
    // 0x8033B810: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x8033B814: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B818: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8033B81C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8033B820: lh          $t6, 0xE8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE8);
    // 0x8033B824: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033B828: beq         $t6, $at, L_8033B840
    if (ctx->r14 == ctx->r1) {
        // 0x8033B82C: sh          $t6, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r14;
            goto L_8033B840;
    }
    // 0x8033B82C: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
    // 0x8033B830: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8033B834: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x8033B838: jal         0x8001BB34
    // 0x8033B83C: nop

    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033B83C: nop

    after_0:
L_8033B840:
    // 0x8033B840: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x8033B844: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B848: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8033B84C: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
    // 0x8033B850: lh          $t3, 0xB0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB0);
    // 0x8033B854: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8033B858: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8033B85C: slt         $at, $t0, $t3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8033B860: bne         $at, $zero, L_8033B810
    if (ctx->r1 != 0) {
        // 0x8033B864: nop
    
            goto L_8033B810;
    }
    // 0x8033B864: nop

L_8033B868:
    // 0x8033B868: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B86C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B870: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x8033B874: jal         0x8001BB34
    // 0x8033B878: nop

    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033B878: nop

    after_1:
    // 0x8033B87C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B880: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033B884: lh          $t4, 0x108($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X108);
    // 0x8033B888: nop

    // 0x8033B88C: bne         $t4, $at, L_8033B95C
    if (ctx->r12 != ctx->r1) {
        // 0x8033B890: nop
    
            goto L_8033B95C;
    }
    // 0x8033B890: nop

    // 0x8033B894: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B898: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033B89C: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x8033B8A0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B8A4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8033B8A8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8033B8AC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B8B0: nop

    // 0x8033B8B4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x8033B8B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B8BC: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x8033B8C0: lh          $t0, 0xB0($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XB0);
    // 0x8033B8C4: nop

    // 0x8033B8C8: blez        $t0, L_8033B94C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8033B8CC: nop
    
            goto L_8033B94C;
    }
    // 0x8033B8CC: nop

L_8033B8D0:
    // 0x8033B8D0: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8033B8D4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B8D8: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x8033B8DC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8033B8E0: lh          $t6, 0xE8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE8);
    // 0x8033B8E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033B8E8: beq         $t6, $at, L_8033B924
    if (ctx->r14 == ctx->r1) {
        // 0x8033B8EC: sh          $t6, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r14;
            goto L_8033B924;
    }
    // 0x8033B8EC: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
    // 0x8033B8F0: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8033B8F4: jal         0x8001BB34
    // 0x8033B8F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x8033B8F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033B8FC: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x8033B900: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B904: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033B908: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033B90C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033B910: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033B914: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033B918: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033B91C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8033B920: sh          $t7, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r15;
L_8033B924:
    // 0x8033B924: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x8033B928: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B92C: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x8033B930: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
    // 0x8033B934: lh          $t5, 0xB0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB0);
    // 0x8033B938: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x8033B93C: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8033B940: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8033B944: bne         $at, $zero, L_8033B8D0
    if (ctx->r1 != 0) {
        // 0x8033B948: nop
    
            goto L_8033B8D0;
    }
    // 0x8033B948: nop

L_8033B94C:
    // 0x8033B94C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B950: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B954: jal         0x8001BB34
    // 0x8033B958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x8033B958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_8033B95C:
    // 0x8033B95C: jal         0x8033B97C
    // 0x8033B960: nop

    func_8033B97C_unk_bin_47(rdram, ctx);
        goto after_4;
    // 0x8033B960: nop

    after_4:
    // 0x8033B964: b           L_8033B96C
    // 0x8033B968: nop

        goto L_8033B96C;
    // 0x8033B968: nop

L_8033B96C:
    // 0x8033B96C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B970: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033B974: jr          $ra
    // 0x8033B978: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033B978: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033CF10_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CF10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033CF14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033CF18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CF1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CF20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CF24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CF28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CF2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CF30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CF34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CF38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033CF3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CF40: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033CF44: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CF48: nop

    // 0x8033CF4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033CF50: nop

    // 0x8033CF54: bne         $t1, $zero, L_8033CFB8
    if (ctx->r9 != 0) {
        // 0x8033CF58: nop
    
            goto L_8033CFB8;
    }
    // 0x8033CF58: nop

    // 0x8033CF5C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CF60: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033CF64: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033CF68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033CF6C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CF70: nop

    // 0x8033CF74: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033CF78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033CF7C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CF80: nop

    // 0x8033CF84: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033CF88: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CF8C: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x8033CF90: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x8033CF94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CF98: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8033CF9C: addiu       $t8, $t8, 0x7494
    ctx->r24 = ADD32(ctx->r24, 0X7494);
    // 0x8033CFA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CFA4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033CFA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CFAC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033CFB0: jal         0x8001C0EC
    // 0x8033CFB4: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033CFB4: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    after_0:
L_8033CFB8:
    // 0x8033CFB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CFBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CFC0: jal         0x80029C40
    // 0x8033CFC4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x8033CFC4: nop

    after_1:
    // 0x8033CFC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CFCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CFD0: jal         0x80029D04
    // 0x8033CFD4: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x8033CFD4: nop

    after_2:
    // 0x8033CFD8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CFDC: nop

    // 0x8033CFE0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8033CFE4: nop

    // 0x8033CFE8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8033CFEC: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x8033CFF0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CFF4: nop

    // 0x8033CFF8: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x8033CFFC: nop

    // 0x8033D000: slti        $at, $t3, 0xC8
    ctx->r1 = SIGNED(ctx->r11) < 0XC8 ? 1 : 0;
    // 0x8033D004: bne         $at, $zero, L_8033D0F8
    if (ctx->r1 != 0) {
        // 0x8033D008: nop
    
            goto L_8033D0F8;
    }
    // 0x8033D008: nop

    // 0x8033D00C: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8033D010: jal         0x80026E58
    // 0x8033D014: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_3;
    // 0x8033D014: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_3:
    // 0x8033D018: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8033D01C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8033D020: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8033D024: jal         0x80026E58
    // 0x8033D028: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_4;
    // 0x8033D028: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_4:
    // 0x8033D02C: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8033D030: lh          $t4, 0x22($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X22);
    // 0x8033D034: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D038: beq         $t4, $at, L_8033D0EC
    if (ctx->r12 == ctx->r1) {
        // 0x8033D03C: nop
    
            goto L_8033D0EC;
    }
    // 0x8033D03C: nop

    // 0x8033D040: lh          $t5, 0x20($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X20);
    // 0x8033D044: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D048: beq         $t5, $at, L_8033D0EC
    if (ctx->r13 == ctx->r1) {
        // 0x8033D04C: nop
    
            goto L_8033D0EC;
    }
    // 0x8033D04C: nop

    // 0x8033D050: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8033D054: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D058: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D05C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D060: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D064: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D068: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D06C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D070: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D074: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8033D078: lh          $t1, 0x20($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X20);
    // 0x8033D07C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033D080: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x8033D084: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x8033D088: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033D08C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x8033D090: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033D094: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8033D098: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x8033D09C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8033D0A0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8033D0A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033D0A8: lh          $t5, 0xAE($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAE);
    // 0x8033D0AC: nop

    // 0x8033D0B0: bne         $t5, $at, L_8033D0D4
    if (ctx->r13 != ctx->r1) {
        // 0x8033D0B4: nop
    
            goto L_8033D0D4;
    }
    // 0x8033D0B4: nop

    // 0x8033D0B8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8033D0BC: nop

    // 0x8033D0C0: sh          $zero, 0xAE($t6)
    MEM_H(0XAE, ctx->r14) = 0;
    // 0x8033D0C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033D0C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033D0CC: b           L_8033D0EC
    // 0x8033D0D0: sh          $t7, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = ctx->r15;
        goto L_8033D0EC;
    // 0x8033D0D0: sh          $t7, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = ctx->r15;
L_8033D0D4:
    // 0x8033D0D4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8033D0D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033D0DC: sh          $t0, 0xAE($t1)
    MEM_H(0XAE, ctx->r9) = ctx->r8;
    // 0x8033D0E0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033D0E4: nop

    // 0x8033D0E8: sh          $zero, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = 0;
L_8033D0EC:
    // 0x8033D0EC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D0F0: nop

    // 0x8033D0F4: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
L_8033D0F8:
    // 0x8033D0F8: b           L_8033D100
    // 0x8033D0FC: nop

        goto L_8033D100;
    // 0x8033D0FC: nop

L_8033D100:
    // 0x8033D100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D104: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033D108: jr          $ra
    // 0x8033D10C: nop

    return;
    // 0x8033D10C: nop

;}
RECOMP_FUNC void func_8033D930_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D930: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033D934: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D938: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033D93C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D940: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D944: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D948: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D94C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D950: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D954: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D958: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D95C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033D960: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x8033D964: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D968: bne         $t8, $at, L_8033D9E0
    if (ctx->r24 != ctx->r1) {
        // 0x8033D96C: nop
    
            goto L_8033D9E0;
    }
    // 0x8033D96C: nop

    // 0x8033D970: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033D974: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8033D978: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033D97C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033D980: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D984: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033D988: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D98C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033D990: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x8033D994: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8033D998: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033D99C: beq         $s0, $at, L_8033D9B8
    if (ctx->r16 == ctx->r1) {
        // 0x8033D9A0: nop
    
            goto L_8033D9B8;
    }
    // 0x8033D9A0: nop

    // 0x8033D9A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033D9A8: beq         $s0, $at, L_8033D9C8
    if (ctx->r16 == ctx->r1) {
        // 0x8033D9AC: nop
    
            goto L_8033D9C8;
    }
    // 0x8033D9AC: nop

    // 0x8033D9B0: b           L_8033D9D8
    // 0x8033D9B4: nop

        goto L_8033D9D8;
    // 0x8033D9B4: nop

L_8033D9B8:
    // 0x8033D9B8: jal         0x8033D534
    // 0x8033D9BC: nop

    func_8033D534_unk_bin_47(rdram, ctx);
        goto after_0;
    // 0x8033D9BC: nop

    after_0:
    // 0x8033D9C0: b           L_8033D9E0
    // 0x8033D9C4: nop

        goto L_8033D9E0;
    // 0x8033D9C4: nop

L_8033D9C8:
    // 0x8033D9C8: jal         0x8033D8A4
    // 0x8033D9CC: nop

    func_8033D8A4_unk_bin_47(rdram, ctx);
        goto after_1;
    // 0x8033D9CC: nop

    after_1:
    // 0x8033D9D0: b           L_8033D9E0
    // 0x8033D9D4: nop

        goto L_8033D9E0;
    // 0x8033D9D4: nop

L_8033D9D8:
    // 0x8033D9D8: b           L_8033D9E0
    // 0x8033D9DC: nop

        goto L_8033D9E0;
    // 0x8033D9DC: nop

L_8033D9E0:
    // 0x8033D9E0: b           L_8033D9E8
    // 0x8033D9E4: nop

        goto L_8033D9E8;
    // 0x8033D9E4: nop

L_8033D9E8:
    // 0x8033D9E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D9EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033D9F0: jr          $ra
    // 0x8033D9F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033D9F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033D9F8: nop

    // 0x8033D9FC: nop

;}
RECOMP_FUNC void func_8033BC24_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BC24: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033BC28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BC2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033BC30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BC34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BC38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BC3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BC40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BC44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BC48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BC4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BC50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BC54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BC58: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033BC5C: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x8033BC60: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033BC64: nop

    // 0x8033BC68: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x8033BC6C: nop

    // 0x8033BC70: blez        $t1, L_8033BCB8
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8033BC74: sh          $t1, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r9;
            goto L_8033BCB8;
    }
    // 0x8033BC74: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
L_8033BC78:
    // 0x8033BC78: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8033BC7C: jal         0x8033BCDC
    // 0x8033BC80: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_8033BCDC_unk_bin_47(rdram, ctx);
        goto after_0;
    // 0x8033BC80: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_0:
    // 0x8033BC84: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x8033BC88: lh          $t3, 0x28($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X28);
    // 0x8033BC8C: sra         $t2, $s0, 16
    ctx->r10 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8033BC90: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8033BC94: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8033BC98: sh          $t4, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r12;
    // 0x8033BC9C: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x8033BCA0: nop

    // 0x8033BCA4: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8033BCA8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8033BCAC: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8033BCB0: bgtz        $t8, L_8033BC78
    if (SIGNED(ctx->r24) > 0) {
        // 0x8033BCB4: sh          $t6, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r14;
            goto L_8033BC78;
    }
    // 0x8033BCB4: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
L_8033BCB8:
    // 0x8033BCB8: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x8033BCBC: b           L_8033BCCC
    // 0x8033BCC0: nop

        goto L_8033BCCC;
    // 0x8033BCC0: nop

    // 0x8033BCC4: b           L_8033BCCC
    // 0x8033BCC8: nop

        goto L_8033BCCC;
    // 0x8033BCC8: nop

L_8033BCCC:
    // 0x8033BCCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BCD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033BCD4: jr          $ra
    // 0x8033BCD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033BCD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033D110_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D110: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033D114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D118: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033D11C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D120: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D124: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D128: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D12C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D130: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D134: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D138: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D13C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033D140: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x8033D144: nop

    // 0x8033D148: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8033D14C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8033D150: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033D154: beq         $s0, $at, L_8033D17C
    if (ctx->r16 == ctx->r1) {
        // 0x8033D158: nop
    
            goto L_8033D17C;
    }
    // 0x8033D158: nop

    // 0x8033D15C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033D160: beq         $s0, $at, L_8033D18C
    if (ctx->r16 == ctx->r1) {
        // 0x8033D164: nop
    
            goto L_8033D18C;
    }
    // 0x8033D164: nop

    // 0x8033D168: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033D16C: beq         $s0, $at, L_8033D19C
    if (ctx->r16 == ctx->r1) {
        // 0x8033D170: nop
    
            goto L_8033D19C;
    }
    // 0x8033D170: nop

    // 0x8033D174: b           L_8033D1AC
    // 0x8033D178: nop

        goto L_8033D1AC;
    // 0x8033D178: nop

L_8033D17C:
    // 0x8033D17C: jal         0x8033CF10
    // 0x8033D180: nop

    func_8033CF10_unk_bin_47(rdram, ctx);
        goto after_0;
    // 0x8033D180: nop

    after_0:
    // 0x8033D184: b           L_8033D1B4
    // 0x8033D188: nop

        goto L_8033D1B4;
    // 0x8033D188: nop

L_8033D18C:
    // 0x8033D18C: jal         0x8033C630
    // 0x8033D190: nop

    func_8033C630_unk_bin_47(rdram, ctx);
        goto after_1;
    // 0x8033D190: nop

    after_1:
    // 0x8033D194: b           L_8033D1B4
    // 0x8033D198: nop

        goto L_8033D1B4;
    // 0x8033D198: nop

L_8033D19C:
    // 0x8033D19C: jal         0x8033C8B0
    // 0x8033D1A0: nop

    func_8033C8B0_unk_bin_47(rdram, ctx);
        goto after_2;
    // 0x8033D1A0: nop

    after_2:
    // 0x8033D1A4: b           L_8033D1B4
    // 0x8033D1A8: nop

        goto L_8033D1B4;
    // 0x8033D1A8: nop

L_8033D1AC:
    // 0x8033D1AC: b           L_8033D1B4
    // 0x8033D1B0: nop

        goto L_8033D1B4;
    // 0x8033D1B0: nop

L_8033D1B4:
    // 0x8033D1B4: b           L_8033D1BC
    // 0x8033D1B8: nop

        goto L_8033D1BC;
    // 0x8033D1B8: nop

L_8033D1BC:
    // 0x8033D1BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D1C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033D1C4: jr          $ra
    // 0x8033D1C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033D1C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033C220_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033C224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033C228: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C22C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C230: jal         0x8002B0E4
    // 0x8033C234: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033C234: nop

    after_0:
    // 0x8033C238: b           L_8033C240
    // 0x8033C23C: nop

        goto L_8033C240;
    // 0x8033C23C: nop

L_8033C240:
    // 0x8033C240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033C244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033C248: jr          $ra
    // 0x8033C24C: nop

    return;
    // 0x8033C24C: nop

;}
RECOMP_FUNC void func_8033AD48_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AD48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033AD4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033AD50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AD54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AD58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AD5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AD60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AD64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AD68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AD6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AD70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AD74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AD78: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033AD7C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AD80: nop

    // 0x8033AD84: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033AD88: nop

    // 0x8033AD8C: bne         $t1, $zero, L_8033ADCC
    if (ctx->r9 != 0) {
        // 0x8033AD90: nop
    
            goto L_8033ADCC;
    }
    // 0x8033AD90: nop

    // 0x8033AD94: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AD98: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x8033AD9C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033ADA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033ADA4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ADA8: nop

    // 0x8033ADAC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033ADB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033ADB4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ADB8: nop

    // 0x8033ADBC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033ADC0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ADC4: nop

    // 0x8033ADC8: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_8033ADCC:
    // 0x8033ADCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ADD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ADD4: jal         0x80029C40
    // 0x8033ADD8: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x8033ADD8: nop

    after_0:
    // 0x8033ADDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ADE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ADE4: jal         0x80029D04
    // 0x8033ADE8: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x8033ADE8: nop

    after_1:
    // 0x8033ADEC: b           L_8033ADF4
    // 0x8033ADF0: nop

        goto L_8033ADF4;
    // 0x8033ADF0: nop

L_8033ADF4:
    // 0x8033ADF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033ADF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033ADFC: jr          $ra
    // 0x8033AE00: nop

    return;
    // 0x8033AE00: nop

;}
RECOMP_FUNC void func_8033D4A8_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D4A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D4AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D4B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D4B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D4B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D4BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D4C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D4C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D4C8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033D4CC: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x8033D4D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033D4D4: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8033D4D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D4DC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033D4E0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D4E4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033D4E8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D4EC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033D4F0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033D4F4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8033D4F8: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x8033D4FC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033D500: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x8033D504: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D508: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033D50C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033D510: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033D514: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033D518: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033D51C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033D520: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033D524: jr          $ra
    // 0x8033D528: nop

    return;
    // 0x8033D528: nop

    // 0x8033D52C: jr          $ra
    // 0x8033D530: nop

    return;
    // 0x8033D530: nop

;}
RECOMP_FUNC void func_8033ABF4_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033ABF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033ABF8: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8033ABFC: nop

    // 0x8033AC00: bne         $t6, $zero, L_8033AC60
    if (ctx->r14 != 0) {
        // 0x8033AC04: nop
    
            goto L_8033AC60;
    }
    // 0x8033AC04: nop

    // 0x8033AC08: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033AC0C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x8033AC10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AC14: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033AC18: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033AC1C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033AC20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033AC24: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033AC28: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033AC2C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x8033AC30: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033AC34: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033AC38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AC3C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033AC40: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033AC44: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033AC48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033AC4C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033AC50: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033AC54: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8033AC58: b           L_8033AD10
    // 0x8033AC5C: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
        goto L_8033AD10;
    // 0x8033AC5C: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_8033AC60:
    // 0x8033AC60: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033AC64: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x8033AC68: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033AC6C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033AC70: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033AC74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033AC78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033AC7C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033AC80: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033AC84: lh          $t4, 0x4204($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4204);
    // 0x8033AC88: nop

    // 0x8033AC8C: blez        $t4, L_8033AC9C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8033AC90: nop
    
            goto L_8033AC9C;
    }
    // 0x8033AC90: nop

    // 0x8033AC94: jr          $ra
    // 0x8033AC98: nop

    return;
    // 0x8033AC98: nop

L_8033AC9C:
    // 0x8033AC9C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8033ACA0: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x8033ACA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033ACA8: bne         $t5, $at, L_8033AD08
    if (ctx->r13 != ctx->r1) {
        // 0x8033ACAC: nop
    
            goto L_8033AD08;
    }
    // 0x8033ACAC: nop

    // 0x8033ACB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033ACB4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033ACB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033ACBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033ACC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ACC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033ACC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ACCC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033ACD0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033ACD4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x8033ACD8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033ACDC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033ACE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033ACE4: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8033ACE8: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8033ACEC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033ACF0: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8033ACF4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033ACF8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033ACFC: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x8033AD00: b           L_8033AD10
    // 0x8033AD04: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
        goto L_8033AD10;
    // 0x8033AD04: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
L_8033AD08:
    // 0x8033AD08: jr          $ra
    // 0x8033AD0C: nop

    return;
    // 0x8033AD0C: nop

L_8033AD10:
    // 0x8033AD10: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033AD14: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x8033AD18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AD1C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033AD20: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033AD24: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033AD28: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033AD2C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033AD30: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033AD34: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033AD38: jr          $ra
    // 0x8033AD3C: nop

    return;
    // 0x8033AD3C: nop

    // 0x8033AD40: jr          $ra
    // 0x8033AD44: nop

    return;
    // 0x8033AD44: nop

;}
RECOMP_FUNC void func_8033C8B0_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C8B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033C8B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033C8B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033C8BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C8C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C8C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C8C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C8CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C8D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C8D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C8D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C8DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C8E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C8E4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033C8E8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033C8EC: nop

    // 0x8033C8F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033C8F4: nop

    // 0x8033C8F8: bne         $t1, $zero, L_8033CC38
    if (ctx->r9 != 0) {
        // 0x8033C8FC: nop
    
            goto L_8033CC38;
    }
    // 0x8033C8FC: nop

    // 0x8033C900: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033C904: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033C908: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033C90C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033C910: nop

    // 0x8033C914: sh          $zero, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = 0;
    // 0x8033C918: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033C91C: nop

    // 0x8033C920: sh          $zero, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = 0;
    // 0x8033C924: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033C928: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x8033C92C: sh          $t6, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = ctx->r14;
    // 0x8033C930: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033C934: addiu       $t8, $zero, 0x190
    ctx->r24 = ADD32(0, 0X190);
    // 0x8033C938: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x8033C93C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C940: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C944: jal         0x80029C40
    // 0x8033C948: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x8033C948: nop

    after_0:
    // 0x8033C94C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C950: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C954: jal         0x80029D04
    // 0x8033C958: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x8033C958: nop

    after_1:
    // 0x8033C95C: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8033C960: jal         0x80026E58
    // 0x8033C964: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_2;
    // 0x8033C964: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_2:
    // 0x8033C968: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8033C96C: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x8033C970: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033C974: beq         $t0, $at, L_8033CB40
    if (ctx->r8 == ctx->r1) {
        // 0x8033C978: nop
    
            goto L_8033CB40;
    }
    // 0x8033C978: nop

    // 0x8033C97C: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x8033C980: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033C984: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033C988: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033C98C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033C990: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033C994: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033C998: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033C99C: lh          $t3, 0x4204($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4204);
    // 0x8033C9A0: nop

    // 0x8033C9A4: bne         $t3, $zero, L_8033CA4C
    if (ctx->r11 != 0) {
        // 0x8033C9A8: nop
    
            goto L_8033CA4C;
    }
    // 0x8033C9A8: nop

    // 0x8033C9AC: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x8033C9B0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033C9B4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033C9B8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033C9BC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033C9C0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033C9C4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033C9C8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033C9CC: lh          $t6, 0x41F4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X41F4);
    // 0x8033C9D0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8033C9D4: beq         $t6, $at, L_8033CA4C
    if (ctx->r14 == ctx->r1) {
        // 0x8033C9D8: nop
    
            goto L_8033CA4C;
    }
    // 0x8033C9D8: nop

    // 0x8033C9DC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8033C9E0: beq         $t6, $at, L_8033CA4C
    if (ctx->r14 == ctx->r1) {
        // 0x8033C9E4: nop
    
            goto L_8033CA4C;
    }
    // 0x8033C9E4: nop

    // 0x8033C9E8: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x8033C9EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C9F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033C9F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033C9F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033C9FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033CA00: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033CA04: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033CA08: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x8033CA0C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8033CA10: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x8033CA14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CA18: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033CA1C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033CA20: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033CA24: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033CA28: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033CA2C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033CA30: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033CA34: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033CA38: nop

    // 0x8033CA3C: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x8033CA40: nop

    // 0x8033CA44: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033CA48: sh          $t4, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r12;
L_8033CA4C:
    // 0x8033CA4C: lh          $a1, 0x32($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X32);
    // 0x8033CA50: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8033CA54: jal         0x80026E58
    // 0x8033CA58: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_3;
    // 0x8033CA58: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_3:
    // 0x8033CA5C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8033CA60: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x8033CA64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033CA68: beq         $t5, $at, L_8033CB40
    if (ctx->r13 == ctx->r1) {
        // 0x8033CA6C: nop
    
            goto L_8033CB40;
    }
    // 0x8033CA6C: nop

    // 0x8033CA70: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x8033CA74: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033CA78: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8033CA7C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033CA80: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033CA84: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033CA88: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033CA8C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CA90: lh          $t7, 0x4204($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4204);
    // 0x8033CA94: nop

    // 0x8033CA98: bne         $t7, $zero, L_8033CB40
    if (ctx->r15 != 0) {
        // 0x8033CA9C: nop
    
            goto L_8033CB40;
    }
    // 0x8033CA9C: nop

    // 0x8033CAA0: lh          $t9, 0x32($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X32);
    // 0x8033CAA4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033CAA8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033CAAC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033CAB0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033CAB4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033CAB8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033CABC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033CAC0: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x8033CAC4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8033CAC8: beq         $t1, $at, L_8033CB40
    if (ctx->r9 == ctx->r1) {
        // 0x8033CACC: nop
    
            goto L_8033CB40;
    }
    // 0x8033CACC: nop

    // 0x8033CAD0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8033CAD4: beq         $t1, $at, L_8033CB40
    if (ctx->r9 == ctx->r1) {
        // 0x8033CAD8: nop
    
            goto L_8033CB40;
    }
    // 0x8033CAD8: nop

    // 0x8033CADC: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x8033CAE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CAE4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8033CAE8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033CAEC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033CAF0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033CAF4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033CAF8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033CAFC: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x8033CB00: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x8033CB04: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x8033CB08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CB0C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033CB10: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033CB14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033CB18: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033CB1C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033CB20: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033CB24: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033CB28: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033CB2C: nop

    // 0x8033CB30: lh          $t7, 0xAA($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XAA);
    // 0x8033CB34: nop

    // 0x8033CB38: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x8033CB3C: sh          $t9, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r25;
L_8033CB40:
    // 0x8033CB40: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033CB44: nop

    // 0x8033CB48: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x8033CB4C: nop

    // 0x8033CB50: blez        $t1, L_8033CBD8
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8033CB54: nop
    
            goto L_8033CBD8;
    }
    // 0x8033CB54: nop

    // 0x8033CB58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CB5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CB60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CB64: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x8033CB68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033CB6C: jal         0x800175F0
    // 0x8033CB70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x8033CB70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x8033CB74: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033CB78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CB7C: lh          $t3, 0xAA($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XAA);
    // 0x8033CB80: nop

    // 0x8033CB84: beq         $t3, $at, L_8033CBA8
    if (ctx->r11 == ctx->r1) {
        // 0x8033CB88: nop
    
            goto L_8033CBA8;
    }
    // 0x8033CB88: nop

    // 0x8033CB8C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033CB90: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x8033CB94: sh          $t2, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r10;
    // 0x8033CB98: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033CB9C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8033CBA0: b           L_8033CBD0
    // 0x8033CBA4: sb          $t6, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r14;
        goto L_8033CBD0;
    // 0x8033CBA4: sb          $t6, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r14;
L_8033CBA8:
    // 0x8033CBA8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033CBAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CBB0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8033CBB4: addiu       $t8, $t8, 0x7494
    ctx->r24 = ADD32(ctx->r24, 0X7494);
    // 0x8033CBB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CBBC: lh          $a2, 0xAC($t9)
    ctx->r6 = MEM_H(ctx->r25, 0XAC);
    // 0x8033CBC0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033CBC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CBC8: jal         0x8001C0EC
    // 0x8033CBCC: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x8033CBCC: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    after_5:
L_8033CBD0:
    // 0x8033CBD0: b           L_8033CC1C
    // 0x8033CBD4: nop

        goto L_8033CC1C;
    // 0x8033CBD4: nop

L_8033CBD8:
    // 0x8033CBD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CBDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CBE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CBE4: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x8033CBE8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033CBEC: jal         0x800175F0
    // 0x8033CBF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x8033CBF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x8033CBF4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033CBF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CBFC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8033CC00: addiu       $t1, $t1, 0x7494
    ctx->r9 = ADD32(ctx->r9, 0X7494);
    // 0x8033CC04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CC08: lh          $a2, 0xAC($t0)
    ctx->r6 = MEM_H(ctx->r8, 0XAC);
    // 0x8033CC0C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033CC10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CC14: jal         0x8001C0EC
    // 0x8033CC18: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x8033CC18: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    after_7:
L_8033CC1C:
    // 0x8033CC1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CC20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CC24: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8033CC28: addiu       $a3, $a3, 0x74E8
    ctx->r7 = ADD32(ctx->r7, 0X74E8);
    // 0x8033CC2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CC30: jal         0x8001ABF4
    // 0x8033CC34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x8033CC34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_8033CC38:
    // 0x8033CC38: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033CC3C: nop

    // 0x8033CC40: lh          $t3, 0xAA($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XAA);
    // 0x8033CC44: nop

    // 0x8033CC48: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x8033CC4C: beq         $at, $zero, L_8033CE40
    if (ctx->r1 == 0) {
        // 0x8033CC50: nop
    
            goto L_8033CE40;
    }
    // 0x8033CC50: nop

    // 0x8033CC54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CC58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CC5C: jal         0x8001B44C
    // 0x8033CC60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_9;
    // 0x8033CC60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8033CC64: beq         $v0, $zero, L_8033CD70
    if (ctx->r2 == 0) {
        // 0x8033CC68: nop
    
            goto L_8033CD70;
    }
    // 0x8033CC68: nop

    // 0x8033CC6C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033CC70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CC74: lh          $t5, 0xAC($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAC);
    // 0x8033CC78: nop

    // 0x8033CC7C: bne         $t5, $at, L_8033CCE4
    if (ctx->r13 != ctx->r1) {
        // 0x8033CC80: nop
    
            goto L_8033CCE4;
    }
    // 0x8033CC80: nop

    // 0x8033CC84: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033CC88: nop

    // 0x8033CC8C: lh          $t7, 0xAE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAE);
    // 0x8033CC90: nop

    // 0x8033CC94: bgtz        $t7, L_8033CCDC
    if (SIGNED(ctx->r15) > 0) {
        // 0x8033CC98: nop
    
            goto L_8033CCDC;
    }
    // 0x8033CC98: nop

    // 0x8033CC9C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033CCA0: nop

    // 0x8033CCA4: lh          $t8, 0xAC($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XAC);
    // 0x8033CCA8: nop

    // 0x8033CCAC: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x8033CCB0: sh          $t0, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r8;
    // 0x8033CCB4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033CCB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CCBC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8033CCC0: addiu       $t4, $t4, 0x7494
    ctx->r12 = ADD32(ctx->r12, 0X7494);
    // 0x8033CCC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CCC8: lh          $a2, 0xAC($t1)
    ctx->r6 = MEM_H(ctx->r9, 0XAC);
    // 0x8033CCCC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8033CCD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CCD4: jal         0x8001C0EC
    // 0x8033CCD8: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x8033CCD8: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    after_10:
L_8033CCDC:
    // 0x8033CCDC: b           L_8033CD24
    // 0x8033CCE0: nop

        goto L_8033CD24;
    // 0x8033CCE0: nop

L_8033CCE4:
    // 0x8033CCE4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033CCE8: nop

    // 0x8033CCEC: lh          $t2, 0xAC($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XAC);
    // 0x8033CCF0: nop

    // 0x8033CCF4: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x8033CCF8: sh          $t5, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r13;
    // 0x8033CCFC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CD04: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8033CD08: addiu       $t7, $t7, 0x7494
    ctx->r15 = ADD32(ctx->r15, 0X7494);
    // 0x8033CD0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CD10: lh          $a2, 0xAC($t6)
    ctx->r6 = MEM_H(ctx->r14, 0XAC);
    // 0x8033CD14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033CD18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CD1C: jal         0x8001C0EC
    // 0x8033CD20: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    func_8001C0EC(rdram, ctx);
        goto after_11;
    // 0x8033CD20: addiu       $a3, $zero, 0x19B
    ctx->r7 = ADD32(0, 0X19B);
    after_11:
L_8033CD24:
    // 0x8033CD24: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033CD2C: lh          $t0, 0xAC($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XAC);
    // 0x8033CD30: nop

    // 0x8033CD34: bne         $t0, $at, L_8033CD48
    if (ctx->r8 != ctx->r1) {
        // 0x8033CD38: nop
    
            goto L_8033CD48;
    }
    // 0x8033CD38: nop

    // 0x8033CD3C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD40: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8033CD44: sb          $t9, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r25;
L_8033CD48:
    // 0x8033CD48: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CD50: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x8033CD54: nop

    // 0x8033CD58: bne         $t2, $at, L_8033CD70
    if (ctx->r10 != ctx->r1) {
        // 0x8033CD5C: nop
    
            goto L_8033CD70;
    }
    // 0x8033CD5C: nop

    // 0x8033CD60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CD64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CD68: jal         0x8001BB34
    // 0x8033CD6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_12;
    // 0x8033CD6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
L_8033CD70:
    // 0x8033CD70: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD74: nop

    // 0x8033CD78: lh          $t3, 0xAE($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XAE);
    // 0x8033CD7C: nop

    // 0x8033CD80: addiu       $t6, $t3, -0x1
    ctx->r14 = ADD32(ctx->r11, -0X1);
    // 0x8033CD84: sh          $t6, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = ctx->r14;
    // 0x8033CD88: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033CD8C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8033CD90: lh          $t8, 0xAE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAE);
    // 0x8033CD94: nop

    // 0x8033CD98: bne         $t8, $at, L_8033CDF8
    if (ctx->r24 != ctx->r1) {
        // 0x8033CD9C: nop
    
            goto L_8033CDF8;
    }
    // 0x8033CD9C: nop

    // 0x8033CDA0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033CDA4: nop

    // 0x8033CDA8: lh          $t9, 0x100($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X100);
    // 0x8033CDAC: nop

    // 0x8033CDB0: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x8033CDB4: bne         $at, $zero, L_8033CDE8
    if (ctx->r1 != 0) {
        // 0x8033CDB8: nop
    
            goto L_8033CDE8;
    }
    // 0x8033CDB8: nop

    // 0x8033CDBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CDC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CDC4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8033CDC8: addiu       $a3, $a3, 0x74CC
    ctx->r7 = ADD32(ctx->r7, 0X74CC);
    // 0x8033CDCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CDD0: jal         0x8001ABF4
    // 0x8033CDD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_13;
    // 0x8033CDD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x8033CDD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CDDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CDE0: jal         0x8001BB34
    // 0x8033CDE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_14;
    // 0x8033CDE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
L_8033CDE8:
    // 0x8033CDE8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033CDEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8033CDF0: b           L_8033CE38
    // 0x8033CDF4: sh          $t1, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r9;
        goto L_8033CE38;
    // 0x8033CDF4: sh          $t1, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r9;
L_8033CDF8:
    // 0x8033CDF8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033CDFC: nop

    // 0x8033CE00: lh          $t3, 0xAC($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAC);
    // 0x8033CE04: nop

    // 0x8033CE08: bne         $t3, $zero, L_8033CE38
    if (ctx->r11 != 0) {
        // 0x8033CE0C: nop
    
            goto L_8033CE38;
    }
    // 0x8033CE0C: nop

    // 0x8033CE10: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033CE14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CE18: lh          $s0, 0x108($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X108);
    // 0x8033CE1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CE20: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x8033CE24: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x8033CE28: sltiu       $t7, $s0, 0x1
    ctx->r15 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033CE2C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8033CE30: jal         0x8001BB34
    // 0x8033CE34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_15;
    // 0x8033CE34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_15:
L_8033CE38:
    // 0x8033CE38: b           L_8033CE68
    // 0x8033CE3C: nop

        goto L_8033CE68;
    // 0x8033CE3C: nop

L_8033CE40:
    // 0x8033CE40: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033CE44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CE48: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x8033CE4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CE50: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x8033CE54: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8033CE58: sltiu       $t9, $s0, 0x1
    ctx->r25 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033CE5C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8033CE60: jal         0x8001BB34
    // 0x8033CE64: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_16;
    // 0x8033CE64: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
L_8033CE68:
    // 0x8033CE68: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033CE6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033CE70: lbu         $t4, 0x132($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X132);
    // 0x8033CE74: nop

    // 0x8033CE78: bne         $t4, $at, L_8033CEF8
    if (ctx->r12 != ctx->r1) {
        // 0x8033CE7C: nop
    
            goto L_8033CEF8;
    }
    // 0x8033CE7C: nop

    // 0x8033CE80: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033CE84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CE88: lh          $t3, 0x108($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X108);
    // 0x8033CE8C: nop

    // 0x8033CE90: bne         $t3, $at, L_8033CEF8
    if (ctx->r11 != ctx->r1) {
        // 0x8033CE94: nop
    
            goto L_8033CEF8;
    }
    // 0x8033CE94: nop

    // 0x8033CE98: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033CE9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033CEA0: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x8033CEA4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033CEA8: nop

    // 0x8033CEAC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x8033CEB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CEB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CEB8: jal         0x8001BB34
    // 0x8033CEBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_17;
    // 0x8033CEBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x8033CEC0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033CEC4: nop

    // 0x8033CEC8: lh          $t0, 0x100($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X100);
    // 0x8033CECC: nop

    // 0x8033CED0: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x8033CED4: bne         $at, $zero, L_8033CEF8
    if (ctx->r1 != 0) {
        // 0x8033CED8: nop
    
            goto L_8033CEF8;
    }
    // 0x8033CED8: nop

    // 0x8033CEDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CEE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CEE4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8033CEE8: addiu       $a3, $a3, 0x74CC
    ctx->r7 = ADD32(ctx->r7, 0X74CC);
    // 0x8033CEEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CEF0: jal         0x8001ABF4
    // 0x8033CEF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_18;
    // 0x8033CEF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
L_8033CEF8:
    // 0x8033CEF8: b           L_8033CF00
    // 0x8033CEFC: nop

        goto L_8033CF00;
    // 0x8033CEFC: nop

L_8033CF00:
    // 0x8033CF00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033CF04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8033CF08: jr          $ra
    // 0x8033CF0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033CF0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033AE04_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AE04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033AE08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AE0C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033AE10: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8033AE14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AE18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AE1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AE20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AE24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AE28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AE2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AE30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AE34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AE38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AE3C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033AE40: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE44: nop

    // 0x8033AE48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033AE4C: nop

    // 0x8033AE50: bne         $t1, $zero, L_8033AEB0
    if (ctx->r9 != 0) {
        // 0x8033AE54: nop
    
            goto L_8033AEB0;
    }
    // 0x8033AE54: nop

    // 0x8033AE58: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE5C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x8033AE60: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033AE64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033AE68: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE6C: nop

    // 0x8033AE70: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033AE74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033AE78: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE7C: nop

    // 0x8033AE80: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033AE84: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE88: nop

    // 0x8033AE8C: sh          $zero, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = 0;
    // 0x8033AE90: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE94: nop

    // 0x8033AE98: sh          $zero, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = 0;
    // 0x8033AE9C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8033AEA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033AEA4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AEA8: nop

    // 0x8033AEAC: swc1        $f8, 0xDC($t8)
    MEM_W(0XDC, ctx->r24) = ctx->f8.u32l;
L_8033AEB0:
    // 0x8033AEB0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AEB4: nop

    // 0x8033AEB8: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x8033AEBC: nop

    // 0x8033AEC0: bne         $t0, $zero, L_8033AF04
    if (ctx->r8 != 0) {
        // 0x8033AEC4: nop
    
            goto L_8033AF04;
    }
    // 0x8033AEC4: nop

    // 0x8033AEC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AECC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AED0: jal         0x8002A560
    // 0x8033AED4: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A560(rdram, ctx);
        goto after_0;
    // 0x8033AED4: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_0:
    // 0x8033AED8: beq         $v0, $zero, L_8033AEF8
    if (ctx->r2 == 0) {
        // 0x8033AEDC: nop
    
            goto L_8033AEF8;
    }
    // 0x8033AEDC: nop

    // 0x8033AEE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AEE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AEE8: jal         0x8002A8B4
    // 0x8033AEEC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x8033AEEC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_1:
    // 0x8033AEF0: b           L_8033AF04
    // 0x8033AEF4: nop

        goto L_8033AF04;
    // 0x8033AEF4: nop

L_8033AEF8:
    // 0x8033AEF8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AEFC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033AF00: sb          $t1, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r9;
L_8033AF04:
    // 0x8033AF04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AF08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AF0C: jal         0x80028FA0
    // 0x8033AF10: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x8033AF10: nop

    after_2:
    // 0x8033AF14: beq         $v0, $zero, L_8033AF2C
    if (ctx->r2 == 0) {
        // 0x8033AF18: nop
    
            goto L_8033AF2C;
    }
    // 0x8033AF18: nop

    // 0x8033AF1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AF20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AF24: jal         0x80029B60
    // 0x8033AF28: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x8033AF28: nop

    after_3:
L_8033AF2C:
    // 0x8033AF2C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AF30: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8033AF34: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8033AF38: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033AF3C: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8033AF40: jal         0x80015538
    // 0x8033AF44: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033AF44: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_4:
    // 0x8033AF48: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8033AF4C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AF50: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8033AF54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033AF58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033AF5C: nop

    // 0x8033AF60: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8033AF64: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8033AF68: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8033AF6C: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x8033AF70: nop

    // 0x8033AF74: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AF78: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033AF7C: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x8033AF80: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033AF84: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8033AF88: jal         0x80015538
    // 0x8033AF8C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x8033AF8C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_5:
    // 0x8033AF90: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8033AF94: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AF98: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8033AF9C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033AFA0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033AFA4: nop

    // 0x8033AFA8: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8033AFAC: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x8033AFB0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8033AFB4: sh          $t1, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = ctx->r9;
    // 0x8033AFB8: nop

    // 0x8033AFBC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AFC0: nop

    // 0x8033AFC4: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x8033AFC8: nop

    // 0x8033AFCC: slti        $at, $t4, 0xB4
    ctx->r1 = SIGNED(ctx->r12) < 0XB4 ? 1 : 0;
    // 0x8033AFD0: bne         $at, $zero, L_8033AFF0
    if (ctx->r1 != 0) {
        // 0x8033AFD4: nop
    
            goto L_8033AFF0;
    }
    // 0x8033AFD4: nop

    // 0x8033AFD8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AFDC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8033AFE0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x8033AFE4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AFE8: nop

    // 0x8033AFEC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033AFF0:
    // 0x8033AFF0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AFF4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033AFF8: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x8033AFFC: lwc1        $f11, -0x25F0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X25F0);
    // 0x8033B000: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8033B004: lwc1        $f10, -0x25EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X25EC);
    // 0x8033B008: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8033B00C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8033B010: jal         0x80034970
    // 0x8033B014: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x8033B014: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_6:
    // 0x8033B018: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033B01C: nop

    // 0x8033B020: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8033B024: nop

    // 0x8033B028: bc1f        L_8033B060
    if (!c1cs) {
        // 0x8033B02C: nop
    
            goto L_8033B060;
    }
    // 0x8033B02C: nop

    // 0x8033B030: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B034: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033B038: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x8033B03C: lwc1        $f9, -0x25E8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X25E8);
    // 0x8033B040: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8033B044: lwc1        $f8, -0x25E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X25E4);
    // 0x8033B048: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8033B04C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033B050: jal         0x80034970
    // 0x8033B054: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x8033B054: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_7:
    // 0x8033B058: b           L_8033B08C
    // 0x8033B05C: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
        goto L_8033B08C;
    // 0x8033B05C: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
L_8033B060:
    // 0x8033B060: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B064: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033B068: lh          $t3, 0xAC($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAC);
    // 0x8033B06C: lwc1        $f5, -0x25E0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X25E0);
    // 0x8033B070: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8033B074: lwc1        $f4, -0x25DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X25DC);
    // 0x8033B078: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8033B07C: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8033B080: jal         0x80034970
    // 0x8033B084: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x8033B084: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_8:
    // 0x8033B088: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8033B08C:
    // 0x8033B08C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033B090: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033B094: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033B098: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x8033B09C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033B0A0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B0A4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033B0A8: swc1        $f18, 0xDC($t4)
    MEM_W(0XDC, ctx->r12) = ctx->f18.u32l;
    // 0x8033B0AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B0B0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033B0B4: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8033B0B8: lwc1        $f9, -0x25D8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X25D8);
    // 0x8033B0BC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8033B0C0: lwc1        $f8, -0x25D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X25D4);
    // 0x8033B0C4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8033B0C8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033B0CC: jal         0x80034970
    // 0x8033B0D0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_9;
    // 0x8033B0D0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_9:
    // 0x8033B0D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033B0D8: nop

    // 0x8033B0DC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8033B0E0: nop

    // 0x8033B0E4: bc1f        L_8033B11C
    if (!c1cs) {
        // 0x8033B0E8: nop
    
            goto L_8033B11C;
    }
    // 0x8033B0E8: nop

    // 0x8033B0EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B0F0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033B0F4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033B0F8: lwc1        $f7, -0x25D0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X25D0);
    // 0x8033B0FC: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8033B100: lwc1        $f6, -0x25CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X25CC);
    // 0x8033B104: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x8033B108: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8033B10C: jal         0x80034970
    // 0x8033B110: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_10;
    // 0x8033B110: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_10:
    // 0x8033B114: b           L_8033B148
    // 0x8033B118: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
        goto L_8033B148;
    // 0x8033B118: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
L_8033B11C:
    // 0x8033B11C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B120: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033B124: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8033B128: lwc1        $f19, -0x25C8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X25C8);
    // 0x8033B12C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8033B130: lwc1        $f18, -0x25C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X25C4);
    // 0x8033B134: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x8033B138: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8033B13C: jal         0x80034970
    // 0x8033B140: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_11;
    // 0x8033B140: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_11:
    // 0x8033B144: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8033B148:
    // 0x8033B148: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x8033B14C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033B150: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B154: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x8033B158: swc1        $f8, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f8.u32l;
    // 0x8033B15C: jal         0x8033B97C
    // 0x8033B160: nop

    func_8033B97C_unk_bin_47(rdram, ctx);
        goto after_12;
    // 0x8033B160: nop

    after_12:
    // 0x8033B164: b           L_8033B16C
    // 0x8033B168: nop

        goto L_8033B16C;
    // 0x8033B168: nop

L_8033B16C:
    // 0x8033B16C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B170: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8033B174: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8033B178: jr          $ra
    // 0x8033B17C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033B17C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033B97C_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B97C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033B984: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B988: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B98C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B990: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B994: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B998: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B99C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B9A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B9A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B9A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B9AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B9B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9B4: nop

    // 0x8033B9B8: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x8033B9BC: nop

    // 0x8033B9C0: swc1        $f4, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f4.u32l;
    // 0x8033B9C4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9C8: nop

    // 0x8033B9CC: lwc1        $f6, 0x40($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X40);
    // 0x8033B9D0: nop

    // 0x8033B9D4: swc1        $f6, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->f6.u32l;
    // 0x8033B9D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9DC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8033B9E0: lwc1        $f12, 0x40($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X40);
    // 0x8033B9E4: jal         0x80015538
    // 0x8033B9E8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8033B9E8: nop

    after_0:
    // 0x8033B9EC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9F0: nop

    // 0x8033B9F4: swc1        $f0, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f0.u32l;
    // 0x8033B9F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033BA00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033BA04: lwc1        $f8, 0x40($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X40);
    // 0x8033BA08: nop

    // 0x8033BA0C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8033BA10: nop

    // 0x8033BA14: bc1f        L_8033BA2C
    if (!c1cs) {
        // 0x8033BA18: nop
    
            goto L_8033BA2C;
    }
    // 0x8033BA18: nop

    // 0x8033BA1C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033BA20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA24: nop

    // 0x8033BA28: swc1        $f16, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f16.u32l;
L_8033BA2C:
    // 0x8033BA2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA30: nop

    // 0x8033BA34: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x8033BA38: jal         0x80015744
    // 0x8033BA3C: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_1;
    // 0x8033BA3C: nop

    after_1:
    // 0x8033BA40: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8033BA44: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA48: nop

    // 0x8033BA4C: lwc1        $f12, 0x40($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X40);
    // 0x8033BA50: jal         0x80015744
    // 0x8033BA54: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_2;
    // 0x8033BA54: nop

    after_2:
    // 0x8033BA58: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8033BA5C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033BA60: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033BA64: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033BA68: jal         0x80015538
    // 0x8033BA6C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033BA6C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_3:
    // 0x8033BA70: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA74: nop

    // 0x8033BA78: swc1        $f0, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f0.u32l;
    // 0x8033BA7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BA80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BA84: jal         0x8002A46C
    // 0x8033BA88: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x8033BA88: nop

    after_4:
    // 0x8033BA8C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA90: nop

    // 0x8033BA94: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x8033BA98: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BA9C: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033BAA0: lwc1        $f7, -0x25B0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X25B0);
    // 0x8033BAA4: lwc1        $f6, -0x25AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X25AC);
    // 0x8033BAA8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8033BAAC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8033BAB0: jal         0x80036570
    // 0x8033BAB4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x8033BAB4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_5:
    // 0x8033BAB8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BABC: nop

    // 0x8033BAC0: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x8033BAC4: lwc1        $f10, 0xDC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XDC);
    // 0x8033BAC8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8033BACC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8033BAD0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8033BAD4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8033BAD8: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8033BADC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8033BAE0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033BAE4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BAE8: lwc1        $f8, 0x3C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033BAEC: lwc1        $f19, -0x25A8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X25A8);
    // 0x8033BAF0: lwc1        $f18, -0x25A4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X25A4);
    // 0x8033BAF4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8033BAF8: mul.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8033BAFC: jal         0x80036570
    // 0x8033BB00: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_6;
    // 0x8033BB00: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_6:
    // 0x8033BB04: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033BB08: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033BB0C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8033BB10: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8033BB14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033BB18: lwc1        $f4, 0x58($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X58);
    // 0x8033BB1C: nop

    // 0x8033BB20: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BB24: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8033BB28: swc1        $f16, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f16.u32l;
    // 0x8033BB2C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BB30: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033BB34: lwc1        $f11, -0x25A0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X25A0);
    // 0x8033BB38: lwc1        $f10, -0x259C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X259C);
    // 0x8033BB3C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033BB40: mul.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8033BB44: jal         0x80034970
    // 0x8033BB48: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x8033BB48: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_7:
    // 0x8033BB4C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BB50: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033BB54: lh          $t6, 0xB0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB0);
    // 0x8033BB58: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8033BB5C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8033BB60: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033BB64: lwc1        $f18, 0x54($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X54);
    // 0x8033BB68: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033BB6C: mul.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8033BB70: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8033BB74: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
    // 0x8033BB78: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033BB7C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BB80: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033BB84: lwc1        $f7, -0x2598($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2598);
    // 0x8033BB88: lwc1        $f6, -0x2594($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2594);
    // 0x8033BB8C: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x8033BB90: mul.d       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f6.d);
    // 0x8033BB94: jal         0x80034970
    // 0x8033BB98: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x8033BB98: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_8:
    // 0x8033BB9C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8033BBA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033BBA4: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033BBA8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033BBAC: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8033BBB0: lwc1        $f6, 0x50($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X50);
    // 0x8033BBB4: mul.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8033BBB8: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8033BBBC: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x8033BBC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BBC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033BBC8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033BBCC: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x8033BBD0: jal         0x80015538
    // 0x8033BBD4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x8033BBD4: nop

    after_9:
    // 0x8033BBD8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033BBDC: nop

    // 0x8033BBE0: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x8033BBE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BBE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BBEC: jal         0x80029C40
    // 0x8033BBF0: nop

    func_80029C40(rdram, ctx);
        goto after_10;
    // 0x8033BBF0: nop

    after_10:
    // 0x8033BBF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BBF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BBFC: jal         0x80029D04
    // 0x8033BC00: nop

    func_80029D04(rdram, ctx);
        goto after_11;
    // 0x8033BC00: nop

    after_11:
    // 0x8033BC04: jal         0x8033BC24
    // 0x8033BC08: nop

    func_8033BC24_unk_bin_47(rdram, ctx);
        goto after_12;
    // 0x8033BC08: nop

    after_12:
    // 0x8033BC0C: b           L_8033BC14
    // 0x8033BC10: nop

        goto L_8033BC14;
    // 0x8033BC10: nop

L_8033BC14:
    // 0x8033BC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033BC18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033BC1C: jr          $ra
    // 0x8033BC20: nop

    return;
    // 0x8033BC20: nop

;}
RECOMP_FUNC void func_8033C250_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033C254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C258: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033C25C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C260: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C264: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C268: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C26C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C270: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C274: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C278: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C27C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C280: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C284: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033C288: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033C28C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033C290: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x8033C294: nop

    // 0x8033C298: beq         $t1, $at, L_8033C35C
    if (ctx->r9 == ctx->r1) {
        // 0x8033C29C: nop
    
            goto L_8033C35C;
    }
    // 0x8033C29C: nop

    // 0x8033C2A0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033C2A4: nop

    // 0x8033C2A8: lh          $t3, 0xB0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB0);
    // 0x8033C2AC: nop

    // 0x8033C2B0: blez        $t3, L_8033C33C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8033C2B4: nop
    
            goto L_8033C33C;
    }
    // 0x8033C2B4: nop

    // 0x8033C2B8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033C2BC: nop

    // 0x8033C2C0: lh          $t5, 0xB0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB0);
    // 0x8033C2C4: nop

    // 0x8033C2C8: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8033C2CC: sh          $t6, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = ctx->r14;
    // 0x8033C2D0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033C2D4: nop

    // 0x8033C2D8: lh          $t8, 0xB0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB0);
    // 0x8033C2DC: nop

    // 0x8033C2E0: slti        $at, $t8, 0x14
    ctx->r1 = SIGNED(ctx->r24) < 0X14 ? 1 : 0;
    // 0x8033C2E4: beq         $at, $zero, L_8033C314
    if (ctx->r1 == 0) {
        // 0x8033C2E8: nop
    
            goto L_8033C314;
    }
    // 0x8033C2E8: nop

    // 0x8033C2EC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033C2F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C2F4: lh          $s0, 0xB0($t9)
    ctx->r16 = MEM_H(ctx->r25, 0XB0);
    // 0x8033C2F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C2FC: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x8033C300: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8033C304: sltiu       $t1, $s0, 0x1
    ctx->r9 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033C308: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x8033C30C: jal         0x8001BB34
    // 0x8033C310: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033C310: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
L_8033C314:
    // 0x8033C314: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033C318: nop

    // 0x8033C31C: lh          $t3, 0xB0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB0);
    // 0x8033C320: nop

    // 0x8033C324: bne         $t3, $zero, L_8033C33C
    if (ctx->r11 != 0) {
        // 0x8033C328: nop
    
            goto L_8033C33C;
    }
    // 0x8033C328: nop

    // 0x8033C32C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C330: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C334: jal         0x8001BB34
    // 0x8033C338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033C338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8033C33C:
    // 0x8033C33C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C340: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C344: jal         0x80029C40
    // 0x8033C348: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x8033C348: nop

    after_2:
    // 0x8033C34C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C350: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C354: jal         0x80029D04
    // 0x8033C358: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x8033C358: nop

    after_3:
L_8033C35C:
    // 0x8033C35C: b           L_8033C364
    // 0x8033C360: nop

        goto L_8033C364;
    // 0x8033C360: nop

L_8033C364:
    // 0x8033C364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033C36C: jr          $ra
    // 0x8033C370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033C370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033D8A4_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D8A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033D8A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D8AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D8B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D8B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D8B8: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033D8BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033D8C0: jal         0x800175F0
    // 0x8033D8C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x8033D8C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8033D8C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D8CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D8D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D8D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D8D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D8DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D8E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D8E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D8E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D8EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D8F0: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033D8F4: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033D8F8: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x8033D8FC: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x8033D900: jal         0x8007EDF4
    // 0x8033D904: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    func_8007EDF4(rdram, ctx);
        goto after_1;
    // 0x8033D904: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    after_1:
    // 0x8033D908: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D90C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D910: jal         0x8002B114
    // 0x8033D914: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033D914: nop

    after_2:
    // 0x8033D918: b           L_8033D920
    // 0x8033D91C: nop

        goto L_8033D920;
    // 0x8033D91C: nop

L_8033D920:
    // 0x8033D920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D924: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033D928: jr          $ra
    // 0x8033D92C: nop

    return;
    // 0x8033D92C: nop

;}
RECOMP_FUNC void func_8033A000_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A008: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033A00C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033A010: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033A014: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033A018: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033A01C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033A020: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033A024: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033A028: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033A02C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033A030: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033A034: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033A038: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033A03C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033A040: addiu       $a1, $a1, 0x3D00
    ctx->r5 = ADD32(ctx->r5, 0X3D00);
    // 0x8033A044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033A048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033A04C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8033A050: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033A054: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033A058: jal         0x80027464
    // 0x8033A05C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033A05C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033A060: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x8033A064: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x8033A068: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033A06C: beq         $t1, $at, L_8033A444
    if (ctx->r9 == ctx->r1) {
        // 0x8033A070: nop
    
            goto L_8033A444;
    }
    // 0x8033A070: nop

    // 0x8033A074: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x8033A078: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A07C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033A080: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A084: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A088: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A08C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A090: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A094: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x8033A098: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x8033A09C: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x8033A0A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A0A4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033A0A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033A0AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033A0B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033A0B4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033A0B8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033A0BC: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8033A0C0: sh          $t5, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r13;
    // 0x8033A0C4: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x8033A0C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A0CC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033A0D0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033A0D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033A0D8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033A0DC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033A0E0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033A0E4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033A0E8: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x8033A0EC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A0F0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033A0F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A0F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033A0FC: lwc1        $f4, -0x2600($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2600);
    // 0x8033A100: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A104: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033A108: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A10C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033A110: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x8033A114: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x8033A118: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A11C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8033A120: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033A124: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A128: lwc1        $f6, -0x25FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X25FC);
    // 0x8033A12C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033A130: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A134: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A138: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033A13C: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x8033A140: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8033A144: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A148: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x8033A14C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8033A150: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A154: lwc1        $f8, -0x25F8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X25F8);
    // 0x8033A158: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8033A15C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A160: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A164: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033A168: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x8033A16C: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x8033A170: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A174: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8033A178: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033A17C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033A180: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033A184: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033A188: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033A18C: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
    // 0x8033A190: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x8033A194: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A198: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033A19C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033A1A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033A1A4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033A1A8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033A1AC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033A1B0: sh          $zero, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = 0;
    // 0x8033A1B4: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x8033A1B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A1BC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033A1C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A1C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033A1C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A1CC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033A1D0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033A1D4: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
    // 0x8033A1D8: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8033A1DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033A1E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A1E4: jal         0x80019448
    // 0x8033A1E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x8033A1E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8033A1EC: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8033A1F0: jal         0x8033A844
    // 0x8033A1F4: nop

    func_8033A844_unk_bin_47(rdram, ctx);
        goto after_2;
    // 0x8033A1F4: nop

    after_2:
    // 0x8033A1F8: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    // 0x8033A1FC: jal         0x80026E58
    // 0x8033A200: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_3;
    // 0x8033A200: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_3:
    // 0x8033A204: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x8033A208: lh          $t3, 0x24($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X24);
    // 0x8033A20C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033A210: beq         $t3, $at, L_8033A424
    if (ctx->r11 == ctx->r1) {
        // 0x8033A214: nop
    
            goto L_8033A424;
    }
    // 0x8033A214: nop

    // 0x8033A218: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8033A21C: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x8033A220: nop

    // 0x8033A224: lh          $t4, 0xA($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XA);
    // 0x8033A228: nop

    // 0x8033A22C: bne         $t4, $zero, L_8033A2D8
    if (ctx->r12 != 0) {
        // 0x8033A230: nop
    
            goto L_8033A2D8;
    }
    // 0x8033A230: nop

    // 0x8033A234: lh          $t7, 0x24($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X24);
    // 0x8033A238: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x8033A23C: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x8033A240: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8033A244: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A248: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A24C: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8033A250: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A254: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A258: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8033A25C: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x8033A260: lui         $at, 0x431B
    ctx->r1 = S32(0X431B << 16);
    // 0x8033A264: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033A268: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033A26C: lwc1        $f10, 0x50($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X50);
    // 0x8033A270: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A274: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033A278: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033A27C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A280: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x8033A284: swc1        $f18, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->f18.u32l;
    // 0x8033A288: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8033A28C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A290: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8033A294: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033A298: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A29C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033A2A0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A2A4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A2A8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8033A2AC: sh          $t3, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r11;
    // 0x8033A2B0: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x8033A2B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A2B8: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x8033A2BC: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8033A2C0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A2C4: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8033A2C8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A2CC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033A2D0: b           L_8033A37C
    // 0x8033A2D4: sh          $zero, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = 0;
        goto L_8033A37C;
    // 0x8033A2D4: sh          $zero, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = 0;
L_8033A2D8:
    // 0x8033A2D8: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x8033A2DC: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x8033A2E0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033A2E4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033A2E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033A2EC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033A2F0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033A2F4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033A2F8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033A2FC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033A300: addu        $t8, $t6, $t0
    ctx->r24 = ADD32(ctx->r14, ctx->r8);
    // 0x8033A304: lui         $at, 0x431B
    ctx->r1 = S32(0X431B << 16);
    // 0x8033A308: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A30C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033A310: lwc1        $f4, 0x50($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X50);
    // 0x8033A314: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A318: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A31C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033A320: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A324: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x8033A328: swc1        $f8, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->f8.u32l;
    // 0x8033A32C: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x8033A330: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A334: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x8033A338: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8033A33C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A340: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8033A344: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A348: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033A34C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033A350: sh          $t4, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r12;
    // 0x8033A354: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x8033A358: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A35C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8033A360: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033A364: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033A368: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033A36C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033A370: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033A374: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033A378: sh          $t9, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r25;
L_8033A37C:
    // 0x8033A37C: lh          $t1, 0x24($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X24);
    // 0x8033A380: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x8033A384: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033A388: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A38C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A390: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033A394: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A398: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A39C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033A3A0: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x8033A3A4: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x8033A3A8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8033A3AC: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x8033A3B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033A3B4: lwc1        $f10, 0x58($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X58);
    // 0x8033A3B8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A3BC: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x8033A3C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033A3C4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A3C8: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x8033A3CC: swc1        $f18, 0x58($t5)
    MEM_W(0X58, ctx->r13) = ctx->f18.u32l;
    // 0x8033A3D0: lh          $t6, 0x24($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X24);
    // 0x8033A3D4: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8033A3D8: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8033A3DC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8033A3E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033A3E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A3E8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8033A3EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033A3F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A3F4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033A3F8: addu        $t1, $t9, $t8
    ctx->r9 = ADD32(ctx->r25, ctx->r24);
    // 0x8033A3FC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8033A400: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033A404: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033A408: lwc1        $f4, 0x54($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X54);
    // 0x8033A40C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033A410: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033A414: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033A418: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033A41C: addu        $t7, $t3, $t8
    ctx->r15 = ADD32(ctx->r11, ctx->r24);
    // 0x8033A420: swc1        $f8, 0x54($t7)
    MEM_W(0X54, ctx->r15) = ctx->f8.u32l;
L_8033A424:
    // 0x8033A424: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8033A428: addiu       $t4, $t4, 0x7490
    ctx->r12 = ADD32(ctx->r12, 0X7490);
    // 0x8033A42C: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8033A430: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8033A434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A43C: jal         0x8001C0EC
    // 0x8033A440: addiu       $a3, $zero, 0x118
    ctx->r7 = ADD32(0, 0X118);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8033A440: addiu       $a3, $zero, 0x118
    ctx->r7 = ADD32(0, 0X118);
    after_4:
L_8033A444:
    // 0x8033A444: b           L_8033A44C
    // 0x8033A448: nop

        goto L_8033A44C;
    // 0x8033A448: nop

L_8033A44C:
    // 0x8033A44C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A454: jr          $ra
    // 0x8033A458: nop

    return;
    // 0x8033A458: nop

;}
RECOMP_FUNC void func_8033C004_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C004: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033C008: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033C00C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033C010: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C014: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C018: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C01C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C024: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C028: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C02C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C030: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C034: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C038: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033C03C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033C040: nop

    // 0x8033C044: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033C048: nop

    // 0x8033C04C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8033C050: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8033C054: nop

    // 0x8033C058: addiu       $t3, $t2, -0x2
    ctx->r11 = ADD32(ctx->r10, -0X2);
    // 0x8033C05C: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x8033C060: beq         $at, $zero, L_8033C0D4
    if (ctx->r1 == 0) {
        // 0x8033C064: nop
    
            goto L_8033C0D4;
    }
    // 0x8033C064: nop

    // 0x8033C068: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033C06C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033C070: addu        $at, $at, $t3
    gpr jr_addend_8033C07C = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033C074: lw          $t3, -0x2570($at)
    ctx->r11 = ADD32(ctx->r1, -0X2570);
    // 0x8033C078: nop

    // 0x8033C07C: jr          $t3
    // 0x8033C080: nop

    switch (jr_addend_8033C07C >> 2) {
        case 0: goto L_8033C0A4; break;
        case 1: goto L_8033C084; break;
        case 2: goto L_8033C094; break;
        case 3: goto L_8033C0B4; break;
        case 4: goto L_8033C0C4; break;
        default: switch_error(__func__, 0x8033C07C, 0x8033DA90);
    }
    // 0x8033C080: nop

L_8033C084:
    // 0x8033C084: jal         0x8033B180
    // 0x8033C088: nop

    func_8033B180_unk_bin_47(rdram, ctx);
        goto after_0;
    // 0x8033C088: nop

    after_0:
    // 0x8033C08C: b           L_8033C0DC
    // 0x8033C090: nop

        goto L_8033C0DC;
    // 0x8033C090: nop

L_8033C094:
    // 0x8033C094: jal         0x8033AE04
    // 0x8033C098: nop

    func_8033AE04_unk_bin_47(rdram, ctx);
        goto after_1;
    // 0x8033C098: nop

    after_1:
    // 0x8033C09C: b           L_8033C0DC
    // 0x8033C0A0: nop

        goto L_8033C0DC;
    // 0x8033C0A0: nop

L_8033C0A4:
    // 0x8033C0A4: jal         0x8033AE04
    // 0x8033C0A8: nop

    func_8033AE04_unk_bin_47(rdram, ctx);
        goto after_2;
    // 0x8033C0A8: nop

    after_2:
    // 0x8033C0AC: b           L_8033C0DC
    // 0x8033C0B0: nop

        goto L_8033C0DC;
    // 0x8033C0B0: nop

L_8033C0B4:
    // 0x8033C0B4: jal         0x8033B49C
    // 0x8033C0B8: nop

    func_8033B49C_unk_bin_47(rdram, ctx);
        goto after_3;
    // 0x8033C0B8: nop

    after_3:
    // 0x8033C0BC: b           L_8033C0DC
    // 0x8033C0C0: nop

        goto L_8033C0DC;
    // 0x8033C0C0: nop

L_8033C0C4:
    // 0x8033C0C4: jal         0x8033B758
    // 0x8033C0C8: nop

    func_8033B758_unk_bin_47(rdram, ctx);
        goto after_4;
    // 0x8033C0C8: nop

    after_4:
    // 0x8033C0CC: b           L_8033C0DC
    // 0x8033C0D0: nop

        goto L_8033C0DC;
    // 0x8033C0D0: nop

L_8033C0D4:
    // 0x8033C0D4: b           L_8033C0DC
    // 0x8033C0D8: nop

        goto L_8033C0DC;
    // 0x8033C0D8: nop

L_8033C0DC:
    // 0x8033C0DC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033C0E0: nop

    // 0x8033C0E4: lh          $t5, 0xB4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB4);
    // 0x8033C0E8: nop

    // 0x8033C0EC: blez        $t5, L_8033C18C
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8033C0F0: nop
    
            goto L_8033C18C;
    }
    // 0x8033C0F0: nop

    // 0x8033C0F4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033C0F8: nop

    // 0x8033C0FC: lh          $t7, 0xB4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB4);
    // 0x8033C100: nop

    // 0x8033C104: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8033C108: sh          $t8, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = ctx->r24;
    // 0x8033C10C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033C110: nop

    // 0x8033C114: lh          $t0, 0xB4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB4);
    // 0x8033C118: nop

    // 0x8033C11C: slti        $at, $t0, 0x14
    ctx->r1 = SIGNED(ctx->r8) < 0X14 ? 1 : 0;
    // 0x8033C120: beq         $at, $zero, L_8033C150
    if (ctx->r1 == 0) {
        // 0x8033C124: nop
    
            goto L_8033C150;
    }
    // 0x8033C124: nop

    // 0x8033C128: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033C12C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C130: lh          $s0, 0xB4($t1)
    ctx->r16 = MEM_H(ctx->r9, 0XB4);
    // 0x8033C134: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C138: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x8033C13C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8033C140: sltiu       $t3, $s0, 0x1
    ctx->r11 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033C144: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x8033C148: jal         0x8001BB34
    // 0x8033C14C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x8033C14C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_8033C150:
    // 0x8033C150: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033C154: nop

    // 0x8033C158: lh          $t5, 0xB4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB4);
    // 0x8033C15C: nop

    // 0x8033C160: bne         $t5, $zero, L_8033C184
    if (ctx->r13 != 0) {
        // 0x8033C164: nop
    
            goto L_8033C184;
    }
    // 0x8033C164: nop

    // 0x8033C168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C16C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C170: jal         0x8001BB34
    // 0x8033C174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x8033C174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033C178: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033C17C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033C180: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
L_8033C184:
    // 0x8033C184: b           L_8033C1E8
    // 0x8033C188: nop

        goto L_8033C1E8;
    // 0x8033C188: nop

L_8033C18C:
    // 0x8033C18C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033C190: nop

    // 0x8033C194: lh          $t9, 0xB4($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XB4);
    // 0x8033C198: nop

    // 0x8033C19C: bgez        $t9, L_8033C1E8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8033C1A0: nop
    
            goto L_8033C1E8;
    }
    // 0x8033C1A0: nop

    // 0x8033C1A4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033C1A8: nop

    // 0x8033C1AC: sh          $zero, 0xB4($t0)
    MEM_H(0XB4, ctx->r8) = 0;
    // 0x8033C1B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C1B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C1B8: jal         0x8001BB34
    // 0x8033C1BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_7;
    // 0x8033C1BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8033C1C0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033C1C4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8033C1C8: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x8033C1CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C1D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C1D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C1D8: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x8033C1DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033C1E0: jal         0x800175F0
    // 0x8033C1E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_8;
    // 0x8033C1E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
L_8033C1E8:
    // 0x8033C1E8: b           L_8033C1F0
    // 0x8033C1EC: nop

        goto L_8033C1F0;
    // 0x8033C1EC: nop

L_8033C1F0:
    // 0x8033C1F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033C1F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8033C1F8: jr          $ra
    // 0x8033C1FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033C1FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033D1CC_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D1CC: jr          $ra
    // 0x8033D1D0: nop

    return;
    // 0x8033D1D0: nop

    // 0x8033D1D4: jr          $ra
    // 0x8033D1D8: nop

    return;
    // 0x8033D1D8: nop

;}
RECOMP_FUNC void func_8033A45C_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A45C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A460: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A464: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8033A468: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8033A46C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033A470: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033A474: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x8033A478: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x8033A47C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033A480: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8033A484: addiu       $a1, $a1, 0x3D00
    ctx->r5 = ADD32(ctx->r5, 0X3D00);
    // 0x8033A488: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8033A48C: jal         0x80027464
    // 0x8033A490: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033A490: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8033A494: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x8033A498: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x8033A49C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033A4A0: beq         $t7, $at, L_8033A82C
    if (ctx->r15 == ctx->r1) {
        // 0x8033A4A4: nop
    
            goto L_8033A82C;
    }
    // 0x8033A4A4: nop

    // 0x8033A4A8: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x8033A4AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A4B0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A4B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A4B8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A4BC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A4C0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A4C4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A4C8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8033A4CC: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x8033A4D0: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x8033A4D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A4D8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033A4DC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A4E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A4E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A4E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A4EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033A4F0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033A4F4: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8033A4F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A4FC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033A500: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033A504: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A508: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033A50C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A510: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033A514: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8033A518: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x8033A51C: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x8033A520: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A524: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A528: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A52C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A530: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A534: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A538: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033A53C: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
    // 0x8033A540: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x8033A544: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A548: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8033A54C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033A550: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A554: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033A558: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A55C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A560: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8033A564: sh          $t9, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r25;
    // 0x8033A568: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x8033A56C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A570: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033A574: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A578: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A57C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A580: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A584: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033A588: sh          $zero, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = 0;
    // 0x8033A58C: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8033A590: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A594: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8033A598: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8033A59C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033A5A0: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8033A5A4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033A5A8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033A5AC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033A5B0: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x8033A5B4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8033A5B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A5BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A5C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A5C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A5C8: lwc1        $f8, 0x50($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X50);
    // 0x8033A5CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A5D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A5D4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033A5D8: swc1        $f8, 0x41A0($at)
    MEM_W(0X41A0, ctx->r1) = ctx->f8.u32l;
    // 0x8033A5DC: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x8033A5E0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033A5E4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A5E8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A5EC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A5F0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A5F4: lwc1        $f10, 0x54($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X54);
    // 0x8033A5F8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A5FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A600: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A604: swc1        $f10, 0x41A4($at)
    MEM_W(0X41A4, ctx->r1) = ctx->f10.u32l;
    // 0x8033A608: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8033A60C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8033A610: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8033A614: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033A618: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A61C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033A620: lwc1        $f16, 0x58($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X58);
    // 0x8033A624: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A628: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A62C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A630: swc1        $f16, 0x41A8($at)
    MEM_W(0X41A8, ctx->r1) = ctx->f16.u32l;
    // 0x8033A634: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x8033A638: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8033A63C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A640: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A644: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A648: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A64C: lh          $t5, 0xA8($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA8);
    // 0x8033A650: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A654: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A658: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033A65C: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x8033A660: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x8033A664: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033A668: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033A66C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A670: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033A674: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A678: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x8033A67C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033A680: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A684: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033A688: sh          $t9, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r25;
    // 0x8033A68C: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x8033A690: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8033A694: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8033A698: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x8033A69C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033A6A0: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x8033A6A4: lh          $t4, 0xAC($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XAC);
    // 0x8033A6A8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033A6AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A6B0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033A6B4: sh          $t4, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r12;
    // 0x8033A6B8: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x8033A6BC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8033A6C0: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8033A6C4: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033A6C8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A6CC: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033A6D0: lh          $t7, 0xAE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAE);
    // 0x8033A6D4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A6D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A6DC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A6E0: sh          $t7, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r15;
    // 0x8033A6E4: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x8033A6E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A6EC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033A6F0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A6F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A6F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A6FC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A700: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033A704: addiu       $t9, $zero, 0xD2
    ctx->r25 = ADD32(0, 0XD2);
    // 0x8033A708: sh          $t9, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r25;
    // 0x8033A70C: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8033A710: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8033A714: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8033A718: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8033A71C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033A720: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8033A724: lwc1        $f18, 0xE0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XE0);
    // 0x8033A728: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033A72C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A730: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033A734: swc1        $f18, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f18.u32l;
    // 0x8033A738: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x8033A73C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A740: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8033A744: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033A748: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033A74C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033A750: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033A754: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033A758: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x8033A75C: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x8033A760: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8033A764: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033A768: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A76C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033A770: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A774: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x8033A778: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033A77C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A780: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033A784: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x8033A788: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x8033A78C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8033A790: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033A794: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033A798: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033A79C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033A7A0: lwc1        $f6, 0x10($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X10);
    // 0x8033A7A4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033A7A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A7AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033A7B0: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x8033A7B4: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x8033A7B8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8033A7BC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8033A7C0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033A7C4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A7C8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033A7CC: lwc1        $f8, 0x14($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X14);
    // 0x8033A7D0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A7D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A7D8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033A7DC: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x8033A7E0: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8033A7E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033A7E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A7EC: jal         0x80019448
    // 0x8033A7F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x8033A7F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8033A7F4: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8033A7F8: jal         0x8001BB34
    // 0x8033A7FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x8033A7FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8033A800: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8033A804: addiu       $t8, $t8, 0x7490
    ctx->r24 = ADD32(ctx->r24, 0X7490);
    // 0x8033A808: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8033A80C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033A810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A818: jal         0x8001C0EC
    // 0x8033A81C: addiu       $a3, $zero, 0x118
    ctx->r7 = ADD32(0, 0X118);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x8033A81C: addiu       $a3, $zero, 0x118
    ctx->r7 = ADD32(0, 0X118);
    after_3:
    // 0x8033A820: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8033A824: jal         0x8033A844
    // 0x8033A828: nop

    func_8033A844_unk_bin_47(rdram, ctx);
        goto after_4;
    // 0x8033A828: nop

    after_4:
L_8033A82C:
    // 0x8033A82C: b           L_8033A834
    // 0x8033A830: nop

        goto L_8033A834;
    // 0x8033A830: nop

L_8033A834:
    // 0x8033A834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A838: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A83C: jr          $ra
    // 0x8033A840: nop

    return;
    // 0x8033A840: nop

;}
RECOMP_FUNC void func_8033D1DC_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D1DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033D1E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033D1E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8033D1E8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8033D1EC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033D1F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033D1F4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8033D1F8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033D1FC: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033D200: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x8033D204: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x8033D208: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033D20C: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8033D210: addiu       $a1, $a1, 0x3D90
    ctx->r5 = ADD32(ctx->r5, 0X3D90);
    // 0x8033D214: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033D218: jal         0x80027464
    // 0x8033D21C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033D21C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8033D220: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8033D224: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x8033D228: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D22C: beq         $t7, $at, L_8033D480
    if (ctx->r15 == ctx->r1) {
        // 0x8033D230: nop
    
            goto L_8033D480;
    }
    // 0x8033D230: nop

    // 0x8033D234: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x8033D238: lh          $a1, 0x32($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X32);
    // 0x8033D23C: jal         0x80026F10
    // 0x8033D240: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x8033D240: nop

    after_1:
    // 0x8033D244: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8033D248: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8033D24C: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x8033D250: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x8033D254: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033D258: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033D25C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033D260: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033D264: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033D268: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033D26C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8033D270: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8033D274: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8033D278: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8033D27C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8033D280: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033D284: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x8033D288: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033D28C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033D290: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033D294: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8033D298: nop

    // 0x8033D29C: bc1f        L_8033D2BC
    if (!c1cs) {
        // 0x8033D2A0: nop
    
            goto L_8033D2BC;
    }
    // 0x8033D2A0: nop

    // 0x8033D2A4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033D2A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033D2AC: nop

    // 0x8033D2B0: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8033D2B4: b           L_8033D2D8
    // 0x8033D2B8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
        goto L_8033D2D8;
    // 0x8033D2B8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_8033D2BC:
    // 0x8033D2BC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8033D2C0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8033D2C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033D2C8: lwc1        $f8, 0x3C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x8033D2CC: nop

    // 0x8033D2D0: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033D2D4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
L_8033D2D8:
    // 0x8033D2D8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D2DC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033D2E0: lwc1        $f7, -0x2558($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2558);
    // 0x8033D2E4: lwc1        $f6, -0x2554($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2554);
    // 0x8033D2E8: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x8033D2EC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8033D2F0: jal         0x80034970
    // 0x8033D2F4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x8033D2F4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_2:
    // 0x8033D2F8: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x8033D2FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033D300: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033D304: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8033D308: swc1        $f18, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f18.u32l;
    // 0x8033D30C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D310: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033D314: lwc1        $f7, -0x2550($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X2550);
    // 0x8033D318: lwc1        $f6, -0x254C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X254C);
    // 0x8033D31C: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x8033D320: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8033D324: jal         0x80036570
    // 0x8033D328: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x8033D328: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_3:
    // 0x8033D32C: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x8033D330: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033D334: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033D338: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8033D33C: swc1        $f18, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f18.u32l;
    // 0x8033D340: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8033D344: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033D348: lwc1        $f16, 0x40($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X40);
    // 0x8033D34C: nop

    // 0x8033D350: swc1        $f16, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f16.u32l;
    // 0x8033D354: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033D358: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033D35C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033D360: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033D364: addiu       $t2, $zero, 0x2D
    ctx->r10 = ADD32(0, 0X2D);
    // 0x8033D368: sh          $t2, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r10;
    // 0x8033D36C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033D370: nop

    // 0x8033D374: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x8033D378: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033D37C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033D380: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x8033D384: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8033D388: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033D38C: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8033D390: nop

    // 0x8033D394: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x8033D398: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8033D39C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033D3A0: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033D3A4: lwc1        $f8, 0x24($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8033D3A8: nop

    // 0x8033D3AC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033D3B0: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x8033D3B4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8033D3B8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033D3BC: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033D3C0: lwc1        $f16, 0x2C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8033D3C4: nop

    // 0x8033D3C8: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8033D3CC: swc1        $f4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f4.u32l;
    // 0x8033D3D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033D3D4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033D3D8: nop

    // 0x8033D3DC: swc1        $f6, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f6.u32l;
    // 0x8033D3E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033D3E4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033D3E8: nop

    // 0x8033D3EC: swc1        $f8, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f8.u32l;
    // 0x8033D3F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033D3F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033D3F8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033D3FC: nop

    // 0x8033D400: swc1        $f10, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f10.u32l;
    // 0x8033D404: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033D408: nop

    // 0x8033D40C: lwc1        $f20, 0xC($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0XC);
    // 0x8033D410: nop

    // 0x8033D414: swc1        $f20, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f20.u32l;
    // 0x8033D418: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033D41C: nop

    // 0x8033D420: swc1        $f20, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f20.u32l;
    // 0x8033D424: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8033D428: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033D42C: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x8033D430: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8033D434: addiu       $t0, $t0, 0x77C4
    ctx->r8 = ADD32(ctx->r8, 0X77C4);
    // 0x8033D438: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x8033D43C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033D440: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033D444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033D448: jal         0x8001C0EC
    // 0x8033D44C: addiu       $a3, $zero, 0x9D
    ctx->r7 = ADD32(0, 0X9D);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8033D44C: addiu       $a3, $zero, 0x9D
    ctx->r7 = ADD32(0, 0X9D);
    after_4:
    // 0x8033D450: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x8033D454: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8033D458: addiu       $a3, $a3, 0x77F4
    ctx->r7 = ADD32(ctx->r7, 0X77F4);
    // 0x8033D45C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D460: jal         0x8001ABF4
    // 0x8033D464: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x8033D464: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x8033D468: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x8033D46C: jal         0x80029C40
    // 0x8033D470: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x8033D470: nop

    after_6:
    // 0x8033D474: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x8033D478: jal         0x80029D04
    // 0x8033D47C: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x8033D47C: nop

    after_7:
L_8033D480:
    // 0x8033D480: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x8033D484: b           L_8033D494
    // 0x8033D488: nop

        goto L_8033D494;
    // 0x8033D488: nop

    // 0x8033D48C: b           L_8033D494
    // 0x8033D490: nop

        goto L_8033D494;
    // 0x8033D490: nop

L_8033D494:
    // 0x8033D494: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033D498: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033D49C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033D4A0: jr          $ra
    // 0x8033D4A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033D4A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033B49C_unk_bin_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B49C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033B4A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B4A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B4A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B4AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B4B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B4B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B4B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B4BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B4C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B4C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B4C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B4CC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033B4D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B4D4: nop

    // 0x8033B4D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B4DC: nop

    // 0x8033B4E0: bne         $t1, $zero, L_8033B5E0
    if (ctx->r9 != 0) {
        // 0x8033B4E4: nop
    
            goto L_8033B5E0;
    }
    // 0x8033B4E4: nop

    // 0x8033B4E8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B4EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033B4F0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033B4F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033B4F8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B4FC: nop

    // 0x8033B500: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033B504: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033B508: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B50C: nop

    // 0x8033B510: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033B514: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B518: addiu       $t6, $zero, 0x190
    ctx->r14 = ADD32(0, 0X190);
    // 0x8033B51C: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
    // 0x8033B520: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B524: nop

    // 0x8033B528: sh          $zero, 0xB4($t8)
    MEM_H(0XB4, ctx->r24) = 0;
    // 0x8033B52C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8033B530: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033B534: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B538: nop

    // 0x8033B53C: swc1        $f8, 0xDC($t9)
    MEM_W(0XDC, ctx->r25) = ctx->f8.u32l;
    // 0x8033B540: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B544: nop

    // 0x8033B548: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
    // 0x8033B54C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B550: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B554: jal         0x8001BB34
    // 0x8033B558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033B558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033B55C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B560: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x8033B564: lh          $t2, 0xB0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB0);
    // 0x8033B568: nop

    // 0x8033B56C: blez        $t2, L_8033B5C8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8033B570: nop
    
            goto L_8033B5C8;
    }
    // 0x8033B570: nop

L_8033B574:
    // 0x8033B574: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x8033B578: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B57C: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8033B580: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8033B584: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x8033B588: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033B58C: beq         $t7, $at, L_8033B5A0
    if (ctx->r15 == ctx->r1) {
        // 0x8033B590: sh          $t7, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r15;
            goto L_8033B5A0;
    }
    // 0x8033B590: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x8033B594: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8033B598: jal         0x8001BB34
    // 0x8033B59C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033B59C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8033B5A0:
    // 0x8033B5A0: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x8033B5A4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B5A8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033B5AC: sh          $t9, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r25;
    // 0x8033B5B0: lh          $t4, 0xB0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XB0);
    // 0x8033B5B4: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8033B5B8: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8033B5BC: slt         $at, $t1, $t4
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8033B5C0: bne         $at, $zero, L_8033B574
    if (ctx->r1 != 0) {
        // 0x8033B5C4: nop
    
            goto L_8033B574;
    }
    // 0x8033B5C4: nop

L_8033B5C8:
    // 0x8033B5C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B5CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B5D0: jal         0x8001BBDC
    // 0x8033B5D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x8033B5D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8033B5D8: jal         0x8033B97C
    // 0x8033B5DC: nop

    func_8033B97C_unk_bin_47(rdram, ctx);
        goto after_3;
    // 0x8033B5DC: nop

    after_3:
L_8033B5E0:
    // 0x8033B5E0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B5E4: nop

    // 0x8033B5E8: lh          $t5, 0xB2($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XB2);
    // 0x8033B5EC: nop

    // 0x8033B5F0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8033B5F4: sh          $t6, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r14;
    // 0x8033B5F8: jal         0x8033BC24
    // 0x8033B5FC: nop

    func_8033BC24_unk_bin_47(rdram, ctx);
        goto after_4;
    // 0x8033B5FC: nop

    after_4:
    // 0x8033B600: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B604: nop

    // 0x8033B608: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x8033B60C: nop

    // 0x8033B610: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8033B614: bne         $t9, $zero, L_8033B740
    if (ctx->r25 != 0) {
        // 0x8033B618: nop
    
            goto L_8033B740;
    }
    // 0x8033B618: nop

    // 0x8033B61C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B620: nop

    // 0x8033B624: lh          $t2, 0xB0($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XB0);
    // 0x8033B628: nop

    // 0x8033B62C: bltz        $t2, L_8033B6B8
    if (SIGNED(ctx->r10) < 0) {
        // 0x8033B630: nop
    
            goto L_8033B6B8;
    }
    // 0x8033B630: nop

    // 0x8033B634: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B638: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033B63C: lh          $t4, 0xB0($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XB0);
    // 0x8033B640: nop

    // 0x8033B644: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8033B648: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x8033B64C: lh          $t3, 0xE8($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XE8);
    // 0x8033B650: nop

    // 0x8033B654: beq         $t3, $at, L_8033B69C
    if (ctx->r11 == ctx->r1) {
        // 0x8033B658: sh          $t3, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r11;
            goto L_8033B69C;
    }
    // 0x8033B658: sh          $t3, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r11;
    // 0x8033B65C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B660: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B664: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B668: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033B66C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033B670: jal         0x800175F0
    // 0x8033B674: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x8033B674: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x8033B678: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B67C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B684: lh          $a1, 0xB0($t7)
    ctx->r5 = MEM_H(ctx->r15, 0XB0);
    // 0x8033B688: jal         0x800281A4
    // 0x8033B68C: nop

    func_800281A4(rdram, ctx);
        goto after_6;
    // 0x8033B68C: nop

    after_6:
    // 0x8033B690: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8033B694: jal         0x8002B0E4
    // 0x8033B698: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x8033B698: nop

    after_7:
L_8033B69C:
    // 0x8033B69C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B6A0: nop

    // 0x8033B6A4: lh          $t9, 0xB0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB0);
    // 0x8033B6A8: nop

    // 0x8033B6AC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8033B6B0: b           L_8033B740
    // 0x8033B6B4: sh          $t0, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r8;
        goto L_8033B740;
    // 0x8033B6B4: sh          $t0, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r8;
L_8033B6B8:
    // 0x8033B6B8: addiu       $a0, $zero, 0x178
    ctx->r4 = ADD32(0, 0X178);
    // 0x8033B6BC: jal         0x80026E58
    // 0x8033B6C0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_8;
    // 0x8033B6C0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_8:
    // 0x8033B6C4: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8033B6C8: lh          $t2, 0x28($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X28);
    // 0x8033B6CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033B6D0: beq         $t2, $at, L_8033B714
    if (ctx->r10 == ctx->r1) {
        // 0x8033B6D4: nop
    
            goto L_8033B714;
    }
    // 0x8033B6D4: nop

    // 0x8033B6D8: lh          $t4, 0x28($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X28);
    // 0x8033B6DC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033B6E0: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x8033B6E4: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x8033B6E8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033B6EC: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x8033B6F0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033B6F4: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x8033B6F8: lh          $t5, 0x4202($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4202);
    // 0x8033B6FC: nop

    // 0x8033B700: bne         $t5, $zero, L_8033B714
    if (ctx->r13 != 0) {
        // 0x8033B704: nop
    
            goto L_8033B714;
    }
    // 0x8033B704: nop

    // 0x8033B708: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B70C: jal         0x8033A45C
    // 0x8033B710: nop

    func_8033A45C_unk_bin_47(rdram, ctx);
        goto after_9;
    // 0x8033B710: nop

    after_9:
L_8033B714:
    // 0x8033B714: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B718: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B71C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B720: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033B724: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033B728: jal         0x800175F0
    // 0x8033B72C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_10;
    // 0x8033B72C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x8033B730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B738: jal         0x8002B0E4
    // 0x8033B73C: nop

    func_8002B0E4(rdram, ctx);
        goto after_11;
    // 0x8033B73C: nop

    after_11:
L_8033B740:
    // 0x8033B740: b           L_8033B748
    // 0x8033B744: nop

        goto L_8033B748;
    // 0x8033B744: nop

L_8033B748:
    // 0x8033B748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B74C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033B750: jr          $ra
    // 0x8033B754: nop

    return;
    // 0x8033B754: nop

;}
RECOMP_FUNC void func_803305A8_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803305A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803305AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803305B0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803305B4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803305B8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803305BC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803305C0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803305C4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803305C8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803305CC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803305D0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803305D4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803305D8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803305DC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803305E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803305E4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x803305E8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803305EC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803305F0: addiu       $a1, $a1, 0x3DF0
    ctx->r5 = ADD32(ctx->r5, 0X3DF0);
    // 0x803305F4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803305F8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803305FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330600: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330604: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330608: jal         0x80027464
    // 0x8033060C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033060C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330610: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80330614: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80330618: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033061C: beq         $t1, $at, L_80330734
    if (ctx->r9 == ctx->r1) {
        // 0x80330620: nop
    
            goto L_80330734;
    }
    // 0x80330620: nop

    // 0x80330624: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80330628: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033062C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330630: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330634: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330638: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033063C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330640: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330644: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330648: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x8033064C: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x80330650: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330654: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330658: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033065C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330660: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330664: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330668: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033066C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330670: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x80330674: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330678: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033067C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330680: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330684: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330688: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033068C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330690: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x80330694: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80330698: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033069C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x803306A0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803306A4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803306A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803306AC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803306B0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803306B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306B8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803306BC: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x803306C0: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x803306C4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803306C8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803306CC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803306D0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803306D4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803306D8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803306DC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803306E0: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x803306E4: lwc1        $f20, 0xC($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0XC);
    // 0x803306E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306EC: swc1        $f20, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f20.u32l;
    // 0x803306F0: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x803306F4: nop

    // 0x803306F8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803306FC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330700: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330704: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330708: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033070C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330710: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x80330714: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80330718: addiu       $t8, $t8, 0x7F04
    ctx->r24 = ADD32(ctx->r24, 0X7F04);
    // 0x8033071C: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80330720: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80330724: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330728: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033072C: jal         0x8001C0EC
    // 0x80330730: addiu       $a3, $zero, 0x199
    ctx->r7 = ADD32(0, 0X199);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330730: addiu       $a3, $zero, 0x199
    ctx->r7 = ADD32(0, 0X199);
    after_1:
L_80330734:
    // 0x80330734: b           L_8033073C
    // 0x80330738: nop

        goto L_8033073C;
    // 0x80330738: nop

L_8033073C:
    // 0x8033073C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330740: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330744: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330748: jr          $ra
    // 0x8033074C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033074C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803302F8_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803302FC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80330300: nop

    // 0x80330304: beq         $t6, $zero, L_80330320
    if (ctx->r14 == 0) {
        // 0x80330308: nop
    
            goto L_80330320;
    }
    // 0x80330308: nop

    // 0x8033030C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330310: bne         $t6, $at, L_80330320
    if (ctx->r14 != ctx->r1) {
        // 0x80330314: nop
    
            goto L_80330320;
    }
    // 0x80330314: nop

    // 0x80330318: jr          $ra
    // 0x8033031C: nop

    return;
    // 0x8033031C: nop

L_80330320:
    // 0x80330320: jr          $ra
    // 0x80330324: nop

    return;
    // 0x80330324: nop

    // 0x80330328: jr          $ra
    // 0x8033032C: nop

    return;
    // 0x8033032C: nop

;}
RECOMP_FUNC void func_80330330_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330330: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330334: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330338: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033033C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330340: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330344: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330348: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033034C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330350: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330354: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330358: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033035C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330360: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330364: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330368: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033036C: nop

    // 0x80330370: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330374: nop

    // 0x80330378: bne         $t1, $zero, L_80330428
    if (ctx->r9 != 0) {
        // 0x8033037C: nop
    
            goto L_80330428;
    }
    // 0x8033037C: nop

    // 0x80330380: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330384: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330388: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033038C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330390: nop

    // 0x80330394: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x80330398: nop

    // 0x8033039C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x803303A0: nop

    // 0x803303A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803303A8: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
    // 0x803303AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803303B0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803303B4: nop

    // 0x803303B8: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x803303BC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803303C0: nop

    // 0x803303C4: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x803303C8: nop

    // 0x803303CC: sh          $t8, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r24;
    // 0x803303D0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803303D4: nop

    // 0x803303D8: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x803303DC: nop

    // 0x803303E0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803303E4: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803303E8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803303EC: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x803303F0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803303F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803303F8: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x803303FC: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80330400: nop

    // 0x80330404: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80330408: swc1        $f16, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f16.u32l;
    // 0x8033040C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330410: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330418: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8033041C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330420: jal         0x800175F0
    // 0x80330424: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80330424: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_80330428:
    // 0x80330428: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033042C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330430: jal         0x80029C40
    // 0x80330434: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80330434: nop

    after_1:
    // 0x80330438: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8033043C: jal         0x800C00F4
    // 0x80330440: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_800C00F4(rdram, ctx);
        goto after_2;
    // 0x80330440: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_2:
    // 0x80330444: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330448: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033044C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330450: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330454: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80330458: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x8033045C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330460: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80330464: jal         0x80029018
    // 0x80330468: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80330468: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8033046C: beq         $v0, $zero, L_80330490
    if (ctx->r2 == 0) {
        // 0x80330470: nop
    
            goto L_80330490;
    }
    // 0x80330470: nop

    // 0x80330474: jal         0x800297DC
    // 0x80330478: nop

    func_800297DC(rdram, ctx);
        goto after_4;
    // 0x80330478: nop

    after_4:
    // 0x8033047C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330480: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330484: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80330488: jal         0x80029824
    // 0x8033048C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_5;
    // 0x8033048C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_80330490:
    // 0x80330490: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330494: nop

    // 0x80330498: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x8033049C: lwc1        $f10, 0x44($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X44);
    // 0x803304A0: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x803304A4: nop

    // 0x803304A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803304AC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x803304B0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x803304B4: nop

    // 0x803304B8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x803304BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803304C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803304C4: nop

    // 0x803304C8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x803304CC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x803304D0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x803304D4: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x803304D8: nop

    // 0x803304DC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803304E0: nop

    // 0x803304E4: lh          $t8, 0xA6($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA6);
    // 0x803304E8: nop

    // 0x803304EC: bgtz        $t8, L_80330538
    if (SIGNED(ctx->r24) > 0) {
        // 0x803304F0: nop
    
            goto L_80330538;
    }
    // 0x803304F0: nop

    // 0x803304F4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803304F8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803304FC: sh          $t7, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r15;
    // 0x80330500: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330504: nop

    // 0x80330508: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x8033050C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330510: nop

    // 0x80330514: lh          $t3, 0xA8($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XA8);
    // 0x80330518: nop

    // 0x8033051C: addiu       $t5, $t3, 0x2
    ctx->r13 = ADD32(ctx->r11, 0X2);
    // 0x80330520: bgez        $t5, L_80330534
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80330524: andi        $t4, $t5, 0x3
        ctx->r12 = ctx->r13 & 0X3;
            goto L_80330534;
    }
    // 0x80330524: andi        $t4, $t5, 0x3
    ctx->r12 = ctx->r13 & 0X3;
    // 0x80330528: beq         $t4, $zero, L_80330534
    if (ctx->r12 == 0) {
        // 0x8033052C: nop
    
            goto L_80330534;
    }
    // 0x8033052C: nop

    // 0x80330530: addiu       $t4, $t4, -0x4
    ctx->r12 = ADD32(ctx->r12, -0X4);
L_80330534:
    // 0x80330534: sh          $t4, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r12;
L_80330538:
    // 0x80330538: b           L_80330540
    // 0x8033053C: nop

        goto L_80330540;
    // 0x8033053C: nop

L_80330540:
    // 0x80330540: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330544: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80330548: jr          $ra
    // 0x8033054C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033054C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330000_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330008: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033000C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330010: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330014: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330018: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033001C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330020: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330024: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330028: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033002C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330030: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330034: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330038: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033003C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80330040: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330044: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330048: addiu       $a1, $a1, 0x3DE4
    ctx->r5 = ADD32(ctx->r5, 0X3DE4);
    // 0x8033004C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330050: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80330054: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330058: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033005C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330060: jal         0x80027464
    // 0x80330064: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80330064: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330068: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x8033006C: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80330070: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330074: beq         $t1, $at, L_803302DC
    if (ctx->r9 == ctx->r1) {
        // 0x80330078: nop
    
            goto L_803302DC;
    }
    // 0x80330078: nop

    // 0x8033007C: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80330080: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330084: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330088: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033008C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330090: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330094: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330098: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033009C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803300A0: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x803300A4: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x803300A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803300B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803300B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300BC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803300C0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803300C4: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x803300C8: sh          $t5, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r13;
    // 0x803300CC: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x803300D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300D4: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x803300D8: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803300DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803300E0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803300E4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803300E8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803300EC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x803300F0: sh          $t9, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r25;
    // 0x803300F4: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x803300F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300FC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80330100: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330104: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330108: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033010C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330110: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330114: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330118: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x8033011C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80330120: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80330124: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330128: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033012C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330130: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330134: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330138: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033013C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330140: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80330144: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80330148: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033014C: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80330150: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80330154: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330158: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8033015C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330160: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330164: addu        $t6, $t5, $t8
    ctx->r14 = ADD32(ctx->r13, ctx->r24);
    // 0x80330168: lwc1        $f20, 0xC($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0XC);
    // 0x8033016C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330170: swc1        $f20, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f20.u32l;
    // 0x80330174: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x80330178: nop

    // 0x8033017C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330180: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330184: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330188: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033018C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330190: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330194: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x80330198: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8033019C: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x803301A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803301A4: lh          $t3, 0xA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA);
    // 0x803301A8: nop

    // 0x803301AC: bne         $t3, $at, L_803301C4
    if (ctx->r11 != ctx->r1) {
        // 0x803301B0: nop
    
            goto L_803301C4;
    }
    // 0x803301B0: nop

    // 0x803301B4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x803301B8: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x803301BC: nop

    // 0x803301C0: sh          $zero, 0xA($t2)
    MEM_H(0XA, ctx->r10) = 0;
L_803301C4:
    // 0x803301C4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x803301C8: lw          $t4, 0x5100($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5100);
    // 0x803301CC: nop

    // 0x803301D0: lh          $t7, 0xC($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XC);
    // 0x803301D4: nop

    // 0x803301D8: beq         $t7, $zero, L_8033021C
    if (ctx->r15 == 0) {
        // 0x803301DC: nop
    
            goto L_8033021C;
    }
    // 0x803301DC: nop

    // 0x803301E0: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x803301E4: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x803301E8: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x803301EC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803301F0: lh          $t8, 0xC($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XC);
    // 0x803301F4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803301F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803301FC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330200: sll         $t6, $t8, 4
    ctx->r14 = S32(ctx->r24 << 4);
    // 0x80330204: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330208: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033020C: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x80330210: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330214: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330218: sh          $t6, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r14;
L_8033021C:
    // 0x8033021C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80330220: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x80330224: nop

    // 0x80330228: lh          $t3, 0xE($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE);
    // 0x8033022C: nop

    // 0x80330230: beq         $t3, $zero, L_80330278
    if (ctx->r11 == 0) {
        // 0x80330234: nop
    
            goto L_80330278;
    }
    // 0x80330234: nop

    // 0x80330238: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8033023C: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80330240: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80330244: lh          $t4, 0xE($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XE);
    // 0x80330248: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x8033024C: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x80330250: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80330254: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330258: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033025C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330260: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330264: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330268: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033026C: mfhi        $t7
    ctx->r15 = hi;
    // 0x80330270: sh          $t7, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r15;
    // 0x80330274: nop

L_80330278:
    // 0x80330278: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8033027C: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x80330280: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80330284: lh          $t6, 0xA($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XA);
    // 0x80330288: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033028C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330290: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330294: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330298: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033029C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302A0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803302A4: bgez        $t6, L_803302B8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x803302A8: andi        $t0, $t6, 0x3
        ctx->r8 = ctx->r14 & 0X3;
            goto L_803302B8;
    }
    // 0x803302A8: andi        $t0, $t6, 0x3
    ctx->r8 = ctx->r14 & 0X3;
    // 0x803302AC: beq         $t0, $zero, L_803302B8
    if (ctx->r8 == 0) {
        // 0x803302B0: nop
    
            goto L_803302B8;
    }
    // 0x803302B0: nop

    // 0x803302B4: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
L_803302B8:
    // 0x803302B8: sh          $t0, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r8;
    // 0x803302BC: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x803302C0: addiu       $t2, $t2, 0x7F00
    ctx->r10 = ADD32(ctx->r10, 0X7F00);
    // 0x803302C4: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x803302C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803302CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803302D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803302D4: jal         0x8001C0EC
    // 0x803302D8: addiu       $a3, $zero, 0x122
    ctx->r7 = ADD32(0, 0X122);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803302D8: addiu       $a3, $zero, 0x122
    ctx->r7 = ADD32(0, 0X122);
    after_1:
L_803302DC:
    // 0x803302DC: b           L_803302E4
    // 0x803302E0: nop

        goto L_803302E4;
    // 0x803302E0: nop

L_803302E4:
    // 0x803302E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803302E8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803302EC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803302F0: jr          $ra
    // 0x803302F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803302F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803331DC_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803331DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803331E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803331E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803331E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803331EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803331F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803331F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803331F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803331FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333200: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333204: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333208: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033320C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333210: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333214: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80333218: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x8033321C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80333220: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333224: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333228: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033322C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333230: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333234: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80333238: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8033323C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333240: nop

    // 0x80333244: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80333248: nop

    // 0x8033324C: bne         $t6, $zero, L_803332B0
    if (ctx->r14 != 0) {
        // 0x80333250: nop
    
            goto L_803332B0;
    }
    // 0x80333250: nop

    // 0x80333254: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333258: nop

    // 0x8033325C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80333260: nop

    // 0x80333264: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80333268: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033326C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333270: nop

    // 0x80333274: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80333278: nop

    // 0x8033327C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80333280: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333284: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80333288: addiu       $t2, $t2, -0x70B4
    ctx->r10 = ADD32(ctx->r10, -0X70B4);
    // 0x8033328C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333290: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80333294: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033329C: jal         0x8001C0EC
    // 0x803332A0: addiu       $a3, $zero, 0x19A
    ctx->r7 = ADD32(0, 0X19A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803332A0: addiu       $a3, $zero, 0x19A
    ctx->r7 = ADD32(0, 0X19A);
    after_0:
    // 0x803332A4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803332A8: nop

    // 0x803332AC: sh          $zero, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = 0;
L_803332B0:
    // 0x803332B0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803332B4: nop

    // 0x803332B8: lh          $t5, 0xB6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB6);
    // 0x803332BC: nop

    // 0x803332C0: bne         $t5, $zero, L_803332F8
    if (ctx->r13 != 0) {
        // 0x803332C4: nop
    
            goto L_803332F8;
    }
    // 0x803332C4: nop

    // 0x803332C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803332CC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x803332D0: sh          $t6, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r14;
    // 0x803332D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803332D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803332DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803332E0: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x803332E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803332E8: jal         0x800175F0
    // 0x803332EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803332EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803332F0: b           L_80333310
    // 0x803332F4: nop

        goto L_80333310;
    // 0x803332F4: nop

L_803332F8:
    // 0x803332F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803332FC: nop

    // 0x80333300: lh          $t7, 0xB6($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XB6);
    // 0x80333304: nop

    // 0x80333308: addiu       $t1, $t7, -0x1
    ctx->r9 = ADD32(ctx->r15, -0X1);
    // 0x8033330C: sh          $t1, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r9;
L_80333310:
    // 0x80333310: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80333314: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333318: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033331C: lwc1        $f9, 0x3450($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3450);
    // 0x80333320: lwc1        $f8, 0x3454($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3454);
    // 0x80333324: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80333328: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033332C: jal         0x80034970
    // 0x80333330: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80333330: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x80333334: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x80333338: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033333C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80333340: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80333344: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80333348: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033334C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80333350: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x80333354: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80333358: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033335C: lwc1        $f8, 0x1C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80333360: lwc1        $f17, 0x3458($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3458);
    // 0x80333364: lwc1        $f16, 0x345C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X345C);
    // 0x80333368: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8033336C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80333370: jal         0x80036570
    // 0x80333374: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80333374: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x80333378: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x8033337C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333380: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80333384: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80333388: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033338C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333390: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80333394: swc1        $f10, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f10.u32l;
    // 0x80333398: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8033339C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803333A0: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803333A4: nop

    // 0x803333A8: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x803333AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333B4: jal         0x8001B4AC
    // 0x803333B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803333B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x803333BC: beq         $v0, $zero, L_803333E0
    if (ctx->r2 == 0) {
        // 0x803333C0: nop
    
            goto L_803333E0;
    }
    // 0x803333C0: nop

    // 0x803333C4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803333C8: nop

    // 0x803333CC: sh          $zero, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = 0;
    // 0x803333D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333D8: jal         0x8002B114
    // 0x803333DC: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x803333DC: nop

    after_5:
L_803333E0:
    // 0x803333E0: b           L_803333E8
    // 0x803333E4: nop

        goto L_803333E8;
    // 0x803333E4: nop

L_803333E8:
    // 0x803333E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803333EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803333F0: jr          $ra
    // 0x803333F4: nop

    return;
    // 0x803333F4: nop

;}
RECOMP_FUNC void func_80332378_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332378: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8033237C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332380: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332384: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332388: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033238C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332390: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332394: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332398: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033239C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803323A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803323A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803323A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803323AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803323B0: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x803323B4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x803323B8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803323BC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803323C0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803323C4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803323C8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803323CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803323D0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803323D4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803323D8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803323DC: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x803323E0: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x803323E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803323E8: lh          $t6, 0xEA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XEA);
    // 0x803323EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803323F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803323F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803323F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803323FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332400: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332404: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332408: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8033240C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80332410: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332414: lh          $t1, 0xEC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEC);
    // 0x80332418: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033241C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332420: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332424: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332428: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033242C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332430: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80332434: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x80332438: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8033243C: nop

    // 0x80332440: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80332444: nop

    // 0x80332448: bne         $t6, $zero, L_803325B4
    if (ctx->r14 != 0) {
        // 0x8033244C: nop
    
            goto L_803325B4;
    }
    // 0x8033244C: nop

    // 0x80332450: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80332454: nop

    // 0x80332458: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033245C: nop

    // 0x80332460: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332464: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80332468: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8033246C: nop

    // 0x80332470: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332474: nop

    // 0x80332478: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033247C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80332480: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x80332484: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x80332488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033248C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332490: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80332494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332498: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033249C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324A0: jal         0x8001ABF4
    // 0x803324A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803324A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803324A8: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x803324AC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803324B0: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803324B4: lwc1        $f9, 0x3400($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3400);
    // 0x803324B8: lwc1        $f8, 0x3404($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3404);
    // 0x803324BC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803324C0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803324C4: jal         0x80034970
    // 0x803324C8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x803324C8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x803324CC: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x803324D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803324D4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x803324D8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x803324DC: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x803324E0: nop

    // 0x803324E4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803324E8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x803324EC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x803324F0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803324F4: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803324F8: lwc1        $f17, 0x3408($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3408);
    // 0x803324FC: lwc1        $f16, 0x340C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X340C);
    // 0x80332500: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80332504: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80332508: jal         0x80036570
    // 0x8033250C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x8033250C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x80332510: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x80332514: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332518: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8033251C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80332520: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80332524: nop

    // 0x80332528: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033252C: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80332530: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80332534: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332538: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x8033253C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332540: lwc1        $f18, 0x1C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332544: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80332548: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8033254C: addiu       $a1, $a1, 0x4330
    ctx->r5 = ADD32(ctx->r5, 0X4330);
    // 0x80332550: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332554: jal         0x80027464
    // 0x80332558: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80332558: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x8033255C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80332560: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80332564: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80332568: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8033256C: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80332570: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332574: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80332578: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x8033257C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332580: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332584: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332588: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x8033258C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80332590: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80332594: nop

    // 0x80332598: sh          $t2, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r10;
    // 0x8033259C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803325A0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803325A4: addiu       $a3, $a3, -0x7034
    ctx->r7 = ADD32(ctx->r7, -0X7034);
    // 0x803325A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803325AC: jal         0x8001ABF4
    // 0x803325B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803325B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
L_803325B4:
    // 0x803325B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803325B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803325BC: jal         0x8002A8B4
    // 0x803325C0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x803325C0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x803325C4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x803325C8: nop

    // 0x803325CC: lwc1        $f4, 0x3C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x803325D0: nop

    // 0x803325D4: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
    // 0x803325D8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x803325DC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x803325E0: lwc1        $f20, 0x1C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803325E4: nop

    // 0x803325E8: swc1        $f20, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f20.u32l;
    // 0x803325EC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x803325F0: nop

    // 0x803325F4: swc1        $f20, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f20.u32l;
    // 0x803325F8: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x803325FC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80332600: lwc1        $f20, 0x1C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332604: nop

    // 0x80332608: swc1        $f20, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f20.u32l;
    // 0x8033260C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80332610: nop

    // 0x80332614: swc1        $f20, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f20.u32l;
    // 0x80332618: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8033261C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332620: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332624: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332628: jal         0x80015538
    // 0x8033262C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x8033262C: nop

    after_6:
    // 0x80332630: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80332634: nop

    // 0x80332638: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x8033263C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80332640: nop

    // 0x80332644: lwc1        $f6, 0x1C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332648: nop

    // 0x8033264C: swc1        $f6, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f6.u32l;
    // 0x80332650: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80332654: nop

    // 0x80332658: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x8033265C: nop

    // 0x80332660: bne         $t5, $zero, L_80332698
    if (ctx->r13 != 0) {
        // 0x80332664: nop
    
            goto L_80332698;
    }
    // 0x80332664: nop

    // 0x80332668: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8033266C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80332670: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x80332674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033267C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332680: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80332684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332688: jal         0x8001ABF4
    // 0x8033268C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x8033268C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80332690: b           L_80332734
    // 0x80332694: nop

        goto L_80332734;
    // 0x80332694: nop

L_80332698:
    // 0x80332698: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8033269C: nop

    // 0x803326A0: lh          $t1, 0xA6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA6);
    // 0x803326A4: nop

    // 0x803326A8: addiu       $t7, $t1, -0x1
    ctx->r15 = ADD32(ctx->r9, -0X1);
    // 0x803326AC: sh          $t7, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r15;
    // 0x803326B0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x803326B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326B8: lh          $a0, 0xE8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XE8);
    // 0x803326BC: jal         0x8001B4AC
    // 0x803326C0: nop

    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x803326C0: nop

    after_8:
    // 0x803326C4: beq         $v0, $zero, L_80332734
    if (ctx->r2 == 0) {
        // 0x803326C8: nop
    
            goto L_80332734;
    }
    // 0x803326C8: nop

    // 0x803326CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803326D0: sh          $t2, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r10;
L_803326D4:
    // 0x803326D4: jal         0x80014E80
    // 0x803326D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x803326D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_9:
    // 0x803326DC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x803326E0: lh          $t4, 0x36($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X36);
    // 0x803326E4: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x803326E8: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x803326EC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x803326F0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803326F4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x803326F8: lh          $a0, 0xE8($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XE8);
    // 0x803326FC: addiu       $t8, $t8, -0x70CC
    ctx->r24 = ADD32(ctx->r24, -0X70CC);
    // 0x80332700: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80332704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332708: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    // 0x8033270C: jal         0x8001C0EC
    // 0x80332710: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x80332710: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_10:
    // 0x80332714: lh          $t1, 0x36($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X36);
    // 0x80332718: nop

    // 0x8033271C: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x80332720: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80332724: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80332728: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x8033272C: bne         $at, $zero, L_803326D4
    if (ctx->r1 != 0) {
        // 0x80332730: sh          $t7, 0x36($sp)
        MEM_H(0X36, ctx->r29) = ctx->r15;
            goto L_803326D4;
    }
    // 0x80332730: sh          $t7, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r15;
L_80332734:
    // 0x80332734: b           L_8033273C
    // 0x80332738: nop

        goto L_8033273C;
    // 0x80332738: nop

L_8033273C:
    // 0x8033273C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332740: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80332744: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332748: jr          $ra
    // 0x8033274C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8033274C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80330788_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330788: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033078C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330790: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330794: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330798: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033079C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803307A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803307A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803307B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803307B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803307B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803307BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803307C0: nop

    // 0x803307C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803307C8: nop

    // 0x803307CC: bne         $t1, $zero, L_8033082C
    if (ctx->r9 != 0) {
        // 0x803307D0: nop
    
            goto L_8033082C;
    }
    // 0x803307D0: nop

    // 0x803307D4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803307D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803307DC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803307E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803307E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803307E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803307EC: nop

    // 0x803307F0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803307F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803307F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803307FC: nop

    // 0x80330800: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80330804: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330808: addiu       $t6, $zero, 0x168
    ctx->r14 = ADD32(0, 0X168);
    // 0x8033080C: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80330810: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330814: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033081C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80330820: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330824: jal         0x800175F0
    // 0x80330828: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80330828: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_8033082C:
    // 0x8033082C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330834: jal         0x80029C40
    // 0x80330838: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80330838: nop

    after_1:
    // 0x8033083C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330840: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80330844: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330848: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033084C: jal         0x80015538
    // 0x80330850: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80330850: nop

    after_2:
    // 0x80330854: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330858: nop

    // 0x8033085C: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x80330860: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330864: jal         0x800C00F4
    // 0x80330868: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_800C00F4(rdram, ctx);
        goto after_3;
    // 0x80330868: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_3:
    // 0x8033086C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330870: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330874: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330878: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033087C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80330880: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x80330884: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330888: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033088C: jal         0x80029018
    // 0x80330890: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x80330890: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80330894: beq         $v0, $zero, L_8033089C
    if (ctx->r2 == 0) {
        // 0x80330898: nop
    
            goto L_8033089C;
    }
    // 0x80330898: nop

L_8033089C:
    // 0x8033089C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803308A0: nop

    // 0x803308A4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803308A8: nop

    // 0x803308AC: addiu       $t2, $t1, -0x2
    ctx->r10 = ADD32(ctx->r9, -0X2);
    // 0x803308B0: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x803308B4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803308B8: nop

    // 0x803308BC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x803308C0: nop

    // 0x803308C4: bgtz        $t4, L_803308E4
    if (SIGNED(ctx->r12) > 0) {
        // 0x803308C8: nop
    
            goto L_803308E4;
    }
    // 0x803308C8: nop

    // 0x803308CC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803308D0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803308D4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x803308D8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803308DC: nop

    // 0x803308E0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803308E4:
    // 0x803308E4: b           L_803308EC
    // 0x803308E8: nop

        goto L_803308EC;
    // 0x803308E8: nop

L_803308EC:
    // 0x803308EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803308F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803308F4: jr          $ra
    // 0x803308F8: nop

    return;
    // 0x803308F8: nop

;}
RECOMP_FUNC void func_80330550_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330570: jr          $ra
    // 0x80330574: nop

    return;
    // 0x80330574: nop

    // 0x80330578: jr          $ra
    // 0x8033057C: nop

    return;
    // 0x8033057C: nop

;}
RECOMP_FUNC void func_80330580_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330588: jal         0x80330330
    // 0x8033058C: nop

    func_80330330_unk_bin_48(rdram, ctx);
        goto after_0;
    // 0x8033058C: nop

    after_0:
    // 0x80330590: b           L_80330598
    // 0x80330594: nop

        goto L_80330598;
    // 0x80330594: nop

L_80330598:
    // 0x80330598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033059C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803305A0: jr          $ra
    // 0x803305A4: nop

    return;
    // 0x803305A4: nop

;}
RECOMP_FUNC void func_80331B44_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331B4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331B50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331B54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331B58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331B5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331B64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331B6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331B70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331B74: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331B78: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B7C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331B80: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80331B84: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331B88: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331B8C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331B90: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331B94: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331B98: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331B9C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80331BA0: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80331BA4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331BA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331BAC: lh          $t6, 0xC0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC0);
    // 0x80331BB0: nop

    // 0x80331BB4: beq         $t6, $at, L_80331C14
    if (ctx->r14 == ctx->r1) {
        // 0x80331BB8: nop
    
            goto L_80331C14;
    }
    // 0x80331BB8: nop

    // 0x80331BBC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331BC0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331BC4: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x80331BC8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80331BCC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331BD0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331BD4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331BD8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331BDC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331BE0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80331BE4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80331BE8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331BEC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331BF0: lh          $t3, 0xEC($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEC);
    // 0x80331BF4: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331BF8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331BFC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C00: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331C04: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C08: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331C0C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80331C10: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_80331C14:
    // 0x80331C14: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C18: nop

    // 0x80331C1C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80331C20: nop

    // 0x80331C24: bne         $t8, $zero, L_80331C58
    if (ctx->r24 != 0) {
        // 0x80331C28: nop
    
            goto L_80331C58;
    }
    // 0x80331C28: nop

    // 0x80331C2C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C30: nop

    // 0x80331C34: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80331C38: nop

    // 0x80331C3C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80331C40: sb          $t1, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r9;
    // 0x80331C44: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C48: nop

    // 0x80331C4C: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x80331C50: nop

    // 0x80331C54: sh          $t3, 0xB2($t2)
    MEM_H(0XB2, ctx->r10) = ctx->r11;
L_80331C58:
    // 0x80331C58: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C5C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80331C60: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331C64: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80331C68: jal         0x80015538
    // 0x80331C6C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80331C6C: nop

    after_0:
    // 0x80331C70: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C74: nop

    // 0x80331C78: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x80331C7C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C80: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80331C84: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80331C88: nop

    // 0x80331C8C: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x80331C90: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C94: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331C98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331C9C: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80331CA0: nop

    // 0x80331CA4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80331CA8: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x80331CAC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80331CB0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331CB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331CB8: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80331CBC: nop

    // 0x80331CC0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80331CC4: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x80331CC8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331CCC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331CD0: lh          $t9, 0xC0($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XC0);
    // 0x80331CD4: nop

    // 0x80331CD8: beq         $t9, $at, L_80331D50
    if (ctx->r25 == ctx->r1) {
        // 0x80331CDC: nop
    
            goto L_80331D50;
    }
    // 0x80331CDC: nop

    // 0x80331CE0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331CE4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331CE8: lwc1        $f6, 0x1C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80331CEC: nop

    // 0x80331CF0: swc1        $f6, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f6.u32l;
    // 0x80331CF4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331CF8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331CFC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331D00: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80331D04: jal         0x80015538
    // 0x80331D08: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80331D08: nop

    after_1:
    // 0x80331D0C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80331D10: nop

    // 0x80331D14: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x80331D18: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331D1C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331D20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331D24: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80331D28: nop

    // 0x80331D2C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80331D30: swc1        $f16, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f16.u32l;
    // 0x80331D34: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80331D38: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331D3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331D40: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80331D44: nop

    // 0x80331D48: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80331D4C: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
L_80331D50:
    // 0x80331D50: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331D54: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80331D58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331D5C: lwc1        $f10, 0xD4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x80331D60: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80331D64: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331D68: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x80331D6C: nop

    // 0x80331D70: bc1f        L_80331E10
    if (!c1cs) {
        // 0x80331D74: nop
    
            goto L_80331E10;
    }
    // 0x80331D74: nop

    // 0x80331D78: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331D7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331D80: lh          $t1, 0xC0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC0);
    // 0x80331D84: nop

    // 0x80331D88: beq         $t1, $at, L_80331DE0
    if (ctx->r9 == ctx->r1) {
        // 0x80331D8C: nop
    
            goto L_80331DE0;
    }
    // 0x80331D8C: nop

    // 0x80331D90: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
L_80331D94:
    // 0x80331D94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D9C: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x80331DA0: jal         0x800281A4
    // 0x80331DA4: nop

    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x80331DA4: nop

    after_2:
    // 0x80331DA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80331DAC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80331DB0: jal         0x8002B114
    // 0x80331DB4: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80331DB4: nop

    after_3:
    // 0x80331DB8: lh          $t9, 0x1A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1A);
    // 0x80331DBC: nop

    // 0x80331DC0: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x80331DC4: sll         $t2, $t3, 16
    ctx->r10 = S32(ctx->r11 << 16);
    // 0x80331DC8: sra         $t4, $t2, 16
    ctx->r12 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80331DCC: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80331DD0: bne         $at, $zero, L_80331D94
    if (ctx->r1 != 0) {
        // 0x80331DD4: sh          $t3, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r11;
            goto L_80331D94;
    }
    // 0x80331DD4: sh          $t3, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r11;
    // 0x80331DD8: b           L_80331E00
    // 0x80331DDC: nop

        goto L_80331E00;
    // 0x80331DDC: nop

L_80331DE0:
    // 0x80331DE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DE8: jal         0x800281A4
    // 0x80331DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_4;
    // 0x80331DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80331DF0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80331DF4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80331DF8: jal         0x8002B114
    // 0x80331DFC: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x80331DFC: nop

    after_5:
L_80331E00:
    // 0x80331E00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E08: jal         0x8002B114
    // 0x80331E0C: nop

    func_8002B114(rdram, ctx);
        goto after_6;
    // 0x80331E0C: nop

    after_6:
L_80331E10:
    // 0x80331E10: b           L_80331E18
    // 0x80331E14: nop

        goto L_80331E18;
    // 0x80331E14: nop

L_80331E18:
    // 0x80331E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331E1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331E20: jr          $ra
    // 0x80331E24: nop

    return;
    // 0x80331E24: nop

;}
RECOMP_FUNC void func_8033151C_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033151C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80331520: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331524: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331528: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033152C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331530: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331534: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331538: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033153C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331540: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331548: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033154C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331550: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331554: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80331558: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033155C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331560: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80331564: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331568: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033156C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331570: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331574: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331578: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033157C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80331580: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x80331584: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331588: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033158C: lh          $t6, 0xEA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XEA);
    // 0x80331590: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331594: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331598: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033159C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803315A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803315A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803315A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803315AC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x803315B0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803315B4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803315B8: lh          $t1, 0xEC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEC);
    // 0x803315BC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803315C0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803315C4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803315C8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803315CC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803315D0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803315D4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803315D8: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x803315DC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803315E0: nop

    // 0x803315E4: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x803315E8: nop

    // 0x803315EC: bne         $t6, $zero, L_80331620
    if (ctx->r14 != 0) {
        // 0x803315F0: nop
    
            goto L_80331620;
    }
    // 0x803315F0: nop

    // 0x803315F4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803315F8: nop

    // 0x803315FC: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80331600: nop

    // 0x80331604: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80331608: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033160C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331610: nop

    // 0x80331614: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80331618: nop

    // 0x8033161C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
L_80331620:
    // 0x80331620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331624: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331628: jal         0x8002A8B4
    // 0x8033162C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x8033162C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_0:
    // 0x80331630: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331634: nop

    // 0x80331638: lwc1        $f4, 0x3C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x8033163C: nop

    // 0x80331640: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
    // 0x80331644: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331648: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8033164C: lwc1        $f20, 0x1C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80331650: nop

    // 0x80331654: swc1        $f20, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f20.u32l;
    // 0x80331658: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8033165C: nop

    // 0x80331660: swc1        $f20, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f20.u32l;
    // 0x80331664: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80331668: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033166C: lwc1        $f20, 0x1C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80331670: nop

    // 0x80331674: swc1        $f20, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f20.u32l;
    // 0x80331678: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8033167C: nop

    // 0x80331680: swc1        $f20, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f20.u32l;
    // 0x80331684: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331688: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033168C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331690: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80331694: jal         0x80015538
    // 0x80331698: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80331698: nop

    after_1:
    // 0x8033169C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x803316A0: nop

    // 0x803316A4: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x803316A8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x803316AC: nop

    // 0x803316B0: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803316B4: nop

    // 0x803316B8: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x803316BC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803316C0: nop

    // 0x803316C4: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x803316C8: nop

    // 0x803316CC: bne         $t3, $zero, L_803317E0
    if (ctx->r11 != 0) {
        // 0x803316D0: nop
    
            goto L_803317E0;
    }
    // 0x803316D0: nop

    // 0x803316D4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x803316D8: lw          $t4, 0x51A4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X51A4);
    // 0x803316DC: nop

    // 0x803316E0: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x803316E4: beq         $t5, $zero, L_803317D8
    if (ctx->r13 == 0) {
        // 0x803316E8: nop
    
            goto L_803317D8;
    }
    // 0x803316E8: nop

    // 0x803316EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803316F0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x803316F4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803316F8: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x803316FC: nop

    // 0x80331700: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80331704: nop

    // 0x80331708: bc1f        L_803317D8
    if (!c1cs) {
        // 0x8033170C: nop
    
            goto L_803317D8;
    }
    // 0x8033170C: nop

    // 0x80331710: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331714: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331718: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x8033171C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331720: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80331724: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331728: jal         0x8001ABF4
    // 0x8033172C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033172C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80331730: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80331734: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80331738: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x8033173C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331740: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x80331744: sh          $t7, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r15;
    // 0x80331748: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033174C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331750: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331754: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80331758: nop

    // 0x8033175C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331760: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x80331764: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331768: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
L_8033176C:
    // 0x8033176C: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x80331770: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331774: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80331778: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8033177C: lh          $t8, 0xE8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XE8);
    // 0x80331780: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331784: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331788: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033178C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331790: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331794: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331798: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033179C: addu        $t1, $t9, $t7
    ctx->r9 = ADD32(ctx->r25, ctx->r15);
    // 0x803317A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803317A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803317A8: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x803317AC: nop

    // 0x803317B0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803317B4: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x803317B8: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x803317BC: nop

    // 0x803317C0: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x803317C4: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x803317C8: sra         $t3, $t4, 16
    ctx->r11 = S32(SIGNED(ctx->r12) >> 16);
    // 0x803317CC: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x803317D0: bne         $at, $zero, L_8033176C
    if (ctx->r1 != 0) {
        // 0x803317D4: sh          $t2, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r10;
            goto L_8033176C;
    }
    // 0x803317D4: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
L_803317D8:
    // 0x803317D8: b           L_80331A40
    // 0x803317DC: nop

        goto L_80331A40;
    // 0x803317DC: nop

L_803317E0:
    // 0x803317E0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803317E4: nop

    // 0x803317E8: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x803317EC: nop

    // 0x803317F0: bne         $t6, $zero, L_803318D0
    if (ctx->r14 != 0) {
        // 0x803317F4: nop
    
            goto L_803318D0;
    }
    // 0x803317F4: nop

    // 0x803317F8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803317FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331800: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80331804: nop

    // 0x80331808: bne         $t9, $at, L_803318BC
    if (ctx->r25 != ctx->r1) {
        // 0x8033180C: nop
    
            goto L_803318BC;
    }
    // 0x8033180C: nop

    // 0x80331810: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331814: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331818: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033181C: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80331820: nop

    // 0x80331824: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80331828: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
    // 0x8033182C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80331830: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
L_80331834:
    // 0x80331834: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x80331838: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033183C: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x80331840: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x80331844: lh          $t5, 0xE8($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XE8);
    // 0x80331848: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033184C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331850: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331854: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331858: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033185C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331860: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331864: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80331868: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033186C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331870: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80331874: nop

    // 0x80331878: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8033187C: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
    // 0x80331880: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x80331884: nop

    // 0x80331888: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x8033188C: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x80331890: sra         $t0, $t2, 16
    ctx->r8 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80331894: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80331898: bne         $at, $zero, L_80331834
    if (ctx->r1 != 0) {
        // 0x8033189C: sh          $t1, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r9;
            goto L_80331834;
    }
    // 0x8033189C: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x803318A0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x803318A4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803318A8: sh          $t4, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r12;
    // 0x803318AC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803318B0: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x803318B4: b           L_803318C8
    // 0x803318B8: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
        goto L_803318C8;
    // 0x803318B8: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
L_803318BC:
    // 0x803318BC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803318C0: nop

    // 0x803318C4: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_803318C8:
    // 0x803318C8: b           L_80331A40
    // 0x803318CC: nop

        goto L_80331A40;
    // 0x803318CC: nop

L_803318D0:
    // 0x803318D0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803318D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803318D8: lh          $t7, 0xA6($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XA6);
    // 0x803318DC: nop

    // 0x803318E0: bne         $t7, $at, L_80331980
    if (ctx->r15 != ctx->r1) {
        // 0x803318E4: nop
    
            goto L_80331980;
    }
    // 0x803318E4: nop

    // 0x803318E8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x803318EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803318F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803318F4: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x803318F8: nop

    // 0x803318FC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331900: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x80331904: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331908: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
L_8033190C:
    // 0x8033190C: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x80331910: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331914: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x80331918: addu        $t5, $t0, $t3
    ctx->r13 = ADD32(ctx->r8, ctx->r11);
    // 0x8033191C: lh          $t6, 0xE8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE8);
    // 0x80331920: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331924: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80331928: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033192C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331930: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80331934: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331938: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8033193C: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x80331940: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331944: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331948: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8033194C: nop

    // 0x80331950: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331954: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x80331958: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x8033195C: nop

    // 0x80331960: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80331964: sll         $t4, $t2, 16
    ctx->r12 = S32(ctx->r10 << 16);
    // 0x80331968: sra         $t0, $t4, 16
    ctx->r8 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8033196C: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80331970: bne         $at, $zero, L_8033190C
    if (ctx->r1 != 0) {
        // 0x80331974: sh          $t2, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r10;
            goto L_8033190C;
    }
    // 0x80331974: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
    // 0x80331978: b           L_80331A28
    // 0x8033197C: nop

        goto L_80331A28;
    // 0x8033197C: nop

L_80331980:
    // 0x80331980: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331984: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331988: lh          $t5, 0xA6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA6);
    // 0x8033198C: nop

    // 0x80331990: bne         $t5, $at, L_80331A28
    if (ctx->r13 != ctx->r1) {
        // 0x80331994: nop
    
            goto L_80331A28;
    }
    // 0x80331994: nop

    // 0x80331998: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033199C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803319A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803319A4: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x803319A8: nop

    // 0x803319AC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803319B0: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x803319B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803319B8: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
L_803319BC:
    // 0x803319BC: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x803319C0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803319C4: sll         $t1, $t7, 1
    ctx->r9 = S32(ctx->r15 << 1);
    // 0x803319C8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x803319CC: lh          $t4, 0xE8($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XE8);
    // 0x803319D0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803319D4: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x803319D8: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x803319DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803319E0: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x803319E4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803319E8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803319EC: addu        $t5, $t0, $t3
    ctx->r13 = ADD32(ctx->r8, ctx->r11);
    // 0x803319F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803319F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803319F8: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803319FC: nop

    // 0x80331A00: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80331A04: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
    // 0x80331A08: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x80331A0C: nop

    // 0x80331A10: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80331A14: sll         $t7, $t8, 16
    ctx->r15 = S32(ctx->r24 << 16);
    // 0x80331A18: sra         $t9, $t7, 16
    ctx->r25 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80331A1C: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x80331A20: bne         $at, $zero, L_803319BC
    if (ctx->r1 != 0) {
        // 0x80331A24: sh          $t8, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r24;
            goto L_803319BC;
    }
    // 0x80331A24: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
L_80331A28:
    // 0x80331A28: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331A2C: nop

    // 0x80331A30: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x80331A34: nop

    // 0x80331A38: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80331A3C: sh          $t4, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r12;
L_80331A40:
    // 0x80331A40: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331A44: nop

    // 0x80331A48: lh          $t3, 0xA6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA6);
    // 0x80331A4C: nop

    // 0x80331A50: bne         $t3, $zero, L_80331AA4
    if (ctx->r11 != 0) {
        // 0x80331A54: nop
    
            goto L_80331AA4;
    }
    // 0x80331A54: nop

    // 0x80331A58: lh          $t5, 0xA8($t0)
    ctx->r13 = MEM_H(ctx->r8, 0XA8);
    // 0x80331A5C: nop

    // 0x80331A60: bne         $t5, $zero, L_80331AA4
    if (ctx->r13 != 0) {
        // 0x80331A64: nop
    
            goto L_80331AA4;
    }
    // 0x80331A64: nop

    // 0x80331A68: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331A6C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80331A70: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x80331A74: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331A7C: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80331A80: jal         0x8001B4AC
    // 0x80331A84: nop

    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80331A84: nop

    after_3:
    // 0x80331A88: beq         $v0, $zero, L_80331A9C
    if (ctx->r2 == 0) {
        // 0x80331A8C: nop
    
            goto L_80331A9C;
    }
    // 0x80331A8C: nop

    // 0x80331A90: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80331A94: nop

    // 0x80331A98: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80331A9C:
    // 0x80331A9C: b           L_80331B28
    // 0x80331AA0: nop

        goto L_80331B28;
    // 0x80331AA0: nop

L_80331AA4:
    // 0x80331AA4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331AA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331AAC: lh          $a0, 0xE8($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XE8);
    // 0x80331AB0: jal         0x8001B4AC
    // 0x80331AB4: nop

    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80331AB4: nop

    after_4:
    // 0x80331AB8: beq         $v0, $zero, L_80331B28
    if (ctx->r2 == 0) {
        // 0x80331ABC: nop
    
            goto L_80331B28;
    }
    // 0x80331ABC: nop

    // 0x80331AC0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80331AC4: sh          $t4, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r12;
L_80331AC8:
    // 0x80331AC8: jal         0x80014E80
    // 0x80331ACC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x80331ACC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_5:
    // 0x80331AD0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80331AD4: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
    // 0x80331AD8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331ADC: sll         $t0, $t3, 1
    ctx->r8 = S32(ctx->r11 << 1);
    // 0x80331AE0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80331AE4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80331AE8: addu        $t5, $t1, $t0
    ctx->r13 = ADD32(ctx->r9, ctx->r8);
    // 0x80331AEC: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x80331AF0: addiu       $t6, $t6, -0x70CC
    ctx->r14 = ADD32(ctx->r14, -0X70CC);
    // 0x80331AF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80331AF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331AFC: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    // 0x80331B00: jal         0x8001C0EC
    // 0x80331B04: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80331B04: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_6:
    // 0x80331B08: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x80331B0C: nop

    // 0x80331B10: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80331B14: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80331B18: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80331B1C: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x80331B20: bne         $at, $zero, L_80331AC8
    if (ctx->r1 != 0) {
        // 0x80331B24: sh          $t7, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r15;
            goto L_80331AC8;
    }
    // 0x80331B24: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
L_80331B28:
    // 0x80331B28: b           L_80331B30
    // 0x80331B2C: nop

        goto L_80331B30;
    // 0x80331B2C: nop

L_80331B30:
    // 0x80331B30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331B34: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331B38: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331B3C: jr          $ra
    // 0x80331B40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80331B40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80330FCC_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330FCC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330FD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80330FD4: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330FD8: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80330FDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330FE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330FE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330FE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330FEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330FF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330FF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330FF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330FFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331000: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331004: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331008: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033100C: nop

    // 0x80331010: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331014: nop

    // 0x80331018: bne         $t1, $zero, L_803311F0
    if (ctx->r9 != 0) {
        // 0x8033101C: nop
    
            goto L_803311F0;
    }
    // 0x8033101C: nop

    // 0x80331020: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331024: nop

    // 0x80331028: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033102C: nop

    // 0x80331030: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331034: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331038: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033103C: nop

    // 0x80331040: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331044: nop

    // 0x80331048: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033104C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331050: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331054: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331058: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8033105C: jal         0x80015538
    // 0x80331060: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80331060: nop

    after_0:
    // 0x80331064: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331068: nop

    // 0x8033106C: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80331070: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331074: nop

    // 0x80331078: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033107C: nop

    // 0x80331080: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
    // 0x80331084: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331088: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033108C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331090: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80331094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331098: jal         0x8001ABF4
    // 0x8033109C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033109C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803310A0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803310A4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803310A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803310AC: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x803310B0: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x803310B4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803310B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310BC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803310C0: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803310C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310C8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803310CC: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803310D0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x803310D4: addiu       $a2, $a2, 0x4324
    ctx->r6 = ADD32(ctx->r6, 0X4324);
    // 0x803310D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803310DC: jal         0x80027C00
    // 0x803310E0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_80027C00(rdram, ctx);
        goto after_2;
    // 0x803310E0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x803310E4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803310E8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803310EC: lh          $t3, 0xEA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XEA);
    // 0x803310F0: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803310F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803310F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803310FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331100: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331104: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331108: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x8033110C: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80331110: nop

    // 0x80331114: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x80331118: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033111C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331120: addiu       $t7, $t7, -0x70CC
    ctx->r15 = ADD32(ctx->r15, -0X70CC);
    // 0x80331124: lh          $a0, 0xEA($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XEA);
    // 0x80331128: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033112C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331134: jal         0x8001C0EC
    // 0x80331138: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80331138: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    after_3:
    // 0x8033113C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331140: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331144: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331148: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033114C: jal         0x80015538
    // 0x80331150: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80331150: nop

    after_4:
    // 0x80331154: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331158: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033115C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331160: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80331164: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x80331168: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033116C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331170: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331174: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033117C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80331180: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80331184: addiu       $a2, $a2, 0x4324
    ctx->r6 = ADD32(ctx->r6, 0X4324);
    // 0x80331188: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8033118C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331190: jal         0x80027C00
    // 0x80331194: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027C00(rdram, ctx);
        goto after_5;
    // 0x80331194: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80331198: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033119C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803311A0: lh          $t1, 0xEC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEC);
    // 0x803311A4: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803311A8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803311AC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803311B0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803311B4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803311B8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803311BC: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x803311C0: lwc1        $f18, 0x1C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803311C4: nop

    // 0x803311C8: swc1        $f18, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f18.u32l;
    // 0x803311CC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803311D0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x803311D4: addiu       $t5, $t5, -0x70CC
    ctx->r13 = ADD32(ctx->r13, -0X70CC);
    // 0x803311D8: lh          $a0, 0xEC($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XEC);
    // 0x803311DC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803311E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803311E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803311E8: jal         0x8001C0EC
    // 0x803311EC: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x803311EC: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    after_6:
L_803311F0:
    // 0x803311F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311F8: jal         0x8002A1FC
    // 0x803311FC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x803311FC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_7:
    // 0x80331200: beq         $v0, $zero, L_80331220
    if (ctx->r2 == 0) {
        // 0x80331204: nop
    
            goto L_80331220;
    }
    // 0x80331204: nop

    // 0x80331208: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033120C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80331210: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80331214: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331218: nop

    // 0x8033121C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80331220:
    // 0x80331220: b           L_80331228
    // 0x80331224: nop

        goto L_80331228;
    // 0x80331224: nop

L_80331228:
    // 0x80331228: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8033122C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80331230: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331234: jr          $ra
    // 0x80331238: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80331238: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033092C_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033092C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330934: jal         0x80330788
    // 0x80330938: nop

    func_80330788_unk_bin_48(rdram, ctx);
        goto after_0;
    // 0x80330938: nop

    after_0:
    // 0x8033093C: b           L_80330944
    // 0x80330940: nop

        goto L_80330944;
    // 0x80330940: nop

L_80330944:
    // 0x80330944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033094C: jr          $ra
    // 0x80330950: nop

    return;
    // 0x80330950: nop

;}
RECOMP_FUNC void func_80332B34_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332B34: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332B38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332B3C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332B40: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80332B44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332B48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332B4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332B50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332B54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332B70: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B74: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332B78: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332B7C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80332B80: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332B84: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332B88: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332B8C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332B90: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332B94: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80332B98: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80332B9C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332BA0: nop

    // 0x80332BA4: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80332BA8: nop

    // 0x80332BAC: bne         $t6, $zero, L_80332BFC
    if (ctx->r14 != 0) {
        // 0x80332BB0: nop
    
            goto L_80332BFC;
    }
    // 0x80332BB0: nop

    // 0x80332BB4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332BB8: nop

    // 0x80332BBC: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80332BC0: nop

    // 0x80332BC4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332BC8: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80332BCC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332BD0: nop

    // 0x80332BD4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332BD8: nop

    // 0x80332BDC: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80332BE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332BE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BE8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332BEC: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80332BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332BF4: jal         0x8001ABF4
    // 0x80332BF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80332BF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_80332BFC:
    // 0x80332BFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C04: jal         0x8002A8B4
    // 0x80332C08: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80332C08: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x80332C0C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C10: nop

    // 0x80332C14: lwc1        $f4, 0x3C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80332C18: nop

    // 0x80332C1C: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
    // 0x80332C20: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C24: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80332C28: lwc1        $f20, 0x1C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332C2C: nop

    // 0x80332C30: swc1        $f20, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f20.u32l;
    // 0x80332C34: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80332C38: nop

    // 0x80332C3C: swc1        $f20, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f20.u32l;
    // 0x80332C40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C48: jal         0x8002A2EC
    // 0x80332C4C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x80332C4C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_2:
    // 0x80332C50: beq         $v0, $zero, L_80332C70
    if (ctx->r2 == 0) {
        // 0x80332C54: nop
    
            goto L_80332C70;
    }
    // 0x80332C54: nop

    // 0x80332C58: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C5C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x80332C60: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x80332C64: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C68: nop

    // 0x80332C6C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80332C70:
    // 0x80332C70: b           L_80332C78
    // 0x80332C74: nop

        goto L_80332C78;
    // 0x80332C74: nop

L_80332C78:
    // 0x80332C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332C7C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80332C80: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80332C84: jr          $ra
    // 0x80332C88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80332C88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80332750_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332750: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332758: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033275C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332760: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332764: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033276C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332774: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332778: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033277C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332780: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332784: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332788: nop

    // 0x8033278C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332790: nop

    // 0x80332794: bne         $t1, $zero, L_8033281C
    if (ctx->r9 != 0) {
        // 0x80332798: nop
    
            goto L_8033281C;
    }
    // 0x80332798: nop

    // 0x8033279C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803327A0: nop

    // 0x803327A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803327A8: nop

    // 0x803327AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803327B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803327B4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803327B8: nop

    // 0x803327BC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803327C0: nop

    // 0x803327C4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803327C8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803327CC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803327D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803327D4: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803327D8: jal         0x80015538
    // 0x803327DC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803327DC: nop

    after_0:
    // 0x803327E0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803327E4: nop

    // 0x803327E8: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x803327EC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803327F0: nop

    // 0x803327F4: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803327F8: nop

    // 0x803327FC: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
    // 0x80332800: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332804: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332808: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033280C: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80332810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332814: jal         0x8001ABF4
    // 0x80332818: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332818: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_8033281C:
    // 0x8033281C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332820: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332824: jal         0x8002A1FC
    // 0x80332828: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x80332828: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_2:
    // 0x8033282C: beq         $v0, $zero, L_8033284C
    if (ctx->r2 == 0) {
        // 0x80332830: nop
    
            goto L_8033284C;
    }
    // 0x80332830: nop

    // 0x80332834: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80332838: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x8033283C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80332840: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332844: nop

    // 0x80332848: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033284C:
    // 0x8033284C: b           L_80332854
    // 0x80332850: nop

        goto L_80332854;
    // 0x80332850: nop

L_80332854:
    // 0x80332854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332858: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033285C: jr          $ra
    // 0x80332860: nop

    return;
    // 0x80332860: nop

;}
RECOMP_FUNC void func_80330954_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330954: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330958: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033095C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330960: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330964: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80330968: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033096C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330970: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330974: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80330978: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033097C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330980: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330984: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330988: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033098C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330990: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330994: addiu       $a1, $a1, 0x430C
    ctx->r5 = ADD32(ctx->r5, 0X430C);
    // 0x80330998: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033099C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803309A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x803309A4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803309A8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803309AC: jal         0x80027464
    // 0x803309B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803309B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803309B4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x803309B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803309BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803309C0: beq         $t1, $at, L_80330D44
    if (ctx->r9 == ctx->r1) {
        // 0x803309C4: nop
    
            goto L_80330D44;
    }
    // 0x803309C4: nop

    // 0x803309C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803309CC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x803309D0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803309D4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803309D8: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x803309DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803309E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803309E4: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x803309E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803309EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309F0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803309F4: sh          $t3, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r11;
    // 0x803309F8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x803309FC: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80330A00: nop

    // 0x80330A04: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x80330A08: nop

    // 0x80330A0C: bne         $t8, $zero, L_80330AE0
    if (ctx->r24 != 0) {
        // 0x80330A10: nop
    
            goto L_80330AE0;
    }
    // 0x80330A10: nop

    // 0x80330A14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330A18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330A1C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A20: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80330A24: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80330A28: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330A2C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330A30: jal         0x800295C0
    // 0x80330A34: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x80330A34: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80330A38: beq         $v0, $zero, L_80330A6C
    if (ctx->r2 == 0) {
        // 0x80330A3C: nop
    
            goto L_80330A6C;
    }
    // 0x80330A3C: nop

    // 0x80330A40: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A44: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330A48: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80330A4C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330A50: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330A54: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330A58: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330A5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A60: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330A64: b           L_80330A94
    // 0x80330A68: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_80330A94;
    // 0x80330A68: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_80330A6C:
    // 0x80330A6C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A70: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330A74: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330A78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330A7C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330A80: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330A84: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330A88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A8C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330A90: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_80330A94:
    // 0x80330A94: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A98: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330A9C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80330AA0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330AA4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330AA8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330AAC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330AB0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330AB4: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x80330AB8: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x80330ABC: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80330AC0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330AC4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330AC8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330ACC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330AD0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330AD4: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x80330AD8: b           L_80330D44
    // 0x80330ADC: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
        goto L_80330D44;
    // 0x80330ADC: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
L_80330AE0:
    // 0x80330AE0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330AE4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330AE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330AEC: lh          $t0, 0xA($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XA);
    // 0x80330AF0: nop

    // 0x80330AF4: bne         $t0, $at, L_80330BF0
    if (ctx->r8 != ctx->r1) {
        // 0x80330AF8: nop
    
            goto L_80330BF0;
    }
    // 0x80330AF8: nop

    // 0x80330AFC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330B00: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330B04: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B08: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80330B0C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80330B10: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330B14: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80330B18: jal         0x800295C0
    // 0x80330B1C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x80330B1C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80330B20: beq         $v0, $zero, L_80330B54
    if (ctx->r2 == 0) {
        // 0x80330B24: nop
    
            goto L_80330B54;
    }
    // 0x80330B24: nop

    // 0x80330B28: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B2C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330B30: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330B34: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330B38: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330B3C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330B40: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330B44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B48: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330B4C: b           L_80330B7C
    // 0x80330B50: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
        goto L_80330B7C;
    // 0x80330B50: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
L_80330B54:
    // 0x80330B54: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B58: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330B5C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330B60: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330B64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330B68: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330B6C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330B70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B74: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330B78: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_80330B7C:
    // 0x80330B7C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B80: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330B84: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330B88: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330B8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330B90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330B94: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330B98: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330B9C: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x80330BA0: lh          $t6, 0xE8($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XE8);
    // 0x80330BA4: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80330BA8: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80330BAC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330BB0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330BB4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330BB8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330BBC: addu        $t1, $t0, $t3
    ctx->r9 = ADD32(ctx->r8, ctx->r11);
    // 0x80330BC0: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x80330BC4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BCC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330BD0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330BD4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330BD8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330BDC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330BE0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330BE4: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80330BE8: b           L_80330D44
    // 0x80330BEC: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
        goto L_80330D44;
    // 0x80330BEC: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
L_80330BF0:
    // 0x80330BF0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80330BF4: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80330BF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330BFC: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x80330C00: nop

    // 0x80330C04: bne         $t8, $at, L_80330D44
    if (ctx->r24 != ctx->r1) {
        // 0x80330C08: nop
    
            goto L_80330D44;
    }
    // 0x80330C08: nop

    // 0x80330C0C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330C10: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330C14: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C18: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80330C1C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80330C20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330C24: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80330C28: jal         0x800295C0
    // 0x80330C2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x80330C2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80330C30: beq         $v0, $zero, L_80330C64
    if (ctx->r2 == 0) {
        // 0x80330C34: nop
    
            goto L_80330C64;
    }
    // 0x80330C34: nop

    // 0x80330C38: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C3C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330C40: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80330C44: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330C48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330C4C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330C50: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330C54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C58: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330C5C: b           L_80330C8C
    // 0x80330C60: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
        goto L_80330C8C;
    // 0x80330C60: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
L_80330C64:
    // 0x80330C64: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C68: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330C6C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80330C70: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80330C74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330C78: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80330C7C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330C80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C84: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330C88: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
L_80330C8C:
    // 0x80330C8C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C90: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330C94: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80330C98: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80330C9C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330CA0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80330CA4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330CA8: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330CAC: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x80330CB0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330CB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330CB8: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80330CBC: nop

    // 0x80330CC0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80330CC4: swc1        $f16, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f16.u32l;
    // 0x80330CC8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CCC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330CD0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330CD4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330CD8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330CDC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330CE0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330CE4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80330CE8: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80330CEC: lh          $t0, 0xE8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XE8);
    // 0x80330CF0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330CF4: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80330CF8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80330CFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330D00: lwc1        $f18, 0x4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80330D04: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330D08: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80330D0C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330D10: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330D14: addu        $t1, $t3, $t9
    ctx->r9 = ADD32(ctx->r11, ctx->r25);
    // 0x80330D18: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
    // 0x80330D1C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D24: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80330D28: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80330D2C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330D30: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80330D34: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330D38: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330D3C: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x80330D40: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
L_80330D44:
    // 0x80330D44: b           L_80330D4C
    // 0x80330D48: nop

        goto L_80330D4C;
    // 0x80330D48: nop

L_80330D4C:
    // 0x80330D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330D54: jr          $ra
    // 0x80330D58: nop

    return;
    // 0x80330D58: nop

;}
RECOMP_FUNC void func_8033123C_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033123C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80331240: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331244: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331248: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033124C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331250: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331254: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331258: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033125C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331260: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331264: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331268: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033126C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331270: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331274: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80331278: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033127C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331280: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80331284: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331288: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033128C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331290: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331294: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331298: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033129C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803312A0: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x803312A4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803312A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803312AC: lh          $t6, 0xEA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XEA);
    // 0x803312B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803312B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803312B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803312C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803312C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803312CC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x803312D0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803312D4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803312D8: lh          $t1, 0xEC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEC);
    // 0x803312DC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803312E0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803312E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803312E8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803312EC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803312F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803312F4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803312F8: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x803312FC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331300: nop

    // 0x80331304: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80331308: nop

    // 0x8033130C: bne         $t6, $zero, L_8033140C
    if (ctx->r14 != 0) {
        // 0x80331310: nop
    
            goto L_8033140C;
    }
    // 0x80331310: nop

    // 0x80331314: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331318: nop

    // 0x8033131C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80331320: nop

    // 0x80331324: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80331328: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033132C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331330: nop

    // 0x80331334: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80331338: nop

    // 0x8033133C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80331340: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331344: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80331348: addiu       $t2, $t2, -0x7138
    ctx->r10 = ADD32(ctx->r10, -0X7138);
    // 0x8033134C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331350: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80331354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033135C: jal         0x8001C0EC
    // 0x80331360: addiu       $a3, $zero, 0x5C
    ctx->r7 = ADD32(0, 0X5C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331360: addiu       $a3, $zero, 0x5C
    ctx->r7 = ADD32(0, 0X5C);
    after_0:
    // 0x80331364: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033136C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331370: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80331374: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331378: jal         0x8001ABF4
    // 0x8033137C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033137C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331380: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331384: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80331388: addiu       $t4, $t4, -0x70BC
    ctx->r12 = ADD32(ctx->r12, -0X70BC);
    // 0x8033138C: lh          $a0, 0xE8($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XE8);
    // 0x80331390: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80331394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331398: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033139C: jal         0x8001C0EC
    // 0x803313A0: addiu       $a3, $zero, 0x5E
    ctx->r7 = ADD32(0, 0X5E);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803313A0: addiu       $a3, $zero, 0x5E
    ctx->r7 = ADD32(0, 0X5E);
    after_2:
    // 0x803313A4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803313A8: sh          $t5, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r13;
L_803313AC:
    // 0x803313AC: jal         0x80014E80
    // 0x803313B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x803313B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x803313B4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x803313B8: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x803313BC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803313C0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x803313C4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803313C8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803313CC: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x803313D0: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x803313D4: addiu       $t1, $t1, -0x70CC
    ctx->r9 = ADD32(ctx->r9, -0X70CC);
    // 0x803313D8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803313DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803313E0: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    // 0x803313E4: jal         0x8001C0EC
    // 0x803313E8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x803313E8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_4:
    // 0x803313EC: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x803313F0: nop

    // 0x803313F4: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x803313F8: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x803313FC: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80331400: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80331404: bne         $at, $zero, L_803313AC
    if (ctx->r1 != 0) {
        // 0x80331408: sh          $t2, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r10;
            goto L_803313AC;
    }
    // 0x80331408: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
L_8033140C:
    // 0x8033140C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331410: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331414: jal         0x8002A8B4
    // 0x80331418: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x80331418: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x8033141C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331420: nop

    // 0x80331424: lwc1        $f4, 0x3C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80331428: nop

    // 0x8033142C: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
    // 0x80331430: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331434: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80331438: lwc1        $f20, 0x1C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033143C: nop

    // 0x80331440: swc1        $f20, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f20.u32l;
    // 0x80331444: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80331448: nop

    // 0x8033144C: swc1        $f20, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f20.u32l;
    // 0x80331450: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331454: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331458: lwc1        $f20, 0x1C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8033145C: nop

    // 0x80331460: swc1        $f20, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f20.u32l;
    // 0x80331464: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331468: nop

    // 0x8033146C: swc1        $f20, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f20.u32l;
    // 0x80331470: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331474: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331478: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033147C: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331480: jal         0x80015538
    // 0x80331484: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80331484: nop

    after_6:
    // 0x80331488: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8033148C: nop

    // 0x80331490: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x80331494: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80331498: nop

    // 0x8033149C: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803314A0: nop

    // 0x803314A4: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
    // 0x803314A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314B0: jal         0x8002A2EC
    // 0x803314B4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x803314B4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_7:
    // 0x803314B8: beq         $v0, $zero, L_803314D8
    if (ctx->r2 == 0) {
        // 0x803314BC: nop
    
            goto L_803314D8;
    }
    // 0x803314BC: nop

    // 0x803314C0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803314C4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x803314C8: sh          $t5, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r13;
    // 0x803314CC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803314D0: b           L_80331500
    // 0x803314D4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_80331500;
    // 0x803314D4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803314D8:
    // 0x803314D8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803314DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803314E0: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x803314E4: jal         0x8001B4AC
    // 0x803314E8: nop

    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x803314E8: nop

    after_8:
    // 0x803314EC: beq         $v0, $zero, L_80331500
    if (ctx->r2 == 0) {
        // 0x803314F0: nop
    
            goto L_80331500;
    }
    // 0x803314F0: nop

    // 0x803314F4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803314F8: nop

    // 0x803314FC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80331500:
    // 0x80331500: b           L_80331508
    // 0x80331504: nop

        goto L_80331508;
    // 0x80331504: nop

L_80331508:
    // 0x80331508: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033150C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331510: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331514: jr          $ra
    // 0x80331518: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80331518: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80332C8C_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C8C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80332C90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332C94: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332C98: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332C9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332CA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332CA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332CA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332CAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332CB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332CBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332CC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332CC4: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80332CC8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80332CCC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332CD0: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332CD4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80332CD8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332CDC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332CE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332CE4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332CE8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332CEC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80332CF0: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x80332CF4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80332CF8: nop

    // 0x80332CFC: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80332D00: nop

    // 0x80332D04: bne         $t6, $zero, L_80332E70
    if (ctx->r14 != 0) {
        // 0x80332D08: nop
    
            goto L_80332E70;
    }
    // 0x80332D08: nop

    // 0x80332D0C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80332D10: nop

    // 0x80332D14: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80332D18: nop

    // 0x80332D1C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332D20: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80332D24: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80332D28: nop

    // 0x80332D2C: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332D30: nop

    // 0x80332D34: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80332D38: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80332D3C: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x80332D40: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x80332D44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D48: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332D4C: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80332D50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D54: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80332D58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D5C: jal         0x8001ABF4
    // 0x80332D60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80332D60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80332D64: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80332D68: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332D6C: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80332D70: lwc1        $f9, 0x3410($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3410);
    // 0x80332D74: lwc1        $f8, 0x3414($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3414);
    // 0x80332D78: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80332D7C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80332D80: jal         0x80034970
    // 0x80332D84: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80332D84: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80332D88: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x80332D8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332D90: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80332D94: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80332D98: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80332D9C: nop

    // 0x80332DA0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80332DA4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80332DA8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80332DAC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332DB0: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332DB4: lwc1        $f17, 0x3418($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X3418);
    // 0x80332DB8: lwc1        $f16, 0x341C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X341C);
    // 0x80332DBC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80332DC0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80332DC4: jal         0x80036570
    // 0x80332DC8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x80332DC8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x80332DCC: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x80332DD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332DD4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80332DD8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80332DDC: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80332DE0: nop

    // 0x80332DE4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80332DE8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80332DEC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80332DF0: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332DF4: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x80332DF8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332DFC: lwc1        $f18, 0x1C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332E00: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80332E04: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80332E08: addiu       $a1, $a1, 0x4330
    ctx->r5 = ADD32(ctx->r5, 0X4330);
    // 0x80332E0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332E10: jal         0x80027464
    // 0x80332E14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80332E14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80332E18: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80332E1C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80332E20: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80332E24: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80332E28: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80332E2C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332E30: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80332E34: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80332E38: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332E3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E40: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332E44: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x80332E48: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80332E4C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80332E50: nop

    // 0x80332E54: sh          $t2, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r10;
    // 0x80332E58: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80332E5C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332E60: addiu       $a3, $a3, -0x7034
    ctx->r7 = ADD32(ctx->r7, -0X7034);
    // 0x80332E64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332E68: jal         0x8001ABF4
    // 0x80332E6C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80332E6C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
L_80332E70:
    // 0x80332E70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E78: jal         0x8002A8B4
    // 0x80332E7C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x80332E7C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x80332E80: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80332E84: nop

    // 0x80332E88: lwc1        $f4, 0x3C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80332E8C: nop

    // 0x80332E90: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
    // 0x80332E94: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80332E98: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80332E9C: lwc1        $f20, 0x1C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80332EA0: nop

    // 0x80332EA4: swc1        $f20, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f20.u32l;
    // 0x80332EA8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80332EAC: nop

    // 0x80332EB0: swc1        $f20, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f20.u32l;
    // 0x80332EB4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80332EB8: nop

    // 0x80332EBC: lh          $t1, 0xA6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA6);
    // 0x80332EC0: nop

    // 0x80332EC4: bne         $t1, $zero, L_80332EFC
    if (ctx->r9 != 0) {
        // 0x80332EC8: nop
    
            goto L_80332EFC;
    }
    // 0x80332EC8: nop

    // 0x80332ECC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80332ED0: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80332ED4: sh          $t7, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r15;
    // 0x80332ED8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EE0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332EE4: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80332EE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332EEC: jal         0x8001ABF4
    // 0x80332EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x80332EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80332EF4: b           L_80332F14
    // 0x80332EF8: nop

        goto L_80332F14;
    // 0x80332EF8: nop

L_80332EFC:
    // 0x80332EFC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80332F00: nop

    // 0x80332F04: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80332F08: nop

    // 0x80332F0C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80332F10: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_80332F14:
    // 0x80332F14: b           L_80332F1C
    // 0x80332F18: nop

        goto L_80332F1C;
    // 0x80332F18: nop

L_80332F1C:
    // 0x80332F1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332F20: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80332F24: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332F28: jr          $ra
    // 0x80332F2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80332F2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80332098_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332098: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8033209C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803320A0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803320A4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803320A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803320AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803320B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803320B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803320B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803320BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803320C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803320C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803320C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803320CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803320D0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x803320D4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803320D8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803320DC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803320E0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803320E4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803320E8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803320EC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803320F0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803320F4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803320F8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803320FC: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x80332100: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80332104: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332108: lh          $t6, 0xEA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XEA);
    // 0x8033210C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332110: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332114: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332118: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033211C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332120: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332124: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332128: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8033212C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80332130: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332134: lh          $t1, 0xEC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEC);
    // 0x80332138: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033213C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332140: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332144: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332148: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033214C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332150: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80332154: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80332158: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033215C: nop

    // 0x80332160: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80332164: nop

    // 0x80332168: bne         $t6, $zero, L_80332268
    if (ctx->r14 != 0) {
        // 0x8033216C: nop
    
            goto L_80332268;
    }
    // 0x8033216C: nop

    // 0x80332170: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80332174: nop

    // 0x80332178: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033217C: nop

    // 0x80332180: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332184: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80332188: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033218C: nop

    // 0x80332190: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332194: nop

    // 0x80332198: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033219C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321A0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803321A4: addiu       $t2, $t2, -0x7138
    ctx->r10 = ADD32(ctx->r10, -0X7138);
    // 0x803321A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321AC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803321B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803321B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803321B8: jal         0x8001C0EC
    // 0x803321BC: addiu       $a3, $zero, 0x5C
    ctx->r7 = ADD32(0, 0X5C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803321BC: addiu       $a3, $zero, 0x5C
    ctx->r7 = ADD32(0, 0X5C);
    after_0:
    // 0x803321C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321C8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803321CC: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x803321D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803321D4: jal         0x8001ABF4
    // 0x803321D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803321D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803321DC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x803321E0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803321E4: addiu       $t4, $t4, -0x70BC
    ctx->r12 = ADD32(ctx->r12, -0X70BC);
    // 0x803321E8: lh          $a0, 0xE8($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XE8);
    // 0x803321EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803321F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803321F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803321F8: jal         0x8001C0EC
    // 0x803321FC: addiu       $a3, $zero, 0x5E
    ctx->r7 = ADD32(0, 0X5E);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803321FC: addiu       $a3, $zero, 0x5E
    ctx->r7 = ADD32(0, 0X5E);
    after_2:
    // 0x80332200: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80332204: sh          $t5, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r13;
L_80332208:
    // 0x80332208: jal         0x80014E80
    // 0x8033220C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x8033220C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x80332210: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80332214: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x80332218: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033221C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80332220: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80332224: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80332228: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x8033222C: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80332230: addiu       $t1, $t1, -0x70CC
    ctx->r9 = ADD32(ctx->r9, -0X70CC);
    // 0x80332234: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80332238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033223C: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    // 0x80332240: jal         0x8001C0EC
    // 0x80332244: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80332244: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_4:
    // 0x80332248: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x8033224C: nop

    // 0x80332250: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80332254: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80332258: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8033225C: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80332260: bne         $at, $zero, L_80332208
    if (ctx->r1 != 0) {
        // 0x80332264: sh          $t2, 0x32($sp)
        MEM_H(0X32, ctx->r29) = ctx->r10;
            goto L_80332208;
    }
    // 0x80332264: sh          $t2, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r10;
L_80332268:
    // 0x80332268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033226C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332270: jal         0x8002A8B4
    // 0x80332274: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x80332274: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x80332278: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033227C: nop

    // 0x80332280: lwc1        $f4, 0x3C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80332284: nop

    // 0x80332288: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
    // 0x8033228C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80332290: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80332294: lwc1        $f20, 0x1C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332298: nop

    // 0x8033229C: swc1        $f20, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f20.u32l;
    // 0x803322A0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x803322A4: nop

    // 0x803322A8: swc1        $f20, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f20.u32l;
    // 0x803322AC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803322B0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803322B4: lwc1        $f20, 0x1C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803322B8: nop

    // 0x803322BC: swc1        $f20, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f20.u32l;
    // 0x803322C0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803322C4: nop

    // 0x803322C8: swc1        $f20, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f20.u32l;
    // 0x803322CC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803322D0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803322D4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803322D8: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803322DC: jal         0x80015538
    // 0x803322E0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x803322E0: nop

    after_6:
    // 0x803322E4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x803322E8: nop

    // 0x803322EC: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x803322F0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x803322F4: nop

    // 0x803322F8: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803322FC: nop

    // 0x80332300: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
    // 0x80332304: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332308: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033230C: jal         0x8002A2EC
    // 0x80332310: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x80332310: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_7:
    // 0x80332314: beq         $v0, $zero, L_80332334
    if (ctx->r2 == 0) {
        // 0x80332318: nop
    
            goto L_80332334;
    }
    // 0x80332318: nop

    // 0x8033231C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80332320: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x80332324: sh          $t5, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r13;
    // 0x80332328: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033232C: b           L_8033235C
    // 0x80332330: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_8033235C;
    // 0x80332330: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332334:
    // 0x80332334: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80332338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033233C: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x80332340: jal         0x8001B4AC
    // 0x80332344: nop

    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x80332344: nop

    after_8:
    // 0x80332348: beq         $v0, $zero, L_8033235C
    if (ctx->r2 == 0) {
        // 0x8033234C: nop
    
            goto L_8033235C;
    }
    // 0x8033234C: nop

    // 0x80332350: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80332354: nop

    // 0x80332358: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033235C:
    // 0x8033235C: b           L_80332364
    // 0x80332360: nop

        goto L_80332364;
    // 0x80332360: nop

L_80332364:
    // 0x80332364: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332368: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033236C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332370: jr          $ra
    // 0x80332374: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80332374: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80331E28_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331E2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80331E30: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331E34: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80331E38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331E3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331E40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331E44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331E48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331E50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331E58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331E5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331E60: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331E64: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331E68: nop

    // 0x80331E6C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331E70: nop

    // 0x80331E74: bne         $t1, $zero, L_8033204C
    if (ctx->r9 != 0) {
        // 0x80331E78: nop
    
            goto L_8033204C;
    }
    // 0x80331E78: nop

    // 0x80331E7C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331E80: nop

    // 0x80331E84: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331E88: nop

    // 0x80331E8C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331E90: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331E94: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331E98: nop

    // 0x80331E9C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331EA0: nop

    // 0x80331EA4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331EA8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331EAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331EB0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331EB4: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80331EB8: jal         0x80015538
    // 0x80331EBC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80331EBC: nop

    after_0:
    // 0x80331EC0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331EC4: nop

    // 0x80331EC8: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80331ECC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331ED0: nop

    // 0x80331ED4: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80331ED8: nop

    // 0x80331EDC: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
    // 0x80331EE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EE8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331EEC: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80331EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331EF4: jal         0x8001ABF4
    // 0x80331EF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331EF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331EFC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331F00: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80331F04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331F08: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80331F0C: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x80331F10: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331F14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331F1C: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80331F20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F24: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80331F28: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80331F2C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80331F30: addiu       $a2, $a2, 0x4324
    ctx->r6 = ADD32(ctx->r6, 0X4324);
    // 0x80331F34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331F38: jal         0x80027C00
    // 0x80331F3C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_80027C00(rdram, ctx);
        goto after_2;
    // 0x80331F3C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80331F40: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331F44: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331F48: lh          $t3, 0xEA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XEA);
    // 0x80331F4C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331F50: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331F54: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F58: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331F5C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F60: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331F64: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x80331F68: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80331F6C: nop

    // 0x80331F70: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x80331F74: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331F78: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331F7C: addiu       $t7, $t7, -0x70CC
    ctx->r15 = ADD32(ctx->r15, -0X70CC);
    // 0x80331F80: lh          $a0, 0xEA($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XEA);
    // 0x80331F84: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331F88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331F90: jal         0x8001C0EC
    // 0x80331F94: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80331F94: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    after_3:
    // 0x80331F98: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331F9C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331FA0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331FA4: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331FA8: jal         0x80015538
    // 0x80331FAC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80331FAC: nop

    after_4:
    // 0x80331FB0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331FB4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80331FB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331FBC: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80331FC0: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x80331FC4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331FC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331FD0: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331FD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FD8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80331FDC: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80331FE0: addiu       $a2, $a2, 0x4324
    ctx->r6 = ADD32(ctx->r6, 0X4324);
    // 0x80331FE4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80331FE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331FEC: jal         0x80027C00
    // 0x80331FF0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027C00(rdram, ctx);
        goto after_5;
    // 0x80331FF0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80331FF4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331FF8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331FFC: lh          $t1, 0xEC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEC);
    // 0x80332000: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80332004: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332008: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033200C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332010: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332014: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332018: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x8033201C: lwc1        $f18, 0x1C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332020: nop

    // 0x80332024: swc1        $f18, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f18.u32l;
    // 0x80332028: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033202C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80332030: addiu       $t5, $t5, -0x70CC
    ctx->r13 = ADD32(ctx->r13, -0X70CC);
    // 0x80332034: lh          $a0, 0xEC($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XEC);
    // 0x80332038: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8033203C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332040: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332044: jal         0x8001C0EC
    // 0x80332048: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80332048: addiu       $a3, $zero, 0x5D
    ctx->r7 = ADD32(0, 0X5D);
    after_6:
L_8033204C:
    // 0x8033204C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332050: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332054: jal         0x8002A1FC
    // 0x80332058: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x80332058: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_7:
    // 0x8033205C: beq         $v0, $zero, L_8033207C
    if (ctx->r2 == 0) {
        // 0x80332060: nop
    
            goto L_8033207C;
    }
    // 0x80332060: nop

    // 0x80332064: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332068: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x8033206C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80332070: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332074: nop

    // 0x80332078: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_8033207C:
    // 0x8033207C: b           L_80332084
    // 0x80332080: nop

        goto L_80332084;
    // 0x80332080: nop

L_80332084:
    // 0x80332084: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80332088: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8033208C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332090: jr          $ra
    // 0x80332094: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80332094: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80330D5C_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330D5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330D64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330D68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330D6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330D70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330D74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330D88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330D8C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330D90: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330D94: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330D98: nop

    // 0x80330D9C: bne         $t0, $zero, L_80330EEC
    if (ctx->r8 != 0) {
        // 0x80330DA0: nop
    
            goto L_80330EEC;
    }
    // 0x80330DA0: nop

    // 0x80330DA4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DA8: nop

    // 0x80330DAC: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x80330DB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DB8: jal         0x8001BBDC
    // 0x80330DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80330DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80330DC0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DC4: nop

    // 0x80330DC8: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80330DCC: nop

    // 0x80330DD0: swc1        $f4, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f4.u32l;
    // 0x80330DD4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330DDC: lh          $t4, 0xC0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC0);
    // 0x80330DE0: nop

    // 0x80330DE4: beq         $t4, $at, L_80330E68
    if (ctx->r12 == ctx->r1) {
        // 0x80330DE8: nop
    
            goto L_80330E68;
    }
    // 0x80330DE8: nop

    // 0x80330DEC: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
L_80330DF0:
    // 0x80330DF0: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x80330DF4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DF8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80330DFC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80330E00: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80330E04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E08: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330E0C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330E10: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330E14: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330E18: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330E1C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330E20: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80330E24: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x80330E28: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E2C: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80330E30: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80330E34: lh          $a0, 0xE8($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XE8);
    // 0x80330E38: jal         0x8001BBDC
    // 0x80330E3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80330E3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80330E40: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x80330E44: nop

    // 0x80330E48: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x80330E4C: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x80330E50: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80330E54: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x80330E58: bne         $at, $zero, L_80330DF0
    if (ctx->r1 != 0) {
        // 0x80330E5C: sh          $t5, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r13;
            goto L_80330DF0;
    }
    // 0x80330E5C: sh          $t5, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r13;
    // 0x80330E60: b           L_80330EA8
    // 0x80330E64: nop

        goto L_80330EA8;
    // 0x80330E64: nop

L_80330E68:
    // 0x80330E68: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E70: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x80330E74: nop

    // 0x80330E78: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80330E7C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330E80: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330E84: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330E88: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330E8C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330E90: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80330E94: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330E9C: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x80330EA0: jal         0x8001BBDC
    // 0x80330EA4: nop

    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80330EA4: nop

    after_2:
L_80330EA8:
    // 0x80330EA8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EAC: nop

    // 0x80330EB0: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80330EB4: nop

    // 0x80330EB8: beq         $t4, $zero, L_80330ED4
    if (ctx->r12 == 0) {
        // 0x80330EBC: nop
    
            goto L_80330ED4;
    }
    // 0x80330EBC: nop

    // 0x80330EC0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EC4: nop

    // 0x80330EC8: lh          $a0, 0xC2($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XC2);
    // 0x80330ECC: jal         0x8002B114
    // 0x80330ED0: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80330ED0: nop

    after_3:
L_80330ED4:
    // 0x80330ED4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330ED8: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80330EDC: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80330EE0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EE4: b           L_80330FB4
    // 0x80330EE8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_80330FB4;
    // 0x80330EE8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80330EEC:
    // 0x80330EEC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80330EF0: lw          $t9, 0x7A64($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A64);
    // 0x80330EF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330EF8: bne         $t9, $at, L_80330FB4
    if (ctx->r25 != ctx->r1) {
        // 0x80330EFC: nop
    
            goto L_80330FB4;
    }
    // 0x80330EFC: nop

    // 0x80330F00: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F04: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x80330F08: sh          $t0, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r8;
    // 0x80330F0C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330F14: lh          $t3, 0xC0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC0);
    // 0x80330F18: nop

    // 0x80330F1C: beq         $t3, $at, L_80330F88
    if (ctx->r11 == ctx->r1) {
        // 0x80330F20: nop
    
            goto L_80330F88;
    }
    // 0x80330F20: nop

    // 0x80330F24: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
L_80330F28:
    // 0x80330F28: lh          $t5, 0x1A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1A);
    // 0x80330F2C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F30: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x80330F34: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80330F38: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80330F3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F40: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330F44: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330F48: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330F4C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330F50: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330F54: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330F58: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80330F5C: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
    // 0x80330F60: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x80330F64: nop

    // 0x80330F68: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x80330F6C: sll         $t3, $t1, 16
    ctx->r11 = S32(ctx->r9 << 16);
    // 0x80330F70: sra         $t5, $t3, 16
    ctx->r13 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80330F74: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80330F78: bne         $at, $zero, L_80330F28
    if (ctx->r1 != 0) {
        // 0x80330F7C: sh          $t1, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r9;
            goto L_80330F28;
    }
    // 0x80330F7C: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    // 0x80330F80: b           L_80330FB4
    // 0x80330F84: nop

        goto L_80330FB4;
    // 0x80330F84: nop

L_80330F88:
    // 0x80330F88: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F90: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x80330F94: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80330F98: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330F9C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330FA0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330FA4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330FA8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330FAC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330FB0: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
L_80330FB4:
    // 0x80330FB4: b           L_80330FBC
    // 0x80330FB8: nop

        goto L_80330FBC;
    // 0x80330FB8: nop

L_80330FBC:
    // 0x80330FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330FC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330FC4: jr          $ra
    // 0x80330FC8: nop

    return;
    // 0x80330FC8: nop

;}
RECOMP_FUNC void func_80330750_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330750: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330754: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80330758: nop

    // 0x8033075C: beq         $t6, $zero, L_80330778
    if (ctx->r14 == 0) {
        // 0x80330760: nop
    
            goto L_80330778;
    }
    // 0x80330760: nop

    // 0x80330764: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330768: bne         $t6, $at, L_80330778
    if (ctx->r14 != ctx->r1) {
        // 0x8033076C: nop
    
            goto L_80330778;
    }
    // 0x8033076C: nop

    // 0x80330770: jr          $ra
    // 0x80330774: nop

    return;
    // 0x80330774: nop

L_80330778:
    // 0x80330778: jr          $ra
    // 0x8033077C: nop

    return;
    // 0x8033077C: nop

    // 0x80330780: jr          $ra
    // 0x80330784: nop

    return;
    // 0x80330784: nop

;}
RECOMP_FUNC void func_80332864_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332864: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332868: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033286C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332870: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332874: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332878: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033287C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332880: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332884: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332888: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033288C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332890: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332894: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332898: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033289C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803328A0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803328A4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803328A8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803328AC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803328B0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803328B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803328B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803328BC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803328C0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803328C4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803328C8: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x803328CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803328D0: nop

    // 0x803328D4: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x803328D8: nop

    // 0x803328DC: bne         $t6, $zero, L_8033298C
    if (ctx->r14 != 0) {
        // 0x803328E0: nop
    
            goto L_8033298C;
    }
    // 0x803328E0: nop

    // 0x803328E4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803328E8: nop

    // 0x803328EC: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x803328F0: nop

    // 0x803328F4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803328F8: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x803328FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332900: nop

    // 0x80332904: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332908: nop

    // 0x8033290C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80332910: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332914: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80332918: addiu       $t2, $t2, -0x7138
    ctx->r10 = ADD32(ctx->r10, -0X7138);
    // 0x8033291C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332920: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80332924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332928: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033292C: jal         0x8001C0EC
    // 0x80332930: addiu       $a3, $zero, 0x5C
    ctx->r7 = ADD32(0, 0X5C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332930: addiu       $a3, $zero, 0x5C
    ctx->r7 = ADD32(0, 0X5C);
    after_0:
    // 0x80332934: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332938: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033293C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332940: addiu       $a3, $a3, -0x7104
    ctx->r7 = ADD32(ctx->r7, -0X7104);
    // 0x80332944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332948: jal         0x8001ABF4
    // 0x8033294C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033294C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332950: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332954: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80332958: addiu       $t4, $t4, -0x70BC
    ctx->r12 = ADD32(ctx->r12, -0X70BC);
    // 0x8033295C: lh          $a0, 0xE8($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XE8);
    // 0x80332960: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80332964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033296C: jal         0x8001C0EC
    // 0x80332970: addiu       $a3, $zero, 0x5E
    ctx->r7 = ADD32(0, 0X5E);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80332970: addiu       $a3, $zero, 0x5E
    ctx->r7 = ADD32(0, 0X5E);
    after_2:
    // 0x80332974: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332978: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x8033297C: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80332980: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332984: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80332988: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
L_8033298C:
    // 0x8033298C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332990: nop

    // 0x80332994: lh          $t1, 0xA6($t7)
    ctx->r9 = MEM_H(ctx->r15, 0XA6);
    // 0x80332998: nop

    // 0x8033299C: bne         $t1, $zero, L_80332A08
    if (ctx->r9 != 0) {
        // 0x803329A0: nop
    
            goto L_80332A08;
    }
    // 0x803329A0: nop

    // 0x803329A4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803329A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803329AC: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x803329B0: nop

    // 0x803329B4: bne         $t2, $at, L_803329F4
    if (ctx->r10 != ctx->r1) {
        // 0x803329B8: nop
    
            goto L_803329F4;
    }
    // 0x803329B8: nop

    // 0x803329BC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803329C0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803329C4: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
    // 0x803329C8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803329CC: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x803329D0: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x803329D4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803329D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803329DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803329E0: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803329E4: nop

    // 0x803329E8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803329EC: b           L_80332A00
    // 0x803329F0: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
        goto L_80332A00;
    // 0x803329F0: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
L_803329F4:
    // 0x803329F4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803329F8: nop

    // 0x803329FC: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
L_80332A00:
    // 0x80332A00: b           L_80332AD0
    // 0x80332A04: nop

        goto L_80332AD0;
    // 0x80332A04: nop

L_80332A08:
    // 0x80332A08: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332A0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332A10: lh          $t1, 0xA8($t7)
    ctx->r9 = MEM_H(ctx->r15, 0XA8);
    // 0x80332A14: nop

    // 0x80332A18: bne         $t1, $at, L_80332A58
    if (ctx->r9 != ctx->r1) {
        // 0x80332A1C: nop
    
            goto L_80332A58;
    }
    // 0x80332A1C: nop

    // 0x80332A20: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332A24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80332A28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332A2C: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332A30: nop

    // 0x80332A34: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80332A38: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
    // 0x80332A3C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332A40: nop

    // 0x80332A44: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80332A48: nop

    // 0x80332A4C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80332A50: b           L_80332AD0
    // 0x80332A54: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
        goto L_80332AD0;
    // 0x80332A54: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_80332A58:
    // 0x80332A58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A60: jal         0x8002A8B4
    // 0x80332A64: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80332A64: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x80332A68: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332A6C: nop

    // 0x80332A70: lwc1        $f4, 0x3C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80332A74: nop

    // 0x80332A78: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
    // 0x80332A7C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332A80: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80332A84: lwc1        $f20, 0x1C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332A88: nop

    // 0x80332A8C: swc1        $f20, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f20.u32l;
    // 0x80332A90: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80332A94: nop

    // 0x80332A98: swc1        $f20, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f20.u32l;
    // 0x80332A9C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332AA0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80332AA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332AA8: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80332AAC: nop

    // 0x80332AB0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80332AB4: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x80332AB8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332ABC: nop

    // 0x80332AC0: lh          $t0, 0xA6($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XA6);
    // 0x80332AC4: nop

    // 0x80332AC8: addiu       $t3, $t0, -0x1
    ctx->r11 = ADD32(ctx->r8, -0X1);
    // 0x80332ACC: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
L_80332AD0:
    // 0x80332AD0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332AD4: nop

    // 0x80332AD8: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80332ADC: nop

    // 0x80332AE0: bne         $t2, $zero, L_80332B18
    if (ctx->r10 != 0) {
        // 0x80332AE4: nop
    
            goto L_80332B18;
    }
    // 0x80332AE4: nop

    // 0x80332AE8: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x80332AEC: nop

    // 0x80332AF0: bne         $t5, $zero, L_80332B18
    if (ctx->r13 != 0) {
        // 0x80332AF4: nop
    
            goto L_80332B18;
    }
    // 0x80332AF4: nop

    // 0x80332AF8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332AFC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80332B00: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x80332B04: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332B08: nop

    // 0x80332B0C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80332B10: b           L_80332B20
    // 0x80332B14: nop

        goto L_80332B20;
    // 0x80332B14: nop

L_80332B18:
    // 0x80332B18: b           L_80332B20
    // 0x80332B1C: nop

        goto L_80332B20;
    // 0x80332B1C: nop

L_80332B20:
    // 0x80332B20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332B24: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80332B28: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332B2C: jr          $ra
    // 0x80332B30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80332B30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80332F30_unk_bin_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332F34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332F38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332F3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332F40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332F44: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332F48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332F4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332F54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332F5C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332F60: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332F64: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332F68: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F6C: nop

    // 0x80332F70: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80332F74: nop

    // 0x80332F78: bne         $t1, $zero, L_8033300C
    if (ctx->r9 != 0) {
        // 0x80332F7C: nop
    
            goto L_8033300C;
    }
    // 0x80332F7C: nop

    // 0x80332F80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F88: jal         0x8001BB34
    // 0x80332F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80332F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80332F90: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332F98: lh          $t3, 0xC0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC0);
    // 0x80332F9C: nop

    // 0x80332FA0: beq         $t3, $at, L_80332FF0
    if (ctx->r11 == ctx->r1) {
        // 0x80332FA4: nop
    
            goto L_80332FF0;
    }
    // 0x80332FA4: nop

    // 0x80332FA8: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
L_80332FAC:
    // 0x80332FAC: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x80332FB0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FB4: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80332FB8: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80332FBC: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80332FC0: jal         0x8001BB34
    // 0x80332FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80332FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332FC8: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x80332FCC: nop

    // 0x80332FD0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332FD4: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x80332FD8: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80332FDC: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80332FE0: bne         $at, $zero, L_80332FAC
    if (ctx->r1 != 0) {
        // 0x80332FE4: sh          $t9, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r25;
            goto L_80332FAC;
    }
    // 0x80332FE4: sh          $t9, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r25;
    // 0x80332FE8: b           L_80333004
    // 0x80332FEC: nop

        goto L_80333004;
    // 0x80332FEC: nop

L_80332FF0:
    // 0x80332FF0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332FF8: lh          $a0, 0xE8($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XE8);
    // 0x80332FFC: jal         0x8001BB34
    // 0x80333000: nop

    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80333000: nop

    after_2:
L_80333004:
    // 0x80333004: b           L_803330D0
    // 0x80333008: nop

        goto L_803330D0;
    // 0x80333008: nop

L_8033300C:
    // 0x8033300C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333010: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333014: lh          $s0, 0x108($t3)
    ctx->r16 = MEM_H(ctx->r11, 0X108);
    // 0x80333018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033301C: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x80333020: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80333024: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80333028: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x8033302C: jal         0x8001BB34
    // 0x80333030: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80333030: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80333034: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333038: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033303C: lh          $t7, 0xC0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC0);
    // 0x80333040: nop

    // 0x80333044: beq         $t7, $at, L_803330A8
    if (ctx->r15 == ctx->r1) {
        // 0x80333048: nop
    
            goto L_803330A8;
    }
    // 0x80333048: nop

    // 0x8033304C: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
L_80333050:
    // 0x80333050: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333054: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x80333058: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x8033305C: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80333060: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x80333064: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80333068: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033306C: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x80333070: lh          $a0, 0xE8($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XE8);
    // 0x80333074: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80333078: jal         0x8001BB34
    // 0x8033307C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x8033307C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80333080: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x80333084: nop

    // 0x80333088: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x8033308C: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x80333090: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80333094: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80333098: bne         $at, $zero, L_80333050
    if (ctx->r1 != 0) {
        // 0x8033309C: sh          $t4, 0x2A($sp)
        MEM_H(0X2A, ctx->r29) = ctx->r12;
            goto L_80333050;
    }
    // 0x8033309C: sh          $t4, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r12;
    // 0x803330A0: b           L_803330D0
    // 0x803330A4: nop

        goto L_803330D0;
    // 0x803330A4: nop

L_803330A8:
    // 0x803330A8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803330AC: nop

    // 0x803330B0: lh          $s0, 0x108($t9)
    ctx->r16 = MEM_H(ctx->r25, 0X108);
    // 0x803330B4: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x803330B8: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x803330BC: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x803330C0: sltiu       $t1, $s0, 0x1
    ctx->r9 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803330C4: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x803330C8: jal         0x8001BB34
    // 0x803330CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x803330CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_803330D0:
    // 0x803330D0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803330D4: nop

    // 0x803330D8: lh          $t2, 0xA4($t8)
    ctx->r10 = MEM_H(ctx->r24, 0XA4);
    // 0x803330DC: nop

    // 0x803330E0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x803330E4: sltiu       $at, $t3, 0xB
    ctx->r1 = ctx->r11 < 0XB ? 1 : 0;
    // 0x803330E8: beq         $at, $zero, L_803331BC
    if (ctx->r1 == 0) {
        // 0x803330EC: nop
    
            goto L_803331BC;
    }
    // 0x803330EC: nop

    // 0x803330F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803330F4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803330F8: addu        $at, $at, $t3
    gpr jr_addend_80333104 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803330FC: lw          $t3, 0x3420($at)
    ctx->r11 = ADD32(ctx->r1, 0X3420);
    // 0x80333100: nop

    // 0x80333104: jr          $t3
    // 0x80333108: nop

    switch (jr_addend_80333104 >> 2) {
        case 0: goto L_8033310C; break;
        case 1: goto L_8033311C; break;
        case 2: goto L_8033312C; break;
        case 3: goto L_8033313C; break;
        case 4: goto L_8033314C; break;
        case 5: goto L_8033315C; break;
        case 6: goto L_8033316C; break;
        case 7: goto L_8033317C; break;
        case 8: goto L_8033318C; break;
        case 9: goto L_8033319C; break;
        case 10: goto L_803331AC; break;
        default: switch_error(__func__, 0x80333104, 0x80333420);
    }
    // 0x80333108: nop

L_8033310C:
    // 0x8033310C: jal         0x80330FCC
    // 0x80333110: nop

    func_80330FCC_unk_bin_48(rdram, ctx);
        goto after_6;
    // 0x80333110: nop

    after_6:
    // 0x80333114: b           L_803331C4
    // 0x80333118: nop

        goto L_803331C4;
    // 0x80333118: nop

L_8033311C:
    // 0x8033311C: jal         0x8033123C
    // 0x80333120: nop

    func_8033123C_unk_bin_48(rdram, ctx);
        goto after_7;
    // 0x80333120: nop

    after_7:
    // 0x80333124: b           L_803331C4
    // 0x80333128: nop

        goto L_803331C4;
    // 0x80333128: nop

L_8033312C:
    // 0x8033312C: jal         0x8033151C
    // 0x80333130: nop

    func_8033151C_unk_bin_48(rdram, ctx);
        goto after_8;
    // 0x80333130: nop

    after_8:
    // 0x80333134: b           L_803331C4
    // 0x80333138: nop

        goto L_803331C4;
    // 0x80333138: nop

L_8033313C:
    // 0x8033313C: jal         0x80331B44
    // 0x80333140: nop

    func_80331B44_unk_bin_48(rdram, ctx);
        goto after_9;
    // 0x80333140: nop

    after_9:
    // 0x80333144: b           L_803331C4
    // 0x80333148: nop

        goto L_803331C4;
    // 0x80333148: nop

L_8033314C:
    // 0x8033314C: jal         0x80331E28
    // 0x80333150: nop

    func_80331E28_unk_bin_48(rdram, ctx);
        goto after_10;
    // 0x80333150: nop

    after_10:
    // 0x80333154: b           L_803331C4
    // 0x80333158: nop

        goto L_803331C4;
    // 0x80333158: nop

L_8033315C:
    // 0x8033315C: jal         0x80332098
    // 0x80333160: nop

    func_80332098_unk_bin_48(rdram, ctx);
        goto after_11;
    // 0x80333160: nop

    after_11:
    // 0x80333164: b           L_803331C4
    // 0x80333168: nop

        goto L_803331C4;
    // 0x80333168: nop

L_8033316C:
    // 0x8033316C: jal         0x80332378
    // 0x80333170: nop

    func_80332378_unk_bin_48(rdram, ctx);
        goto after_12;
    // 0x80333170: nop

    after_12:
    // 0x80333174: b           L_803331C4
    // 0x80333178: nop

        goto L_803331C4;
    // 0x80333178: nop

L_8033317C:
    // 0x8033317C: jal         0x80332750
    // 0x80333180: nop

    func_80332750_unk_bin_48(rdram, ctx);
        goto after_13;
    // 0x80333180: nop

    after_13:
    // 0x80333184: b           L_803331C4
    // 0x80333188: nop

        goto L_803331C4;
    // 0x80333188: nop

L_8033318C:
    // 0x8033318C: jal         0x80332864
    // 0x80333190: nop

    func_80332864_unk_bin_48(rdram, ctx);
        goto after_14;
    // 0x80333190: nop

    after_14:
    // 0x80333194: b           L_803331C4
    // 0x80333198: nop

        goto L_803331C4;
    // 0x80333198: nop

L_8033319C:
    // 0x8033319C: jal         0x80332B34
    // 0x803331A0: nop

    func_80332B34_unk_bin_48(rdram, ctx);
        goto after_15;
    // 0x803331A0: nop

    after_15:
    // 0x803331A4: b           L_803331C4
    // 0x803331A8: nop

        goto L_803331C4;
    // 0x803331A8: nop

L_803331AC:
    // 0x803331AC: jal         0x80332C8C
    // 0x803331B0: nop

    func_80332C8C_unk_bin_48(rdram, ctx);
        goto after_16;
    // 0x803331B0: nop

    after_16:
    // 0x803331B4: b           L_803331C4
    // 0x803331B8: nop

        goto L_803331C4;
    // 0x803331B8: nop

L_803331BC:
    // 0x803331BC: b           L_803331C4
    // 0x803331C0: nop

        goto L_803331C4;
    // 0x803331C0: nop

L_803331C4:
    // 0x803331C4: b           L_803331CC
    // 0x803331C8: nop

        goto L_803331CC;
    // 0x803331C8: nop

L_803331CC:
    // 0x803331CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803331D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803331D4: jr          $ra
    // 0x803331D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803331D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
