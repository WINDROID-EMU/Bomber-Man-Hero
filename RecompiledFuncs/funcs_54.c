#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8028A638_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A638: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8028A63C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028A640: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8028A644: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8028A648: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A64C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028A650: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8028A654: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028A658: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8028A65C: jal         0x80015538
    // 0x8028A660: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8028A660: nop

    after_0:
    // 0x8028A664: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A668: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028A66C: nop

    // 0x8028A670: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x8028A674: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028A678: lh          $t8, -0x1CE8($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1CE8);
    // 0x8028A67C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x8028A680: addiu       $t9, $t8, 0x5
    ctx->r25 = ADD32(ctx->r24, 0X5);
    // 0x8028A684: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8028A688: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028A68C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028A690: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028A694: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028A698: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8028A69C: swc1        $f10, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f10.u32l;
    // 0x8028A6A0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028A6A4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028A6A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028A6AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028A6B0: lwc1        $f16, 0xC($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0XC);
    // 0x8028A6B4: nop

    // 0x8028A6B8: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8028A6BC: nop

    // 0x8028A6C0: bc1f        L_8028A6E0
    if (!c1cs) {
        // 0x8028A6C4: nop
    
            goto L_8028A6E0;
    }
    // 0x8028A6C4: nop

    // 0x8028A6C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028A6CC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028A6D0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028A6D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028A6D8: nop

    // 0x8028A6DC: swc1        $f4, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f4.u32l;
L_8028A6E0:
    // 0x8028A6E0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028A6E4: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028A6E8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028A6EC: lwc1        $f20, 0xC($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0XC);
    // 0x8028A6F0: nop

    // 0x8028A6F4: swc1        $f20, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f20.u32l;
    // 0x8028A6F8: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028A6FC: nop

    // 0x8028A700: swc1        $f20, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f20.u32l;
    // 0x8028A704: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8028A708: lw          $t5, 0x51A4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X51A4);
    // 0x8028A70C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028A710: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x8028A714: sw          $t6, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r14;
    // 0x8028A718: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028A71C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028A720: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028A724: nop

    // 0x8028A728: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
    // 0x8028A72C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028A730: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028A734: jal         0x8001B6BC
    // 0x8028A738: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_1;
    // 0x8028A738: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x8028A73C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028A740: lb          $t8, -0x1DD8($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1DD8);
    // 0x8028A744: nop

    // 0x8028A748: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8028A74C: bne         $t9, $zero, L_8028A830
    if (ctx->r25 != 0) {
        // 0x8028A750: nop
    
            goto L_8028A830;
    }
    // 0x8028A750: nop

    // 0x8028A754: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028A758: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028A75C: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028A760: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8028A764: lwc1        $f17, -0x48F8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X48F8);
    // 0x8028A768: lwc1        $f16, -0x48F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X48F4);
    // 0x8028A76C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8028A770: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8028A774: jal         0x80034970
    // 0x8028A778: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x8028A778: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x8028A77C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028A780: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028A784: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028A788: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8028A78C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028A790: nop

    // 0x8028A794: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8028A798: nop

    // 0x8028A79C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8028A7A0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8028A7A4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028A7A8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028A7AC: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028A7B0: lwc1        $f16, 0x1C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8028A7B4: lwc1        $f5, -0x48F0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X48F0);
    // 0x8028A7B8: lwc1        $f4, -0x48EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X48EC);
    // 0x8028A7BC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8028A7C0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8028A7C4: jal         0x80034970
    // 0x8028A7C8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x8028A7C8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_3:
    // 0x8028A7CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028A7D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028A7D4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028A7D8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8028A7DC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028A7E0: nop

    // 0x8028A7E4: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8028A7E8: nop

    // 0x8028A7EC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8028A7F0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x8028A7F4: jal         0x80014E80
    // 0x8028A7F8: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x8028A7F8: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_4:
    // 0x8028A7FC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8028A800: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028A804: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028A808: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8028A80C: lwc1        $f8, 0x4($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8028A810: nop

    // 0x8028A814: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8028A818: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8028A81C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8028A820: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8028A824: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8028A828: jal         0x80081468
    // 0x8028A82C: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    func_80081468(rdram, ctx);
        goto after_5;
    // 0x8028A82C: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    after_5:
L_8028A830:
    // 0x8028A830: b           L_8028A838
    // 0x8028A834: nop

        goto L_8028A838;
    // 0x8028A834: nop

L_8028A838:
    // 0x8028A838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028A83C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8028A840: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8028A844: jr          $ra
    // 0x8028A848: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8028A848: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80286200_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286200: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80286204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80286208: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028620C: lh          $t6, -0x1D68($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D68);
    // 0x80286210: nop

    // 0x80286214: beq         $t6, $zero, L_8028622C
    if (ctx->r14 == 0) {
        // 0x80286218: nop
    
            goto L_8028622C;
    }
    // 0x80286218: nop

    // 0x8028621C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80286220: lwc1        $f4, 0x51D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80286224: b           L_80286244
    // 0x80286228: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
        goto L_80286244;
    // 0x80286228: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
L_8028622C:
    // 0x8028622C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80286230: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80286234: nop

    // 0x80286238: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8028623C: nop

    // 0x80286240: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
L_80286244:
    // 0x80286244: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80286248: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028624C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80286250: jal         0x80015538
    // 0x80286254: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80286254: nop

    after_0:
    // 0x80286258: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8028625C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80286260: nop

    // 0x80286264: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80286268: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8028626C: nop

    // 0x80286270: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80286274: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80286278: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8028627C: nop

    // 0x80286280: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80286284: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80286288: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8028628C: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x80286290: nop

    // 0x80286294: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80286298: lui         $t2, 0x8029
    ctx->r10 = S32(0X8029 << 16);
    // 0x8028629C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802862A0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x802862A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802862A8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802862AC: lw          $t2, -0x4E44($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4E44);
    // 0x802862B0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802862B4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x802862B8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802862BC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802862C0: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802862C4: nop

    // 0x802862C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802862CC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x802862D0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x802862D4: lui         $t6, 0x8029
    ctx->r14 = S32(0X8029 << 16);
    // 0x802862D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802862DC: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802862E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802862E4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x802862E8: lw          $t6, -0x4E40($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4E40);
    // 0x802862EC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802862F0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x802862F4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802862F8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802862FC: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80286300: nop

    // 0x80286304: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80286308: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x8028630C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80286310: lui         $t0, 0x8029
    ctx->r8 = S32(0X8029 << 16);
    // 0x80286314: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80286318: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8028631C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80286320: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80286324: lw          $t0, -0x4E3C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4E3C);
    // 0x80286328: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028632C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80286330: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80286334: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80286338: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8028633C: nop

    // 0x80286340: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80286344: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80286348: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8028634C: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80286350: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80286354: jal         0x800843CC
    // 0x80286358: nop

    func_800843CC(rdram, ctx);
        goto after_1;
    // 0x80286358: nop

    after_1:
    // 0x8028635C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80286360: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x80286364: nop

    // 0x80286368: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8028636C: sb          $t3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r11;
    // 0x80286370: lbu         $t4, 0x23($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X23);
    // 0x80286374: nop

    // 0x80286378: bne         $t4, $zero, L_80286728
    if (ctx->r12 != 0) {
        // 0x8028637C: nop
    
            goto L_80286728;
    }
    // 0x8028637C: nop

    // 0x80286380: lbu         $t5, 0x23($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X23);
    // 0x80286384: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286388: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8028638C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80286390: lwc1        $f18, 0x7760($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80286394: nop

    // 0x80286398: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x8028639C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802863A0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802863A4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802863A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802863AC: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x802863B0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802863B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802863B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802863BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802863C0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802863C4: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x802863C8: nop

    // 0x802863CC: bc1f        L_80286728
    if (!c1cs) {
        // 0x802863D0: nop
    
            goto L_80286728;
    }
    // 0x802863D0: nop

    // 0x802863D4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x802863D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802863DC: nop

    // 0x802863E0: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x802863E4: nop

    // 0x802863E8: bc1f        L_80286728
    if (!c1cs) {
        // 0x802863EC: nop
    
            goto L_80286728;
    }
    // 0x802863EC: nop

    // 0x802863F0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802863F4: lwc1        $f8, 0x51C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X51C0);
    // 0x802863F8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802863FC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80286400: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80286404: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80286408: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x8028640C: nop

    // 0x80286410: bc1f        L_80286728
    if (!c1cs) {
        // 0x80286414: nop
    
            goto L_80286728;
    }
    // 0x80286414: nop

    // 0x80286418: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8028641C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80286420: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80286424: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80286428: lw          $t0, 0x7740($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7740);
    // 0x8028642C: nop

    // 0x80286430: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80286434: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80286438: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x8028643C: beq         $t1, $at, L_80286480
    if (ctx->r9 == ctx->r1) {
        // 0x80286440: nop
    
            goto L_80286480;
    }
    // 0x80286440: nop

    // 0x80286444: addiu       $at, $zero, 0xF6
    ctx->r1 = ADD32(0, 0XF6);
    // 0x80286448: beq         $t1, $at, L_80286480
    if (ctx->r9 == ctx->r1) {
        // 0x8028644C: nop
    
            goto L_80286480;
    }
    // 0x8028644C: nop

    // 0x80286450: addiu       $at, $zero, 0xE7
    ctx->r1 = ADD32(0, 0XE7);
    // 0x80286454: beq         $t1, $at, L_80286480
    if (ctx->r9 == ctx->r1) {
        // 0x80286458: nop
    
            goto L_80286480;
    }
    // 0x80286458: nop

    // 0x8028645C: addiu       $at, $zero, 0xE6
    ctx->r1 = ADD32(0, 0XE6);
    // 0x80286460: beq         $t1, $at, L_80286480
    if (ctx->r9 == ctx->r1) {
        // 0x80286464: nop
    
            goto L_80286480;
    }
    // 0x80286464: nop

    // 0x80286468: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x8028646C: beq         $t1, $at, L_80286480
    if (ctx->r9 == ctx->r1) {
        // 0x80286470: nop
    
            goto L_80286480;
    }
    // 0x80286470: nop

    // 0x80286474: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x80286478: bne         $t1, $at, L_80286488
    if (ctx->r9 != ctx->r1) {
        // 0x8028647C: nop
    
            goto L_80286488;
    }
    // 0x8028647C: nop

L_80286480:
    // 0x80286480: b           L_80286738
    // 0x80286484: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80286738;
    // 0x80286484: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80286488:
    // 0x80286488: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028648C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80286490: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80286494: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80286498: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028649C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802864A0: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x802864A4: jal         0x80280F18
    // 0x802864A8: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    func_80280F18_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802864A8: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_2:
    // 0x802864AC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802864B0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802864B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802864B8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802864BC: nop

    // 0x802864C0: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x802864C4: nop

    // 0x802864C8: bc1f        L_802864D8
    if (!c1cs) {
        // 0x802864CC: nop
    
            goto L_802864D8;
    }
    // 0x802864CC: nop

    // 0x802864D0: b           L_80286738
    // 0x802864D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80286738;
    // 0x802864D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802864D8:
    // 0x802864D8: jal         0x802842B0
    // 0x802864DC: nop

    func_802842B0_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802864DC: nop

    after_3:
    // 0x802864E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802864E4: sb          $zero, -0x1D38($at)
    MEM_B(-0X1D38, ctx->r1) = 0;
    // 0x802864E8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802864EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802864F0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802864F4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802864F8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802864FC: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80286500: swc1        $f6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f6.u32l;
    // 0x80286504: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80286508: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028650C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80286510: nop

    // 0x80286514: swc1        $f8, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f8.u32l;
    // 0x80286518: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028651C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80286520: nop

    // 0x80286524: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80286528: nop

    // 0x8028652C: swc1        $f10, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f10.u32l;
    // 0x80286530: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80286534: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x80286538: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8028653C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80286540: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80286544: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80286548: lw          $t8, -0x4E44($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4E44);
    // 0x8028654C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80286550: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80286554: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80286558: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8028655C: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80286560: nop

    // 0x80286564: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80286568: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8028656C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80286570: lui         $t2, 0x8029
    ctx->r10 = S32(0X8029 << 16);
    // 0x80286574: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80286578: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8028657C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80286580: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80286584: lw          $t2, -0x4E40($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4E40);
    // 0x80286588: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028658C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80286590: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80286594: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80286598: lwc1        $f18, 0x4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8028659C: nop

    // 0x802865A0: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x802865A4: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x802865A8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x802865AC: lui         $t6, 0x8029
    ctx->r14 = S32(0X8029 << 16);
    // 0x802865B0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x802865B4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x802865B8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802865BC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x802865C0: lw          $t6, -0x4E3C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4E3C);
    // 0x802865C4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802865C8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802865CC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802865D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802865D4: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x802865D8: nop

    // 0x802865DC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802865E0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x802865E4: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802865E8: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802865EC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x802865F0: jal         0x800843CC
    // 0x802865F4: nop

    func_800843CC(rdram, ctx);
        goto after_4;
    // 0x802865F4: nop

    after_4:
    // 0x802865F8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802865FC: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x80286600: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80286604: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80286608: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8028660C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80286610: lw          $t1, 0x7770($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7770);
    // 0x80286614: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286618: sh          $t1, -0x1D58($at)
    MEM_H(-0X1D58, ctx->r1) = ctx->r9;
    // 0x8028661C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80286620: lh          $t2, -0x1D58($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1D58);
    // 0x80286624: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80286628: beq         $t2, $at, L_80286720
    if (ctx->r10 == ctx->r1) {
        // 0x8028662C: nop
    
            goto L_80286720;
    }
    // 0x8028662C: nop

    // 0x80286630: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80286634: lh          $t3, -0x1D58($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1D58);
    // 0x80286638: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8028663C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80286640: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80286644: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80286648: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8028664C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80286650: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80286654: lh          $t5, 0x4234($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4234);
    // 0x80286658: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028665C: sh          $t5, -0x1D48($at)
    MEM_H(-0X1D48, ctx->r1) = ctx->r13;
    // 0x80286660: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80286664: lh          $t7, -0x1D58($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D58);
    // 0x80286668: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028666C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80286670: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80286674: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80286678: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8028667C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80286680: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80286684: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80286688: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8028668C: lwc1        $f16, 0x4150($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80286690: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80286694: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80286698: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8028669C: swc1        $f4, 0x5288($at)
    MEM_W(0X5288, ctx->r1) = ctx->f4.u32l;
    // 0x802866A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802866A4: lh          $t0, -0x1D58($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1D58);
    // 0x802866A8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802866AC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802866B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802866B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802866B8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802866BC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802866C0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x802866C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x802866C8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802866CC: lwc1        $f8, 0x4154($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x802866D0: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x802866D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802866D8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802866DC: swc1        $f10, -0x3D70($at)
    MEM_W(-0X3D70, ctx->r1) = ctx->f10.u32l;
    // 0x802866E0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802866E4: lh          $t3, -0x1D58($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1D58);
    // 0x802866E8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802866EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802866F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x802866F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802866F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x802866FC: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80286700: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80286704: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80286708: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8028670C: lwc1        $f16, 0x4158($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80286710: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80286714: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286718: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8028671C: swc1        $f4, -0x3568($at)
    MEM_W(-0X3568, ctx->r1) = ctx->f4.u32l;
L_80286720:
    // 0x80286720: b           L_80286738
    // 0x80286724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80286738;
    // 0x80286724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80286728:
    // 0x80286728: b           L_80286738
    // 0x8028672C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80286738;
    // 0x8028672C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80286730: b           L_80286738
    // 0x80286734: nop

        goto L_80286738;
    // 0x80286734: nop

L_80286738:
    // 0x80286738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028673C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80286740: jr          $ra
    // 0x80286744: nop

    return;
    // 0x80286744: nop

;}
RECOMP_FUNC void func_8028758C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028758C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80287590: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80287594: jal         0x802858D8
    // 0x80287598: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287598: nop

    after_0:
    // 0x8028759C: beq         $v0, $zero, L_802875AC
    if (ctx->r2 == 0) {
        // 0x802875A0: nop
    
            goto L_802875AC;
    }
    // 0x802875A0: nop

    // 0x802875A4: b           L_80287664
    // 0x802875A8: nop

        goto L_80287664;
    // 0x802875A8: nop

L_802875AC:
    // 0x802875AC: jal         0x80085D54
    // 0x802875B0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802875B0: nop

    after_1:
    // 0x802875B4: beq         $v0, $zero, L_802875C4
    if (ctx->r2 == 0) {
        // 0x802875B8: nop
    
            goto L_802875C4;
    }
    // 0x802875B8: nop

    // 0x802875BC: b           L_80287664
    // 0x802875C0: nop

        goto L_80287664;
    // 0x802875C0: nop

L_802875C4:
    // 0x802875C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802875C8: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x802875CC: nop

    // 0x802875D0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802875D4: bne         $t7, $zero, L_802875EC
    if (ctx->r15 != 0) {
        // 0x802875D8: nop
    
            goto L_802875EC;
    }
    // 0x802875D8: nop

    // 0x802875DC: jal         0x80282AC4
    // 0x802875E0: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802875E0: nop

    after_2:
    // 0x802875E4: b           L_80287664
    // 0x802875E8: nop

        goto L_80287664;
    // 0x802875E8: nop

L_802875EC:
    // 0x802875EC: jal         0x80285EB4
    // 0x802875F0: nop

    func_80285EB4_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x802875F0: nop

    after_3:
    // 0x802875F4: beq         $v0, $zero, L_80287604
    if (ctx->r2 == 0) {
        // 0x802875F8: nop
    
            goto L_80287604;
    }
    // 0x802875F8: nop

    // 0x802875FC: b           L_80287664
    // 0x80287600: nop

        goto L_80287664;
    // 0x80287600: nop

L_80287604:
    // 0x80287604: jal         0x802857D0
    // 0x80287608: nop

    func_802857D0_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80287608: nop

    after_4:
    // 0x8028760C: beq         $v0, $zero, L_8028761C
    if (ctx->r2 == 0) {
        // 0x80287610: nop
    
            goto L_8028761C;
    }
    // 0x80287610: nop

    // 0x80287614: b           L_80287664
    // 0x80287618: nop

        goto L_80287664;
    // 0x80287618: nop

L_8028761C:
    // 0x8028761C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80287620: lh          $t8, -0x1D08($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1D08);
    // 0x80287624: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80287628: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8028762C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80287630: mfhi        $t9
    ctx->r25 = hi;
    // 0x80287634: bne         $t9, $at, L_80287654
    if (ctx->r25 != ctx->r1) {
        // 0x80287638: nop
    
            goto L_80287654;
    }
    // 0x80287638: nop

    // 0x8028763C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80287640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80287644: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80287648: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028764C: jal         0x800178D4
    // 0x80287650: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80287650: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_80287654:
    // 0x80287654: jal         0x802833AC
    // 0x80287658: nop

    func_802833AC_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x80287658: nop

    after_6:
    // 0x8028765C: b           L_80287664
    // 0x80287660: nop

        goto L_80287664;
    // 0x80287660: nop

L_80287664:
    // 0x80287664: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80287668: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028766C: jr          $ra
    // 0x80287670: nop

    return;
    // 0x80287670: nop

;}
RECOMP_FUNC void func_8028931C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028931C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289324: jal         0x80281E50
    // 0x80289328: nop

    func_80281E50_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289328: nop

    after_0:
    // 0x8028932C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289330: lh          $t6, -0x1D68($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D68);
    // 0x80289334: nop

    // 0x80289338: beq         $t6, $zero, L_80289348
    if (ctx->r14 == 0) {
        // 0x8028933C: nop
    
            goto L_80289348;
    }
    // 0x8028933C: nop

    // 0x80289340: jal         0x80282250
    // 0x80289344: nop

    func_80282250_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80289344: nop

    after_1:
L_80289348:
    // 0x80289348: b           L_80289350
    // 0x8028934C: nop

        goto L_80289350;
    // 0x8028934C: nop

L_80289350:
    // 0x80289350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80289358: jr          $ra
    // 0x8028935C: nop

    return;
    // 0x8028935C: nop

;}
RECOMP_FUNC void func_80284DF8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284DF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284DFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284E00: jal         0x8001A928
    // 0x80284E04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80284E04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80284E08: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284E0C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284E10: addiu       $t6, $zero, 0x36
    ctx->r14 = ADD32(0, 0X36);
    // 0x80284E14: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284E18: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80284E1C: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80284E20: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80284E24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284E28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284E2C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80284E30: jal         0x8001C0EC
    // 0x80284E34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80284E34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80284E38: jal         0x80280000
    // 0x80284E3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80284E3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80284E40: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80284E44: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80284E48: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80284E4C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80284E50: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80284E54: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x80284E58: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80284E5C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80284E60: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80284E64: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x80284E68: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80284E6C: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x80284E70: nop

    // 0x80284E74: beq         $t3, $zero, L_80284E84
    if (ctx->r11 == 0) {
        // 0x80284E78: nop
    
            goto L_80284E84;
    }
    // 0x80284E78: nop

    // 0x80284E7C: jal         0x8007A6DC
    // 0x80284E80: nop

    func_8007A6DC(rdram, ctx);
        goto after_3;
    // 0x80284E80: nop

    after_3:
L_80284E84:
    // 0x80284E84: b           L_80284E8C
    // 0x80284E88: nop

        goto L_80284E8C;
    // 0x80284E88: nop

L_80284E8C:
    // 0x80284E8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284E90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284E94: jr          $ra
    // 0x80284E98: nop

    return;
    // 0x80284E98: nop

;}
RECOMP_FUNC void func_80289688_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289688: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028968C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289690: jal         0x80282034
    // 0x80289694: nop

    func_80282034_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289694: nop

    after_0:
    // 0x80289698: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028969C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802896A0: nop

    // 0x802896A4: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x802896A8: nop

    // 0x802896AC: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x802896B0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802896B4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802896B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802896BC: nop

    // 0x802896C0: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
    // 0x802896C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802896C8: jal         0x8001B62C
    // 0x802896CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x802896CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802896D0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802896D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802896D8: lw          $t8, -0x1CC0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1CC0);
    // 0x802896DC: nop

    // 0x802896E0: beq         $t8, $zero, L_802897D8
    if (ctx->r24 == 0) {
        // 0x802896E4: nop
    
            goto L_802897D8;
    }
    // 0x802896E4: nop

    // 0x802896E8: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802896EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802896F0: nop

    // 0x802896F4: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802896F8: nop

    // 0x802896FC: bc1f        L_802897A8
    if (!c1cs) {
        // 0x80289700: nop
    
            goto L_802897A8;
    }
    // 0x80289700: nop

    // 0x80289704: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80289708: lw          $t9, -0x1CC0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1CC0);
    // 0x8028970C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80289710: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80289714: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80289718: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8028971C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80289720: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80289724: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80289728: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8028972C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80289730: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80289734: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80289738: lwc1        $f16, 0x24($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X24);
    // 0x8028973C: nop

    // 0x80289740: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80289744: nop

    // 0x80289748: bc1f        L_80289788
    if (!c1cs) {
        // 0x8028974C: nop
    
            goto L_80289788;
    }
    // 0x8028974C: nop

    // 0x80289750: lwc1        $f4, 0x28($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80289754: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80289758: nop

    // 0x8028975C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80289760: nop

    // 0x80289764: bc1f        L_80289788
    if (!c1cs) {
        // 0x80289768: nop
    
            goto L_80289788;
    }
    // 0x80289768: nop

    // 0x8028976C: lwc1        $f8, 0x2C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80289770: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80289774: nop

    // 0x80289778: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8028977C: nop

    // 0x80289780: bc1t        L_802897A8
    if (c1cs) {
        // 0x80289784: nop
    
            goto L_802897A8;
    }
    // 0x80289784: nop

L_80289788:
    // 0x80289788: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8028978C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80289790: nop

    // 0x80289794: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80289798: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8028979C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802897A0: jal         0x8001B6BC
    // 0x802897A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_2;
    // 0x802897A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_802897A8:
    // 0x802897A8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802897AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802897B0: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802897B4: nop

    // 0x802897B8: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x802897BC: nop

    // 0x802897C0: bc1f        L_802897D8
    if (!c1cs) {
        // 0x802897C4: nop
    
            goto L_802897D8;
    }
    // 0x802897C4: nop

    // 0x802897C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x802897CC: lw          $a0, -0x1CC0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1CC0);
    // 0x802897D0: jal         0x8007A3A0
    // 0x802897D4: nop

    func_8007A3A0(rdram, ctx);
        goto after_3;
    // 0x802897D4: nop

    after_3:
L_802897D8:
    // 0x802897D8: b           L_802897E0
    // 0x802897DC: nop

        goto L_802897E0;
    // 0x802897DC: nop

L_802897E0:
    // 0x802897E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802897E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802897E8: jr          $ra
    // 0x802897EC: nop

    return;
    // 0x802897EC: nop

;}
RECOMP_FUNC void func_802874A4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802874A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802874A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802874AC: jal         0x802858D8
    // 0x802874B0: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802874B0: nop

    after_0:
    // 0x802874B4: beq         $v0, $zero, L_802874C4
    if (ctx->r2 == 0) {
        // 0x802874B8: nop
    
            goto L_802874C4;
    }
    // 0x802874B8: nop

    // 0x802874BC: b           L_80287508
    // 0x802874C0: nop

        goto L_80287508;
    // 0x802874C0: nop

L_802874C4:
    // 0x802874C4: jal         0x80085D54
    // 0x802874C8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802874C8: nop

    after_1:
    // 0x802874CC: beq         $v0, $zero, L_802874DC
    if (ctx->r2 == 0) {
        // 0x802874D0: nop
    
            goto L_802874DC;
    }
    // 0x802874D0: nop

    // 0x802874D4: b           L_80287508
    // 0x802874D8: nop

        goto L_80287508;
    // 0x802874D8: nop

L_802874DC:
    // 0x802874DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802874E0: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x802874E4: nop

    // 0x802874E8: bne         $t6, $zero, L_80287500
    if (ctx->r14 != 0) {
        // 0x802874EC: nop
    
            goto L_80287500;
    }
    // 0x802874EC: nop

    // 0x802874F0: jal         0x80282AC4
    // 0x802874F4: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802874F4: nop

    after_2:
    // 0x802874F8: b           L_80287508
    // 0x802874FC: nop

        goto L_80287508;
    // 0x802874FC: nop

L_80287500:
    // 0x80287500: b           L_80287508
    // 0x80287504: nop

        goto L_80287508;
    // 0x80287504: nop

L_80287508:
    // 0x80287508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028750C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287510: jr          $ra
    // 0x80287514: nop

    return;
    // 0x80287514: nop

;}
RECOMP_FUNC void func_80280F18_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280F18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80280F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280F20: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x80280F24: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
    // 0x80280F28: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80280F2C:
    // 0x80280F2C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80280F30: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x80280F34: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80280F38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80280F3C: lw          $t8, -0x4EC0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4EC0);
    // 0x80280F40: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280F44: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80280F48: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280F4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80280F50: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80280F54: nop

    // 0x80280F58: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80280F5C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80280F60: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280F64: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280F68: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80280F6C: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80280F70: nop

    // 0x80280F74: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80280F78: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80280F7C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80280F80: lui         $t3, 0x8029
    ctx->r11 = S32(0X8029 << 16);
    // 0x80280F84: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80280F88: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80280F8C: lw          $t3, -0x4EBC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4EBC);
    // 0x80280F90: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280F94: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80280F98: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280F9C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80280FA0: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80280FA4: nop

    // 0x80280FA8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80280FAC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80280FB0: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80280FB4: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80280FB8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80280FBC: jal         0x800843CC
    // 0x80280FC0: nop

    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x80280FC0: nop

    after_0:
    // 0x80280FC4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280FC8: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x80280FCC: nop

    // 0x80280FD0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80280FD4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80280FD8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80280FDC: nop

    // 0x80280FE0: beq         $t7, $zero, L_80281050
    if (ctx->r15 == 0) {
        // 0x80280FE4: nop
    
            goto L_80281050;
    }
    // 0x80280FE4: nop

    // 0x80280FE8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80280FEC: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x80280FF0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80280FF4: lbu         $t9, -0x4EA0($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X4EA0);
    // 0x80280FF8: lbu         $t0, 0x1B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1B);
    // 0x80280FFC: nop

    // 0x80281000: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x80281004: sb          $t1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r9;
    // 0x80281008: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8028100C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281010: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80281014: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80281018: lw          $t4, 0x7740($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7740);
    // 0x8028101C: addiu       $at, $zero, 0xED
    ctx->r1 = ADD32(0, 0XED);
    // 0x80281020: beq         $t4, $at, L_80281040
    if (ctx->r12 == ctx->r1) {
        // 0x80281024: nop
    
            goto L_80281040;
    }
    // 0x80281024: nop

    // 0x80281028: addiu       $at, $zero, 0xEC
    ctx->r1 = ADD32(0, 0XEC);
    // 0x8028102C: beq         $t4, $at, L_80281040
    if (ctx->r12 == ctx->r1) {
        // 0x80281030: nop
    
            goto L_80281040;
    }
    // 0x80281030: nop

    // 0x80281034: addiu       $at, $zero, 0xE8
    ctx->r1 = ADD32(0, 0XE8);
    // 0x80281038: bne         $t4, $at, L_80281050
    if (ctx->r12 != ctx->r1) {
        // 0x8028103C: nop
    
            goto L_80281050;
    }
    // 0x8028103C: nop

L_80281040:
    // 0x80281040: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80281044: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80281048: b           L_8028108C
    // 0x8028104C: nop

        goto L_8028108C;
    // 0x8028104C: nop

L_80281050:
    // 0x80281050: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80281054: nop

    // 0x80281058: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8028105C: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80281060: bne         $at, $zero, L_80280F2C
    if (ctx->r1 != 0) {
        // 0x80281064: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_80280F2C;
    }
    // 0x80281064: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80281068: lbu         $t7, 0x1B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1B);
    // 0x8028106C: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80281070: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80281074: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80281078: lwc1        $f0, -0x4E9C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E9C);
    // 0x8028107C: b           L_8028108C
    // 0x80281080: nop

        goto L_8028108C;
    // 0x80281080: nop

    // 0x80281084: b           L_8028108C
    // 0x80281088: nop

        goto L_8028108C;
    // 0x80281088: nop

L_8028108C:
    // 0x8028108C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281090: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80281094: jr          $ra
    // 0x80281098: nop

    return;
    // 0x80281098: nop

;}
RECOMP_FUNC void func_80284E9C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284E9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80284EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284EA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284EA8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80284EAC: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80284EB0: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80284EB4: lwc1        $f9, -0x4970($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4970);
    // 0x80284EB8: lwc1        $f8, -0x496C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X496C);
    // 0x80284EBC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80284EC0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80284EC4: jal         0x80034970
    // 0x80284EC8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80284EC8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80284ECC: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x80284ED0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80284ED4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284ED8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80284EDC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284EE0: nop

    // 0x80284EE4: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80284EE8: nop

    // 0x80284EEC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80284EF0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80284EF4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284EF8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80284EFC: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80284F00: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80284F04: lwc1        $f17, -0x4968($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4968);
    // 0x80284F08: lwc1        $f16, -0x4964($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4964);
    // 0x80284F0C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80284F10: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80284F14: jal         0x80036570
    // 0x80284F18: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80284F18: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_1:
    // 0x80284F1C: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x80284F20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80284F24: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80284F28: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80284F2C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80284F30: nop

    // 0x80284F34: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80284F38: nop

    // 0x80284F3C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80284F40: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80284F44: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80284F48: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80284F4C: nop

    // 0x80284F50: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80284F54: nop

    // 0x80284F58: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80284F5C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80284F60: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80284F64: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80284F68: jal         0x80084430
    // 0x80284F6C: nop

    func_80084430(rdram, ctx);
        goto after_2;
    // 0x80284F6C: nop

    after_2:
    // 0x80284F70: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80284F74: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80284F78: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80284F7C: bne         $t1, $at, L_80284F8C
    if (ctx->r9 != ctx->r1) {
        // 0x80284F80: nop
    
            goto L_80284F8C;
    }
    // 0x80284F80: nop

    // 0x80284F84: b           L_80284F9C
    // 0x80284F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80284F9C;
    // 0x80284F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80284F8C:
    // 0x80284F8C: b           L_80284F9C
    // 0x80284F90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80284F9C;
    // 0x80284F90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80284F94: b           L_80284F9C
    // 0x80284F98: nop

        goto L_80284F9C;
    // 0x80284F98: nop

L_80284F9C:
    // 0x80284F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284FA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80284FA4: jr          $ra
    // 0x80284FA8: nop

    return;
    // 0x80284FA8: nop

;}
RECOMP_FUNC void func_80287884_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028788C: jal         0x802858D8
    // 0x80287890: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287890: nop

    after_0:
    // 0x80287894: beq         $v0, $zero, L_802878A4
    if (ctx->r2 == 0) {
        // 0x80287898: nop
    
            goto L_802878A4;
    }
    // 0x80287898: nop

    // 0x8028789C: b           L_80287974
    // 0x802878A0: nop

        goto L_80287974;
    // 0x802878A0: nop

L_802878A4:
    // 0x802878A4: jal         0x80085D54
    // 0x802878A8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802878A8: nop

    after_1:
    // 0x802878AC: beq         $v0, $zero, L_802878BC
    if (ctx->r2 == 0) {
        // 0x802878B0: nop
    
            goto L_802878BC;
    }
    // 0x802878B0: nop

    // 0x802878B4: b           L_80287974
    // 0x802878B8: nop

        goto L_80287974;
    // 0x802878B8: nop

L_802878BC:
    // 0x802878BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802878C0: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x802878C4: nop

    // 0x802878C8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802878CC: bne         $t7, $zero, L_802878F8
    if (ctx->r15 != 0) {
        // 0x802878D0: nop
    
            goto L_802878F8;
    }
    // 0x802878D0: nop

    // 0x802878D4: jal         0x80282AC4
    // 0x802878D8: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802878D8: nop

    after_2:
    // 0x802878DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802878E0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802878E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802878E8: nop

    // 0x802878EC: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x802878F0: b           L_80287974
    // 0x802878F4: nop

        goto L_80287974;
    // 0x802878F4: nop

L_802878F8:
    // 0x802878F8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802878FC: lhu         $t9, -0x1C7C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C7C);
    // 0x80287900: nop

    // 0x80287904: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80287908: beq         $t0, $zero, L_80287948
    if (ctx->r8 == 0) {
        // 0x8028790C: nop
    
            goto L_80287948;
    }
    // 0x8028790C: nop

    // 0x80287910: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80287914: addiu       $t1, $t1, 0x51D8
    ctx->r9 = ADD32(ctx->r9, 0X51D8);
    // 0x80287918: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8028791C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80287920: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x80287924: nop

    // 0x80287928: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x8028792C: nop

    // 0x80287930: bc1f        L_80287948
    if (!c1cs) {
        // 0x80287934: nop
    
            goto L_80287948;
    }
    // 0x80287934: nop

    // 0x80287938: jal         0x802828C0
    // 0x8028793C: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x8028793C: nop

    after_3:
    // 0x80287940: b           L_80287974
    // 0x80287944: nop

        goto L_80287974;
    // 0x80287944: nop

L_80287948:
    // 0x80287948: jal         0x8028150C
    // 0x8028794C: nop

    func_8028150C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x8028794C: nop

    after_4:
    // 0x80287950: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80287954: bne         $v0, $at, L_8028796C
    if (ctx->r2 != ctx->r1) {
        // 0x80287958: nop
    
            goto L_8028796C;
    }
    // 0x80287958: nop

    // 0x8028795C: jal         0x802838FC
    // 0x80287960: nop

    func_802838FC_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80287960: nop

    after_5:
    // 0x80287964: b           L_80287974
    // 0x80287968: nop

        goto L_80287974;
    // 0x80287968: nop

L_8028796C:
    // 0x8028796C: b           L_80287974
    // 0x80287970: nop

        goto L_80287974;
    // 0x80287970: nop

L_80287974:
    // 0x80287974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028797C: jr          $ra
    // 0x80287980: nop

    return;
    // 0x80287980: nop

;}
RECOMP_FUNC void func_80284758_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284758: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8028475C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284760: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284764: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284768: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x8028476C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284770: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284774: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80284778: nop

    // 0x8028477C: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x80284780: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80284784: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80284788: nop

    // 0x8028478C: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
    // 0x80284790: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80284794: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80284798: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x8028479C: sh          $t0, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r8;
    // 0x802847A0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x802847A4: addiu       $t2, $t2, 0x5808
    ctx->r10 = ADD32(ctx->r10, 0X5808);
    // 0x802847A8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802847AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802847B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802847B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802847B8: jal         0x8001C0EC
    // 0x802847BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802847BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802847C0: jal         0x80280000
    // 0x802847C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802847C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802847C8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802847CC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802847D0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x802847D4: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
    // 0x802847D8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802847DC: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802847E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802847E4: nop

    // 0x802847E8: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x802847EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802847F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802847F4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x802847F8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802847FC: jal         0x800178D4
    // 0x80284800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80284800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80284804: jal         0x8001A928
    // 0x80284808: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_3;
    // 0x80284808: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8028480C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284810: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80284814: nop

    // 0x80284818: beq         $t6, $zero, L_80284828
    if (ctx->r14 == 0) {
        // 0x8028481C: nop
    
            goto L_80284828;
    }
    // 0x8028481C: nop

    // 0x80284820: jal         0x8007A6DC
    // 0x80284824: nop

    func_8007A6DC(rdram, ctx);
        goto after_4;
    // 0x80284824: nop

    after_4:
L_80284828:
    // 0x80284828: b           L_80284830
    // 0x8028482C: nop

        goto L_80284830;
    // 0x8028482C: nop

L_80284830:
    // 0x80284830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284834: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80284838: jr          $ra
    // 0x8028483C: nop

    return;
    // 0x8028483C: nop

;}
RECOMP_FUNC void func_80289360_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289360: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80289364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028936C: jal         0x8001B62C
    // 0x80289370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80289370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80289374: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80289378: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028937C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80289380: nop

    // 0x80289384: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80289388: nop

    // 0x8028938C: bc1f        L_8028940C
    if (!c1cs) {
        // 0x80289390: nop
    
            goto L_8028940C;
    }
    // 0x80289390: nop

    // 0x80289394: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80289398: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028939C: nop

    // 0x802893A0: lwc1        $f14, 0x1C($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x802893A4: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x802893A8: jal         0x80015538
    // 0x802893AC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x802893AC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x802893B0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x802893B4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802893B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802893BC: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802893C0: nop

    // 0x802893C4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802893C8: nop

    // 0x802893CC: bc1f        L_80289404
    if (!c1cs) {
        // 0x802893D0: nop
    
            goto L_80289404;
    }
    // 0x802893D0: nop

    // 0x802893D4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802893D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802893DC: nop

    // 0x802893E0: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x802893E4: nop

    // 0x802893E8: bc1f        L_80289404
    if (!c1cs) {
        // 0x802893EC: nop
    
            goto L_80289404;
    }
    // 0x802893EC: nop

    // 0x802893F0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802893F4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802893F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802893FC: nop

    // 0x80289400: swc1        $f18, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f18.u32l;
L_80289404:
    // 0x80289404: b           L_8028941C
    // 0x80289408: nop

        goto L_8028941C;
    // 0x80289408: nop

L_8028940C:
    // 0x8028940C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80289410: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x80289414: jal         0x80281BA4
    // 0x80289418: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80289418: nop

    after_2:
L_8028941C:
    // 0x8028941C: b           L_80289424
    // 0x80289420: nop

        goto L_80289424;
    // 0x80289420: nop

L_80289424:
    // 0x80289424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289428: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028942C: jr          $ra
    // 0x80289430: nop

    return;
    // 0x80289430: nop

;}
RECOMP_FUNC void func_802877E8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802877E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802877EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802877F0: jal         0x802858D8
    // 0x802877F4: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x802877F4: nop

    after_0:
    // 0x802877F8: beq         $v0, $zero, L_80287808
    if (ctx->r2 == 0) {
        // 0x802877FC: nop
    
            goto L_80287808;
    }
    // 0x802877FC: nop

    // 0x80287800: b           L_80287874
    // 0x80287804: nop

        goto L_80287874;
    // 0x80287804: nop

L_80287808:
    // 0x80287808: jal         0x80085D54
    // 0x8028780C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x8028780C: nop

    after_1:
    // 0x80287810: beq         $v0, $zero, L_80287820
    if (ctx->r2 == 0) {
        // 0x80287814: nop
    
            goto L_80287820;
    }
    // 0x80287814: nop

    // 0x80287818: b           L_80287874
    // 0x8028781C: nop

        goto L_80287874;
    // 0x8028781C: nop

L_80287820:
    // 0x80287820: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287824: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80287828: nop

    // 0x8028782C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80287830: bne         $t7, $zero, L_80287848
    if (ctx->r15 != 0) {
        // 0x80287834: nop
    
            goto L_80287848;
    }
    // 0x80287834: nop

    // 0x80287838: jal         0x80282AC4
    // 0x8028783C: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x8028783C: nop

    after_2:
    // 0x80287840: b           L_80287874
    // 0x80287844: nop

        goto L_80287874;
    // 0x80287844: nop

L_80287848:
    // 0x80287848: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028784C: jal         0x8001B44C
    // 0x80287850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80287850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80287854: beq         $v0, $zero, L_8028786C
    if (ctx->r2 == 0) {
        // 0x80287858: nop
    
            goto L_8028786C;
    }
    // 0x80287858: nop

    // 0x8028785C: jal         0x8028236C
    // 0x80287860: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80287860: nop

    after_4:
    // 0x80287864: b           L_80287874
    // 0x80287868: nop

        goto L_80287874;
    // 0x80287868: nop

L_8028786C:
    // 0x8028786C: b           L_80287874
    // 0x80287870: nop

        goto L_80287874;
    // 0x80287870: nop

L_80287874:
    // 0x80287874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028787C: jr          $ra
    // 0x80287880: nop

    return;
    // 0x80287880: nop

;}
RECOMP_FUNC void func_802832B8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802832B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802832BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802832C0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802832C4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802832C8: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x802832CC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802832D0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802832D4: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x802832D8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802832DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802832E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802832E4: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x802832E8: jal         0x8001C0EC
    // 0x802832EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802832EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802832F0: jal         0x80280000
    // 0x802832F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x802832F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802832F8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x802832FC: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80283300: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283304: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80283308: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x8028330C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283310: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283314: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80283318: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028331C: jal         0x800178D4
    // 0x80283320: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80283320: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80283324: b           L_8028332C
    // 0x80283328: nop

        goto L_8028332C;
    // 0x80283328: nop

L_8028332C:
    // 0x8028332C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283330: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283334: jr          $ra
    // 0x80283338: nop

    return;
    // 0x80283338: nop

;}
RECOMP_FUNC void func_802897F0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802897F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802897F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802897F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802897FC: lh          $t6, -0x1D68($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D68);
    // 0x80289800: nop

    // 0x80289804: beq         $t6, $zero, L_80289920
    if (ctx->r14 == 0) {
        // 0x80289808: nop
    
            goto L_80289920;
    }
    // 0x80289808: nop

    // 0x8028980C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80289810: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80289814: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289818: lwc1        $f6, 0x51D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x8028981C: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80289820: nop

    // 0x80289824: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80289828: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8028982C: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80289830: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80289834: nop

    // 0x80289838: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8028983C: nop

    // 0x80289840: bc1f        L_80289858
    if (!c1cs) {
        // 0x80289844: nop
    
            goto L_80289858;
    }
    // 0x80289844: nop

    // 0x80289848: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8028984C: nop

    // 0x80289850: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80289854: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
L_80289858:
    // 0x80289858: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8028985C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80289860: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80289864: nop

    // 0x80289868: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8028986C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80289870: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80289874: lwc1        $f14, 0x51D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80289878: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8028987C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80289880: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80289884: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80289888: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8028988C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80289890: nop

    // 0x80289894: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80289898: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8028989C: jal         0x80084120
    // 0x802898A0: nop

    func_80084120(rdram, ctx);
        goto after_0;
    // 0x802898A0: nop

    after_0:
    // 0x802898A4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802898A8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x802898AC: nop

    // 0x802898B0: bne         $t9, $zero, L_802898D0
    if (ctx->r25 != 0) {
        // 0x802898B4: nop
    
            goto L_802898D0;
    }
    // 0x802898B4: nop

    // 0x802898B8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802898BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802898C0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802898C4: lwc1        $f6, 0x51D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x802898C8: b           L_80289908
    // 0x802898CC: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
        goto L_80289908;
    // 0x802898CC: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
L_802898D0:
    // 0x802898D0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x802898D4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802898D8: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x802898DC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802898E0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802898E4: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802898E8: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x802898EC: mul.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802898F0: jal         0x80015538
    // 0x802898F4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x802898F4: nop

    after_1:
    // 0x802898F8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802898FC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80289900: nop

    // 0x80289904: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
L_80289908:
    // 0x80289908: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028990C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80289910: nop

    // 0x80289914: lwc1        $f18, 0x3C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80289918: nop

    // 0x8028991C: swc1        $f18, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f18.u32l;
L_80289920:
    // 0x80289920: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80289924: lh          $t5, -0x1D68($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1D68);
    // 0x80289928: nop

    // 0x8028992C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80289930: nop

    // 0x80289934: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80289938: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8028993C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80289940: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80289944: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80289948: nop

    // 0x8028994C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80289950: nop

    // 0x80289954: bc1f        L_8028996C
    if (!c1cs) {
        // 0x80289958: nop
    
            goto L_8028996C;
    }
    // 0x80289958: nop

    // 0x8028995C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80289960: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80289964: nop

    // 0x80289968: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
L_8028996C:
    // 0x8028996C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80289970: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80289974: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80289978: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8028997C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80289980: nop

    // 0x80289984: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80289988: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8028998C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80289990: jal         0x80281BA4
    // 0x80289994: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80289994: nop

    after_2:
    // 0x80289998: b           L_802899A0
    // 0x8028999C: nop

        goto L_802899A0;
    // 0x8028999C: nop

L_802899A0:
    // 0x802899A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802899A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802899A8: jr          $ra
    // 0x802899AC: nop

    return;
    // 0x802899AC: nop

;}
RECOMP_FUNC void func_80282820_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282820: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282824: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282828: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028282C: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80282830: nop

    // 0x80282834: bne         $t6, $zero, L_80282848
    if (ctx->r14 != 0) {
        // 0x80282838: nop
    
            goto L_80282848;
    }
    // 0x80282838: nop

    // 0x8028283C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80282840: b           L_80282850
    // 0x80282844: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_80282850;
    // 0x80282844: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80282848:
    // 0x80282848: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x8028284C: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_80282850:
    // 0x80282850: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80282854: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80282858: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x8028285C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80282860: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80282864: addiu       $t1, $t1, 0x5808
    ctx->r9 = ADD32(ctx->r9, 0X5808);
    // 0x80282868: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8028286C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80282870: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282878: jal         0x8001C0EC
    // 0x8028287C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028287C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282880: jal         0x80280000
    // 0x80282884: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80282884: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80282888: b           L_80282890
    // 0x8028288C: nop

        goto L_80282890;
    // 0x8028288C: nop

L_80282890:
    // 0x80282890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282894: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282898: jr          $ra
    // 0x8028289C: nop

    return;
    // 0x8028289C: nop

;}
RECOMP_FUNC void func_80283EFC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283EFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283F00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283F04: jal         0x8001A928
    // 0x80283F08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80283F08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80283F0C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283F10: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283F14: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x80283F18: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283F1C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283F20: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80283F24: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283F28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283F2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283F30: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x80283F34: jal         0x8001C0EC
    // 0x80283F38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80283F38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283F3C: jal         0x80280000
    // 0x80283F40: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80283F40: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x80283F44: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80283F48: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80283F4C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80283F50: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80283F54: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283F58: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x80283F5C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283F60: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283F64: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80283F68: lwc1        $f4, 0x51C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X51C0);
    // 0x80283F6C: nop

    // 0x80283F70: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x80283F74: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80283F78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80283F7C: jal         0x8001FB3C
    // 0x80283F80: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x80283F80: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80283F84: b           L_80283F8C
    // 0x80283F88: nop

        goto L_80283F8C;
    // 0x80283F88: nop

L_80283F8C:
    // 0x80283F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283F90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283F94: jr          $ra
    // 0x80283F98: nop

    return;
    // 0x80283F98: nop

;}
RECOMP_FUNC void func_80289140_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80289140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80289144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80289148: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8028914C: lh          $a0, -0x1D68($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D68);
    // 0x80289150: jal         0x80281BA4
    // 0x80289154: nop

    func_80281BA4_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80289154: nop

    after_0:
    // 0x80289158: b           L_80289160
    // 0x8028915C: nop

        goto L_80289160;
    // 0x8028915C: nop

L_80289160:
    // 0x80289160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80289164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80289168: jr          $ra
    // 0x8028916C: nop

    return;
    // 0x8028916C: nop

;}
RECOMP_FUNC void func_8028109C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028109C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802810A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802810A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802810A8: sw          $zero, -0x1DA8($at)
    MEM_W(-0X1DA8, ctx->r1) = 0;
    // 0x802810AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802810B0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802810B4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x802810B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802810BC: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802810C0: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802810C4: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x802810C8: jal         0x800843CC
    // 0x802810CC: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x802810CC: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x802810D0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802810D4: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x802810D8: nop

    // 0x802810DC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802810E0: beq         $t8, $zero, L_802810FC
    if (ctx->r24 == 0) {
        // 0x802810E4: nop
    
            goto L_802810FC;
    }
    // 0x802810E4: nop

    // 0x802810E8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802810EC: lw          $t9, -0x1DA8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1DA8);
    // 0x802810F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802810F4: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x802810F8: sw          $t0, -0x1DA8($at)
    MEM_W(-0X1DA8, ctx->r1) = ctx->r8;
L_802810FC:
    // 0x802810FC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281100: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281104: nop

    // 0x80281108: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8028110C: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80281110: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80281114: jal         0x800843CC
    // 0x80281118: nop

    func_800843CC(rdram, ctx);
        goto after_1;
    // 0x80281118: nop

    after_1:
    // 0x8028111C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281120: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x80281124: nop

    // 0x80281128: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8028112C: bne         $t3, $zero, L_8028117C
    if (ctx->r11 != 0) {
        // 0x80281130: nop
    
            goto L_8028117C;
    }
    // 0x80281130: nop

    // 0x80281134: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281138: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028113C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281140: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x80281144: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80281148: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8028114C: nop

    // 0x80281150: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80281154: nop

    // 0x80281158: bc1f        L_80281174
    if (!c1cs) {
        // 0x8028115C: nop
    
            goto L_80281174;
    }
    // 0x8028115C: nop

    // 0x80281160: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281164: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80281168: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028116C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80281170: sw          $t7, -0x1DA8($at)
    MEM_W(-0X1DA8, ctx->r1) = ctx->r15;
L_80281174:
    // 0x80281174: b           L_80281190
    // 0x80281178: nop

        goto L_80281190;
    // 0x80281178: nop

L_8028117C:
    // 0x8028117C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281180: lw          $t8, -0x1DA8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1DA8);
    // 0x80281184: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281188: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8028118C: sw          $t9, -0x1DA8($at)
    MEM_W(-0X1DA8, ctx->r1) = ctx->r25;
L_80281190:
    // 0x80281190: b           L_80281198
    // 0x80281194: nop

        goto L_80281198;
    // 0x80281194: nop

L_80281198:
    // 0x80281198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028119C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802811A0: jr          $ra
    // 0x802811A4: nop

    return;
    // 0x802811A4: nop

;}
RECOMP_FUNC void func_802869FC_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802869FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80286A00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80286A04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80286A08: jal         0x802813EC
    // 0x80286A0C: nop

    func_802813EC_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80286A0C: nop

    after_0:
    // 0x80286A10: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80286A14: beq         $s0, $zero, L_80286A3C
    if (ctx->r16 == 0) {
        // 0x80286A18: nop
    
            goto L_80286A3C;
    }
    // 0x80286A18: nop

    // 0x80286A1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80286A20: beq         $s0, $at, L_80286A44
    if (ctx->r16 == ctx->r1) {
        // 0x80286A24: nop
    
            goto L_80286A44;
    }
    // 0x80286A24: nop

    // 0x80286A28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80286A2C: beq         $s0, $at, L_80286A4C
    if (ctx->r16 == ctx->r1) {
        // 0x80286A30: nop
    
            goto L_80286A4C;
    }
    // 0x80286A30: nop

    // 0x80286A34: b           L_80286A54
    // 0x80286A38: nop

        goto L_80286A54;
    // 0x80286A38: nop

L_80286A3C:
    // 0x80286A3C: b           L_80286A8C
    // 0x80286A40: nop

        goto L_80286A8C;
    // 0x80286A40: nop

L_80286A44:
    // 0x80286A44: b           L_80286A8C
    // 0x80286A48: nop

        goto L_80286A8C;
    // 0x80286A48: nop

L_80286A4C:
    // 0x80286A4C: b           L_80286A8C
    // 0x80286A50: nop

        goto L_80286A8C;
    // 0x80286A50: nop

L_80286A54:
    // 0x80286A54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286A58: lw          $t6, -0x1CB8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1CB8);
    // 0x80286A5C: nop

    // 0x80286A60: slti        $at, $t6, 0x1F
    ctx->r1 = SIGNED(ctx->r14) < 0X1F ? 1 : 0;
    // 0x80286A64: bne         $at, $zero, L_80286A84
    if (ctx->r1 != 0) {
        // 0x80286A68: nop
    
            goto L_80286A84;
    }
    // 0x80286A68: nop

    // 0x80286A6C: jal         0x80282788
    // 0x80286A70: nop

    func_80282788_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80286A70: nop

    after_1:
    // 0x80286A74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286A78: sw          $zero, -0x1CB8($at)
    MEM_W(-0X1CB8, ctx->r1) = 0;
    // 0x80286A7C: b           L_80286A9C
    // 0x80286A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80286A9C;
    // 0x80286A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80286A84:
    // 0x80286A84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286A88: sw          $zero, -0x1CB8($at)
    MEM_W(-0X1CB8, ctx->r1) = 0;
L_80286A8C:
    // 0x80286A8C: b           L_80286A9C
    // 0x80286A90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80286A9C;
    // 0x80286A90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80286A94: b           L_80286A9C
    // 0x80286A98: nop

        goto L_80286A9C;
    // 0x80286A98: nop

L_80286A9C:
    // 0x80286A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80286AA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80286AA4: jr          $ra
    // 0x80286AA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80286AA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80287EB4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287EB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80287EBC: jal         0x80085D54
    // 0x80287EC0: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80287EC0: nop

    after_0:
    // 0x80287EC4: beq         $v0, $zero, L_80287ED4
    if (ctx->r2 == 0) {
        // 0x80287EC8: nop
    
            goto L_80287ED4;
    }
    // 0x80287EC8: nop

    // 0x80287ECC: b           L_80287F18
    // 0x80287ED0: nop

        goto L_80287F18;
    // 0x80287ED0: nop

L_80287ED4:
    // 0x80287ED4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80287ED8: lbu         $t6, -0x1D28($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1D28);
    // 0x80287EDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80287EE0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80287EE4: sb          $t7, -0x1D28($at)
    MEM_B(-0X1D28, ctx->r1) = ctx->r15;
    // 0x80287EE8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80287EEC: lbu         $t8, -0x1D28($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1D28);
    // 0x80287EF0: nop

    // 0x80287EF4: slti        $at, $t8, 0x1E
    ctx->r1 = SIGNED(ctx->r24) < 0X1E ? 1 : 0;
    // 0x80287EF8: bne         $at, $zero, L_80287F10
    if (ctx->r1 != 0) {
        // 0x80287EFC: nop
    
            goto L_80287F10;
    }
    // 0x80287EFC: nop

    // 0x80287F00: jal         0x80283B18
    // 0x80287F04: nop

    func_80283B18_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80287F04: nop

    after_1:
    // 0x80287F08: b           L_80287F18
    // 0x80287F0C: nop

        goto L_80287F18;
    // 0x80287F0C: nop

L_80287F10:
    // 0x80287F10: b           L_80287F18
    // 0x80287F14: nop

        goto L_80287F18;
    // 0x80287F14: nop

L_80287F18:
    // 0x80287F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287F20: jr          $ra
    // 0x80287F24: nop

    return;
    // 0x80287F24: nop

;}
RECOMP_FUNC void func_80287984_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80287984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80287988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028798C: jal         0x802858D8
    // 0x80287990: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80287990: nop

    after_0:
    // 0x80287994: beq         $v0, $zero, L_802879A4
    if (ctx->r2 == 0) {
        // 0x80287998: nop
    
            goto L_802879A4;
    }
    // 0x80287998: nop

    // 0x8028799C: b           L_80287A10
    // 0x802879A0: nop

        goto L_80287A10;
    // 0x802879A0: nop

L_802879A4:
    // 0x802879A4: jal         0x80085D54
    // 0x802879A8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802879A8: nop

    after_1:
    // 0x802879AC: beq         $v0, $zero, L_802879BC
    if (ctx->r2 == 0) {
        // 0x802879B0: nop
    
            goto L_802879BC;
    }
    // 0x802879B0: nop

    // 0x802879B4: b           L_80287A10
    // 0x802879B8: nop

        goto L_80287A10;
    // 0x802879B8: nop

L_802879BC:
    // 0x802879BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802879C0: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x802879C4: nop

    // 0x802879C8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802879CC: bne         $t7, $zero, L_802879E4
    if (ctx->r15 != 0) {
        // 0x802879D0: nop
    
            goto L_802879E4;
    }
    // 0x802879D0: nop

    // 0x802879D4: jal         0x80282AC4
    // 0x802879D8: nop

    func_80282AC4_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x802879D8: nop

    after_2:
    // 0x802879DC: b           L_80287A10
    // 0x802879E0: nop

        goto L_80287A10;
    // 0x802879E0: nop

L_802879E4:
    // 0x802879E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802879E8: jal         0x8001B44C
    // 0x802879EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x802879EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802879F0: beq         $v0, $zero, L_80287A08
    if (ctx->r2 == 0) {
        // 0x802879F4: nop
    
            goto L_80287A08;
    }
    // 0x802879F4: nop

    // 0x802879F8: jal         0x8028236C
    // 0x802879FC: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x802879FC: nop

    after_4:
    // 0x80287A00: b           L_80287A10
    // 0x80287A04: nop

        goto L_80287A10;
    // 0x80287A04: nop

L_80287A08:
    // 0x80287A08: b           L_80287A10
    // 0x80287A0C: nop

        goto L_80287A10;
    // 0x80287A0C: nop

L_80287A10:
    // 0x80287A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80287A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80287A18: jr          $ra
    // 0x80287A1C: nop

    return;
    // 0x80287A1C: nop

;}
RECOMP_FUNC void func_80288118_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028811C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288120: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288124: lbu         $t6, -0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F70);
    // 0x80288128: nop

    // 0x8028812C: slti        $at, $t6, 0x5A
    ctx->r1 = SIGNED(ctx->r14) < 0X5A ? 1 : 0;
    // 0x80288130: bne         $at, $zero, L_8028814C
    if (ctx->r1 != 0) {
        // 0x80288134: nop
    
            goto L_8028814C;
    }
    // 0x80288134: nop

    // 0x80288138: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8028813C: jal         0x80069A54
    // 0x80288140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_0;
    // 0x80288140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80288144: b           L_80288160
    // 0x80288148: nop

        goto L_80288160;
    // 0x80288148: nop

L_8028814C:
    // 0x8028814C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80288150: lbu         $t7, -0x1F70($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F70);
    // 0x80288154: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288158: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8028815C: sb          $t8, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = ctx->r24;
L_80288160:
    // 0x80288160: b           L_80288168
    // 0x80288164: nop

        goto L_80288168;
    // 0x80288164: nop

L_80288168:
    // 0x80288168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028816C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80288170: jr          $ra
    // 0x80288174: nop

    return;
    // 0x80288174: nop

;}
RECOMP_FUNC void func_80283F9C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283F9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283FA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283FA4: jal         0x8001A928
    // 0x80283FA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80283FA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80283FAC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283FB0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283FB4: addiu       $t6, $zero, 0x23
    ctx->r14 = ADD32(0, 0X23);
    // 0x80283FB8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283FBC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283FC0: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80283FC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80283FC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283FD0: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x80283FD4: jal         0x8001C0EC
    // 0x80283FD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80283FD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283FDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283FE0: jal         0x8001B754
    // 0x80283FE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80283FE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80283FE8: jal         0x80280000
    // 0x80283FEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x80283FEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x80283FF0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283FF4: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x80283FF8: lw          $a3, 0x10($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X10);
    // 0x80283FFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80284000: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80284004: jal         0x8001BD44
    // 0x80284008: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001BD44(rdram, ctx);
        goto after_4;
    // 0x80284008: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x8028400C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80284010: addiu       $t0, $t0, 0x62E8
    ctx->r8 = ADD32(ctx->r8, 0X62E8);
    // 0x80284014: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80284018: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8028401C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80284020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80284024: jal         0x8001C0EC
    // 0x80284028: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80284028: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x8028402C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80284030: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x80284034: addiu       $t1, $zero, 0x2A8
    ctx->r9 = ADD32(0, 0X2A8);
    // 0x80284038: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x8028403C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80284040: lw          $t4, 0x7544($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7544);
    // 0x80284044: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80284048: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8028404C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80284050: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x80284054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028405C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80284060: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80284064: jal         0x800178D4
    // 0x80284068: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_6;
    // 0x80284068: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x8028406C: b           L_80284074
    // 0x80284070: nop

        goto L_80284074;
    // 0x80284070: nop

L_80284074:
    // 0x80284074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284078: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028407C: jr          $ra
    // 0x80284080: nop

    return;
    // 0x80284080: nop

;}
RECOMP_FUNC void func_802805C8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802805C8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802805CC: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x802805D0: nop

    // 0x802805D4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802805D8: bne         $t7, $zero, L_802805FC
    if (ctx->r15 != 0) {
        // 0x802805DC: nop
    
            goto L_802805FC;
    }
    // 0x802805DC: nop

    // 0x802805E0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802805E4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802805E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802805EC: nop

    // 0x802805F0: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x802805F4: jr          $ra
    // 0x802805F8: nop

    return;
    // 0x802805F8: nop

L_802805FC:
    // 0x802805FC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280600: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280604: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x80280608: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8028060C: nop

    // 0x80280610: bne         $t0, $at, L_80280644
    if (ctx->r8 != ctx->r1) {
        // 0x80280614: nop
    
            goto L_80280644;
    }
    // 0x80280614: nop

    // 0x80280618: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028061C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280620: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80280624: lwc1        $f6, 0x28($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X28);
    // 0x80280628: lwc1        $f11, -0x49A0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X49A0);
    // 0x8028062C: lwc1        $f10, -0x499C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X499C);
    // 0x80280630: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80280634: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80280638: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8028063C: b           L_802807A8
    // 0x80280640: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
        goto L_802807A8;
    // 0x80280640: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
L_80280644:
    // 0x80280644: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280648: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028064C: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80280650: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x80280654: nop

    // 0x80280658: bne         $t3, $at, L_80280680
    if (ctx->r11 != ctx->r1) {
        // 0x8028065C: nop
    
            goto L_80280680;
    }
    // 0x8028065C: nop

    // 0x80280660: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280664: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280668: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028066C: lwc1        $f4, 0x28($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80280670: nop

    // 0x80280674: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80280678: b           L_802807A8
    // 0x8028067C: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
        goto L_802807A8;
    // 0x8028067C: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
L_80280680:
    // 0x80280680: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280684: lb          $t5, -0x1CD8($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1CD8);
    // 0x80280688: nop

    // 0x8028068C: beq         $t5, $zero, L_802806C0
    if (ctx->r13 == 0) {
        // 0x80280690: nop
    
            goto L_802806C0;
    }
    // 0x80280690: nop

    // 0x80280694: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280698: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028069C: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x802806A0: lwc1        $f10, 0x28($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X28);
    // 0x802806A4: lwc1        $f19, -0x4998($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X4998);
    // 0x802806A8: lwc1        $f18, -0x4994($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4994);
    // 0x802806AC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802806B0: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x802806B4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802806B8: b           L_802807A8
    // 0x802806BC: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
        goto L_802807A8;
    // 0x802806BC: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
L_802806C0:
    // 0x802806C0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802806C4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802806C8: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x802806CC: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x802806D0: nop

    // 0x802806D4: bne         $t8, $at, L_802806FC
    if (ctx->r24 != ctx->r1) {
        // 0x802806D8: nop
    
            goto L_802806FC;
    }
    // 0x802806D8: nop

    // 0x802806DC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802806E0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802806E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802806E8: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x802806EC: nop

    // 0x802806F0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802806F4: b           L_802807A8
    // 0x802806F8: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
        goto L_802807A8;
    // 0x802806F8: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
L_802806FC:
    // 0x802806FC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280700: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280704: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x80280708: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8028070C: nop

    // 0x80280710: bne         $t1, $at, L_80280738
    if (ctx->r9 != ctx->r1) {
        // 0x80280714: nop
    
            goto L_80280738;
    }
    // 0x80280714: nop

    // 0x80280718: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028071C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280720: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280724: lwc1        $f18, 0x28($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X28);
    // 0x80280728: nop

    // 0x8028072C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80280730: b           L_802807A8
    // 0x80280734: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
        goto L_802807A8;
    // 0x80280734: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
L_80280738:
    // 0x80280738: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028073C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280740: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x80280744: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x80280748: nop

    // 0x8028074C: bne         $t4, $at, L_80280780
    if (ctx->r12 != ctx->r1) {
        // 0x80280750: nop
    
            goto L_80280780;
    }
    // 0x80280750: nop

    // 0x80280754: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280758: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028075C: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x80280760: lwc1        $f8, 0x28($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X28);
    // 0x80280764: lwc1        $f17, -0x4990($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4990);
    // 0x80280768: lwc1        $f16, -0x498C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X498C);
    // 0x8028076C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80280770: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80280774: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80280778: b           L_802807A8
    // 0x8028077C: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
        goto L_802807A8;
    // 0x8028077C: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
L_80280780:
    // 0x80280780: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280784: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280788: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8028078C: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80280790: lwc1        $f11, -0x4988($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4988);
    // 0x80280794: lwc1        $f10, -0x4984($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4984);
    // 0x80280798: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8028079C: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x802807A0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802807A4: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
L_802807A8:
    // 0x802807A8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802807AC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802807B0: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x802807B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802807B8: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x802807BC: nop

    // 0x802807C0: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x802807C4: nop

    // 0x802807C8: bc1f        L_802807E8
    if (!c1cs) {
        // 0x802807CC: nop
    
            goto L_802807E8;
    }
    // 0x802807CC: nop

    // 0x802807D0: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x802807D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802807D8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802807DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802807E0: nop

    // 0x802807E4: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
L_802807E8:
    // 0x802807E8: jr          $ra
    // 0x802807EC: nop

    return;
    // 0x802807EC: nop

    // 0x802807F0: jr          $ra
    // 0x802807F4: nop

    return;
    // 0x802807F4: nop

;}
RECOMP_FUNC void func_80281C68_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281C68: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80281C6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80281C70: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80281C74: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80281C78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281C7C: jal         0x8001B880
    // 0x80281C80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80281C80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281C84: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80281C88: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80281C8C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80281C90: beq         $t6, $at, L_80281CA4
    if (ctx->r14 == ctx->r1) {
        // 0x80281C94: nop
    
            goto L_80281CA4;
    }
    // 0x80281C94: nop

    // 0x80281C98: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80281C9C: bne         $t6, $at, L_80281CB8
    if (ctx->r14 != ctx->r1) {
        // 0x80281CA0: nop
    
            goto L_80281CB8;
    }
    // 0x80281CA0: nop

L_80281CA4:
    // 0x80281CA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281CA8: jal         0x8001B62C
    // 0x80281CAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80281CAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80281CB0: b           L_80281D08
    // 0x80281CB4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
        goto L_80281D08;
    // 0x80281CB4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_80281CB8:
    // 0x80281CB8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80281CBC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80281CC0: beq         $t7, $at, L_80281CD4
    if (ctx->r15 == ctx->r1) {
        // 0x80281CC4: nop
    
            goto L_80281CD4;
    }
    // 0x80281CC4: nop

    // 0x80281CC8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80281CCC: bne         $t7, $at, L_80281CFC
    if (ctx->r15 != ctx->r1) {
        // 0x80281CD0: nop
    
            goto L_80281CFC;
    }
    // 0x80281CD0: nop

L_80281CD4:
    // 0x80281CD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281CD8: jal         0x8001B580
    // 0x80281CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_2;
    // 0x80281CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281CE0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80281CE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281CE8: jal         0x8001B62C
    // 0x80281CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80281CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281CF0: sub.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x80281CF4: b           L_80281D08
    // 0x80281CF8: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
        goto L_80281D08;
    // 0x80281CF8: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_80281CFC:
    // 0x80281CFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281D00: nop

    // 0x80281D04: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
L_80281D08:
    // 0x80281D08: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281D0C: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x80281D10: nop

    // 0x80281D14: beq         $t8, $zero, L_80281D28
    if (ctx->r24 == 0) {
        // 0x80281D18: nop
    
            goto L_80281D28;
    }
    // 0x80281D18: nop

    // 0x80281D1C: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x80281D20: b           L_80281D30
    // 0x80281D24: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
        goto L_80281D30;
    // 0x80281D24: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
L_80281D28:
    // 0x80281D28: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x80281D2C: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
L_80281D30:
    // 0x80281D30: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x80281D34: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80281D38: nop

    // 0x80281D3C: beq         $t1, $t2, L_80281D80
    if (ctx->r9 == ctx->r10) {
        // 0x80281D40: nop
    
            goto L_80281D80;
    }
    // 0x80281D40: nop

    // 0x80281D44: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80281D48: addiu       $t3, $t3, 0x5CF8
    ctx->r11 = ADD32(ctx->r11, 0X5CF8);
    // 0x80281D4C: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80281D50: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80281D54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281D58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281D5C: jal         0x8001C0EC
    // 0x80281D60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80281D60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80281D64: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80281D68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281D6C: jal         0x8001B6BC
    // 0x80281D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_5;
    // 0x80281D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80281D74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281D78: jal         0x8001B754
    // 0x80281D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_6;
    // 0x80281D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80281D80:
    // 0x80281D80: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281D84: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281D88: addiu       $t4, $zero, 0x6B
    ctx->r12 = ADD32(0, 0X6B);
    // 0x80281D8C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80281D90: b           L_80281D98
    // 0x80281D94: nop

        goto L_80281D98;
    // 0x80281D94: nop

L_80281D98:
    // 0x80281D98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80281D9C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80281DA0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281DA4: jr          $ra
    // 0x80281DA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80281DA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802827F4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802827F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802827F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802827FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282800: jal         0x8001B62C
    // 0x80282804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80282804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282808: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8028280C: jal         0x802825C4
    // 0x80282810: nop

    func_802825C4_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80282810: nop

    after_1:
    // 0x80282814: beq         $v0, $zero, L_80282824
    if (ctx->r2 == 0) {
        // 0x80282818: nop
    
            goto L_80282824;
    }
    // 0x80282818: nop

    // 0x8028281C: b           L_802828F8
    // 0x80282820: nop

        goto L_802828F8;
    // 0x80282820: nop

L_80282824:
    // 0x80282824: jal         0x80085D54
    // 0x80282828: nop

    func_80085D54(rdram, ctx);
        goto after_2;
    // 0x80282828: nop

    after_2:
    // 0x8028282C: beq         $v0, $zero, L_8028283C
    if (ctx->r2 == 0) {
        // 0x80282830: nop
    
            goto L_8028283C;
    }
    // 0x80282830: nop

    // 0x80282834: b           L_802828F8
    // 0x80282838: nop

        goto L_802828F8;
    // 0x80282838: nop

L_8028283C:
    // 0x8028283C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282840: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x80282844: nop

    // 0x80282848: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8028284C: beq         $t7, $zero, L_80282864
    if (ctx->r15 == 0) {
        // 0x80282850: nop
    
            goto L_80282864;
    }
    // 0x80282850: nop

    // 0x80282854: jal         0x80281B24
    // 0x80282858: nop

    func_80281B24_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80282858: nop

    after_3:
    // 0x8028285C: b           L_802828F8
    // 0x80282860: nop

        goto L_802828F8;
    // 0x80282860: nop

L_80282864:
    // 0x80282864: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282868: lhu         $t8, -0x1C82($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C82);
    // 0x8028286C: nop

    // 0x80282870: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80282874: bne         $t9, $zero, L_8028288C
    if (ctx->r25 != 0) {
        // 0x80282878: nop
    
            goto L_8028288C;
    }
    // 0x80282878: nop

    // 0x8028287C: jal         0x802819E0
    // 0x80282880: nop

    func_802819E0_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80282880: nop

    after_4:
    // 0x80282884: b           L_802828F8
    // 0x80282888: nop

        goto L_802828F8;
    // 0x80282888: nop

L_8028288C:
    // 0x8028288C: jal         0x802822E0
    // 0x80282890: nop

    func_802822E0_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x80282890: nop

    after_5:
    // 0x80282894: beq         $v0, $zero, L_802828A4
    if (ctx->r2 == 0) {
        // 0x80282898: nop
    
            goto L_802828A4;
    }
    // 0x80282898: nop

    // 0x8028289C: b           L_802828F8
    // 0x802828A0: nop

        goto L_802828F8;
    // 0x802828A0: nop

L_802828A4:
    // 0x802828A4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802828A8: lb          $t0, -0x1C5E($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C5E);
    // 0x802828AC: nop

    // 0x802828B0: bne         $t0, $zero, L_802828C8
    if (ctx->r8 != 0) {
        // 0x802828B4: nop
    
            goto L_802828C8;
    }
    // 0x802828B4: nop

    // 0x802828B8: jal         0x80281800
    // 0x802828BC: nop

    func_80281800_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x802828BC: nop

    after_6:
    // 0x802828C0: b           L_802828F0
    // 0x802828C4: nop

        goto L_802828F0;
    // 0x802828C4: nop

L_802828C8:
    // 0x802828C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802828CC: jal         0x8001B44C
    // 0x802828D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x802828D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x802828D4: beq         $v0, $zero, L_802828E8
    if (ctx->r2 == 0) {
        // 0x802828D8: nop
    
            goto L_802828E8;
    }
    // 0x802828D8: nop

    // 0x802828DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802828E0: b           L_802828F0
    // 0x802828E4: sb          $zero, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = 0;
        goto L_802828F0;
    // 0x802828E4: sb          $zero, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = 0;
L_802828E8:
    // 0x802828E8: jal         0x80281800
    // 0x802828EC: nop

    func_80281800_code_extra_1(rdram, ctx);
        goto after_8;
    // 0x802828EC: nop

    after_8:
L_802828F0:
    // 0x802828F0: b           L_802828F8
    // 0x802828F4: nop

        goto L_802828F8;
    // 0x802828F4: nop

L_802828F8:
    // 0x802828F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802828FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282900: jr          $ra
    // 0x80282904: nop

    return;
    // 0x80282904: nop

;}
RECOMP_FUNC void func_802820D8_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802820D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802820DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802820E0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802820E4: addiu       $t6, $t6, 0x5CF8
    ctx->r14 = ADD32(ctx->r14, 0X5CF8);
    // 0x802820E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802820EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802820F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802820F4: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x802820F8: jal         0x8001C0EC
    // 0x802820FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802820FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282100: b           L_80282108
    // 0x80282104: nop

        goto L_80282108;
    // 0x80282104: nop

L_80282108:
    // 0x80282108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028210C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282110: jr          $ra
    // 0x80282114: nop

    return;
    // 0x80282114: nop

;}
RECOMP_FUNC void func_8028330C_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028330C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283314: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283318: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028331C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80283320: nop

    // 0x80283324: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    // 0x80283328: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028332C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80283330: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80283334: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283338: nop

    // 0x8028333C: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x80283340: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283344: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283348: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028334C: nop

    // 0x80283350: swc1        $f8, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f8.u32l;
    // 0x80283354: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283358: jal         0x8001B62C
    // 0x8028335C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8028335C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80283360: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80283364: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80283368: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028336C: nop

    // 0x80283370: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80283374: nop

    // 0x80283378: bc1f        L_80283390
    if (!c1cs) {
        // 0x8028337C: nop
    
            goto L_80283390;
    }
    // 0x8028337C: nop

    // 0x80283380: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80283384: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80283388: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028338C: swc1        $f18, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f18.u32l;
L_80283390:
    // 0x80283390: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283394: lwc1        $f4, -0x1C70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x80283398: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028339C: lwc1        $f9, 0x3ED0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3ED0);
    // 0x802833A0: lwc1        $f8, 0x3ED4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3ED4);
    // 0x802833A4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802833A8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x802833AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802833B0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802833B4: swc1        $f16, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f16.u32l;
    // 0x802833B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802833BC: lwc1        $f18, -0x1C70($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x802833C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802833C4: nop

    // 0x802833C8: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x802833CC: nop

    // 0x802833D0: bc1f        L_802833E4
    if (!c1cs) {
        // 0x802833D4: nop
    
            goto L_802833E4;
    }
    // 0x802833D4: nop

    // 0x802833D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802833DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802833E0: swc1        $f6, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f6.u32l;
L_802833E4:
    // 0x802833E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802833E8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802833EC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802833F0: lwc1        $f8, -0x1C70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C70);
    // 0x802833F4: nop

    // 0x802833F8: swc1        $f8, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f8.u32l;
    // 0x802833FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283400: lwc1        $f10, -0x1C80($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80283404: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80283408: lwc1        $f19, 0x3ED8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X3ED8);
    // 0x8028340C: lwc1        $f18, 0x3EDC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3EDC);
    // 0x80283410: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80283414: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80283418: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028341C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80283420: swc1        $f6, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f6.u32l;
    // 0x80283424: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283428: lwc1        $f8, -0x1C80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x8028342C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80283430: nop

    // 0x80283434: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80283438: nop

    // 0x8028343C: bc1f        L_80283450
    if (!c1cs) {
        // 0x80283440: nop
    
            goto L_80283450;
    }
    // 0x80283440: nop

    // 0x80283444: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80283448: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028344C: swc1        $f16, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f16.u32l;
L_80283450:
    // 0x80283450: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283454: lb          $t0, -0x1C88($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C88);
    // 0x80283458: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028345C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80283460: lwc1        $f18, -0x1C80($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80283464: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80283468: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028346C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80283470: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80283474: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80283478: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
    // 0x8028347C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283480: lwc1        $f16, -0x1C78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x80283484: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80283488: lwc1        $f7, 0x3EE0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3EE0);
    // 0x8028348C: lwc1        $f6, 0x3EE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3EE4);
    // 0x80283490: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80283494: add.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f18.d + ctx->f6.d;
    // 0x80283498: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028349C: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x802834A0: swc1        $f8, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f8.u32l;
    // 0x802834A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802834A8: lwc1        $f10, -0x1C78($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x802834AC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802834B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802834B4: nop

    // 0x802834B8: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x802834BC: nop

    // 0x802834C0: bc1f        L_802834D8
    if (!c1cs) {
        // 0x802834C4: nop
    
            goto L_802834D8;
    }
    // 0x802834C4: nop

    // 0x802834C8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802834CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802834D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802834D4: swc1        $f18, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f18.u32l;
L_802834D8:
    // 0x802834D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802834DC: lwc1        $f6, -0x1C78($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C78);
    // 0x802834E0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802834E4: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802834E8: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x802834EC: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x802834F0: b           L_802834F8
    // 0x802834F4: nop

        goto L_802834F8;
    // 0x802834F4: nop

L_802834F8:
    // 0x802834F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802834FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283500: jr          $ra
    // 0x80283504: nop

    return;
    // 0x80283504: nop

;}
RECOMP_FUNC void func_80282058_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028205C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282060: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80282064: addiu       $t6, $t6, 0x5CF8
    ctx->r14 = ADD32(ctx->r14, 0X5CF8);
    // 0x80282068: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8028206C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282074: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80282078: jal         0x8001C0EC
    // 0x8028207C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028207C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282080: b           L_80282088
    // 0x80282084: nop

        goto L_80282088;
    // 0x80282084: nop

L_80282088:
    // 0x80282088: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028208C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282090: jr          $ra
    // 0x80282094: nop

    return;
    // 0x80282094: nop

;}
RECOMP_FUNC void func_80282198_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282198: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028219C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802821A0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802821A4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802821A8: addiu       $t6, $zero, 0x6F
    ctx->r14 = ADD32(0, 0X6F);
    // 0x802821AC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x802821B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802821B4: jal         0x8001BBDC
    // 0x802821B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x802821B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802821BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802821C0: sh          $zero, -0x1CE8($at)
    MEM_H(-0X1CE8, ctx->r1) = 0;
    // 0x802821C4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802821C8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802821CC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802821D0: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x802821D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802821D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802821DC: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x802821E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802821E4: jal         0x800178D4
    // 0x802821E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x802821E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x802821EC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802821F0: lh          $t0, -0x1F00($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1F00);
    // 0x802821F4: nop

    // 0x802821F8: beq         $t0, $zero, L_80282208
    if (ctx->r8 == 0) {
        // 0x802821FC: nop
    
            goto L_80282208;
    }
    // 0x802821FC: nop

    // 0x80282200: jal         0x8007BF18
    // 0x80282204: nop

    func_8007BF18(rdram, ctx);
        goto after_2;
    // 0x80282204: nop

    after_2:
L_80282208:
    // 0x80282208: b           L_80282210
    // 0x8028220C: nop

        goto L_80282210;
    // 0x8028220C: nop

L_80282210:
    // 0x80282210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80282218: jr          $ra
    // 0x8028221C: nop

    return;
    // 0x8028221C: nop

;}
RECOMP_FUNC void func_80282E60_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282E68: jal         0x80085D54
    // 0x80282E6C: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80282E6C: nop

    after_0:
    // 0x80282E70: beq         $v0, $zero, L_80282E80
    if (ctx->r2 == 0) {
        // 0x80282E74: nop
    
            goto L_80282E80;
    }
    // 0x80282E74: nop

    // 0x80282E78: b           L_80282EBC
    // 0x80282E7C: nop

        goto L_80282EBC;
    // 0x80282E7C: nop

L_80282E80:
    // 0x80282E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282E84: jal         0x8001B44C
    // 0x80282E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x80282E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282E8C: beq         $v0, $zero, L_80282EB4
    if (ctx->r2 == 0) {
        // 0x80282E90: nop
    
            goto L_80282EB4;
    }
    // 0x80282E90: nop

    // 0x80282E94: jal         0x8028175C
    // 0x80282E98: nop

    func_8028175C_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80282E98: nop

    after_2:
    // 0x80282E9C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282EA0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282EA4: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80282EA8: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80282EAC: b           L_80282EBC
    // 0x80282EB0: nop

        goto L_80282EBC;
    // 0x80282EB0: nop

L_80282EB4:
    // 0x80282EB4: b           L_80282EBC
    // 0x80282EB8: nop

        goto L_80282EBC;
    // 0x80282EB8: nop

L_80282EBC:
    // 0x80282EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282EC4: jr          $ra
    // 0x80282EC8: nop

    return;
    // 0x80282EC8: nop

;}
RECOMP_FUNC void func_80283BD4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283BD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283BD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283BDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283BE0: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x80283BE4: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x80283BE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283BF0: jal         0x8001BD44
    // 0x80283BF4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80283BF4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_0:
    // 0x80283BF8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80283BFC: addiu       $t7, $t7, 0x5CF8
    ctx->r15 = ADD32(ctx->r15, 0X5CF8);
    // 0x80283C00: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80283C04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283C08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283C10: jal         0x8001C0EC
    // 0x80283C14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80283C14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80283C18: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80283C1C: addiu       $a3, $a3, 0x5DAC
    ctx->r7 = ADD32(ctx->r7, 0X5DAC);
    // 0x80283C20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283C28: jal         0x8001ABF4
    // 0x80283C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80283C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80283C30: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283C34: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80283C38: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80283C3C: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
    // 0x80283C40: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283C44: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80283C48: addiu       $t0, $zero, 0x65
    ctx->r8 = ADD32(0, 0X65);
    // 0x80283C4C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80283C50: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80283C54: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80283C58: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80283C5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80283C60: nop

    // 0x80283C64: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
    // 0x80283C68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283C6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80283C70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283C74: jal         0x80019448
    // 0x80283C78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_3;
    // 0x80283C78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80283C7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283C80: sb          $zero, -0x1C88($at)
    MEM_B(-0X1C88, ctx->r1) = 0;
    // 0x80283C84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283C88: sb          $zero, -0x1C84($at)
    MEM_B(-0X1C84, ctx->r1) = 0;
    // 0x80283C8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80283C90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283C94: swc1        $f6, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f6.u32l;
    // 0x80283C98: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80283C9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283CA0: swc1        $f8, -0x1C78($at)
    MEM_W(-0X1C78, ctx->r1) = ctx->f8.u32l;
    // 0x80283CA4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80283CA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283CAC: swc1        $f10, -0x1C70($at)
    MEM_W(-0X1C70, ctx->r1) = ctx->f10.u32l;
    // 0x80283CB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283CB4: sb          $zero, -0x1C62($at)
    MEM_B(-0X1C62, ctx->r1) = 0;
    // 0x80283CB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80283CBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283CC0: swc1        $f16, -0x1C68($at)
    MEM_W(-0X1C68, ctx->r1) = ctx->f16.u32l;
    // 0x80283CC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283CC8: sb          $zero, -0x1C58($at)
    MEM_B(-0X1C58, ctx->r1) = 0;
    // 0x80283CCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283CD0: sb          $zero, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = 0;
    // 0x80283CD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283CD8: sb          $zero, -0x1C50($at)
    MEM_B(-0X1C50, ctx->r1) = 0;
    // 0x80283CDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80283CE0: sb          $zero, -0x1C48($at)
    MEM_B(-0X1C48, ctx->r1) = 0;
    // 0x80283CE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283CE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80283CEC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80283CF0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283CF4: jal         0x800178D4
    // 0x80283CF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80283CF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80283CFC: b           L_80283D04
    // 0x80283D00: nop

        goto L_80283D04;
    // 0x80283D00: nop

L_80283D04:
    // 0x80283D04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283D08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283D0C: jr          $ra
    // 0x80283D10: nop

    return;
    // 0x80283D10: nop

    // 0x80283D14: nop

    // 0x80283D18: nop

    // 0x80283D1C: nop

;}
RECOMP_FUNC void func_8028320C_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028320C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283214: jal         0x80280DFC
    // 0x80283218: nop

    func_80280DFC_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80283218: nop

    after_0:
    // 0x8028321C: jal         0x80281184
    // 0x80283220: nop

    func_80281184_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80283220: nop

    after_1:
    // 0x80283224: jal         0x802813C0
    // 0x80283228: nop

    func_802813C0_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80283228: nop

    after_2:
    // 0x8028322C: jal         0x802807D4
    // 0x80283230: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802807D4_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80283230: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x80283234: jal         0x802805D8
    // 0x80283238: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802805D8_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80283238: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x8028323C: jal         0x802802EC
    // 0x80283240: nop

    func_802802EC_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x80283240: nop

    after_5:
    // 0x80283244: b           L_8028324C
    // 0x80283248: nop

        goto L_8028324C;
    // 0x80283248: nop

L_8028324C:
    // 0x8028324C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283254: jr          $ra
    // 0x80283258: nop

    return;
    // 0x80283258: nop

;}
RECOMP_FUNC void func_80282098_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282098: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028209C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802820A0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802820A4: addiu       $t6, $t6, 0x5CF8
    ctx->r14 = ADD32(ctx->r14, 0X5CF8);
    // 0x802820A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802820AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802820B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802820B4: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x802820B8: jal         0x8001C0EC
    // 0x802820BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802820BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802820C0: b           L_802820C8
    // 0x802820C4: nop

        goto L_802820C8;
    // 0x802820C4: nop

L_802820C8:
    // 0x802820C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802820CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802820D0: jr          $ra
    // 0x802820D4: nop

    return;
    // 0x802820D4: nop

;}
RECOMP_FUNC void func_80280AD8_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280AD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280ADC: lwc1        $f4, -0x1C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280AE0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280AE4: lwc1        $f9, 0x3E60($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3E60);
    // 0x80280AE8: lwc1        $f8, 0x3E64($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3E64);
    // 0x80280AEC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280AF0: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80280AF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280AF8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280AFC: swc1        $f16, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f16.u32l;
    // 0x80280B00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280B04: lwc1        $f18, -0x1C80($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280B08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280B0C: nop

    // 0x80280B10: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80280B14: nop

    // 0x80280B18: bc1f        L_80280B2C
    if (!c1cs) {
        // 0x80280B1C: nop
    
            goto L_80280B2C;
    }
    // 0x80280B1C: nop

    // 0x80280B20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280B24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280B28: swc1        $f6, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f6.u32l;
L_80280B2C:
    // 0x80280B2C: jr          $ra
    // 0x80280B30: nop

    return;
    // 0x80280B30: nop

    // 0x80280B34: jr          $ra
    // 0x80280B38: nop

    return;
    // 0x80280B38: nop

;}
RECOMP_FUNC void func_802810EC_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802810EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802810F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802810F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802810F8: lwc1        $f4, -0x1C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x802810FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281100: nop

    // 0x80281104: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80281108: nop

    // 0x8028110C: bc1t        L_80281144
    if (c1cs) {
        // 0x80281110: nop
    
            goto L_80281144;
    }
    // 0x80281110: nop

    // 0x80281114: jal         0x80280B3C
    // 0x80281118: nop

    func_80280B3C_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80281118: nop

    after_0:
    // 0x8028111C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281120: lwc1        $f8, -0x1C80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80281124: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281128: nop

    // 0x8028112C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80281130: nop

    // 0x80281134: bc1f        L_80281144
    if (!c1cs) {
        // 0x80281138: nop
    
            goto L_80281144;
    }
    // 0x80281138: nop

    // 0x8028113C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281140: sb          $zero, -0x1C88($at)
    MEM_B(-0X1C88, ctx->r1) = 0;
L_80281144:
    // 0x80281144: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281148: lb          $t6, -0x1C88($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C88);
    // 0x8028114C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281150: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80281154: lwc1        $f4, -0x1C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80281158: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8028115C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281160: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281164: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80281168: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
    // 0x8028116C: b           L_80281174
    // 0x80281170: nop

        goto L_80281174;
    // 0x80281170: nop

L_80281174:
    // 0x80281174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028117C: jr          $ra
    // 0x80281180: nop

    return;
    // 0x80281180: nop

;}
RECOMP_FUNC void func_80281EF0_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281EF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281EF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281EF8: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x80281EFC: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x80281F00: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80281F04: addiu       $t7, $t7, 0x5CF8
    ctx->r15 = ADD32(ctx->r15, 0X5CF8);
    // 0x80281F08: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281F0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80281F10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281F14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281F18: jal         0x8001C0EC
    // 0x80281F1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80281F1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80281F20: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281F24: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281F28: addiu       $t8, $zero, 0x6D
    ctx->r24 = ADD32(0, 0X6D);
    // 0x80281F2C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80281F30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281F34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281F38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80281F3C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80281F40: jal         0x800178D4
    // 0x80281F44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80281F44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80281F48: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80281F4C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80281F50: jal         0x8001FB3C
    // 0x80281F54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80281F54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80281F58: b           L_80281F60
    // 0x80281F5C: nop

        goto L_80281F60;
    // 0x80281F5C: nop

L_80281F60:
    // 0x80281F60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281F68: jr          $ra
    // 0x80281F6C: nop

    return;
    // 0x80281F6C: nop

;}
RECOMP_FUNC void func_80280B3C_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280B3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280B40: lwc1        $f4, -0x1C80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280B44: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280B48: lwc1        $f9, 0x3E68($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3E68);
    // 0x80280B4C: lwc1        $f8, 0x3E6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3E6C);
    // 0x80280B50: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280B54: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80280B58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280B5C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280B60: swc1        $f16, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f16.u32l;
    // 0x80280B64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280B68: lwc1        $f18, -0x1C80($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C80);
    // 0x80280B6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280B70: nop

    // 0x80280B74: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80280B78: nop

    // 0x80280B7C: bc1f        L_80280B90
    if (!c1cs) {
        // 0x80280B80: nop
    
            goto L_80280B90;
    }
    // 0x80280B80: nop

    // 0x80280B84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280B88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280B8C: swc1        $f6, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->f6.u32l;
L_80280B90:
    // 0x80280B90: jr          $ra
    // 0x80280B94: nop

    return;
    // 0x80280B94: nop

    // 0x80280B98: jr          $ra
    // 0x80280B9C: nop

    return;
    // 0x80280B9C: nop

;}
RECOMP_FUNC void func_802802EC_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802802EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802802F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802802F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802802F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802802FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80280300: jal         0x80014E80
    // 0x80280304: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80280304: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80280308: bne         $v0, $zero, L_80280384
    if (ctx->r2 != 0) {
        // 0x8028030C: nop
    
            goto L_80280384;
    }
    // 0x8028030C: nop

    // 0x80280310: jal         0x80014E80
    // 0x80280314: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80280314: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    after_1:
    // 0x80280318: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8028031C: jal         0x80014E80
    // 0x80280320: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80280320: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_2:
    // 0x80280324: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80280328: jal         0x80014E80
    // 0x8028032C: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x8028032C: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    after_3:
    // 0x80280330: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x80280334: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280338: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028033C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80280340: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80280344: mtc1        $s1, $f16
    ctx->f16.u32l = ctx->r17;
    // 0x80280348: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8028034C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80280350: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x80280354: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80280358: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8028035C: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80280360: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80280364: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80280368: addiu       $a0, $zero, 0x2BC
    ctx->r4 = ADD32(0, 0X2BC);
    // 0x8028036C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80280370: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80280374: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80280378: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8028037C: jal         0x80081468
    // 0x80280380: nop

    func_80081468(rdram, ctx);
        goto after_4;
    // 0x80280380: nop

    after_4:
L_80280384:
    // 0x80280384: b           L_8028038C
    // 0x80280388: nop

        goto L_8028038C;
    // 0x80280388: nop

L_8028038C:
    // 0x8028038C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80280390: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80280394: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80280398: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8028039C: jr          $ra
    // 0x802803A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802803A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802803A4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802803A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802803A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802803AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802803B0: lb          $t6, -0x1C62($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C62);
    // 0x802803B4: nop

    // 0x802803B8: bne         $t6, $zero, L_80280420
    if (ctx->r14 != 0) {
        // 0x802803BC: nop
    
            goto L_80280420;
    }
    // 0x802803BC: nop

    // 0x802803C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802803C4: lwc1        $f4, -0x1C68($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C68);
    // 0x802803C8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802803CC: lwc1        $f9, 0x3E40($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3E40);
    // 0x802803D0: lwc1        $f8, 0x3E44($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3E44);
    // 0x802803D4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802803D8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802803DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802803E0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802803E4: swc1        $f16, -0x1C68($at)
    MEM_W(-0X1C68, ctx->r1) = ctx->f16.u32l;
    // 0x802803E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802803EC: lwc1        $f18, -0x1C68($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C68);
    // 0x802803F0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802803F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802803F8: nop

    // 0x802803FC: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80280400: nop

    // 0x80280404: bc1f        L_80280418
    if (!c1cs) {
        // 0x80280408: nop
    
            goto L_80280418;
    }
    // 0x80280408: nop

    // 0x8028040C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80280410: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280414: sb          $t7, -0x1C62($at)
    MEM_B(-0X1C62, ctx->r1) = ctx->r15;
L_80280418:
    // 0x80280418: b           L_80280474
    // 0x8028041C: nop

        goto L_80280474;
    // 0x8028041C: nop

L_80280420:
    // 0x80280420: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280424: lwc1        $f6, -0x1C68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C68);
    // 0x80280428: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028042C: lwc1        $f11, 0x3E48($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3E48);
    // 0x80280430: lwc1        $f10, 0x3E4C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3E4C);
    // 0x80280434: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80280438: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x8028043C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280440: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80280444: swc1        $f18, -0x1C68($at)
    MEM_W(-0X1C68, ctx->r1) = ctx->f18.u32l;
    // 0x80280448: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028044C: lwc1        $f4, -0x1C68($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C68);
    // 0x80280450: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x80280454: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280458: nop

    // 0x8028045C: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80280460: nop

    // 0x80280464: bc1f        L_80280474
    if (!c1cs) {
        // 0x80280468: nop
    
            goto L_80280474;
    }
    // 0x80280468: nop

    // 0x8028046C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280470: sb          $zero, -0x1C62($at)
    MEM_B(-0X1C62, ctx->r1) = 0;
L_80280474:
    // 0x80280474: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280478: lwc1        $f12, -0x1C68($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1C68);
    // 0x8028047C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80280480: jal         0x80015538
    // 0x80280484: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80280484: nop

    after_0:
    // 0x80280488: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028048C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280490: nop

    // 0x80280494: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
    // 0x80280498: b           L_802804A0
    // 0x8028049C: nop

        goto L_802804A0;
    // 0x8028049C: nop

L_802804A0:
    // 0x802804A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802804A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802804A8: jr          $ra
    // 0x802804AC: nop

    return;
    // 0x802804AC: nop

;}
RECOMP_FUNC void func_80282ECC_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282ECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282ED4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282ED8: jal         0x8001B44C
    // 0x80282EDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_0;
    // 0x80282EDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80282EE0: beq         $v0, $zero, L_80282EF4
    if (ctx->r2 == 0) {
        // 0x80282EE4: nop
    
            goto L_80282EF4;
    }
    // 0x80282EE4: nop

    // 0x80282EE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80282EEC: jal         0x80069A54
    // 0x80282EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_1;
    // 0x80282EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80282EF4:
    // 0x80282EF4: b           L_80282EFC
    // 0x80282EF8: nop

        goto L_80282EFC;
    // 0x80282EF8: nop

L_80282EFC:
    // 0x80282EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282F04: jr          $ra
    // 0x80282F08: nop

    return;
    // 0x80282F08: nop

;}
RECOMP_FUNC void func_80280000_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280000: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80280004: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280008: lb          $t6, -0x1C48($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C48);
    // 0x8028000C: nop

    // 0x80280010: bne         $t6, $zero, L_80280020
    if (ctx->r14 != 0) {
        // 0x80280014: nop
    
            goto L_80280020;
    }
    // 0x80280014: nop

    // 0x80280018: b           L_802800F8
    // 0x8028001C: nop

        goto L_802800F8;
    // 0x8028001C: nop

L_80280020:
    // 0x80280020: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280024: lb          $t7, -0x1C48($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C48);
    // 0x80280028: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028002C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80280030: sb          $t8, -0x1C48($at)
    MEM_B(-0X1C48, ctx->r1) = ctx->r24;
    // 0x80280034: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280038: lb          $t9, -0x1C50($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1C50);
    // 0x8028003C: nop

    // 0x80280040: bne         $t9, $zero, L_80280078
    if (ctx->r25 != 0) {
        // 0x80280044: nop
    
            goto L_80280078;
    }
    // 0x80280044: nop

    // 0x80280048: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8028004C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280050: nop

    // 0x80280054: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80280058: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028005C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280060: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280064: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80280068: nop

    // 0x8028006C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80280070: b           L_802800F0
    // 0x80280074: swc1        $f10, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f10.u32l;
        goto L_802800F0;
    // 0x80280074: swc1        $f10, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f10.u32l;
L_80280078:
    // 0x80280078: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028007C: lb          $t1, -0x1C50($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1C50);
    // 0x80280080: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80280084: bne         $t1, $at, L_802800BC
    if (ctx->r9 != ctx->r1) {
        // 0x80280088: nop
    
            goto L_802800BC;
    }
    // 0x80280088: nop

    // 0x8028008C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80280090: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280094: nop

    // 0x80280098: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x8028009C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802800A0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802800A4: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802800A8: lwc1        $f18, 0x24($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X24);
    // 0x802800AC: nop

    // 0x802800B0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802800B4: b           L_802800F0
    // 0x802800B8: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
        goto L_802800F0;
    // 0x802800B8: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
L_802800BC:
    // 0x802800BC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802800C0: lb          $t3, -0x1C50($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1C50);
    // 0x802800C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802800C8: bne         $t3, $at, L_802800F0
    if (ctx->r11 != ctx->r1) {
        // 0x802800CC: nop
    
            goto L_802800F0;
    }
    // 0x802800CC: nop

    // 0x802800D0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802800D4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802800D8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x802800DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802800E0: lwc1        $f8, 0x2C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x802800E4: nop

    // 0x802800E8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802800EC: swc1        $f16, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f16.u32l;
L_802800F0:
    // 0x802800F0: b           L_802800F8
    // 0x802800F4: nop

        goto L_802800F8;
    // 0x802800F4: nop

L_802800F8:
    // 0x802800F8: jr          $ra
    // 0x802800FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802800FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802831B4_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802831B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802831B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802831BC: jal         0x80280DFC
    // 0x802831C0: nop

    func_80280DFC_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x802831C0: nop

    after_0:
    // 0x802831C4: jal         0x80281184
    // 0x802831C8: nop

    func_80281184_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x802831C8: nop

    after_1:
    // 0x802831CC: jal         0x802813C0
    // 0x802831D0: nop

    func_802813C0_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x802831D0: nop

    after_2:
    // 0x802831D4: jal         0x802807D4
    // 0x802831D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802807D4_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x802831D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x802831DC: jal         0x802805D8
    // 0x802831E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802805D8_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x802831E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x802831E4: jal         0x802804B0
    // 0x802831E8: nop

    func_802804B0_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x802831E8: nop

    after_5:
    // 0x802831EC: jal         0x802802EC
    // 0x802831F0: nop

    func_802802EC_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x802831F0: nop

    after_6:
    // 0x802831F4: b           L_802831FC
    // 0x802831F8: nop

        goto L_802831FC;
    // 0x802831F8: nop

L_802831FC:
    // 0x802831FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283204: jr          $ra
    // 0x80283208: nop

    return;
    // 0x80283208: nop

;}
RECOMP_FUNC void func_802826E0_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802826E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802826E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802826E8: jal         0x802825C4
    // 0x802826EC: nop

    func_802825C4_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x802826EC: nop

    after_0:
    // 0x802826F0: beq         $v0, $zero, L_80282700
    if (ctx->r2 == 0) {
        // 0x802826F4: nop
    
            goto L_80282700;
    }
    // 0x802826F4: nop

    // 0x802826F8: b           L_802827E4
    // 0x802826FC: nop

        goto L_802827E4;
    // 0x802826FC: nop

L_80282700:
    // 0x80282700: jal         0x80085D54
    // 0x80282704: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80282704: nop

    after_1:
    // 0x80282708: beq         $v0, $zero, L_80282718
    if (ctx->r2 == 0) {
        // 0x8028270C: nop
    
            goto L_80282718;
    }
    // 0x8028270C: nop

    // 0x80282710: b           L_802827E4
    // 0x80282714: nop

        goto L_802827E4;
    // 0x80282714: nop

L_80282718:
    // 0x80282718: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028271C: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x80282720: nop

    // 0x80282724: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80282728: beq         $t7, $zero, L_80282748
    if (ctx->r15 == 0) {
        // 0x8028272C: nop
    
            goto L_80282748;
    }
    // 0x8028272C: nop

    // 0x80282730: jal         0x8028189C
    // 0x80282734: nop

    func_8028189C_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80282734: nop

    after_2:
    // 0x80282738: jal         0x80281660
    // 0x8028273C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80281660_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x8028273C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80282740: b           L_802827E4
    // 0x80282744: nop

        goto L_802827E4;
    // 0x80282744: nop

L_80282748:
    // 0x80282748: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028274C: lhu         $t8, -0x1C82($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C82);
    // 0x80282750: nop

    // 0x80282754: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80282758: beq         $t9, $zero, L_80282778
    if (ctx->r25 == 0) {
        // 0x8028275C: nop
    
            goto L_80282778;
    }
    // 0x8028275C: nop

    // 0x80282760: jal         0x80281C68
    // 0x80282764: nop

    func_80281C68_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80282764: nop

    after_4:
    // 0x80282768: jal         0x80281660
    // 0x8028276C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80281660_code_extra_1(rdram, ctx);
        goto after_5;
    // 0x8028276C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80282770: b           L_802827E4
    // 0x80282774: nop

        goto L_802827E4;
    // 0x80282774: nop

L_80282778:
    // 0x80282778: jal         0x802822E0
    // 0x8028277C: nop

    func_802822E0_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x8028277C: nop

    after_6:
    // 0x80282780: beq         $v0, $zero, L_80282790
    if (ctx->r2 == 0) {
        // 0x80282784: nop
    
            goto L_80282790;
    }
    // 0x80282784: nop

    // 0x80282788: b           L_802827E4
    // 0x8028278C: nop

        goto L_802827E4;
    // 0x8028278C: nop

L_80282790:
    // 0x80282790: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282794: lb          $t0, -0x1C5E($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C5E);
    // 0x80282798: nop

    // 0x8028279C: bne         $t0, $zero, L_802827B4
    if (ctx->r8 != 0) {
        // 0x802827A0: nop
    
            goto L_802827B4;
    }
    // 0x802827A0: nop

    // 0x802827A4: jal         0x8028175C
    // 0x802827A8: nop

    func_8028175C_code_extra_1(rdram, ctx);
        goto after_7;
    // 0x802827A8: nop

    after_7:
    // 0x802827AC: b           L_802827DC
    // 0x802827B0: nop

        goto L_802827DC;
    // 0x802827B0: nop

L_802827B4:
    // 0x802827B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802827B8: jal         0x8001B44C
    // 0x802827BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_8;
    // 0x802827BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802827C0: beq         $v0, $zero, L_802827D4
    if (ctx->r2 == 0) {
        // 0x802827C4: nop
    
            goto L_802827D4;
    }
    // 0x802827C4: nop

    // 0x802827C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802827CC: b           L_802827DC
    // 0x802827D0: sb          $zero, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = 0;
        goto L_802827DC;
    // 0x802827D0: sb          $zero, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = 0;
L_802827D4:
    // 0x802827D4: jal         0x8028175C
    // 0x802827D8: nop

    func_8028175C_code_extra_1(rdram, ctx);
        goto after_9;
    // 0x802827D8: nop

    after_9:
L_802827DC:
    // 0x802827DC: b           L_802827E4
    // 0x802827E0: nop

        goto L_802827E4;
    // 0x802827E0: nop

L_802827E4:
    // 0x802827E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802827E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802827EC: jr          $ra
    // 0x802827F0: nop

    return;
    // 0x802827F0: nop

;}
RECOMP_FUNC void func_8028325C_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028325C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80283264: jal         0x80280DFC
    // 0x80283268: nop

    func_80280DFC_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80283268: nop

    after_0:
    // 0x8028326C: jal         0x802810EC
    // 0x80283270: nop

    func_802810EC_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80283270: nop

    after_1:
    // 0x80283274: jal         0x802812D4
    // 0x80283278: nop

    func_802812D4_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80283278: nop

    after_2:
    // 0x8028327C: jal         0x802807D4
    // 0x80283280: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802807D4_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80283280: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80283284: jal         0x802805D8
    // 0x80283288: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802805D8_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80283288: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8028328C: b           L_80283294
    // 0x80283290: nop

        goto L_80283294;
    // 0x80283290: nop

L_80283294:
    // 0x80283294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028329C: jr          $ra
    // 0x802832A0: nop

    return;
    // 0x802832A0: nop

;}
RECOMP_FUNC void func_802822E0_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802822E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802822E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802822E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802822EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802822F0: lh          $t6, -0x1D08($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D08);
    // 0x802822F4: nop

    // 0x802822F8: bne         $t6, $zero, L_80282530
    if (ctx->r14 != 0) {
        // 0x802822FC: nop
    
            goto L_80282530;
    }
    // 0x802822FC: nop

    // 0x80282300: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282304: lhu         $t7, -0x1C82($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1C82);
    // 0x80282308: nop

    // 0x8028230C: andi        $t8, $t7, 0x2014
    ctx->r24 = ctx->r15 & 0X2014;
    // 0x80282310: beq         $t8, $zero, L_8028244C
    if (ctx->r24 == 0) {
        // 0x80282314: nop
    
            goto L_8028244C;
    }
    // 0x80282314: nop

    // 0x80282318: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028231C: lh          $t9, -0x1F00($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1F00);
    // 0x80282320: nop

    // 0x80282324: bne         $t9, $zero, L_80282400
    if (ctx->r25 != 0) {
        // 0x80282328: nop
    
            goto L_80282400;
    }
    // 0x80282328: nop

    // 0x8028232C: jal         0x80079DFC
    // 0x80282330: nop

    func_80079DFC(rdram, ctx);
        goto after_0;
    // 0x80282330: nop

    after_0:
    // 0x80282334: bne         $v0, $zero, L_802823F8
    if (ctx->r2 != 0) {
        // 0x80282338: nop
    
            goto L_802823F8;
    }
    // 0x80282338: nop

    // 0x8028233C: jal         0x8007BE30
    // 0x80282340: nop

    func_8007BE30(rdram, ctx);
        goto after_1;
    // 0x80282340: nop

    after_1:
    // 0x80282344: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282348: lh          $t0, -0x1F00($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1F00);
    // 0x8028234C: nop

    // 0x80282350: beq         $t0, $zero, L_802823F8
    if (ctx->r8 == 0) {
        // 0x80282354: nop
    
            goto L_802823F8;
    }
    // 0x80282354: nop

    // 0x80282358: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028235C: sh          $zero, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = 0;
    // 0x80282360: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282364: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x80282368: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028236C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282370: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x80282374: lh          $s0, 0xA4($t1)
    ctx->r16 = MEM_H(ctx->r9, 0XA4);
    // 0x80282378: nop

    // 0x8028237C: beq         $s0, $at, L_802823A4
    if (ctx->r16 == ctx->r1) {
        // 0x80282380: nop
    
            goto L_802823A4;
    }
    // 0x80282380: nop

    // 0x80282384: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x80282388: beq         $s0, $at, L_802823C0
    if (ctx->r16 == ctx->r1) {
        // 0x8028238C: nop
    
            goto L_802823C0;
    }
    // 0x8028238C: nop

    // 0x80282390: addiu       $at, $zero, 0x6A
    ctx->r1 = ADD32(0, 0X6A);
    // 0x80282394: beq         $s0, $at, L_802823DC
    if (ctx->r16 == ctx->r1) {
        // 0x80282398: nop
    
            goto L_802823DC;
    }
    // 0x80282398: nop

    // 0x8028239C: b           L_802823F8
    // 0x802823A0: nop

        goto L_802823F8;
    // 0x802823A0: nop

L_802823A4:
    // 0x802823A4: jal         0x80282018
    // 0x802823A8: nop

    func_80282018_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x802823A8: nop

    after_2:
    // 0x802823AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802823B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802823B4: sb          $t2, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = ctx->r10;
    // 0x802823B8: b           L_802823F8
    // 0x802823BC: nop

        goto L_802823F8;
    // 0x802823BC: nop

L_802823C0:
    // 0x802823C0: jal         0x80282058
    // 0x802823C4: nop

    func_80282058_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x802823C4: nop

    after_3:
    // 0x802823C8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802823CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802823D0: sb          $t3, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = ctx->r11;
    // 0x802823D4: b           L_802823F8
    // 0x802823D8: nop

        goto L_802823F8;
    // 0x802823D8: nop

L_802823DC:
    // 0x802823DC: jal         0x80282098
    // 0x802823E0: nop

    func_80282098_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x802823E0: nop

    after_4:
    // 0x802823E4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802823E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802823EC: sb          $t4, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = ctx->r12;
    // 0x802823F0: b           L_802823F8
    // 0x802823F4: nop

        goto L_802823F8;
    // 0x802823F4: nop

L_802823F8:
    // 0x802823F8: b           L_80282444
    // 0x802823FC: nop

        goto L_80282444;
    // 0x802823FC: nop

L_80282400:
    // 0x80282400: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80282404: lh          $t5, -0x1D18($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1D18);
    // 0x80282408: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8028240C: bne         $t5, $at, L_80282430
    if (ctx->r13 != ctx->r1) {
        // 0x80282410: nop
    
            goto L_80282430;
    }
    // 0x80282410: nop

    // 0x80282414: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80282418: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028241C: sh          $t6, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = ctx->r14;
    // 0x80282420: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80282424: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282428: b           L_80282444
    // 0x8028242C: sh          $t7, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r15;
        goto L_80282444;
    // 0x8028242C: sh          $t7, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r15;
L_80282430:
    // 0x80282430: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282434: lh          $t8, -0x1D18($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1D18);
    // 0x80282438: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028243C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80282440: sh          $t9, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = ctx->r25;
L_80282444:
    // 0x80282444: b           L_80282528
    // 0x80282448: nop

        goto L_80282528;
    // 0x80282448: nop

L_8028244C:
    // 0x8028244C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282450: lhu         $t0, -0x1C82($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C82);
    // 0x80282454: nop

    // 0x80282458: andi        $t1, $t0, 0x2014
    ctx->r9 = ctx->r8 & 0X2014;
    // 0x8028245C: bne         $t1, $zero, L_80282528
    if (ctx->r9 != 0) {
        // 0x80282460: nop
    
            goto L_80282528;
    }
    // 0x80282460: nop

    // 0x80282464: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282468: lh          $t2, -0x1F00($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1F00);
    // 0x8028246C: nop

    // 0x80282470: beq         $t2, $zero, L_80282528
    if (ctx->r10 == 0) {
        // 0x80282474: nop
    
            goto L_80282528;
    }
    // 0x80282474: nop

    // 0x80282478: jal         0x8007BF18
    // 0x8028247C: nop

    func_8007BF18(rdram, ctx);
        goto after_5;
    // 0x8028247C: nop

    after_5:
    // 0x80282480: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282488: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8028248C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282490: jal         0x800178D4
    // 0x80282494: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_6;
    // 0x80282494: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x80282498: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028249C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802824A0: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x802824A4: lh          $s0, 0xA4($t3)
    ctx->r16 = MEM_H(ctx->r11, 0XA4);
    // 0x802824A8: nop

    // 0x802824AC: beq         $s0, $at, L_802824D4
    if (ctx->r16 == ctx->r1) {
        // 0x802824B0: nop
    
            goto L_802824D4;
    }
    // 0x802824B0: nop

    // 0x802824B4: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x802824B8: beq         $s0, $at, L_802824F0
    if (ctx->r16 == ctx->r1) {
        // 0x802824BC: nop
    
            goto L_802824F0;
    }
    // 0x802824BC: nop

    // 0x802824C0: addiu       $at, $zero, 0x6A
    ctx->r1 = ADD32(0, 0X6A);
    // 0x802824C4: beq         $s0, $at, L_8028250C
    if (ctx->r16 == ctx->r1) {
        // 0x802824C8: nop
    
            goto L_8028250C;
    }
    // 0x802824C8: nop

    // 0x802824CC: b           L_80282528
    // 0x802824D0: nop

        goto L_80282528;
    // 0x802824D0: nop

L_802824D4:
    // 0x802824D4: jal         0x802820D8
    // 0x802824D8: nop

    func_802820D8_code_extra_1(rdram, ctx);
        goto after_7;
    // 0x802824D8: nop

    after_7:
    // 0x802824DC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802824E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802824E4: sb          $t4, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = ctx->r12;
    // 0x802824E8: b           L_80282528
    // 0x802824EC: nop

        goto L_80282528;
    // 0x802824EC: nop

L_802824F0:
    // 0x802824F0: jal         0x80282118
    // 0x802824F4: nop

    func_80282118_code_extra_1(rdram, ctx);
        goto after_8;
    // 0x802824F4: nop

    after_8:
    // 0x802824F8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802824FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282500: sb          $t5, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = ctx->r13;
    // 0x80282504: b           L_80282528
    // 0x80282508: nop

        goto L_80282528;
    // 0x80282508: nop

L_8028250C:
    // 0x8028250C: jal         0x80282158
    // 0x80282510: nop

    func_80282158_code_extra_1(rdram, ctx);
        goto after_9;
    // 0x80282510: nop

    after_9:
    // 0x80282514: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80282518: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028251C: sb          $t6, -0x1C5E($at)
    MEM_B(-0X1C5E, ctx->r1) = ctx->r14;
    // 0x80282520: b           L_80282528
    // 0x80282524: nop

        goto L_80282528;
    // 0x80282524: nop

L_80282528:
    // 0x80282528: b           L_802825A4
    // 0x8028252C: nop

        goto L_802825A4;
    // 0x8028252C: nop

L_80282530:
    // 0x80282530: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282534: lhu         $t7, -0x1C82($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1C82);
    // 0x80282538: nop

    // 0x8028253C: andi        $t8, $t7, 0x2014
    ctx->r24 = ctx->r15 & 0X2014;
    // 0x80282540: beq         $t8, $zero, L_8028257C
    if (ctx->r24 == 0) {
        // 0x80282544: nop
    
            goto L_8028257C;
    }
    // 0x80282544: nop

    // 0x80282548: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028254C: lh          $t9, -0x1D08($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1D08);
    // 0x80282550: nop

    // 0x80282554: slti        $at, $t9, 0x3E9
    ctx->r1 = SIGNED(ctx->r25) < 0X3E9 ? 1 : 0;
    // 0x80282558: beq         $at, $zero, L_80282574
    if (ctx->r1 == 0) {
        // 0x8028255C: nop
    
            goto L_80282574;
    }
    // 0x8028255C: nop

    // 0x80282560: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282564: lh          $t0, -0x1D08($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1D08);
    // 0x80282568: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028256C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80282570: sh          $t1, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r9;
L_80282574:
    // 0x80282574: b           L_802825A4
    // 0x80282578: nop

        goto L_802825A4;
    // 0x80282578: nop

L_8028257C:
    // 0x8028257C: jal         0x8007C1B0
    // 0x80282580: nop

    func_8007C1B0(rdram, ctx);
        goto after_10;
    // 0x80282580: nop

    after_10:
    // 0x80282584: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282588: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x8028258C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282594: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80282598: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028259C: jal         0x800178D4
    // 0x802825A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_11;
    // 0x802825A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
L_802825A4:
    // 0x802825A4: b           L_802825B4
    // 0x802825A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802825B4;
    // 0x802825A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802825AC: b           L_802825B4
    // 0x802825B0: nop

        goto L_802825B4;
    // 0x802825B0: nop

L_802825B4:
    // 0x802825B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802825B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802825BC: jr          $ra
    // 0x802825C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802825C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80282F68_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282F68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282F6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282F70: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80282F74: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80282F78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282F7C: lh          $t6, -0x1CE8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1CE8);
    // 0x80282F80: nop

    // 0x80282F84: slti        $at, $t6, 0x3D
    ctx->r1 = SIGNED(ctx->r14) < 0X3D ? 1 : 0;
    // 0x80282F88: bne         $at, $zero, L_80282FF0
    if (ctx->r1 != 0) {
        // 0x80282F8C: nop
    
            goto L_80282FF0;
    }
    // 0x80282F8C: nop

    // 0x80282F90: jal         0x8028175C
    // 0x80282F94: nop

    func_8028175C_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80282F94: nop

    after_0:
    // 0x80282F98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282F9C: jal         0x8001BBDC
    // 0x80282FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80282FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282FA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80282FA8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282FAC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282FB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80282FB4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282FB8: swc1        $f4, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f4.u32l;
    // 0x80282FBC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282FC0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282FC4: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x80282FC8: nop

    // 0x80282FCC: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x80282FD0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282FD4: nop

    // 0x80282FD8: swc1        $f20, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f20.u32l;
    // 0x80282FDC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282FE0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282FE4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80282FE8: b           L_80283004
    // 0x80282FEC: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
        goto L_80283004;
    // 0x80282FEC: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
L_80282FF0:
    // 0x80282FF0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282FF4: lh          $t2, -0x1CE8($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1CE8);
    // 0x80282FF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282FFC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80283000: sh          $t3, -0x1CE8($at)
    MEM_H(-0X1CE8, ctx->r1) = ctx->r11;
L_80283004:
    // 0x80283004: b           L_8028300C
    // 0x80283008: nop

        goto L_8028300C;
    // 0x80283008: nop

L_8028300C:
    // 0x8028300C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283010: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80283014: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80283018: jr          $ra
    // 0x8028301C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8028301C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80283124_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80283128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028312C: jal         0x80280D04
    // 0x80283130: nop

    func_80280D04_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80283130: nop

    after_0:
    // 0x80283134: jal         0x802810EC
    // 0x80283138: nop

    func_802810EC_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80283138: nop

    after_1:
    // 0x8028313C: jal         0x802812D4
    // 0x80283140: nop

    func_802812D4_code_extra_1(rdram, ctx);
        goto after_2;
    // 0x80283140: nop

    after_2:
    // 0x80283144: jal         0x802807D4
    // 0x80283148: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802807D4_code_extra_1(rdram, ctx);
        goto after_3;
    // 0x80283148: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8028314C: jal         0x802805D8
    // 0x80283150: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802805D8_code_extra_1(rdram, ctx);
        goto after_4;
    // 0x80283150: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80283154: b           L_8028315C
    // 0x80283158: nop

        goto L_8028315C;
    // 0x80283158: nop

L_8028315C:
    // 0x8028315C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80283160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80283164: jr          $ra
    // 0x80283168: nop

    return;
    // 0x80283168: nop

;}
RECOMP_FUNC void func_80282F0C_code_extra_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282F0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282F10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282F14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282F18: lh          $t6, -0x1CE8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1CE8);
    // 0x80282F1C: nop

    // 0x80282F20: slti        $at, $t6, 0x3D
    ctx->r1 = SIGNED(ctx->r14) < 0X3D ? 1 : 0;
    // 0x80282F24: bne         $at, $zero, L_80282F3C
    if (ctx->r1 != 0) {
        // 0x80282F28: nop
    
            goto L_80282F3C;
    }
    // 0x80282F28: nop

    // 0x80282F2C: jal         0x80282220
    // 0x80282F30: nop

    func_80282220_code_extra_1(rdram, ctx);
        goto after_0;
    // 0x80282F30: nop

    after_0:
    // 0x80282F34: b           L_80282F50
    // 0x80282F38: nop

        goto L_80282F50;
    // 0x80282F38: nop

L_80282F3C:
    // 0x80282F3C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282F40: lh          $t7, -0x1CE8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1CE8);
    // 0x80282F44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282F48: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80282F4C: sh          $t8, -0x1CE8($at)
    MEM_H(-0X1CE8, ctx->r1) = ctx->r24;
L_80282F50:
    // 0x80282F50: b           L_80282F58
    // 0x80282F54: nop

        goto L_80282F58;
    // 0x80282F54: nop

L_80282F58:
    // 0x80282F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282F60: jr          $ra
    // 0x80282F64: nop

    return;
    // 0x80282F64: nop

;}
