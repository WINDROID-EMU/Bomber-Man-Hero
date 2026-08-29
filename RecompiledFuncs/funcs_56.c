#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802803BC_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802803BC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802803C0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x802803C4: nop

    // 0x802803C8: bc1f        L_802803F8
    if (!c1cs) {
        // 0x802803CC: nop
    
            goto L_802803F8;
    }
    // 0x802803CC: nop

    // 0x802803D0: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802803D4: nop

    // 0x802803D8: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x802803DC: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x802803E0: nop

    // 0x802803E4: bc1f        L_802803F0
    if (!c1cs) {
        // 0x802803E8: nop
    
            goto L_802803F0;
    }
    // 0x802803E8: nop

    // 0x802803EC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_802803F0:
    // 0x802803F0: b           L_80280418
    // 0x802803F4: nop

        goto L_80280418;
    // 0x802803F4: nop

L_802803F8:
    // 0x802803F8: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802803FC: nop

    // 0x80280400: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80280404: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80280408: nop

    // 0x8028040C: bc1f        L_80280418
    if (!c1cs) {
        // 0x80280410: nop
    
            goto L_80280418;
    }
    // 0x80280410: nop

    // 0x80280414: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_80280418:
    // 0x80280418: b           L_80280428
    // 0x8028041C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80280428;
    // 0x8028041C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x80280420: b           L_80280428
    // 0x80280424: nop

        goto L_80280428;
    // 0x80280424: nop

L_80280428:
    // 0x80280428: jr          $ra
    // 0x8028042C: nop

    return;
    // 0x8028042C: nop

;}
RECOMP_FUNC void func_80281D54_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281D54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281D58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281D5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281D60: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281D64: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x80281D68: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80281D6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80281D70: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80281D74: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80281D78: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80281D7C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80281D80: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80281D84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281D88: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80281D8C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80281D90: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80281D94: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80281D98: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80281D9C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80281DA0: jal         0x800843CC
    // 0x80281DA4: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x80281DA4: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    after_0:
    // 0x80281DA8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281DAC: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x80281DB0: nop

    // 0x80281DB4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80281DB8: beq         $t8, $zero, L_80281DF8
    if (ctx->r24 == 0) {
        // 0x80281DBC: nop
    
            goto L_80281DF8;
    }
    // 0x80281DBC: nop

    // 0x80281DC0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281DC4: addiu       $t9, $t9, 0x7760
    ctx->r25 = ADD32(ctx->r25, 0X7760);
    // 0x80281DC8: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80281DCC: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80281DD0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80281DD4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80281DD8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80281DDC: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80281DE0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281DE4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281DE8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80281DEC: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x80281DF0: jal         0x802814C0
    // 0x80281DF4: nop

    func_802814C0_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x80281DF4: nop

    after_1:
L_80281DF8:
    // 0x80281DF8: b           L_80281E00
    // 0x80281DFC: nop

        goto L_80281E00;
    // 0x80281DFC: nop

L_80281E00:
    // 0x80281E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281E08: jr          $ra
    // 0x80281E0C: nop

    return;
    // 0x80281E0C: nop

;}
RECOMP_FUNC void func_80281EAC_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281EAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281EB4: jal         0x8028173C
    // 0x80281EB8: nop

    func_8028173C_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80281EB8: nop

    after_0:
    // 0x80281EBC: beq         $v0, $zero, L_80281ECC
    if (ctx->r2 == 0) {
        // 0x80281EC0: nop
    
            goto L_80281ECC;
    }
    // 0x80281EC0: nop

    // 0x80281EC4: b           L_80281F80
    // 0x80281EC8: nop

        goto L_80281F80;
    // 0x80281EC8: nop

L_80281ECC:
    // 0x80281ECC: jal         0x80085D54
    // 0x80281ED0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80281ED0: nop

    after_1:
    // 0x80281ED4: beq         $v0, $zero, L_80281EE4
    if (ctx->r2 == 0) {
        // 0x80281ED8: nop
    
            goto L_80281EE4;
    }
    // 0x80281ED8: nop

    // 0x80281EDC: b           L_80281F80
    // 0x80281EE0: nop

        goto L_80281F80;
    // 0x80281EE0: nop

L_80281EE4:
    // 0x80281EE4: jal         0x8028157C
    // 0x80281EE8: nop

    func_8028157C_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80281EE8: nop

    after_2:
    // 0x80281EEC: beq         $v0, $zero, L_80281EFC
    if (ctx->r2 == 0) {
        // 0x80281EF0: nop
    
            goto L_80281EFC;
    }
    // 0x80281EF0: nop

    // 0x80281EF4: b           L_80281F80
    // 0x80281EF8: nop

        goto L_80281F80;
    // 0x80281EF8: nop

L_80281EFC:
    // 0x80281EFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281F00: lw          $t6, -0x1BE0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BE0);
    // 0x80281F04: nop

    // 0x80281F08: bne         $t6, $zero, L_80281F64
    if (ctx->r14 != 0) {
        // 0x80281F0C: nop
    
            goto L_80281F64;
    }
    // 0x80281F0C: nop

    // 0x80281F10: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281F14: lh          $t7, -0x1F64($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1F64);
    // 0x80281F18: nop

    // 0x80281F1C: andi        $t8, $t7, 0xB
    ctx->r24 = ctx->r15 & 0XB;
    // 0x80281F20: bne         $t8, $zero, L_80281F5C
    if (ctx->r24 != 0) {
        // 0x80281F24: nop
    
            goto L_80281F5C;
    }
    // 0x80281F24: nop

    // 0x80281F28: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281F2C: lb          $t9, -0x1F08($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1F08);
    // 0x80281F30: nop

    // 0x80281F34: beq         $t9, $zero, L_80281F4C
    if (ctx->r25 == 0) {
        // 0x80281F38: nop
    
            goto L_80281F4C;
    }
    // 0x80281F38: nop

    // 0x80281F3C: jal         0x80280FA4
    // 0x80281F40: nop

    func_80280FA4_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80281F40: nop

    after_3:
    // 0x80281F44: b           L_80281F54
    // 0x80281F48: nop

        goto L_80281F54;
    // 0x80281F48: nop

L_80281F4C:
    // 0x80281F4C: jal         0x8028104C
    // 0x80281F50: nop

    func_8028104C_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80281F50: nop

    after_4:
L_80281F54:
    // 0x80281F54: b           L_80281F80
    // 0x80281F58: nop

        goto L_80281F80;
    // 0x80281F58: nop

L_80281F5C:
    // 0x80281F5C: b           L_80281F78
    // 0x80281F60: nop

        goto L_80281F78;
    // 0x80281F60: nop

L_80281F64:
    // 0x80281F64: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281F68: lw          $t0, -0x1BE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1BE0);
    // 0x80281F6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281F70: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80281F74: sw          $t1, -0x1BE0($at)
    MEM_W(-0X1BE0, ctx->r1) = ctx->r9;
L_80281F78:
    // 0x80281F78: b           L_80281F80
    // 0x80281F7C: nop

        goto L_80281F80;
    // 0x80281F7C: nop

L_80281F80:
    // 0x80281F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281F88: jr          $ra
    // 0x80281F8C: nop

    return;
    // 0x80281F8C: nop

;}
RECOMP_FUNC void func_8028173C_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028173C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281740: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281744: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80281748: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028174C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281750: nop

    // 0x80281754: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80281758: nop

    // 0x8028175C: bne         $t7, $zero, L_80281778
    if (ctx->r15 != 0) {
        // 0x80281760: nop
    
            goto L_80281778;
    }
    // 0x80281760: nop

    // 0x80281764: jal         0x80281418
    // 0x80281768: nop

    func_80281418_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80281768: nop

    after_0:
    // 0x8028176C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80281770: b           L_802817EC
    // 0x80281774: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_802817EC;
    // 0x80281774: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80281778:
    // 0x80281778: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028177C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281780: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x80281784: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x80281788: nop

    // 0x8028178C: bne         $t0, $at, L_802817EC
    if (ctx->r8 != ctx->r1) {
        // 0x80281790: nop
    
            goto L_802817EC;
    }
    // 0x80281790: nop

    // 0x80281794: jal         0x80281380
    // 0x80281798: nop

    func_80281380_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x80281798: nop

    after_1:
    // 0x8028179C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802817A0: lb          $t1, -0x1F08($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1F08);
    // 0x802817A4: nop

    // 0x802817A8: beq         $t1, $zero, L_802817BC
    if (ctx->r9 == 0) {
        // 0x802817AC: nop
    
            goto L_802817BC;
    }
    // 0x802817AC: nop

    // 0x802817B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802817B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802817B8: swc1        $f4, -0x1C20($at)
    MEM_W(-0X1C20, ctx->r1) = ctx->f4.u32l;
L_802817BC:
    // 0x802817BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802817C0: lwc1        $f6, -0x1C30($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C30);
    // 0x802817C4: nop

    // 0x802817C8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x802817CC: swc1        $f8, -0x1C30($at)
    MEM_W(-0X1C30, ctx->r1) = ctx->f8.u32l;
    // 0x802817D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802817D4: lwc1        $f10, -0x1C28($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C28);
    // 0x802817D8: nop

    // 0x802817DC: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x802817E0: swc1        $f16, -0x1C28($at)
    MEM_W(-0X1C28, ctx->r1) = ctx->f16.u32l;
    // 0x802817E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802817E8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_802817EC:
    // 0x802817EC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x802817F0: nop

    // 0x802817F4: beq         $t3, $zero, L_80281880
    if (ctx->r11 == 0) {
        // 0x802817F8: nop
    
            goto L_80281880;
    }
    // 0x802817F8: nop

    // 0x802817FC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281800: lh          $t4, -0x1F00($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1F00);
    // 0x80281804: nop

    // 0x80281808: beq         $t4, $zero, L_80281818
    if (ctx->r12 == 0) {
        // 0x8028180C: nop
    
            goto L_80281818;
    }
    // 0x8028180C: nop

    // 0x80281810: jal         0x8007CEB8
    // 0x80281814: nop

    func_8007CEB8(rdram, ctx);
        goto after_2;
    // 0x80281814: nop

    after_2:
L_80281818:
    // 0x80281818: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028181C: lbu         $t5, -0x1F78($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1F78);
    // 0x80281820: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80281824: bne         $t5, $at, L_8028184C
    if (ctx->r13 != ctx->r1) {
        // 0x80281828: nop
    
            goto L_8028184C;
    }
    // 0x80281828: nop

    // 0x8028182C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281834: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    // 0x80281838: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028183C: jal         0x800178D4
    // 0x80281840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80281840: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80281844: b           L_80281878
    // 0x80281848: nop

        goto L_80281878;
    // 0x80281848: nop

L_8028184C:
    // 0x8028184C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281850: lbu         $t6, -0x1F78($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F78);
    // 0x80281854: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80281858: bne         $t6, $at, L_80281878
    if (ctx->r14 != ctx->r1) {
        // 0x8028185C: nop
    
            goto L_80281878;
    }
    // 0x8028185C: nop

    // 0x80281860: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281868: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x8028186C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80281870: jal         0x800178D4
    // 0x80281874: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80281874: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_80281878:
    // 0x80281878: b           L_80281890
    // 0x8028187C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281890;
    // 0x8028187C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80281880:
    // 0x80281880: b           L_80281890
    // 0x80281884: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80281890;
    // 0x80281884: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281888: b           L_80281890
    // 0x8028188C: nop

        goto L_80281890;
    // 0x8028188C: nop

L_80281890:
    // 0x80281890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281894: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281898: jr          $ra
    // 0x8028189C: nop

    return;
    // 0x8028189C: nop

;}
RECOMP_FUNC void func_802823A4_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802823A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802823A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802823AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802823B0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x802823B4: jal         0x800682E0
    // 0x802823B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800682E0(rdram, ctx);
        goto after_0;
    // 0x802823B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802823BC: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x802823C0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802823C4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802823C8: jal         0x80085B34
    // 0x802823CC: nop

    func_80085B34(rdram, ctx);
        goto after_1;
    // 0x802823CC: nop

    after_1:
    // 0x802823D0: jal         0x80280140
    // 0x802823D4: nop

    func_80280140_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x802823D4: nop

    after_2:
    // 0x802823D8: jal         0x80282278
    // 0x802823DC: nop

    func_80282278_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x802823DC: nop

    after_3:
    // 0x802823E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802823E4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802823E8: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x802823EC: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x802823F0: nop

    // 0x802823F4: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x802823F8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802823FC: lw          $t9, 0x220C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X220C);
    // 0x80282400: nop

    // 0x80282404: jalr        $t9
    // 0x80282408: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80282408: nop

    after_4:
    // 0x8028240C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282410: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282414: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80282418: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8028241C: nop

    // 0x80282420: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80282424: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80282428: lw          $t9, 0x2208($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2208);
    // 0x8028242C: nop

    // 0x80282430: jalr        $t9
    // 0x80282434: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80282434: nop

    after_5:
    // 0x80282438: jal         0x80280000
    // 0x8028243C: nop

    func_80280000_code_extra_2(rdram, ctx);
        goto after_6;
    // 0x8028243C: nop

    after_6:
    // 0x80282440: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282444: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x80282448: nop

    // 0x8028244C: beq         $t3, $zero, L_80282470
    if (ctx->r11 == 0) {
        // 0x80282450: nop
    
            goto L_80282470;
    }
    // 0x80282450: nop

    // 0x80282454: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80282458: addiu       $t4, $t4, 0x27E0
    ctx->r12 = ADD32(ctx->r12, 0X27E0);
    // 0x8028245C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80282460: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80282464: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80282468: b           L_80282488
    // 0x8028246C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
        goto L_80282488;
    // 0x8028246C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
L_80282470:
    // 0x80282470: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x80282474: addiu       $t5, $t5, 0x2780
    ctx->r13 = ADD32(ctx->r13, 0X2780);
    // 0x80282478: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8028247C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80282480: nop

    // 0x80282484: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
L_80282488:
    // 0x80282488: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8028248C: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x80282490: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80282494: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80282498: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8028249C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802824A0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802824A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802824A8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x802824AC: jal         0x80084BD8
    // 0x802824B0: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    func_80084BD8(rdram, ctx);
        goto after_7;
    // 0x802824B0: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    after_7:
    // 0x802824B4: jal         0x8001CD20
    // 0x802824B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_8;
    // 0x802824B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x802824BC: jal         0x8001AD6C
    // 0x802824C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_9;
    // 0x802824C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x802824C4: b           L_802824CC
    // 0x802824C8: nop

        goto L_802824CC;
    // 0x802824C8: nop

L_802824CC:
    // 0x802824CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802824D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802824D4: jr          $ra
    // 0x802824D8: nop

    return;
    // 0x802824D8: nop

;}
RECOMP_FUNC void func_80280E84_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280E8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280E90: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x80280E94: lw          $a3, 0x38($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X38);
    // 0x80280E98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80280E9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80280EA0: jal         0x8001BD44
    // 0x80280EA4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80280EA4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x80280EA8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80280EAC: addiu       $a3, $a3, 0x5F18
    ctx->r7 = ADD32(ctx->r7, 0X5F18);
    // 0x80280EB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80280EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280EB8: jal         0x8001ABF4
    // 0x80280EBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80280EBC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80280EC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80280EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280EC8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80280ECC: jal         0x80019448
    // 0x80280ED0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x80280ED0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80280ED4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280ED8: lw          $t8, 0x7544($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7544);
    // 0x80280EDC: addiu       $t7, $zero, 0x2AD
    ctx->r15 = ADD32(0, 0X2AD);
    // 0x80280EE0: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
    // 0x80280EE4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280EE8: lw          $t0, 0x7544($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7544);
    // 0x80280EEC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80280EF0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80280EF4: b           L_80280EFC
    // 0x80280EF8: nop

        goto L_80280EFC;
    // 0x80280EF8: nop

L_80280EFC:
    // 0x80280EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280F04: jr          $ra
    // 0x80280F08: nop

    return;
    // 0x80280F08: nop

;}
RECOMP_FUNC void func_80280808_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280808: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028080C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280810: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280814: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280818: addiu       $at, $zero, 0xCB
    ctx->r1 = ADD32(0, 0XCB);
    // 0x8028081C: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80280820: nop

    // 0x80280824: beq         $t7, $at, L_80280844
    if (ctx->r15 == ctx->r1) {
        // 0x80280828: nop
    
            goto L_80280844;
    }
    // 0x80280828: nop

    // 0x8028082C: addiu       $at, $zero, 0xCC
    ctx->r1 = ADD32(0, 0XCC);
    // 0x80280830: beq         $t7, $at, L_80280844
    if (ctx->r15 == ctx->r1) {
        // 0x80280834: nop
    
            goto L_80280844;
    }
    // 0x80280834: nop

    // 0x80280838: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x8028083C: bne         $t7, $at, L_80280894
    if (ctx->r15 != ctx->r1) {
        // 0x80280840: nop
    
            goto L_80280894;
    }
    // 0x80280840: nop

L_80280844:
    // 0x80280844: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280848: lwc1        $f4, -0x1C18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C18);
    // 0x8028084C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80280850: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280854: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280858: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8028085C: swc1        $f8, -0x1C18($at)
    MEM_W(-0X1C18, ctx->r1) = ctx->f8.u32l;
    // 0x80280860: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280864: lwc1        $f10, -0x1C18($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C18);
    // 0x80280868: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028086C: nop

    // 0x80280870: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80280874: nop

    // 0x80280878: bc1f        L_8028088C
    if (!c1cs) {
        // 0x8028087C: nop
    
            goto L_8028088C;
    }
    // 0x8028087C: nop

    // 0x80280880: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280884: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280888: swc1        $f18, -0x1C18($at)
    MEM_W(-0X1C18, ctx->r1) = ctx->f18.u32l;
L_8028088C:
    // 0x8028088C: b           L_8028094C
    // 0x80280890: nop

        goto L_8028094C;
    // 0x80280890: nop

L_80280894:
    // 0x80280894: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280898: lhu         $t8, -0x1C82($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C82);
    // 0x8028089C: nop

    // 0x802808A0: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802808A4: beq         $t9, $zero, L_80280904
    if (ctx->r25 == 0) {
        // 0x802808A8: nop
    
            goto L_80280904;
    }
    // 0x802808A8: nop

    // 0x802808AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802808B0: lwc1        $f4, -0x1C18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C18);
    // 0x802808B4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802808B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802808BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802808C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802808C4: swc1        $f8, -0x1C18($at)
    MEM_W(-0X1C18, ctx->r1) = ctx->f8.u32l;
    // 0x802808C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802808CC: lwc1        $f10, -0x1C18($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C18);
    // 0x802808D0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802808D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802808D8: nop

    // 0x802808DC: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x802808E0: nop

    // 0x802808E4: bc1f        L_802808FC
    if (!c1cs) {
        // 0x802808E8: nop
    
            goto L_802808FC;
    }
    // 0x802808E8: nop

    // 0x802808EC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802808F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802808F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802808F8: swc1        $f18, -0x1C18($at)
    MEM_W(-0X1C18, ctx->r1) = ctx->f18.u32l;
L_802808FC:
    // 0x802808FC: b           L_8028094C
    // 0x80280900: nop

        goto L_8028094C;
    // 0x80280900: nop

L_80280904:
    // 0x80280904: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280908: lwc1        $f4, -0x1C18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C18);
    // 0x8028090C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80280910: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280914: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280918: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8028091C: swc1        $f8, -0x1C18($at)
    MEM_W(-0X1C18, ctx->r1) = ctx->f8.u32l;
    // 0x80280920: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280924: lwc1        $f10, -0x1C18($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C18);
    // 0x80280928: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028092C: nop

    // 0x80280930: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80280934: nop

    // 0x80280938: bc1f        L_8028094C
    if (!c1cs) {
        // 0x8028093C: nop
    
            goto L_8028094C;
    }
    // 0x8028093C: nop

    // 0x80280940: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280944: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280948: swc1        $f18, -0x1C18($at)
    MEM_W(-0X1C18, ctx->r1) = ctx->f18.u32l;
L_8028094C:
    // 0x8028094C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280950: lwc1        $f4, -0x1C28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C28);
    // 0x80280954: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280958: lwc1        $f6, -0x1C18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C18);
    // 0x8028095C: nop

    // 0x80280960: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80280964: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80280968: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8028096C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280970: jal         0x80015538
    // 0x80280974: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80280974: nop

    after_0:
    // 0x80280978: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028097C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280980: nop

    // 0x80280984: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x80280988: b           L_80280990
    // 0x8028098C: nop

        goto L_80280990;
    // 0x8028098C: nop

L_80280990:
    // 0x80280990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280994: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280998: jr          $ra
    // 0x8028099C: nop

    return;
    // 0x8028099C: nop

;}
RECOMP_FUNC void func_802818A0_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802818A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802818A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802818A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802818AC: lh          $t6, -0x1F64($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F64);
    // 0x802818B0: nop

    // 0x802818B4: andi        $t7, $t6, 0xB
    ctx->r15 = ctx->r14 & 0XB;
    // 0x802818B8: beq         $t7, $zero, L_80281918
    if (ctx->r15 == 0) {
        // 0x802818BC: nop
    
            goto L_80281918;
    }
    // 0x802818BC: nop

    // 0x802818C0: jal         0x80281530
    // 0x802818C4: nop

    func_80281530_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x802818C4: nop

    after_0:
    // 0x802818C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802818CC: lb          $t8, -0x1F08($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1F08);
    // 0x802818D0: nop

    // 0x802818D4: beq         $t8, $zero, L_802818E8
    if (ctx->r24 == 0) {
        // 0x802818D8: nop
    
            goto L_802818E8;
    }
    // 0x802818D8: nop

    // 0x802818DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802818E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802818E4: swc1        $f4, -0x1C20($at)
    MEM_W(-0X1C20, ctx->r1) = ctx->f4.u32l;
L_802818E8:
    // 0x802818E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802818EC: lwc1        $f6, -0x1C30($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C30);
    // 0x802818F0: nop

    // 0x802818F4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x802818F8: swc1        $f8, -0x1C30($at)
    MEM_W(-0X1C30, ctx->r1) = ctx->f8.u32l;
    // 0x802818FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281900: lwc1        $f10, -0x1C28($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C28);
    // 0x80281904: nop

    // 0x80281908: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x8028190C: swc1        $f16, -0x1C28($at)
    MEM_W(-0X1C28, ctx->r1) = ctx->f16.u32l;
    // 0x80281910: b           L_80281928
    // 0x80281914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80281928;
    // 0x80281914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80281918:
    // 0x80281918: b           L_80281928
    // 0x8028191C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80281928;
    // 0x8028191C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281920: b           L_80281928
    // 0x80281924: nop

        goto L_80281928;
    // 0x80281924: nop

L_80281928:
    // 0x80281928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028192C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281930: jr          $ra
    // 0x80281934: nop

    return;
    // 0x80281934: nop

;}
RECOMP_FUNC void func_80282230_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282238: jal         0x80280430
    // 0x8028223C: nop

    func_80280430_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x8028223C: nop

    after_0:
    // 0x80282240: jal         0x802805E0
    // 0x80282244: nop

    func_802805E0_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x80282244: nop

    after_1:
    // 0x80282248: jal         0x802806F4
    // 0x8028224C: nop

    func_802806F4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x8028224C: nop

    after_2:
    // 0x80282250: jal         0x802809A0
    // 0x80282254: nop

    func_802809A0_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80282254: nop

    after_3:
    // 0x80282258: jal         0x80280808
    // 0x8028225C: nop

    func_80280808_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x8028225C: nop

    after_4:
    // 0x80282260: b           L_80282268
    // 0x80282264: nop

        goto L_80282268;
    // 0x80282264: nop

L_80282268:
    // 0x80282268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028226C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282270: jr          $ra
    // 0x80282274: nop

    return;
    // 0x80282274: nop

;}
RECOMP_FUNC void func_80280F0C_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280F0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280F10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280F14: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80280F18: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80280F1C: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80280F20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80280F24: lb          $t7, 0x2840($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X2840);
    // 0x80280F28: nop

    // 0x80280F2C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80280F30: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80280F34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80280F38: beq         $t8, $at, L_80280F84
    if (ctx->r24 == ctx->r1) {
        // 0x80280F3C: nop
    
            goto L_80280F84;
    }
    // 0x80280F3C: nop

    // 0x80280F40: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280F44: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x80280F48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80280F4C: lh          $t0, 0x146($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X146);
    // 0x80280F50: nop

    // 0x80280F54: beq         $t0, $at, L_80280F7C
    if (ctx->r8 == ctx->r1) {
        // 0x80280F58: nop
    
            goto L_80280F7C;
    }
    // 0x80280F58: nop

    // 0x80280F5C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80280F60: addiu       $t1, $t1, 0x5EDC
    ctx->r9 = ADD32(ctx->r9, 0X5EDC);
    // 0x80280F64: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80280F68: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80280F6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80280F70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80280F74: jal         0x8001C0EC
    // 0x80280F78: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80280F78: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_0:
L_80280F7C:
    // 0x80280F7C: b           L_80280F8C
    // 0x80280F80: nop

        goto L_80280F8C;
    // 0x80280F80: nop

L_80280F84:
    // 0x80280F84: jal         0x8001A928
    // 0x80280F88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x80280F88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
L_80280F8C:
    // 0x80280F8C: b           L_80280F94
    // 0x80280F90: nop

        goto L_80280F94;
    // 0x80280F90: nop

L_80280F94:
    // 0x80280F94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280F98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80280F9C: jr          $ra
    // 0x80280FA0: nop

    return;
    // 0x80280FA0: nop

;}
RECOMP_FUNC void func_802811A8_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802811A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802811AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802811B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802811B4: jal         0x8001B880
    // 0x802811B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x802811B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802811BC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802811C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802811C4: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x802811C8: nop

    // 0x802811CC: beq         $t6, $zero, L_802811E0
    if (ctx->r14 == 0) {
        // 0x802811D0: nop
    
            goto L_802811E0;
    }
    // 0x802811D0: nop

    // 0x802811D4: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x802811D8: b           L_802811E8
    // 0x802811DC: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_802811E8;
    // 0x802811DC: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_802811E0:
    // 0x802811E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802811E4: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_802811E8:
    // 0x802811E8: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x802811EC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x802811F0: nop

    // 0x802811F4: beq         $t9, $t0, L_80281234
    if (ctx->r25 == ctx->r8) {
        // 0x802811F8: nop
    
            goto L_80281234;
    }
    // 0x802811F8: nop

    // 0x802811FC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80281200: addiu       $t1, $t1, 0x5E00
    ctx->r9 = ADD32(ctx->r9, 0X5E00);
    // 0x80281204: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281208: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8028120C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281214: jal         0x8001C0EC
    // 0x80281218: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281218: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8028121C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281220: jal         0x8001B754
    // 0x80281224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80281224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281228: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8028122C: jal         0x80280F0C
    // 0x80281230: nop

    func_80280F0C_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80281230: nop

    after_3:
L_80281234:
    // 0x80281234: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281238: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028123C: addiu       $t2, $zero, 0xCC
    ctx->r10 = ADD32(0, 0XCC);
    // 0x80281240: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80281244: b           L_8028124C
    // 0x80281248: nop

        goto L_8028124C;
    // 0x80281248: nop

L_8028124C:
    // 0x8028124C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281250: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281254: jr          $ra
    // 0x80281258: nop

    return;
    // 0x80281258: nop

;}
RECOMP_FUNC void func_8028104C_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028104C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281050: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281058: jal         0x8001B880
    // 0x8028105C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x8028105C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281060: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80281064: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281068: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8028106C: nop

    // 0x80281070: beq         $t6, $zero, L_80281084
    if (ctx->r14 == 0) {
        // 0x80281074: nop
    
            goto L_80281084;
    }
    // 0x80281074: nop

    // 0x80281078: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8028107C: b           L_8028108C
    // 0x80281080: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_8028108C;
    // 0x80281080: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80281084:
    // 0x80281084: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80281088: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_8028108C:
    // 0x8028108C: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80281090: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80281094: nop

    // 0x80281098: beq         $t9, $t0, L_802810CC
    if (ctx->r25 == ctx->r8) {
        // 0x8028109C: nop
    
            goto L_802810CC;
    }
    // 0x8028109C: nop

    // 0x802810A0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x802810A4: addiu       $t1, $t1, 0x5E00
    ctx->r9 = ADD32(ctx->r9, 0X5E00);
    // 0x802810A8: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x802810AC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x802810B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802810B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802810B8: jal         0x8001C0EC
    // 0x802810BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802810BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802810C0: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x802810C4: jal         0x80280F0C
    // 0x802810C8: nop

    func_80280F0C_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x802810C8: nop

    after_2:
L_802810CC:
    // 0x802810CC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802810D0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802810D4: addiu       $t2, $zero, 0xCA
    ctx->r10 = ADD32(0, 0XCA);
    // 0x802810D8: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x802810DC: b           L_802810E4
    // 0x802810E0: nop

        goto L_802810E4;
    // 0x802810E0: nop

L_802810E4:
    // 0x802810E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802810E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802810EC: jr          $ra
    // 0x802810F0: nop

    return;
    // 0x802810F0: nop

;}
RECOMP_FUNC void func_80282278_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028227C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282280: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282284: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282288: nop

    // 0x8028228C: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80282290: nop

    // 0x80282294: bne         $t7, $zero, L_802822A4
    if (ctx->r15 != 0) {
        // 0x80282298: nop
    
            goto L_802822A4;
    }
    // 0x80282298: nop

    // 0x8028229C: b           L_80282394
    // 0x802822A0: nop

        goto L_80282394;
    // 0x802822A0: nop

L_802822A4:
    // 0x802822A4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802822A8: lb          $t8, -0x1F08($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1F08);
    // 0x802822AC: nop

    // 0x802822B0: bne         $t8, $zero, L_8028238C
    if (ctx->r24 != 0) {
        // 0x802822B4: nop
    
            goto L_8028238C;
    }
    // 0x802822B4: nop

    // 0x802822B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802822BC: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x802822C0: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x802822C4: bne         $t9, $at, L_802822F4
    if (ctx->r25 != ctx->r1) {
        // 0x802822C8: nop
    
            goto L_802822F4;
    }
    // 0x802822C8: nop

    // 0x802822CC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802822D0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802822D4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802822D8: lwc1        $f6, 0x28AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X28AC);
    // 0x802822DC: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x802822E0: nop

    // 0x802822E4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802822E8: nop

    // 0x802822EC: bc1t        L_8028236C
    if (c1cs) {
        // 0x802822F0: nop
    
            goto L_8028236C;
    }
    // 0x802822F0: nop

L_802822F4:
    // 0x802822F4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802822F8: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x802822FC: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x80282300: bne         $t1, $at, L_80282330
    if (ctx->r9 != ctx->r1) {
        // 0x80282304: nop
    
            goto L_80282330;
    }
    // 0x80282304: nop

    // 0x80282308: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028230C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80282310: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80282314: lwc1        $f10, 0x28B0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X28B0);
    // 0x80282318: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8028231C: nop

    // 0x80282320: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80282324: nop

    // 0x80282328: bc1t        L_8028236C
    if (c1cs) {
        // 0x8028232C: nop
    
            goto L_8028236C;
    }
    // 0x8028232C: nop

L_80282330:
    // 0x80282330: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282334: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x80282338: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x8028233C: bne         $t3, $at, L_8028238C
    if (ctx->r11 != ctx->r1) {
        // 0x80282340: nop
    
            goto L_8028238C;
    }
    // 0x80282340: nop

    // 0x80282344: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80282348: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028234C: lui         $at, 0xC602
    ctx->r1 = S32(0XC602 << 16);
    // 0x80282350: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80282354: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80282358: nop

    // 0x8028235C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80282360: nop

    // 0x80282364: bc1f        L_8028238C
    if (!c1cs) {
        // 0x80282368: nop
    
            goto L_8028238C;
    }
    // 0x80282368: nop

L_8028236C:
    // 0x8028236C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80282370: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282374: sb          $t5, -0x1F08($at)
    MEM_B(-0X1F08, ctx->r1) = ctx->r13;
    // 0x80282378: jal         0x80280FA4
    // 0x8028237C: nop

    func_80280FA4_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x8028237C: nop

    after_0:
    // 0x80282380: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282384: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282388: swc1        $f4, -0x1C20($at)
    MEM_W(-0X1C20, ctx->r1) = ctx->f4.u32l;
L_8028238C:
    // 0x8028238C: b           L_80282394
    // 0x80282390: nop

        goto L_80282394;
    // 0x80282390: nop

L_80282394:
    // 0x80282394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028239C: jr          $ra
    // 0x802823A0: nop

    return;
    // 0x802823A0: nop

;}
RECOMP_FUNC void func_80281530_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281538: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028153C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281540: addiu       $t6, $zero, 0xD1
    ctx->r14 = ADD32(0, 0XD1);
    // 0x80281544: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80281548: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x8028154C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281550: sw          $t8, -0x1BE0($at)
    MEM_W(-0X1BE0, ctx->r1) = ctx->r24;
    // 0x80281554: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80281558: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8028155C: jal         0x8001FB3C
    // 0x80281560: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_0;
    // 0x80281560: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80281564: b           L_8028156C
    // 0x80281568: nop

        goto L_8028156C;
    // 0x80281568: nop

L_8028156C:
    // 0x8028156C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281574: jr          $ra
    // 0x80281578: nop

    return;
    // 0x80281578: nop

;}
RECOMP_FUNC void func_80282140_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282148: jal         0x802809F8
    // 0x8028214C: nop

    func_802809F8_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x8028214C: nop

    after_0:
    // 0x80282150: jal         0x80280A50
    // 0x80282154: nop

    func_80280A50_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x80282154: nop

    after_1:
    // 0x80282158: jal         0x80280AA4
    // 0x8028215C: nop

    func_80280AA4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x8028215C: nop

    after_2:
    // 0x80282160: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282164: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282168: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028216C: nop

    // 0x80282170: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    // 0x80282174: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282178: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028217C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80282180: nop

    // 0x80282184: swc1        $f6, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f6.u32l;
    // 0x80282188: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028218C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282190: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282194: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80282198: nop

    // 0x8028219C: swc1        $f8, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f8.u32l;
    // 0x802821A0: b           L_802821A8
    // 0x802821A4: nop

        goto L_802821A8;
    // 0x802821A4: nop

L_802821A8:
    // 0x802821A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802821AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802821B0: jr          $ra
    // 0x802821B4: nop

    return;
    // 0x802821B4: nop

;}
RECOMP_FUNC void func_802805E0_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802805E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802805E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802805E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802805EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802805F0: nop

    // 0x802805F4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802805F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802805FC: lwc1        $f6, -0x1C40($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C40);
    // 0x80280600: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80280604: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280608: nop

    // 0x8028060C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80280610: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80280614: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280618: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028061C: addiu       $at, $zero, 0xCE
    ctx->r1 = ADD32(0, 0XCE);
    // 0x80280620: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80280624: nop

    // 0x80280628: bne         $t7, $at, L_8028063C
    if (ctx->r15 != ctx->r1) {
        // 0x8028062C: nop
    
            goto L_8028063C;
    }
    // 0x8028062C: nop

    // 0x80280630: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80280634: b           L_802806A4
    // 0x80280638: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
        goto L_802806A4;
    // 0x80280638: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
L_8028063C:
    // 0x8028063C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280640: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280644: addiu       $at, $zero, 0xCD
    ctx->r1 = ADD32(0, 0XCD);
    // 0x80280648: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x8028064C: nop

    // 0x80280650: bne         $t9, $at, L_80280678
    if (ctx->r25 != ctx->r1) {
        // 0x80280654: nop
    
            goto L_80280678;
    }
    // 0x80280654: nop

    // 0x80280658: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028065C: lwc1        $f18, -0x1C40($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C40);
    // 0x80280660: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80280664: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280668: nop

    // 0x8028066C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80280670: b           L_802806A4
    // 0x80280674: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
        goto L_802806A4;
    // 0x80280674: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
L_80280678:
    // 0x80280678: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028067C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280680: addiu       $at, $zero, 0xD1
    ctx->r1 = ADD32(0, 0XD1);
    // 0x80280684: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80280688: nop

    // 0x8028068C: bne         $t1, $at, L_802806A4
    if (ctx->r9 != ctx->r1) {
        // 0x80280690: nop
    
            goto L_802806A4;
    }
    // 0x80280690: nop

    // 0x80280694: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80280698: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028069C: nop

    // 0x802806A0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
L_802806A4:
    // 0x802806A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806A8: lwc1        $f12, -0x1C30($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1C30);
    // 0x802806AC: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802806B0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802806B4: jal         0x802803BC
    // 0x802806B8: nop

    func_802803BC_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x802806B8: nop

    after_0:
    // 0x802806BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806C0: swc1        $f0, -0x1C30($at)
    MEM_W(-0X1C30, ctx->r1) = ctx->f0.u32l;
    // 0x802806C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806C8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802806CC: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802806D0: lwc1        $f10, -0x1C30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C30);
    // 0x802806D4: nop

    // 0x802806D8: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
    // 0x802806DC: b           L_802806E4
    // 0x802806E0: nop

        goto L_802806E4;
    // 0x802806E0: nop

L_802806E4:
    // 0x802806E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802806E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802806EC: jr          $ra
    // 0x802806F0: nop

    return;
    // 0x802806F0: nop

;}
RECOMP_FUNC void func_802809F8_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802809F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802809FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280A00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A04: lwc1        $f12, -0x1C20($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1C20);
    // 0x80280A08: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80280A0C: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x80280A10: jal         0x802803BC
    // 0x80280A14: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    func_802803BC_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80280A14: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    after_0:
    // 0x80280A18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A1C: swc1        $f0, -0x1C20($at)
    MEM_W(-0X1C20, ctx->r1) = ctx->f0.u32l;
    // 0x80280A20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A24: lwc1        $f4, -0x1C20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C20);
    // 0x80280A28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280A2C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280A30: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80280A34: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x80280A38: b           L_80280A40
    // 0x80280A3C: nop

        goto L_80280A40;
    // 0x80280A3C: nop

L_80280A40:
    // 0x80280A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280A48: jr          $ra
    // 0x80280A4C: nop

    return;
    // 0x80280A4C: nop

;}
RECOMP_FUNC void func_802819C0_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802819C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802819C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802819C8: jal         0x8028173C
    // 0x802819CC: nop

    func_8028173C_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x802819CC: nop

    after_0:
    // 0x802819D0: beq         $v0, $zero, L_802819E0
    if (ctx->r2 == 0) {
        // 0x802819D4: nop
    
            goto L_802819E0;
    }
    // 0x802819D4: nop

    // 0x802819D8: b           L_80281A60
    // 0x802819DC: nop

        goto L_80281A60;
    // 0x802819DC: nop

L_802819E0:
    // 0x802819E0: jal         0x80085D54
    // 0x802819E4: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802819E4: nop

    after_1:
    // 0x802819E8: beq         $v0, $zero, L_802819F8
    if (ctx->r2 == 0) {
        // 0x802819EC: nop
    
            goto L_802819F8;
    }
    // 0x802819EC: nop

    // 0x802819F0: b           L_80281A60
    // 0x802819F4: nop

        goto L_80281A60;
    // 0x802819F4: nop

L_802819F8:
    // 0x802819F8: jal         0x802818A0
    // 0x802819FC: nop

    func_802818A0_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x802819FC: nop

    after_2:
    // 0x80281A00: beq         $v0, $zero, L_80281A10
    if (ctx->r2 == 0) {
        // 0x80281A04: nop
    
            goto L_80281A10;
    }
    // 0x80281A04: nop

    // 0x80281A08: b           L_80281A60
    // 0x80281A0C: nop

        goto L_80281A60;
    // 0x80281A0C: nop

L_80281A10:
    // 0x80281A10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281A14: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x80281A18: nop

    // 0x80281A1C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80281A20: beq         $t7, $zero, L_80281A38
    if (ctx->r15 == 0) {
        // 0x80281A24: nop
    
            goto L_80281A38;
    }
    // 0x80281A24: nop

    // 0x80281A28: jal         0x8028125C
    // 0x80281A2C: nop

    func_8028125C_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80281A2C: nop

    after_3:
    // 0x80281A30: b           L_80281A60
    // 0x80281A34: nop

        goto L_80281A60;
    // 0x80281A34: nop

L_80281A38:
    // 0x80281A38: jal         0x8028157C
    // 0x80281A3C: nop

    func_8028157C_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80281A3C: nop

    after_4:
    // 0x80281A40: beq         $v0, $zero, L_80281A50
    if (ctx->r2 == 0) {
        // 0x80281A44: nop
    
            goto L_80281A50;
    }
    // 0x80281A44: nop

    // 0x80281A48: b           L_80281A60
    // 0x80281A4C: nop

        goto L_80281A60;
    // 0x80281A4C: nop

L_80281A50:
    // 0x80281A50: jal         0x8028104C
    // 0x80281A54: nop

    func_8028104C_code_extra_2(rdram, ctx);
        goto after_5;
    // 0x80281A54: nop

    after_5:
    // 0x80281A58: b           L_80281A60
    // 0x80281A5C: nop

        goto L_80281A60;
    // 0x80281A5C: nop

L_80281A60:
    // 0x80281A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281A68: jr          $ra
    // 0x80281A6C: nop

    return;
    // 0x80281A6C: nop

;}
RECOMP_FUNC void func_80281B40_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281B48: jal         0x8028173C
    // 0x80281B4C: nop

    func_8028173C_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80281B4C: nop

    after_0:
    // 0x80281B50: beq         $v0, $zero, L_80281B60
    if (ctx->r2 == 0) {
        // 0x80281B54: nop
    
            goto L_80281B60;
    }
    // 0x80281B54: nop

    // 0x80281B58: b           L_80281BE8
    // 0x80281B5C: nop

        goto L_80281BE8;
    // 0x80281B5C: nop

L_80281B60:
    // 0x80281B60: jal         0x80085D54
    // 0x80281B64: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80281B64: nop

    after_1:
    // 0x80281B68: beq         $v0, $zero, L_80281B78
    if (ctx->r2 == 0) {
        // 0x80281B6C: nop
    
            goto L_80281B78;
    }
    // 0x80281B6C: nop

    // 0x80281B70: b           L_80281BE8
    // 0x80281B74: nop

        goto L_80281BE8;
    // 0x80281B74: nop

L_80281B78:
    // 0x80281B78: jal         0x802818A0
    // 0x80281B7C: nop

    func_802818A0_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80281B7C: nop

    after_2:
    // 0x80281B80: beq         $v0, $zero, L_80281B90
    if (ctx->r2 == 0) {
        // 0x80281B84: nop
    
            goto L_80281B90;
    }
    // 0x80281B84: nop

    // 0x80281B88: b           L_80281BE8
    // 0x80281B8C: nop

        goto L_80281BE8;
    // 0x80281B8C: nop

L_80281B90:
    // 0x80281B90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281B94: lwc1        $f4, -0x1C20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C20);
    // 0x80281B98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281B9C: nop

    // 0x80281BA0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80281BA4: nop

    // 0x80281BA8: bc1f        L_80281BC0
    if (!c1cs) {
        // 0x80281BAC: nop
    
            goto L_80281BC0;
    }
    // 0x80281BAC: nop

    // 0x80281BB0: jal         0x80280FA4
    // 0x80281BB4: nop

    func_80280FA4_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80281BB4: nop

    after_3:
    // 0x80281BB8: b           L_80281BE8
    // 0x80281BBC: nop

        goto L_80281BE8;
    // 0x80281BBC: nop

L_80281BC0:
    // 0x80281BC0: jal         0x8028157C
    // 0x80281BC4: nop

    func_8028157C_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80281BC4: nop

    after_4:
    // 0x80281BC8: beq         $v0, $zero, L_80281BD8
    if (ctx->r2 == 0) {
        // 0x80281BCC: nop
    
            goto L_80281BD8;
    }
    // 0x80281BCC: nop

    // 0x80281BD0: b           L_80281BE8
    // 0x80281BD4: nop

        goto L_80281BE8;
    // 0x80281BD4: nop

L_80281BD8:
    // 0x80281BD8: jal         0x802811A8
    // 0x80281BDC: nop

    func_802811A8_code_extra_2(rdram, ctx);
        goto after_5;
    // 0x80281BDC: nop

    after_5:
    // 0x80281BE0: b           L_80281BE8
    // 0x80281BE4: nop

        goto L_80281BE8;
    // 0x80281BE4: nop

L_80281BE8:
    // 0x80281BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281BF0: jr          $ra
    // 0x80281BF4: nop

    return;
    // 0x80281BF4: nop

;}
RECOMP_FUNC void func_8028157C_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028157C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281580: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281584: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281588: lh          $t6, -0x1D08($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D08);
    // 0x8028158C: nop

    // 0x80281590: bne         $t6, $zero, L_802816A8
    if (ctx->r14 != 0) {
        // 0x80281594: nop
    
            goto L_802816A8;
    }
    // 0x80281594: nop

    // 0x80281598: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028159C: lhu         $t7, -0x1C82($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1C82);
    // 0x802815A0: nop

    // 0x802815A4: andi        $t8, $t7, 0x2014
    ctx->r24 = ctx->r15 & 0X2014;
    // 0x802815A8: beq         $t8, $zero, L_80281654
    if (ctx->r24 == 0) {
        // 0x802815AC: nop
    
            goto L_80281654;
    }
    // 0x802815AC: nop

    // 0x802815B0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802815B4: lh          $t9, -0x1F00($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1F00);
    // 0x802815B8: nop

    // 0x802815BC: bne         $t9, $zero, L_80281608
    if (ctx->r25 != 0) {
        // 0x802815C0: nop
    
            goto L_80281608;
    }
    // 0x802815C0: nop

    // 0x802815C4: jal         0x80079DFC
    // 0x802815C8: nop

    func_80079DFC(rdram, ctx);
        goto after_0;
    // 0x802815C8: nop

    after_0:
    // 0x802815CC: bne         $v0, $zero, L_80281600
    if (ctx->r2 != 0) {
        // 0x802815D0: nop
    
            goto L_80281600;
    }
    // 0x802815D0: nop

    // 0x802815D4: jal         0x8007CDE8
    // 0x802815D8: nop

    func_8007CDE8(rdram, ctx);
        goto after_1;
    // 0x802815D8: nop

    after_1:
    // 0x802815DC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802815E0: lh          $t0, -0x1F00($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1F00);
    // 0x802815E4: nop

    // 0x802815E8: beq         $t0, $zero, L_80281600
    if (ctx->r8 == 0) {
        // 0x802815EC: nop
    
            goto L_80281600;
    }
    // 0x802815EC: nop

    // 0x802815F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802815F4: sh          $zero, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = 0;
    // 0x802815F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802815FC: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
L_80281600:
    // 0x80281600: b           L_8028164C
    // 0x80281604: nop

        goto L_8028164C;
    // 0x80281604: nop

L_80281608:
    // 0x80281608: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028160C: lh          $t1, -0x1D18($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1D18);
    // 0x80281610: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80281614: bne         $t1, $at, L_80281638
    if (ctx->r9 != ctx->r1) {
        // 0x80281618: nop
    
            goto L_80281638;
    }
    // 0x80281618: nop

    // 0x8028161C: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x80281620: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281624: sh          $t2, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = ctx->r10;
    // 0x80281628: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8028162C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281630: b           L_8028164C
    // 0x80281634: sh          $t3, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r11;
        goto L_8028164C;
    // 0x80281634: sh          $t3, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r11;
L_80281638:
    // 0x80281638: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028163C: lh          $t4, -0x1D18($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1D18);
    // 0x80281640: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281644: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80281648: sh          $t5, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = ctx->r13;
L_8028164C:
    // 0x8028164C: b           L_802816A0
    // 0x80281650: nop

        goto L_802816A0;
    // 0x80281650: nop

L_80281654:
    // 0x80281654: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281658: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x8028165C: nop

    // 0x80281660: andi        $t7, $t6, 0x2014
    ctx->r15 = ctx->r14 & 0X2014;
    // 0x80281664: bne         $t7, $zero, L_802816A0
    if (ctx->r15 != 0) {
        // 0x80281668: nop
    
            goto L_802816A0;
    }
    // 0x80281668: nop

    // 0x8028166C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281670: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x80281674: nop

    // 0x80281678: beq         $t8, $zero, L_802816A0
    if (ctx->r24 == 0) {
        // 0x8028167C: nop
    
            goto L_802816A0;
    }
    // 0x8028167C: nop

    // 0x80281680: jal         0x8007CEB8
    // 0x80281684: nop

    func_8007CEB8(rdram, ctx);
        goto after_2;
    // 0x80281684: nop

    after_2:
    // 0x80281688: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028168C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281690: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80281694: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80281698: jal         0x800178D4
    // 0x8028169C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x8028169C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_802816A0:
    // 0x802816A0: b           L_8028171C
    // 0x802816A4: nop

        goto L_8028171C;
    // 0x802816A4: nop

L_802816A8:
    // 0x802816A8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802816AC: lhu         $t9, -0x1C82($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C82);
    // 0x802816B0: nop

    // 0x802816B4: andi        $t0, $t9, 0x2014
    ctx->r8 = ctx->r25 & 0X2014;
    // 0x802816B8: beq         $t0, $zero, L_802816F4
    if (ctx->r8 == 0) {
        // 0x802816BC: nop
    
            goto L_802816F4;
    }
    // 0x802816BC: nop

    // 0x802816C0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802816C4: lh          $t1, -0x1D08($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1D08);
    // 0x802816C8: nop

    // 0x802816CC: slti        $at, $t1, 0x3E9
    ctx->r1 = SIGNED(ctx->r9) < 0X3E9 ? 1 : 0;
    // 0x802816D0: beq         $at, $zero, L_802816EC
    if (ctx->r1 == 0) {
        // 0x802816D4: nop
    
            goto L_802816EC;
    }
    // 0x802816D4: nop

    // 0x802816D8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802816DC: lh          $t2, -0x1D08($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1D08);
    // 0x802816E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802816E4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x802816E8: sh          $t3, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r11;
L_802816EC:
    // 0x802816EC: b           L_8028171C
    // 0x802816F0: nop

        goto L_8028171C;
    // 0x802816F0: nop

L_802816F4:
    // 0x802816F4: jal         0x8007D0DC
    // 0x802816F8: nop

    func_8007D0DC(rdram, ctx);
        goto after_4;
    // 0x802816F8: nop

    after_4:
    // 0x802816FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281700: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x80281704: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028170C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80281710: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80281714: jal         0x800178D4
    // 0x80281718: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80281718: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_8028171C:
    // 0x8028171C: b           L_8028172C
    // 0x80281720: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8028172C;
    // 0x80281720: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80281724: b           L_8028172C
    // 0x80281728: nop

        goto L_8028172C;
    // 0x80281728: nop

L_8028172C:
    // 0x8028172C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281734: jr          $ra
    // 0x80281738: nop

    return;
    // 0x80281738: nop

;}
RECOMP_FUNC void func_80280000_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280008: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028000C: lwc1        $f4, -0x1C20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C20);
    // 0x80280010: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80280014: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280018: nop

    // 0x8028001C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80280020: nop

    // 0x80280024: bc1f        L_80280128
    if (!c1cs) {
        // 0x80280028: nop
    
            goto L_80280128;
    }
    // 0x80280028: nop

    // 0x8028002C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280030: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280034: nop

    // 0x80280038: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8028003C: lwc1        $f14, 0x4($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80280040: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x80280044: jal         0x80067748
    // 0x80280048: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x80280048: nop

    after_0:
    // 0x8028004C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280050: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x80280054: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280058: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8028005C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80280060: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80280064: lwc1        $f8, 0x7760($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80280068: nop

    // 0x8028006C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80280070: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280074: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80280078: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028007C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280080: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280084: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80280088: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8028008C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80280090: nop

    // 0x80280094: bc1f        L_80280128
    if (!c1cs) {
        // 0x80280098: nop
    
            goto L_80280128;
    }
    // 0x80280098: nop

    // 0x8028009C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802800A0: lb          $t1, -0x1C13($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1C13);
    // 0x802800A4: nop

    // 0x802800A8: bne         $t1, $zero, L_80280114
    if (ctx->r9 != 0) {
        // 0x802800AC: nop
    
            goto L_80280114;
    }
    // 0x802800AC: nop

    // 0x802800B0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802800B4: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802800B8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802800BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802800C0: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x802800C4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802800C8: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802800CC: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x802800D0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x802800D4: jal         0x80081468
    // 0x802800D8: addiu       $a0, $zero, 0x2BD
    ctx->r4 = ADD32(0, 0X2BD);
    func_80081468(rdram, ctx);
        goto after_1;
    // 0x802800D8: addiu       $a0, $zero, 0x2BD
    ctx->r4 = ADD32(0, 0X2BD);
    after_1:
    // 0x802800DC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802800E0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802800E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802800E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802800EC: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802800F0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802800F4: sub.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x802800F8: lw          $a3, 0x8($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X8);
    // 0x802800FC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80280100: jal         0x80081468
    // 0x80280104: addiu       $a0, $zero, 0x2BD
    ctx->r4 = ADD32(0, 0X2BD);
    func_80081468(rdram, ctx);
        goto after_2;
    // 0x80280104: addiu       $a0, $zero, 0x2BD
    ctx->r4 = ADD32(0, 0X2BD);
    after_2:
    // 0x80280108: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8028010C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280110: sb          $t4, -0x1C13($at)
    MEM_B(-0X1C13, ctx->r1) = ctx->r12;
L_80280114:
    // 0x80280114: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280118: lb          $t5, -0x1C13($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1C13);
    // 0x8028011C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280120: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80280124: sb          $t6, -0x1C13($at)
    MEM_B(-0X1C13, ctx->r1) = ctx->r14;
L_80280128:
    // 0x80280128: b           L_80280130
    // 0x8028012C: nop

        goto L_80280130;
    // 0x8028012C: nop

L_80280130:
    // 0x80280130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280138: jr          $ra
    // 0x8028013C: nop

    return;
    // 0x8028013C: nop

;}
RECOMP_FUNC void func_80281F90_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281F98: jal         0x80280430
    // 0x80281F9C: nop

    func_80280430_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80281F9C: nop

    after_0:
    // 0x80281FA0: jal         0x802805E0
    // 0x80281FA4: nop

    func_802805E0_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x80281FA4: nop

    after_1:
    // 0x80281FA8: jal         0x802806F4
    // 0x80281FAC: nop

    func_802806F4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80281FAC: nop

    after_2:
    // 0x80281FB0: jal         0x802809A0
    // 0x80281FB4: nop

    func_802809A0_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80281FB4: nop

    after_3:
    // 0x80281FB8: jal         0x80280808
    // 0x80281FBC: nop

    func_80280808_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80281FBC: nop

    after_4:
    // 0x80281FC0: b           L_80281FC8
    // 0x80281FC4: nop

        goto L_80281FC8;
    // 0x80281FC4: nop

L_80281FC8:
    // 0x80281FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281FCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281FD0: jr          $ra
    // 0x80281FD4: nop

    return;
    // 0x80281FD4: nop

;}
RECOMP_FUNC void func_80280AA4_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280AAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280AB0: lwc1        $f12, -0x1C28($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1C28);
    // 0x80280AB4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80280AB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80280ABC: jal         0x802803BC
    // 0x80280AC0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_802803BC_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80280AC0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80280AC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280AC8: swc1        $f0, -0x1C28($at)
    MEM_W(-0X1C28, ctx->r1) = ctx->f0.u32l;
    // 0x80280ACC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280AD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280AD4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280AD8: lwc1        $f4, -0x1C28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C28);
    // 0x80280ADC: nop

    // 0x80280AE0: swc1        $f4, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f4.u32l;
    // 0x80280AE4: b           L_80280AEC
    // 0x80280AE8: nop

        goto L_80280AEC;
    // 0x80280AE8: nop

L_80280AEC:
    // 0x80280AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280AF4: jr          $ra
    // 0x80280AF8: nop

    return;
    // 0x80280AF8: nop

;}
RECOMP_FUNC void func_80280430_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280438: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028043C: lb          $t6, -0x1F08($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1F08);
    // 0x80280440: nop

    // 0x80280444: beq         $t6, $zero, L_80280468
    if (ctx->r14 == 0) {
        // 0x80280448: nop
    
            goto L_80280468;
    }
    // 0x80280448: nop

    // 0x8028044C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280450: nop

    // 0x80280454: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80280458: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8028045C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280460: b           L_80280590
    // 0x80280464: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
        goto L_80280590;
    // 0x80280464: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_80280468:
    // 0x80280468: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028046C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280470: addiu       $at, $zero, 0xCB
    ctx->r1 = ADD32(0, 0XCB);
    // 0x80280474: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80280478: nop

    // 0x8028047C: bne         $t8, $at, L_802804A4
    if (ctx->r24 != ctx->r1) {
        // 0x80280480: nop
    
            goto L_802804A4;
    }
    // 0x80280480: nop

    // 0x80280484: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80280488: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028048C: nop

    // 0x80280490: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80280494: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80280498: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028049C: b           L_80280590
    // 0x802804A0: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
        goto L_80280590;
    // 0x802804A0: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
L_802804A4:
    // 0x802804A4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802804A8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802804AC: addiu       $at, $zero, 0xCC
    ctx->r1 = ADD32(0, 0XCC);
    // 0x802804B0: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x802804B4: nop

    // 0x802804B8: beq         $t0, $at, L_802804E4
    if (ctx->r8 == ctx->r1) {
        // 0x802804BC: nop
    
            goto L_802804E4;
    }
    // 0x802804BC: nop

    // 0x802804C0: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x802804C4: beq         $t0, $at, L_802804E4
    if (ctx->r8 == ctx->r1) {
        // 0x802804C8: nop
    
            goto L_802804E4;
    }
    // 0x802804C8: nop

    // 0x802804CC: addiu       $at, $zero, 0xCE
    ctx->r1 = ADD32(0, 0XCE);
    // 0x802804D0: beq         $t0, $at, L_802804E4
    if (ctx->r8 == ctx->r1) {
        // 0x802804D4: nop
    
            goto L_802804E4;
    }
    // 0x802804D4: nop

    // 0x802804D8: addiu       $at, $zero, 0xCD
    ctx->r1 = ADD32(0, 0XCD);
    // 0x802804DC: bne         $t0, $at, L_80280500
    if (ctx->r8 != ctx->r1) {
        // 0x802804E0: nop
    
            goto L_80280500;
    }
    // 0x802804E0: nop

L_802804E4:
    // 0x802804E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802804E8: nop

    // 0x802804EC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802804F0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802804F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802804F8: b           L_80280590
    // 0x802804FC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
        goto L_80280590;
    // 0x802804FC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_80280500:
    // 0x80280500: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280504: lhu         $t1, -0x1C82($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1C82);
    // 0x80280508: nop

    // 0x8028050C: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x80280510: beq         $t2, $zero, L_80280570
    if (ctx->r10 == 0) {
        // 0x80280514: nop
    
            goto L_80280570;
    }
    // 0x80280514: nop

    // 0x80280518: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8028051C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280520: nop

    // 0x80280524: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80280528: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028052C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280530: nop

    // 0x80280534: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80280538: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028053C: lhu         $t3, -0x1C7C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X1C7C);
    // 0x80280540: nop

    // 0x80280544: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x80280548: beq         $t4, $zero, L_80280568
    if (ctx->r12 == 0) {
        // 0x8028054C: nop
    
            goto L_80280568;
    }
    // 0x8028054C: nop

    // 0x80280550: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280558: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8028055C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80280560: jal         0x800178D4
    // 0x80280564: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x80280564: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_80280568:
    // 0x80280568: b           L_80280590
    // 0x8028056C: nop

        goto L_80280590;
    // 0x8028056C: nop

L_80280570:
    // 0x80280570: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80280574: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280578: nop

    // 0x8028057C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80280580: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80280584: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280588: nop

    // 0x8028058C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
L_80280590:
    // 0x80280590: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280594: lwc1        $f12, -0x1C20($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1C20);
    // 0x80280598: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8028059C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802805A0: jal         0x802803BC
    // 0x802805A4: nop

    func_802803BC_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x802805A4: nop

    after_1:
    // 0x802805A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802805AC: swc1        $f0, -0x1C20($at)
    MEM_W(-0X1C20, ctx->r1) = ctx->f0.u32l;
    // 0x802805B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802805B4: lwc1        $f16, -0x1C20($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C20);
    // 0x802805B8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802805BC: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802805C0: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x802805C4: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x802805C8: b           L_802805D0
    // 0x802805CC: nop

        goto L_802805D0;
    // 0x802805CC: nop

L_802805D0:
    // 0x802805D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802805D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802805D8: jr          $ra
    // 0x802805DC: nop

    return;
    // 0x802805DC: nop

;}
RECOMP_FUNC void func_802814C0_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802814C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802814C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802814C8: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802814CC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802814D0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802814D4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802814D8: addiu       $t7, $zero, 0xD0
    ctx->r15 = ADD32(0, 0XD0);
    // 0x802814DC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802814E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802814E4: jal         0x80280F0C
    // 0x802814E8: nop

    func_80280F0C_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x802814E8: nop

    after_0:
    // 0x802814EC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802814F0: addiu       $t9, $t9, 0x5E00
    ctx->r25 = ADD32(ctx->r25, 0X5E00);
    // 0x802814F4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802814F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802814FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281504: jal         0x8001C0EC
    // 0x80281508: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281508: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8028150C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281510: jal         0x8001B754
    // 0x80281514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80281514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281518: b           L_80281520
    // 0x8028151C: nop

        goto L_80281520;
    // 0x8028151C: nop

L_80281520:
    // 0x80281520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281524: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281528: jr          $ra
    // 0x8028152C: nop

    return;
    // 0x8028152C: nop

;}
RECOMP_FUNC void func_80281380_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281384: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281388: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8028138C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80281390: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281394: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281398: addiu       $t7, $zero, 0xCE
    ctx->r15 = ADD32(0, 0XCE);
    // 0x8028139C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802813A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802813A4: jal         0x80280F0C
    // 0x802813A8: nop

    func_80280F0C_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x802813A8: nop

    after_0:
    // 0x802813AC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802813B0: addiu       $t9, $t9, 0x5E00
    ctx->r25 = ADD32(ctx->r25, 0X5E00);
    // 0x802813B4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802813B8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802813BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802813C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802813C4: jal         0x8001C0EC
    // 0x802813C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802813C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802813CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802813D0: jal         0x8001B754
    // 0x802813D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x802813D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802813D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802813DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802813E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802813E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802813E8: jal         0x800178D4
    // 0x802813EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x802813EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x802813F0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x802813F4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802813F8: jal         0x8001FB3C
    // 0x802813FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_4;
    // 0x802813FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80281400: b           L_80281408
    // 0x80281404: nop

        goto L_80281408;
    // 0x80281404: nop

L_80281408:
    // 0x80281408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028140C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80281410: jr          $ra
    // 0x80281414: nop

    return;
    // 0x80281414: nop

;}
RECOMP_FUNC void func_802809A0_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802809A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802809A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802809A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802809AC: lwc1        $f4, -0x1C30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C30);
    // 0x802809B0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802809B4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802809B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802809BC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802809C0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802809C4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802809C8: jal         0x80015538
    // 0x802809CC: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x802809CC: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x802809D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802809D4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802809D8: nop

    // 0x802809DC: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
    // 0x802809E0: b           L_802809E8
    // 0x802809E4: nop

        goto L_802809E8;
    // 0x802809E4: nop

L_802809E8:
    // 0x802809E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802809EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802809F0: jr          $ra
    // 0x802809F4: nop

    return;
    // 0x802809F4: nop

;}
RECOMP_FUNC void func_80281CC4_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281CCC: jal         0x80085D54
    // 0x80281CD0: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80281CD0: nop

    after_0:
    // 0x80281CD4: beq         $v0, $zero, L_80281CE4
    if (ctx->r2 == 0) {
        // 0x80281CD8: nop
    
            goto L_80281CE4;
    }
    // 0x80281CD8: nop

    // 0x80281CDC: b           L_80281D44
    // 0x80281CE0: nop

        goto L_80281D44;
    // 0x80281CE0: nop

L_80281CE4:
    // 0x80281CE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281CE8: jal         0x8001B44C
    // 0x80281CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x80281CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80281CF0: beq         $v0, $zero, L_80281D3C
    if (ctx->r2 == 0) {
        // 0x80281CF4: nop
    
            goto L_80281D3C;
    }
    // 0x80281CF4: nop

    // 0x80281CF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281CFC: lb          $t6, -0x1F08($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1F08);
    // 0x80281D00: nop

    // 0x80281D04: beq         $t6, $zero, L_80281D1C
    if (ctx->r14 == 0) {
        // 0x80281D08: nop
    
            goto L_80281D1C;
    }
    // 0x80281D08: nop

    // 0x80281D0C: jal         0x80280FA4
    // 0x80281D10: nop

    func_80280FA4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80281D10: nop

    after_2:
    // 0x80281D14: b           L_80281D24
    // 0x80281D18: nop

        goto L_80281D24;
    // 0x80281D18: nop

L_80281D1C:
    // 0x80281D1C: jal         0x8028104C
    // 0x80281D20: nop

    func_8028104C_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80281D20: nop

    after_3:
L_80281D24:
    // 0x80281D24: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281D28: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281D2C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80281D30: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x80281D34: b           L_80281D44
    // 0x80281D38: nop

        goto L_80281D44;
    // 0x80281D38: nop

L_80281D3C:
    // 0x80281D3C: b           L_80281D44
    // 0x80281D40: nop

        goto L_80281D44;
    // 0x80281D40: nop

L_80281D44:
    // 0x80281D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281D4C: jr          $ra
    // 0x80281D50: nop

    return;
    // 0x80281D50: nop

;}
RECOMP_FUNC void func_80281BF8_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281C00: jal         0x8028173C
    // 0x80281C04: nop

    func_8028173C_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80281C04: nop

    after_0:
    // 0x80281C08: beq         $v0, $zero, L_80281C18
    if (ctx->r2 == 0) {
        // 0x80281C0C: nop
    
            goto L_80281C18;
    }
    // 0x80281C0C: nop

    // 0x80281C10: b           L_80281CB4
    // 0x80281C14: nop

        goto L_80281CB4;
    // 0x80281C14: nop

L_80281C18:
    // 0x80281C18: jal         0x80085D54
    // 0x80281C1C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80281C1C: nop

    after_1:
    // 0x80281C20: beq         $v0, $zero, L_80281C30
    if (ctx->r2 == 0) {
        // 0x80281C24: nop
    
            goto L_80281C30;
    }
    // 0x80281C24: nop

    // 0x80281C28: b           L_80281CB4
    // 0x80281C2C: nop

        goto L_80281CB4;
    // 0x80281C2C: nop

L_80281C30:
    // 0x80281C30: jal         0x802818A0
    // 0x80281C34: nop

    func_802818A0_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80281C34: nop

    after_2:
    // 0x80281C38: beq         $v0, $zero, L_80281C48
    if (ctx->r2 == 0) {
        // 0x80281C3C: nop
    
            goto L_80281C48;
    }
    // 0x80281C3C: nop

    // 0x80281C40: b           L_80281CB4
    // 0x80281C44: nop

        goto L_80281CB4;
    // 0x80281C44: nop

L_80281C48:
    // 0x80281C48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C4C: lwc1        $f4, -0x1C20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C20);
    // 0x80281C50: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281C54: nop

    // 0x80281C58: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80281C5C: nop

    // 0x80281C60: bc1f        L_80281C8C
    if (!c1cs) {
        // 0x80281C64: nop
    
            goto L_80281C8C;
    }
    // 0x80281C64: nop

    // 0x80281C68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281C6C: jal         0x8001B44C
    // 0x80281C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80281C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281C74: beq         $v0, $zero, L_80281C8C
    if (ctx->r2 == 0) {
        // 0x80281C78: nop
    
            goto L_80281C8C;
    }
    // 0x80281C78: nop

    // 0x80281C7C: jal         0x802810F4
    // 0x80281C80: nop

    func_802810F4_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80281C80: nop

    after_4:
    // 0x80281C84: b           L_80281CB4
    // 0x80281C88: nop

        goto L_80281CB4;
    // 0x80281C88: nop

L_80281C8C:
    // 0x80281C8C: jal         0x8028157C
    // 0x80281C90: nop

    func_8028157C_code_extra_2(rdram, ctx);
        goto after_5;
    // 0x80281C90: nop

    after_5:
    // 0x80281C94: beq         $v0, $zero, L_80281CA4
    if (ctx->r2 == 0) {
        // 0x80281C98: nop
    
            goto L_80281CA4;
    }
    // 0x80281C98: nop

    // 0x80281C9C: b           L_80281CB4
    // 0x80281CA0: nop

        goto L_80281CB4;
    // 0x80281CA0: nop

L_80281CA4:
    // 0x80281CA4: jal         0x8028125C
    // 0x80281CA8: nop

    func_8028125C_code_extra_2(rdram, ctx);
        goto after_6;
    // 0x80281CA8: nop

    after_6:
    // 0x80281CAC: b           L_80281CB4
    // 0x80281CB0: nop

        goto L_80281CB4;
    // 0x80281CB0: nop

L_80281CB4:
    // 0x80281CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281CBC: jr          $ra
    // 0x80281CC0: nop

    return;
    // 0x80281CC0: nop

;}
RECOMP_FUNC void func_80281FD8_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281FD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281FDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281FE0: jal         0x80280430
    // 0x80281FE4: nop

    func_80280430_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80281FE4: nop

    after_0:
    // 0x80281FE8: jal         0x802805E0
    // 0x80281FEC: nop

    func_802805E0_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x80281FEC: nop

    after_1:
    // 0x80281FF0: jal         0x802806F4
    // 0x80281FF4: nop

    func_802806F4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80281FF4: nop

    after_2:
    // 0x80281FF8: jal         0x802809A0
    // 0x80281FFC: nop

    func_802809A0_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80281FFC: nop

    after_3:
    // 0x80282000: jal         0x80280808
    // 0x80282004: nop

    func_80280808_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80282004: nop

    after_4:
    // 0x80282008: b           L_80282010
    // 0x8028200C: nop

        goto L_80282010;
    // 0x8028200C: nop

L_80282010:
    // 0x80282010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282018: jr          $ra
    // 0x8028201C: nop

    return;
    // 0x8028201C: nop

;}
RECOMP_FUNC void func_80280140_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280140: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80280144: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280148: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028014C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280150: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280154: nop

    // 0x80280158: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028015C: nop

    // 0x80280160: bc1f        L_80280194
    if (!c1cs) {
        // 0x80280164: nop
    
            goto L_80280194;
    }
    // 0x80280164: nop

    // 0x80280168: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8028016C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280170: nop

    // 0x80280174: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80280178: nop

    // 0x8028017C: bc1f        L_80280194
    if (!c1cs) {
        // 0x80280180: nop
    
            goto L_80280194;
    }
    // 0x80280180: nop

    // 0x80280184: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80280188: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028018C: b           L_80280278
    // 0x80280190: swc1        $f10, -0x1C40($at)
    MEM_W(-0X1C40, ctx->r1) = ctx->f10.u32l;
        goto L_80280278;
    // 0x80280190: swc1        $f10, -0x1C40($at)
    MEM_W(-0X1C40, ctx->r1) = ctx->f10.u32l;
L_80280194:
    // 0x80280194: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280198: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028019C: nop

    // 0x802801A0: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x802801A4: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802801A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802801AC: nop

    // 0x802801B0: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x802801B4: nop

    // 0x802801B8: bc1f        L_8028020C
    if (!c1cs) {
        // 0x802801BC: nop
    
            goto L_8028020C;
    }
    // 0x802801BC: nop

    // 0x802801C0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802801C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802801C8: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802801CC: nop

    // 0x802801D0: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x802801D4: nop

    // 0x802801D8: bc1f        L_802801F0
    if (!c1cs) {
        // 0x802801DC: nop
    
            goto L_802801F0;
    }
    // 0x802801DC: nop

    // 0x802801E0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802801E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802801E8: nop

    // 0x802801EC: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
L_802801F0:
    // 0x802801F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802801F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802801F8: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802801FC: nop

    // 0x80280200: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80280204: b           L_80280254
    // 0x80280208: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
        goto L_80280254;
    // 0x80280208: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
L_8028020C:
    // 0x8028020C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80280210: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280214: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280218: nop

    // 0x8028021C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80280220: nop

    // 0x80280224: bc1f        L_8028023C
    if (!c1cs) {
        // 0x80280228: nop
    
            goto L_8028023C;
    }
    // 0x80280228: nop

    // 0x8028022C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80280230: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280234: nop

    // 0x80280238: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
L_8028023C:
    // 0x8028023C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280240: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280244: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280248: nop

    // 0x8028024C: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80280250: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
L_80280254:
    // 0x80280254: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80280258: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028025C: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280260: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80280264: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80280268: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028026C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280270: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80280274: swc1        $f18, -0x1C40($at)
    MEM_W(-0X1C40, ctx->r1) = ctx->f18.u32l;
L_80280278:
    // 0x80280278: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028027C: lwc1        $f6, -0x1C6C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80280280: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280284: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280288: nop

    // 0x8028028C: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80280290: nop

    // 0x80280294: bc1f        L_802802C8
    if (!c1cs) {
        // 0x80280298: nop
    
            goto L_802802C8;
    }
    // 0x80280298: nop

    // 0x8028029C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802802A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802802A4: nop

    // 0x802802A8: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x802802AC: nop

    // 0x802802B0: bc1f        L_802802C8
    if (!c1cs) {
        // 0x802802B4: nop
    
            goto L_802802C8;
    }
    // 0x802802B4: nop

    // 0x802802B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802802BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802802C0: b           L_802803AC
    // 0x802802C4: swc1        $f10, -0x1C38($at)
    MEM_W(-0X1C38, ctx->r1) = ctx->f10.u32l;
        goto L_802803AC;
    // 0x802802C4: swc1        $f10, -0x1C38($at)
    MEM_W(-0X1C38, ctx->r1) = ctx->f10.u32l;
L_802802C8:
    // 0x802802C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802802CC: lwc1        $f16, -0x1C6C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x802802D0: nop

    // 0x802802D4: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x802802D8: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802802DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802802E0: nop

    // 0x802802E4: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x802802E8: nop

    // 0x802802EC: bc1f        L_80280340
    if (!c1cs) {
        // 0x802802F0: nop
    
            goto L_80280340;
    }
    // 0x802802F0: nop

    // 0x802802F4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802802F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802802FC: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280300: nop

    // 0x80280304: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80280308: nop

    // 0x8028030C: bc1f        L_80280324
    if (!c1cs) {
        // 0x80280310: nop
    
            goto L_80280324;
    }
    // 0x80280310: nop

    // 0x80280314: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80280318: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028031C: nop

    // 0x80280320: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
L_80280324:
    // 0x80280324: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280328: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028032C: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280330: nop

    // 0x80280334: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80280338: b           L_80280388
    // 0x8028033C: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
        goto L_80280388;
    // 0x8028033C: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
L_80280340:
    // 0x80280340: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80280344: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280348: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8028034C: nop

    // 0x80280350: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80280354: nop

    // 0x80280358: bc1f        L_80280370
    if (!c1cs) {
        // 0x8028035C: nop
    
            goto L_80280370;
    }
    // 0x8028035C: nop

    // 0x80280360: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80280364: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280368: nop

    // 0x8028036C: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
L_80280370:
    // 0x80280370: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280374: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280378: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8028037C: nop

    // 0x80280380: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80280384: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
L_80280388:
    // 0x80280388: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8028038C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280390: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280394: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80280398: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8028039C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802803A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802803A4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802803A8: swc1        $f18, -0x1C38($at)
    MEM_W(-0X1C38, ctx->r1) = ctx->f18.u32l;
L_802803AC:
    // 0x802803AC: b           L_802803B4
    // 0x802803B0: nop

        goto L_802803B4;
    // 0x802803B0: nop

L_802803B4:
    // 0x802803B4: jr          $ra
    // 0x802803B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802803B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8028125C_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028125C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80281260: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281264: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281268: jal         0x8001B880
    // 0x8028126C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x8028126C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281270: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80281274: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281278: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8028127C: nop

    // 0x80281280: beq         $t6, $zero, L_80281294
    if (ctx->r14 == 0) {
        // 0x80281284: nop
    
            goto L_80281294;
    }
    // 0x80281284: nop

    // 0x80281288: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x8028128C: b           L_8028129C
    // 0x80281290: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
        goto L_8028129C;
    // 0x80281290: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
L_80281294:
    // 0x80281294: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80281298: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
L_8028129C:
    // 0x8028129C: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x802812A0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x802812A4: nop

    // 0x802812A8: beq         $t9, $t0, L_80281358
    if (ctx->r25 == ctx->r8) {
        // 0x802812AC: nop
    
            goto L_80281358;
    }
    // 0x802812AC: nop

    // 0x802812B0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x802812B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802812B8: beq         $t1, $at, L_802812CC
    if (ctx->r9 == ctx->r1) {
        // 0x802812BC: nop
    
            goto L_802812CC;
    }
    // 0x802812BC: nop

    // 0x802812C0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802812C4: bne         $t1, $at, L_802812E0
    if (ctx->r9 != ctx->r1) {
        // 0x802812C8: nop
    
            goto L_802812E0;
    }
    // 0x802812C8: nop

L_802812CC:
    // 0x802812CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802812D0: jal         0x8001B62C
    // 0x802812D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x802812D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802812D8: b           L_802812FC
    // 0x802812DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
        goto L_802812FC;
    // 0x802812DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_802812E0:
    // 0x802812E0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802812E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802812E8: nop

    // 0x802812EC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x802812F0: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x802812F4: jal         0x80280F0C
    // 0x802812F8: nop

    func_80280F0C_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x802812F8: nop

    after_2:
L_802812FC:
    // 0x802812FC: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80281300: addiu       $t2, $t2, 0x5E00
    ctx->r10 = ADD32(ctx->r10, 0X5E00);
    // 0x80281304: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x80281308: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8028130C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281310: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281314: jal         0x8001C0EC
    // 0x80281318: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80281318: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x8028131C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281320: jal         0x8001B754
    // 0x80281324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_4;
    // 0x80281324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80281328: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028132C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281330: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80281334: nop

    // 0x80281338: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8028133C: nop

    // 0x80281340: bc1t        L_80281358
    if (c1cs) {
        // 0x80281344: nop
    
            goto L_80281358;
    }
    // 0x80281344: nop

    // 0x80281348: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8028134C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281350: jal         0x8001B6BC
    // 0x80281354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_5;
    // 0x80281354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80281358:
    // 0x80281358: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028135C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281360: addiu       $t3, $zero, 0xCD
    ctx->r11 = ADD32(0, 0XCD);
    // 0x80281364: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80281368: b           L_80281370
    // 0x8028136C: nop

        goto L_80281370;
    // 0x8028136C: nop

L_80281370:
    // 0x80281370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281374: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80281378: jr          $ra
    // 0x8028137C: nop

    return;
    // 0x8028137C: nop

;}
RECOMP_FUNC void func_80281418_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281418: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8028141C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281420: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80281424: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80281428: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028142C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281430: addiu       $t7, $zero, 0xCF
    ctx->r15 = ADD32(0, 0XCF);
    // 0x80281434: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80281438: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8028143C: jal         0x80280F0C
    // 0x80281440: nop

    func_80280F0C_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80281440: nop

    after_0:
    // 0x80281444: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80281448: addiu       $t9, $t9, 0x5E00
    ctx->r25 = ADD32(ctx->r25, 0X5E00);
    // 0x8028144C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80281450: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80281454: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028145C: jal         0x8001C0EC
    // 0x80281460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281460: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80281464: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80281468: addiu       $a3, $a3, 0x5E88
    ctx->r7 = ADD32(ctx->r7, 0X5E88);
    // 0x8028146C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80281470: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281478: jal         0x8001ABF4
    // 0x8028147C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8028147C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80281480: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281488: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8028148C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80281490: jal         0x800178D4
    // 0x80281494: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80281494: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80281498: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x8028149C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802814A0: jal         0x8001FB3C
    // 0x802814A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_4;
    // 0x802814A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x802814A8: b           L_802814B0
    // 0x802814AC: nop

        goto L_802814B0;
    // 0x802814AC: nop

L_802814B0:
    // 0x802814B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802814B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802814B8: jr          $ra
    // 0x802814BC: nop

    return;
    // 0x802814BC: nop

;}
RECOMP_FUNC void func_802820B0_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802820B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802820B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802820B8: jal         0x80280430
    // 0x802820BC: nop

    func_80280430_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x802820BC: nop

    after_0:
    // 0x802820C0: jal         0x802805E0
    // 0x802820C4: nop

    func_802805E0_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x802820C4: nop

    after_1:
    // 0x802820C8: jal         0x802806F4
    // 0x802820CC: nop

    func_802806F4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x802820CC: nop

    after_2:
    // 0x802820D0: jal         0x802809A0
    // 0x802820D4: nop

    func_802809A0_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x802820D4: nop

    after_3:
    // 0x802820D8: jal         0x80280808
    // 0x802820DC: nop

    func_80280808_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x802820DC: nop

    after_4:
    // 0x802820E0: b           L_802820E8
    // 0x802820E4: nop

        goto L_802820E8;
    // 0x802820E4: nop

L_802820E8:
    // 0x802820E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802820EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802820F0: jr          $ra
    // 0x802820F4: nop

    return;
    // 0x802820F4: nop

;}
RECOMP_FUNC void func_80280A50_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280A58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A5C: lwc1        $f12, -0x1C30($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1C30);
    // 0x80280A60: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80280A64: jal         0x802803BC
    // 0x80280A68: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_802803BC_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80280A68: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x80280A6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A70: swc1        $f0, -0x1C30($at)
    MEM_W(-0X1C30, ctx->r1) = ctx->f0.u32l;
    // 0x80280A74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A78: lwc1        $f4, -0x1C30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C30);
    // 0x80280A7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280A80: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280A84: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80280A88: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80280A8C: b           L_80280A94
    // 0x80280A90: nop

        goto L_80280A94;
    // 0x80280A90: nop

L_80280A94:
    // 0x80280A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280A9C: jr          $ra
    // 0x80280AA0: nop

    return;
    // 0x80280AA0: nop

;}
RECOMP_FUNC void func_80281A70_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281A78: jal         0x8028173C
    // 0x80281A7C: nop

    func_8028173C_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80281A7C: nop

    after_0:
    // 0x80281A80: beq         $v0, $zero, L_80281A90
    if (ctx->r2 == 0) {
        // 0x80281A84: nop
    
            goto L_80281A90;
    }
    // 0x80281A84: nop

    // 0x80281A88: b           L_80281B30
    // 0x80281A8C: nop

        goto L_80281B30;
    // 0x80281A8C: nop

L_80281A90:
    // 0x80281A90: jal         0x80085D54
    // 0x80281A94: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80281A94: nop

    after_1:
    // 0x80281A98: beq         $v0, $zero, L_80281AA8
    if (ctx->r2 == 0) {
        // 0x80281A9C: nop
    
            goto L_80281AA8;
    }
    // 0x80281A9C: nop

    // 0x80281AA0: b           L_80281B30
    // 0x80281AA4: nop

        goto L_80281B30;
    // 0x80281AA4: nop

L_80281AA8:
    // 0x80281AA8: jal         0x802818A0
    // 0x80281AAC: nop

    func_802818A0_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80281AAC: nop

    after_2:
    // 0x80281AB0: beq         $v0, $zero, L_80281AC0
    if (ctx->r2 == 0) {
        // 0x80281AB4: nop
    
            goto L_80281AC0;
    }
    // 0x80281AB4: nop

    // 0x80281AB8: b           L_80281B30
    // 0x80281ABC: nop

        goto L_80281B30;
    // 0x80281ABC: nop

L_80281AC0:
    // 0x80281AC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281AC4: lwc1        $f4, -0x1C20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C20);
    // 0x80281AC8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80281ACC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281AD0: nop

    // 0x80281AD4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80281AD8: nop

    // 0x80281ADC: bc1f        L_80281B08
    if (!c1cs) {
        // 0x80281AE0: nop
    
            goto L_80281B08;
    }
    // 0x80281AE0: nop

    // 0x80281AE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281AE8: jal         0x8001B44C
    // 0x80281AEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80281AEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281AF0: beq         $v0, $zero, L_80281B08
    if (ctx->r2 == 0) {
        // 0x80281AF4: nop
    
            goto L_80281B08;
    }
    // 0x80281AF4: nop

    // 0x80281AF8: jal         0x8028104C
    // 0x80281AFC: nop

    func_8028104C_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80281AFC: nop

    after_4:
    // 0x80281B00: b           L_80281B30
    // 0x80281B04: nop

        goto L_80281B30;
    // 0x80281B04: nop

L_80281B08:
    // 0x80281B08: jal         0x8028157C
    // 0x80281B0C: nop

    func_8028157C_code_extra_2(rdram, ctx);
        goto after_5;
    // 0x80281B0C: nop

    after_5:
    // 0x80281B10: beq         $v0, $zero, L_80281B20
    if (ctx->r2 == 0) {
        // 0x80281B14: nop
    
            goto L_80281B20;
    }
    // 0x80281B14: nop

    // 0x80281B18: b           L_80281B30
    // 0x80281B1C: nop

        goto L_80281B30;
    // 0x80281B1C: nop

L_80281B20:
    // 0x80281B20: jal         0x802810F4
    // 0x80281B24: nop

    func_802810F4_code_extra_2(rdram, ctx);
        goto after_6;
    // 0x80281B24: nop

    after_6:
    // 0x80281B28: b           L_80281B30
    // 0x80281B2C: nop

        goto L_80281B30;
    // 0x80281B2C: nop

L_80281B30:
    // 0x80281B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281B38: jr          $ra
    // 0x80281B3C: nop

    return;
    // 0x80281B3C: nop

;}
RECOMP_FUNC void func_80281938_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028193C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281940: jal         0x8028173C
    // 0x80281944: nop

    func_8028173C_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80281944: nop

    after_0:
    // 0x80281948: beq         $v0, $zero, L_80281958
    if (ctx->r2 == 0) {
        // 0x8028194C: nop
    
            goto L_80281958;
    }
    // 0x8028194C: nop

    // 0x80281950: b           L_802819B0
    // 0x80281954: nop

        goto L_802819B0;
    // 0x80281954: nop

L_80281958:
    // 0x80281958: jal         0x80085D54
    // 0x8028195C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x8028195C: nop

    after_1:
    // 0x80281960: beq         $v0, $zero, L_80281970
    if (ctx->r2 == 0) {
        // 0x80281964: nop
    
            goto L_80281970;
    }
    // 0x80281964: nop

    // 0x80281968: b           L_802819B0
    // 0x8028196C: nop

        goto L_802819B0;
    // 0x8028196C: nop

L_80281970:
    // 0x80281970: jal         0x802818A0
    // 0x80281974: nop

    func_802818A0_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80281974: nop

    after_2:
    // 0x80281978: beq         $v0, $zero, L_80281988
    if (ctx->r2 == 0) {
        // 0x8028197C: nop
    
            goto L_80281988;
    }
    // 0x8028197C: nop

    // 0x80281980: b           L_802819B0
    // 0x80281984: nop

        goto L_802819B0;
    // 0x80281984: nop

L_80281988:
    // 0x80281988: jal         0x8028157C
    // 0x8028198C: nop

    func_8028157C_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x8028198C: nop

    after_3:
    // 0x80281990: beq         $v0, $zero, L_802819A0
    if (ctx->r2 == 0) {
        // 0x80281994: nop
    
            goto L_802819A0;
    }
    // 0x80281994: nop

    // 0x80281998: b           L_802819B0
    // 0x8028199C: nop

        goto L_802819B0;
    // 0x8028199C: nop

L_802819A0:
    // 0x802819A0: jal         0x80280FA4
    // 0x802819A4: nop

    func_80280FA4_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x802819A4: nop

    after_4:
    // 0x802819A8: b           L_802819B0
    // 0x802819AC: nop

        goto L_802819B0;
    // 0x802819AC: nop

L_802819B0:
    // 0x802819B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802819B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802819B8: jr          $ra
    // 0x802819BC: nop

    return;
    // 0x802819BC: nop

;}
RECOMP_FUNC void func_80282020_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80282024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282028: jal         0x80280430
    // 0x8028202C: nop

    func_80280430_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x8028202C: nop

    after_0:
    // 0x80282030: jal         0x802805E0
    // 0x80282034: nop

    func_802805E0_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x80282034: nop

    after_1:
    // 0x80282038: jal         0x802806F4
    // 0x8028203C: nop

    func_802806F4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x8028203C: nop

    after_2:
    // 0x80282040: jal         0x802809A0
    // 0x80282044: nop

    func_802809A0_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x80282044: nop

    after_3:
    // 0x80282048: jal         0x80280808
    // 0x8028204C: nop

    func_80280808_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x8028204C: nop

    after_4:
    // 0x80282050: b           L_80282058
    // 0x80282054: nop

        goto L_80282058;
    // 0x80282054: nop

L_80282058:
    // 0x80282058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028205C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282060: jr          $ra
    // 0x80282064: nop

    return;
    // 0x80282064: nop

;}
RECOMP_FUNC void func_802810F4_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802810F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802810F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802810FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281100: jal         0x8001B880
    // 0x80281104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80281104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281108: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8028110C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281110: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x80281114: nop

    // 0x80281118: beq         $t6, $zero, L_8028112C
    if (ctx->r14 == 0) {
        // 0x8028111C: nop
    
            goto L_8028112C;
    }
    // 0x8028111C: nop

    // 0x80281120: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80281124: b           L_80281134
    // 0x80281128: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_80281134;
    // 0x80281128: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_8028112C:
    // 0x8028112C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80281130: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_80281134:
    // 0x80281134: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80281138: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8028113C: nop

    // 0x80281140: beq         $t9, $t0, L_80281180
    if (ctx->r25 == ctx->r8) {
        // 0x80281144: nop
    
            goto L_80281180;
    }
    // 0x80281144: nop

    // 0x80281148: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8028114C: addiu       $t1, $t1, 0x5E00
    ctx->r9 = ADD32(ctx->r9, 0X5E00);
    // 0x80281150: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80281154: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80281158: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028115C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281160: jal         0x8001C0EC
    // 0x80281164: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281164: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80281168: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028116C: jal         0x8001B754
    // 0x80281170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x80281170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80281174: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80281178: jal         0x80280F0C
    // 0x8028117C: nop

    func_80280F0C_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x8028117C: nop

    after_3:
L_80281180:
    // 0x80281180: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281184: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281188: addiu       $t2, $zero, 0xCB
    ctx->r10 = ADD32(0, 0XCB);
    // 0x8028118C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80281190: b           L_80281198
    // 0x80281194: nop

        goto L_80281198;
    // 0x80281194: nop

L_80281198:
    // 0x80281198: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028119C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802811A0: jr          $ra
    // 0x802811A4: nop

    return;
    // 0x802811A4: nop

;}
RECOMP_FUNC void func_802820F8_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802820F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802820FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282100: jal         0x80280430
    // 0x80282104: nop

    func_80280430_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x80282104: nop

    after_0:
    // 0x80282108: jal         0x802805E0
    // 0x8028210C: nop

    func_802805E0_code_extra_2(rdram, ctx);
        goto after_1;
    // 0x8028210C: nop

    after_1:
    // 0x80282110: jal         0x802806F4
    // 0x80282114: nop

    func_802806F4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80282114: nop

    after_2:
    // 0x80282118: jal         0x802809A0
    // 0x8028211C: nop

    func_802809A0_code_extra_2(rdram, ctx);
        goto after_3;
    // 0x8028211C: nop

    after_3:
    // 0x80282120: jal         0x80280808
    // 0x80282124: nop

    func_80280808_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80282124: nop

    after_4:
    // 0x80282128: b           L_80282130
    // 0x8028212C: nop

        goto L_80282130;
    // 0x8028212C: nop

L_80282130:
    // 0x80282130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282138: jr          $ra
    // 0x8028213C: nop

    return;
    // 0x8028213C: nop

;}
RECOMP_FUNC void func_80281E10_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281E18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281E1C: jal         0x8001B44C
    // 0x80281E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_0;
    // 0x80281E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80281E24: beq         $v0, $zero, L_80281E94
    if (ctx->r2 == 0) {
        // 0x80281E28: nop
    
            goto L_80281E94;
    }
    // 0x80281E28: nop

    // 0x80281E2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281E30: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281E34: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281E38: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80281E3C: nop

    // 0x80281E40: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80281E44: nop

    // 0x80281E48: bc1f        L_80281E94
    if (!c1cs) {
        // 0x80281E4C: nop
    
            goto L_80281E94;
    }
    // 0x80281E4C: nop

    // 0x80281E50: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80281E54: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281E58: nop

    // 0x80281E5C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80281E60: nop

    // 0x80281E64: bc1f        L_80281E94
    if (!c1cs) {
        // 0x80281E68: nop
    
            goto L_80281E94;
    }
    // 0x80281E68: nop

    // 0x80281E6C: lwc1        $f16, 0x2C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80281E70: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80281E74: nop

    // 0x80281E78: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80281E7C: nop

    // 0x80281E80: bc1f        L_80281E94
    if (!c1cs) {
        // 0x80281E84: nop
    
            goto L_80281E94;
    }
    // 0x80281E84: nop

    // 0x80281E88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281E8C: jal         0x80069A54
    // 0x80281E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_1;
    // 0x80281E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80281E94:
    // 0x80281E94: b           L_80281E9C
    // 0x80281E98: nop

        goto L_80281E9C;
    // 0x80281E98: nop

L_80281E9C:
    // 0x80281E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281EA4: jr          $ra
    // 0x80281EA8: nop

    return;
    // 0x80281EA8: nop

;}
RECOMP_FUNC void func_802806F4_code_extra_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802806F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802806F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802806FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80280700: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280704: nop

    // 0x80280708: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8028070C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280710: lwc1        $f6, -0x1C38($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C38);
    // 0x80280714: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80280718: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028071C: nop

    // 0x80280720: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80280724: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80280728: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028072C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280730: addiu       $at, $zero, 0xCE
    ctx->r1 = ADD32(0, 0XCE);
    // 0x80280734: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80280738: nop

    // 0x8028073C: bne         $t7, $at, L_80280750
    if (ctx->r15 != ctx->r1) {
        // 0x80280740: nop
    
            goto L_80280750;
    }
    // 0x80280740: nop

    // 0x80280744: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80280748: b           L_802807B8
    // 0x8028074C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
        goto L_802807B8;
    // 0x8028074C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
L_80280750:
    // 0x80280750: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280754: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280758: addiu       $at, $zero, 0xCD
    ctx->r1 = ADD32(0, 0XCD);
    // 0x8028075C: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80280760: nop

    // 0x80280764: bne         $t9, $at, L_8028078C
    if (ctx->r25 != ctx->r1) {
        // 0x80280768: nop
    
            goto L_8028078C;
    }
    // 0x80280768: nop

    // 0x8028076C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280770: lwc1        $f18, -0x1C38($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C38);
    // 0x80280774: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80280778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028077C: nop

    // 0x80280780: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80280784: b           L_802807B8
    // 0x80280788: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
        goto L_802807B8;
    // 0x80280788: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
L_8028078C:
    // 0x8028078C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280790: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280794: addiu       $at, $zero, 0xD1
    ctx->r1 = ADD32(0, 0XD1);
    // 0x80280798: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8028079C: nop

    // 0x802807A0: bne         $t1, $at, L_802807B8
    if (ctx->r9 != ctx->r1) {
        // 0x802807A4: nop
    
            goto L_802807B8;
    }
    // 0x802807A4: nop

    // 0x802807A8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802807AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802807B0: nop

    // 0x802807B4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
L_802807B8:
    // 0x802807B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802807BC: lwc1        $f12, -0x1C28($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1C28);
    // 0x802807C0: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802807C4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802807C8: jal         0x802803BC
    // 0x802807CC: nop

    func_802803BC_code_extra_2(rdram, ctx);
        goto after_0;
    // 0x802807CC: nop

    after_0:
    // 0x802807D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802807D4: swc1        $f0, -0x1C28($at)
    MEM_W(-0X1C28, ctx->r1) = ctx->f0.u32l;
    // 0x802807D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802807DC: lwc1        $f10, -0x1C28($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C28);
    // 0x802807E0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802807E4: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802807E8: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x802807EC: swc1        $f16, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f16.u32l;
    // 0x802807F0: b           L_802807F8
    // 0x802807F4: nop

        goto L_802807F8;
    // 0x802807F4: nop

L_802807F8:
    // 0x802807F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802807FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280800: jr          $ra
    // 0x80280804: nop

    return;
    // 0x80280804: nop

;}
RECOMP_FUNC void func_80280A7C_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280A7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280A80: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280A84: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80280A88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280A8C: nop

    // 0x80280A90: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80280A94: nop

    // 0x80280A98: bc1f        L_80280AD0
    if (!c1cs) {
        // 0x80280A9C: nop
    
            goto L_80280AD0;
    }
    // 0x80280A9C: nop

    // 0x80280AA0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280AA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280AA8: nop

    // 0x80280AAC: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80280AB0: nop

    // 0x80280AB4: bc1f        L_80280AD0
    if (!c1cs) {
        // 0x80280AB8: nop
    
            goto L_80280AD0;
    }
    // 0x80280AB8: nop

    // 0x80280ABC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280AC0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280AC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80280AC8: b           L_80280B20
    // 0x80280ACC: swc1        $f10, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f10.u32l;
        goto L_80280B20;
    // 0x80280ACC: swc1        $f10, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f10.u32l;
L_80280AD0:
    // 0x80280AD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280AD4: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280AD8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280ADC: nop

    // 0x80280AE0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80280AE4: nop

    // 0x80280AE8: bc1f        L_80280B08
    if (!c1cs) {
        // 0x80280AEC: nop
    
            goto L_80280B08;
    }
    // 0x80280AEC: nop

    // 0x80280AF0: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x80280AF4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280AF8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280AFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280B00: b           L_80280B20
    // 0x80280B04: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
        goto L_80280B20;
    // 0x80280B04: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
L_80280B08:
    // 0x80280B08: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80280B0C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280B10: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280B14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280B18: nop

    // 0x80280B1C: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
L_80280B20:
    // 0x80280B20: jr          $ra
    // 0x80280B24: nop

    return;
    // 0x80280B24: nop

    // 0x80280B28: jr          $ra
    // 0x80280B2C: nop

    return;
    // 0x80280B2C: nop

;}
RECOMP_FUNC void func_8028109C_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028109C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802810A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802810A4: jal         0x80085D54
    // 0x802810A8: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x802810A8: nop

    after_0:
    // 0x802810AC: beq         $v0, $zero, L_802810BC
    if (ctx->r2 == 0) {
        // 0x802810B0: nop
    
            goto L_802810BC;
    }
    // 0x802810B0: nop

    // 0x802810B4: b           L_802810EC
    // 0x802810B8: nop

        goto L_802810EC;
    // 0x802810B8: nop

L_802810BC:
    // 0x802810BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802810C0: lw          $t6, -0x1C10($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1C10);
    // 0x802810C4: nop

    // 0x802810C8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802810CC: beq         $t7, $zero, L_802810E4
    if (ctx->r15 == 0) {
        // 0x802810D0: nop
    
            goto L_802810E4;
    }
    // 0x802810D0: nop

    // 0x802810D4: jal         0x80280F00
    // 0x802810D8: nop

    func_80280F00_code_extra_3(rdram, ctx);
        goto after_1;
    // 0x802810D8: nop

    after_1:
    // 0x802810DC: b           L_802810EC
    // 0x802810E0: nop

        goto L_802810EC;
    // 0x802810E0: nop

L_802810E4:
    // 0x802810E4: b           L_802810EC
    // 0x802810E8: nop

        goto L_802810EC;
    // 0x802810E8: nop

L_802810EC:
    // 0x802810EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802810F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802810F4: jr          $ra
    // 0x802810F8: nop

    return;
    // 0x802810F8: nop

;}
RECOMP_FUNC void func_802813E4_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802813E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802813E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802813EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802813F0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802813F4: nop

    // 0x802813F8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x802813FC: nop

    // 0x80281400: bne         $t7, $zero, L_802814A4
    if (ctx->r15 != 0) {
        // 0x80281404: nop
    
            goto L_802814A4;
    }
    // 0x80281404: nop

    // 0x80281408: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028140C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281410: nop

    // 0x80281414: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80281418: nop

    // 0x8028141C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80281420: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80281424: jal         0x8001819C
    // 0x80281428: nop

    Reset_LightSettings(rdram, ctx);
        goto after_0;
    // 0x80281428: nop

    after_0:
    // 0x8028142C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281430: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281434: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80281438: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x8028143C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281440: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281444: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80281448: nop

    // 0x8028144C: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x80281450: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281454: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281458: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028145C: nop

    // 0x80281460: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x80281464: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281468: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028146C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80281470: nop

    // 0x80281474: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x80281478: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8028147C: addiu       $t6, $t6, 0x5F34
    ctx->r14 = ADD32(ctx->r14, 0X5F34);
    // 0x80281480: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80281484: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028148C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80281490: jal         0x8001C0EC
    // 0x80281494: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281494: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80281498: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028149C: jal         0x8001BBDC
    // 0x802814A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x802814A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_802814A4:
    // 0x802814A4: jal         0x8001CD20
    // 0x802814A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_3;
    // 0x802814A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802814AC: jal         0x8001AD6C
    // 0x802814B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_4;
    // 0x802814B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x802814B4: b           L_802814BC
    // 0x802814B8: nop

        goto L_802814BC;
    // 0x802814B8: nop

L_802814BC:
    // 0x802814BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802814C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802814C4: jr          $ra
    // 0x802814C8: nop

    return;
    // 0x802814C8: nop

;}
RECOMP_FUNC void func_80280E74_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280E74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280E78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280E7C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80280E80: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x80280E84: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280E88: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280E8C: addiu       $t7, $zero, 0x12F
    ctx->r15 = ADD32(0, 0X12F);
    // 0x80280E90: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80280E94: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80280E98: addiu       $t9, $t9, 0x5F34
    ctx->r25 = ADD32(ctx->r25, 0X5F34);
    // 0x80280E9C: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80280EA0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80280EA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280EAC: jal         0x8001C0EC
    // 0x80280EB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80280EB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80280EB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280EB8: jal         0x8001B754
    // 0x80280EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80280EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80280EC0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80280EC4: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80280EC8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280ECC: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80280ED0: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80280ED4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280ED8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280EDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280EE0: nop

    // 0x80280EE4: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x80280EE8: b           L_80280EF0
    // 0x80280EEC: nop

        goto L_80280EF0;
    // 0x80280EEC: nop

L_80280EF0:
    // 0x80280EF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80280EF8: jr          $ra
    // 0x80280EFC: nop

    return;
    // 0x80280EFC: nop

;}
RECOMP_FUNC void func_80280724_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280724: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280728: lb          $t6, -0x1C0A($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C0A);
    // 0x8028072C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280730: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80280734: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80280738: lwc1        $f4, 0x1678($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1678);
    // 0x8028073C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280740: lwc1        $f6, -0x1C08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C08);
    // 0x80280744: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280748: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8028074C: swc1        $f8, -0x1BF8($at)
    MEM_W(-0X1BF8, ctx->r1) = ctx->f8.u32l;
    // 0x80280750: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280754: lb          $t8, -0x1C0A($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C0A);
    // 0x80280758: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028075C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80280760: sb          $t9, -0x1C0A($at)
    MEM_B(-0X1C0A, ctx->r1) = ctx->r25;
    // 0x80280764: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280768: lb          $t0, -0x1C0A($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C0A);
    // 0x8028076C: nop

    // 0x80280770: slti        $at, $t0, 0x74
    ctx->r1 = SIGNED(ctx->r8) < 0X74 ? 1 : 0;
    // 0x80280774: bne         $at, $zero, L_80280784
    if (ctx->r1 != 0) {
        // 0x80280778: nop
    
            goto L_80280784;
    }
    // 0x80280778: nop

    // 0x8028077C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280780: sb          $zero, -0x1C0A($at)
    MEM_B(-0X1C0A, ctx->r1) = 0;
L_80280784:
    // 0x80280784: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280788: lwc1        $f10, -0x1BF8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BF8);
    // 0x8028078C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80280790: nop

    // 0x80280794: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80280798: nop

    // 0x8028079C: bc1f        L_802807BC
    if (!c1cs) {
        // 0x802807A0: nop
    
            goto L_802807BC;
    }
    // 0x802807A0: nop

    // 0x802807A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802807A8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802807AC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802807B0: lwc1        $f18, -0x1BF8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1BF8);
    // 0x802807B4: b           L_802807DC
    // 0x802807B8: swc1        $f18, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f18.u32l;
        goto L_802807DC;
    // 0x802807B8: swc1        $f18, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f18.u32l;
L_802807BC:
    // 0x802807BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802807C0: lwc1        $f4, -0x1BF8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BF8);
    // 0x802807C4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x802807C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802807CC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802807D0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802807D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802807D8: swc1        $f8, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f8.u32l;
L_802807DC:
    // 0x802807DC: jr          $ra
    // 0x802807E0: nop

    return;
    // 0x802807E0: nop

    // 0x802807E4: jr          $ra
    // 0x802807E8: nop

    return;
    // 0x802807E8: nop

;}
RECOMP_FUNC void func_802804F8_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802804F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802804FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280500: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280504: sw          $zero, -0x1C10($at)
    MEM_W(-0X1C10, ctx->r1) = 0;
    // 0x80280508: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028050C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280510: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80280514: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280518: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8028051C: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80280520: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x80280524: jal         0x800843CC
    // 0x80280528: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x80280528: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x8028052C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280530: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x80280534: nop

    // 0x80280538: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8028053C: beq         $t8, $zero, L_80280558
    if (ctx->r24 == 0) {
        // 0x80280540: nop
    
            goto L_80280558;
    }
    // 0x80280540: nop

    // 0x80280544: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280548: lw          $t9, -0x1C10($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1C10);
    // 0x8028054C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280550: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80280554: sw          $t0, -0x1C10($at)
    MEM_W(-0X1C10, ctx->r1) = ctx->r8;
L_80280558:
    // 0x80280558: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028055C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280560: nop

    // 0x80280564: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80280568: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8028056C: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80280570: jal         0x800843CC
    // 0x80280574: nop

    func_800843CC(rdram, ctx);
        goto after_1;
    // 0x80280574: nop

    after_1:
    // 0x80280578: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028057C: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x80280580: nop

    // 0x80280584: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80280588: bne         $t3, $zero, L_802805D8
    if (ctx->r11 != 0) {
        // 0x8028058C: nop
    
            goto L_802805D8;
    }
    // 0x8028058C: nop

    // 0x80280590: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280594: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280598: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028059C: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x802805A0: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x802805A4: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x802805A8: nop

    // 0x802805AC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x802805B0: nop

    // 0x802805B4: bc1f        L_802805D0
    if (!c1cs) {
        // 0x802805B8: nop
    
            goto L_802805D0;
    }
    // 0x802805B8: nop

    // 0x802805BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802805C0: lw          $t6, -0x1C10($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1C10);
    // 0x802805C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802805C8: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x802805CC: sw          $t7, -0x1C10($at)
    MEM_W(-0X1C10, ctx->r1) = ctx->r15;
L_802805D0:
    // 0x802805D0: b           L_802805EC
    // 0x802805D4: nop

        goto L_802805EC;
    // 0x802805D4: nop

L_802805D8:
    // 0x802805D8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802805DC: lw          $t8, -0x1C10($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1C10);
    // 0x802805E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802805E4: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x802805E8: sw          $t9, -0x1C10($at)
    MEM_W(-0X1C10, ctx->r1) = ctx->r25;
L_802805EC:
    // 0x802805EC: b           L_802805F4
    // 0x802805F0: nop

        goto L_802805F4;
    // 0x802805F0: nop

L_802805F4:
    // 0x802805F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802805F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802805FC: jr          $ra
    // 0x80280600: nop

    return;
    // 0x80280600: nop

;}
RECOMP_FUNC void func_802807EC_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802807EC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802807F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802807F4: lwc1        $f4, -0x1C6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x802807F8: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x802807FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280800: nop

    // 0x80280804: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80280808: nop

    // 0x8028080C: bc1f        L_80280824
    if (!c1cs) {
        // 0x80280810: nop
    
            goto L_80280824;
    }
    // 0x80280810: nop

    // 0x80280814: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x80280818: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028081C: b           L_80280900
    // 0x80280820: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
        goto L_80280900;
    // 0x80280820: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
L_80280824:
    // 0x80280824: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280828: lwc1        $f10, -0x1C6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x8028082C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80280830: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280834: nop

    // 0x80280838: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8028083C: nop

    // 0x80280840: bc1f        L_80280858
    if (!c1cs) {
        // 0x80280844: nop
    
            goto L_80280858;
    }
    // 0x80280844: nop

    // 0x80280848: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x8028084C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280850: b           L_80280900
    // 0x80280854: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
        goto L_80280900;
    // 0x80280854: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
L_80280858:
    // 0x80280858: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028085C: lwc1        $f4, -0x1C6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80280860: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280864: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280868: nop

    // 0x8028086C: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80280870: nop

    // 0x80280874: bc1f        L_80280888
    if (!c1cs) {
        // 0x80280878: nop
    
            goto L_80280888;
    }
    // 0x80280878: nop

    // 0x8028087C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80280880: b           L_80280900
    // 0x80280884: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
        goto L_80280900;
    // 0x80280884: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
L_80280888:
    // 0x80280888: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028088C: lwc1        $f10, -0x1C6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80280890: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80280894: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280898: nop

    // 0x8028089C: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x802808A0: nop

    // 0x802808A4: bc1f        L_802808BC
    if (!c1cs) {
        // 0x802808A8: nop
    
            goto L_802808BC;
    }
    // 0x802808A8: nop

    // 0x802808AC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802808B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802808B4: b           L_80280900
    // 0x802808B8: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
        goto L_80280900;
    // 0x802808B8: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
L_802808BC:
    // 0x802808BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802808C0: lwc1        $f4, -0x1C6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x802808C4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802808C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802808CC: nop

    // 0x802808D0: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x802808D4: nop

    // 0x802808D8: bc1f        L_802808F0
    if (!c1cs) {
        // 0x802808DC: nop
    
            goto L_802808F0;
    }
    // 0x802808DC: nop

    // 0x802808E0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802808E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802808E8: b           L_80280900
    // 0x802808EC: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
        goto L_80280900;
    // 0x802808EC: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
L_802808F0:
    // 0x802808F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802808F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802808F8: nop

    // 0x802808FC: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
L_80280900:
    // 0x80280900: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280904: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280908: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8028090C: lwc1        $f16, 0x44($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80280910: nop

    // 0x80280914: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80280918: nop

    // 0x8028091C: bc1f        L_8028098C
    if (!c1cs) {
        // 0x80280920: nop
    
            goto L_8028098C;
    }
    // 0x80280920: nop

    // 0x80280924: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280928: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028092C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280930: lwc1        $f4, 0x44($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80280934: lwc1        $f9, 0x1870($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1870);
    // 0x80280938: lwc1        $f8, 0x1874($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1874);
    // 0x8028093C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280940: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80280944: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280948: swc1        $f16, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f16.u32l;
    // 0x8028094C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280950: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280954: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280958: lwc1        $f18, 0x44($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X44);
    // 0x8028095C: nop

    // 0x80280960: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80280964: nop

    // 0x80280968: bc1f        L_80280984
    if (!c1cs) {
        // 0x8028096C: nop
    
            goto L_80280984;
    }
    // 0x8028096C: nop

    // 0x80280970: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280974: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280978: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8028097C: nop

    // 0x80280980: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
L_80280984:
    // 0x80280984: b           L_802809EC
    // 0x80280988: nop

        goto L_802809EC;
    // 0x80280988: nop

L_8028098C:
    // 0x8028098C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280990: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280994: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280998: lwc1        $f8, 0x44($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X44);
    // 0x8028099C: lwc1        $f17, 0x1878($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1878);
    // 0x802809A0: lwc1        $f16, 0x187C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X187C);
    // 0x802809A4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802809A8: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x802809AC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802809B0: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x802809B4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802809B8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802809BC: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802809C0: lwc1        $f6, 0x44($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X44);
    // 0x802809C4: nop

    // 0x802809C8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802809CC: nop

    // 0x802809D0: bc1f        L_802809EC
    if (!c1cs) {
        // 0x802809D4: nop
    
            goto L_802809EC;
    }
    // 0x802809D4: nop

    // 0x802809D8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802809DC: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802809E0: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802809E4: nop

    // 0x802809E8: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
L_802809EC:
    // 0x802809EC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802809F0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802809F4: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802809F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802809FC: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80280A00: nop

    // 0x80280A04: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80280A08: nop

    // 0x80280A0C: bc1f        L_80280A2C
    if (!c1cs) {
        // 0x80280A10: nop
    
            goto L_80280A2C;
    }
    // 0x80280A10: nop

    // 0x80280A14: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x80280A18: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280A1C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280A20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280A24: b           L_80280A6C
    // 0x80280A28: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
        goto L_80280A6C;
    // 0x80280A28: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
L_80280A2C:
    // 0x80280A2C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280A30: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280A34: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280A38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280A3C: lwc1        $f6, 0x44($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80280A40: nop

    // 0x80280A44: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80280A48: nop

    // 0x80280A4C: bc1f        L_80280A6C
    if (!c1cs) {
        // 0x80280A50: nop
    
            goto L_80280A6C;
    }
    // 0x80280A50: nop

    // 0x80280A54: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280A58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280A5C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280A60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280A64: nop

    // 0x80280A68: swc1        $f10, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f10.u32l;
L_80280A6C:
    // 0x80280A6C: b           L_80280A74
    // 0x80280A70: nop

        goto L_80280A74;
    // 0x80280A70: nop

L_80280A74:
    // 0x80280A74: jr          $ra
    // 0x80280A78: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80280A78: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802814CC_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802814CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802814D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802814D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802814D8: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x802814DC: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x802814E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802814E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802814E8: jal         0x8001BD44
    // 0x802814EC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x802814EC: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_0:
    // 0x802814F0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x802814F4: addiu       $t7, $t7, 0x5F34
    ctx->r15 = ADD32(ctx->r15, 0X5F34);
    // 0x802814F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802814FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80281508: jal         0x8001C0EC
    // 0x8028150C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8028150C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80281510: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281514: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281518: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8028151C: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
    // 0x80281520: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281524: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281528: addiu       $t0, $zero, 0x12D
    ctx->r8 = ADD32(0, 0X12D);
    // 0x8028152C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80281530: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281534: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281538: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028153C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281540: nop

    // 0x80281544: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
    // 0x80281548: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028154C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281550: swc1        $f6, -0x1BF8($at)
    MEM_W(-0X1BF8, ctx->r1) = ctx->f6.u32l;
    // 0x80281554: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281558: sb          $zero, -0x1C0A($at)
    MEM_B(-0X1C0A, ctx->r1) = 0;
    // 0x8028155C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80281560: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281564: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281568: swc1        $f8, -0x1C08($at)
    MEM_W(-0X1C08, ctx->r1) = ctx->f8.u32l;
    // 0x8028156C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281570: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281574: swc1        $f10, -0x1C00($at)
    MEM_W(-0X1C00, ctx->r1) = ctx->f10.u32l;
    // 0x80281578: b           L_80281580
    // 0x8028157C: nop

        goto L_80281580;
    // 0x8028157C: nop

L_80281580:
    // 0x80281580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80281584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281588: jr          $ra
    // 0x8028158C: nop

    return;
    // 0x8028158C: nop

;}
