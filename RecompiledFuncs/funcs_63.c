#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80331594_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331594: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331598: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x8033159C: nop

    // 0x803315A0: bne         $t6, $zero, L_803315BC
    if (ctx->r14 != 0) {
        // 0x803315A4: nop
    
            goto L_803315BC;
    }
    // 0x803315A4: nop

    // 0x803315A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803315AC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803315B0: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x803315B4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803315B8: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
L_803315BC:
    // 0x803315BC: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803315C0: lw          $t8, 0x26F8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26F8);
    // 0x803315C4: nop

    // 0x803315C8: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x803315CC: bne         $at, $zero, L_803315F4
    if (ctx->r1 != 0) {
        // 0x803315D0: nop
    
            goto L_803315F4;
    }
    // 0x803315D0: nop

    // 0x803315D4: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803315D8: lw          $t9, 0x26FC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X26FC);
    // 0x803315DC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803315E0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803315E4: sw          $t0, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r8;
    // 0x803315E8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803315EC: b           L_80331608
    // 0x803315F0: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
        goto L_80331608;
    // 0x803315F0: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_803315F4:
    // 0x803315F4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803315F8: lw          $t1, 0x26F8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X26F8);
    // 0x803315FC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331600: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80331604: sw          $t2, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r10;
L_80331608:
    // 0x80331608: jr          $ra
    // 0x8033160C: nop

    return;
    // 0x8033160C: nop

    // 0x80331610: jr          $ra
    // 0x80331614: nop

    return;
    // 0x80331614: nop

;}
RECOMP_FUNC void func_80330E2C_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330E30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330E34: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330E38: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x80330E3C: nop

    // 0x80330E40: bne         $t6, $zero, L_80330E9C
    if (ctx->r14 != 0) {
        // 0x80330E44: nop
    
            goto L_80330E9C;
    }
    // 0x80330E44: nop

    // 0x80330E48: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330E4C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E50: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x80330E54: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E58: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
    // 0x80330E5C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330E60: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80330E64: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80330E68: sh          $t8, 0x1AE6($t9)
    MEM_H(0X1AE6, ctx->r25) = ctx->r24;
    // 0x80330E6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330E70: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330E74: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330E78: swc1        $f4, 0x1B18($t0)
    MEM_W(0X1B18, ctx->r8) = ctx->f4.u32l;
    // 0x80330E7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330E80: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80330E84: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80330E88: swc1        $f6, 0x1B1C($t1)
    MEM_W(0X1B1C, ctx->r9) = ctx->f6.u32l;
    // 0x80330E8C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330E90: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330E94: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330E98: swc1        $f8, 0x1B20($t2)
    MEM_W(0X1B20, ctx->r10) = ctx->f8.u32l;
L_80330E9C:
    // 0x80330E9C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330EA0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330EA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330EA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330EAC: lwc1        $f10, 0x1A4C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1A4C);
    // 0x80330EB0: nop

    // 0x80330EB4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80330EB8: nop

    // 0x80330EBC: bc1f        L_80330F3C
    if (!c1cs) {
        // 0x80330EC0: nop
    
            goto L_80330F3C;
    }
    // 0x80330EC0: nop

    // 0x80330EC4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330EC8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80330ECC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330ED0: lwc1        $f18, 0x1A4C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X1A4C);
    // 0x80330ED4: lwc1        $f7, 0x2680($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X2680);
    // 0x80330ED8: lwc1        $f6, 0x2684($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2684);
    // 0x80330EDC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80330EE0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80330EE4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80330EE8: swc1        $f10, 0x1A4C($t4)
    MEM_W(0X1A4C, ctx->r12) = ctx->f10.u32l;
    // 0x80330EEC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330EF0: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80330EF4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330EF8: lwc1        $f16, 0x1A50($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X1A50);
    // 0x80330EFC: lwc1        $f5, 0x2688($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X2688);
    // 0x80330F00: lwc1        $f4, 0x268C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X268C);
    // 0x80330F04: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80330F08: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80330F0C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80330F10: swc1        $f8, 0x1A50($t5)
    MEM_W(0X1A50, ctx->r13) = ctx->f8.u32l;
    // 0x80330F14: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330F18: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330F1C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330F20: lwc1        $f10, 0x1A54($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1A54);
    // 0x80330F24: lwc1        $f19, 0x2690($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X2690);
    // 0x80330F28: lwc1        $f18, 0x2694($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2694);
    // 0x80330F2C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330F30: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80330F34: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80330F38: swc1        $f6, 0x1A54($t6)
    MEM_W(0X1A54, ctx->r14) = ctx->f6.u32l;
L_80330F3C:
    // 0x80330F3C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330F40: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330F44: lh          $t8, 0x1AE6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X1AE6);
    // 0x80330F48: nop

    // 0x80330F4C: beq         $t8, $zero, L_80330FBC
    if (ctx->r24 == 0) {
        // 0x80330F50: nop
    
            goto L_80330FBC;
    }
    // 0x80330F50: nop

    // 0x80330F54: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330F58: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80330F5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330F60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330F64: lwc1        $f8, 0x1A40($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1A40);
    // 0x80330F68: nop

    // 0x80330F6C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80330F70: swc1        $f16, 0x1A40($t9)
    MEM_W(0X1A40, ctx->r25) = ctx->f16.u32l;
    // 0x80330F74: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330F78: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330F7C: lh          $t1, 0x1AE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X1AE6);
    // 0x80330F80: nop

    // 0x80330F84: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80330F88: sh          $t2, 0x1AE6($t0)
    MEM_H(0X1AE6, ctx->r8) = ctx->r10;
    // 0x80330F8C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330F90: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330F94: lh          $t4, 0x1AE6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X1AE6);
    // 0x80330F98: nop

    // 0x80330F9C: bne         $t4, $zero, L_80330FB4
    if (ctx->r12 != 0) {
        // 0x80330FA0: nop
    
            goto L_80330FB4;
    }
    // 0x80330FA0: nop

    // 0x80330FA4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330FA8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330FAC: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80330FB0: swc1        $f18, 0x1B18($t5)
    MEM_W(0X1B18, ctx->r13) = ctx->f18.u32l;
L_80330FB4:
    // 0x80330FB4: b           L_80331094
    // 0x80330FB8: nop

        goto L_80331094;
    // 0x80330FB8: nop

L_80330FBC:
    // 0x80330FBC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330FC0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330FC4: lwc1        $f4, 0x1A40($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1A40);
    // 0x80330FC8: lwc1        $f6, 0x1B18($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1B18);
    // 0x80330FCC: nop

    // 0x80330FD0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330FD4: swc1        $f8, 0x1A40($t6)
    MEM_W(0X1A40, ctx->r14) = ctx->f8.u32l;
    // 0x80330FD8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330FDC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330FE0: lwc1        $f10, 0x1A44($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X1A44);
    // 0x80330FE4: lwc1        $f16, 0x1B1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1B1C);
    // 0x80330FE8: nop

    // 0x80330FEC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330FF0: swc1        $f18, 0x1A44($t7)
    MEM_W(0X1A44, ctx->r15) = ctx->f18.u32l;
    // 0x80330FF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330FF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330FFC: lwc1        $f4, 0x1A5C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1A5C);
    // 0x80331000: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80331004: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80331008: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033100C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331010: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80331014: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80331018: swc1        $f16, 0x1A5C($t8)
    MEM_W(0X1A5C, ctx->r24) = ctx->f16.u32l;
    // 0x8033101C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331020: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80331024: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331028: lwc1        $f18, 0x1A60($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1A60);
    // 0x8033102C: lwc1        $f7, 0x2698($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X2698);
    // 0x80331030: lwc1        $f6, 0x269C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X269C);
    // 0x80331034: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80331038: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8033103C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80331040: swc1        $f10, 0x1A60($t9)
    MEM_W(0X1A60, ctx->r25) = ctx->f10.u32l;
    // 0x80331044: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331048: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033104C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331050: lwc1        $f16, 0x1B18($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1B18);
    // 0x80331054: lwc1        $f5, 0x26A0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X26A0);
    // 0x80331058: lwc1        $f4, 0x26A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X26A4);
    // 0x8033105C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80331060: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80331064: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80331068: swc1        $f8, 0x1B18($t1)
    MEM_W(0X1B18, ctx->r9) = ctx->f8.u32l;
    // 0x8033106C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331070: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331074: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331078: lwc1        $f10, 0x1B1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1B1C);
    // 0x8033107C: lwc1        $f19, 0x26A8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X26A8);
    // 0x80331080: lwc1        $f18, 0x26AC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X26AC);
    // 0x80331084: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331088: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8033108C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80331090: swc1        $f6, 0x1B1C($t2)
    MEM_W(0X1B1C, ctx->r10) = ctx->f6.u32l;
L_80331094:
    // 0x80331094: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331098: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033109C: lwc1        $f8, 0x1A48($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1A48);
    // 0x803310A0: lwc1        $f10, 0x1B20($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1B20);
    // 0x803310A4: nop

    // 0x803310A8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803310AC: swc1        $f16, 0x1A48($t0)
    MEM_W(0X1A48, ctx->r8) = ctx->f16.u32l;
    // 0x803310B0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803310B4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803310B8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803310BC: lwc1        $f18, 0x1B20($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X1B20);
    // 0x803310C0: lwc1        $f7, 0x26B0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X26B0);
    // 0x803310C4: lwc1        $f6, 0x26B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X26B4);
    // 0x803310C8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x803310CC: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x803310D0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803310D4: swc1        $f10, 0x1B20($t3)
    MEM_W(0X1B20, ctx->r11) = ctx->f10.u32l;
    // 0x803310D8: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803310DC: lw          $t4, 0x26F8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X26F8);
    // 0x803310E0: nop

    // 0x803310E4: bne         $t4, $zero, L_8033110C
    if (ctx->r12 != 0) {
        // 0x803310E8: nop
    
            goto L_8033110C;
    }
    // 0x803310E8: nop

    // 0x803310EC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803310F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803310F4: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x803310F8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803310FC: jal         0x800178D4
    // 0x80331100: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x80331100: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80331104: b           L_8033116C
    // 0x80331108: nop

        goto L_8033116C;
    // 0x80331108: nop

L_8033110C:
    // 0x8033110C: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80331110: lw          $t5, 0x26F8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X26F8);
    // 0x80331114: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x80331118: bne         $t5, $at, L_80331140
    if (ctx->r13 != ctx->r1) {
        // 0x8033111C: nop
    
            goto L_80331140;
    }
    // 0x8033111C: nop

    // 0x80331120: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331128: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    // 0x8033112C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331130: jal         0x800178D4
    // 0x80331134: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80331134: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80331138: b           L_8033116C
    // 0x8033113C: nop

        goto L_8033116C;
    // 0x8033113C: nop

L_80331140:
    // 0x80331140: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331144: lw          $t6, 0x26F8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X26F8);
    // 0x80331148: nop

    // 0x8033114C: slti        $at, $t6, 0x5B
    ctx->r1 = SIGNED(ctx->r14) < 0X5B ? 1 : 0;
    // 0x80331150: bne         $at, $zero, L_8033116C
    if (ctx->r1 != 0) {
        // 0x80331154: nop
    
            goto L_8033116C;
    }
    // 0x80331154: nop

    // 0x80331158: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8033115C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331160: sw          $t7, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r15;
    // 0x80331164: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331168: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_8033116C:
    // 0x8033116C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331170: lw          $t8, 0x26F8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26F8);
    // 0x80331174: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331178: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033117C: sw          $t9, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r25;
    // 0x80331180: b           L_80331188
    // 0x80331184: nop

        goto L_80331188;
    // 0x80331184: nop

L_80331188:
    // 0x80331188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033118C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331190: jr          $ra
    // 0x80331194: nop

    return;
    // 0x80331194: nop

;}
RECOMP_FUNC void func_8033074C_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033074C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330754: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80330758: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8033075C:
    // 0x8033075C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330760: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80330764: beq         $t7, $at, L_80330800
    if (ctx->r15 == ctx->r1) {
        // 0x80330768: nop
    
            goto L_80330800;
    }
    // 0x80330768: nop

    // 0x8033076C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80330770: beq         $t7, $at, L_80330800
    if (ctx->r15 == ctx->r1) {
        // 0x80330774: nop
    
            goto L_80330800;
    }
    // 0x80330774: nop

    // 0x80330778: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033077C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330780: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330784: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330788: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033078C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330790: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330794: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330798: lh          $t0, 0x41F4($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F4);
    // 0x8033079C: nop

    // 0x803307A0: beq         $t0, $zero, L_80330800
    if (ctx->r8 == 0) {
        // 0x803307A4: nop
    
            goto L_80330800;
    }
    // 0x803307A4: nop

    // 0x803307A8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803307AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307B0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803307B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803307B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803307BC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803307C0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803307C4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803307C8: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803307CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x803307D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803307D4: jal         0x80015538
    // 0x803307D8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803307D8: nop

    after_0:
    // 0x803307DC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803307E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307E4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803307E8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803307EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803307F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803307F4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803307F8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803307FC: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
L_80330800:
    // 0x80330800: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330804: nop

    // 0x80330808: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8033080C: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x80330810: bne         $at, $zero, L_8033075C
    if (ctx->r1 != 0) {
        // 0x80330814: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8033075C;
    }
    // 0x80330814: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80330818: b           L_80330820
    // 0x8033081C: nop

        goto L_80330820;
    // 0x8033081C: nop

L_80330820:
    // 0x80330820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330824: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330828: jr          $ra
    // 0x8033082C: nop

    return;
    // 0x8033082C: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330008: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8033000C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80330010: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80330014: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80330018: addiu       $t6, $zero, 0x49
    ctx->r14 = ADD32(0, 0X49);
    // 0x8033001C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80330020: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330024: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80330028: blez        $t7, L_80330164
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8033002C: nop
    
            goto L_80330164;
    }
    // 0x8033002C: nop

L_80330030:
    // 0x80330030: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80330034: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80330038: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8033003C: mfhi        $t9
    ctx->r25 = hi;
    // 0x80330040: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80330044: nop

    // 0x80330048: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8033004C: nop

    // 0x80330050: bne         $t0, $zero, L_80330060
    if (ctx->r8 != 0) {
        // 0x80330054: nop
    
            goto L_80330060;
    }
    // 0x80330054: nop

    // 0x80330058: b           L_8033006C
    // 0x8033005C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_8033006C;
    // 0x8033005C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80330060:
    // 0x80330060: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330064: nop

    // 0x80330068: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_8033006C:
    // 0x8033006C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80330070: jal         0x8001A928
    // 0x80330074: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80330074: nop

    after_0:
    // 0x80330078: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033007C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80330080: jal         0x80060E40
    // 0x80330084: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x80330084: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    after_1:
    // 0x80330088: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8033008C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330090: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330094: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80330098: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033009C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803300A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803300A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803300A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803300AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300B0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803300B4: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x803300B8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803300BC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x803300C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803300C4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x803300C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300D0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803300D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803300DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300E0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803300E4: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x803300E8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803300EC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x803300F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803300F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803300F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803300FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330100: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330104: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330108: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033010C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330110: swc1        $f16, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f16.u32l;
    // 0x80330114: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80330118: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8033011C: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80330120: mflo        $t1
    ctx->r9 = lo;
    // 0x80330124: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80330128: nop

    // 0x8033012C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330130: nop

    // 0x80330134: addiu       $t3, $t2, -0x10
    ctx->r11 = ADD32(ctx->r10, -0X10);
    // 0x80330138: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8033013C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80330140: nop

    // 0x80330144: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80330148: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8033014C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330150: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330154: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80330158: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8033015C: bne         $at, $zero, L_80330030
    if (ctx->r1 != 0) {
        // 0x80330160: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80330030;
    }
    // 0x80330160: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_80330164:
    // 0x80330164: b           L_8033016C
    // 0x80330168: nop

        goto L_8033016C;
    // 0x80330168: nop

L_8033016C:
    // 0x8033016C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330174: jr          $ra
    // 0x80330178: nop

    return;
    // 0x80330178: nop

;}
RECOMP_FUNC void func_803313E4_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803313E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803313E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803313EC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803313F0: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x803313F4: nop

    // 0x803313F8: bne         $t6, $zero, L_80331414
    if (ctx->r14 != 0) {
        // 0x803313FC: nop
    
            goto L_80331414;
    }
    // 0x803313FC: nop

    // 0x80331400: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331404: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331408: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x8033140C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331410: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
L_80331414:
    // 0x80331414: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331418: lw          $t8, 0x26F8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26F8);
    // 0x8033141C: nop

    // 0x80331420: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x80331424: bne         $at, $zero, L_80331568
    if (ctx->r1 != 0) {
        // 0x80331428: nop
    
            goto L_80331568;
    }
    // 0x80331428: nop

    // 0x8033142C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331430: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
    // 0x80331434: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331438: lw          $t9, 0x26F0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X26F0);
    // 0x8033143C: nop

    // 0x80331440: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80331444: beq         $at, $zero, L_80331458
    if (ctx->r1 == 0) {
        // 0x80331448: nop
    
            goto L_80331458;
    }
    // 0x80331448: nop

    // 0x8033144C: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x80331450: b           L_80331460
    // 0x80331454: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
        goto L_80331460;
    // 0x80331454: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80331458:
    // 0x80331458: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x8033145C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80331460:
    // 0x80331460: jal         0x80330830
    // 0x80331464: nop

    func_80330830_unk_bin_7(rdram, ctx);
        goto after_0;
    // 0x80331464: nop

    after_0:
    // 0x80331468: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033146C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331470: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x80331474: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331478: jal         0x800178D4
    // 0x8033147C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x8033147C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80331480: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331484: lw          $t2, 0x26F4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X26F4);
    // 0x80331488: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033148C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80331490: sw          $t3, 0x26F4($at)
    MEM_W(0X26F4, ctx->r1) = ctx->r11;
    // 0x80331494: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331498: lw          $t4, 0x26F4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X26F4);
    // 0x8033149C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803314A0: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x803314A4: mflo        $t5
    ctx->r13 = lo;
    // 0x803314A8: sb          $t5, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r13;
    // 0x803314AC: nop

    // 0x803314B0: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803314B4: lw          $t6, 0x26F0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X26F0);
    // 0x803314B8: lb          $t8, 0x22($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X22);
    // 0x803314BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803314C0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803314C4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803314C8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x803314CC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x803314D0: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x803314D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803314D8: lbu         $t1, 0x3B3C($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3B3C);
    // 0x803314DC: sll         $t2, $t8, 3
    ctx->r10 = S32(ctx->r24 << 3);
    // 0x803314E0: subu        $t2, $t2, $t8
    ctx->r10 = SUB32(ctx->r10, ctx->r24);
    // 0x803314E4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x803314E8: sb          $t3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r11;
    // 0x803314EC: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803314F0: lw          $t4, 0x26F4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X26F4);
    // 0x803314F4: lbu         $t5, 0x23($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X23);
    // 0x803314F8: nop

    // 0x803314FC: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80331500: bne         $at, $zero, L_80331520
    if (ctx->r1 != 0) {
        // 0x80331504: nop
    
            goto L_80331520;
    }
    // 0x80331504: nop

    // 0x80331508: lb          $t6, 0x22($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X22);
    // 0x8033150C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331510: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80331514: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80331518: addiu       $t9, $t7, 0x7
    ctx->r25 = ADD32(ctx->r15, 0X7);
    // 0x8033151C: sw          $t9, 0x26F4($at)
    MEM_W(0X26F4, ctx->r1) = ctx->r25;
L_80331520:
    // 0x80331520: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80331524: lw          $t0, 0x26F4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X26F4);
    // 0x80331528: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033152C: nop

    // 0x80331530: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80331534: bne         $at, $zero, L_80331560
    if (ctx->r1 != 0) {
        // 0x80331538: nop
    
            goto L_80331560;
    }
    // 0x80331538: nop

    // 0x8033153C: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80331540: lw          $t1, 0x26FC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X26FC);
    // 0x80331544: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331548: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8033154C: sw          $t2, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r10;
    // 0x80331550: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331554: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
    // 0x80331558: b           L_80331584
    // 0x8033155C: nop

        goto L_80331584;
    // 0x8033155C: nop

L_80331560:
    // 0x80331560: b           L_8033157C
    // 0x80331564: nop

        goto L_8033157C;
    // 0x80331564: nop

L_80331568:
    // 0x80331568: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x8033156C: lw          $t3, 0x26F8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X26F8);
    // 0x80331570: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331574: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331578: sw          $t4, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r12;
L_8033157C:
    // 0x8033157C: b           L_80331584
    // 0x80331580: nop

        goto L_80331584;
    // 0x80331580: nop

L_80331584:
    // 0x80331584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033158C: jr          $ra
    // 0x80331590: nop

    return;
    // 0x80331590: nop

;}
RECOMP_FUNC void func_80331750_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331750: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331758: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x8033175C: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x80331760: nop

    // 0x80331764: bne         $t6, $zero, L_80331790
    if (ctx->r14 != 0) {
        // 0x80331768: nop
    
            goto L_80331790;
    }
    // 0x80331768: nop

    // 0x8033176C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331770: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331774: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x80331778: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033177C: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
    // 0x80331780: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331784: sw          $zero, 0x26F4($at)
    MEM_W(0X26F4, ctx->r1) = 0;
    // 0x80331788: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033178C: sw          $zero, 0x270C($at)
    MEM_W(0X270C, ctx->r1) = 0;
L_80331790:
    // 0x80331790: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331794: lw          $t8, 0x26F8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26F8);
    // 0x80331798: nop

    // 0x8033179C: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x803317A0: bne         $at, $zero, L_80331A48
    if (ctx->r1 != 0) {
        // 0x803317A4: nop
    
            goto L_80331A48;
    }
    // 0x803317A4: nop

    // 0x803317A8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803317AC: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
    // 0x803317B0: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803317B4: lw          $t9, 0x26F0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X26F0);
    // 0x803317B8: nop

    // 0x803317BC: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x803317C0: beq         $at, $zero, L_803317D4
    if (ctx->r1 == 0) {
        // 0x803317C4: nop
    
            goto L_803317D4;
    }
    // 0x803317C4: nop

    // 0x803317C8: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x803317CC: b           L_803317DC
    // 0x803317D0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
        goto L_803317DC;
    // 0x803317D0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_803317D4:
    // 0x803317D4: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x803317D8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_803317DC:
    // 0x803317DC: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803317E0: lw          $t2, 0x26F4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X26F4);
    // 0x803317E4: nop

    // 0x803317E8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x803317EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803317F0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803317F4: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x803317F8: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803317FC: lw          $t3, 0x26F0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X26F0);
    // 0x80331800: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80331804: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331808: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033180C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331810: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331814: mflo        $t6
    ctx->r14 = lo;
    // 0x80331818: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8033181C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80331820: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x80331824: mfhi        $t9
    ctx->r25 = hi;
    // 0x80331828: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8033182C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331830: lbu         $t1, 0x4808($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X4808);
    // 0x80331834: nop

    // 0x80331838: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x8033183C: sb          $t2, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r10;
    // 0x80331840: lbu         $t3, 0x29($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X29);
    // 0x80331844: nop

    // 0x80331848: blez        $t3, L_8033185C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8033184C: nop
    
            goto L_8033185C;
    }
    // 0x8033184C: nop

    // 0x80331850: slti        $at, $t3, 0x6
    ctx->r1 = SIGNED(ctx->r11) < 0X6 ? 1 : 0;
    // 0x80331854: bne         $at, $zero, L_8033186C
    if (ctx->r1 != 0) {
        // 0x80331858: nop
    
            goto L_8033186C;
    }
    // 0x80331858: nop

L_8033185C:
    // 0x8033185C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331860: nop

    // 0x80331864: bne         $t6, $zero, L_803318E4
    if (ctx->r14 != 0) {
        // 0x80331868: nop
    
            goto L_803318E4;
    }
    // 0x80331868: nop

L_8033186C:
    // 0x8033186C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331870: nop

    // 0x80331874: bne         $t4, $zero, L_8033189C
    if (ctx->r12 != 0) {
        // 0x80331878: nop
    
            goto L_8033189C;
    }
    // 0x80331878: nop

    // 0x8033187C: lbu         $t7, 0x29($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X29);
    // 0x80331880: nop

    // 0x80331884: beq         $t7, $zero, L_80331898
    if (ctx->r15 == 0) {
        // 0x80331888: nop
    
            goto L_80331898;
    }
    // 0x80331888: nop

    // 0x8033188C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80331890: bne         $t7, $at, L_8033189C
    if (ctx->r15 != ctx->r1) {
        // 0x80331894: nop
    
            goto L_8033189C;
    }
    // 0x80331894: nop

L_80331898:
    // 0x80331898: sb          $zero, 0x29($sp)
    MEM_B(0X29, ctx->r29) = 0;
L_8033189C:
    // 0x8033189C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803318A0: lw          $t8, 0x270C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X270C);
    // 0x803318A4: lbu         $t5, 0x29($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X29);
    // 0x803318A8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803318AC: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x803318B0: sw          $t9, 0x270C($at)
    MEM_W(0X270C, ctx->r1) = ctx->r25;
    // 0x803318B4: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x803318B8: lw          $a0, 0x270C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X270C);
    // 0x803318BC: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x803318C0: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    // 0x803318C4: jal         0x80330000
    // 0x803318C8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_80330000_unk_bin_7(rdram, ctx);
        goto after_0;
    // 0x803318C8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x803318CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803318D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803318D4: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x803318D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803318DC: jal         0x800178D4
    // 0x803318E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x803318E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_803318E4:
    // 0x803318E4: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x803318E8: lw          $t0, 0x26F4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X26F4);
    // 0x803318EC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803318F0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803318F4: sw          $t1, 0x26F4($at)
    MEM_W(0X26F4, ctx->r1) = ctx->r9;
    // 0x803318F8: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803318FC: lw          $t2, 0x26F4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X26F4);
    // 0x80331900: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80331904: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x80331908: mflo        $t3
    ctx->r11 = lo;
    // 0x8033190C: sb          $t3, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = ctx->r11;
    // 0x80331910: nop

    // 0x80331914: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331918: lw          $t6, 0x26F0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X26F0);
    // 0x8033191C: lb          $t7, 0x2A($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2A);
    // 0x80331920: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80331924: subu        $t4, $t4, $t6
    ctx->r12 = SUB32(ctx->r12, ctx->r14);
    // 0x80331928: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8033192C: sll         $t5, $t7, 3
    ctx->r13 = S32(ctx->r15 << 3);
    // 0x80331930: addu        $t8, $t4, $t5
    ctx->r24 = ADD32(ctx->r12, ctx->r13);
    // 0x80331934: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80331938: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033193C: lbu         $t9, 0x3B3C($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3B3C);
    // 0x80331940: sll         $t0, $t7, 3
    ctx->r8 = S32(ctx->r15 << 3);
    // 0x80331944: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x80331948: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8033194C: sb          $t1, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r9;
    // 0x80331950: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331954: lw          $t2, 0x26F4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X26F4);
    // 0x80331958: lbu         $t3, 0x2B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X2B);
    // 0x8033195C: nop

    // 0x80331960: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80331964: bne         $at, $zero, L_80331984
    if (ctx->r1 != 0) {
        // 0x80331968: nop
    
            goto L_80331984;
    }
    // 0x80331968: nop

    // 0x8033196C: lb          $t6, 0x2A($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2A);
    // 0x80331970: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331974: sll         $t4, $t6, 3
    ctx->r12 = S32(ctx->r14 << 3);
    // 0x80331978: subu        $t4, $t4, $t6
    ctx->r12 = SUB32(ctx->r12, ctx->r14);
    // 0x8033197C: addiu       $t5, $t4, 0x7
    ctx->r13 = ADD32(ctx->r12, 0X7);
    // 0x80331980: sw          $t5, 0x26F4($at)
    MEM_W(0X26F4, ctx->r1) = ctx->r13;
L_80331984:
    // 0x80331984: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331988: lw          $t8, 0x26F4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26F4);
    // 0x8033198C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331990: nop

    // 0x80331994: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80331998: bne         $at, $zero, L_80331A40
    if (ctx->r1 != 0) {
        // 0x8033199C: nop
    
            goto L_80331A40;
    }
    // 0x8033199C: nop

    // 0x803319A0: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803319A4: lw          $t9, 0x2710($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2710);
    // 0x803319A8: nop

    // 0x803319AC: bne         $t9, $zero, L_803319E0
    if (ctx->r25 != 0) {
        // 0x803319B0: nop
    
            goto L_803319E0;
    }
    // 0x803319B0: nop

    // 0x803319B4: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x803319B8: lw          $t0, 0x26FC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X26FC);
    // 0x803319BC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803319C0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803319C4: sw          $t1, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r9;
    // 0x803319C8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803319CC: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
    // 0x803319D0: b           L_80331A64
    // 0x803319D4: nop

        goto L_80331A64;
    // 0x803319D4: nop

    // 0x803319D8: b           L_80331A40
    // 0x803319DC: nop

        goto L_80331A40;
    // 0x803319DC: nop

L_803319E0:
    // 0x803319E0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803319E4: lw          $a1, 0x26F0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X26F0);
    // 0x803319E8: jal         0x800600B8
    // 0x803319EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800600B8(rdram, ctx);
        goto after_2;
    // 0x803319EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803319F0: beq         $v0, $zero, L_80331A24
    if (ctx->r2 == 0) {
        // 0x803319F4: nop
    
            goto L_80331A24;
    }
    // 0x803319F4: nop

    // 0x803319F8: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803319FC: lw          $t2, 0x26FC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X26FC);
    // 0x80331A00: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A04: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80331A08: sw          $t3, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r11;
    // 0x80331A0C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A10: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
    // 0x80331A14: b           L_80331A64
    // 0x80331A18: nop

        goto L_80331A64;
    // 0x80331A18: nop

    // 0x80331A1C: b           L_80331A40
    // 0x80331A20: nop

        goto L_80331A40;
    // 0x80331A20: nop

L_80331A24:
    // 0x80331A24: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x80331A28: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A2C: sw          $t6, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r14;
    // 0x80331A30: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A34: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
    // 0x80331A38: b           L_80331A64
    // 0x80331A3C: nop

        goto L_80331A64;
    // 0x80331A3C: nop

L_80331A40:
    // 0x80331A40: b           L_80331A5C
    // 0x80331A44: nop

        goto L_80331A5C;
    // 0x80331A44: nop

L_80331A48:
    // 0x80331A48: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331A4C: lw          $t4, 0x26F8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X26F8);
    // 0x80331A50: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A54: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80331A58: sw          $t5, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r13;
L_80331A5C:
    // 0x80331A5C: b           L_80331A64
    // 0x80331A60: nop

        goto L_80331A64;
    // 0x80331A60: nop

L_80331A64:
    // 0x80331A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331A6C: jr          $ra
    // 0x80331A70: nop

    return;
    // 0x80331A70: nop

;}
RECOMP_FUNC void func_80331AF8_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331AF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331B00: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x80331B04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331B08: nop

    // 0x80331B0C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80331B10: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80331B14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331B18: nop

    // 0x80331B1C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80331B20: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80331B24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331B28: nop

    // 0x80331B2C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80331B30: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    // 0x80331B34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331B38: nop

    // 0x80331B3C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80331B40: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80331B44: lw          $a0, 0x26F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X26F0);
    // 0x80331B48: jal         0x800697F0
    // 0x80331B4C: nop

    func_800697F0(rdram, ctx);
        goto after_0;
    // 0x80331B4C: nop

    after_0:
    // 0x80331B50: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80331B54: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331B58: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x80331B5C: nop

    // 0x80331B60: bne         $t6, $zero, L_80331E5C
    if (ctx->r14 != 0) {
        // 0x80331B64: nop
    
            goto L_80331E5C;
    }
    // 0x80331B64: nop

    // 0x80331B68: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331B6C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B70: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x80331B74: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B78: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
    // 0x80331B7C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x80331B80: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80331B84: jal         0x80016F38
    // 0x80331B88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_1;
    // 0x80331B88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331B8C: addiu       $t8, $zero, 0x45
    ctx->r24 = ADD32(0, 0X45);
    // 0x80331B90: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80331B94: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B98: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80331B9C: jal         0x80060E40
    // 0x80331BA0: addiu       $a0, $a0, 0x1E
    ctx->r4 = ADD32(ctx->r4, 0X1E);
    func_80060E40(rdram, ctx);
        goto after_2;
    // 0x80331BA0: addiu       $a0, $a0, 0x1E
    ctx->r4 = ADD32(ctx->r4, 0X1E);
    after_2:
    // 0x80331BA4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80331BA8: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331BAC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331BB0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331BB4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331BB8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331BBC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331BC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331BC4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331BC8: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80331BCC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80331BD0: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80331BD4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331BD8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331BDC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331BE0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331BE4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331BE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331BEC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331BF0: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80331BF4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80331BF8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331BFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331C00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331C08: lwc1        $f4, 0x26B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X26B8);
    // 0x80331C0C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C10: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331C14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C18: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331C1C: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80331C20: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80331C24: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80331C28: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331C2C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331C30: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331C34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331C38: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331C3C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331C40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C44: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331C48: swc1        $f6, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f6.u32l;
    // 0x80331C4C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80331C50: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80331C54: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331C58: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331C5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331C60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331C64: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331C68: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331C6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C70: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331C74: swc1        $f8, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f8.u32l;
    // 0x80331C78: addiu       $t9, $zero, 0x46
    ctx->r25 = ADD32(0, 0X46);
    // 0x80331C7C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80331C80: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80331C84: jal         0x80060E40
    // 0x80331C88: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    func_80060E40(rdram, ctx);
        goto after_3;
    // 0x80331C88: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_3:
    // 0x80331C8C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80331C90: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331C94: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331C98: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331C9C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331CA0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331CA4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331CA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331CAC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331CB0: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80331CB4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80331CB8: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331CBC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331CC0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331CC4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331CC8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331CCC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331CD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331CD4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331CD8: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x80331CDC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80331CE0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80331CE4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331CE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331CEC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331CF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331CF4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331CF8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331CFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D00: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331D04: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80331D08: addiu       $t6, $zero, 0x47
    ctx->r14 = ADD32(0, 0X47);
    // 0x80331D0C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80331D10: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80331D14: jal         0x80060E40
    // 0x80331D18: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80060E40(rdram, ctx);
        goto after_4;
    // 0x80331D18: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_4:
    // 0x80331D1C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80331D20: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80331D24: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331D28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331D2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331D30: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331D34: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331D38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331D3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331D40: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331D44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D48: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331D4C: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80331D50: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80331D54: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331D58: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331D5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331D60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331D64: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331D68: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331D6C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331D70: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80331D74: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331D78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D7C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331D80: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80331D84: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80331D88: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331D8C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331D90: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331D94: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331D98: lwc1        $f4, 0x26BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X26BC);
    // 0x80331D9C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331DA0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331DA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331DA8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331DAC: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80331DB0: addiu       $t3, $zero, 0x48
    ctx->r11 = ADD32(0, 0X48);
    // 0x80331DB4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80331DB8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80331DBC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80331DC0: jal         0x80060E40
    // 0x80331DC4: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_80060E40(rdram, ctx);
        goto after_5;
    // 0x80331DC4: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_5:
    // 0x80331DC8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80331DCC: lui         $at, 0x4318
    ctx->r1 = S32(0X4318 << 16);
    // 0x80331DD0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331DD4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331DD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331DDC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331DE0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331DE4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331DE8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331DEC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331DF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331DF4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331DF8: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80331DFC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80331E00: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331E04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331E08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E0C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331E10: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331E14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331E18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E1C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331E20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331E24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E28: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331E2C: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x80331E30: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80331E34: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E38: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331E3C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331E40: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331E44: lwc1        $f6, 0x26C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X26C0);
    // 0x80331E48: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331E4C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331E50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E54: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331E58: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
L_80331E5C:
    // 0x80331E5C: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80331E60: lw          $t0, 0x26F8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X26F8);
    // 0x80331E64: nop

    // 0x80331E68: slti        $at, $t0, 0xF
    ctx->r1 = SIGNED(ctx->r8) < 0XF ? 1 : 0;
    // 0x80331E6C: bne         $at, $zero, L_80331E8C
    if (ctx->r1 != 0) {
        // 0x80331E70: nop
    
            goto L_80331E8C;
    }
    // 0x80331E70: nop

    // 0x80331E74: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x80331E78: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E7C: sw          $t1, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r9;
    // 0x80331E80: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E84: b           L_80331EA0
    // 0x80331E88: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
        goto L_80331EA0;
    // 0x80331E88: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_80331E8C:
    // 0x80331E8C: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331E90: lw          $t2, 0x26F8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X26F8);
    // 0x80331E94: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E98: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80331E9C: sw          $t3, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r11;
L_80331EA0:
    // 0x80331EA0: b           L_80331EA8
    // 0x80331EA4: nop

        goto L_80331EA8;
    // 0x80331EA4: nop

L_80331EA8:
    // 0x80331EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331EAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80331EB0: jr          $ra
    // 0x80331EB4: nop

    return;
    // 0x80331EB4: nop

;}
RECOMP_FUNC void func_803321B4_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803321B4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803321B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803321BC: jal         0x8001D4D0
    // 0x803321C0: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x803321C0: nop

    after_0:
    // 0x803321C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803321C8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803321CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x803321D0: jal         0x8001D638
    // 0x803321D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x803321D4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x803321D8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803321DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803321E0: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x803321E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803321E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803321EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803321F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321F4: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x803321F8: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x803321FC: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80332200: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80332204: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80332208: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033220C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80332210: jal         0x80036E70
    // 0x80332214: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x80332214: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80332218: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033221C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80332220: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332224: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80332228: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8033222C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80332230: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80332234: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80332238: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x8033223C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80332240: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x80332244: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80332248: nop

    // 0x8033224C: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80332250: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332254: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80332258: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033225C: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80332260: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332264: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80332268: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033226C: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80332270: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332274: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80332278: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033227C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332280: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80332284: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x80332288: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8033228C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80332290: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80332294: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x80332298: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x8033229C: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x803322A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803322A4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803322A8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x803322AC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x803322B0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x803322B4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x803322B8: jal         0x80037188
    // 0x803322BC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x803322BC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x803322C0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803322C4: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x803322C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803322CC: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x803322D0: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x803322D4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x803322D8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803322DC: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x803322E0: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x803322E4: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x803322E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803322EC: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x803322F0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803322F4: nop

    // 0x803322F8: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x803322FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332300: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x80332304: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_80332308:
    // 0x80332308: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x8033230C: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80332310: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332314: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80332318: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033231C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332320: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x80332324: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332328: bne         $t0, $at, L_80332338
    if (ctx->r8 != ctx->r1) {
        // 0x8033232C: nop
    
            goto L_80332338;
    }
    // 0x8033232C: nop

    // 0x80332330: b           L_80332434
    // 0x80332334: nop

        goto L_80332434;
    // 0x80332334: nop

L_80332338:
    // 0x80332338: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x8033233C: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80332340: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332344: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80332348: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033234C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332350: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80332354: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332358: beq         $t3, $at, L_803323FC
    if (ctx->r11 == ctx->r1) {
        // 0x8033235C: nop
    
            goto L_803323FC;
    }
    // 0x8033235C: nop

    // 0x80332360: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332364: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80332368: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033236C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80332370: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332374: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x80332378: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8033237C: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x80332380: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x80332384: jal         0x8001C1A8
    // 0x80332388: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x80332388: nop

    after_4:
    // 0x8033238C: beq         $v0, $zero, L_803323F4
    if (ctx->r2 == 0) {
        // 0x80332390: nop
    
            goto L_803323F4;
    }
    // 0x80332390: nop

    // 0x80332394: jal         0x8001838C
    // 0x80332398: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x80332398: nop

    after_5:
    // 0x8033239C: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x803323A0: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803323A4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803323A8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803323AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803323B0: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x803323B4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803323B8: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x803323BC: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x803323C0: jal         0x8001B014
    // 0x803323C4: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x803323C4: nop

    after_6:
    // 0x803323C8: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x803323CC: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x803323D0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803323D4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803323D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803323DC: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x803323E0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803323E4: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x803323E8: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x803323EC: jal         0x8001C384
    // 0x803323F0: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x803323F0: nop

    after_7:
L_803323F4:
    // 0x803323F4: b           L_80332420
    // 0x803323F8: nop

        goto L_80332420;
    // 0x803323F8: nop

L_803323FC:
    // 0x803323FC: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332400: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332404: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332408: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8033240C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332410: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80332414: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80332418: jal         0x800623E0
    // 0x8033241C: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x8033241C: nop

    after_8:
L_80332420:
    // 0x80332420: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332424: nop

    // 0x80332428: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033242C: b           L_80332308
    // 0x80332430: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_80332308;
    // 0x80332430: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_80332434:
    // 0x80332434: b           L_8033243C
    // 0x80332438: nop

        goto L_8033243C;
    // 0x80332438: nop

L_8033243C:
    // 0x8033243C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80332440: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80332444: jr          $ra
    // 0x80332448: nop

    return;
    // 0x80332448: nop

;}
RECOMP_FUNC void func_80331A74_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A74: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331A78: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x80331A7C: nop

    // 0x80331A80: bne         $t6, $zero, L_80331A9C
    if (ctx->r14 != 0) {
        // 0x80331A84: nop
    
            goto L_80331A9C;
    }
    // 0x80331A84: nop

    // 0x80331A88: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331A8C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A90: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
    // 0x80331A94: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A98: sw          $zero, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = 0;
L_80331A9C:
    // 0x80331A9C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331AA0: lw          $t8, 0x26F8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X26F8);
    // 0x80331AA4: nop

    // 0x80331AA8: slti        $at, $t8, 0x1E
    ctx->r1 = SIGNED(ctx->r24) < 0X1E ? 1 : 0;
    // 0x80331AAC: bne         $at, $zero, L_80331AD4
    if (ctx->r1 != 0) {
        // 0x80331AB0: nop
    
            goto L_80331AD4;
    }
    // 0x80331AB0: nop

    // 0x80331AB4: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331AB8: lw          $t9, 0x26FC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X26FC);
    // 0x80331ABC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331AC0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80331AC4: sw          $t0, 0x26FC($at)
    MEM_W(0X26FC, ctx->r1) = ctx->r8;
    // 0x80331AC8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331ACC: b           L_80331AE8
    // 0x80331AD0: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
        goto L_80331AE8;
    // 0x80331AD0: sw          $zero, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = 0;
L_80331AD4:
    // 0x80331AD4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80331AD8: lw          $t1, 0x26F8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X26F8);
    // 0x80331ADC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331AE0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80331AE4: sw          $t2, 0x26F8($at)
    MEM_W(0X26F8, ctx->r1) = ctx->r10;
L_80331AE8:
    // 0x80331AE8: jr          $ra
    // 0x80331AEC: nop

    return;
    // 0x80331AEC: nop

    // 0x80331AF0: jr          $ra
    // 0x80331AF4: nop

    return;
    // 0x80331AF4: nop

;}
RECOMP_FUNC void func_80331F40_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331F44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331F48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331F4C: jal         0x80062EAC
    // 0x80331F50: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x80331F50: nop

    after_0:
    // 0x80331F54: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80331F58: jal         0x8001D1D4
    // 0x80331F5C: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x80331F5C: nop

    after_1:
    // 0x80331F60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331F64: bne         $v0, $at, L_80331F74
    if (ctx->r2 != ctx->r1) {
        // 0x80331F68: nop
    
            goto L_80331F74;
    }
    // 0x80331F68: nop

    // 0x80331F6C: b           L_803321A4
    // 0x80331F70: nop

        goto L_803321A4;
    // 0x80331F70: nop

L_80331F74:
    // 0x80331F74: jal         0x8001D1D4
    // 0x80331F78: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x80331F78: nop

    after_2:
    // 0x80331F7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331F80: bne         $v0, $at, L_80331F9C
    if (ctx->r2 != ctx->r1) {
        // 0x80331F84: nop
    
            goto L_80331F9C;
    }
    // 0x80331F84: nop

    // 0x80331F88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80331F8C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80331F90: sw          $t6, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r14;
    // 0x80331F94: b           L_803321A4
    // 0x80331F98: nop

        goto L_803321A4;
    // 0x80331F98: nop

L_80331F9C:
    // 0x80331F9C: lui         $s0, 0x8033
    ctx->r16 = S32(0X8033 << 16);
    // 0x80331FA0: lw          $s0, 0x26FC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X26FC);
    // 0x80331FA4: nop

    // 0x80331FA8: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80331FAC: bne         $at, $zero, L_80331FC8
    if (ctx->r1 != 0) {
        // 0x80331FB0: nop
    
            goto L_80331FC8;
    }
    // 0x80331FB0: nop

    // 0x80331FB4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80331FB8: beq         $s0, $at, L_80332090
    if (ctx->r16 == ctx->r1) {
        // 0x80331FBC: nop
    
            goto L_80332090;
    }
    // 0x80331FBC: nop

    // 0x80331FC0: b           L_803320A0
    // 0x80331FC4: nop

        goto L_803320A0;
    // 0x80331FC4: nop

L_80331FC8:
    // 0x80331FC8: sltiu       $at, $s0, 0xA
    ctx->r1 = ctx->r16 < 0XA ? 1 : 0;
    // 0x80331FCC: beq         $at, $zero, L_803320A0
    if (ctx->r1 == 0) {
        // 0x80331FD0: nop
    
            goto L_803320A0;
    }
    // 0x80331FD0: nop

    // 0x80331FD4: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80331FD8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331FDC: addu        $at, $at, $t7
    gpr jr_addend_80331FE8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331FE0: lw          $t7, 0x26C4($at)
    ctx->r15 = ADD32(ctx->r1, 0X26C4);
    // 0x80331FE4: nop

    // 0x80331FE8: jr          $t7
    // 0x80331FEC: nop

    switch (jr_addend_80331FE8 >> 2) {
        case 0: goto L_80331FF0; break;
        case 1: goto L_80332000; break;
        case 2: goto L_80332010; break;
        case 3: goto L_80332020; break;
        case 4: goto L_80332030; break;
        case 5: goto L_80332040; break;
        case 6: goto L_80332050; break;
        case 7: goto L_80332060; break;
        case 8: goto L_80332070; break;
        case 9: goto L_80332080; break;
        default: switch_error(__func__, 0x80331FE8, 0x803326C4);
    }
    // 0x80331FEC: nop

L_80331FF0:
    // 0x80331FF0: jal         0x80330C44
    // 0x80331FF4: nop

    func_80330C44_unk_bin_7(rdram, ctx);
        goto after_3;
    // 0x80331FF4: nop

    after_3:
    // 0x80331FF8: b           L_803320A0
    // 0x80331FFC: nop

        goto L_803320A0;
    // 0x80331FFC: nop

L_80332000:
    // 0x80332000: jal         0x80330D18
    // 0x80332004: nop

    func_80330D18_unk_bin_7(rdram, ctx);
        goto after_4;
    // 0x80332004: nop

    after_4:
    // 0x80332008: b           L_803320A0
    // 0x8033200C: nop

        goto L_803320A0;
    // 0x8033200C: nop

L_80332010:
    // 0x80332010: jal         0x80330E2C
    // 0x80332014: nop

    func_80330E2C_unk_bin_7(rdram, ctx);
        goto after_5;
    // 0x80332014: nop

    after_5:
    // 0x80332018: b           L_803320A0
    // 0x8033201C: nop

        goto L_803320A0;
    // 0x8033201C: nop

L_80332020:
    // 0x80332020: jal         0x80331198
    // 0x80332024: nop

    func_80331198_unk_bin_7(rdram, ctx);
        goto after_6;
    // 0x80332024: nop

    after_6:
    // 0x80332028: b           L_803320A0
    // 0x8033202C: nop

        goto L_803320A0;
    // 0x8033202C: nop

L_80332030:
    // 0x80332030: jal         0x803313E4
    // 0x80332034: nop

    func_803313E4_unk_bin_7(rdram, ctx);
        goto after_7;
    // 0x80332034: nop

    after_7:
    // 0x80332038: b           L_803320A0
    // 0x8033203C: nop

        goto L_803320A0;
    // 0x8033203C: nop

L_80332040:
    // 0x80332040: jal         0x80331594
    // 0x80332044: nop

    func_80331594_unk_bin_7(rdram, ctx);
        goto after_8;
    // 0x80332044: nop

    after_8:
    // 0x80332048: b           L_803320A0
    // 0x8033204C: nop

        goto L_803320A0;
    // 0x8033204C: nop

L_80332050:
    // 0x80332050: jal         0x80331618
    // 0x80332054: nop

    func_80331618_unk_bin_7(rdram, ctx);
        goto after_9;
    // 0x80332054: nop

    after_9:
    // 0x80332058: b           L_803320A0
    // 0x8033205C: nop

        goto L_803320A0;
    // 0x8033205C: nop

L_80332060:
    // 0x80332060: jal         0x80331750
    // 0x80332064: nop

    func_80331750_unk_bin_7(rdram, ctx);
        goto after_10;
    // 0x80332064: nop

    after_10:
    // 0x80332068: b           L_803320A0
    // 0x8033206C: nop

        goto L_803320A0;
    // 0x8033206C: nop

L_80332070:
    // 0x80332070: jal         0x80331A74
    // 0x80332074: nop

    func_80331A74_unk_bin_7(rdram, ctx);
        goto after_11;
    // 0x80332074: nop

    after_11:
    // 0x80332078: b           L_803320A0
    // 0x8033207C: nop

        goto L_803320A0;
    // 0x8033207C: nop

L_80332080:
    // 0x80332080: jal         0x80331AF8
    // 0x80332084: nop

    func_80331AF8_unk_bin_7(rdram, ctx);
        goto after_12;
    // 0x80332084: nop

    after_12:
    // 0x80332088: b           L_803320A0
    // 0x8033208C: nop

        goto L_803320A0;
    // 0x8033208C: nop

L_80332090:
    // 0x80332090: jal         0x80331EB8
    // 0x80332094: nop

    func_80331EB8_unk_bin_7(rdram, ctx);
        goto after_13;
    // 0x80332094: nop

    after_13:
    // 0x80332098: b           L_803320A0
    // 0x8033209C: nop

        goto L_803320A0;
    // 0x8033209C: nop

L_803320A0:
    // 0x803320A0: jal         0x8033074C
    // 0x803320A4: nop

    func_8033074C_unk_bin_7(rdram, ctx);
        goto after_14;
    // 0x803320A4: nop

    after_14:
    // 0x803320A8: jal         0x8033017C
    // 0x803320AC: nop

    func_8033017C_unk_bin_7(rdram, ctx);
        goto after_15;
    // 0x803320AC: nop

    after_15:
    // 0x803320B0: jal         0x8001994C
    // 0x803320B4: nop

    func_8001994C(rdram, ctx);
        goto after_16;
    // 0x803320B4: nop

    after_16:
    // 0x803320B8: jal         0x800628C0
    // 0x803320BC: nop

    func_800628C0(rdram, ctx);
        goto after_17;
    // 0x803320BC: nop

    after_17:
    // 0x803320C0: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_803320C4:
    // 0x803320C4: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x803320C8: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803320CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803320D0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803320D4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803320D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803320DC: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x803320E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803320E4: bne         $t0, $at, L_803320F4
    if (ctx->r8 != ctx->r1) {
        // 0x803320E8: nop
    
            goto L_803320F4;
    }
    // 0x803320E8: nop

    // 0x803320EC: b           L_8033219C
    // 0x803320F0: nop

        goto L_8033219C;
    // 0x803320F0: nop

L_803320F4:
    // 0x803320F4: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x803320F8: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x803320FC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332100: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80332104: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332108: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033210C: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80332110: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332114: beq         $t3, $at, L_80332164
    if (ctx->r11 == ctx->r1) {
        // 0x80332118: nop
    
            goto L_80332164;
    }
    // 0x80332118: nop

    // 0x8033211C: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80332120: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332124: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332128: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8033212C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332130: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x80332134: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80332138: jal         0x8001CEF4
    // 0x8033213C: nop

    func_8001CEF4(rdram, ctx);
        goto after_18;
    // 0x8033213C: nop

    after_18:
    // 0x80332140: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80332144: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332148: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033214C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332150: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332154: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80332158: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x8033215C: jal         0x8001CD20
    // 0x80332160: nop

    func_8001CD20(rdram, ctx);
        goto after_19;
    // 0x80332160: nop

    after_19:
L_80332164:
    // 0x80332164: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x80332168: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x8033216C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332170: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80332174: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332178: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x8033217C: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80332180: jal         0x8001AD6C
    // 0x80332184: nop

    func_8001AD6C(rdram, ctx);
        goto after_20;
    // 0x80332184: nop

    after_20:
    // 0x80332188: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x8033218C: nop

    // 0x80332190: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80332194: b           L_803320C4
    // 0x80332198: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
        goto L_803320C4;
    // 0x80332198: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
L_8033219C:
    // 0x8033219C: b           L_803321A4
    // 0x803321A0: nop

        goto L_803321A4;
    // 0x803321A0: nop

L_803321A4:
    // 0x803321A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803321A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803321AC: jr          $ra
    // 0x803321B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803321B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331EB8_unk_bin_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331EB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331EBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331EC0: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331EC4: lw          $t6, 0x2700($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2700);
    // 0x80331EC8: nop

    // 0x80331ECC: bne         $t6, $zero, L_80331EE0
    if (ctx->r14 != 0) {
        // 0x80331ED0: nop
    
            goto L_80331EE0;
    }
    // 0x80331ED0: nop

    // 0x80331ED4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331ED8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331EDC: sw          $t7, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r15;
L_80331EE0:
    // 0x80331EE0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80331EE4: addiu       $t8, $t8, -0x1D50
    ctx->r24 = ADD32(ctx->r24, -0X1D50);
    // 0x80331EE8: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80331EEC: nop

    // 0x80331EF0: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80331EF4: bne         $t0, $zero, L_80331F08
    if (ctx->r8 != 0) {
        // 0x80331EF8: nop
    
            goto L_80331F08;
    }
    // 0x80331EF8: nop

    // 0x80331EFC: andi        $t1, $t9, 0x4000
    ctx->r9 = ctx->r25 & 0X4000;
    // 0x80331F00: beq         $t1, $zero, L_80331F28
    if (ctx->r9 == 0) {
        // 0x80331F04: nop
    
            goto L_80331F28;
    }
    // 0x80331F04: nop

L_80331F08:
    // 0x80331F08: jal         0x8001D2C0
    // 0x80331F0C: nop

    func_8001D2C0(rdram, ctx);
        goto after_0;
    // 0x80331F0C: nop

    after_0:
    // 0x80331F10: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331F14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F18: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80331F1C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331F20: jal         0x800178D4
    // 0x80331F24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80331F24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80331F28:
    // 0x80331F28: b           L_80331F30
    // 0x80331F2C: nop

        goto L_80331F30;
    // 0x80331F2C: nop

L_80331F30:
    // 0x80331F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331F38: jr          $ra
    // 0x80331F3C: nop

    return;
    // 0x80331F3C: nop

;}
RECOMP_FUNC void func_80330594_unk_bin_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033059C: jal         0x8001ECB8
    // 0x803305A0: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x803305A0: nop

    after_0:
    // 0x803305A4: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803305A8: addiu       $t6, $t6, 0x2D4
    ctx->r14 = ADD32(ctx->r14, 0X2D4);
    // 0x803305AC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803305B0: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x803305B4: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803305B8: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x803305BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803305C0: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x803305C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803305C8: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x803305CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803305D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803305D4: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x803305D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803305DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803305E0: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x803305E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803305E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803305EC: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x803305F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803305F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803305F8: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x803305FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330600: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330604: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x80330608: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033060C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330610: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x80330614: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330618: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033061C: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x80330620: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330624: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330628: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033062C: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x80330630: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330634: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330638: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x8033063C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80330640: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330644: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330648: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x8033064C: jal         0x80019C84
    // 0x80330650: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80330650: nop

    after_1:
    // 0x80330654: jal         0x80019D2C
    // 0x80330658: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80330658: nop

    after_2:
    // 0x8033065C: jal         0x8001A258
    // 0x80330660: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x80330660: nop

    after_3:
    // 0x80330664: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80330668: addiu       $t8, $t8, 0x162C
    ctx->r24 = ADD32(ctx->r24, 0X162C);
    // 0x8033066C: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80330670: sw          $t8, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r24;
    // 0x80330674: jal         0x80060278
    // 0x80330678: nop

    func_80060278(rdram, ctx);
        goto after_4;
    // 0x80330678: nop

    after_4:
    // 0x8033067C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330680: jal         0x800608B8
    // 0x80330684: addiu       $a0, $a0, 0x16CC
    ctx->r4 = ADD32(ctx->r4, 0X16CC);
    func_800608B8(rdram, ctx);
        goto after_5;
    // 0x80330684: addiu       $a0, $a0, 0x16CC
    ctx->r4 = ADD32(ctx->r4, 0X16CC);
    after_5:
    // 0x80330688: jal         0x8033056C
    // 0x8033068C: nop

    func_8033056C_unk_bin_8(rdram, ctx);
        goto after_6;
    // 0x8033068C: nop

    after_6:
    // 0x80330690: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80330694: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80330698: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8033069C: jal         0x8001D244
    // 0x803306A0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    Set_BgColor(rdram, ctx);
        goto after_7;
    // 0x803306A0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_7:
    // 0x803306A4: jal         0x8001D284
    // 0x803306A8: nop

    func_8001D284(rdram, ctx);
        goto after_8;
    // 0x803306A8: nop

    after_8:
    // 0x803306AC: jal         0x80000964
    // 0x803306B0: nop

    func_80000964(rdram, ctx);
        goto after_9;
    // 0x803306B0: nop

    after_9:
    // 0x803306B4: lui         $v0, 0x8033
    ctx->r2 = S32(0X8033 << 16);
    // 0x803306B8: lw          $v0, 0x6E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6E4);
    // 0x803306BC: b           L_803306CC
    // 0x803306C0: nop

        goto L_803306CC;
    // 0x803306C0: nop

    // 0x803306C4: b           L_803306CC
    // 0x803306C8: nop

        goto L_803306CC;
    // 0x803306C8: nop

L_803306CC:
    // 0x803306CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803306D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803306D4: jr          $ra
    // 0x803306D8: nop

    return;
    // 0x803306D8: nop

    // 0x803306DC: nop

;}
RECOMP_FUNC void func_8033056C_unk_bin_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033056C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330570: sw          $zero, 0x6E0($at)
    MEM_W(0X6E0, ctx->r1) = 0;
    // 0x80330574: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330578: sw          $zero, 0x6E4($at)
    MEM_W(0X6E4, ctx->r1) = 0;
    // 0x8033057C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330580: sb          $zero, 0x6E8($at)
    MEM_B(0X6E8, ctx->r1) = 0;
    // 0x80330584: jr          $ra
    // 0x80330588: nop

    return;
    // 0x80330588: nop

    // 0x8033058C: jr          $ra
    // 0x80330590: nop

    return;
    // 0x80330590: nop

;}
RECOMP_FUNC void func_803302D4_unk_bin_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803302D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803302DC: jal         0x8001D4D0
    // 0x803302E0: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x803302E0: nop

    after_0:
    // 0x803302E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803302E8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803302EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x803302F0: jal         0x8001D638
    // 0x803302F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x803302F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x803302F8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803302FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330300: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x80330304: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330308: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033030C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330310: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330314: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80330318: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x8033031C: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80330320: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80330324: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80330328: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033032C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80330330: jal         0x80036E70
    // 0x80330334: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x80330334: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80330338: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033033C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80330340: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330344: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80330348: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8033034C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80330350: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80330354: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80330358: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x8033035C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80330360: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x80330364: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80330368: nop

    // 0x8033036C: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80330370: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330374: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80330378: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033037C: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80330380: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330384: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80330388: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033038C: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80330390: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330394: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80330398: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033039C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803303A0: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x803303A4: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x803303A8: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x803303AC: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x803303B0: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x803303B4: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x803303B8: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x803303BC: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x803303C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803303C4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803303C8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x803303CC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x803303D0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x803303D4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x803303D8: jal         0x80037188
    // 0x803303DC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x803303DC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x803303E0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803303E4: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x803303E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803303EC: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x803303F0: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x803303F4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x803303F8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803303FC: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x80330400: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x80330404: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80330408: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033040C: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x80330410: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330414: nop

    // 0x80330418: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8033041C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330420: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x80330424: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_80330428:
    // 0x80330428: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x8033042C: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80330430: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330434: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80330438: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033043C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330440: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x80330444: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330448: bne         $t0, $at, L_80330458
    if (ctx->r8 != ctx->r1) {
        // 0x8033044C: nop
    
            goto L_80330458;
    }
    // 0x8033044C: nop

    // 0x80330450: b           L_80330554
    // 0x80330454: nop

        goto L_80330554;
    // 0x80330454: nop

L_80330458:
    // 0x80330458: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x8033045C: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80330460: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330464: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80330468: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033046C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330470: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80330474: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330478: beq         $t3, $at, L_8033051C
    if (ctx->r11 == ctx->r1) {
        // 0x8033047C: nop
    
            goto L_8033051C;
    }
    // 0x8033047C: nop

    // 0x80330480: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330484: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80330488: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033048C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80330490: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330494: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x80330498: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8033049C: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x803304A0: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x803304A4: jal         0x8001C1A8
    // 0x803304A8: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x803304A8: nop

    after_4:
    // 0x803304AC: beq         $v0, $zero, L_80330514
    if (ctx->r2 == 0) {
        // 0x803304B0: nop
    
            goto L_80330514;
    }
    // 0x803304B0: nop

    // 0x803304B4: jal         0x8001838C
    // 0x803304B8: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x803304B8: nop

    after_5:
    // 0x803304BC: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x803304C0: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803304C4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803304C8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803304CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803304D0: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x803304D4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803304D8: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x803304DC: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x803304E0: jal         0x8001B014
    // 0x803304E4: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x803304E4: nop

    after_6:
    // 0x803304E8: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x803304EC: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x803304F0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803304F4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803304F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803304FC: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x80330500: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80330504: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x80330508: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x8033050C: jal         0x8001C384
    // 0x80330510: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x80330510: nop

    after_7:
L_80330514:
    // 0x80330514: b           L_80330540
    // 0x80330518: nop

        goto L_80330540;
    // 0x80330518: nop

L_8033051C:
    // 0x8033051C: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330520: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330524: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330528: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8033052C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330530: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80330534: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330538: jal         0x800623E0
    // 0x8033053C: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x8033053C: nop

    after_8:
L_80330540:
    // 0x80330540: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330544: nop

    // 0x80330548: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033054C: b           L_80330428
    // 0x80330550: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_80330428;
    // 0x80330550: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_80330554:
    // 0x80330554: b           L_8033055C
    // 0x80330558: nop

        goto L_8033055C;
    // 0x80330558: nop

L_8033055C:
    // 0x8033055C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80330560: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80330564: jr          $ra
    // 0x80330568: nop

    return;
    // 0x80330568: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330008: jal         0x80062EAC
    // 0x8033000C: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x8033000C: nop

    after_0:
    // 0x80330010: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80330014: jal         0x8001D1D4
    // 0x80330018: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x80330018: nop

    after_1:
    // 0x8033001C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330020: bne         $v0, $at, L_80330030
    if (ctx->r2 != ctx->r1) {
        // 0x80330024: nop
    
            goto L_80330030;
    }
    // 0x80330024: nop

    // 0x80330028: b           L_803302C4
    // 0x8033002C: nop

        goto L_803302C4;
    // 0x8033002C: nop

L_80330030:
    // 0x80330030: jal         0x8001D1D4
    // 0x80330034: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x80330034: nop

    after_2:
    // 0x80330038: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033003C: bne         $v0, $at, L_80330058
    if (ctx->r2 != ctx->r1) {
        // 0x80330040: nop
    
            goto L_80330058;
    }
    // 0x80330040: nop

    // 0x80330044: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330048: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8033004C: sw          $t6, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r14;
    // 0x80330050: b           L_803302C4
    // 0x80330054: nop

        goto L_803302C4;
    // 0x80330054: nop

L_80330058:
    // 0x80330058: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033005C: addiu       $t7, $t7, -0x1D50
    ctx->r15 = ADD32(ctx->r15, -0X1D50);
    // 0x80330060: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80330064: nop

    // 0x80330068: andi        $t9, $t8, 0x9000
    ctx->r25 = ctx->r24 & 0X9000;
    // 0x8033006C: beq         $t9, $zero, L_803300C0
    if (ctx->r25 == 0) {
        // 0x80330070: nop
    
            goto L_803300C0;
    }
    // 0x80330070: nop

    // 0x80330074: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330078: sw          $zero, 0x6E4($at)
    MEM_W(0X6E4, ctx->r1) = 0;
    // 0x8033007C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330080: sb          $zero, 0x6E8($at)
    MEM_B(0X6E8, ctx->r1) = 0;
    // 0x80330084: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033008C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80330090: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330094: jal         0x800178D4
    // 0x80330098: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80330098: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x8033009C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x803300A0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803300A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x803300A8: jal         0x8001D244
    // 0x803300AC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_4;
    // 0x803300AC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_4:
    // 0x803300B0: jal         0x8001D2C0
    // 0x803300B4: nop

    func_8001D2C0(rdram, ctx);
        goto after_5;
    // 0x803300B4: nop

    after_5:
    // 0x803300B8: b           L_8033011C
    // 0x803300BC: nop

        goto L_8033011C;
    // 0x803300BC: nop

L_803300C0:
    // 0x803300C0: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x803300C4: lw          $t0, 0x6E0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6E0);
    // 0x803300C8: nop

    // 0x803300CC: slti        $at, $t0, 0x12D
    ctx->r1 = SIGNED(ctx->r8) < 0X12D ? 1 : 0;
    // 0x803300D0: bne         $at, $zero, L_80330108
    if (ctx->r1 != 0) {
        // 0x803300D4: nop
    
            goto L_80330108;
    }
    // 0x803300D4: nop

    // 0x803300D8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803300DC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803300E0: sw          $t1, 0x6E4($at)
    MEM_W(0X6E4, ctx->r1) = ctx->r9;
    // 0x803300E4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x803300E8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803300EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x803300F0: jal         0x8001D244
    // 0x803300F4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_6;
    // 0x803300F4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_6:
    // 0x803300F8: jal         0x8001D2C0
    // 0x803300FC: nop

    func_8001D2C0(rdram, ctx);
        goto after_7;
    // 0x803300FC: nop

    after_7:
    // 0x80330100: b           L_8033011C
    // 0x80330104: nop

        goto L_8033011C;
    // 0x80330104: nop

L_80330108:
    // 0x80330108: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x8033010C: lw          $t2, 0x6E0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6E0);
    // 0x80330110: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330114: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80330118: sw          $t3, 0x6E0($at)
    MEM_W(0X6E0, ctx->r1) = ctx->r11;
L_8033011C:
    // 0x8033011C: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330120: lbu         $t4, 0x6E8($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X6E8);
    // 0x80330124: nop

    // 0x80330128: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x8033012C: beq         $t5, $zero, L_8033019C
    if (ctx->r13 == 0) {
        // 0x80330130: nop
    
            goto L_8033019C;
    }
    // 0x80330130: nop

    // 0x80330134: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330138: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033013C: lh          $t7, 0x9D4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X9D4);
    // 0x80330140: nop

    // 0x80330144: bne         $t7, $zero, L_80330194
    if (ctx->r15 != 0) {
        // 0x80330148: nop
    
            goto L_80330194;
    }
    // 0x80330148: nop

    // 0x8033014C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80330150: jal         0x80060E40
    // 0x80330154: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80060E40(rdram, ctx);
        goto after_8;
    // 0x80330154: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_8:
    // 0x80330158: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x8033015C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330160: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330164: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330168: swc1        $f4, 0x930($t8)
    MEM_W(0X930, ctx->r24) = ctx->f4.u32l;
    // 0x8033016C: lui         $at, 0x4330
    ctx->r1 = S32(0X4330 << 16);
    // 0x80330170: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330174: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330178: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8033017C: swc1        $f6, 0x934($t9)
    MEM_W(0X934, ctx->r25) = ctx->f6.u32l;
    // 0x80330180: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330184: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330188: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033018C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330190: swc1        $f8, 0x938($t0)
    MEM_W(0X938, ctx->r8) = ctx->f8.u32l;
L_80330194:
    // 0x80330194: b           L_803301BC
    // 0x80330198: nop

        goto L_803301BC;
    // 0x80330198: nop

L_8033019C:
    // 0x8033019C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803301A0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803301A4: lh          $t2, 0x9D4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X9D4);
    // 0x803301A8: nop

    // 0x803301AC: beq         $t2, $zero, L_803301BC
    if (ctx->r10 == 0) {
        // 0x803301B0: nop
    
            goto L_803301BC;
    }
    // 0x803301B0: nop

    // 0x803301B4: jal         0x8001A928
    // 0x803301B8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001A928(rdram, ctx);
        goto after_9;
    // 0x803301B8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_9:
L_803301BC:
    // 0x803301BC: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803301C0: lbu         $t3, 0x6E8($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X6E8);
    // 0x803301C4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803301C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803301CC: sb          $t4, 0x6E8($at)
    MEM_B(0X6E8, ctx->r1) = ctx->r12;
    // 0x803301D0: jal         0x8001994C
    // 0x803301D4: nop

    func_8001994C(rdram, ctx);
        goto after_10;
    // 0x803301D4: nop

    after_10:
    // 0x803301D8: jal         0x800628C0
    // 0x803301DC: nop

    func_800628C0(rdram, ctx);
        goto after_11;
    // 0x803301DC: nop

    after_11:
    // 0x803301E0: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_803301E4:
    // 0x803301E4: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x803301E8: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x803301EC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803301F0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x803301F4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803301F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803301FC: lh          $t7, 0x4998($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4998);
    // 0x80330200: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330204: bne         $t7, $at, L_80330214
    if (ctx->r15 != ctx->r1) {
        // 0x80330208: nop
    
            goto L_80330214;
    }
    // 0x80330208: nop

    // 0x8033020C: b           L_803302BC
    // 0x80330210: nop

        goto L_803302BC;
    // 0x80330210: nop

L_80330214:
    // 0x80330214: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x80330218: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x8033021C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330220: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80330224: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330228: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033022C: lh          $t0, 0x49A0($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X49A0);
    // 0x80330230: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330234: beq         $t0, $at, L_80330284
    if (ctx->r8 == ctx->r1) {
        // 0x80330238: nop
    
            goto L_80330284;
    }
    // 0x80330238: nop

    // 0x8033023C: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80330240: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330244: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330248: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8033024C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330250: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80330254: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330258: jal         0x8001CEF4
    // 0x8033025C: nop

    func_8001CEF4(rdram, ctx);
        goto after_12;
    // 0x8033025C: nop

    after_12:
    // 0x80330260: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80330264: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330268: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033026C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80330270: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330274: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80330278: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x8033027C: jal         0x8001CD20
    // 0x80330280: nop

    func_8001CD20(rdram, ctx);
        goto after_13;
    // 0x80330280: nop

    after_13:
L_80330284:
    // 0x80330284: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x80330288: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x8033028C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330290: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80330294: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330298: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x8033029C: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x803302A0: jal         0x8001AD6C
    // 0x803302A4: nop

    func_8001AD6C(rdram, ctx);
        goto after_14;
    // 0x803302A4: nop

    after_14:
    // 0x803302A8: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x803302AC: nop

    // 0x803302B0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803302B4: b           L_803301E4
    // 0x803302B8: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
        goto L_803301E4;
    // 0x803302B8: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
L_803302BC:
    // 0x803302BC: b           L_803302C4
    // 0x803302C0: nop

        goto L_803302C4;
    // 0x803302C0: nop

L_803302C4:
    // 0x803302C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803302C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803302CC: jr          $ra
    // 0x803302D0: nop

    return;
    // 0x803302D0: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330008: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x8033000C: lb          $t6, 0x190C($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X190C);
    // 0x80330010: nop

    // 0x80330014: bne         $t6, $zero, L_8033002C
    if (ctx->r14 != 0) {
        // 0x80330018: nop
    
            goto L_8033002C;
    }
    // 0x80330018: nop

    // 0x8033001C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330020: sh          $zero, 0x190E($at)
    MEM_H(0X190E, ctx->r1) = 0;
    // 0x80330024: b           L_803300D4
    // 0x80330028: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_803300D4;
    // 0x80330028: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8033002C:
    // 0x8033002C: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80330030: lh          $t7, 0x190E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X190E);
    // 0x80330034: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330038: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8033003C: sh          $t8, 0x190E($at)
    MEM_H(0X190E, ctx->r1) = ctx->r24;
    // 0x80330040: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80330044: lh          $t9, 0x190E($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X190E);
    // 0x80330048: nop

    // 0x8033004C: slti        $at, $t9, 0x2D
    ctx->r1 = SIGNED(ctx->r25) < 0X2D ? 1 : 0;
    // 0x80330050: beq         $at, $zero, L_80330064
    if (ctx->r1 == 0) {
        // 0x80330054: nop
    
            goto L_80330064;
    }
    // 0x80330054: nop

    // 0x80330058: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033005C: b           L_803300D4
    // 0x80330060: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
        goto L_803300D4;
    // 0x80330060: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80330064:
    // 0x80330064: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80330068: lh          $t1, 0x190E($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X190E);
    // 0x8033006C: nop

    // 0x80330070: slti        $at, $t1, 0x3C
    ctx->r1 = SIGNED(ctx->r9) < 0X3C ? 1 : 0;
    // 0x80330074: beq         $at, $zero, L_80330084
    if (ctx->r1 == 0) {
        // 0x80330078: nop
    
            goto L_80330084;
    }
    // 0x80330078: nop

    // 0x8033007C: b           L_803300D4
    // 0x80330080: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_803300D4;
    // 0x80330080: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80330084:
    // 0x80330084: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80330088: lh          $t2, 0x190E($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X190E);
    // 0x8033008C: nop

    // 0x80330090: slti        $at, $t2, 0x69
    ctx->r1 = SIGNED(ctx->r10) < 0X69 ? 1 : 0;
    // 0x80330094: beq         $at, $zero, L_803300A8
    if (ctx->r1 == 0) {
        // 0x80330098: nop
    
            goto L_803300A8;
    }
    // 0x80330098: nop

    // 0x8033009C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803300A0: b           L_803300D4
    // 0x803300A4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
        goto L_803300D4;
    // 0x803300A4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_803300A8:
    // 0x803300A8: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803300AC: lh          $t4, 0x190E($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X190E);
    // 0x803300B0: nop

    // 0x803300B4: slti        $at, $t4, 0x78
    ctx->r1 = SIGNED(ctx->r12) < 0X78 ? 1 : 0;
    // 0x803300B8: beq         $at, $zero, L_803300C8
    if (ctx->r1 == 0) {
        // 0x803300BC: nop
    
            goto L_803300C8;
    }
    // 0x803300BC: nop

    // 0x803300C0: b           L_803300D4
    // 0x803300C4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_803300D4;
    // 0x803300C4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_803300C8:
    // 0x803300C8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803300CC: sh          $zero, 0x190E($at)
    MEM_H(0X190E, ctx->r1) = 0;
    // 0x803300D0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_803300D4:
    // 0x803300D4: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803300D8: lb          $t5, 0x190C($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X190C);
    // 0x803300DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803300E0: bne         $t5, $at, L_80330174
    if (ctx->r13 != ctx->r1) {
        // 0x803300E4: nop
    
            goto L_80330174;
    }
    // 0x803300E4: nop

    // 0x803300E8: b           L_803300F0
    // 0x803300EC: nop

        goto L_803300F0;
    // 0x803300EC: nop

L_803300F0:
    // 0x803300F0: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x803300F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803300F8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x803300FC: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    // 0x80330100: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x80330104: jal         0x80063200
    // 0x80330108: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    func_80063200(rdram, ctx);
        goto after_0;
    // 0x80330108: addiu       $a3, $zero, 0xDC
    ctx->r7 = ADD32(0, 0XDC);
    after_0:
    // 0x8033010C: jal         0x8006357C
    // 0x80330110: nop

    func_8006357C(rdram, ctx);
        goto after_1;
    // 0x80330110: nop

    after_1:
    // 0x80330114: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330118: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033011C: bne         $t7, $at, L_80330144
    if (ctx->r15 != ctx->r1) {
        // 0x80330120: nop
    
            goto L_80330144;
    }
    // 0x80330120: nop

    // 0x80330124: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330128: addiu       $a3, $a3, 0x1850
    ctx->r7 = ADD32(ctx->r7, 0X1850);
    // 0x8033012C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80330130: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x80330134: jal         0x80063C58
    // 0x80330138: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_2;
    // 0x80330138: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_2:
    // 0x8033013C: b           L_8033016C
    // 0x80330140: nop

        goto L_8033016C;
    // 0x80330140: nop

L_80330144:
    // 0x80330144: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330148: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033014C: bne         $t8, $at, L_8033016C
    if (ctx->r24 != ctx->r1) {
        // 0x80330150: nop
    
            goto L_8033016C;
    }
    // 0x80330150: nop

    // 0x80330154: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330158: addiu       $a3, $a3, 0x1850
    ctx->r7 = ADD32(ctx->r7, 0X1850);
    // 0x8033015C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330160: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    // 0x80330164: jal         0x80063C58
    // 0x80330168: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_3;
    // 0x80330168: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_3:
L_8033016C:
    // 0x8033016C: b           L_80330174
    // 0x80330170: nop

        goto L_80330174;
    // 0x80330170: nop

L_80330174:
    // 0x80330174: b           L_8033017C
    // 0x80330178: nop

        goto L_8033017C;
    // 0x80330178: nop

L_8033017C:
    // 0x8033017C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330180: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330184: jr          $ra
    // 0x80330188: nop

    return;
    // 0x80330188: nop

;}
RECOMP_FUNC void func_803301AC_unk_bin_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803301AC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803301B0: sb          $zero, 0x190C($at)
    MEM_B(0X190C, ctx->r1) = 0;
    // 0x803301B4: jr          $ra
    // 0x803301B8: nop

    return;
    // 0x803301B8: nop

    // 0x803301BC: jr          $ra
    // 0x803301C0: nop

    return;
    // 0x803301C0: nop

;}
RECOMP_FUNC void func_80330950_unk_bin_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330950: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330958: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x8033095C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80330960: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330964: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x80330968: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033096C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330970: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330974: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330978: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033097C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330980: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330984: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330988: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x8033098C: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x80330990: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330994: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330998: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x8033099C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803309A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803309A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803309A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803309AC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803309B0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803309B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309B8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803309BC: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x803309C0: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x803309C4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x803309C8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803309CC: lui         $at, 0x42EE
    ctx->r1 = S32(0X42EE << 16);
    // 0x803309D0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803309D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803309D8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803309DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803309E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803309E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803309E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309EC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803309F0: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x803309F4: addiu       $t5, $zero, 0x1A
    ctx->r13 = ADD32(0, 0X1A);
    // 0x803309F8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x803309FC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A00: lui         $at, 0x42EC
    ctx->r1 = S32(0X42EC << 16);
    // 0x80330A04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330A08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330A10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330A14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330A1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A20: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330A24: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80330A28: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x80330A2C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80330A30: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A34: lui         $at, 0x4357
    ctx->r1 = S32(0X4357 << 16);
    // 0x80330A38: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330A3C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330A40: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330A44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330A48: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330A4C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330A50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A54: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330A58: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80330A5C: addiu       $t1, $zero, 0x1B
    ctx->r9 = ADD32(0, 0X1B);
    // 0x80330A60: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80330A64: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A68: lui         $at, 0x4356
    ctx->r1 = S32(0X4356 << 16);
    // 0x80330A6C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330A70: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330A74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330A78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330A7C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330A80: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330A84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A88: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330A8C: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
    // 0x80330A90: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330A94: lw          $t4, 0x1904($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1904);
    // 0x80330A98: nop

    // 0x80330A9C: beq         $t4, $zero, L_80330BE0
    if (ctx->r12 == 0) {
        // 0x80330AA0: nop
    
            goto L_80330BE0;
    }
    // 0x80330AA0: nop

    // 0x80330AA4: addiu       $t5, $zero, 0x16
    ctx->r13 = ADD32(0, 0X16);
    // 0x80330AA8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80330AAC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AB0: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x80330AB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330AB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330ABC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330AC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330AC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330ACC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330AD0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330AD4: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80330AD8: addiu       $t8, $zero, 0x1C
    ctx->r24 = ADD32(0, 0X1C);
    // 0x80330ADC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80330AE0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AE4: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x80330AE8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330AEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330AF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330AF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330AF8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330AFC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330B00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B04: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330B08: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330B0C: addiu       $t1, $zero, 0x17
    ctx->r9 = ADD32(0, 0X17);
    // 0x80330B10: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80330B14: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B18: lui         $at, 0x42EE
    ctx->r1 = S32(0X42EE << 16);
    // 0x80330B1C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330B20: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330B24: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330B28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330B2C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330B30: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330B34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B38: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330B3C: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80330B40: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x80330B44: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80330B48: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B4C: lui         $at, 0x42EC
    ctx->r1 = S32(0X42EC << 16);
    // 0x80330B50: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330B54: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330B58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330B5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330B60: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330B64: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330B68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B6C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330B70: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80330B74: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80330B78: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80330B7C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B80: lui         $at, 0x4357
    ctx->r1 = S32(0X4357 << 16);
    // 0x80330B84: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330B88: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330B8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330B90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330B94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330B98: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330B9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BA0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330BA4: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80330BA8: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x80330BAC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80330BB0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BB4: lui         $at, 0x4356
    ctx->r1 = S32(0X4356 << 16);
    // 0x80330BB8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330BBC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330BC0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330BC4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330BC8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330BCC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330BD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BD4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330BD8: b           L_80330CC0
    // 0x80330BDC: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
        goto L_80330CC0;
    // 0x80330BDC: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
L_80330BE0:
    // 0x80330BE0: addiu       $t3, $zero, 0x16
    ctx->r11 = ADD32(0, 0X16);
    // 0x80330BE4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80330BE8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BEC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80330BF0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330BF4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330BF8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330BFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330C00: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330C04: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330C08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C0C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330C10: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80330C14: addiu       $t6, $zero, 0x1C
    ctx->r14 = ADD32(0, 0X1C);
    // 0x80330C18: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80330C1C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C20: lui         $at, 0x428E
    ctx->r1 = S32(0X428E << 16);
    // 0x80330C24: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330C28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330C2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330C30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330C34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330C38: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330C3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C40: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330C44: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330C48: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x80330C4C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330C50: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C54: lui         $at, 0x4328
    ctx->r1 = S32(0X4328 << 16);
    // 0x80330C58: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330C5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330C60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330C64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330C68: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330C6C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330C70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C74: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330C78: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80330C7C: addiu       $t2, $zero, 0x1D
    ctx->r10 = ADD32(0, 0X1D);
    // 0x80330C80: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80330C84: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C88: lui         $at, 0x4329
    ctx->r1 = S32(0X4329 << 16);
    // 0x80330C8C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330C90: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330C94: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330C98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330C9C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330CA0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330CA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CA8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330CAC: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80330CB0: jal         0x800604A8
    // 0x80330CB4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_800604A8(rdram, ctx);
        goto after_0;
    // 0x80330CB4: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x80330CB8: jal         0x800604A8
    // 0x80330CBC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_800604A8(rdram, ctx);
        goto after_1;
    // 0x80330CBC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
L_80330CC0:
    // 0x80330CC0: b           L_80330CC8
    // 0x80330CC4: nop

        goto L_80330CC8;
    // 0x80330CC4: nop

L_80330CC8:
    // 0x80330CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330CCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330CD0: jr          $ra
    // 0x80330CD4: nop

    return;
    // 0x80330CD4: nop

;}
RECOMP_FUNC void func_80330CD8_unk_bin_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330CD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330CDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330CE0: jal         0x80062EAC
    // 0x80330CE4: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x80330CE4: nop

    after_0:
    // 0x80330CE8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80330CEC: jal         0x8001D1D4
    // 0x80330CF0: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x80330CF0: nop

    after_1:
    // 0x80330CF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330CF8: bne         $v0, $at, L_80330D08
    if (ctx->r2 != ctx->r1) {
        // 0x80330CFC: nop
    
            goto L_80330D08;
    }
    // 0x80330CFC: nop

    // 0x80330D00: b           L_803313A0
    // 0x80330D04: nop

        goto L_803313A0;
    // 0x80330D04: nop

L_80330D08:
    // 0x80330D08: jal         0x8001D1D4
    // 0x80330D0C: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x80330D0C: nop

    after_2:
    // 0x80330D10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330D14: bne         $v0, $at, L_80330D30
    if (ctx->r2 != ctx->r1) {
        // 0x80330D18: nop
    
            goto L_80330D30;
    }
    // 0x80330D18: nop

    // 0x80330D1C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330D20: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80330D24: sw          $t6, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r14;
    // 0x80330D28: b           L_803313A0
    // 0x80330D2C: nop

        goto L_803313A0;
    // 0x80330D2C: nop

L_80330D30:
    // 0x80330D30: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80330D34: addiu       $t7, $t7, -0x1D50
    ctx->r15 = ADD32(ctx->r15, -0X1D50);
    // 0x80330D38: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80330D3C: nop

    // 0x80330D40: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80330D44: beq         $t9, $zero, L_80330D7C
    if (ctx->r25 == 0) {
        // 0x80330D48: nop
    
            goto L_80330D7C;
    }
    // 0x80330D48: nop

    // 0x80330D4C: jal         0x8001D2C0
    // 0x80330D50: nop

    func_8001D2C0(rdram, ctx);
        goto after_3;
    // 0x80330D50: nop

    after_3:
    // 0x80330D54: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330D58: sw          $zero, 0x1900($at)
    MEM_W(0X1900, ctx->r1) = 0;
    // 0x80330D5C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D64: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80330D68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330D6C: jal         0x800178D4
    // 0x80330D70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x80330D70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80330D74: b           L_80331188
    // 0x80330D78: nop

        goto L_80331188;
    // 0x80330D78: nop

L_80330D7C:
    // 0x80330D7C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330D80: addiu       $t0, $t0, -0x1D50
    ctx->r8 = ADD32(ctx->r8, -0X1D50);
    // 0x80330D84: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80330D88: nop

    // 0x80330D8C: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x80330D90: beq         $t2, $zero, L_80330DCC
    if (ctx->r10 == 0) {
        // 0x80330D94: nop
    
            goto L_80330DCC;
    }
    // 0x80330D94: nop

    // 0x80330D98: jal         0x8001D2C0
    // 0x80330D9C: nop

    func_8001D2C0(rdram, ctx);
        goto after_5;
    // 0x80330D9C: nop

    after_5:
    // 0x80330DA0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80330DA4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330DA8: sw          $t3, 0x1900($at)
    MEM_W(0X1900, ctx->r1) = ctx->r11;
    // 0x80330DAC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330DB4: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x80330DB8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330DBC: jal         0x800178D4
    // 0x80330DC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_6;
    // 0x80330DC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x80330DC4: b           L_80331188
    // 0x80330DC8: nop

        goto L_80331188;
    // 0x80330DC8: nop

L_80330DCC:
    // 0x80330DCC: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330DD0: lw          $t4, 0x1904($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1904);
    // 0x80330DD4: nop

    // 0x80330DD8: beq         $t4, $zero, L_80330F94
    if (ctx->r12 == 0) {
        // 0x80330DDC: nop
    
            goto L_80330F94;
    }
    // 0x80330DDC: nop

    // 0x80330DE0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330DE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330DE8: bne         $t5, $at, L_80330E44
    if (ctx->r13 != ctx->r1) {
        // 0x80330DEC: nop
    
            goto L_80330E44;
    }
    // 0x80330DEC: nop

    // 0x80330DF0: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330DF4: lw          $t6, 0x1908($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1908);
    // 0x80330DF8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80330DFC: bne         $t6, $at, L_80330E10
    if (ctx->r14 != ctx->r1) {
        // 0x80330E00: nop
    
            goto L_80330E10;
    }
    // 0x80330E00: nop

    // 0x80330E04: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E08: b           L_80330E24
    // 0x80330E0C: sw          $zero, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = 0;
        goto L_80330E24;
    // 0x80330E0C: sw          $zero, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = 0;
L_80330E10:
    // 0x80330E10: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80330E14: lw          $t7, 0x1908($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1908);
    // 0x80330E18: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E1C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80330E20: sw          $t8, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r24;
L_80330E24:
    // 0x80330E24: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330E28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E2C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80330E30: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330E34: jal         0x800178D4
    // 0x80330E38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_7;
    // 0x80330E38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80330E3C: b           L_80330F8C
    // 0x80330E40: nop

        goto L_80330F8C;
    // 0x80330E40: nop

L_80330E44:
    // 0x80330E44: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80330E48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330E4C: bne         $t9, $at, L_80330EAC
    if (ctx->r25 != ctx->r1) {
        // 0x80330E50: nop
    
            goto L_80330EAC;
    }
    // 0x80330E50: nop

    // 0x80330E54: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330E58: lw          $t0, 0x1908($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1908);
    // 0x80330E5C: nop

    // 0x80330E60: bne         $t0, $zero, L_80330E78
    if (ctx->r8 != 0) {
        // 0x80330E64: nop
    
            goto L_80330E78;
    }
    // 0x80330E64: nop

    // 0x80330E68: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80330E6C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E70: b           L_80330E8C
    // 0x80330E74: sw          $t1, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r9;
        goto L_80330E8C;
    // 0x80330E74: sw          $t1, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r9;
L_80330E78:
    // 0x80330E78: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80330E7C: lw          $t2, 0x1908($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1908);
    // 0x80330E80: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330E84: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80330E88: sw          $t3, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r11;
L_80330E8C:
    // 0x80330E8C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E94: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80330E98: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330E9C: jal         0x800178D4
    // 0x80330EA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_8;
    // 0x80330EA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x80330EA4: b           L_80330F8C
    // 0x80330EA8: nop

        goto L_80330F8C;
    // 0x80330EA8: nop

L_80330EAC:
    // 0x80330EAC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80330EB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330EB4: bne         $t4, $at, L_80330F20
    if (ctx->r12 != ctx->r1) {
        // 0x80330EB8: nop
    
            goto L_80330F20;
    }
    // 0x80330EB8: nop

    // 0x80330EBC: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80330EC0: lw          $t5, 0x1908($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1908);
    // 0x80330EC4: nop

    // 0x80330EC8: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80330ECC: bne         $at, $zero, L_80330EEC
    if (ctx->r1 != 0) {
        // 0x80330ED0: nop
    
            goto L_80330EEC;
    }
    // 0x80330ED0: nop

    // 0x80330ED4: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330ED8: lw          $t6, 0x1908($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1908);
    // 0x80330EDC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330EE0: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x80330EE4: b           L_80330F00
    // 0x80330EE8: sw          $t7, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r15;
        goto L_80330F00;
    // 0x80330EE8: sw          $t7, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r15;
L_80330EEC:
    // 0x80330EEC: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330EF0: lw          $t8, 0x1908($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1908);
    // 0x80330EF4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330EF8: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x80330EFC: sw          $t9, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r25;
L_80330F00:
    // 0x80330F00: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F08: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80330F0C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330F10: jal         0x800178D4
    // 0x80330F14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_9;
    // 0x80330F14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x80330F18: b           L_80330F8C
    // 0x80330F1C: nop

        goto L_80330F8C;
    // 0x80330F1C: nop

L_80330F20:
    // 0x80330F20: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80330F24: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80330F28: bne         $t0, $at, L_80330F8C
    if (ctx->r8 != ctx->r1) {
        // 0x80330F2C: nop
    
            goto L_80330F8C;
    }
    // 0x80330F2C: nop

    // 0x80330F30: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80330F34: lw          $t1, 0x1908($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1908);
    // 0x80330F38: nop

    // 0x80330F3C: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80330F40: bne         $at, $zero, L_80330F60
    if (ctx->r1 != 0) {
        // 0x80330F44: nop
    
            goto L_80330F60;
    }
    // 0x80330F44: nop

    // 0x80330F48: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80330F4C: lw          $t2, 0x1908($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1908);
    // 0x80330F50: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330F54: addiu       $t3, $t2, -0x3
    ctx->r11 = ADD32(ctx->r10, -0X3);
    // 0x80330F58: b           L_80330F74
    // 0x80330F5C: sw          $t3, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r11;
        goto L_80330F74;
    // 0x80330F5C: sw          $t3, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r11;
L_80330F60:
    // 0x80330F60: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330F64: lw          $t4, 0x1908($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1908);
    // 0x80330F68: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330F6C: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x80330F70: sw          $t5, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r13;
L_80330F74:
    // 0x80330F74: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330F78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F7C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80330F80: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330F84: jal         0x800178D4
    // 0x80330F88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_10;
    // 0x80330F88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
L_80330F8C:
    // 0x80330F8C: b           L_80331188
    // 0x80330F90: nop

        goto L_80331188;
    // 0x80330F90: nop

L_80330F94:
    // 0x80330F94: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80330F98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330F9C: bne         $t6, $at, L_80330FF8
    if (ctx->r14 != ctx->r1) {
        // 0x80330FA0: nop
    
            goto L_80330FF8;
    }
    // 0x80330FA0: nop

    // 0x80330FA4: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80330FA8: lw          $t7, 0x1908($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1908);
    // 0x80330FAC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80330FB0: bne         $t7, $at, L_80330FC4
    if (ctx->r15 != ctx->r1) {
        // 0x80330FB4: nop
    
            goto L_80330FC4;
    }
    // 0x80330FB4: nop

    // 0x80330FB8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330FBC: b           L_80330FD8
    // 0x80330FC0: sw          $zero, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = 0;
        goto L_80330FD8;
    // 0x80330FC0: sw          $zero, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = 0;
L_80330FC4:
    // 0x80330FC4: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330FC8: lw          $t8, 0x1908($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1908);
    // 0x80330FCC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330FD0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80330FD4: sw          $t9, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r25;
L_80330FD8:
    // 0x80330FD8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330FE0: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80330FE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330FE8: jal         0x800178D4
    // 0x80330FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_11;
    // 0x80330FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80330FF0: b           L_80331188
    // 0x80330FF4: nop

        goto L_80331188;
    // 0x80330FF4: nop

L_80330FF8:
    // 0x80330FF8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80330FFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331000: bne         $t0, $at, L_80331060
    if (ctx->r8 != ctx->r1) {
        // 0x80331004: nop
    
            goto L_80331060;
    }
    // 0x80331004: nop

    // 0x80331008: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x8033100C: lw          $t1, 0x1908($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1908);
    // 0x80331010: nop

    // 0x80331014: bne         $t1, $zero, L_8033102C
    if (ctx->r9 != 0) {
        // 0x80331018: nop
    
            goto L_8033102C;
    }
    // 0x80331018: nop

    // 0x8033101C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80331020: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331024: b           L_80331040
    // 0x80331028: sw          $t2, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r10;
        goto L_80331040;
    // 0x80331028: sw          $t2, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r10;
L_8033102C:
    // 0x8033102C: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80331030: lw          $t3, 0x1908($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X1908);
    // 0x80331034: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331038: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8033103C: sw          $t4, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r12;
L_80331040:
    // 0x80331040: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331048: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x8033104C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331050: jal         0x800178D4
    // 0x80331054: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_12;
    // 0x80331054: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x80331058: b           L_80331188
    // 0x8033105C: nop

        goto L_80331188;
    // 0x8033105C: nop

L_80331060:
    // 0x80331060: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80331064: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331068: bne         $t5, $at, L_803310F8
    if (ctx->r13 != ctx->r1) {
        // 0x8033106C: nop
    
            goto L_803310F8;
    }
    // 0x8033106C: nop

    // 0x80331070: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331074: lw          $t6, 0x1908($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1908);
    // 0x80331078: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033107C: bne         $t6, $at, L_80331094
    if (ctx->r14 != ctx->r1) {
        // 0x80331080: nop
    
            goto L_80331094;
    }
    // 0x80331080: nop

    // 0x80331084: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80331088: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033108C: b           L_803310D8
    // 0x80331090: sw          $t7, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r15;
        goto L_803310D8;
    // 0x80331090: sw          $t7, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r15;
L_80331094:
    // 0x80331094: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331098: lw          $t8, 0x1908($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1908);
    // 0x8033109C: nop

    // 0x803310A0: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x803310A4: bne         $at, $zero, L_803310C4
    if (ctx->r1 != 0) {
        // 0x803310A8: nop
    
            goto L_803310C4;
    }
    // 0x803310A8: nop

    // 0x803310AC: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803310B0: lw          $t9, 0x1908($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1908);
    // 0x803310B4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803310B8: addiu       $t0, $t9, -0x3
    ctx->r8 = ADD32(ctx->r25, -0X3);
    // 0x803310BC: b           L_803310D8
    // 0x803310C0: sw          $t0, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r8;
        goto L_803310D8;
    // 0x803310C0: sw          $t0, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r8;
L_803310C4:
    // 0x803310C4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803310C8: lw          $t1, 0x1908($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1908);
    // 0x803310CC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803310D0: addiu       $t2, $t1, 0x3
    ctx->r10 = ADD32(ctx->r9, 0X3);
    // 0x803310D4: sw          $t2, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r10;
L_803310D8:
    // 0x803310D8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803310DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803310E0: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x803310E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803310E8: jal         0x800178D4
    // 0x803310EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_13;
    // 0x803310EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x803310F0: b           L_80331188
    // 0x803310F4: nop

        goto L_80331188;
    // 0x803310F4: nop

L_803310F8:
    // 0x803310F8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x803310FC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80331100: bne         $t3, $at, L_80331188
    if (ctx->r11 != ctx->r1) {
        // 0x80331104: nop
    
            goto L_80331188;
    }
    // 0x80331104: nop

    // 0x80331108: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x8033110C: lw          $t4, 0x1908($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1908);
    // 0x80331110: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331114: bne         $t4, $at, L_8033112C
    if (ctx->r12 != ctx->r1) {
        // 0x80331118: nop
    
            goto L_8033112C;
    }
    // 0x80331118: nop

    // 0x8033111C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80331120: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331124: b           L_80331170
    // 0x80331128: sw          $t5, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r13;
        goto L_80331170;
    // 0x80331128: sw          $t5, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r13;
L_8033112C:
    // 0x8033112C: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331130: lw          $t6, 0x1908($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1908);
    // 0x80331134: nop

    // 0x80331138: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x8033113C: bne         $at, $zero, L_8033115C
    if (ctx->r1 != 0) {
        // 0x80331140: nop
    
            goto L_8033115C;
    }
    // 0x80331140: nop

    // 0x80331144: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331148: lw          $t7, 0x1908($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1908);
    // 0x8033114C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331150: addiu       $t8, $t7, -0x3
    ctx->r24 = ADD32(ctx->r15, -0X3);
    // 0x80331154: b           L_80331170
    // 0x80331158: sw          $t8, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r24;
        goto L_80331170;
    // 0x80331158: sw          $t8, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r24;
L_8033115C:
    // 0x8033115C: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331160: lw          $t9, 0x1908($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1908);
    // 0x80331164: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331168: addiu       $t0, $t9, 0x3
    ctx->r8 = ADD32(ctx->r25, 0X3);
    // 0x8033116C: sw          $t0, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r8;
L_80331170:
    // 0x80331170: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331178: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x8033117C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331180: jal         0x800178D4
    // 0x80331184: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_14;
    // 0x80331184: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_14:
L_80331188:
    // 0x80331188: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x8033118C: lw          $t1, 0x1904($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1904);
    // 0x80331190: nop

    // 0x80331194: beq         $t1, $zero, L_803311C4
    if (ctx->r9 == 0) {
        // 0x80331198: nop
    
            goto L_803311C4;
    }
    // 0x80331198: nop

    // 0x8033119C: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803311A0: lw          $t2, 0x1908($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1908);
    // 0x803311A4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803311A8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803311AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803311B0: lwc1        $f4, 0x1898($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1898);
    // 0x803311B4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803311B8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803311BC: b           L_803311E8
    // 0x803311C0: swc1        $f4, 0x28B0($t4)
    MEM_W(0X28B0, ctx->r12) = ctx->f4.u32l;
        goto L_803311E8;
    // 0x803311C0: swc1        $f4, 0x28B0($t4)
    MEM_W(0X28B0, ctx->r12) = ctx->f4.u32l;
L_803311C4:
    // 0x803311C4: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803311C8: lw          $t5, 0x1908($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1908);
    // 0x803311CC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803311D0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803311D4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803311D8: lwc1        $f6, 0x18C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X18C8);
    // 0x803311DC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803311E0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803311E4: swc1        $f6, 0x28B0($t7)
    MEM_W(0X28B0, ctx->r15) = ctx->f6.u32l;
L_803311E8:
    // 0x803311E8: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803311EC: lw          $t8, 0x1908($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1908);
    // 0x803311F0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803311F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803311F8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803311FC: lwc1        $f8, 0x18B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X18B0);
    // 0x80331200: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331204: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80331208: swc1        $f8, 0x28B4($t0)
    MEM_W(0X28B4, ctx->r8) = ctx->f8.u32l;
    // 0x8033120C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331210: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80331214: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331218: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033121C: lwc1        $f12, 0xD3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XD3C);
    // 0x80331220: jal         0x80015538
    // 0x80331224: nop

    Math_WrapAngle(rdram, ctx);
        goto after_15;
    // 0x80331224: nop

    after_15:
    // 0x80331228: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033122C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331230: swc1        $f0, 0xD3C($t2)
    MEM_W(0XD3C, ctx->r10) = ctx->f0.u32l;
    // 0x80331234: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331238: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033123C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331240: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331244: lwc1        $f12, 0xE8C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0XE8C);
    // 0x80331248: jal         0x80015538
    // 0x8033124C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_16;
    // 0x8033124C: nop

    after_16:
    // 0x80331250: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331254: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80331258: swc1        $f0, 0xE8C($t4)
    MEM_W(0XE8C, ctx->r12) = ctx->f0.u32l;
    // 0x8033125C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331260: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331264: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331268: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033126C: lwc1        $f12, 0x112C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X112C);
    // 0x80331270: jal         0x80015538
    // 0x80331274: nop

    Math_WrapAngle(rdram, ctx);
        goto after_17;
    // 0x80331274: nop

    after_17:
    // 0x80331278: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033127C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331280: swc1        $f0, 0x112C($t6)
    MEM_W(0X112C, ctx->r14) = ctx->f0.u32l;
    // 0x80331284: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331288: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033128C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331290: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331294: lwc1        $f12, 0x127C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X127C);
    // 0x80331298: jal         0x80015538
    // 0x8033129C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_18;
    // 0x8033129C: nop

    after_18:
    // 0x803312A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803312A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803312A8: swc1        $f0, 0x127C($t8)
    MEM_W(0X127C, ctx->r24) = ctx->f0.u32l;
    // 0x803312AC: jal         0x8001994C
    // 0x803312B0: nop

    func_8001994C(rdram, ctx);
        goto after_19;
    // 0x803312B0: nop

    after_19:
    // 0x803312B4: jal         0x800628C0
    // 0x803312B8: nop

    func_800628C0(rdram, ctx);
        goto after_20;
    // 0x803312B8: nop

    after_20:
    // 0x803312BC: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_803312C0:
    // 0x803312C0: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x803312C4: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x803312C8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803312CC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803312D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803312D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803312D8: lh          $t1, 0x4998($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4998);
    // 0x803312DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803312E0: bne         $t1, $at, L_803312F0
    if (ctx->r9 != ctx->r1) {
        // 0x803312E4: nop
    
            goto L_803312F0;
    }
    // 0x803312E4: nop

    // 0x803312E8: b           L_80331398
    // 0x803312EC: nop

        goto L_80331398;
    // 0x803312EC: nop

L_803312F0:
    // 0x803312F0: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x803312F4: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x803312F8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803312FC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80331300: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331304: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331308: lh          $t4, 0x49A0($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X49A0);
    // 0x8033130C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331310: beq         $t4, $at, L_80331360
    if (ctx->r12 == ctx->r1) {
        // 0x80331314: nop
    
            goto L_80331360;
    }
    // 0x80331314: nop

    // 0x80331318: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x8033131C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80331320: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331324: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80331328: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033132C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80331330: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80331334: jal         0x8001CEF4
    // 0x80331338: nop

    func_8001CEF4(rdram, ctx);
        goto after_21;
    // 0x80331338: nop

    after_21:
    // 0x8033133C: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x80331340: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80331344: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331348: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8033134C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331350: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80331354: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80331358: jal         0x8001CD20
    // 0x8033135C: nop

    func_8001CD20(rdram, ctx);
        goto after_22;
    // 0x8033135C: nop

    after_22:
L_80331360:
    // 0x80331360: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80331364: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80331368: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033136C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80331370: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331374: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80331378: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x8033137C: jal         0x8001AD6C
    // 0x80331380: nop

    func_8001AD6C(rdram, ctx);
        goto after_23;
    // 0x80331380: nop

    after_23:
    // 0x80331384: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80331388: nop

    // 0x8033138C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80331390: b           L_803312C0
    // 0x80331394: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
        goto L_803312C0;
    // 0x80331394: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
L_80331398:
    // 0x80331398: b           L_803313A0
    // 0x8033139C: nop

        goto L_803313A0;
    // 0x8033139C: nop

L_803313A0:
    // 0x803313A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803313A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803313A8: jr          $ra
    // 0x803313AC: nop

    return;
    // 0x803313AC: nop

;}
RECOMP_FUNC void func_803316CC_unk_bin_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803316D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803316D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803316D8: jal         0x8001ECB8
    // 0x803316DC: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x803316DC: nop

    after_0:
    // 0x803316E0: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803316E4: addiu       $t6, $t6, 0x13B0
    ctx->r14 = ADD32(ctx->r14, 0X13B0);
    // 0x803316E8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803316EC: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x803316F0: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803316F4: addiu       $t7, $t7, 0xCD8
    ctx->r15 = ADD32(ctx->r15, 0XCD8);
    // 0x803316F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803316FC: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x80331700: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80331704: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331708: sw          $t8, 0x1908($at)
    MEM_W(0X1908, ctx->r1) = ctx->r24;
    // 0x8033170C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331710: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x80331714: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331718: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033171C: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x80331720: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331724: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331728: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x8033172C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331730: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331734: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x80331738: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033173C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331740: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x80331744: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331748: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033174C: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x80331750: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331754: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331758: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x8033175C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331760: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331764: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x80331768: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033176C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331770: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331774: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x80331778: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033177C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331780: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x80331784: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x80331788: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033178C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331790: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x80331794: jal         0x80019C84
    // 0x80331798: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80331798: nop

    after_1:
    // 0x8033179C: jal         0x80019D2C
    // 0x803317A0: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x803317A0: nop

    after_2:
    // 0x803317A4: jal         0x8001A258
    // 0x803317A8: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x803317A8: nop

    after_3:
    // 0x803317AC: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x803317B0: addiu       $t9, $t9, 0x2038
    ctx->r25 = ADD32(ctx->r25, 0X2038);
    // 0x803317B4: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x803317B8: sw          $t9, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r25;
    // 0x803317BC: jal         0x80060278
    // 0x803317C0: nop

    func_80060278(rdram, ctx);
        goto after_4;
    // 0x803317C0: nop

    after_4:
    // 0x803317C4: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x803317C8: jal         0x800608B8
    // 0x803317CC: addiu       $a0, $a0, 0x21B4
    ctx->r4 = ADD32(ctx->r4, 0X21B4);
    func_800608B8(rdram, ctx);
        goto after_5;
    // 0x803317CC: addiu       $a0, $a0, 0x21B4
    ctx->r4 = ADD32(ctx->r4, 0X21B4);
    after_5:
    // 0x803317D0: jal         0x80331650
    // 0x803317D4: nop

    func_80331650_unk_bin_9(rdram, ctx);
        goto after_6;
    // 0x803317D4: nop

    after_6:
    // 0x803317D8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x803317DC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803317E0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x803317E4: jal         0x8001D244
    // 0x803317E8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_7;
    // 0x803317E8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_7:
    // 0x803317EC: jal         0x8001D284
    // 0x803317F0: nop

    func_8001D284(rdram, ctx);
        goto after_8;
    // 0x803317F0: nop

    after_8:
    // 0x803317F4: jal         0x80000964
    // 0x803317F8: nop

    func_80000964(rdram, ctx);
        goto after_9;
    // 0x803317F8: nop

    after_9:
    // 0x803317FC: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80331800: lw          $t0, 0x1900($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1900);
    // 0x80331804: nop

    // 0x80331808: bne         $t0, $zero, L_80331828
    if (ctx->r8 != 0) {
        // 0x8033180C: nop
    
            goto L_80331828;
    }
    // 0x8033180C: nop

    // 0x80331810: lui         $v0, 0x8033
    ctx->r2 = S32(0X8033 << 16);
    // 0x80331814: lw          $v0, 0x1908($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1908);
    // 0x80331818: b           L_80331838
    // 0x8033181C: nop

        goto L_80331838;
    // 0x8033181C: nop

    // 0x80331820: b           L_80331830
    // 0x80331824: nop

        goto L_80331830;
    // 0x80331824: nop

L_80331828:
    // 0x80331828: b           L_80331838
    // 0x8033182C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80331838;
    // 0x8033182C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80331830:
    // 0x80331830: b           L_80331838
    // 0x80331834: nop

        goto L_80331838;
    // 0x80331834: nop

L_80331838:
    // 0x80331838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033183C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331840: jr          $ra
    // 0x80331844: nop

    return;
    // 0x80331844: nop

    // 0x80331848: nop

    // 0x8033184C: nop

;}
RECOMP_FUNC void func_8033018C_unk_bin_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033018C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330190: sb          $a0, 0x190C($at)
    MEM_B(0X190C, ctx->r1) = ctx->r4;
    // 0x80330194: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330198: sh          $zero, 0x190E($at)
    MEM_H(0X190E, ctx->r1) = 0;
    // 0x8033019C: jr          $ra
    // 0x803301A0: nop

    return;
    // 0x803301A0: nop

    // 0x803301A4: jr          $ra
    // 0x803301A8: nop

    return;
    // 0x803301A8: nop

;}
RECOMP_FUNC void func_803301C4_unk_bin_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803301C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803301C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803301CC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x803301D0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x803301D4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803301D8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803301DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803301E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803301E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803301E8: lwc1        $f4, 0x18E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X18E0);
    // 0x803301EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803301F0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803301F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301F8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803301FC: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80330200: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330204: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x80330208: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033020C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330210: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330214: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330218: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033021C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330220: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330224: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330228: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x8033022C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330230: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330234: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330238: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033023C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330240: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330244: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330248: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033024C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330250: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330254: swc1        $f8, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f8.u32l;
    // 0x80330258: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x8033025C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80330260: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330264: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330268: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033026C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330270: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330274: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330278: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033027C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330280: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330284: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80330288: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033028C: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x80330290: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330294: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330298: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033029C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803302A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803302A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302AC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803302B0: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x803302B4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x803302B8: addiu       $t8, $t8, 0x6F3C
    ctx->r24 = ADD32(ctx->r24, 0X6F3C);
    // 0x803302BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803302C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803302C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803302C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803302CC: jal         0x8001C0EC
    // 0x803302D0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803302D0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x803302D4: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x803302D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803302DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803302E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803302E4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803302E8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803302EC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803302F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803302F4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803302F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302FC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330300: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
    // 0x80330304: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330308: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x8033030C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330310: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330314: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330318: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033031C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330320: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330324: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330328: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033032C: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x80330330: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330334: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80330338: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033033C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330340: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330344: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330348: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033034C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330350: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330354: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330358: swc1        $f6, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f6.u32l;
    // 0x8033035C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330360: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80330364: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330368: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033036C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330370: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330374: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330378: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033037C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330380: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330384: swc1        $f8, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f8.u32l;
    // 0x80330388: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x8033038C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80330390: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330394: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330398: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033039C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803303A0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803303A4: lwc1        $f10, 0x18E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X18E4);
    // 0x803303A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803303AC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803303B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303B4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803303B8: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x803303BC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803303C0: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x803303C4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803303C8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803303CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803303D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803303D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803303D8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803303DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303E0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803303E4: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x803303E8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x803303EC: addiu       $t3, $t3, 0x6F44
    ctx->r11 = ADD32(ctx->r11, 0X6F44);
    // 0x803303F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803303F4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803303F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803303FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330400: jal         0x8001C0EC
    // 0x80330404: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330404: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_1:
    // 0x80330408: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033040C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80330410: addiu       $a3, $a3, 0x6F7C
    ctx->r7 = ADD32(ctx->r7, 0X6F7C);
    // 0x80330414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330418: jal         0x8001ABF4
    // 0x8033041C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033041C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330420: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330424: lw          $t4, 0x1904($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1904);
    // 0x80330428: nop

    // 0x8033042C: beq         $t4, $zero, L_803306B0
    if (ctx->r12 == 0) {
        // 0x80330430: nop
    
            goto L_803306B0;
    }
    // 0x80330430: nop

    // 0x80330434: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x80330438: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8033043C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330440: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330444: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033044C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330450: lwc1        $f18, 0x18E8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X18E8);
    // 0x80330454: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330458: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033045C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330460: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330464: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
    // 0x80330468: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033046C: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x80330470: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330474: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330478: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033047C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330480: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330484: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330488: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033048C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330490: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x80330494: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80330498: addiu       $t0, $t0, 0x6F40
    ctx->r8 = ADD32(ctx->r8, 0X6F40);
    // 0x8033049C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803304A0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803304A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803304A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803304AC: jal         0x8001C0EC
    // 0x803304B0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x803304B0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_3:
    // 0x803304B4: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x803304B8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x803304BC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803304C0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803304C4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803304C8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803304CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803304D0: lwc1        $f6, 0x18EC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X18EC);
    // 0x803304D4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803304D8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803304DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803304E0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803304E4: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x803304E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803304EC: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x803304F0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803304F4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803304F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803304FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330500: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330504: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330508: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033050C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330510: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80330514: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330518: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8033051C: addiu       $a3, $a3, 0x6FE0
    ctx->r7 = ADD32(ctx->r7, 0X6FE0);
    // 0x80330520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330524: jal         0x8001ABF4
    // 0x80330528: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80330528: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x8033052C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80330530: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80330534: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330538: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033053C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330540: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330544: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330548: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033054C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330550: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330554: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330558: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x8033055C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330560: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x80330564: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330568: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033056C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330570: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330574: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330578: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033057C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330580: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330584: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x80330588: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033058C: jal         0x800600B8
    // 0x80330590: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800600B8(rdram, ctx);
        goto after_5;
    // 0x80330590: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x80330594: beq         $v0, $zero, L_803305D0
    if (ctx->r2 == 0) {
        // 0x80330598: nop
    
            goto L_803305D0;
    }
    // 0x80330598: nop

    // 0x8033059C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x803305A0: addiu       $t1, $t1, 0x6F48
    ctx->r9 = ADD32(ctx->r9, 0X6F48);
    // 0x803305A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803305A8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803305AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803305B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803305B4: jal         0x8001C0EC
    // 0x803305B8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x803305B8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_6:
    // 0x803305BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803305C0: jal         0x8001B754
    // 0x803305C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_7;
    // 0x803305C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x803305C8: b           L_803305F0
    // 0x803305CC: nop

        goto L_803305F0;
    // 0x803305CC: nop

L_803305D0:
    // 0x803305D0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x803305D4: addiu       $t2, $t2, 0x6F48
    ctx->r10 = ADD32(ctx->r10, 0X6F48);
    // 0x803305D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803305DC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803305E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803305E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803305E8: jal         0x8001C0EC
    // 0x803305EC: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x803305EC: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_8:
L_803305F0:
    // 0x803305F0: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x803305F4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x803305F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803305FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330600: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330604: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330608: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033060C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330610: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330614: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330618: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033061C: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
    // 0x80330620: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330624: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x80330628: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033062C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330630: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330634: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033063C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330640: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330644: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330648: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x8033064C: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x80330650: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80330654: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330658: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033065C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330660: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330664: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330668: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033066C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330670: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330674: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330678: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033067C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330680: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330684: lui         $at, 0xC366
    ctx->r1 = S32(0XC366 << 16);
    // 0x80330688: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033068C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330690: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330694: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330698: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033069C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803306A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306A4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803306A8: b           L_80330938
    // 0x803306AC: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_80330938;
    // 0x803306AC: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_803306B0:
    // 0x803306B0: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x803306B4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x803306B8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803306BC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306C0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803306C4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803306C8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803306CC: lwc1        $f10, 0x18F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X18F0);
    // 0x803306D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803306D4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803306D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306DC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803306E0: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x803306E4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803306E8: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x803306EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803306F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803306F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803306F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803306FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330700: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330704: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330708: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033070C: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x80330710: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80330714: addiu       $t8, $t8, 0x6F40
    ctx->r24 = ADD32(ctx->r24, 0X6F40);
    // 0x80330718: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033071C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80330720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330724: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330728: jal         0x8001C0EC
    // 0x8033072C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_8001C0EC(rdram, ctx);
        goto after_9;
    // 0x8033072C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_9:
    // 0x80330730: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80330734: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330738: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033073C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330740: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330744: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330748: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033074C: lwc1        $f18, 0x18F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X18F4);
    // 0x80330750: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330754: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330758: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033075C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330760: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
    // 0x80330764: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330768: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x8033076C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330770: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330774: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033077C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330780: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330784: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330788: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033078C: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x80330790: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330794: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80330798: addiu       $a3, $a3, 0x6FE0
    ctx->r7 = ADD32(ctx->r7, 0X6FE0);
    // 0x8033079C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307A0: jal         0x8001ABF4
    // 0x803307A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x803307A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_10:
    // 0x803307A8: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x803307AC: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x803307B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803307B4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803307B8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803307BC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803307C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803307C4: lwc1        $f6, 0x18F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X18F8);
    // 0x803307C8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803307CC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803307D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307D4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803307D8: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x803307DC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803307E0: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x803307E4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803307E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803307EC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803307F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803307F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803307F8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803307FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330800: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330804: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80330808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033080C: jal         0x800600B8
    // 0x80330810: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800600B8(rdram, ctx);
        goto after_11;
    // 0x80330810: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x80330814: beq         $v0, $zero, L_80330850
    if (ctx->r2 == 0) {
        // 0x80330818: nop
    
            goto L_80330850;
    }
    // 0x80330818: nop

    // 0x8033081C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80330820: addiu       $t9, $t9, 0x6F48
    ctx->r25 = ADD32(ctx->r25, 0X6F48);
    // 0x80330824: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330828: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8033082C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330830: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330834: jal         0x8001C0EC
    // 0x80330838: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8001C0EC(rdram, ctx);
        goto after_12;
    // 0x80330838: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_12:
    // 0x8033083C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330840: jal         0x8001B754
    // 0x80330844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_13;
    // 0x80330844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80330848: b           L_80330870
    // 0x8033084C: nop

        goto L_80330870;
    // 0x8033084C: nop

L_80330850:
    // 0x80330850: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80330854: addiu       $t0, $t0, 0x6F48
    ctx->r8 = ADD32(ctx->r8, 0X6F48);
    // 0x80330858: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033085C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80330860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330864: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330868: jal         0x8001C0EC
    // 0x8033086C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8001C0EC(rdram, ctx);
        goto after_14;
    // 0x8033086C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_14:
L_80330870:
    // 0x80330870: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80330874: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80330878: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033087C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330880: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330884: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330888: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033088C: lwc1        $f10, 0x18FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X18FC);
    // 0x80330890: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330894: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330898: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033089C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803308A0: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x803308A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803308A8: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x803308AC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803308B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803308B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803308B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803308BC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803308C0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803308C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308C8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803308CC: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x803308D0: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x803308D4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x803308D8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803308DC: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x803308E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803308E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803308E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803308EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803308F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803308F4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803308F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308FC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330900: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
    // 0x80330904: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330908: lui         $at, 0xC366
    ctx->r1 = S32(0XC366 << 16);
    // 0x8033090C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330910: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330914: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330918: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033091C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330920: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330924: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330928: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033092C: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x80330930: jal         0x800604A8
    // 0x80330934: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_800604A8(rdram, ctx);
        goto after_15;
    // 0x80330934: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_15:
L_80330938:
    // 0x80330938: b           L_80330940
    // 0x8033093C: nop

        goto L_80330940;
    // 0x8033093C: nop

L_80330940:
    // 0x80330940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330944: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330948: jr          $ra
    // 0x8033094C: nop

    return;
    // 0x8033094C: nop

;}
RECOMP_FUNC void func_80331650_unk_bin_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331658: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8033165C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80331660: jal         0x800253EC
    // 0x80331664: nop

    func_800253EC(rdram, ctx);
        goto after_0;
    // 0x80331664: nop

    after_0:
    // 0x80331668: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8033166C: beq         $t6, $zero, L_80331684
    if (ctx->r14 == 0) {
        // 0x80331670: nop
    
            goto L_80331684;
    }
    // 0x80331670: nop

    // 0x80331674: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331678: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033167C: b           L_8033168C
    // 0x80331680: sw          $t7, 0x1904($at)
    MEM_W(0X1904, ctx->r1) = ctx->r15;
        goto L_8033168C;
    // 0x80331680: sw          $t7, 0x1904($at)
    MEM_W(0X1904, ctx->r1) = ctx->r15;
L_80331684:
    // 0x80331684: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331688: sw          $zero, 0x1904($at)
    MEM_W(0X1904, ctx->r1) = 0;
L_8033168C:
    // 0x8033168C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331690: sw          $zero, 0x1900($at)
    MEM_W(0X1900, ctx->r1) = 0;
    // 0x80331694: jal         0x803301C4
    // 0x80331698: nop

    func_803301C4_unk_bin_9(rdram, ctx);
        goto after_1;
    // 0x80331698: nop

    after_1:
    // 0x8033169C: jal         0x80330950
    // 0x803316A0: nop

    func_80330950_unk_bin_9(rdram, ctx);
        goto after_2;
    // 0x803316A0: nop

    after_2:
    // 0x803316A4: jal         0x803301AC
    // 0x803316A8: nop

    func_803301AC_unk_bin_9(rdram, ctx);
        goto after_3;
    // 0x803316A8: nop

    after_3:
    // 0x803316AC: jal         0x8033018C
    // 0x803316B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8033018C_unk_bin_9(rdram, ctx);
        goto after_4;
    // 0x803316B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x803316B4: b           L_803316BC
    // 0x803316B8: nop

        goto L_803316BC;
    // 0x803316B8: nop

L_803316BC:
    // 0x803316BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803316C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803316C4: jr          $ra
    // 0x803316C8: nop

    return;
    // 0x803316C8: nop

;}
RECOMP_FUNC void func_803313B0_unk_bin_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803313B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803313B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803313B8: jal         0x8001D4D0
    // 0x803313BC: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x803313BC: nop

    after_0:
    // 0x803313C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803313C4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803313C8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x803313CC: jal         0x8001D638
    // 0x803313D0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x803313D0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x803313D4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803313D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803313DC: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x803313E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803313E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803313E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803313EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313F0: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x803313F4: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x803313F8: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x803313FC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80331400: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80331404: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80331408: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8033140C: jal         0x80036E70
    // 0x80331410: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x80331410: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80331414: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331418: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8033141C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331420: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80331424: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80331428: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8033142C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80331430: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80331434: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x80331438: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8033143C: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x80331440: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80331444: nop

    // 0x80331448: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8033144C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331450: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80331454: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331458: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8033145C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331460: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80331464: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331468: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x8033146C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331470: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80331474: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033147C: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80331480: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x80331484: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80331488: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8033148C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80331490: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x80331494: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80331498: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x8033149C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803314A0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803314A4: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x803314A8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x803314AC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x803314B0: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x803314B4: jal         0x80037188
    // 0x803314B8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x803314B8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x803314BC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803314C0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x803314C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314C8: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x803314CC: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x803314D0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x803314D4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803314D8: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x803314DC: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x803314E0: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x803314E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803314E8: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x803314EC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803314F0: nop

    // 0x803314F4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x803314F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314FC: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x80331500: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_80331504:
    // 0x80331504: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80331508: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x8033150C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331510: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80331514: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331518: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033151C: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x80331520: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331524: bne         $t0, $at, L_80331534
    if (ctx->r8 != ctx->r1) {
        // 0x80331528: nop
    
            goto L_80331534;
    }
    // 0x80331528: nop

    // 0x8033152C: b           L_80331630
    // 0x80331530: nop

        goto L_80331630;
    // 0x80331530: nop

L_80331534:
    // 0x80331534: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x80331538: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x8033153C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331540: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80331544: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331548: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033154C: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80331550: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331554: beq         $t3, $at, L_803315F8
    if (ctx->r11 == ctx->r1) {
        // 0x80331558: nop
    
            goto L_803315F8;
    }
    // 0x80331558: nop

    // 0x8033155C: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80331560: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80331564: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331568: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8033156C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331570: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x80331574: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80331578: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x8033157C: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x80331580: jal         0x8001C1A8
    // 0x80331584: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x80331584: nop

    after_4:
    // 0x80331588: beq         $v0, $zero, L_803315F0
    if (ctx->r2 == 0) {
        // 0x8033158C: nop
    
            goto L_803315F0;
    }
    // 0x8033158C: nop

    // 0x80331590: jal         0x8001838C
    // 0x80331594: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x80331594: nop

    after_5:
    // 0x80331598: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x8033159C: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803315A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803315A4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803315A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803315AC: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x803315B0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803315B4: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x803315B8: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x803315BC: jal         0x8001B014
    // 0x803315C0: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x803315C0: nop

    after_6:
    // 0x803315C4: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x803315C8: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x803315CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803315D0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803315D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803315D8: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x803315DC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803315E0: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x803315E4: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x803315E8: jal         0x8001C384
    // 0x803315EC: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x803315EC: nop

    after_7:
L_803315F0:
    // 0x803315F0: b           L_8033161C
    // 0x803315F4: nop

        goto L_8033161C;
    // 0x803315F4: nop

L_803315F8:
    // 0x803315F8: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x803315FC: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80331600: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331604: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80331608: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033160C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80331610: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80331614: jal         0x800623E0
    // 0x80331618: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x80331618: nop

    after_8:
L_8033161C:
    // 0x8033161C: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80331620: nop

    // 0x80331624: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80331628: b           L_80331504
    // 0x8033162C: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_80331504;
    // 0x8033162C: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_80331630:
    // 0x80331630: jal         0x80330000
    // 0x80331634: nop

    func_80330000_unk_bin_9(rdram, ctx);
        goto after_9;
    // 0x80331634: nop

    after_9:
    // 0x80331638: b           L_80331640
    // 0x8033163C: nop

        goto L_80331640;
    // 0x8033163C: nop

L_80331640:
    // 0x80331640: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80331644: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80331648: jr          $ra
    // 0x8033164C: nop

    return;
    // 0x8033164C: nop

;}
RECOMP_FUNC void func_803300D4_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803300D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803300DC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x803300E0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x803300E4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x803300E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x803300EC: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x803300F0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_803300F4:
    // 0x803300F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803300F8: jal         0x8001A928
    // 0x803300FC: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x803300FC: nop

    after_0:
    // 0x80330100: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330104: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330108: jal         0x80060E40
    // 0x8033010C: nop

    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x8033010C: nop

    after_1:
    // 0x80330110: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80330114: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330118: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033011C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330120: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330124: lwc1        $f4, 0x2E20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2E20);
    // 0x80330128: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033012C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330130: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330134: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330138: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x8033013C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330140: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330144: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330148: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x8033014C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330150: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330154: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330158: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033015C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330160: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330164: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330168: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x8033016C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80330170: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80330174: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330178: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8033017C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330180: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330184: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80330188: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033018C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330190: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330194: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330198: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x8033019C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803301A0: nop

    // 0x803301A4: addiu       $t7, $t6, 0x30
    ctx->r15 = ADD32(ctx->r14, 0X30);
    // 0x803301A8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x803301AC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803301B0: nop

    // 0x803301B4: slti        $at, $t8, 0xF0
    ctx->r1 = SIGNED(ctx->r24) < 0XF0 ? 1 : 0;
    // 0x803301B8: bne         $at, $zero, L_80330204
    if (ctx->r1 != 0) {
        // 0x803301BC: nop
    
            goto L_80330204;
    }
    // 0x803301BC: nop

    // 0x803301C0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803301C4: nop

    // 0x803301C8: addiu       $t0, $t9, 0x40
    ctx->r8 = ADD32(ctx->r25, 0X40);
    // 0x803301CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x803301D0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803301D4: nop

    // 0x803301D8: bgez        $t1, L_803301E8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x803301DC: sra         $t2, $t1, 6
        ctx->r10 = S32(SIGNED(ctx->r9) >> 6);
            goto L_803301E8;
    }
    // 0x803301DC: sra         $t2, $t1, 6
    ctx->r10 = S32(SIGNED(ctx->r9) >> 6);
    // 0x803301E0: addiu       $at, $t1, 0x3F
    ctx->r1 = ADD32(ctx->r9, 0X3F);
    // 0x803301E4: sra         $t2, $at, 6
    ctx->r10 = S32(SIGNED(ctx->r1) >> 6);
L_803301E8:
    // 0x803301E8: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x803301EC: beq         $t3, $zero, L_80330200
    if (ctx->r11 == 0) {
        // 0x803301F0: nop
    
            goto L_80330200;
    }
    // 0x803301F0: nop

    // 0x803301F4: addiu       $t4, $zero, -0x18
    ctx->r12 = ADD32(0, -0X18);
    // 0x803301F8: b           L_80330204
    // 0x803301FC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
        goto L_80330204;
    // 0x803301FC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
L_80330200:
    // 0x80330200: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80330204:
    // 0x80330204: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330208: nop

    // 0x8033020C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80330210: slti        $at, $t6, 0x29
    ctx->r1 = SIGNED(ctx->r14) < 0X29 ? 1 : 0;
    // 0x80330214: bne         $at, $zero, L_803300F4
    if (ctx->r1 != 0) {
        // 0x80330218: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_803300F4;
    }
    // 0x80330218: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8033021C: b           L_80330224
    // 0x80330220: nop

        goto L_80330224;
    // 0x80330220: nop

L_80330224:
    // 0x80330224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330228: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033022C: jr          $ra
    // 0x80330230: nop

    return;
    // 0x80330230: nop

;}
RECOMP_FUNC void func_803321A8_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803321A8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803321AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803321B0: jal         0x8001D4D0
    // 0x803321B4: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x803321B4: nop

    after_0:
    // 0x803321B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803321BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803321C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803321C4: jal         0x8001D638
    // 0x803321C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x803321C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803321CC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803321D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803321D4: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x803321D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803321DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803321E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803321E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321E8: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x803321EC: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x803321F0: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x803321F4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x803321F8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x803321FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332200: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80332204: jal         0x80036E70
    // 0x80332208: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x80332208: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8033220C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332210: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80332214: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332218: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8033221C: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80332220: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80332224: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80332228: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x8033222C: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x80332230: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80332234: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x80332238: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8033223C: nop

    // 0x80332240: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80332244: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332248: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x8033224C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332250: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80332254: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332258: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x8033225C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332260: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80332264: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332268: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x8033226C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332274: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80332278: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x8033227C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80332280: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80332284: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80332288: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x8033228C: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80332290: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x80332294: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332298: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8033229C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x803322A0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x803322A4: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x803322A8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x803322AC: jal         0x80037188
    // 0x803322B0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x803322B0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x803322B4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803322B8: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x803322BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803322C0: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x803322C4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x803322C8: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x803322CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803322D0: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x803322D4: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x803322D8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x803322DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803322E0: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x803322E4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803322E8: nop

    // 0x803322EC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x803322F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803322F4: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x803322F8: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_803322FC:
    // 0x803322FC: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332300: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80332304: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332308: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8033230C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332310: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332314: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x80332318: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033231C: bne         $t0, $at, L_8033232C
    if (ctx->r8 != ctx->r1) {
        // 0x80332320: nop
    
            goto L_8033232C;
    }
    // 0x80332320: nop

    // 0x80332324: b           L_80332428
    // 0x80332328: nop

        goto L_80332428;
    // 0x80332328: nop

L_8033232C:
    // 0x8033232C: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332330: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80332334: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332338: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8033233C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332340: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332344: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x80332348: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033234C: beq         $t3, $at, L_803323F0
    if (ctx->r11 == ctx->r1) {
        // 0x80332350: nop
    
            goto L_803323F0;
    }
    // 0x80332350: nop

    // 0x80332354: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332358: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x8033235C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332360: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80332364: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332368: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x8033236C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80332370: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x80332374: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x80332378: jal         0x8001C1A8
    // 0x8033237C: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x8033237C: nop

    after_4:
    // 0x80332380: beq         $v0, $zero, L_803323E8
    if (ctx->r2 == 0) {
        // 0x80332384: nop
    
            goto L_803323E8;
    }
    // 0x80332384: nop

    // 0x80332388: jal         0x8001838C
    // 0x8033238C: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x8033238C: nop

    after_5:
    // 0x80332390: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332394: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80332398: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033239C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803323A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803323A4: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x803323A8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803323AC: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x803323B0: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x803323B4: jal         0x8001B014
    // 0x803323B8: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x803323B8: nop

    after_6:
    // 0x803323BC: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x803323C0: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x803323C4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803323C8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803323CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803323D0: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x803323D4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803323D8: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x803323DC: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x803323E0: jal         0x8001C384
    // 0x803323E4: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x803323E4: nop

    after_7:
L_803323E8:
    // 0x803323E8: b           L_80332414
    // 0x803323EC: nop

        goto L_80332414;
    // 0x803323EC: nop

L_803323F0:
    // 0x803323F0: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x803323F4: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x803323F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803323FC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332400: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332404: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80332408: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x8033240C: jal         0x800623E0
    // 0x80332410: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x80332410: nop

    after_8:
L_80332414:
    // 0x80332414: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80332418: nop

    // 0x8033241C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332420: b           L_803322FC
    // 0x80332424: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_803322FC;
    // 0x80332424: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_80332428:
    // 0x80332428: lui         $a2, 0x8033
    ctx->r6 = S32(0X8033 << 16);
    // 0x8033242C: lh          $a2, 0x44A0($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X44A0);
    // 0x80332430: addiu       $a0, $zero, 0x74
    ctx->r4 = ADD32(0, 0X74);
    // 0x80332434: jal         0x80331610
    // 0x80332438: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_80331610_unk_bin_10(rdram, ctx);
        goto after_9;
    // 0x80332438: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_9:
    // 0x8033243C: lui         $a2, 0x8033
    ctx->r6 = S32(0X8033 << 16);
    // 0x80332440: lh          $a2, 0x44A2($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X44A2);
    // 0x80332444: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    // 0x80332448: jal         0x803316FC
    // 0x8033244C: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    func_803316FC_unk_bin_10(rdram, ctx);
        goto after_10;
    // 0x8033244C: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    after_10:
    // 0x80332450: b           L_80332458
    // 0x80332454: nop

        goto L_80332458;
    // 0x80332454: nop

L_80332458:
    // 0x80332458: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8033245C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80332460: jr          $ra
    // 0x80332464: nop

    return;
    // 0x80332464: nop

;}
RECOMP_FUNC void func_8033148C_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033148C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331494: jal         0x8001ECB8
    // 0x80331498: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x80331498: nop

    after_0:
    // 0x8033149C: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803314A0: addiu       $t6, $t6, 0x7BC
    ctx->r14 = ADD32(ctx->r14, 0X7BC);
    // 0x803314A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803314A8: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x803314AC: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803314B0: addiu       $t7, $t7, 0x4A4
    ctx->r15 = ADD32(ctx->r15, 0X4A4);
    // 0x803314B4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803314B8: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x803314BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314C0: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x803314C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803314C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314CC: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x803314D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803314D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314D8: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x803314DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803314E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314E4: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x803314E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803314EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314F0: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x803314F4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803314F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803314FC: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x80331500: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331504: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331508: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x8033150C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331510: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331514: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x80331518: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033151C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331520: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331524: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x80331528: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033152C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331530: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x80331534: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80331538: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033153C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80331540: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x80331544: jal         0x80019C84
    // 0x80331548: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80331548: nop

    after_1:
    // 0x8033154C: jal         0x80019D2C
    // 0x80331550: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80331550: nop

    after_2:
    // 0x80331554: jal         0x8001A258
    // 0x80331558: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x80331558: nop

    after_3:
    // 0x8033155C: jal         0x80331350
    // 0x80331560: nop

    func_80331350_unk_bin_10(rdram, ctx);
        goto after_4;
    // 0x80331560: nop

    after_4:
    // 0x80331564: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331568: sb          $zero, 0x2D40($at)
    MEM_B(0X2D40, ctx->r1) = 0;
    // 0x8033156C: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80331570: addiu       $t8, $t8, 0x1BD4
    ctx->r24 = ADD32(ctx->r24, 0X1BD4);
    // 0x80331574: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80331578: sw          $t8, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r24;
    // 0x8033157C: jal         0x80060278
    // 0x80331580: nop

    func_80060278(rdram, ctx);
        goto after_5;
    // 0x80331580: nop

    after_5:
    // 0x80331584: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80331588: jal         0x8006031C
    // 0x8033158C: addiu       $a0, $a0, 0x1CB0
    ctx->r4 = ADD32(ctx->r4, 0X1CB0);
    func_8006031C(rdram, ctx);
        goto after_6;
    // 0x8033158C: addiu       $a0, $a0, 0x1CB0
    ctx->r4 = ADD32(ctx->r4, 0X1CB0);
    after_6:
    // 0x80331590: jal         0x80330A5C
    // 0x80331594: nop

    func_80330A5C_unk_bin_10(rdram, ctx);
        goto after_7;
    // 0x80331594: nop

    after_7:
    // 0x80331598: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8033159C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x803315A0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x803315A4: jal         0x8001D244
    // 0x803315A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_8;
    // 0x803315A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_8:
    // 0x803315AC: jal         0x8001D284
    // 0x803315B0: nop

    func_8001D284(rdram, ctx);
        goto after_9;
    // 0x803315B0: nop

    after_9:
    // 0x803315B4: jal         0x80000964
    // 0x803315B8: nop

    func_80000964(rdram, ctx);
        goto after_10;
    // 0x803315B8: nop

    after_10:
    // 0x803315BC: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803315C0: lb          $t9, 0x2D40($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X2D40);
    // 0x803315C4: nop

    // 0x803315C8: bne         $t9, $zero, L_803315E8
    if (ctx->r25 != 0) {
        // 0x803315CC: nop
    
            goto L_803315E8;
    }
    // 0x803315CC: nop

    // 0x803315D0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x803315D4: lb          $v0, 0x488D($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X488D);
    // 0x803315D8: b           L_80331600
    // 0x803315DC: nop

        goto L_80331600;
    // 0x803315DC: nop

    // 0x803315E0: b           L_803315F8
    // 0x803315E4: nop

        goto L_803315F8;
    // 0x803315E4: nop

L_803315E8:
    // 0x803315E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803315EC: sb          $zero, 0x488D($at)
    MEM_B(0X488D, ctx->r1) = 0;
    // 0x803315F0: b           L_80331600
    // 0x803315F4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80331600;
    // 0x803315F4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_803315F8:
    // 0x803315F8: b           L_80331600
    // 0x803315FC: nop

        goto L_80331600;
    // 0x803315FC: nop

L_80331600:
    // 0x80331600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331608: jr          $ra
    // 0x8033160C: nop

    return;
    // 0x8033160C: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330008: jal         0x8006357C
    // 0x8033000C: nop

    func_8006357C(rdram, ctx);
        goto after_0;
    // 0x8033000C: nop

    after_0:
    // 0x80330010: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80330014:
    // 0x80330014: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330018: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x8033001C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330020: lb          $t7, 0x4498($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4498);
    // 0x80330024: nop

    // 0x80330028: beq         $t7, $zero, L_80330060
    if (ctx->r15 == 0) {
        // 0x8033002C: nop
    
            goto L_80330060;
    }
    // 0x8033002C: nop

    // 0x80330030: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330034: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330038: sll         $a2, $t8, 2
    ctx->r6 = S32(ctx->r24 << 2);
    // 0x8033003C: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x80330040: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80330044: addiu       $a2, $a2, 0x78
    ctx->r6 = ADD32(ctx->r6, 0X78);
    // 0x80330048: addiu       $a3, $a3, 0x2D44
    ctx->r7 = ADD32(ctx->r7, 0X2D44);
    // 0x8033004C: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x80330050: jal         0x80063C58
    // 0x80330054: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80063C58(rdram, ctx);
        goto after_1;
    // 0x80330054: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x80330058: b           L_8033008C
    // 0x8033005C: nop

        goto L_8033008C;
    // 0x8033005C: nop

L_80330060:
    // 0x80330060: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80330064: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x80330068: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8033006C: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x80330070: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330074: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80330078: addiu       $a2, $a2, 0x78
    ctx->r6 = ADD32(ctx->r6, 0X78);
    // 0x8033007C: addiu       $a3, $a3, 0x2D44
    ctx->r7 = ADD32(ctx->r7, 0X2D44);
    // 0x80330080: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80330084: jal         0x80063C58
    // 0x80330088: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    func_80063C58(rdram, ctx);
        goto after_2;
    // 0x80330088: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_2:
L_8033008C:
    // 0x8033008C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330090: nop

    // 0x80330094: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80330098: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8033009C: bne         $at, $zero, L_80330014
    if (ctx->r1 != 0) {
        // 0x803300A0: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_80330014;
    }
    // 0x803300A0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x803300A4: lui         $a3, 0x8033
    ctx->r7 = S32(0X8033 << 16);
    // 0x803300A8: addiu       $a3, $a3, 0x2D44
    ctx->r7 = ADD32(ctx->r7, 0X2D44);
    // 0x803300AC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x803300B0: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x803300B4: jal         0x80063C58
    // 0x803300B8: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    func_80063C58(rdram, ctx);
        goto after_3;
    // 0x803300B8: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    after_3:
    // 0x803300BC: b           L_803300C4
    // 0x803300C0: nop

        goto L_803300C4;
    // 0x803300C0: nop

L_803300C4:
    // 0x803300C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803300C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803300CC: jr          $ra
    // 0x803300D0: nop

    return;
    // 0x803300D0: nop

;}
RECOMP_FUNC void func_80332BDC_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80332BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332BE4: jal         0x8001ECB8
    // 0x80332BE8: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x80332BE8: nop

    after_0:
    // 0x80332BEC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80332BF0: addiu       $t6, $t6, 0x21A8
    ctx->r14 = ADD32(ctx->r14, 0X21A8);
    // 0x80332BF4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80332BF8: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x80332BFC: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80332C00: addiu       $t7, $t7, 0x1C58
    ctx->r15 = ADD32(ctx->r15, 0X1C58);
    // 0x80332C04: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80332C08: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x80332C0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C10: sb          $zero, -0x1ECC($at)
    MEM_B(-0X1ECC, ctx->r1) = 0;
    // 0x80332C14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332C18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C1C: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x80332C20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332C24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C28: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x80332C2C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332C30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C34: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x80332C38: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332C3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C40: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x80332C44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332C48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C4C: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x80332C50: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332C54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C58: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x80332C5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332C60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C64: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x80332C68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332C6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332C70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C74: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x80332C78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332C7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C80: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x80332C84: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80332C88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332C8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80332C90: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x80332C94: jal         0x80019C84
    // 0x80332C98: nop

    func_80019C84(rdram, ctx);
        goto after_1;
    // 0x80332C98: nop

    after_1:
    // 0x80332C9C: jal         0x80019D2C
    // 0x80332CA0: nop

    func_80019D2C(rdram, ctx);
        goto after_2;
    // 0x80332CA0: nop

    after_2:
    // 0x80332CA4: jal         0x8001A258
    // 0x80332CA8: nop

    func_8001A258(rdram, ctx);
        goto after_3;
    // 0x80332CA8: nop

    after_3:
    // 0x80332CAC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332CB0: sh          $zero, 0x44A0($at)
    MEM_H(0X44A0, ctx->r1) = 0;
    // 0x80332CB4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332CB8: sh          $zero, 0x44A2($at)
    MEM_H(0X44A2, ctx->r1) = 0;
    // 0x80332CBC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332CC0: sh          $zero, 0x44A4($at)
    MEM_H(0X44A4, ctx->r1) = 0;
    // 0x80332CC4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332CC8: sh          $zero, 0x44A6($at)
    MEM_H(0X44A6, ctx->r1) = 0;
    // 0x80332CCC: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x80332CD0: addiu       $t8, $t8, 0x18C8
    ctx->r24 = ADD32(ctx->r24, 0X18C8);
    // 0x80332CD4: lui         $at, 0x8032
    ctx->r1 = S32(0X8032 << 16);
    // 0x80332CD8: sw          $t8, 0x4994($at)
    MEM_W(0X4994, ctx->r1) = ctx->r24;
    // 0x80332CDC: jal         0x80060278
    // 0x80332CE0: nop

    func_80060278(rdram, ctx);
        goto after_4;
    // 0x80332CE0: nop

    after_4:
    // 0x80332CE4: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332CE8: jal         0x8006031C
    // 0x80332CEC: addiu       $a0, $a0, 0x1990
    ctx->r4 = ADD32(ctx->r4, 0X1990);
    func_8006031C(rdram, ctx);
        goto after_5;
    // 0x80332CEC: addiu       $a0, $a0, 0x1990
    ctx->r4 = ADD32(ctx->r4, 0X1990);
    after_5:
    // 0x80332CF0: jal         0x80332468
    // 0x80332CF4: nop

    func_80332468_unk_bin_10(rdram, ctx);
        goto after_6;
    // 0x80332CF4: nop

    after_6:
    // 0x80332CF8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80332CFC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80332D00: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80332D04: jal         0x8001D244
    // 0x80332D08: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_7;
    // 0x80332D08: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_7:
    // 0x80332D0C: jal         0x8001D284
    // 0x80332D10: nop

    func_8001D284(rdram, ctx);
        goto after_8;
    // 0x80332D10: nop

    after_8:
    // 0x80332D14: jal         0x80000964
    // 0x80332D18: nop

    func_80000964(rdram, ctx);
        goto after_9;
    // 0x80332D18: nop

    after_9:
    // 0x80332D1C: b           L_80332D24
    // 0x80332D20: nop

        goto L_80332D24;
    // 0x80332D20: nop

L_80332D24:
    // 0x80332D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80332D2C: jr          $ra
    // 0x80332D30: nop

    return;
    // 0x80332D30: nop

    // 0x80332D34: nop

    // 0x80332D38: nop

    // 0x80332D3C: nop

;}
RECOMP_FUNC void func_80330334_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330334: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033033C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80330340: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80330344: lb          $t6, 0x488D($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X488D);
    // 0x80330348: nop

    // 0x8033034C: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x80330350: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80330354: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80330358: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033035C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330360: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330364: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330368: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033036C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330370: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330374: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80330378: nop

    // 0x8033037C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80330380: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80330384: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330388: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033038C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330390: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330394: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330398: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033039C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803303A0: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x803303A4: nop

    // 0x803303A8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x803303AC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x803303B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303B4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803303B8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803303BC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803303C0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803303C4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803303C8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803303CC: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x803303D0: nop

    // 0x803303D4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x803303D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803303DC: jal         0x8001A928
    // 0x803303E0: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x803303E0: nop

    after_0:
    // 0x803303E4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x803303E8: nop

    // 0x803303EC: beq         $t4, $zero, L_80330408
    if (ctx->r12 == 0) {
        // 0x803303F0: nop
    
            goto L_80330408;
    }
    // 0x803303F0: nop

    // 0x803303F4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803303F8: jal         0x80060E40
    // 0x803303FC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x803303FC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x80330400: b           L_80330414
    // 0x80330404: nop

        goto L_80330414;
    // 0x80330404: nop

L_80330408:
    // 0x80330408: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8033040C: jal         0x80060E40
    // 0x80330410: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060E40(rdram, ctx);
        goto after_2;
    // 0x80330410: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
L_80330414:
    // 0x80330414: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80330418: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033041C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330420: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330424: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330428: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033042C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330430: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330434: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330438: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x8033043C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80330440: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330444: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330448: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033044C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330450: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330454: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330458: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033045C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330460: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x80330464: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80330468: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033046C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330470: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330474: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330478: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033047C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330480: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330484: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330488: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x8033048C: b           L_80330494
    // 0x80330490: nop

        goto L_80330494;
    // 0x80330490: nop

L_80330494:
    // 0x80330494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033049C: jr          $ra
    // 0x803304A0: nop

    return;
    // 0x803304A0: nop

;}
RECOMP_FUNC void func_80330A5C_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330A5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330A64: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80330A68: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80330A6C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80330A70: addiu       $t8, $t8, -0x3560
    ctx->r24 = ADD32(ctx->r24, -0X3560);
    // 0x80330A74: addiu       $t6, $t6, 0x20
    ctx->r14 = ADD32(ctx->r14, 0X20);
    // 0x80330A78: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80330A7C: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x80330A80: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330A88: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80330A8C: jal         0x8001BD44
    // 0x80330A90: addu        $a3, $t7, $t9
    ctx->r7 = ADD32(ctx->r15, ctx->r25);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80330A90: addu        $a3, $t7, $t9
    ctx->r7 = ADD32(ctx->r15, ctx->r25);
    after_0:
    // 0x80330A94: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80330A98: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330A9C: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x80330AA0: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x80330AA4: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80330AA8: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x80330AAC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330AB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330AB8: jal         0x8001BE6C
    // 0x80330ABC: addu        $a3, $t1, $t3
    ctx->r7 = ADD32(ctx->r9, ctx->r11);
    func_8001BE6C(rdram, ctx);
        goto after_1;
    // 0x80330ABC: addu        $a3, $t1, $t3
    ctx->r7 = ADD32(ctx->r9, ctx->r11);
    after_1:
    // 0x80330AC0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330AC8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330ACC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330AD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330AD4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330AD8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330ADC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330AE0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330AE4: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
    // 0x80330AE8: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330AEC: addiu       $t8, $t8, 0x4490
    ctx->r24 = ADD32(ctx->r24, 0X4490);
    // 0x80330AF0: lb          $t7, 0x5($t8)
    ctx->r15 = MEM_B(ctx->r24, 0X5);
    // 0x80330AF4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80330AF8: bne         $t7, $at, L_80330B30
    if (ctx->r15 != ctx->r1) {
        // 0x80330AFC: nop
    
            goto L_80330B30;
    }
    // 0x80330AFC: nop

    // 0x80330B00: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B04: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x80330B08: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330B0C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330B10: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330B14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330B18: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330B1C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330B20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B24: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330B28: b           L_80330B5C
    // 0x80330B2C: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
        goto L_80330B5C;
    // 0x80330B2C: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
L_80330B30:
    // 0x80330B30: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B34: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80330B38: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80330B3C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330B40: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330B44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330B48: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330B4C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330B50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B54: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330B58: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
L_80330B5C:
    // 0x80330B5C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B60: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80330B64: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80330B68: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330B6C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330B70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330B74: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330B78: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330B7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B80: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330B84: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80330B88: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B8C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80330B90: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80330B94: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330B98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330B9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330BA0: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330BA4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330BA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BAC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330BB0: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x80330BB4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80330BB8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80330BBC: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80330BC0: addiu       $t7, $t7, 0x4490
    ctx->r15 = ADD32(ctx->r15, 0X4490);
    // 0x80330BC4: lb          $a0, 0x0($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X0);
    // 0x80330BC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BCC: jal         0x80060E40
    // 0x80330BD0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_80060E40(rdram, ctx);
        goto after_2;
    // 0x80330BD0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_2:
    // 0x80330BD4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BD8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80330BDC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330BE0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330BE4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330BE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330BEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330BF0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330BF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BF8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330BFC: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80330C00: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C04: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x80330C08: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80330C0C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330C10: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330C14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330C18: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330C1C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330C20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C24: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330C28: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80330C2C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C30: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330C34: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80330C38: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330C3C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330C40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330C44: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330C48: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330C4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C50: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330C54: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80330C58: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80330C5C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80330C60: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330C64: addiu       $t6, $t6, 0x4490
    ctx->r14 = ADD32(ctx->r14, 0X4490);
    // 0x80330C68: lb          $a0, 0x1($t6)
    ctx->r4 = MEM_B(ctx->r14, 0X1);
    // 0x80330C6C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C70: jal         0x80060E40
    // 0x80330C74: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_80060E40(rdram, ctx);
        goto after_3;
    // 0x80330C74: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_3:
    // 0x80330C78: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C7C: lui         $at, 0x42B8
    ctx->r1 = S32(0X42B8 << 16);
    // 0x80330C80: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80330C84: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80330C88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330C90: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80330C94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C9C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330CA0: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330CA4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CA8: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x80330CAC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330CB0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330CB4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330CB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330CBC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330CC0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330CC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CC8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330CCC: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80330CD0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CD4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330CD8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80330CDC: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330CE0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330CE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330CE8: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330CEC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330CF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CF4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330CF8: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x80330CFC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80330D00: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80330D04: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80330D08: addiu       $t5, $t5, 0x4490
    ctx->r13 = ADD32(ctx->r13, 0X4490);
    // 0x80330D0C: lb          $a0, 0x2($t5)
    ctx->r4 = MEM_B(ctx->r13, 0X2);
    // 0x80330D10: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D14: jal         0x80060E40
    // 0x80330D18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_80060E40(rdram, ctx);
        goto after_4;
    // 0x80330D18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_4:
    // 0x80330D1C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D20: lui         $at, 0x431C
    ctx->r1 = S32(0X431C << 16);
    // 0x80330D24: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80330D28: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330D2C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330D30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330D34: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330D38: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330D3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D40: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330D44: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80330D48: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D4C: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x80330D50: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80330D54: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80330D58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330D60: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80330D64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D6C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330D70: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80330D74: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D78: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330D7C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330D80: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330D84: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330D88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330D8C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330D90: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330D94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D98: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330D9C: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80330DA0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80330DA4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80330DA8: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80330DAC: addiu       $t1, $t1, 0x4490
    ctx->r9 = ADD32(ctx->r9, 0X4490);
    // 0x80330DB0: lb          $a0, 0x3($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X3);
    // 0x80330DB4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DB8: jal         0x80060E40
    // 0x80330DBC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_80060E40(rdram, ctx);
        goto after_5;
    // 0x80330DBC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_5:
    // 0x80330DC0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DC4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330DC8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80330DCC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330DD0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330DD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330DD8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330DDC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330DE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DE4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330DE8: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330DEC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330DF0: lui         $at, 0x4278
    ctx->r1 = S32(0X4278 << 16);
    // 0x80330DF4: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80330DF8: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330DFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330E00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330E04: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330E08: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330E0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E10: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330E14: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80330E18: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E1C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330E20: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80330E24: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80330E28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330E2C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80330E30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330E34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E38: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330E3C: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x80330E40: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80330E44: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330E48: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330E4C: addiu       $t0, $t0, 0x4490
    ctx->r8 = ADD32(ctx->r8, 0X4490);
    // 0x80330E50: lb          $a0, 0x4($t0)
    ctx->r4 = MEM_B(ctx->r8, 0X4);
    // 0x80330E54: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E58: jal         0x80060E40
    // 0x80330E5C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_80060E40(rdram, ctx);
        goto after_6;
    // 0x80330E5C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_6:
    // 0x80330E60: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E64: lui         $at, 0x42F8
    ctx->r1 = S32(0X42F8 << 16);
    // 0x80330E68: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80330E6C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330E70: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330E74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330E78: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330E7C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330E80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E84: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330E88: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80330E8C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E90: lui         $at, 0x4278
    ctx->r1 = S32(0X4278 << 16);
    // 0x80330E94: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80330E98: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330E9C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330EA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330EA4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330EA8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330EAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330EB0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330EB4: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80330EB8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330EC0: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80330EC4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330EC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330ECC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330ED0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330ED4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330ED8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330EDC: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80330EE0: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330EE4: addiu       $t8, $t8, 0x4490
    ctx->r24 = ADD32(ctx->r24, 0X4490);
    // 0x80330EE8: lb          $t7, 0x5($t8)
    ctx->r15 = MEM_B(ctx->r24, 0X5);
    // 0x80330EEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80330EF0: beq         $t7, $at, L_80330F98
    if (ctx->r15 == ctx->r1) {
        // 0x80330EF4: nop
    
            goto L_80330F98;
    }
    // 0x80330EF4: nop

    // 0x80330EF8: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80330EFC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330F00: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330F04: addiu       $t0, $t0, 0x4490
    ctx->r8 = ADD32(ctx->r8, 0X4490);
    // 0x80330F08: lb          $a0, 0x5($t0)
    ctx->r4 = MEM_B(ctx->r8, 0X5);
    // 0x80330F0C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F10: jal         0x80060E40
    // 0x80330F14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_80060E40(rdram, ctx);
        goto after_7;
    // 0x80330F14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_7:
    // 0x80330F18: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F1C: lui         $at, 0x433C
    ctx->r1 = S32(0X433C << 16);
    // 0x80330F20: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80330F24: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330F28: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330F2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330F30: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330F34: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330F38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F3C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330F40: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80330F44: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F48: lui         $at, 0x4278
    ctx->r1 = S32(0X4278 << 16);
    // 0x80330F4C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80330F50: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330F54: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330F58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330F5C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330F60: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330F64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F68: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330F6C: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80330F70: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F74: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330F78: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80330F7C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330F80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330F84: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330F88: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330F8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F90: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330F94: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
L_80330F98:
    // 0x80330F98: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x80330F9C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80330FA0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80330FA4: jal         0x80060E40
    // 0x80330FA8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060E40(rdram, ctx);
        goto after_8;
    // 0x80330FA8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_8:
    // 0x80330FAC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330FB0: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80330FB4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80330FB8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80330FBC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330FC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330FC4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80330FC8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330FCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FD0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330FD4: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80330FD8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330FDC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330FE0: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80330FE4: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330FE8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330FEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330FF0: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330FF4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330FF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FFC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331000: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80331004: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331008: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8033100C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331010: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331014: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331018: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033101C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331020: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331024: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331028: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033102C: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80331030: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x80331034: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80331038: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8033103C: jal         0x80060E40
    // 0x80331040: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060E40(rdram, ctx);
        goto after_9;
    // 0x80331040: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_9:
    // 0x80331044: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331048: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x8033104C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80331050: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80331054: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331058: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033105C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80331060: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331064: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331068: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033106C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80331070: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331074: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x80331078: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8033107C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80331080: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331084: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331088: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8033108C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331090: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331094: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331098: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x8033109C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803310A0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803310A4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803310A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803310AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803310B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803310B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803310B8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803310BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310C0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803310C4: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x803310C8: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x803310CC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x803310D0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803310D4: jal         0x80060E40
    // 0x803310D8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060E40(rdram, ctx);
        goto after_10;
    // 0x803310D8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_10:
    // 0x803310DC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803310E0: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x803310E4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803310E8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803310EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803310F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803310F4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803310F8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803310FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331100: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331104: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80331108: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033110C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x80331110: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80331114: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80331118: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033111C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331120: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80331124: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331128: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033112C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331130: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80331134: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80331138: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8033113C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80331140: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80331144: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331148: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033114C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80331150: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331154: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331158: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033115C: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80331160: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80331164: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80331168: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8033116C: jal         0x80060E40
    // 0x80331170: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060E40(rdram, ctx);
        goto after_11;
    // 0x80331170: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_11:
    // 0x80331174: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331178: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x8033117C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331180: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331184: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331188: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033118C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331190: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331194: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331198: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033119C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x803311A0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803311A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803311A8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x803311AC: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x803311B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803311B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803311B8: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x803311BC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803311C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311C4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803311C8: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x803311CC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803311D0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803311D4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x803311D8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803311DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803311E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803311E4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803311E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803311EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311F0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803311F4: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x803311F8: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x803311FC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80331200: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80331204: jal         0x80060E40
    // 0x80331208: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060E40(rdram, ctx);
        goto after_12;
    // 0x80331208: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_12:
    // 0x8033120C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80331210: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80331214: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80331218: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033121C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331220: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331224: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80331228: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033122C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331230: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331234: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80331238: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033123C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80331240: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80331244: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331248: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033124C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331250: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331254: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331258: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033125C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331260: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80331264: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331268: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8033126C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80331270: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331274: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331278: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033127C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331280: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331284: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331288: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033128C: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80331290: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x80331294: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80331298: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8033129C: jal         0x80060E40
    // 0x803312A0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80060E40(rdram, ctx);
        goto after_13;
    // 0x803312A0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_13:
    // 0x803312A4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803312A8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803312AC: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x803312B0: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803312B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803312B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803312BC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803312C0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803312C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803312C8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803312CC: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x803312D0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803312D4: lui         $at, 0x42E8
    ctx->r1 = S32(0X42E8 << 16);
    // 0x803312D8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x803312DC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803312E0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803312E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803312E8: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803312EC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803312F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803312F4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803312F8: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x803312FC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331300: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331304: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80331308: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8033130C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331310: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331314: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80331318: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033131C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331320: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331324: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x80331328: jal         0x80330334
    // 0x8033132C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80330334_unk_bin_10(rdram, ctx);
        goto after_14;
    // 0x8033132C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x80331330: jal         0x803300D4
    // 0x80331334: nop

    func_803300D4_unk_bin_10(rdram, ctx);
        goto after_15;
    // 0x80331334: nop

    after_15:
    // 0x80331338: b           L_80331340
    // 0x8033133C: nop

        goto L_80331340;
    // 0x8033133C: nop

L_80331340:
    // 0x80331340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331348: jr          $ra
    // 0x8033134C: nop

    return;
    // 0x8033134C: nop

;}
RECOMP_FUNC void func_803316FC_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331704: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80331708: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8033170C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80331710: jal         0x8006357C
    // 0x80331714: nop

    func_8006357C(rdram, ctx);
        goto after_0;
    // 0x80331714: nop

    after_0:
    // 0x80331718: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x8033171C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331720: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331724: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331728: lw          $t8, 0x41EC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X41EC);
    // 0x8033172C: nop

    // 0x80331730: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80331734: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80331738:
    // 0x80331738: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033173C: nop

    // 0x80331740: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80331744: nop

    // 0x80331748: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
    // 0x8033174C: lh          $t1, 0x22($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X22);
    // 0x80331750: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331754: bne         $t1, $at, L_80331764
    if (ctx->r9 != ctx->r1) {
        // 0x80331758: nop
    
            goto L_80331764;
    }
    // 0x80331758: nop

    // 0x8033175C: b           L_803317D0
    // 0x80331760: nop

        goto L_803317D0;
    // 0x80331760: nop

L_80331764:
    // 0x80331764: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x80331768: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8033176C: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x80331770: bgez        $t2, L_80331784
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80331774: andi        $a2, $t2, 0x1F
        ctx->r6 = ctx->r10 & 0X1F;
            goto L_80331784;
    }
    // 0x80331774: andi        $a2, $t2, 0x1F
    ctx->r6 = ctx->r10 & 0X1F;
    // 0x80331778: beq         $a2, $zero, L_80331784
    if (ctx->r6 == 0) {
        // 0x8033177C: nop
    
            goto L_80331784;
    }
    // 0x8033177C: nop

    // 0x80331780: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80331784:
    // 0x80331784: sll         $t3, $a2, 3
    ctx->r11 = S32(ctx->r6 << 3);
    // 0x80331788: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8033178C: bgez        $t2, L_8033179C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80331790: sra         $a3, $t2, 5
        ctx->r7 = S32(SIGNED(ctx->r10) >> 5);
            goto L_8033179C;
    }
    // 0x80331790: sra         $a3, $t2, 5
    ctx->r7 = S32(SIGNED(ctx->r10) >> 5);
    // 0x80331794: addiu       $at, $t2, 0x1F
    ctx->r1 = ADD32(ctx->r10, 0X1F);
    // 0x80331798: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_8033179C:
    // 0x8033179C: sll         $t4, $a3, 4
    ctx->r12 = S32(ctx->r7 << 4);
    // 0x803317A0: jal         0x8006389C
    // 0x803317A4: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    func_8006389C(rdram, ctx);
        goto after_1;
    // 0x803317A4: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    after_1:
    // 0x803317A8: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x803317AC: nop

    // 0x803317B0: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x803317B4: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
    // 0x803317B8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803317BC: nop

    // 0x803317C0: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x803317C4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x803317C8: b           L_80331738
    // 0x803317CC: nop

        goto L_80331738;
    // 0x803317CC: nop

L_803317D0:
    // 0x803317D0: b           L_803317D8
    // 0x803317D4: nop

        goto L_803317D8;
    // 0x803317D4: nop

L_803317D8:
    // 0x803317D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803317DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803317E0: jr          $ra
    // 0x803317E4: nop

    return;
    // 0x803317E4: nop

;}
RECOMP_FUNC void func_80331B00_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B00: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331B04: lh          $t6, 0x44A4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X44A4);
    // 0x80331B08: nop

    // 0x80331B0C: bne         $t6, $zero, L_80331B50
    if (ctx->r14 != 0) {
        // 0x80331B10: nop
    
            goto L_80331B50;
    }
    // 0x80331B10: nop

    // 0x80331B14: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331B18: lh          $t7, 0x44A0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X44A0);
    // 0x80331B1C: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x80331B20: bne         $t7, $at, L_80331B34
    if (ctx->r15 != ctx->r1) {
        // 0x80331B24: nop
    
            goto L_80331B34;
    }
    // 0x80331B24: nop

    // 0x80331B28: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B2C: b           L_80331B48
    // 0x80331B30: sh          $zero, 0x44A0($at)
    MEM_H(0X44A0, ctx->r1) = 0;
        goto L_80331B48;
    // 0x80331B30: sh          $zero, 0x44A0($at)
    MEM_H(0X44A0, ctx->r1) = 0;
L_80331B34:
    // 0x80331B34: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331B38: lh          $t8, 0x44A0($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X44A0);
    // 0x80331B3C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B40: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80331B44: sh          $t9, 0x44A0($at)
    MEM_H(0X44A0, ctx->r1) = ctx->r25;
L_80331B48:
    // 0x80331B48: b           L_80331B98
    // 0x80331B4C: nop

        goto L_80331B98;
    // 0x80331B4C: nop

L_80331B50:
    // 0x80331B50: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80331B54: lh          $t0, 0x44A4($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X44A4);
    // 0x80331B58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331B5C: bne         $t0, $at, L_80331B98
    if (ctx->r8 != ctx->r1) {
        // 0x80331B60: nop
    
            goto L_80331B98;
    }
    // 0x80331B60: nop

    // 0x80331B64: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80331B68: lh          $t1, 0x44A2($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X44A2);
    // 0x80331B6C: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x80331B70: bne         $t1, $at, L_80331B84
    if (ctx->r9 != ctx->r1) {
        // 0x80331B74: nop
    
            goto L_80331B84;
    }
    // 0x80331B74: nop

    // 0x80331B78: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B7C: b           L_80331B98
    // 0x80331B80: sh          $zero, 0x44A2($at)
    MEM_H(0X44A2, ctx->r1) = 0;
        goto L_80331B98;
    // 0x80331B80: sh          $zero, 0x44A2($at)
    MEM_H(0X44A2, ctx->r1) = 0;
L_80331B84:
    // 0x80331B84: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331B88: lh          $t2, 0x44A2($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X44A2);
    // 0x80331B8C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B90: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80331B94: sh          $t3, 0x44A2($at)
    MEM_H(0X44A2, ctx->r1) = ctx->r11;
L_80331B98:
    // 0x80331B98: jr          $ra
    // 0x80331B9C: nop

    return;
    // 0x80331B9C: nop

    // 0x80331BA0: jr          $ra
    // 0x80331BA4: nop

    return;
    // 0x80331BA4: nop

;}
RECOMP_FUNC void func_80331BA8_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331BA8: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331BAC: lh          $t6, 0x44A4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X44A4);
    // 0x80331BB0: nop

    // 0x80331BB4: bne         $t6, $zero, L_80331BFC
    if (ctx->r14 != 0) {
        // 0x80331BB8: nop
    
            goto L_80331BFC;
    }
    // 0x80331BB8: nop

    // 0x80331BBC: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331BC0: lh          $t7, 0x44A0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X44A0);
    // 0x80331BC4: nop

    // 0x80331BC8: bne         $t7, $zero, L_80331BE0
    if (ctx->r15 != 0) {
        // 0x80331BCC: nop
    
            goto L_80331BE0;
    }
    // 0x80331BCC: nop

    // 0x80331BD0: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x80331BD4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331BD8: b           L_80331BF4
    // 0x80331BDC: sh          $t8, 0x44A0($at)
    MEM_H(0X44A0, ctx->r1) = ctx->r24;
        goto L_80331BF4;
    // 0x80331BDC: sh          $t8, 0x44A0($at)
    MEM_H(0X44A0, ctx->r1) = ctx->r24;
L_80331BE0:
    // 0x80331BE0: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331BE4: lh          $t9, 0x44A0($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X44A0);
    // 0x80331BE8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331BEC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80331BF0: sh          $t0, 0x44A0($at)
    MEM_H(0X44A0, ctx->r1) = ctx->r8;
L_80331BF4:
    // 0x80331BF4: b           L_80331C48
    // 0x80331BF8: nop

        goto L_80331C48;
    // 0x80331BF8: nop

L_80331BFC:
    // 0x80331BFC: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80331C00: lh          $t1, 0x44A4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X44A4);
    // 0x80331C04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331C08: bne         $t1, $at, L_80331C48
    if (ctx->r9 != ctx->r1) {
        // 0x80331C0C: nop
    
            goto L_80331C48;
    }
    // 0x80331C0C: nop

    // 0x80331C10: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331C14: lh          $t2, 0x44A2($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X44A2);
    // 0x80331C18: nop

    // 0x80331C1C: bne         $t2, $zero, L_80331C34
    if (ctx->r10 != 0) {
        // 0x80331C20: nop
    
            goto L_80331C34;
    }
    // 0x80331C20: nop

    // 0x80331C24: addiu       $t3, $zero, 0x7E
    ctx->r11 = ADD32(0, 0X7E);
    // 0x80331C28: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C2C: b           L_80331C48
    // 0x80331C30: sh          $t3, 0x44A2($at)
    MEM_H(0X44A2, ctx->r1) = ctx->r11;
        goto L_80331C48;
    // 0x80331C30: sh          $t3, 0x44A2($at)
    MEM_H(0X44A2, ctx->r1) = ctx->r11;
L_80331C34:
    // 0x80331C34: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331C38: lh          $t4, 0x44A2($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X44A2);
    // 0x80331C3C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C40: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80331C44: sh          $t5, 0x44A2($at)
    MEM_H(0X44A2, ctx->r1) = ctx->r13;
L_80331C48:
    // 0x80331C48: jr          $ra
    // 0x80331C4C: nop

    return;
    // 0x80331C4C: nop

    // 0x80331C50: jr          $ra
    // 0x80331C54: nop

    return;
    // 0x80331C54: nop

;}
RECOMP_FUNC void func_80330234_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033023C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80330240: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80330244: jal         0x8001B44C
    // 0x80330248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_0;
    // 0x80330248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033024C: beq         $v0, $zero, L_80330298
    if (ctx->r2 == 0) {
        // 0x80330250: nop
    
            goto L_80330298;
    }
    // 0x80330250: nop

    // 0x80330254: jal         0x80014E80
    // 0x80330258: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80330258: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x8033025C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80330260: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80330264: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330268: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x8033026C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330270: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330274: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330278: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x8033027C: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80330280: lw          $t9, 0x20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20);
    // 0x80330284: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80330288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033028C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330290: jal         0x8001BE6C
    // 0x80330294: addu        $a3, $t9, $t1
    ctx->r7 = ADD32(ctx->r25, ctx->r9);
    func_8001BE6C(rdram, ctx);
        goto after_2;
    // 0x80330294: addu        $a3, $t9, $t1
    ctx->r7 = ADD32(ctx->r25, ctx->r9);
    after_2:
L_80330298:
    // 0x80330298: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8033029C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803302A0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803302A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803302A8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803302AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803302B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803302B4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803302B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302BC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803302C0: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
    // 0x803302C4: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x803302C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302CC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803302D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803302D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803302D8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803302DC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803302E0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803302E4: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803302E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803302EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803302F0: jal         0x80015538
    // 0x803302F4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803302F4: nop

    after_3:
    // 0x803302F8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803302FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330300: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330304: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330308: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033030C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330310: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330314: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330318: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x8033031C: b           L_80330324
    // 0x80330320: nop

        goto L_80330324;
    // 0x80330320: nop

L_80330324:
    // 0x80330324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330328: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033032C: jr          $ra
    // 0x80330330: nop

    return;
    // 0x80330330: nop

;}
RECOMP_FUNC void func_80331610_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331610: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331618: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8033161C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80331620: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80331624: jal         0x8006357C
    // 0x80331628: nop

    func_8006357C(rdram, ctx);
        goto after_0;
    // 0x80331628: nop

    after_0:
    // 0x8033162C: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x80331630: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331634: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331638: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033163C: lw          $t8, 0x416C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X416C);
    // 0x80331640: nop

    // 0x80331644: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80331648: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8033164C:
    // 0x8033164C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331650: nop

    // 0x80331654: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80331658: nop

    // 0x8033165C: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
    // 0x80331660: lh          $t1, 0x22($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X22);
    // 0x80331664: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331668: bne         $t1, $at, L_80331678
    if (ctx->r9 != ctx->r1) {
        // 0x8033166C: nop
    
            goto L_80331678;
    }
    // 0x8033166C: nop

    // 0x80331670: b           L_803316E4
    // 0x80331674: nop

        goto L_803316E4;
    // 0x80331674: nop

L_80331678:
    // 0x80331678: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x8033167C: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80331680: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x80331684: bgez        $t2, L_80331698
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80331688: andi        $a2, $t2, 0x1F
        ctx->r6 = ctx->r10 & 0X1F;
            goto L_80331698;
    }
    // 0x80331688: andi        $a2, $t2, 0x1F
    ctx->r6 = ctx->r10 & 0X1F;
    // 0x8033168C: beq         $a2, $zero, L_80331698
    if (ctx->r6 == 0) {
        // 0x80331690: nop
    
            goto L_80331698;
    }
    // 0x80331690: nop

    // 0x80331694: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80331698:
    // 0x80331698: sll         $t3, $a2, 3
    ctx->r11 = S32(ctx->r6 << 3);
    // 0x8033169C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x803316A0: bgez        $t2, L_803316B0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x803316A4: sra         $a3, $t2, 5
        ctx->r7 = S32(SIGNED(ctx->r10) >> 5);
            goto L_803316B0;
    }
    // 0x803316A4: sra         $a3, $t2, 5
    ctx->r7 = S32(SIGNED(ctx->r10) >> 5);
    // 0x803316A8: addiu       $at, $t2, 0x1F
    ctx->r1 = ADD32(ctx->r10, 0X1F);
    // 0x803316AC: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_803316B0:
    // 0x803316B0: sll         $t4, $a3, 4
    ctx->r12 = S32(ctx->r7 << 4);
    // 0x803316B4: jal         0x8006389C
    // 0x803316B8: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    func_8006389C(rdram, ctx);
        goto after_1;
    // 0x803316B8: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    after_1:
    // 0x803316BC: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x803316C0: nop

    // 0x803316C4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x803316C8: sh          $t6, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r14;
    // 0x803316CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803316D0: nop

    // 0x803316D4: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x803316D8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x803316DC: b           L_8033164C
    // 0x803316E0: nop

        goto L_8033164C;
    // 0x803316E0: nop

L_803316E4:
    // 0x803316E4: b           L_803316EC
    // 0x803316E8: nop

        goto L_803316EC;
    // 0x803316E8: nop

L_803316EC:
    // 0x803316EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803316F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803316F4: jr          $ra
    // 0x803316F8: nop

    return;
    // 0x803316F8: nop

;}
RECOMP_FUNC void func_80331C58_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331C58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331C5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331C60: jal         0x80062EAC
    // 0x80331C64: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x80331C64: nop

    after_0:
    // 0x80331C68: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331C6C: jal         0x8001D1D4
    // 0x80331C70: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x80331C70: nop

    after_1:
    // 0x80331C74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331C78: bne         $v0, $at, L_80331C88
    if (ctx->r2 != ctx->r1) {
        // 0x80331C7C: nop
    
            goto L_80331C88;
    }
    // 0x80331C7C: nop

    // 0x80331C80: b           L_80332198
    // 0x80331C84: nop

        goto L_80332198;
    // 0x80331C84: nop

L_80331C88:
    // 0x80331C88: jal         0x8001D1D4
    // 0x80331C8C: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x80331C8C: nop

    after_2:
    // 0x80331C90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331C94: bne         $v0, $at, L_80331CB0
    if (ctx->r2 != ctx->r1) {
        // 0x80331C98: nop
    
            goto L_80331CB0;
    }
    // 0x80331C98: nop

    // 0x80331C9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80331CA0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80331CA4: sw          $t6, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r14;
    // 0x80331CA8: b           L_80332198
    // 0x80331CAC: nop

        goto L_80332198;
    // 0x80331CAC: nop

L_80331CB0:
    // 0x80331CB0: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331CB4: lh          $t7, 0x44A6($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X44A6);
    // 0x80331CB8: nop

    // 0x80331CBC: beq         $t7, $zero, L_80331CDC
    if (ctx->r15 == 0) {
        // 0x80331CC0: nop
    
            goto L_80331CDC;
    }
    // 0x80331CC0: nop

    // 0x80331CC4: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331CC8: lh          $t8, 0x44A6($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X44A6);
    // 0x80331CCC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331CD0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80331CD4: b           L_80331CE4
    // 0x80331CD8: sh          $t9, 0x44A6($at)
    MEM_H(0X44A6, ctx->r1) = ctx->r25;
        goto L_80331CE4;
    // 0x80331CD8: sh          $t9, 0x44A6($at)
    MEM_H(0X44A6, ctx->r1) = ctx->r25;
L_80331CDC:
    // 0x80331CDC: jal         0x80331918
    // 0x80331CE0: nop

    func_80331918_unk_bin_10(rdram, ctx);
        goto after_3;
    // 0x80331CE0: nop

    after_3:
L_80331CE4:
    // 0x80331CE4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80331CE8: addiu       $t0, $t0, -0x1D50
    ctx->r8 = ADD32(ctx->r8, -0X1D50);
    // 0x80331CEC: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80331CF0: nop

    // 0x80331CF4: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x80331CF8: beq         $t2, $zero, L_80331E00
    if (ctx->r10 == 0) {
        // 0x80331CFC: nop
    
            goto L_80331E00;
    }
    // 0x80331CFC: nop

    // 0x80331D00: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80331D04: lh          $t3, 0x44A4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X44A4);
    // 0x80331D08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331D0C: bne         $t3, $at, L_80331D54
    if (ctx->r11 != ctx->r1) {
        // 0x80331D10: nop
    
            goto L_80331D54;
    }
    // 0x80331D10: nop

    // 0x80331D14: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331D18: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80331D1C: jal         0x80016F38
    // 0x80331D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_4;
    // 0x80331D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80331D24: jal         0x80017EB8
    // 0x80331D28: nop

    func_80017EB8(rdram, ctx);
        goto after_5;
    // 0x80331D28: nop

    after_5:
    // 0x80331D2C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331D34: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80331D38: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331D3C: jal         0x800178D4
    // 0x80331D40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_6;
    // 0x80331D40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x80331D44: jal         0x8001D2C0
    // 0x80331D48: nop

    func_8001D2C0(rdram, ctx);
        goto after_7;
    // 0x80331D48: nop

    after_7:
    // 0x80331D4C: b           L_80331DF8
    // 0x80331D50: nop

        goto L_80331DF8;
    // 0x80331D50: nop

L_80331D54:
    // 0x80331D54: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331D58: lh          $t4, 0x44A4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X44A4);
    // 0x80331D5C: nop

    // 0x80331D60: bne         $t4, $zero, L_80331DAC
    if (ctx->r12 != 0) {
        // 0x80331D64: nop
    
            goto L_80331DAC;
    }
    // 0x80331D64: nop

    // 0x80331D68: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80331D6C: lh          $t5, 0x44A6($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X44A6);
    // 0x80331D70: nop

    // 0x80331D74: bne         $t5, $zero, L_80331DA4
    if (ctx->r13 != 0) {
        // 0x80331D78: nop
    
            goto L_80331DA4;
    }
    // 0x80331D78: nop

    // 0x80331D7C: jal         0x803317E8
    // 0x80331D80: nop

    func_803317E8_unk_bin_10(rdram, ctx);
        goto after_8;
    // 0x80331D80: nop

    after_8:
    // 0x80331D84: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331D88: lh          $t6, 0x44A0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X44A0);
    // 0x80331D8C: lui         $a0, 0x8033
    ctx->r4 = S32(0X8033 << 16);
    // 0x80331D90: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80331D94: lbu         $a0, 0x4468($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4468);
    // 0x80331D98: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80331D9C: jal         0x80016F38
    // 0x80331DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_9;
    // 0x80331DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
L_80331DA4:
    // 0x80331DA4: b           L_80331DF8
    // 0x80331DA8: nop

        goto L_80331DF8;
    // 0x80331DA8: nop

L_80331DAC:
    // 0x80331DAC: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331DB0: lh          $t7, 0x44A6($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X44A6);
    // 0x80331DB4: nop

    // 0x80331DB8: bne         $t7, $zero, L_80331DF8
    if (ctx->r15 != 0) {
        // 0x80331DBC: nop
    
            goto L_80331DF8;
    }
    // 0x80331DBC: nop

    // 0x80331DC0: jal         0x803317E8
    // 0x80331DC4: nop

    func_803317E8_unk_bin_10(rdram, ctx);
        goto after_10;
    // 0x80331DC4: nop

    after_10:
    // 0x80331DC8: jal         0x80017EB8
    // 0x80331DCC: nop

    func_80017EB8(rdram, ctx);
        goto after_11;
    // 0x80331DCC: nop

    after_11:
    // 0x80331DD0: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331DD4: lh          $t8, 0x44A2($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X44A2);
    // 0x80331DD8: lui         $a2, 0x8033
    ctx->r6 = S32(0X8033 << 16);
    // 0x80331DDC: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x80331DE0: lbu         $a2, 0x43E8($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X43E8);
    // 0x80331DE4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80331DE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331DEC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331DF0: jal         0x800175F0
    // 0x80331DF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_12;
    // 0x80331DF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
L_80331DF8:
    // 0x80331DF8: b           L_80331EC8
    // 0x80331DFC: nop

        goto L_80331EC8;
    // 0x80331DFC: nop

L_80331E00:
    // 0x80331E00: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80331E04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331E08: bne         $t9, $at, L_80331E34
    if (ctx->r25 != ctx->r1) {
        // 0x80331E0C: nop
    
            goto L_80331E34;
    }
    // 0x80331E0C: nop

    // 0x80331E10: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80331E14: lh          $t0, 0x44A6($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X44A6);
    // 0x80331E18: nop

    // 0x80331E1C: bne         $t0, $zero, L_80331E2C
    if (ctx->r8 != 0) {
        // 0x80331E20: nop
    
            goto L_80331E2C;
    }
    // 0x80331E20: nop

    // 0x80331E24: jal         0x80331A44
    // 0x80331E28: nop

    func_80331A44_unk_bin_10(rdram, ctx);
        goto after_13;
    // 0x80331E28: nop

    after_13:
L_80331E2C:
    // 0x80331E2C: b           L_80331EC8
    // 0x80331E30: nop

        goto L_80331EC8;
    // 0x80331E30: nop

L_80331E34:
    // 0x80331E34: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80331E38: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80331E3C: bne         $t1, $at, L_80331E68
    if (ctx->r9 != ctx->r1) {
        // 0x80331E40: nop
    
            goto L_80331E68;
    }
    // 0x80331E40: nop

    // 0x80331E44: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331E48: lh          $t2, 0x44A6($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X44A6);
    // 0x80331E4C: nop

    // 0x80331E50: bne         $t2, $zero, L_80331E60
    if (ctx->r10 != 0) {
        // 0x80331E54: nop
    
            goto L_80331E60;
    }
    // 0x80331E54: nop

    // 0x80331E58: jal         0x80331AA4
    // 0x80331E5C: nop

    func_80331AA4_unk_bin_10(rdram, ctx);
        goto after_14;
    // 0x80331E5C: nop

    after_14:
L_80331E60:
    // 0x80331E60: b           L_80331EC8
    // 0x80331E64: nop

        goto L_80331EC8;
    // 0x80331E64: nop

L_80331E68:
    // 0x80331E68: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80331E6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331E70: bne         $t3, $at, L_80331E9C
    if (ctx->r11 != ctx->r1) {
        // 0x80331E74: nop
    
            goto L_80331E9C;
    }
    // 0x80331E74: nop

    // 0x80331E78: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331E7C: lh          $t4, 0x44A6($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X44A6);
    // 0x80331E80: nop

    // 0x80331E84: bne         $t4, $zero, L_80331E94
    if (ctx->r12 != 0) {
        // 0x80331E88: nop
    
            goto L_80331E94;
    }
    // 0x80331E88: nop

    // 0x80331E8C: jal         0x80331B00
    // 0x80331E90: nop

    func_80331B00_unk_bin_10(rdram, ctx);
        goto after_15;
    // 0x80331E90: nop

    after_15:
L_80331E94:
    // 0x80331E94: b           L_80331EC8
    // 0x80331E98: nop

        goto L_80331EC8;
    // 0x80331E98: nop

L_80331E9C:
    // 0x80331E9C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80331EA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331EA4: bne         $t5, $at, L_80331EC8
    if (ctx->r13 != ctx->r1) {
        // 0x80331EA8: nop
    
            goto L_80331EC8;
    }
    // 0x80331EA8: nop

    // 0x80331EAC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331EB0: lh          $t6, 0x44A6($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X44A6);
    // 0x80331EB4: nop

    // 0x80331EB8: bne         $t6, $zero, L_80331EC8
    if (ctx->r14 != 0) {
        // 0x80331EBC: nop
    
            goto L_80331EC8;
    }
    // 0x80331EBC: nop

    // 0x80331EC0: jal         0x80331BA8
    // 0x80331EC4: nop

    func_80331BA8_unk_bin_10(rdram, ctx);
        goto after_16;
    // 0x80331EC4: nop

    after_16:
L_80331EC8:
    // 0x80331EC8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80331ECC: addiu       $t7, $t7, -0x1D70
    ctx->r15 = ADD32(ctx->r15, -0X1D70);
    // 0x80331ED0: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80331ED4: nop

    // 0x80331ED8: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80331EDC: beq         $t9, $zero, L_80331F88
    if (ctx->r25 == 0) {
        // 0x80331EE0: nop
    
            goto L_80331F88;
    }
    // 0x80331EE0: nop

    // 0x80331EE4: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80331EE8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80331EEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331EF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331EF4: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80331EF8: jal         0x80015538
    // 0x80331EFC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_17;
    // 0x80331EFC: nop

    after_17:
    // 0x80331F00: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331F04: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80331F08: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80331F0C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331F10: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331F14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331F18: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331F1C: lwc1        $f12, 0x16C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X16C);
    // 0x80331F20: jal         0x80015538
    // 0x80331F24: nop

    Math_WrapAngle(rdram, ctx);
        goto after_18;
    // 0x80331F24: nop

    after_18:
    // 0x80331F28: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331F2C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331F30: swc1        $f0, 0x16C($t3)
    MEM_W(0X16C, ctx->r11) = ctx->f0.u32l;
    // 0x80331F34: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331F38: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80331F3C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331F40: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331F44: lwc1        $f12, 0x2BC($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X2BC);
    // 0x80331F48: jal         0x80015538
    // 0x80331F4C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_19;
    // 0x80331F4C: nop

    after_19:
    // 0x80331F50: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331F54: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331F58: swc1        $f0, 0x2BC($t5)
    MEM_W(0X2BC, ctx->r13) = ctx->f0.u32l;
    // 0x80331F5C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80331F60: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80331F64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331F68: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331F6C: lwc1        $f12, 0x40C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40C);
    // 0x80331F70: jal         0x80015538
    // 0x80331F74: nop

    Math_WrapAngle(rdram, ctx);
        goto after_20;
    // 0x80331F74: nop

    after_20:
    // 0x80331F78: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80331F7C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80331F80: b           L_803320A4
    // 0x80331F84: swc1        $f0, 0x40C($t7)
    MEM_W(0X40C, ctx->r15) = ctx->f0.u32l;
        goto L_803320A4;
    // 0x80331F84: swc1        $f0, 0x40C($t7)
    MEM_W(0X40C, ctx->r15) = ctx->f0.u32l;
L_80331F88:
    // 0x80331F88: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80331F8C: addiu       $t8, $t8, -0x1D70
    ctx->r24 = ADD32(ctx->r24, -0X1D70);
    // 0x80331F90: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80331F94: nop

    // 0x80331F98: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80331F9C: beq         $t0, $zero, L_80332048
    if (ctx->r8 == 0) {
        // 0x80331FA0: nop
    
            goto L_80332048;
    }
    // 0x80331FA0: nop

    // 0x80331FA4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331FA8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80331FAC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80331FB0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331FB4: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80331FB8: jal         0x80015538
    // 0x80331FBC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_21;
    // 0x80331FBC: nop

    after_21:
    // 0x80331FC0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331FC4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331FC8: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x80331FCC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80331FD0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331FD4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80331FD8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331FDC: lwc1        $f12, 0x16C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X16C);
    // 0x80331FE0: jal         0x80015538
    // 0x80331FE4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_22;
    // 0x80331FE4: nop

    after_22:
    // 0x80331FE8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331FEC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80331FF0: swc1        $f0, 0x16C($t4)
    MEM_W(0X16C, ctx->r12) = ctx->f0.u32l;
    // 0x80331FF4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331FF8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331FFC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80332000: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332004: lwc1        $f12, 0x2BC($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X2BC);
    // 0x80332008: jal         0x80015538
    // 0x8033200C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_23;
    // 0x8033200C: nop

    after_23:
    // 0x80332010: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80332014: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80332018: swc1        $f0, 0x2BC($t6)
    MEM_W(0X2BC, ctx->r14) = ctx->f0.u32l;
    // 0x8033201C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80332020: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80332024: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80332028: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033202C: lwc1        $f12, 0x40C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X40C);
    // 0x80332030: jal         0x80015538
    // 0x80332034: nop

    Math_WrapAngle(rdram, ctx);
        goto after_24;
    // 0x80332034: nop

    after_24:
    // 0x80332038: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033203C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332040: b           L_803320A4
    // 0x80332044: swc1        $f0, 0x40C($t8)
    MEM_W(0X40C, ctx->r24) = ctx->f0.u32l;
        goto L_803320A4;
    // 0x80332044: swc1        $f0, 0x40C($t8)
    MEM_W(0X40C, ctx->r24) = ctx->f0.u32l;
L_80332048:
    // 0x80332048: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033204C: addiu       $t9, $t9, -0x1D50
    ctx->r25 = ADD32(ctx->r25, -0X1D50);
    // 0x80332050: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80332054: nop

    // 0x80332058: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x8033205C: beq         $t1, $zero, L_803320A4
    if (ctx->r9 == 0) {
        // 0x80332060: nop
    
            goto L_803320A4;
    }
    // 0x80332060: nop

    // 0x80332064: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332068: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033206C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80332070: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
    // 0x80332074: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332078: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033207C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80332080: swc1        $f6, 0x16C($t3)
    MEM_W(0X16C, ctx->r11) = ctx->f6.u32l;
    // 0x80332084: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332088: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033208C: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80332090: swc1        $f8, 0x2BC($t4)
    MEM_W(0X2BC, ctx->r12) = ctx->f8.u32l;
    // 0x80332094: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332098: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033209C: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x803320A0: swc1        $f10, 0x40C($t5)
    MEM_W(0X40C, ctx->r13) = ctx->f10.u32l;
L_803320A4:
    // 0x803320A4: jal         0x8001994C
    // 0x803320A8: nop

    func_8001994C(rdram, ctx);
        goto after_25;
    // 0x803320A8: nop

    after_25:
    // 0x803320AC: jal         0x800628C0
    // 0x803320B0: nop

    func_800628C0(rdram, ctx);
        goto after_26;
    // 0x803320B0: nop

    after_26:
    // 0x803320B4: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_803320B8:
    // 0x803320B8: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x803320BC: lui         $t8, 0x8032
    ctx->r24 = S32(0X8032 << 16);
    // 0x803320C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803320C4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803320C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803320CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803320D0: lh          $t8, 0x4998($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4998);
    // 0x803320D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803320D8: bne         $t8, $at, L_803320E8
    if (ctx->r24 != ctx->r1) {
        // 0x803320DC: nop
    
            goto L_803320E8;
    }
    // 0x803320DC: nop

    // 0x803320E0: b           L_80332190
    // 0x803320E4: nop

        goto L_80332190;
    // 0x803320E4: nop

L_803320E8:
    // 0x803320E8: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x803320EC: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x803320F0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803320F4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803320F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803320FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332100: lh          $t1, 0x49A0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X49A0);
    // 0x80332104: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332108: beq         $t1, $at, L_80332158
    if (ctx->r9 == ctx->r1) {
        // 0x8033210C: nop
    
            goto L_80332158;
    }
    // 0x8033210C: nop

    // 0x80332110: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x80332114: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332118: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033211C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80332120: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332124: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80332128: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x8033212C: jal         0x8001CEF4
    // 0x80332130: nop

    func_8001CEF4(rdram, ctx);
        goto after_27;
    // 0x80332130: nop

    after_27:
    // 0x80332134: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x80332138: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x8033213C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332140: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80332144: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332148: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x8033214C: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80332150: jal         0x8001CD20
    // 0x80332154: nop

    func_8001CD20(rdram, ctx);
        goto after_28;
    // 0x80332154: nop

    after_28:
L_80332158:
    // 0x80332158: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x8033215C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80332160: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332164: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332168: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033216C: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80332170: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80332174: jal         0x8001AD6C
    // 0x80332178: nop

    func_8001AD6C(rdram, ctx);
        goto after_29;
    // 0x80332178: nop

    after_29:
    // 0x8033217C: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x80332180: nop

    // 0x80332184: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80332188: b           L_803320B8
    // 0x8033218C: sh          $t9, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r25;
        goto L_803320B8;
    // 0x8033218C: sh          $t9, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r25;
L_80332190:
    // 0x80332190: b           L_80332198
    // 0x80332194: nop

        goto L_80332198;
    // 0x80332194: nop

L_80332198:
    // 0x80332198: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033219C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803321A0: jr          $ra
    // 0x803321A4: nop

    return;
    // 0x803321A4: nop

;}
RECOMP_FUNC void func_80331A44_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331A4C: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331A50: lh          $t6, 0x44A4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X44A4);
    // 0x80331A54: nop

    // 0x80331A58: bne         $t6, $zero, L_80331A70
    if (ctx->r14 != 0) {
        // 0x80331A5C: nop
    
            goto L_80331A70;
    }
    // 0x80331A5C: nop

    // 0x80331A60: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80331A64: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A68: b           L_80331A84
    // 0x80331A6C: sh          $t7, 0x44A4($at)
    MEM_H(0X44A4, ctx->r1) = ctx->r15;
        goto L_80331A84;
    // 0x80331A6C: sh          $t7, 0x44A4($at)
    MEM_H(0X44A4, ctx->r1) = ctx->r15;
L_80331A70:
    // 0x80331A70: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331A74: lh          $t8, 0x44A4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X44A4);
    // 0x80331A78: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A7C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80331A80: sh          $t9, 0x44A4($at)
    MEM_H(0X44A4, ctx->r1) = ctx->r25;
L_80331A84:
    // 0x80331A84: jal         0x80331918
    // 0x80331A88: nop

    func_80331918_unk_bin_10(rdram, ctx);
        goto after_0;
    // 0x80331A88: nop

    after_0:
    // 0x80331A8C: b           L_80331A94
    // 0x80331A90: nop

        goto L_80331A94;
    // 0x80331A90: nop

L_80331A94:
    // 0x80331A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331A9C: jr          $ra
    // 0x80331AA0: nop

    return;
    // 0x80331AA0: nop

;}
RECOMP_FUNC void func_80331918_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331918: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033191C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331920: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80331924: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80331928: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8033192C: jal         0x8001A928
    // 0x80331930: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80331930: nop

    after_0:
    // 0x80331934: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80331938: jal         0x80060E40
    // 0x8033193C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x8033193C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x80331940: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331944: lh          $t7, 0x44A4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X44A4);
    // 0x80331948: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x8033194C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331950: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80331954: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80331958: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033195C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331960: lh          $t9, 0x2E30($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2E30);
    // 0x80331964: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331968: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8033196C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331970: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331974: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331978: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033197C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331980: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331984: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331988: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x8033198C: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331990: lh          $t2, 0x44A4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X44A4);
    // 0x80331994: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331998: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033199C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803319A0: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x803319A4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803319A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803319AC: lh          $t4, 0x2E32($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X2E32);
    // 0x803319B0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803319B4: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x803319B8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803319BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803319C0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803319C4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803319C8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803319CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319D0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803319D4: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x803319D8: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803319DC: lh          $t7, 0x44A4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X44A4);
    // 0x803319E0: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803319E4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803319E8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803319EC: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x803319F0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803319F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803319F8: lh          $t9, 0x2E34($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2E34);
    // 0x803319FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331A00: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80331A04: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331A08: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331A0C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80331A10: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331A14: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331A18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A1C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331A20: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80331A24: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A28: sh          $zero, 0x44A6($at)
    MEM_H(0X44A6, ctx->r1) = 0;
    // 0x80331A2C: b           L_80331A34
    // 0x80331A30: nop

        goto L_80331A34;
    // 0x80331A30: nop

L_80331A34:
    // 0x80331A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331A38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331A3C: jr          $ra
    // 0x80331A40: nop

    return;
    // 0x80331A40: nop

;}
RECOMP_FUNC void func_80332468_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332468: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033246C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332470: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80332474: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80332478: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033247C: addiu       $t8, $t8, -0x3560
    ctx->r24 = ADD32(ctx->r24, -0X3560);
    // 0x80332480: addiu       $t6, $t6, 0x30
    ctx->r14 = ADD32(ctx->r14, 0X30);
    // 0x80332484: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80332488: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x8033248C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80332490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332494: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80332498: jal         0x8001BD44
    // 0x8033249C: addu        $a3, $t7, $t9
    ctx->r7 = ADD32(ctx->r15, ctx->r25);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x8033249C: addu        $a3, $t7, $t9
    ctx->r7 = ADD32(ctx->r15, ctx->r25);
    after_0:
    // 0x803324A0: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803324A4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803324A8: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x803324AC: addiu       $t0, $t0, 0x30
    ctx->r8 = ADD32(ctx->r8, 0X30);
    // 0x803324B0: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x803324B4: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x803324B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803324BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803324C4: jal         0x8001BE6C
    // 0x803324C8: addu        $a3, $t1, $t3
    ctx->r7 = ADD32(ctx->r9, ctx->r11);
    func_8001BE6C(rdram, ctx);
        goto after_1;
    // 0x803324C8: addu        $a3, $t1, $t3
    ctx->r7 = ADD32(ctx->r9, ctx->r11);
    after_1:
    // 0x803324CC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803324D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803324D4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803324D8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803324DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803324E0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803324E4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803324E8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803324EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803324F0: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
    // 0x803324F4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803324F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803324FC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80332500: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80332504: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332508: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8033250C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332510: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332514: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332518: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x8033251C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80332520: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80332524: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332528: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033252C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332530: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332534: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332538: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033253C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332540: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332544: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80332548: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033254C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332550: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80332554: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80332558: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033255C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80332560: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332564: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332568: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033256C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80332570: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80332574: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80332578: lui         $t5, 0x8032
    ctx->r13 = S32(0X8032 << 16);
    // 0x8033257C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332580: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x80332584: addiu       $t5, $t5, 0x30
    ctx->r13 = ADD32(ctx->r13, 0X30);
    // 0x80332588: lw          $t4, 0x8($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X8);
    // 0x8033258C: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x80332590: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80332594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332598: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x8033259C: jal         0x8001BD44
    // 0x803325A0: addu        $a3, $t4, $t8
    ctx->r7 = ADD32(ctx->r12, ctx->r24);
    func_8001BD44(rdram, ctx);
        goto after_2;
    // 0x803325A0: addu        $a3, $t4, $t8
    ctx->r7 = ADD32(ctx->r12, ctx->r24);
    after_2:
    // 0x803325A4: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x803325A8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803325AC: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x803325B0: addiu       $t7, $t7, 0x30
    ctx->r15 = ADD32(ctx->r15, 0X30);
    // 0x803325B4: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x803325B8: lw          $t2, 0x10($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X10);
    // 0x803325BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803325C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803325C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803325C8: jal         0x8001BE6C
    // 0x803325CC: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    func_8001BE6C(rdram, ctx);
        goto after_3;
    // 0x803325CC: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    after_3:
    // 0x803325D0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803325D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803325D8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x803325DC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803325E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803325E4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803325E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803325EC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803325F0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803325F4: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x803325F8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803325FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332600: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80332604: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80332608: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033260C: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80332610: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332614: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332618: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033261C: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80332620: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332624: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80332628: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8033262C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80332630: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332634: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332638: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8033263C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332640: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332644: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332648: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x8033264C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332650: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332654: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80332658: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8033265C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332660: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80332664: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332668: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033266C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332670: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80332674: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80332678: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8033267C: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80332680: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80332684: addiu       $t5, $t5, -0x3560
    ctx->r13 = ADD32(ctx->r13, -0X3560);
    // 0x80332688: addiu       $t3, $t3, 0x30
    ctx->r11 = ADD32(ctx->r11, 0X30);
    // 0x8033268C: lw          $t1, 0x10($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X10);
    // 0x80332690: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x80332694: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80332698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033269C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x803326A0: jal         0x8001BD44
    // 0x803326A4: addu        $a3, $t1, $t6
    ctx->r7 = ADD32(ctx->r9, ctx->r14);
    func_8001BD44(rdram, ctx);
        goto after_4;
    // 0x803326A4: addu        $a3, $t1, $t6
    ctx->r7 = ADD32(ctx->r9, ctx->r14);
    after_4:
    // 0x803326A8: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x803326AC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x803326B0: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x803326B4: addiu       $t4, $t4, 0x30
    ctx->r12 = ADD32(ctx->r12, 0X30);
    // 0x803326B8: lw          $t8, 0x14($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X14);
    // 0x803326BC: lw          $t0, 0x10($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X10);
    // 0x803326C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803326C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803326CC: jal         0x8001BE6C
    // 0x803326D0: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    func_8001BE6C(rdram, ctx);
        goto after_5;
    // 0x803326D0: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    after_5:
    // 0x803326D4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803326D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803326DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803326E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803326E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803326E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803326EC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803326F0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803326F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803326F8: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x803326FC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332700: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332704: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x80332708: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x8033270C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332710: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80332714: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332718: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033271C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332720: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80332724: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80332728: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x8033272C: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80332730: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80332734: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332738: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033273C: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80332740: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332744: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332748: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033274C: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80332750: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332754: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332758: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033275C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332760: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332764: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332768: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033276C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332770: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332774: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80332778: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8033277C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80332780: lui         $t2, 0x8032
    ctx->r10 = S32(0X8032 << 16);
    // 0x80332784: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80332788: addiu       $t3, $t3, -0x3560
    ctx->r11 = ADD32(ctx->r11, -0X3560);
    // 0x8033278C: addiu       $t2, $t2, 0x30
    ctx->r10 = ADD32(ctx->r10, 0X30);
    // 0x80332790: lw          $t9, 0x18($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X18);
    // 0x80332794: lw          $t5, 0x10($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X10);
    // 0x80332798: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8033279C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803327A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803327A4: jal         0x8001BD44
    // 0x803327A8: addu        $a3, $t9, $t5
    ctx->r7 = ADD32(ctx->r25, ctx->r13);
    func_8001BD44(rdram, ctx);
        goto after_6;
    // 0x803327A8: addu        $a3, $t9, $t5
    ctx->r7 = ADD32(ctx->r25, ctx->r13);
    after_6:
    // 0x803327AC: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x803327B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803327B4: addiu       $t4, $t4, -0x3560
    ctx->r12 = ADD32(ctx->r12, -0X3560);
    // 0x803327B8: addiu       $t1, $t1, 0x30
    ctx->r9 = ADD32(ctx->r9, 0X30);
    // 0x803327BC: lw          $t6, 0x1C($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X1C);
    // 0x803327C0: lw          $t7, 0x10($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X10);
    // 0x803327C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803327C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803327CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803327D0: jal         0x8001BE6C
    // 0x803327D4: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    func_8001BE6C(rdram, ctx);
        goto after_7;
    // 0x803327D4: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    after_7:
    // 0x803327D8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803327DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327E0: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x803327E4: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x803327E8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803327EC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x803327F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803327F4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803327F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803327FC: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80332800: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332804: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332808: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x8033280C: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80332810: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332814: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80332818: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033281C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332820: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332824: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80332828: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033282C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x80332830: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x80332834: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80332838: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033283C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332840: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80332844: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332848: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033284C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332850: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x80332854: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332858: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033285C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80332860: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80332864: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332868: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8033286C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332870: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332874: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332878: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x8033287C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80332880: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80332884: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80332888: jal         0x80060E40
    // 0x8033288C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80060E40(rdram, ctx);
        goto after_8;
    // 0x8033288C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_8:
    // 0x80332890: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332894: lui         $at, 0x42E0
    ctx->r1 = S32(0X42E0 << 16);
    // 0x80332898: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8033289C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803328A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803328A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803328A8: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803328AC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803328B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803328B4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803328B8: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x803328BC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803328C0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803328C4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803328C8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803328CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803328D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803328D4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803328D8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803328DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803328E0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803328E4: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x803328E8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803328EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803328F0: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x803328F4: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x803328F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803328FC: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80332900: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332904: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332908: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033290C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80332910: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80332914: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80332918: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8033291C: jal         0x80060E40
    // 0x80332920: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060E40(rdram, ctx);
        goto after_9;
    // 0x80332920: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_9:
    // 0x80332924: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332928: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8033292C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80332930: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80332934: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332938: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033293C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80332940: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332944: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332948: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033294C: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80332950: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332954: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x80332958: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8033295C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80332960: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332964: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332968: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8033296C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332970: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332974: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332978: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x8033297C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332980: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332984: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80332988: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8033298C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332990: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80332994: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332998: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033299C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803329A0: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x803329A4: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x803329A8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x803329AC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803329B0: jal         0x80060E40
    // 0x803329B4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060E40(rdram, ctx);
        goto after_10;
    // 0x803329B4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_10:
    // 0x803329B8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803329BC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803329C0: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x803329C4: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x803329C8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803329CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803329D0: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x803329D4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803329D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803329DC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803329E0: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x803329E4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803329E8: lui         $at, 0x4338
    ctx->r1 = S32(0X4338 << 16);
    // 0x803329EC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x803329F0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803329F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803329F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803329FC: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80332A00: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332A04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A08: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332A0C: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80332A10: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332A18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332A1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332A24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332A2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A30: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332A34: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80332A38: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80332A3C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80332A40: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A44: jal         0x80060E40
    // 0x80332A48: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80060E40(rdram, ctx);
        goto after_11;
    // 0x80332A48: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_11:
    // 0x80332A4C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A50: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x80332A54: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80332A58: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80332A5C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332A60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332A64: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80332A68: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332A6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A70: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332A74: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80332A78: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A7C: lui         $at, 0x4350
    ctx->r1 = S32(0X4350 << 16);
    // 0x80332A80: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80332A84: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80332A88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332A8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332A90: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80332A94: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332A98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A9C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332AA0: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x80332AA4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AA8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332AAC: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x80332AB0: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80332AB4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332AB8: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80332ABC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332AC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332AC4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332AC8: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80332ACC: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80332AD0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80332AD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AD8: jal         0x80060E40
    // 0x80332ADC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80060E40(rdram, ctx);
        goto after_12;
    // 0x80332ADC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_12:
    // 0x80332AE0: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80332AE4: lh          $t6, 0x44A4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X44A4);
    // 0x80332AE8: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80332AEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332AF0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332AF4: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80332AF8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AFC: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80332B00: lh          $t0, 0x2E30($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X2E30);
    // 0x80332B04: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80332B08: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80332B0C: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80332B10: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332B14: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332B18: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80332B1C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332B20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B24: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332B28: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80332B2C: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80332B30: lh          $t3, 0x44A4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X44A4);
    // 0x80332B34: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80332B38: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80332B3C: subu        $t9, $t9, $t3
    ctx->r25 = SUB32(ctx->r25, ctx->r11);
    // 0x80332B40: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80332B44: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B48: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80332B4C: lh          $t5, 0x2E32($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X2E32);
    // 0x80332B50: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80332B54: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80332B58: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80332B5C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332B60: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332B64: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80332B68: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332B6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B70: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332B74: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80332B78: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80332B7C: lh          $t6, 0x44A4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X44A4);
    // 0x80332B80: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80332B84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332B88: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80332B8C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80332B90: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B94: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80332B98: lh          $t0, 0x2E34($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X2E34);
    // 0x80332B9C: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80332BA0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80332BA4: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80332BA8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332BAC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332BB0: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80332BB4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332BB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332BBC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332BC0: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80332BC4: b           L_80332BCC
    // 0x80332BC8: nop

        goto L_80332BCC;
    // 0x80332BC8: nop

L_80332BCC:
    // 0x80332BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332BD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332BD4: jr          $ra
    // 0x80332BD8: nop

    return;
    // 0x80332BD8: nop

;}
RECOMP_FUNC void func_80331AA4_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331AAC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331AB0: lh          $t6, 0x44A4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X44A4);
    // 0x80331AB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331AB8: bne         $t6, $at, L_80331ACC
    if (ctx->r14 != ctx->r1) {
        // 0x80331ABC: nop
    
            goto L_80331ACC;
    }
    // 0x80331ABC: nop

    // 0x80331AC0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331AC4: b           L_80331AE0
    // 0x80331AC8: sh          $zero, 0x44A4($at)
    MEM_H(0X44A4, ctx->r1) = 0;
        goto L_80331AE0;
    // 0x80331AC8: sh          $zero, 0x44A4($at)
    MEM_H(0X44A4, ctx->r1) = 0;
L_80331ACC:
    // 0x80331ACC: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331AD0: lh          $t7, 0x44A4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X44A4);
    // 0x80331AD4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331AD8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331ADC: sh          $t8, 0x44A4($at)
    MEM_H(0X44A4, ctx->r1) = ctx->r24;
L_80331AE0:
    // 0x80331AE0: jal         0x80331918
    // 0x80331AE4: nop

    func_80331918_unk_bin_10(rdram, ctx);
        goto after_0;
    // 0x80331AE4: nop

    after_0:
    // 0x80331AE8: b           L_80331AF0
    // 0x80331AEC: nop

        goto L_80331AF0;
    // 0x80331AEC: nop

L_80331AF0:
    // 0x80331AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331AF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331AF8: jr          $ra
    // 0x80331AFC: nop

    return;
    // 0x80331AFC: nop

;}
RECOMP_FUNC void func_80331350_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331350: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331358: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8033135C: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_80331360:
    // 0x80331360: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x80331364: jal         0x800697F0
    // 0x80331368: nop

    func_800697F0(rdram, ctx);
        goto after_0;
    // 0x80331368: nop

    after_0:
    // 0x8033136C: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x80331370: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331374: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331378: sb          $v0, 0x4490($at)
    MEM_B(0X4490, ctx->r1) = ctx->r2;
    // 0x8033137C: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x80331380: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80331384: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331388: lb          $t8, 0x4490($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4490);
    // 0x8033138C: nop

    // 0x80331390: bne         $t8, $zero, L_803313A8
    if (ctx->r24 != 0) {
        // 0x80331394: nop
    
            goto L_803313A8;
    }
    // 0x80331394: nop

    // 0x80331398: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8033139C: nop

    // 0x803313A0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803313A4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
L_803313A8:
    // 0x803313A8: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x803313AC: nop

    // 0x803313B0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x803313B4: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x803313B8: slti        $at, $t3, 0x6
    ctx->r1 = SIGNED(ctx->r11) < 0X6 ? 1 : 0;
    // 0x803313BC: bne         $at, $zero, L_80331360
    if (ctx->r1 != 0) {
        // 0x803313C0: sb          $t2, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r10;
            goto L_80331360;
    }
    // 0x803313C0: sb          $t2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r10;
    // 0x803313C4: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x803313C8: addiu       $t5, $t5, 0x4498
    ctx->r13 = ADD32(ctx->r13, 0X4498);
    // 0x803313CC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803313D0: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x803313D4: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803313D8: addiu       $t6, $t6, 0x4498
    ctx->r14 = ADD32(ctx->r14, 0X4498);
    // 0x803313DC: sb          $zero, 0x1($t6)
    MEM_B(0X1, ctx->r14) = 0;
    // 0x803313E0: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803313E4: addiu       $t7, $t7, 0x4498
    ctx->r15 = ADD32(ctx->r15, 0X4498);
    // 0x803313E8: sb          $zero, 0x2($t7)
    MEM_B(0X2, ctx->r15) = 0;
    // 0x803313EC: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803313F0: addiu       $t8, $t8, 0x4498
    ctx->r24 = ADD32(ctx->r24, 0X4498);
    // 0x803313F4: sb          $zero, 0x3($t8)
    MEM_B(0X3, ctx->r24) = 0;
    // 0x803313F8: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x803313FC: addiu       $t0, $t0, 0x4498
    ctx->r8 = ADD32(ctx->r8, 0X4498);
    // 0x80331400: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80331404: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
    // 0x80331408: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8033140C: nop

    // 0x80331410: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80331414: bne         $at, $zero, L_8033142C
    if (ctx->r1 != 0) {
        // 0x80331418: nop
    
            goto L_8033142C;
    }
    // 0x80331418: nop

    // 0x8033141C: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80331420: addiu       $t3, $t3, 0x4498
    ctx->r11 = ADD32(ctx->r11, 0X4498);
    // 0x80331424: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331428: sb          $t2, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r10;
L_8033142C:
    // 0x8033142C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80331430: nop

    // 0x80331434: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x80331438: bne         $at, $zero, L_80331450
    if (ctx->r1 != 0) {
        // 0x8033143C: nop
    
            goto L_80331450;
    }
    // 0x8033143C: nop

    // 0x80331440: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80331444: addiu       $t6, $t6, 0x4498
    ctx->r14 = ADD32(ctx->r14, 0X4498);
    // 0x80331448: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033144C: sb          $t5, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r13;
L_80331450:
    // 0x80331450: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80331454: nop

    // 0x80331458: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x8033145C: bne         $at, $zero, L_80331474
    if (ctx->r1 != 0) {
        // 0x80331460: nop
    
            goto L_80331474;
    }
    // 0x80331460: nop

    // 0x80331464: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80331468: addiu       $t9, $t9, 0x4498
    ctx->r25 = ADD32(ctx->r25, 0X4498);
    // 0x8033146C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80331470: sb          $t8, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r24;
L_80331474:
    // 0x80331474: b           L_8033147C
    // 0x80331478: nop

        goto L_8033147C;
    // 0x80331478: nop

L_8033147C:
    // 0x8033147C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331480: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331484: jr          $ra
    // 0x80331488: nop

    return;
    // 0x80331488: nop

;}
RECOMP_FUNC void func_803304A4_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803304A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803304A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803304AC: jal         0x80062EAC
    // 0x803304B0: nop

    func_80062EAC(rdram, ctx);
        goto after_0;
    // 0x803304B0: nop

    after_0:
    // 0x803304B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803304B8: jal         0x8001D1D4
    // 0x803304BC: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x803304BC: nop

    after_1:
    // 0x803304C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803304C4: bne         $v0, $at, L_803304D4
    if (ctx->r2 != ctx->r1) {
        // 0x803304C8: nop
    
            goto L_803304D4;
    }
    // 0x803304C8: nop

    // 0x803304CC: b           L_803307AC
    // 0x803304D0: nop

        goto L_803307AC;
    // 0x803304D0: nop

L_803304D4:
    // 0x803304D4: jal         0x8001D1D4
    // 0x803304D8: nop

    func_8001D1D4(rdram, ctx);
        goto after_2;
    // 0x803304D8: nop

    after_2:
    // 0x803304DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803304E0: bne         $v0, $at, L_803304FC
    if (ctx->r2 != ctx->r1) {
        // 0x803304E4: nop
    
            goto L_803304FC;
    }
    // 0x803304E4: nop

    // 0x803304E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803304EC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x803304F0: sw          $t6, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r14;
    // 0x803304F4: b           L_803307AC
    // 0x803304F8: nop

        goto L_803307AC;
    // 0x803304F8: nop

L_803304FC:
    // 0x803304FC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80330500: addiu       $t7, $t7, -0x1D50
    ctx->r15 = ADD32(ctx->r15, -0X1D50);
    // 0x80330504: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80330508: nop

    // 0x8033050C: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80330510: beq         $t9, $zero, L_80330580
    if (ctx->r25 == 0) {
        // 0x80330514: nop
    
            goto L_80330580;
    }
    // 0x80330514: nop

    // 0x80330518: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8033051C: lb          $t0, 0x488D($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X488D);
    // 0x80330520: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80330524: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330528: lb          $t1, 0x4498($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4498);
    // 0x8033052C: nop

    // 0x80330530: beq         $t1, $zero, L_80330560
    if (ctx->r9 == 0) {
        // 0x80330534: nop
    
            goto L_80330560;
    }
    // 0x80330534: nop

    // 0x80330538: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8033053C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330540: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80330544: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330548: jal         0x800178D4
    // 0x8033054C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x8033054C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80330550: jal         0x8001D2C0
    // 0x80330554: nop

    func_8001D2C0(rdram, ctx);
        goto after_4;
    // 0x80330554: nop

    after_4:
    // 0x80330558: b           L_80330578
    // 0x8033055C: nop

        goto L_80330578;
    // 0x8033055C: nop

L_80330560:
    // 0x80330560: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330568: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x8033056C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330570: jal         0x800178D4
    // 0x80330574: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80330574: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_80330578:
    // 0x80330578: b           L_803306B0
    // 0x8033057C: nop

        goto L_803306B0;
    // 0x8033057C: nop

L_80330580:
    // 0x80330580: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330584: addiu       $t2, $t2, -0x1D50
    ctx->r10 = ADD32(ctx->r10, -0X1D50);
    // 0x80330588: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x8033058C: nop

    // 0x80330590: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x80330594: beq         $t4, $zero, L_803305D0
    if (ctx->r12 == 0) {
        // 0x80330598: nop
    
            goto L_803305D0;
    }
    // 0x80330598: nop

    // 0x8033059C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803305A0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803305A4: sb          $t5, 0x2D40($at)
    MEM_B(0X2D40, ctx->r1) = ctx->r13;
    // 0x803305A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803305AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803305B0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x803305B4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803305B8: jal         0x800178D4
    // 0x803305BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_6;
    // 0x803305BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x803305C0: jal         0x8001D2C0
    // 0x803305C4: nop

    func_8001D2C0(rdram, ctx);
        goto after_7;
    // 0x803305C4: nop

    after_7:
    // 0x803305C8: b           L_803306B0
    // 0x803305CC: nop

        goto L_803306B0;
    // 0x803305CC: nop

L_803305D0:
    // 0x803305D0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x803305D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803305D8: bne         $t6, $at, L_80330644
    if (ctx->r14 != ctx->r1) {
        // 0x803305DC: nop
    
            goto L_80330644;
    }
    // 0x803305DC: nop

    // 0x803305E0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x803305E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803305E8: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x803305EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803305F0: jal         0x800178D4
    // 0x803305F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_8;
    // 0x803305F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x803305F8: jal         0x80330334
    // 0x803305FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80330334_unk_bin_10(rdram, ctx);
        goto after_9;
    // 0x803305FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80330600: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80330604: lb          $t7, 0x488D($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X488D);
    // 0x80330608: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8033060C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80330610: sb          $t8, 0x488D($at)
    MEM_B(0X488D, ctx->r1) = ctx->r24;
    // 0x80330614: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80330618: lb          $t9, 0x488D($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X488D);
    // 0x8033061C: nop

    // 0x80330620: bgez        $t9, L_80330634
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80330624: nop
    
            goto L_80330634;
    }
    // 0x80330624: nop

    // 0x80330628: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8033062C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80330630: sb          $t0, 0x488D($at)
    MEM_B(0X488D, ctx->r1) = ctx->r8;
L_80330634:
    // 0x80330634: jal         0x80330334
    // 0x80330638: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80330334_unk_bin_10(rdram, ctx);
        goto after_10;
    // 0x80330638: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x8033063C: b           L_803306B0
    // 0x80330640: nop

        goto L_803306B0;
    // 0x80330640: nop

L_80330644:
    // 0x80330644: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330648: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8033064C: bne         $t1, $at, L_803306B0
    if (ctx->r9 != ctx->r1) {
        // 0x80330650: nop
    
            goto L_803306B0;
    }
    // 0x80330650: nop

    // 0x80330654: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80330658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033065C: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x80330660: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330664: jal         0x800178D4
    // 0x80330668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_11;
    // 0x80330668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x8033066C: jal         0x80330334
    // 0x80330670: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80330334_unk_bin_10(rdram, ctx);
        goto after_12;
    // 0x80330670: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x80330674: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80330678: lb          $t2, 0x488D($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X488D);
    // 0x8033067C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80330680: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80330684: sb          $t3, 0x488D($at)
    MEM_B(0X488D, ctx->r1) = ctx->r11;
    // 0x80330688: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8033068C: lb          $t4, 0x488D($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X488D);
    // 0x80330690: nop

    // 0x80330694: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x80330698: bne         $at, $zero, L_803306A8
    if (ctx->r1 != 0) {
        // 0x8033069C: nop
    
            goto L_803306A8;
    }
    // 0x8033069C: nop

    // 0x803306A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x803306A4: sb          $zero, 0x488D($at)
    MEM_B(0X488D, ctx->r1) = 0;
L_803306A8:
    // 0x803306A8: jal         0x80330334
    // 0x803306AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80330334_unk_bin_10(rdram, ctx);
        goto after_13;
    // 0x803306AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
L_803306B0:
    // 0x803306B0: jal         0x80330234
    // 0x803306B4: nop

    func_80330234_unk_bin_10(rdram, ctx);
        goto after_14;
    // 0x803306B4: nop

    after_14:
    // 0x803306B8: jal         0x8001994C
    // 0x803306BC: nop

    func_8001994C(rdram, ctx);
        goto after_15;
    // 0x803306BC: nop

    after_15:
    // 0x803306C0: jal         0x800628C0
    // 0x803306C4: nop

    func_800628C0(rdram, ctx);
        goto after_16;
    // 0x803306C4: nop

    after_16:
    // 0x803306C8: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_803306CC:
    // 0x803306CC: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x803306D0: lui         $t7, 0x8032
    ctx->r15 = S32(0X8032 << 16);
    // 0x803306D4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803306D8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x803306DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803306E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803306E4: lh          $t7, 0x4998($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4998);
    // 0x803306E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803306EC: bne         $t7, $at, L_803306FC
    if (ctx->r15 != ctx->r1) {
        // 0x803306F0: nop
    
            goto L_803306FC;
    }
    // 0x803306F0: nop

    // 0x803306F4: b           L_803307A4
    // 0x803306F8: nop

        goto L_803307A4;
    // 0x803306F8: nop

L_803306FC:
    // 0x803306FC: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x80330700: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80330704: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330708: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8033070C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330710: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330714: lh          $t0, 0x49A0($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X49A0);
    // 0x80330718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033071C: beq         $t0, $at, L_8033076C
    if (ctx->r8 == ctx->r1) {
        // 0x80330720: nop
    
            goto L_8033076C;
    }
    // 0x80330720: nop

    // 0x80330724: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80330728: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x8033072C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330730: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80330734: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330738: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x8033073C: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330740: jal         0x8001CEF4
    // 0x80330744: nop

    func_8001CEF4(rdram, ctx);
        goto after_17;
    // 0x80330744: nop

    after_17:
    // 0x80330748: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x8033074C: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330750: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330754: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80330758: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033075C: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x80330760: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330764: jal         0x8001CD20
    // 0x80330768: nop

    func_8001CD20(rdram, ctx);
        goto after_18;
    // 0x80330768: nop

    after_18:
L_8033076C:
    // 0x8033076C: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80330770: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330774: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330778: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8033077C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330780: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80330784: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330788: jal         0x8001AD6C
    // 0x8033078C: nop

    func_8001AD6C(rdram, ctx);
        goto after_19;
    // 0x8033078C: nop

    after_19:
    // 0x80330790: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x80330794: nop

    // 0x80330798: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8033079C: b           L_803306CC
    // 0x803307A0: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
        goto L_803306CC;
    // 0x803307A0: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_803307A4:
    // 0x803307A4: b           L_803307AC
    // 0x803307A8: nop

        goto L_803307AC;
    // 0x803307A8: nop

L_803307AC:
    // 0x803307AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803307B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803307B4: jr          $ra
    // 0x803307B8: nop

    return;
    // 0x803307B8: nop

;}
RECOMP_FUNC void func_803317E8_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803317E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803317EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803317F0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x803317F4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x803317F8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803317FC: jal         0x8001A928
    // 0x80331800: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80331800: nop

    after_0:
    // 0x80331804: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80331808: jal         0x80060E40
    // 0x8033180C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80060E40(rdram, ctx);
        goto after_1;
    // 0x8033180C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x80331810: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80331814: lh          $t7, 0x44A4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X44A4);
    // 0x80331818: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x8033181C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331820: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80331824: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80331828: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033182C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331830: lh          $t9, 0x2E30($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2E30);
    // 0x80331834: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331838: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8033183C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331840: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331844: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331848: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033184C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331850: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331854: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331858: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x8033185C: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80331860: lh          $t2, 0x44A4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X44A4);
    // 0x80331864: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80331868: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033186C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80331870: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x80331874: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331878: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033187C: lh          $t4, 0x2E32($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X2E32);
    // 0x80331880: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331884: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80331888: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033188C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331890: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331894: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331898: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033189C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803318A0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803318A4: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x803318A8: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803318AC: lh          $t7, 0x44A4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X44A4);
    // 0x803318B0: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803318B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803318B8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x803318BC: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x803318C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803318C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803318C8: lh          $t9, 0x2E34($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2E34);
    // 0x803318CC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803318D0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x803318D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803318D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803318DC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803318E0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803318E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803318E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803318EC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803318F0: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x803318F4: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x803318F8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803318FC: sh          $t2, 0x44A6($at)
    MEM_H(0X44A6, ctx->r1) = ctx->r10;
    // 0x80331900: b           L_80331908
    // 0x80331904: nop

        goto L_80331908;
    // 0x80331904: nop

L_80331908:
    // 0x80331908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033190C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331910: jr          $ra
    // 0x80331914: nop

    return;
    // 0x80331914: nop

;}
RECOMP_FUNC void func_803307BC_unk_bin_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803307BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803307C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803307C4: jal         0x8001D4D0
    // 0x803307C8: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x803307C8: nop

    after_0:
    // 0x803307CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803307D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803307D8: jal         0x8001D638
    // 0x803307DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x803307DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803307E0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803307E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803307E8: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x803307EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803307F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803307F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803307F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307FC: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x80330800: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x80330804: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x80330808: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8033080C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80330810: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330814: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80330818: jal         0x80036E70
    // 0x8033081C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x8033081C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80330820: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330824: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80330828: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033082C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80330830: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80330834: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80330838: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8033083C: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80330840: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x80330844: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80330848: lhu         $t0, 0x3C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3C);
    // 0x8033084C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80330850: nop

    // 0x80330854: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80330858: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033085C: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x80330860: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330864: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80330868: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033086C: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80330870: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330874: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x80330878: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8033087C: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x80330880: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330888: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x8033088C: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x80330890: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80330894: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80330898: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8033089C: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x803308A0: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x803308A4: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x803308A8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803308AC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803308B0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x803308B4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x803308B8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x803308BC: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x803308C0: jal         0x80037188
    // 0x803308C4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x803308C4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x803308C8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803308CC: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x803308D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803308D4: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x803308D8: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x803308DC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x803308E0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803308E4: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x803308E8: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x803308EC: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x803308F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803308F4: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x803308F8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803308FC: nop

    // 0x80330900: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80330904: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80330908: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x8033090C: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
L_80330910:
    // 0x80330910: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330914: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x80330918: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033091C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80330920: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330924: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330928: lh          $t0, 0x4998($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4998);
    // 0x8033092C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330930: bne         $t0, $at, L_80330940
    if (ctx->r8 != ctx->r1) {
        // 0x80330934: nop
    
            goto L_80330940;
    }
    // 0x80330934: nop

    // 0x80330938: b           L_80330A3C
    // 0x8033093C: nop

        goto L_80330A3C;
    // 0x8033093C: nop

L_80330940:
    // 0x80330940: lhu         $t1, 0x3E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330944: lui         $t3, 0x8032
    ctx->r11 = S32(0X8032 << 16);
    // 0x80330948: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033094C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80330950: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330954: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330958: lh          $t3, 0x49A0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X49A0);
    // 0x8033095C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330960: beq         $t3, $at, L_80330A04
    if (ctx->r11 == ctx->r1) {
        // 0x80330964: nop
    
            goto L_80330A04;
    }
    // 0x80330964: nop

    // 0x80330968: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x8033096C: lui         $t6, 0x8032
    ctx->r14 = S32(0X8032 << 16);
    // 0x80330970: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330974: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80330978: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033097C: addiu       $t6, $t6, 0x4998
    ctx->r14 = ADD32(ctx->r14, 0X4998);
    // 0x80330980: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80330984: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x80330988: lh          $a1, 0x8($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X8);
    // 0x8033098C: jal         0x8001C1A8
    // 0x80330990: nop

    func_8001C1A8(rdram, ctx);
        goto after_4;
    // 0x80330990: nop

    after_4:
    // 0x80330994: beq         $v0, $zero, L_803309FC
    if (ctx->r2 == 0) {
        // 0x80330998: nop
    
            goto L_803309FC;
    }
    // 0x80330998: nop

    // 0x8033099C: jal         0x8001838C
    // 0x803309A0: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x803309A0: nop

    after_5:
    // 0x803309A4: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x803309A8: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x803309AC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803309B0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803309B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803309B8: addiu       $t0, $t0, 0x4998
    ctx->r8 = ADD32(ctx->r8, 0X4998);
    // 0x803309BC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803309C0: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x803309C4: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x803309C8: jal         0x8001B014
    // 0x803309CC: nop

    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x803309CC: nop

    after_6:
    // 0x803309D0: lhu         $t2, 0x3E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X3E);
    // 0x803309D4: lui         $t4, 0x8032
    ctx->r12 = S32(0X8032 << 16);
    // 0x803309D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803309DC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803309E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803309E4: addiu       $t4, $t4, 0x4998
    ctx->r12 = ADD32(ctx->r12, 0X4998);
    // 0x803309E8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803309EC: lh          $a0, 0x0($t5)
    ctx->r4 = MEM_H(ctx->r13, 0X0);
    // 0x803309F0: lh          $a1, 0x8($t5)
    ctx->r5 = MEM_H(ctx->r13, 0X8);
    // 0x803309F4: jal         0x8001C384
    // 0x803309F8: nop

    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x803309F8: nop

    after_7:
L_803309FC:
    // 0x803309FC: b           L_80330A28
    // 0x80330A00: nop

        goto L_80330A28;
    // 0x80330A00: nop

L_80330A04:
    // 0x80330A04: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330A08: lui         $a0, 0x8032
    ctx->r4 = S32(0X8032 << 16);
    // 0x80330A0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330A10: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80330A14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330A18: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80330A1C: lh          $a0, 0x4998($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4998);
    // 0x80330A20: jal         0x800623E0
    // 0x80330A24: nop

    func_800623E0(rdram, ctx);
        goto after_8;
    // 0x80330A24: nop

    after_8:
L_80330A28:
    // 0x80330A28: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x80330A2C: nop

    // 0x80330A30: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80330A34: b           L_80330910
    // 0x80330A38: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
        goto L_80330910;
    // 0x80330A38: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_80330A3C:
    // 0x80330A3C: jal         0x80330000
    // 0x80330A40: nop

    func_80330000_unk_bin_10(rdram, ctx);
        goto after_9;
    // 0x80330A40: nop

    after_9:
    // 0x80330A44: b           L_80330A4C
    // 0x80330A48: nop

        goto L_80330A4C;
    // 0x80330A48: nop

L_80330A4C:
    // 0x80330A4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80330A54: jr          $ra
    // 0x80330A58: nop

    return;
    // 0x80330A58: nop

;}
RECOMP_FUNC void func_endol_803318D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803318D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803318D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803318D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803318DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803318E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803318E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803318E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803318EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803318F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803318F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803318F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803318FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331900: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331904: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331908: nop

    // 0x8033190C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331910: nop

    // 0x80331914: bne         $t1, $zero, L_80331988
    if (ctx->r9 != 0) {
        // 0x80331918: nop
    
            goto L_80331988;
    }
    // 0x80331918: nop

    // 0x8033191C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331920: nop

    // 0x80331924: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331928: nop

    // 0x8033192C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331930: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331934: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331938: nop

    // 0x8033193C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331940: nop

    // 0x80331944: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331948: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033194C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331950: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331954: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331958: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033195C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331960: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80331964: jal         0x8001C0EC
    // 0x80331968: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331968: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x8033196C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331970: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331978: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x8033197C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331980: jal         0x800175F0
    // 0x80331984: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80331984: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80331988:
    // 0x80331988: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033198C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331990: jal         0x8001B62C
    // 0x80331994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80331994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331998: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8033199C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803319A0: nop

    // 0x803319A4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x803319A8: nop

    // 0x803319AC: bc1f        L_80331B70
    if (!c1cs) {
        // 0x803319B0: nop
    
            goto L_80331B70;
    }
    // 0x803319B0: nop

    // 0x803319B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803319B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319BC: lh          $t0, 0xBA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBA);
    // 0x803319C0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803319C4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803319C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803319CC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803319D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803319D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803319D8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803319DC: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x803319E0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803319E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319E8: lh          $t4, 0xBA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBA);
    // 0x803319EC: nop

    // 0x803319F0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803319F4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803319F8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803319FC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331A00: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331A04: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331A08: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80331A0C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331A10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A14: lh          $t7, 0xBC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBC);
    // 0x80331A18: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80331A1C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80331A20: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331A24: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331A28: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331A2C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331A30: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331A34: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x80331A38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A40: lh          $t8, 0xBC($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XBC);
    // 0x80331A44: nop

    // 0x80331A48: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80331A4C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80331A50: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331A54: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80331A58: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331A5C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331A60: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80331A64: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331A68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A6C: lh          $t2, 0xBE($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBE);
    // 0x80331A70: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80331A74: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80331A78: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80331A7C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331A80: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80331A84: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331A88: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331A8C: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80331A90: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331A94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A98: lh          $t6, 0xBE($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XBE);
    // 0x80331A9C: nop

    // 0x80331AA0: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80331AA4: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80331AA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331AAC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80331AB0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331AB4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331AB8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80331ABC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331AC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331AC4: lh          $t1, 0xC0($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XC0);
    // 0x80331AC8: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80331ACC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80331AD0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80331AD4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331AD8: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80331ADC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331AE0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331AE4: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80331AE8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331AEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331AF0: lh          $t3, 0xC0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC0);
    // 0x80331AF4: nop

    // 0x80331AF8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80331AFC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80331B00: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331B04: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80331B08: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331B0C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331B10: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80331B14: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331B18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B1C: lh          $t9, 0xC2($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XC2);
    // 0x80331B20: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80331B24: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80331B28: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80331B2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331B30: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80331B34: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331B38: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331B3C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80331B40: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331B44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B48: lh          $t0, 0xC2($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XC2);
    // 0x80331B4C: nop

    // 0x80331B50: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x80331B54: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80331B58: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331B5C: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80331B60: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331B64: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331B68: b           L_80331C10
    // 0x80331B6C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
        goto L_80331C10;
    // 0x80331B6C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331B70:
    // 0x80331B70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B78: jal         0x8001B62C
    // 0x80331B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80331B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331B80: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80331B84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331B88: nop

    // 0x80331B8C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80331B90: nop

    // 0x80331B94: bc1f        L_80331BC4
    if (!c1cs) {
        // 0x80331B98: nop
    
            goto L_80331BC4;
    }
    // 0x80331B98: nop

    // 0x80331B9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BA0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331BA4: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80331BA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BAC: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80331BB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331BB4: jal         0x8001ABF4
    // 0x80331BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80331BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80331BBC: b           L_80331C10
    // 0x80331BC0: nop

        goto L_80331C10;
    // 0x80331BC0: nop

L_80331BC4:
    // 0x80331BC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BCC: jal         0x8001B62C
    // 0x80331BD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x80331BD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80331BD4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80331BD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331BDC: nop

    // 0x80331BE0: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80331BE4: nop

    // 0x80331BE8: bc1f        L_80331C10
    if (!c1cs) {
        // 0x80331BEC: nop
    
            goto L_80331C10;
    }
    // 0x80331BEC: nop

    // 0x80331BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BF4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331BF8: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80331BFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C00: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x80331C04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331C08: jal         0x8001ABF4
    // 0x80331C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x80331C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_80331C10:
    // 0x80331C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C18: jal         0x8001B4AC
    // 0x80331C1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x80331C1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80331C20: beq         $v0, $zero, L_80331C40
    if (ctx->r2 == 0) {
        // 0x80331C24: nop
    
            goto L_80331C40;
    }
    // 0x80331C24: nop

    // 0x80331C28: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331C2C: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80331C30: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80331C34: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331C38: nop

    // 0x80331C3C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80331C40:
    // 0x80331C40: b           L_80331C48
    // 0x80331C44: nop

        goto L_80331C48;
    // 0x80331C44: nop

L_80331C48:
    // 0x80331C48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331C50: jr          $ra
    // 0x80331C54: nop

    return;
    // 0x80331C54: nop

;}
RECOMP_FUNC void func_endol_80331D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331D70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331D74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331D8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331D98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331D9C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331DA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331DA4: nop

    // 0x80331DA8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331DAC: nop

    // 0x80331DB0: bne         $t1, $zero, L_80331E08
    if (ctx->r9 != 0) {
        // 0x80331DB4: nop
    
            goto L_80331E08;
    }
    // 0x80331DB4: nop

    // 0x80331DB8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331DBC: nop

    // 0x80331DC0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331DC4: nop

    // 0x80331DC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331DCC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331DD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331DD4: nop

    // 0x80331DD8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331DDC: nop

    // 0x80331DE0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331DE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DE8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331DEC: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331DF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DF4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331DF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331DFC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80331E00: jal         0x8001C0EC
    // 0x80331E04: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331E04: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80331E08:
    // 0x80331E08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E10: jal         0x8001B4AC
    // 0x80331E14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331E14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331E18: beq         $v0, $zero, L_80331E38
    if (ctx->r2 == 0) {
        // 0x80331E1C: nop
    
            goto L_80331E38;
    }
    // 0x80331E1C: nop

    // 0x80331E20: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331E24: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80331E28: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331E2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331E30: nop

    // 0x80331E34: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331E38:
    // 0x80331E38: b           L_80331E40
    // 0x80331E3C: nop

        goto L_80331E40;
    // 0x80331E3C: nop

L_80331E40:
    // 0x80331E40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331E44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331E48: jr          $ra
    // 0x80331E4C: nop

    return;
    // 0x80331E4C: nop

;}
RECOMP_FUNC void func_endol_803351B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803351B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803351B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803351B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803351BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803351C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803351C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803351C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803351CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803351D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803351D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803351D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803351DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803351E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803351E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803351E8: nop

    // 0x803351EC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803351F0: nop

    // 0x803351F4: bne         $t1, $zero, L_8033524C
    if (ctx->r9 != 0) {
        // 0x803351F8: nop
    
            goto L_8033524C;
    }
    // 0x803351F8: nop

    // 0x803351FC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335200: nop

    // 0x80335204: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335208: nop

    // 0x8033520C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335210: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335214: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335218: nop

    // 0x8033521C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335220: nop

    // 0x80335224: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335228: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033522C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335230: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80335234: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335238: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033523C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335240: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x80335244: jal         0x8001C0EC
    // 0x80335248: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335248: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_8033524C:
    // 0x8033524C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335250: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80335254: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80335258: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033525C: nop

    // 0x80335260: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80335264: nop

    // 0x80335268: beq         $t1, $zero, L_8033527C
    if (ctx->r9 == 0) {
        // 0x8033526C: nop
    
            goto L_8033527C;
    }
    // 0x8033526C: nop

    // 0x80335270: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335274: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80335278: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_8033527C:
    // 0x8033527C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335284: jal         0x8001B4AC
    // 0x80335288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033528C: beq         $v0, $zero, L_803352E8
    if (ctx->r2 == 0) {
        // 0x80335290: nop
    
            goto L_803352E8;
    }
    // 0x80335290: nop

    // 0x80335294: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335298: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8033529C: sh          $t2, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r10;
    // 0x803352A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803352A4: nop

    // 0x803352A8: lh          $t7, 0x108($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X108);
    // 0x803352AC: nop

    // 0x803352B0: beq         $t7, $zero, L_803352C4
    if (ctx->r15 == 0) {
        // 0x803352B4: nop
    
            goto L_803352C4;
    }
    // 0x803352B4: nop

    // 0x803352B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803352BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803352C0: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_803352C4:
    // 0x803352C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803352C8: nop

    // 0x803352CC: sh          $zero, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = 0;
    // 0x803352D0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803352D4: addiu       $t1, $zero, 0x1A
    ctx->r9 = ADD32(0, 0X1A);
    // 0x803352D8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803352DC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803352E0: nop

    // 0x803352E4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803352E8:
    // 0x803352E8: b           L_803352F0
    // 0x803352EC: nop

        goto L_803352F0;
    // 0x803352EC: nop

L_803352F0:
    // 0x803352F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803352F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803352F8: jr          $ra
    // 0x803352FC: nop

    return;
    // 0x803352FC: nop

;}
RECOMP_FUNC void func_endol_803335F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803335F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803335F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803335F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803335FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333600: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333604: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333608: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033360C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333610: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333614: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333618: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033361C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333620: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333624: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333628: nop

    // 0x8033362C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333630: nop

    // 0x80333634: bne         $t1, $zero, L_8033368C
    if (ctx->r9 != 0) {
        // 0x80333638: nop
    
            goto L_8033368C;
    }
    // 0x80333638: nop

    // 0x8033363C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333640: nop

    // 0x80333644: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333648: nop

    // 0x8033364C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333650: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333654: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333658: nop

    // 0x8033365C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333660: nop

    // 0x80333664: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333668: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033366C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333670: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80333674: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333678: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033367C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333680: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80333684: jal         0x8001C0EC
    // 0x80333688: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333688: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_8033368C:
    // 0x8033368C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333690: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333694: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x80333698: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033369C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803336A0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803336A4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803336A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803336AC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803336B0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803336B4: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x803336B8: jal         0x80015538
    // 0x803336BC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803336BC: nop

    after_1:
    // 0x803336C0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803336C4: nop

    // 0x803336C8: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x803336CC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803336D0: nop

    // 0x803336D4: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803336D8: nop

    // 0x803336DC: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x803336E0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803336E4: nop

    // 0x803336E8: lh          $t2, 0xBA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBA);
    // 0x803336EC: nop

    // 0x803336F0: beq         $t2, $zero, L_80333754
    if (ctx->r10 == 0) {
        // 0x803336F4: nop
    
            goto L_80333754;
    }
    // 0x803336F4: nop

    // 0x803336F8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803336FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333700: lh          $t5, 0xBA($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XBA);
    // 0x80333704: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80333708: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033370C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333710: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333714: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333718: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033371C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333720: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80333724: nop

    // 0x80333728: bne         $t8, $at, L_8033374C
    if (ctx->r24 != ctx->r1) {
        // 0x8033372C: nop
    
            goto L_8033374C;
    }
    // 0x8033372C: nop

    // 0x80333730: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333734: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80333738: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033373C: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80333740: nop

    // 0x80333744: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80333748: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_8033374C:
    // 0x8033374C: b           L_803337A4
    // 0x80333750: nop

        goto L_803337A4;
    // 0x80333750: nop

L_80333754:
    // 0x80333754: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333758: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033375C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333760: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333764: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80333768: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8033376C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333770: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80333774: jal         0x800295C0
    // 0x80333778: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x80333778: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x8033377C: beq         $v0, $zero, L_80333794
    if (ctx->r2 == 0) {
        // 0x80333780: nop
    
            goto L_80333794;
    }
    // 0x80333780: nop

    // 0x80333784: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333788: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033378C: b           L_803337A4
    // 0x80333790: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
        goto L_803337A4;
    // 0x80333790: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
L_80333794:
    // 0x80333794: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333798: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033379C: nop

    // 0x803337A0: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
L_803337A4:
    // 0x803337A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803337A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803337AC: jal         0x8001B4AC
    // 0x803337B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803337B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803337B4: beq         $v0, $zero, L_80333804
    if (ctx->r2 == 0) {
        // 0x803337B8: nop
    
            goto L_80333804;
    }
    // 0x803337B8: nop

    // 0x803337BC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803337C0: nop

    // 0x803337C4: lh          $t4, 0xBA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBA);
    // 0x803337C8: nop

    // 0x803337CC: bne         $t4, $zero, L_803337EC
    if (ctx->r12 != 0) {
        // 0x803337D0: nop
    
            goto L_803337EC;
    }
    // 0x803337D0: nop

    // 0x803337D4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803337D8: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x803337DC: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803337E0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803337E4: b           L_80333804
    // 0x803337E8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80333804;
    // 0x803337E8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803337EC:
    // 0x803337EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803337F0: addiu       $t7, $zero, 0x1A
    ctx->r15 = ADD32(0, 0X1A);
    // 0x803337F4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803337F8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803337FC: nop

    // 0x80333800: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80333804:
    // 0x80333804: b           L_8033380C
    // 0x80333808: nop

        goto L_8033380C;
    // 0x80333808: nop

L_8033380C:
    // 0x8033380C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333810: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80333814: jr          $ra
    // 0x80333818: nop

    return;
    // 0x80333818: nop

;}
RECOMP_FUNC void func_endol_803327F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803327F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803327F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803327FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332800: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332804: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332808: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033280C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332810: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332814: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332818: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033281C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332820: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332824: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332828: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033282C: nop

    // 0x80332830: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332834: nop

    // 0x80332838: bne         $t1, $zero, L_803328F8
    if (ctx->r9 != 0) {
        // 0x8033283C: nop
    
            goto L_803328F8;
    }
    // 0x8033283C: nop

    // 0x80332840: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332844: nop

    // 0x80332848: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033284C: nop

    // 0x80332850: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332854: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332858: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033285C: nop

    // 0x80332860: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332864: nop

    // 0x80332868: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033286C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332870: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332874: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80332878: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033287C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332884: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x80332888: jal         0x8001C0EC
    // 0x8033288C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033288C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80332890: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332894: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332898: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x8033289C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328A0: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803328A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803328A8: jal         0x8001ABF4
    // 0x803328AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803328AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803328B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803328B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803328B8: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803328BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328C0: addiu       $a3, $a3, 0xE0
    ctx->r7 = ADD32(ctx->r7, 0XE0);
    // 0x803328C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803328C8: jal         0x8001ABF4
    // 0x803328CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803328CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803328D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803328D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803328D8: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
    // 0x803328DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803328E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803328E8: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x803328EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803328F0: jal         0x800175F0
    // 0x803328F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x803328F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_803328F8:
    // 0x803328F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803328FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80332900: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x80332904: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332908: nop

    // 0x8033290C: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x80332910: nop

    // 0x80332914: beq         $t4, $zero, L_80332928
    if (ctx->r12 == 0) {
        // 0x80332918: nop
    
            goto L_80332928;
    }
    // 0x80332918: nop

    // 0x8033291C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332920: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80332924: sh          $t2, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r10;
L_80332928:
    // 0x80332928: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033292C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332930: lh          $t7, 0xBA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBA);
    // 0x80332934: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80332938: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033293C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332940: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332944: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332948: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033294C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332950: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x80332954: jal         0x80015538
    // 0x80332958: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80332958: nop

    after_4:
    // 0x8033295C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332960: nop

    // 0x80332964: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80332968: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033296C: nop

    // 0x80332970: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332974: nop

    // 0x80332978: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
    // 0x8033297C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332980: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332984: jal         0x8001B4AC
    // 0x80332988: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80332988: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8033298C: beq         $v0, $zero, L_803329AC
    if (ctx->r2 == 0) {
        // 0x80332990: nop
    
            goto L_803329AC;
    }
    // 0x80332990: nop

    // 0x80332994: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332998: addiu       $t1, $zero, 0x17
    ctx->r9 = ADD32(0, 0X17);
    // 0x8033299C: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803329A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803329A4: nop

    // 0x803329A8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803329AC:
    // 0x803329AC: b           L_803329B4
    // 0x803329B0: nop

        goto L_803329B4;
    // 0x803329B0: nop

L_803329B4:
    // 0x803329B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803329B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803329BC: jr          $ra
    // 0x803329C0: nop

    return;
    // 0x803329C0: nop

;}
