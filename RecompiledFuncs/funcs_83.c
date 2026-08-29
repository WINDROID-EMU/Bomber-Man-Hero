#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80330CD8_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330CD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330CDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330CE0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330CE4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330CE8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330CEC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330CF0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80330CF4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330CF8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330CFC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330D00: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80330D04: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330D08: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330D0C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330D10: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330D14: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80330D18: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330D1C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330D20: addiu       $a1, $a1, 0x4534
    ctx->r5 = ADD32(ctx->r5, 0X4534);
    // 0x80330D24: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330D28: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80330D2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330D30: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330D34: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330D38: jal         0x80027464
    // 0x80330D3C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80330D3C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330D40: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80330D44: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330D4C: beq         $t1, $at, L_80330DD4
    if (ctx->r9 == ctx->r1) {
        // 0x80330D50: nop
    
            goto L_80330DD4;
    }
    // 0x80330D50: nop

    // 0x80330D54: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D58: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D5C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330D60: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330D64: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330D68: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330D6C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80330D70: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330D74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330D78: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330D7C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330D80: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330D84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D88: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330D8C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330D90: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330D94: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330D98: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330D9C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80330DA0: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x80330DA4: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x80330DA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DAC: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x80330DB0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DB4: nop

    // 0x80330DB8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80330DBC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330DC0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330DC4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330DC8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330DCC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330DD0: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_80330DD4:
    // 0x80330DD4: b           L_80330DDC
    // 0x80330DD8: nop

        goto L_80330DDC;
    // 0x80330DD8: nop

L_80330DDC:
    // 0x80330DDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330DE0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330DE4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330DE8: jr          $ra
    // 0x80330DEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330DEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80332A5C_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332A5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332A64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332A68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332A6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332A70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332A74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332A7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332A84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332A88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332A8C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332A90: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332A94: nop

    // 0x80332A98: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332A9C: nop

    // 0x80332AA0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80332AA4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AA8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332AAC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332AB0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332AB4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332AB8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332ABC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332AC0: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80332AC4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80332AC8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80332ACC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332AD0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332AD4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332AD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332ADC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332AE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332AEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332AF0: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80332AF4: nop

    // 0x80332AF8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80332AFC: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x80332B00: beq         $at, $zero, L_80332B74
    if (ctx->r1 == 0) {
        // 0x80332B04: nop
    
            goto L_80332B74;
    }
    // 0x80332B04: nop

    // 0x80332B08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332B0C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332B10: addu        $at, $at, $t9
    gpr jr_addend_80332B1C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332B14: lw          $t9, 0x34C8($at)
    ctx->r25 = ADD32(ctx->r1, 0X34C8);
    // 0x80332B18: nop

    // 0x80332B1C: jr          $t9
    // 0x80332B20: nop

    switch (jr_addend_80332B1C >> 2) {
        case 0: goto L_80332B24; break;
        case 1: goto L_80332B34; break;
        case 2: goto L_80332B44; break;
        case 3: goto L_80332B54; break;
        case 4: goto L_80332B64; break;
        default: switch_error(__func__, 0x80332B1C, 0x803334C8);
    }
    // 0x80332B20: nop

L_80332B24:
    // 0x80332B24: jal         0x80332308
    // 0x80332B28: nop

    func_80332308_unk_bin_35(rdram, ctx);
        goto after_0;
    // 0x80332B28: nop

    after_0:
    // 0x80332B2C: b           L_80332B7C
    // 0x80332B30: nop

        goto L_80332B7C;
    // 0x80332B30: nop

L_80332B34:
    // 0x80332B34: jal         0x803323F4
    // 0x80332B38: nop

    func_803323F4_unk_bin_35(rdram, ctx);
        goto after_1;
    // 0x80332B38: nop

    after_1:
    // 0x80332B3C: b           L_80332B7C
    // 0x80332B40: nop

        goto L_80332B7C;
    // 0x80332B40: nop

L_80332B44:
    // 0x80332B44: jal         0x80332574
    // 0x80332B48: nop

    func_80332574_unk_bin_35(rdram, ctx);
        goto after_2;
    // 0x80332B48: nop

    after_2:
    // 0x80332B4C: b           L_80332B7C
    // 0x80332B50: nop

        goto L_80332B7C;
    // 0x80332B50: nop

L_80332B54:
    // 0x80332B54: jal         0x80332860
    // 0x80332B58: nop

    func_80332860_unk_bin_35(rdram, ctx);
        goto after_3;
    // 0x80332B58: nop

    after_3:
    // 0x80332B5C: b           L_80332B7C
    // 0x80332B60: nop

        goto L_80332B7C;
    // 0x80332B60: nop

L_80332B64:
    // 0x80332B64: jal         0x803329E0
    // 0x80332B68: nop

    func_803329E0_unk_bin_35(rdram, ctx);
        goto after_4;
    // 0x80332B68: nop

    after_4:
    // 0x80332B6C: b           L_80332B7C
    // 0x80332B70: nop

        goto L_80332B7C;
    // 0x80332B70: nop

L_80332B74:
    // 0x80332B74: b           L_80332B7C
    // 0x80332B78: nop

        goto L_80332B7C;
    // 0x80332B78: nop

L_80332B7C:
    // 0x80332B7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332B80: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x80332B84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332B88: lwc1        $f16, 0xC($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80332B8C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332B90: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80332B94: lwc1        $f6, 0x28($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80332B98: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80332B9C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80332BA0: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80332BA4: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x80332BA8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332BAC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332BB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332BB4: lwc1        $f18, 0xC($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0XC);
    // 0x80332BB8: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80332BBC: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80332BC0: lwc1        $f10, 0x2C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80332BC4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80332BC8: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80332BCC: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80332BD0: swc1        $f6, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f6.u32l;
    // 0x80332BD4: b           L_80332BDC
    // 0x80332BD8: nop

        goto L_80332BDC;
    // 0x80332BD8: nop

L_80332BDC:
    // 0x80332BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332BE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332BE4: jr          $ra
    // 0x80332BE8: nop

    return;
    // 0x80332BE8: nop

;}
RECOMP_FUNC void func_8033050C_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033050C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330510: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330514: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80330518: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033051C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80330520: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80330524: nop

    // 0x80330528: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033052C: nop

    // 0x80330530: bne         $t7, $zero, L_80330580
    if (ctx->r15 != 0) {
        // 0x80330534: nop
    
            goto L_80330580;
    }
    // 0x80330534: nop

    // 0x80330538: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8033053C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80330540: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x80330544: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80330548: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x8033054C: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x80330550: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330554: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80330558: nop

    // 0x8033055C: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x80330560: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80330564: nop

    // 0x80330568: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8033056C: nop

    // 0x80330570: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x80330574: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80330578: nop

    // 0x8033057C: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
L_80330580:
    // 0x80330580: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330584: jal         0x80330118
    // 0x80330588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80330118_unk_bin_35(rdram, ctx);
        goto after_0;
    // 0x80330588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033058C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80330590: nop

    // 0x80330594: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80330598: nop

    // 0x8033059C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803305A0: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
    // 0x803305A4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x803305A8: nop

    // 0x803305AC: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x803305B0: nop

    // 0x803305B4: bne         $t9, $zero, L_803305D4
    if (ctx->r25 != 0) {
        // 0x803305B8: nop
    
            goto L_803305D4;
    }
    // 0x803305B8: nop

    // 0x803305BC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803305C0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x803305C4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803305C8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x803305CC: nop

    // 0x803305D0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803305D4:
    // 0x803305D4: b           L_803305DC
    // 0x803305D8: nop

        goto L_803305DC;
    // 0x803305D8: nop

L_803305DC:
    // 0x803305DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803305E0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803305E4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803305E8: jr          $ra
    // 0x803305EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803305EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330C64_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330C68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330C6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330C70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330C74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330C78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C8C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330C90: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80330C94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330C98: bne         $t8, $at, L_80330CB8
    if (ctx->r24 != ctx->r1) {
        // 0x80330C9C: nop
    
            goto L_80330CB8;
    }
    // 0x80330C9C: nop

    // 0x80330CA0: b           L_80330CA8
    // 0x80330CA4: nop

        goto L_80330CA8;
    // 0x80330CA4: nop

L_80330CA8:
    // 0x80330CA8: jal         0x80330A64
    // 0x80330CAC: nop

    func_80330A64_unk_bin_35(rdram, ctx);
        goto after_0;
    // 0x80330CAC: nop

    after_0:
    // 0x80330CB0: b           L_80330CC0
    // 0x80330CB4: nop

        goto L_80330CC0;
    // 0x80330CB4: nop

L_80330CB8:
    // 0x80330CB8: b           L_80330CC0
    // 0x80330CBC: nop

        goto L_80330CC0;
    // 0x80330CBC: nop

L_80330CC0:
    // 0x80330CC0: b           L_80330CC8
    // 0x80330CC4: nop

        goto L_80330CC8;
    // 0x80330CC4: nop

L_80330CC8:
    // 0x80330CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80330CD0: jr          $ra
    // 0x80330CD4: nop

    return;
    // 0x80330CD4: nop

;}
RECOMP_FUNC void func_803323F4_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803323F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803323F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803323FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332400: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332404: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332408: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033240C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332410: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332414: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332418: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033241C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332420: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332424: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332428: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033242C: nop

    // 0x80332430: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332434: nop

    // 0x80332438: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8033243C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332440: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332444: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332448: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033244C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332450: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332454: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332458: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033245C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80332460: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x80332464: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332468: nop

    // 0x8033246C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80332470: nop

    // 0x80332474: bne         $t7, $zero, L_80332500
    if (ctx->r15 != 0) {
        // 0x80332478: nop
    
            goto L_80332500;
    }
    // 0x80332478: nop

    // 0x8033247C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332480: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80332484: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x80332488: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033248C: nop

    // 0x80332490: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
    // 0x80332494: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332498: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033249C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803324A0: nop

    // 0x803324A4: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x803324A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803324AC: nop

    // 0x803324B0: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803324B4: nop

    // 0x803324B8: swc1        $f6, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f6.u32l;
    // 0x803324BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803324C0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803324C4: nop

    // 0x803324C8: swc1        $f8, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f8.u32l;
    // 0x803324CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803324D0: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x803324D4: addiu       $t4, $t4, 0x730C
    ctx->r12 = ADD32(ctx->r12, 0X730C);
    // 0x803324D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803324DC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803324E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803324E8: jal         0x8001C0EC
    // 0x803324EC: addiu       $a3, $zero, 0x49
    ctx->r7 = ADD32(0, 0X49);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803324EC: addiu       $a3, $zero, 0x49
    ctx->r7 = ADD32(0, 0X49);
    after_0:
    // 0x803324F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803324F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803324F8: jal         0x8001BBDC
    // 0x803324FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803324FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80332500:
    // 0x80332500: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332508: jal         0x80029C40
    // 0x8033250C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x8033250C: nop

    after_2:
    // 0x80332510: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332514: nop

    // 0x80332518: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8033251C: nop

    // 0x80332520: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x80332524: bne         $at, $zero, L_80332544
    if (ctx->r1 != 0) {
        // 0x80332528: nop
    
            goto L_80332544;
    }
    // 0x80332528: nop

    // 0x8033252C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332530: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80332534: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80332538: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033253C: b           L_8033255C
    // 0x80332540: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_8033255C;
    // 0x80332540: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80332544:
    // 0x80332544: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332548: nop

    // 0x8033254C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332550: nop

    // 0x80332554: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80332558: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
L_8033255C:
    // 0x8033255C: b           L_80332564
    // 0x80332560: nop

        goto L_80332564;
    // 0x80332560: nop

L_80332564:
    // 0x80332564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332568: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033256C: jr          $ra
    // 0x80332570: nop

    return;
    // 0x80332570: nop

;}
RECOMP_FUNC void func_80332574_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332574: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80332578: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033257C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332580: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332584: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332588: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033258C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332590: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332594: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332598: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033259C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803325A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803325A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803325AC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x803325B0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803325B4: nop

    // 0x803325B8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803325BC: nop

    // 0x803325C0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x803325C4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803325C8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803325CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803325D0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803325D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803325D8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803325DC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803325E0: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803325E4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803325E8: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x803325EC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803325F0: nop

    // 0x803325F4: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803325F8: nop

    // 0x803325FC: bne         $t7, $zero, L_80332670
    if (ctx->r15 != 0) {
        // 0x80332600: nop
    
            goto L_80332670;
    }
    // 0x80332600: nop

    // 0x80332604: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332608: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033260C: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x80332610: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332614: nop

    // 0x80332618: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
    // 0x8033261C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332620: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332624: nop

    // 0x80332628: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x8033262C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332630: nop

    // 0x80332634: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80332638: nop

    // 0x8033263C: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x80332640: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332644: nop

    // 0x80332648: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x8033264C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332650: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80332654: addiu       $t4, $t4, 0x730C
    ctx->r12 = ADD32(ctx->r12, 0X730C);
    // 0x80332658: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033265C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80332660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332664: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80332668: jal         0x8001C0EC
    // 0x8033266C: addiu       $a3, $zero, 0x49
    ctx->r7 = ADD32(0, 0X49);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033266C: addiu       $a3, $zero, 0x49
    ctx->r7 = ADD32(0, 0X49);
    after_0:
L_80332670:
    // 0x80332670: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332674: nop

    // 0x80332678: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8033267C: nop

    // 0x80332680: bne         $t6, $zero, L_803326FC
    if (ctx->r14 != 0) {
        // 0x80332684: nop
    
            goto L_803326FC;
    }
    // 0x80332684: nop

    // 0x80332688: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033268C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332690: jal         0x8001B62C
    // 0x80332694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80332694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332698: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8033269C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x803326A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803326A4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803326A8: nop

    // 0x803326AC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x803326B0: nop

    // 0x803326B4: bc1f        L_803326F4
    if (!c1cs) {
        // 0x803326B8: nop
    
            goto L_803326F4;
    }
    // 0x803326B8: nop

    // 0x803326BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326C4: jal         0x8001BBDC
    // 0x803326C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803326C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803326CC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803326D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803326D4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x803326D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326E4: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x803326E8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803326EC: jal         0x800175F0
    // 0x803326F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x803326F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_803326F4:
    // 0x803326F4: b           L_80332844
    // 0x803326F8: nop

        goto L_80332844;
    // 0x803326F8: nop

L_803326FC:
    // 0x803326FC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332700: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332704: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80332708: nop

    // 0x8033270C: bne         $t0, $at, L_80332780
    if (ctx->r8 != ctx->r1) {
        // 0x80332710: nop
    
            goto L_80332780;
    }
    // 0x80332710: nop

    // 0x80332714: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80332718: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033271C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332720: lwc1        $f10, 0x14($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X14);
    // 0x80332724: nop

    // 0x80332728: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8033272C: nop

    // 0x80332730: bc1f        L_80332758
    if (!c1cs) {
        // 0x80332734: nop
    
            goto L_80332758;
    }
    // 0x80332734: nop

    // 0x80332738: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8033273C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332740: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332744: lwc1        $f18, 0x14($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X14);
    // 0x80332748: nop

    // 0x8033274C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80332750: b           L_80332778
    // 0x80332754: swc1        $f6, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f6.u32l;
        goto L_80332778;
    // 0x80332754: swc1        $f6, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f6.u32l;
L_80332758:
    // 0x80332758: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033275C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332760: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80332764: nop

    // 0x80332768: swc1        $f8, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f8.u32l;
    // 0x8033276C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332770: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80332774: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
L_80332778:
    // 0x80332778: b           L_80332844
    // 0x8033277C: nop

        goto L_80332844;
    // 0x8033277C: nop

L_80332780:
    // 0x80332780: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332784: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332788: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8033278C: nop

    // 0x80332790: bne         $t7, $at, L_80332814
    if (ctx->r15 != ctx->r1) {
        // 0x80332794: nop
    
            goto L_80332814;
    }
    // 0x80332794: nop

    // 0x80332798: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8033279C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803327A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803327A4: lwc1        $f10, 0x14($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X14);
    // 0x803327A8: nop

    // 0x803327AC: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x803327B0: nop

    // 0x803327B4: bc1f        L_803327DC
    if (!c1cs) {
        // 0x803327B8: nop
    
            goto L_803327DC;
    }
    // 0x803327B8: nop

    // 0x803327BC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x803327C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803327C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803327C8: lwc1        $f18, 0x14($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X14);
    // 0x803327CC: nop

    // 0x803327D0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803327D4: b           L_8033280C
    // 0x803327D8: swc1        $f6, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f6.u32l;
        goto L_8033280C;
    // 0x803327D8: swc1        $f6, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f6.u32l;
L_803327DC:
    // 0x803327DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803327E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803327E4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x803327E8: nop

    // 0x803327EC: swc1        $f8, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f8.u32l;
    // 0x803327F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803327F8: jal         0x8001BBDC
    // 0x803327FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x803327FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332800: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332804: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80332808: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
L_8033280C:
    // 0x8033280C: b           L_80332844
    // 0x80332810: nop

        goto L_80332844;
    // 0x80332810: nop

L_80332814:
    // 0x80332814: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332818: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033281C: jal         0x8001B44C
    // 0x80332820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x80332820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80332824: beq         $v0, $zero, L_80332844
    if (ctx->r2 == 0) {
        // 0x80332828: nop
    
            goto L_80332844;
    }
    // 0x80332828: nop

    // 0x8033282C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332830: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80332834: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332838: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033283C: nop

    // 0x80332840: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80332844:
    // 0x80332844: b           L_8033284C
    // 0x80332848: nop

        goto L_8033284C;
    // 0x80332848: nop

L_8033284C:
    // 0x8033284C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332850: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80332854: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332858: jr          $ra
    // 0x8033285C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8033285C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80330118_unk_bin_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033011C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330120: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80330124: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80330128: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033012C: nop

    // 0x80330130: bne         $t6, $zero, L_80330180
    if (ctx->r14 != 0) {
        // 0x80330134: nop
    
            goto L_80330180;
    }
    // 0x80330134: nop

    // 0x80330138: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8033013C: nop

    // 0x80330140: lh          $t8, 0xAC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAC);
    // 0x80330144: nop

    // 0x80330148: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033014C: sh          $t9, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r25;
    // 0x80330150: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80330154: nop

    // 0x80330158: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x8033015C: nop

    // 0x80330160: slti        $at, $t1, 0xF
    ctx->r1 = SIGNED(ctx->r9) < 0XF ? 1 : 0;
    // 0x80330164: bne         $at, $zero, L_80330178
    if (ctx->r1 != 0) {
        // 0x80330168: nop
    
            goto L_80330178;
    }
    // 0x80330168: nop

    // 0x8033016C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80330170: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x80330174: sh          $t2, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r10;
L_80330178:
    // 0x80330178: b           L_803301BC
    // 0x8033017C: nop

        goto L_803301BC;
    // 0x8033017C: nop

L_80330180:
    // 0x80330180: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80330184: nop

    // 0x80330188: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x8033018C: nop

    // 0x80330190: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80330194: sh          $t6, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r14;
    // 0x80330198: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8033019C: nop

    // 0x803301A0: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x803301A4: nop

    // 0x803301A8: bgtz        $t9, L_803301BC
    if (SIGNED(ctx->r25) > 0) {
        // 0x803301AC: nop
    
            goto L_803301BC;
    }
    // 0x803301AC: nop

    // 0x803301B0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x803301B4: nop

    // 0x803301B8: sh          $zero, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = 0;
L_803301BC:
    // 0x803301BC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x803301C0: nop

    // 0x803301C4: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x803301C8: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803301CC: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x803301D0: jal         0x80015538
    // 0x803301D4: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803301D4: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x803301D8: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x803301DC: nop

    // 0x803301E0: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x803301E4: b           L_803301EC
    // 0x803301E8: nop

        goto L_803301EC;
    // 0x803301E8: nop

L_803301EC:
    // 0x803301EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803301F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803301F4: jr          $ra
    // 0x803301F8: nop

    return;
    // 0x803301F8: nop

;}
RECOMP_FUNC void func_80330090_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330090: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330094: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330098: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033009C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803300A0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803300A4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803300A8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803300AC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803300B0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803300B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803300B8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803300BC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803300C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803300C4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x803300C8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803300CC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803300D0: addiu       $a1, $a1, 0x457C
    ctx->r5 = ADD32(ctx->r5, 0X457C);
    // 0x803300D4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803300D8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803300DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803300E0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803300E4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803300E8: jal         0x80027464
    // 0x803300EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803300EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803300F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803300F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803300F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803300FC: beq         $t1, $at, L_80330118
    if (ctx->r9 == ctx->r1) {
        // 0x80330100: nop
    
            goto L_80330118;
    }
    // 0x80330100: nop

    // 0x80330104: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330108: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033010C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330110: jal         0x80019448
    // 0x80330114: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80330114: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_80330118:
    // 0x80330118: b           L_80330120
    // 0x8033011C: nop

        goto L_80330120;
    // 0x8033011C: nop

L_80330120:
    // 0x80330120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330124: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330128: jr          $ra
    // 0x8033012C: nop

    return;
    // 0x8033012C: nop

;}
RECOMP_FUNC void func_803301C4_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803301C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803301C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803301CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803301D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803301D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803301D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803301DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803301E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803301E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803301E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803301EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803301F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803301F4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803301F8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803301FC: nop

    // 0x80330200: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330204: nop

    // 0x80330208: bne         $t1, $zero, L_8033023C
    if (ctx->r9 != 0) {
        // 0x8033020C: nop
    
            goto L_8033023C;
    }
    // 0x8033020C: nop

    // 0x80330210: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330214: nop

    // 0x80330218: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033021C: nop

    // 0x80330220: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330224: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330228: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033022C: nop

    // 0x80330230: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330234: nop

    // 0x80330238: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_8033023C:
    // 0x8033023C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330240: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330244: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330248: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033024C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80330250: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80330254: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330258: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033025C: jal         0x800295C0
    // 0x80330260: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x80330260: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80330264: beq         $v0, $zero, L_8033027C
    if (ctx->r2 == 0) {
        // 0x80330268: nop
    
            goto L_8033027C;
    }
    // 0x80330268: nop

    // 0x8033026C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330270: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330274: b           L_8033028C
    // 0x80330278: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
        goto L_8033028C;
    // 0x80330278: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
L_8033027C:
    // 0x8033027C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330280: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330284: nop

    // 0x80330288: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_8033028C:
    // 0x8033028C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80330290: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80330294: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330298: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033029C: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803302A0: nop

    // 0x803302A4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803302A8: nop

    // 0x803302AC: bc1f        L_803302CC
    if (!c1cs) {
        // 0x803302B0: nop
    
            goto L_803302CC;
    }
    // 0x803302B0: nop

    // 0x803302B4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803302B8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803302BC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803302C0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803302C4: nop

    // 0x803302C8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803302CC:
    // 0x803302CC: b           L_803302D4
    // 0x803302D0: nop

        goto L_803302D4;
    // 0x803302D0: nop

L_803302D4:
    // 0x803302D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803302D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803302DC: jr          $ra
    // 0x803302E0: nop

    return;
    // 0x803302E0: nop

;}
RECOMP_FUNC void func_80330800_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330800: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330808: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033080C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330810: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330814: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033081C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330828: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033082C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330830: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330834: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330838: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033083C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330840: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80330844: nop

    // 0x80330848: beq         $s0, $at, L_80330870
    if (ctx->r16 == ctx->r1) {
        // 0x8033084C: nop
    
            goto L_80330870;
    }
    // 0x8033084C: nop

    // 0x80330850: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330854: beq         $s0, $at, L_80330880
    if (ctx->r16 == ctx->r1) {
        // 0x80330858: nop
    
            goto L_80330880;
    }
    // 0x80330858: nop

    // 0x8033085C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80330860: beq         $s0, $at, L_80330890
    if (ctx->r16 == ctx->r1) {
        // 0x80330864: nop
    
            goto L_80330890;
    }
    // 0x80330864: nop

    // 0x80330868: b           L_803308A0
    // 0x8033086C: nop

        goto L_803308A0;
    // 0x8033086C: nop

L_80330870:
    // 0x80330870: jal         0x803301C4
    // 0x80330874: nop

    func_803301C4_unk_bin_36(rdram, ctx);
        goto after_0;
    // 0x80330874: nop

    after_0:
    // 0x80330878: b           L_803308A8
    // 0x8033087C: nop

        goto L_803308A8;
    // 0x8033087C: nop

L_80330880:
    // 0x80330880: jal         0x803302E4
    // 0x80330884: nop

    func_803302E4_unk_bin_36(rdram, ctx);
        goto after_1;
    // 0x80330884: nop

    after_1:
    // 0x80330888: b           L_803308A8
    // 0x8033088C: nop

        goto L_803308A8;
    // 0x8033088C: nop

L_80330890:
    // 0x80330890: jal         0x8033069C
    // 0x80330894: nop

    func_8033069C_unk_bin_36(rdram, ctx);
        goto after_2;
    // 0x80330894: nop

    after_2:
    // 0x80330898: b           L_803308A8
    // 0x8033089C: nop

        goto L_803308A8;
    // 0x8033089C: nop

L_803308A0:
    // 0x803308A0: b           L_803308A8
    // 0x803308A4: nop

        goto L_803308A8;
    // 0x803308A4: nop

L_803308A8:
    // 0x803308A8: b           L_803308B0
    // 0x803308AC: nop

        goto L_803308B0;
    // 0x803308AC: nop

L_803308B0:
    // 0x803308B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803308B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803308B8: jr          $ra
    // 0x803308BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803308BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803308C0_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803308C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803308C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803308C8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803308CC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803308D0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803308D4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803308D8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803308DC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803308E0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803308E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803308E8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803308EC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803308F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803308F4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x803308F8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803308FC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330900: addiu       $a1, $a1, 0x4588
    ctx->r5 = ADD32(ctx->r5, 0X4588);
    // 0x80330904: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330908: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033090C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330910: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330914: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330918: jal         0x80027464
    // 0x8033091C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033091C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330920: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80330924: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033092C: beq         $t1, $at, L_80330948
    if (ctx->r9 == ctx->r1) {
        // 0x80330930: nop
    
            goto L_80330948;
    }
    // 0x80330930: nop

    // 0x80330934: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330938: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033093C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330940: jal         0x80019448
    // 0x80330944: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80330944: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_80330948:
    // 0x80330948: b           L_80330950
    // 0x8033094C: nop

        goto L_80330950;
    // 0x8033094C: nop

L_80330950:
    // 0x80330950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330954: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330958: jr          $ra
    // 0x8033095C: nop

    return;
    // 0x8033095C: nop

;}
RECOMP_FUNC void func_80330130_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330130: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330138: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033013C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330140: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330144: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330148: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033014C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330150: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330154: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330158: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033015C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330160: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330164: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033016C: lh          $a0, 0xEA($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XEA);
    // 0x80330170: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80330174: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x80330178: jal         0x800175F0
    // 0x8033017C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x8033017C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x80330180: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330184: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80330188: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8033018C: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80330190: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80330194: jal         0x8007EDF4
    // 0x80330198: nop

    func_8007EDF4(rdram, ctx);
        goto after_1;
    // 0x80330198: nop

    after_1:
    // 0x8033019C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803301A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803301A4: jal         0x8002B114
    // 0x803301A8: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x803301A8: nop

    after_2:
    // 0x803301AC: b           L_803301B4
    // 0x803301B0: nop

        goto L_803301B4;
    // 0x803301B0: nop

L_803301B4:
    // 0x803301B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803301B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803301BC: jr          $ra
    // 0x803301C0: nop

    return;
    // 0x803301C0: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330008: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8033000C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x80330010: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x80330014: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330018: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033001C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330020: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330024: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330028: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033002C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330030: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330034: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330038: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033003C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330040: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330044: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330048: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8033004C: jal         0x80067748
    // 0x80330050: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x80330050: nop

    after_0:
    // 0x80330054: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330058: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x8033005C: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80330060: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80330064: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330068: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8033006C: lbu         $v0, 0x7743($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7743);
    // 0x80330070: b           L_80330080
    // 0x80330074: nop

        goto L_80330080;
    // 0x80330074: nop

    // 0x80330078: b           L_80330080
    // 0x8033007C: nop

        goto L_80330080;
    // 0x8033007C: nop

L_80330080:
    // 0x80330080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330084: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330088: jr          $ra
    // 0x8033008C: nop

    return;
    // 0x8033008C: nop

;}
RECOMP_FUNC void func_803302E4_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803302E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803302EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803302F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803302F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803302F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803302FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330300: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330304: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330308: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033030C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330310: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330314: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330318: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033031C: nop

    // 0x80330320: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330324: nop

    // 0x80330328: bne         $t1, $zero, L_80330390
    if (ctx->r9 != 0) {
        // 0x8033032C: nop
    
            goto L_80330390;
    }
    // 0x8033032C: nop

    // 0x80330330: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330334: nop

    // 0x80330338: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033033C: nop

    // 0x80330340: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330344: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330348: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033034C: nop

    // 0x80330350: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330354: nop

    // 0x80330358: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033035C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330364: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330368: jal         0x80029EF8
    // 0x8033036C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x8033036C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x80330370: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80330374: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330378: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033037C: nop

    // 0x80330380: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80330384: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330388: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x8033038C: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_80330390:
    // 0x80330390: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330394: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330398: jal         0x80028FA0
    // 0x8033039C: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x8033039C: nop

    after_1:
    // 0x803303A0: beq         $v0, $zero, L_803303B8
    if (ctx->r2 == 0) {
        // 0x803303A4: nop
    
            goto L_803303B8;
    }
    // 0x803303A4: nop

    // 0x803303A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803303AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803303B0: jal         0x80029B60
    // 0x803303B4: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x803303B4: nop

    after_2:
L_803303B8:
    // 0x803303B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803303BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803303C0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x803303C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803303C8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x803303CC: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803303D0: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803303D4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803303D8: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x803303DC: nop

    // 0x803303E0: bc1f        L_80330440
    if (!c1cs) {
        // 0x803303E4: nop
    
            goto L_80330440;
    }
    // 0x803303E4: nop

    // 0x803303E8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803303EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803303F0: lh          $a0, 0xEA($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XEA);
    // 0x803303F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x803303F8: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x803303FC: jal         0x800175F0
    // 0x80330400: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x80330400: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_3:
    // 0x80330404: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330408: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8033040C: lwc1        $f12, 0x0($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80330410: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330414: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x80330418: jal         0x8007EDF4
    // 0x8033041C: nop

    func_8007EDF4(rdram, ctx);
        goto after_4;
    // 0x8033041C: nop

    after_4:
    // 0x80330420: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330424: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330428: jal         0x8002B114
    // 0x8033042C: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x8033042C: nop

    after_5:
    // 0x80330430: b           L_8033068C
    // 0x80330434: nop

        goto L_8033068C;
    // 0x80330434: nop

    // 0x80330438: b           L_80330464
    // 0x8033043C: nop

        goto L_80330464;
    // 0x8033043C: nop

L_80330440:
    // 0x80330440: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330444: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330448: jal         0x8002A8B4
    // 0x8033044C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x8033044C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80330450: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330454: nop

    // 0x80330458: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x8033045C: nop

    // 0x80330460: swc1        $f18, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f18.u32l;
L_80330464:
    // 0x80330464: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330468: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8033046C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330470: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80330474: nop

    // 0x80330478: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x8033047C: nop

    // 0x80330480: bc1f        L_8033049C
    if (!c1cs) {
        // 0x80330484: nop
    
            goto L_8033049C;
    }
    // 0x80330484: nop

    // 0x80330488: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8033048C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330490: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330494: b           L_803304B8
    // 0x80330498: swc1        $f10, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f10.u32l;
        goto L_803304B8;
    // 0x80330498: swc1        $f10, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f10.u32l;
L_8033049C:
    // 0x8033049C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803304A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803304A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803304A8: lwc1        $f6, 0x44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X44);
    // 0x803304AC: nop

    // 0x803304B0: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x803304B4: swc1        $f18, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f18.u32l;
L_803304B8:
    // 0x803304B8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803304BC: nop

    // 0x803304C0: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x803304C4: nop

    // 0x803304C8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x803304CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304D4: jal         0x80029C40
    // 0x803304D8: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x803304D8: nop

    after_7:
    // 0x803304DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803304E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803304E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803304F0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x803304F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803304F8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803304FC: jal         0x80029018
    // 0x80330500: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x80330500: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x80330504: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330508: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033050C: nop

    // 0x80330510: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
    // 0x80330514: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033051C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330520: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330524: jal         0x8002A0D0
    // 0x80330528: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_9;
    // 0x80330528: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_9:
    // 0x8033052C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330530: bne         $v0, $at, L_803305FC
    if (ctx->r2 != ctx->r1) {
        // 0x80330534: nop
    
            goto L_803305FC;
    }
    // 0x80330534: nop

    // 0x80330538: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033053C: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80330540: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80330544: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80330548: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033054C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330550: lw          $t4, 0x7740($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7740);
    // 0x80330554: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x80330558: bne         $t4, $at, L_80330598
    if (ctx->r12 != ctx->r1) {
        // 0x8033055C: nop
    
            goto L_80330598;
    }
    // 0x8033055C: nop

    // 0x80330560: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330564: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330568: nop

    // 0x8033056C: swc1        $f16, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f16.u32l;
    // 0x80330570: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330574: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80330578: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x8033057C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330580: nop

    // 0x80330584: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80330588: b           L_8033068C
    // 0x8033058C: nop

        goto L_8033068C;
    // 0x8033058C: nop

    // 0x80330590: b           L_803305FC
    // 0x80330594: nop

        goto L_803305FC;
    // 0x80330594: nop

L_80330598:
    // 0x80330598: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033059C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803305A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803305A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x803305AC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x803305B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803305B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803305B8: jal         0x800295C0
    // 0x803305BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_10;
    // 0x803305BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x803305C0: beq         $v0, $zero, L_803305D8
    if (ctx->r2 == 0) {
        // 0x803305C4: nop
    
            goto L_803305D8;
    }
    // 0x803305C4: nop

    // 0x803305C8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803305CC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803305D0: b           L_803305E8
    // 0x803305D4: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
        goto L_803305E8;
    // 0x803305D4: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
L_803305D8:
    // 0x803305D8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803305DC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803305E0: nop

    // 0x803305E4: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_803305E8:
    // 0x803305E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803305F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803305F4: jal         0x80029EF8
    // 0x803305F8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_11;
    // 0x803305F8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_11:
L_803305FC:
    // 0x803305FC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330600: nop

    // 0x80330604: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80330608: nop

    // 0x8033060C: bne         $t1, $zero, L_8033066C
    if (ctx->r9 != 0) {
        // 0x80330610: nop
    
            goto L_8033066C;
    }
    // 0x80330610: nop

    // 0x80330614: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033061C: lh          $a0, 0xEA($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XEA);
    // 0x80330620: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80330624: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x80330628: jal         0x800175F0
    // 0x8033062C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_800175F0(rdram, ctx);
        goto after_12;
    // 0x8033062C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_12:
    // 0x80330630: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330634: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80330638: lwc1        $f12, 0x0($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033063C: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330640: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x80330644: jal         0x8007EDF4
    // 0x80330648: nop

    func_8007EDF4(rdram, ctx);
        goto after_13;
    // 0x80330648: nop

    after_13:
    // 0x8033064C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330650: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330654: jal         0x8002B114
    // 0x80330658: nop

    func_8002B114(rdram, ctx);
        goto after_14;
    // 0x80330658: nop

    after_14:
    // 0x8033065C: b           L_8033068C
    // 0x80330660: nop

        goto L_8033068C;
    // 0x80330660: nop

    // 0x80330664: b           L_80330684
    // 0x80330668: nop

        goto L_80330684;
    // 0x80330668: nop

L_8033066C:
    // 0x8033066C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330670: nop

    // 0x80330674: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80330678: nop

    // 0x8033067C: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80330680: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
L_80330684:
    // 0x80330684: b           L_8033068C
    // 0x80330688: nop

        goto L_8033068C;
    // 0x80330688: nop

L_8033068C:
    // 0x8033068C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330690: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330694: jr          $ra
    // 0x80330698: nop

    return;
    // 0x80330698: nop

;}
RECOMP_FUNC void func_80330F74_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330F78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330F7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80330F80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330F84: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330F88: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330F8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330F90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330F98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330FA0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330FA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330FA8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330FAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330FB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330FB4: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80330FB8: nop

    // 0x80330FBC: beq         $s0, $at, L_80330FE4
    if (ctx->r16 == ctx->r1) {
        // 0x80330FC0: nop
    
            goto L_80330FE4;
    }
    // 0x80330FC0: nop

    // 0x80330FC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330FC8: beq         $s0, $at, L_80330FF4
    if (ctx->r16 == ctx->r1) {
        // 0x80330FCC: nop
    
            goto L_80330FF4;
    }
    // 0x80330FCC: nop

    // 0x80330FD0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80330FD4: beq         $s0, $at, L_80331004
    if (ctx->r16 == ctx->r1) {
        // 0x80330FD8: nop
    
            goto L_80331004;
    }
    // 0x80330FD8: nop

    // 0x80330FDC: b           L_80331014
    // 0x80330FE0: nop

        goto L_80331014;
    // 0x80330FE0: nop

L_80330FE4:
    // 0x80330FE4: jal         0x803309D0
    // 0x80330FE8: nop

    func_803309D0_unk_bin_36(rdram, ctx);
        goto after_0;
    // 0x80330FE8: nop

    after_0:
    // 0x80330FEC: b           L_8033101C
    // 0x80330FF0: nop

        goto L_8033101C;
    // 0x80330FF0: nop

L_80330FF4:
    // 0x80330FF4: jal         0x80330AF0
    // 0x80330FF8: nop

    func_80330AF0_unk_bin_36(rdram, ctx);
        goto after_1;
    // 0x80330FF8: nop

    after_1:
    // 0x80330FFC: b           L_8033101C
    // 0x80331000: nop

        goto L_8033101C;
    // 0x80331000: nop

L_80331004:
    // 0x80331004: jal         0x80330E10
    // 0x80331008: nop

    func_80330E10_unk_bin_36(rdram, ctx);
        goto after_2;
    // 0x80331008: nop

    after_2:
    // 0x8033100C: b           L_8033101C
    // 0x80331010: nop

        goto L_8033101C;
    // 0x80331010: nop

L_80331014:
    // 0x80331014: b           L_8033101C
    // 0x80331018: nop

        goto L_8033101C;
    // 0x80331018: nop

L_8033101C:
    // 0x8033101C: b           L_80331024
    // 0x80331020: nop

        goto L_80331024;
    // 0x80331020: nop

L_80331024:
    // 0x80331024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331028: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033102C: jr          $ra
    // 0x80331030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80331030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80331124_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331124: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033112C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331130: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331134: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331138: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033113C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331140: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331144: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331148: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033114C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331150: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331154: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331158: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033115C: nop

    // 0x80331160: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331164: nop

    // 0x80331168: bne         $t1, $zero, L_80331294
    if (ctx->r9 != 0) {
        // 0x8033116C: nop
    
            goto L_80331294;
    }
    // 0x8033116C: nop

    // 0x80331170: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331174: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331178: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033117C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331180: nop

    // 0x80331184: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x80331188: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033118C: nop

    // 0x80331190: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x80331194: nop

    // 0x80331198: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033119C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803311A0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803311A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803311AC: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
    // 0x803311B0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x803311B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803311B8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x803311BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803311C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803311C4: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803311C8: nop

    // 0x803311CC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803311D0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x803311D4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x803311D8: sh          $t0, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r8;
    // 0x803311DC: nop

    // 0x803311E0: jal         0x80014E80
    // 0x803311E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x803311E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x803311E8: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x803311EC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803311F0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803311F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803311F8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803311FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331200: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331204: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331208: addiu       $t3, $t2, 0x5A
    ctx->r11 = ADD32(ctx->r10, 0X5A);
    // 0x8033120C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80331210: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331214: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331218: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
    // 0x8033121C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331220: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331224: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331228: nop

    // 0x8033122C: swc1        $f16, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f16.u32l;
    // 0x80331230: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80331234: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331238: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033123C: nop

    // 0x80331240: swc1        $f18, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f18.u32l;
    // 0x80331244: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80331248: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033124C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331250: nop

    // 0x80331254: swc1        $f4, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f4.u32l;
    // 0x80331258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033125C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331260: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331264: addiu       $a3, $a3, -0x745C
    ctx->r7 = ADD32(ctx->r7, -0X745C);
    // 0x80331268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033126C: jal         0x8001ABF4
    // 0x80331270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331278: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033127C: addiu       $a3, $a3, -0x745C
    ctx->r7 = ADD32(ctx->r7, -0X745C);
    // 0x80331280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331284: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80331288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033128C: jal         0x8001ABF4
    // 0x80331290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80331294:
    // 0x80331294: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331298: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033129C: jal         0x80029C40
    // 0x803312A0: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x803312A0: nop

    after_3:
    // 0x803312A4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803312A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803312AC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803312B0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803312B4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x803312B8: jal         0x80015538
    // 0x803312BC: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803312BC: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x803312C0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803312C4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803312C8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803312CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803312D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803312D4: nop

    // 0x803312D8: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803312DC: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x803312E0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803312E4: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x803312E8: nop

    // 0x803312EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803312F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803312F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312FC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80331300: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80331304: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331308: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033130C: jal         0x800294F0
    // 0x80331310: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800294F0(rdram, ctx);
        goto after_5;
    // 0x80331310: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80331314: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331318: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033131C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80331320: lwc1        $f7, 0x1540($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1540);
    // 0x80331324: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80331328: lwc1        $f6, 0x1544($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1544);
    // 0x8033132C: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x80331330: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80331334: jal         0x80034970
    // 0x80331338: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x80331338: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_6:
    // 0x8033133C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331340: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80331344: lh          $t7, 0xB6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB6);
    // 0x80331348: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033134C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80331350: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80331354: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80331358: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8033135C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80331360: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80331364: swc1        $f10, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f10.u32l;
    // 0x80331368: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033136C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331370: jal         0x80029D04
    // 0x80331374: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x80331374: nop

    after_7:
    // 0x80331378: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033137C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331380: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331384: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331388: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033138C: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80331390: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331394: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80331398: jal         0x80029018
    // 0x8033139C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x8033139C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x803313A0: beq         $v0, $zero, L_803313B4
    if (ctx->r2 == 0) {
        // 0x803313A4: nop
    
            goto L_803313B4;
    }
    // 0x803313A4: nop

    // 0x803313A8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803313AC: nop

    // 0x803313B0: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
L_803313B4:
    // 0x803313B4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803313B8: nop

    // 0x803313BC: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x803313C0: nop

    // 0x803313C4: bne         $t0, $zero, L_80331458
    if (ctx->r8 != 0) {
        // 0x803313C8: nop
    
            goto L_80331458;
    }
    // 0x803313C8: nop

    // 0x803313CC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803313D0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803313D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803313D8: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803313DC: nop

    // 0x803313E0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x803313E4: nop

    // 0x803313E8: bc1f        L_80331404
    if (!c1cs) {
        // 0x803313EC: nop
    
            goto L_80331404;
    }
    // 0x803313EC: nop

    // 0x803313F0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803313F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803313F8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803313FC: b           L_80331418
    // 0x80331400: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
        goto L_80331418;
    // 0x80331400: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
L_80331404:
    // 0x80331404: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80331408: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033140C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331410: nop

    // 0x80331414: swc1        $f10, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f10.u32l;
L_80331418:
    // 0x80331418: jal         0x80014E80
    // 0x8033141C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x8033141C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x80331420: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331424: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x80331428: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033142C: sh          $t4, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r12;
    // 0x80331430: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331434: nop

    // 0x80331438: lh          $t5, 0xA8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA8);
    // 0x8033143C: nop

    // 0x80331440: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80331444: subu        $t9, $t9, $t5
    ctx->r25 = SUB32(ctx->r25, ctx->r13);
    // 0x80331448: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8033144C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80331450: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331454: sh          $t9, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r25;
L_80331458:
    // 0x80331458: b           L_80331460
    // 0x8033145C: nop

        goto L_80331460;
    // 0x8033145C: nop

L_80331460:
    // 0x80331460: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331464: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331468: jr          $ra
    // 0x8033146C: nop

    return;
    // 0x8033146C: nop

;}
RECOMP_FUNC void func_8033069C_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033069C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803306A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803306A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803306A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803306AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803306B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803306B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803306B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803306BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803306C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803306C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803306C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803306CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803306D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803306D4: nop

    // 0x803306D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803306DC: nop

    // 0x803306E0: bne         $t1, $zero, L_80330720
    if (ctx->r9 != 0) {
        // 0x803306E4: nop
    
            goto L_80330720;
    }
    // 0x803306E4: nop

    // 0x803306E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803306EC: nop

    // 0x803306F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803306F4: nop

    // 0x803306F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803306FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330700: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330704: nop

    // 0x80330708: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033070C: nop

    // 0x80330710: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330714: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330718: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x8033071C: sh          $t7, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r15;
L_80330720:
    // 0x80330720: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330724: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330728: jal         0x80029C40
    // 0x8033072C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x8033072C: nop

    after_0:
    // 0x80330730: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330734: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330738: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033073C: lwc1        $f4, 0x28($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80330740: nop

    // 0x80330744: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330748: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x8033074C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330750: nop

    // 0x80330754: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330758: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033075C: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80330760: jal         0x80067748
    // 0x80330764: nop

    func_80067748(rdram, ctx);
        goto after_1;
    // 0x80330764: nop

    after_1:
    // 0x80330768: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033076C: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x80330770: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330774: andi        $t3, $t1, 0x1
    ctx->r11 = ctx->r9 & 0X1;
    // 0x80330778: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033077C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80330780: lw          $t2, 0x7740($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7740);
    // 0x80330784: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x80330788: bne         $t2, $at, L_803307A0
    if (ctx->r10 != ctx->r1) {
        // 0x8033078C: nop
    
            goto L_803307A0;
    }
    // 0x8033078C: nop

    // 0x80330790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330798: jal         0x8001BB04
    // 0x8033079C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_2;
    // 0x8033079C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_803307A0:
    // 0x803307A0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803307A4: nop

    // 0x803307A8: lh          $t5, 0xB0($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XB0);
    // 0x803307AC: nop

    // 0x803307B0: bne         $t5, $zero, L_803307D0
    if (ctx->r13 != 0) {
        // 0x803307B4: nop
    
            goto L_803307D0;
    }
    // 0x803307B4: nop

    // 0x803307B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307C0: jal         0x8002B114
    // 0x803307C4: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x803307C4: nop

    after_3:
    // 0x803307C8: b           L_803307E8
    // 0x803307CC: nop

        goto L_803307E8;
    // 0x803307CC: nop

L_803307D0:
    // 0x803307D0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803307D4: nop

    // 0x803307D8: lh          $t8, 0xB0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB0);
    // 0x803307DC: nop

    // 0x803307E0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803307E4: sh          $t9, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r25;
L_803307E8:
    // 0x803307E8: b           L_803307F0
    // 0x803307EC: nop

        goto L_803307F0;
    // 0x803307EC: nop

L_803307F0:
    // 0x803307F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803307F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803307F8: jr          $ra
    // 0x803307FC: nop

    return;
    // 0x803307FC: nop

;}
RECOMP_FUNC void func_80330AF0_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330AF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80330AF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330AF8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330AFC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330B00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330B04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330B08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330B10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330B24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330B28: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80330B2C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B30: nop

    // 0x80330B34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330B38: nop

    // 0x80330B3C: bne         $t1, $zero, L_80330B98
    if (ctx->r9 != 0) {
        // 0x80330B40: nop
    
            goto L_80330B98;
    }
    // 0x80330B40: nop

    // 0x80330B44: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B48: nop

    // 0x80330B4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330B50: nop

    // 0x80330B54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330B58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330B5C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B60: nop

    // 0x80330B64: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330B68: nop

    // 0x80330B6C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330B70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B78: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330B7C: jal         0x80029EF8
    // 0x80330B80: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80330B80: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x80330B84: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80330B88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330B8C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B90: nop

    // 0x80330B94: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
L_80330B98:
    // 0x80330B98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BA0: jal         0x80028FA0
    // 0x80330BA4: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80330BA4: nop

    after_1:
    // 0x80330BA8: beq         $v0, $zero, L_80330BC0
    if (ctx->r2 == 0) {
        // 0x80330BAC: nop
    
            goto L_80330BC0;
    }
    // 0x80330BAC: nop

    // 0x80330BB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BB8: jal         0x80029B60
    // 0x80330BBC: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x80330BBC: nop

    after_2:
L_80330BC0:
    // 0x80330BC0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80330BC4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80330BC8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BCC: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80330BD0: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80330BD4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80330BD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330BDC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80330BE0: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80330BE4: nop

    // 0x80330BE8: bc1f        L_80330C38
    if (!c1cs) {
        // 0x80330BEC: nop
    
            goto L_80330C38;
    }
    // 0x80330BEC: nop

    // 0x80330BF0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330BF4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BF8: nop

    // 0x80330BFC: swc1        $f18, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f18.u32l;
    // 0x80330C00: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C04: nop

    // 0x80330C08: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80330C0C: nop

    // 0x80330C10: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x80330C14: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C18: nop

    // 0x80330C1C: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x80330C20: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330C24: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C28: nop

    // 0x80330C2C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80330C30: b           L_80330DFC
    // 0x80330C34: nop

        goto L_80330DFC;
    // 0x80330C34: nop

L_80330C38:
    // 0x80330C38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C40: jal         0x8002A8B4
    // 0x80330C44: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80330C44: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x80330C48: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C4C: nop

    // 0x80330C50: lwc1        $f6, 0x3C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80330C54: nop

    // 0x80330C58: swc1        $f6, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f6.u32l;
    // 0x80330C5C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C60: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80330C64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330C68: lwc1        $f8, 0x44($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80330C6C: nop

    // 0x80330C70: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80330C74: nop

    // 0x80330C78: bc1f        L_80330C94
    if (!c1cs) {
        // 0x80330C7C: nop
    
            goto L_80330C94;
    }
    // 0x80330C7C: nop

    // 0x80330C80: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80330C84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330C88: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C8C: b           L_80330CB0
    // 0x80330C90: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
        goto L_80330CB0;
    // 0x80330C90: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
L_80330C94:
    // 0x80330C94: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330C9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330CA0: lwc1        $f18, 0x44($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80330CA4: nop

    // 0x80330CA8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330CAC: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
L_80330CB0:
    // 0x80330CB0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330CB4: nop

    // 0x80330CB8: lwc1        $f8, 0x28($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80330CBC: nop

    // 0x80330CC0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80330CC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CCC: jal         0x80029C40
    // 0x80330CD0: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80330CD0: nop

    after_4:
    // 0x80330CD4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330CD8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330CDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330CE8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80330CEC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330CF0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330CF4: jal         0x80029018
    // 0x80330CF8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80330CF8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80330CFC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330D00: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330D04: nop

    // 0x80330D08: swc1        $f18, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f18.u32l;
    // 0x80330D0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D14: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330D18: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330D1C: jal         0x8002A0D0
    // 0x80330D20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_6;
    // 0x80330D20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_6:
    // 0x80330D24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330D28: bne         $v0, $at, L_80330DF4
    if (ctx->r2 != ctx->r1) {
        // 0x80330D2C: nop
    
            goto L_80330DF4;
    }
    // 0x80330D2C: nop

    // 0x80330D30: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330D34: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80330D38: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80330D3C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80330D40: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80330D44: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330D48: lw          $t4, 0x7740($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7740);
    // 0x80330D4C: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x80330D50: bne         $t4, $at, L_80330D90
    if (ctx->r12 != ctx->r1) {
        // 0x80330D54: nop
    
            goto L_80330D90;
    }
    // 0x80330D54: nop

    // 0x80330D58: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330D5C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80330D60: nop

    // 0x80330D64: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x80330D68: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330D6C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80330D70: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80330D74: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80330D78: nop

    // 0x80330D7C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80330D80: b           L_80330DFC
    // 0x80330D84: nop

        goto L_80330DFC;
    // 0x80330D84: nop

    // 0x80330D88: b           L_80330DF4
    // 0x80330D8C: nop

        goto L_80330DF4;
    // 0x80330D8C: nop

L_80330D90:
    // 0x80330D90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330D94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330D98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DA0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80330DA4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80330DA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330DAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330DB0: jal         0x800295C0
    // 0x80330DB4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x80330DB4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x80330DB8: beq         $v0, $zero, L_80330DD0
    if (ctx->r2 == 0) {
        // 0x80330DBC: nop
    
            goto L_80330DD0;
    }
    // 0x80330DBC: nop

    // 0x80330DC0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80330DC4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330DC8: b           L_80330DE0
    // 0x80330DCC: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
        goto L_80330DE0;
    // 0x80330DCC: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_80330DD0:
    // 0x80330DD0: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80330DD4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330DD8: nop

    // 0x80330DDC: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
L_80330DE0:
    // 0x80330DE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DE8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330DEC: jal         0x80029EF8
    // 0x80330DF0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_8;
    // 0x80330DF0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_8:
L_80330DF4:
    // 0x80330DF4: b           L_80330DFC
    // 0x80330DF8: nop

        goto L_80330DFC;
    // 0x80330DF8: nop

L_80330DFC:
    // 0x80330DFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330E00: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330E04: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330E08: jr          $ra
    // 0x80330E0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80330E0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80330E10_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330E18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330E1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330E20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330E24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330E28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330E2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330E30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330E34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330E38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330E3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330E40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330E44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330E48: nop

    // 0x80330E4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330E50: nop

    // 0x80330E54: bne         $t1, $zero, L_80330E94
    if (ctx->r9 != 0) {
        // 0x80330E58: nop
    
            goto L_80330E94;
    }
    // 0x80330E58: nop

    // 0x80330E5C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330E60: nop

    // 0x80330E64: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330E68: nop

    // 0x80330E6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330E70: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330E74: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330E78: nop

    // 0x80330E7C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330E80: nop

    // 0x80330E84: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330E88: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330E8C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80330E90: sh          $t7, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r15;
L_80330E94:
    // 0x80330E94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E9C: jal         0x80029C40
    // 0x80330EA0: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80330EA0: nop

    after_0:
    // 0x80330EA4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330EA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330EAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330EB0: lwc1        $f4, 0x28($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80330EB4: nop

    // 0x80330EB8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330EBC: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x80330EC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330EC4: nop

    // 0x80330EC8: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330ECC: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80330ED0: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80330ED4: jal         0x80067748
    // 0x80330ED8: nop

    func_80067748(rdram, ctx);
        goto after_1;
    // 0x80330ED8: nop

    after_1:
    // 0x80330EDC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80330EE0: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x80330EE4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330EE8: andi        $t3, $t1, 0x1
    ctx->r11 = ctx->r9 & 0X1;
    // 0x80330EEC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330EF0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80330EF4: lw          $t2, 0x7740($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7740);
    // 0x80330EF8: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x80330EFC: bne         $t2, $at, L_80330F14
    if (ctx->r10 != ctx->r1) {
        // 0x80330F00: nop
    
            goto L_80330F14;
    }
    // 0x80330F00: nop

    // 0x80330F04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F0C: jal         0x8001BB04
    // 0x80330F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_2;
    // 0x80330F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80330F14:
    // 0x80330F14: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330F18: nop

    // 0x80330F1C: lh          $t5, 0xB0($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XB0);
    // 0x80330F20: nop

    // 0x80330F24: bne         $t5, $zero, L_80330F44
    if (ctx->r13 != 0) {
        // 0x80330F28: nop
    
            goto L_80330F44;
    }
    // 0x80330F28: nop

    // 0x80330F2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F34: jal         0x8002B114
    // 0x80330F38: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80330F38: nop

    after_3:
    // 0x80330F3C: b           L_80330F5C
    // 0x80330F40: nop

        goto L_80330F5C;
    // 0x80330F40: nop

L_80330F44:
    // 0x80330F44: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330F48: nop

    // 0x80330F4C: lh          $t8, 0xB0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB0);
    // 0x80330F50: nop

    // 0x80330F54: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80330F58: sh          $t9, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r25;
L_80330F5C:
    // 0x80330F5C: b           L_80330F64
    // 0x80330F60: nop

        goto L_80330F64;
    // 0x80330F60: nop

L_80330F64:
    // 0x80330F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330F68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330F6C: jr          $ra
    // 0x80330F70: nop

    return;
    // 0x80330F70: nop

;}
RECOMP_FUNC void func_803314A0_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803314A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803314A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803314A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803314AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803314B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803314B4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x803314B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803314BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803314C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803314CC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x803314D0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x803314D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803314D8: beq         $s0, $at, L_803314F4
    if (ctx->r16 == ctx->r1) {
        // 0x803314DC: nop
    
            goto L_803314F4;
    }
    // 0x803314DC: nop

    // 0x803314E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803314E4: beq         $s0, $at, L_80331504
    if (ctx->r16 == ctx->r1) {
        // 0x803314E8: nop
    
            goto L_80331504;
    }
    // 0x803314E8: nop

    // 0x803314EC: b           L_80331514
    // 0x803314F0: nop

        goto L_80331514;
    // 0x803314F0: nop

L_803314F4:
    // 0x803314F4: jal         0x80331124
    // 0x803314F8: nop

    func_80331124_unk_bin_36(rdram, ctx);
        goto after_0;
    // 0x803314F8: nop

    after_0:
    // 0x803314FC: b           L_8033151C
    // 0x80331500: nop

        goto L_8033151C;
    // 0x80331500: nop

L_80331504:
    // 0x80331504: jal         0x80331470
    // 0x80331508: nop

    func_80331470_unk_bin_36(rdram, ctx);
        goto after_1;
    // 0x80331508: nop

    after_1:
    // 0x8033150C: b           L_8033151C
    // 0x80331510: nop

        goto L_8033151C;
    // 0x80331510: nop

L_80331514:
    // 0x80331514: b           L_8033151C
    // 0x80331518: nop

        goto L_8033151C;
    // 0x80331518: nop

L_8033151C:
    // 0x8033151C: b           L_80331524
    // 0x80331520: nop

        goto L_80331524;
    // 0x80331520: nop

L_80331524:
    // 0x80331524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033152C: jr          $ra
    // 0x80331530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80331530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803310AC_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803310AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803310B0: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x803310B4: nop

    // 0x803310B8: bne         $t6, $zero, L_80331114
    if (ctx->r14 != 0) {
        // 0x803310BC: nop
    
            goto L_80331114;
    }
    // 0x803310BC: nop

    // 0x803310C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803310C4: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x803310C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803310D0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803310D4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803310D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803310DC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803310E0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803310E4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803310E8: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x803310EC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803310F0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x803310F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310F8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803310FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331100: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331104: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331108: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033110C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331110: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331114:
    // 0x80331114: jr          $ra
    // 0x80331118: nop

    return;
    // 0x80331118: nop

    // 0x8033111C: jr          $ra
    // 0x80331120: nop

    return;
    // 0x80331120: nop

;}
RECOMP_FUNC void func_803309D0_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803309D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803309D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803309D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803309DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803309E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803309E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803309E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803309EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803309F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803309F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803309F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803309FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330A00: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330A04: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A08: nop

    // 0x80330A0C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330A10: nop

    // 0x80330A14: bne         $t1, $zero, L_80330A48
    if (ctx->r9 != 0) {
        // 0x80330A18: nop
    
            goto L_80330A48;
    }
    // 0x80330A18: nop

    // 0x80330A1C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A20: nop

    // 0x80330A24: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330A28: nop

    // 0x80330A2C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330A30: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330A34: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A38: nop

    // 0x80330A3C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330A40: nop

    // 0x80330A44: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80330A48:
    // 0x80330A48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330A4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330A50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A58: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80330A5C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80330A60: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330A64: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330A68: jal         0x800295C0
    // 0x80330A6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x80330A6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80330A70: beq         $v0, $zero, L_80330A88
    if (ctx->r2 == 0) {
        // 0x80330A74: nop
    
            goto L_80330A88;
    }
    // 0x80330A74: nop

    // 0x80330A78: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330A7C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A80: b           L_80330A98
    // 0x80330A84: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
        goto L_80330A98;
    // 0x80330A84: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
L_80330A88:
    // 0x80330A88: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330A8C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A90: nop

    // 0x80330A94: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_80330A98:
    // 0x80330A98: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80330A9C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80330AA0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AA4: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80330AA8: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80330AAC: nop

    // 0x80330AB0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80330AB4: nop

    // 0x80330AB8: bc1f        L_80330AD8
    if (!c1cs) {
        // 0x80330ABC: nop
    
            goto L_80330AD8;
    }
    // 0x80330ABC: nop

    // 0x80330AC0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AC4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80330AC8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80330ACC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AD0: nop

    // 0x80330AD4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80330AD8:
    // 0x80330AD8: b           L_80330AE0
    // 0x80330ADC: nop

        goto L_80330AE0;
    // 0x80330ADC: nop

L_80330AE0:
    // 0x80330AE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330AE8: jr          $ra
    // 0x80330AEC: nop

    return;
    // 0x80330AEC: nop

;}
RECOMP_FUNC void func_80331034_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331034: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033103C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80331040: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80331044: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331048: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033104C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80331050: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80331054: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80331058: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033105C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80331060: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80331064: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331068: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033106C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331070: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80331074: addiu       $a1, $a1, 0x4594
    ctx->r5 = ADD32(ctx->r5, 0X4594);
    // 0x80331078: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033107C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80331080: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331084: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80331088: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033108C: jal         0x80027464
    // 0x80331090: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80331090: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80331094: b           L_8033109C
    // 0x80331098: nop

        goto L_8033109C;
    // 0x80331098: nop

L_8033109C:
    // 0x8033109C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803310A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803310A4: jr          $ra
    // 0x803310A8: nop

    return;
    // 0x803310A8: nop

;}
RECOMP_FUNC void func_80330960_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330968: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033096C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330970: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330974: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330978: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033097C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330984: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330988: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033098C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330990: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330994: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330998: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8033099C: nop

    // 0x803309A0: bne         $t0, $zero, L_803309B8
    if (ctx->r8 != 0) {
        // 0x803309A4: nop
    
            goto L_803309B8;
    }
    // 0x803309A4: nop

    // 0x803309A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309B0: jal         0x8002B0E4
    // 0x803309B4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803309B4: nop

    after_0:
L_803309B8:
    // 0x803309B8: b           L_803309C0
    // 0x803309BC: nop

        goto L_803309C0;
    // 0x803309BC: nop

L_803309C0:
    // 0x803309C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803309C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803309C8: jr          $ra
    // 0x803309CC: nop

    return;
    // 0x803309CC: nop

;}
RECOMP_FUNC void func_80331470_unk_bin_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033147C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331480: jal         0x8002B0E4
    // 0x80331484: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80331484: nop

    after_0:
    // 0x80331488: b           L_80331490
    // 0x8033148C: nop

        goto L_80331490;
    // 0x8033148C: nop

L_80331490:
    // 0x80331490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331498: jr          $ra
    // 0x8033149C: nop

    return;
    // 0x8033149C: nop

;}
RECOMP_FUNC void func_80332F84_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F84: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80332F88: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80332F8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F90: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332F94: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332F98: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332F9C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332FA0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332FA4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332FA8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80332FAC: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x80332FB0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80332FB4: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80332FB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332FBC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332FC0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332FC4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332FC8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332FCC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332FD0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332FD4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80332FD8: jr          $ra
    // 0x80332FDC: nop

    return;
    // 0x80332FDC: nop

    // 0x80332FE0: jr          $ra
    // 0x80332FE4: nop

    return;
    // 0x80332FE4: nop

;}
RECOMP_FUNC void func_803326FC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803326FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332700: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332704: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332708: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033270C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80332710: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80332714: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80332718: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033271C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80332720: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80332724: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80332728: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033272C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332730: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80332734: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332738: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033273C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332740: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80332744: addiu       $a1, $a1, 0x3E20
    ctx->r5 = ADD32(ctx->r5, 0X3E20);
    // 0x80332748: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033274C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80332750: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332754: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332758: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033275C: jal         0x80027464
    // 0x80332760: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332760: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80332764: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80332768: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x8033276C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332770: beq         $t1, $at, L_8033286C
    if (ctx->r9 == ctx->r1) {
        // 0x80332774: nop
    
            goto L_8033286C;
    }
    // 0x80332774: nop

    // 0x80332778: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x8033277C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332780: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332784: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332788: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033278C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332790: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332794: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332798: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033279C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x803327A0: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x803327A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327A8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803327AC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803327B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803327B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803327B8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803327BC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803327C0: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x803327C4: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x803327C8: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x803327CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327D0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803327D4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803327D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803327DC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803327E0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803327E4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803327E8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803327EC: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x803327F0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803327F4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803327F8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803327FC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332800: lwc1        $f4, 0x795C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X795C);
    // 0x80332804: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332808: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033280C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332810: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332814: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80332818: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x8033281C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332820: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80332824: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80332828: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033282C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80332830: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332834: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80332838: addu        $t7, $t2, $t4
    ctx->r15 = ADD32(ctx->r10, ctx->r12);
    // 0x8033283C: lwc1        $f20, 0xC($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80332840: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332844: swc1        $f20, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f20.u32l;
    // 0x80332848: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x8033284C: nop

    // 0x80332850: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80332854: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80332858: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033285C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80332860: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332864: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332868: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
L_8033286C:
    // 0x8033286C: b           L_80332874
    // 0x80332870: nop

        goto L_80332874;
    // 0x80332870: nop

L_80332874:
    // 0x80332874: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332878: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033287C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332880: jr          $ra
    // 0x80332884: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80332884: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033665C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033665C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336660: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336664: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336668: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033666C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336670: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336674: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336678: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033667C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336680: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336684: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336688: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033668C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336690: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336694: nop

    // 0x80336698: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033669C: nop

    // 0x803366A0: bne         $t1, $zero, L_803366F4
    if (ctx->r9 != 0) {
        // 0x803366A4: nop
    
            goto L_803366F4;
    }
    // 0x803366A4: nop

    // 0x803366A8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803366AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803366B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803366B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803366B8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803366BC: sh          $t4, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r12;
    // 0x803366C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366C4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803366C8: addiu       $t6, $t6, -0x74AC
    ctx->r14 = ADD32(ctx->r14, -0X74AC);
    // 0x803366CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803366D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803366D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803366DC: jal         0x8001C0EC
    // 0x803366E0: addiu       $a3, $zero, 0x17F
    ctx->r7 = ADD32(0, 0X17F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803366E0: addiu       $a3, $zero, 0x17F
    ctx->r7 = ADD32(0, 0X17F);
    after_0:
    // 0x803366E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366EC: jal         0x8001BBDC
    // 0x803366F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803366F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803366F4:
    // 0x803366F4: b           L_803366FC
    // 0x803366F8: nop

        goto L_803366FC;
    // 0x803366F8: nop

L_803366FC:
    // 0x803366FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336700: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336704: jr          $ra
    // 0x80336708: nop

    return;
    // 0x80336708: nop

;}
RECOMP_FUNC void func_80332374_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332374: jr          $ra
    // 0x80332378: nop

    return;
    // 0x80332378: nop

    // 0x8033237C: jr          $ra
    // 0x80332380: nop

    return;
    // 0x80332380: nop

;}
RECOMP_FUNC void func_80331064_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331064: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033106C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331070: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331074: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331078: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033107C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331080: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331084: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331088: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033108C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331090: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331094: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331098: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033109C: nop

    // 0x803310A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803310A4: nop

    // 0x803310A8: bne         $t1, $zero, L_803310E0
    if (ctx->r9 != 0) {
        // 0x803310AC: nop
    
            goto L_803310E0;
    }
    // 0x803310AC: nop

    // 0x803310B0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803310B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803310B8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803310BC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803310C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803310C4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803310C8: nop

    // 0x803310CC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803310D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803310D4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803310D8: nop

    // 0x803310DC: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
L_803310E0:
    // 0x803310E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310E8: jal         0x80029C40
    // 0x803310EC: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x803310EC: nop

    after_0:
    // 0x803310F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310F8: jal         0x80029D04
    // 0x803310FC: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x803310FC: nop

    after_1:
    // 0x80331100: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331104: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331108: jal         0x8002A2EC
    // 0x8033110C: lui         $a1, 0x44E1
    ctx->r5 = S32(0X44E1 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x8033110C: lui         $a1, 0x44E1
    ctx->r5 = S32(0X44E1 << 16);
    after_2:
    // 0x80331110: beq         $v0, $zero, L_80331130
    if (ctx->r2 == 0) {
        // 0x80331114: nop
    
            goto L_80331130;
    }
    // 0x80331114: nop

    // 0x80331118: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033111C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80331120: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80331124: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331128: nop

    // 0x8033112C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80331130:
    // 0x80331130: jal         0x803304D0
    // 0x80331134: nop

    func_803304D0_unk_bin_37(rdram, ctx);
        goto after_3;
    // 0x80331134: nop

    after_3:
    // 0x80331138: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    // 0x8033113C: lb          $t9, 0x1B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X1B);
    // 0x80331140: nop

    // 0x80331144: bne         $t9, $zero, L_80331164
    if (ctx->r25 != 0) {
        // 0x80331148: nop
    
            goto L_80331164;
    }
    // 0x80331148: nop

    // 0x8033114C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331150: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80331154: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80331158: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033115C: nop

    // 0x80331160: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80331164:
    // 0x80331164: b           L_8033116C
    // 0x80331168: nop

        goto L_8033116C;
    // 0x80331168: nop

L_8033116C:
    // 0x8033116C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331174: jr          $ra
    // 0x80331178: nop

    return;
    // 0x80331178: nop

;}
RECOMP_FUNC void func_803316B4_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316B4: jr          $ra
    // 0x803316B8: nop

    return;
    // 0x803316B8: nop

    // 0x803316BC: jr          $ra
    // 0x803316C0: nop

    return;
    // 0x803316C0: nop

;}
RECOMP_FUNC void stub9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F74: jr          $ra
    // 0x80332F78: nop

    return;
    // 0x80332F78: nop

    // 0x80332F7C: jr          $ra
    // 0x80332F80: nop

    return;
    // 0x80332F80: nop

;}
RECOMP_FUNC void func_803318B4_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033189C: jr          $ra
    // 0x803318A0: nop

    return;
    // 0x803318A0: nop

    // 0x803318A4: jr          $ra
    // 0x803318A8: nop

    return;
    // 0x803318A8: nop

;}
RECOMP_FUNC void func_80331840_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331848: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033184C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331850: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331854: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331858: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033185C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331860: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331864: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331868: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033186C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80331870: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331874: bne         $t8, $at, L_80331884
    if (ctx->r24 != ctx->r1) {
        // 0x80331878: nop
    
            goto L_80331884;
    }
    // 0x80331878: nop

    // 0x8033187C: jal         0x80331800
    // 0x80331880: nop

    func_80331800_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80331880: nop

    after_0:
L_80331884:
    // 0x80331884: b           L_8033188C
    // 0x80331888: nop

        goto L_8033188C;
    // 0x80331888: nop

L_8033188C:
    // 0x8033188C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331894: jr          $ra
    // 0x80331898: nop

    return;
    // 0x80331898: nop

;}
RECOMP_FUNC void func_80332174_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332174: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033217C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332180: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332184: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332188: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033218C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332190: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332194: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332198: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033219C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803321A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803321A4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803321A8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803321AC: nop

    // 0x803321B0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803321B4: nop

    // 0x803321B8: bne         $t1, $zero, L_80332268
    if (ctx->r9 != 0) {
        // 0x803321BC: nop
    
            goto L_80332268;
    }
    // 0x803321BC: nop

    // 0x803321C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803321C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803321C8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803321CC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803321D0: addiu       $t4, $zero, 0x294
    ctx->r12 = ADD32(0, 0X294);
    // 0x803321D4: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x803321D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803321DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803321E0: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x803321E4: nop

    // 0x803321E8: bne         $t7, $at, L_80332234
    if (ctx->r15 != ctx->r1) {
        // 0x803321EC: nop
    
            goto L_80332234;
    }
    // 0x803321EC: nop

    // 0x803321F0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803321F4: nop

    // 0x803321F8: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x803321FC: nop

    // 0x80332200: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80332204: nop

    // 0x80332208: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033220C: swc1        $f6, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f6.u32l;
    // 0x80332210: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332214: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332218: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033221C: lwc1        $f14, 0x18($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80332220: jal         0x80015538
    // 0x80332224: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80332224: nop

    after_0:
    // 0x80332228: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033222C: b           L_80332268
    // 0x80332230: swc1        $f0, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f0.u32l;
        goto L_80332268;
    // 0x80332230: swc1        $f0, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f0.u32l;
L_80332234:
    // 0x80332234: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332238: nop

    // 0x8033223C: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x80332240: nop

    // 0x80332244: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80332248: nop

    // 0x8033224C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332250: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
    // 0x80332254: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332258: nop

    // 0x8033225C: lwc1        $f16, 0x1C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80332260: nop

    // 0x80332264: swc1        $f16, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f16.u32l;
L_80332268:
    // 0x80332268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033226C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332270: jal         0x80029C40
    // 0x80332274: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80332274: nop

    after_1:
    // 0x80332278: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033227C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332280: jal         0x80029D04
    // 0x80332284: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x80332284: nop

    after_2:
    // 0x80332288: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033228C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332290: lh          $t6, 0xAA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAA);
    // 0x80332294: nop

    // 0x80332298: bne         $t6, $at, L_803322C4
    if (ctx->r14 != ctx->r1) {
        // 0x8033229C: nop
    
            goto L_803322C4;
    }
    // 0x8033229C: nop

    // 0x803322A0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803322A4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x803322A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803322AC: lwc1        $f12, 0x20($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X20);
    // 0x803322B0: jal         0x80015538
    // 0x803322B4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803322B4: nop

    after_3:
    // 0x803322B8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803322BC: b           L_803322E8
    // 0x803322C0: swc1        $f0, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f0.u32l;
        goto L_803322E8;
    // 0x803322C0: swc1        $f0, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f0.u32l;
L_803322C4:
    // 0x803322C4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803322C8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x803322CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803322D0: lwc1        $f12, 0x18($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X18);
    // 0x803322D4: jal         0x80015538
    // 0x803322D8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803322D8: nop

    after_4:
    // 0x803322DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803322E0: nop

    // 0x803322E4: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
L_803322E8:
    // 0x803322E8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803322EC: nop

    // 0x803322F0: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x803322F4: nop

    // 0x803322F8: bgtz        $t3, L_80332320
    if (SIGNED(ctx->r11) > 0) {
        // 0x803322FC: nop
    
            goto L_80332320;
    }
    // 0x803322FC: nop

    // 0x80332300: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332304: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332308: nop

    // 0x8033230C: swc1        $f18, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f18.u32l;
    // 0x80332310: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332314: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332318: b           L_8033233C
    // 0x8033231C: swc1        $f4, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f4.u32l;
        goto L_8033233C;
    // 0x8033231C: swc1        $f4, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f4.u32l;
L_80332320:
    // 0x80332320: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332324: nop

    // 0x80332328: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8033232C: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x80332330: nop

    // 0x80332334: subu        $t9, $t6, $t7
    ctx->r25 = SUB32(ctx->r14, ctx->r15);
    // 0x80332338: sh          $t9, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r25;
L_8033233C:
    // 0x8033233C: b           L_80332344
    // 0x80332340: nop

        goto L_80332344;
    // 0x80332340: nop

L_80332344:
    // 0x80332344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033234C: jr          $ra
    // 0x80332350: nop

    return;
    // 0x80332350: nop

;}
RECOMP_FUNC void func_803302A8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803302AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803302B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803302B4: sb          $zero, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = 0;
    // 0x803302B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803302BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803302C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803302C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803302C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803302D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803302D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803302DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803302E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803302E4: lb          $t1, 0x2B($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2B);
    // 0x803302E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803302EC: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x803302F0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x803302F4: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x803302F8: nop

    // 0x803302FC: sb          $t4, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r12;
    // 0x80330300: lb          $t5, 0x1F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1F);
    // 0x80330304: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330308: beq         $t5, $at, L_803304AC
    if (ctx->r13 == ctx->r1) {
        // 0x8033030C: nop
    
            goto L_803304AC;
    }
    // 0x8033030C: nop

    // 0x80330310: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x80330314: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330318: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033031C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330320: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330324: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330328: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033032C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330330: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330334: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80330338: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8033033C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330340: lh          $t2, 0xAA($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XAA);
    // 0x80330344: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80330348: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8033034C: nop

    // 0x80330350: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330354: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80330358: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x8033035C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80330360: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330364: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x80330368: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033036C: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80330370: nop

    // 0x80330374: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80330378: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8033037C: swc1        $f4, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f4.u32l;
    // 0x80330380: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330384: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80330388: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033038C: nop

    // 0x80330390: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
    // 0x80330394: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330398: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8033039C: lwc1        $f10, 0x3C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803303A0: nop

    // 0x803303A4: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
    // 0x803303A8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803303AC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x803303B0: lwc1        $f18, 0x40($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X40);
    // 0x803303B4: nop

    // 0x803303B8: swc1        $f18, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f18.u32l;
    // 0x803303BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803303C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803303C4: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803303C8: nop

    // 0x803303CC: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    // 0x803303D0: nop

    // 0x803303D4: bc1f        L_80330438
    if (!c1cs) {
        // 0x803303D8: nop
    
            goto L_80330438;
    }
    // 0x803303D8: nop

    // 0x803303DC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x803303E0: nop

    // 0x803303E4: lh          $t5, 0xAE($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XAE);
    // 0x803303E8: nop

    // 0x803303EC: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x803303F0: nop

    // 0x803303F4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803303F8: swc1        $f8, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f8.u32l;
    // 0x803303FC: lb          $t4, 0x2B($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X2B);
    // 0x80330400: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330404: beq         $t4, $at, L_80330430
    if (ctx->r12 == ctx->r1) {
        // 0x80330408: nop
    
            goto L_80330430;
    }
    // 0x80330408: nop

    // 0x8033040C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80330410: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80330414: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330418: lwc1        $f12, 0x18($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X18);
    // 0x8033041C: jal         0x80015538
    // 0x80330420: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80330420: nop

    after_0:
    // 0x80330424: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80330428: nop

    // 0x8033042C: swc1        $f0, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f0.u32l;
L_80330430:
    // 0x80330430: b           L_8033048C
    // 0x80330434: nop

        goto L_8033048C;
    // 0x80330434: nop

L_80330438:
    // 0x80330438: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8033043C: nop

    // 0x80330440: lh          $t9, 0xAE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAE);
    // 0x80330444: nop

    // 0x80330448: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8033044C: nop

    // 0x80330450: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80330454: swc1        $f18, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f18.u32l;
    // 0x80330458: lb          $t1, 0x2B($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2B);
    // 0x8033045C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330460: beq         $t1, $at, L_8033048C
    if (ctx->r9 == ctx->r1) {
        // 0x80330464: nop
    
            goto L_8033048C;
    }
    // 0x80330464: nop

    // 0x80330468: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8033046C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80330470: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330474: lwc1        $f12, 0x20($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X20);
    // 0x80330478: jal         0x80015538
    // 0x8033047C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8033047C: nop

    after_1:
    // 0x80330480: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80330484: nop

    // 0x80330488: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
L_8033048C:
    // 0x8033048C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80330490: sb          $t5, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r13;
    // 0x80330494: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x80330498: jal         0x80029C40
    // 0x8033049C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x8033049C: nop

    after_2:
    // 0x803304A0: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x803304A4: jal         0x80029D04
    // 0x803304A8: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x803304A8: nop

    after_3:
L_803304AC:
    // 0x803304AC: lb          $v0, 0x1E($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X1E);
    // 0x803304B0: b           L_803304C0
    // 0x803304B4: nop

        goto L_803304C0;
    // 0x803304B4: nop

    // 0x803304B8: b           L_803304C0
    // 0x803304BC: nop

        goto L_803304C0;
    // 0x803304BC: nop

L_803304C0:
    // 0x803304C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803304C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803304C8: jr          $ra
    // 0x803304CC: nop

    return;
    // 0x803304CC: nop

;}
RECOMP_FUNC void func_80333CD8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333CD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333CDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333CE0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80333CE4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80333CE8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80333CEC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80333CF0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80333CF4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80333CF8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80333CFC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80333D00: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80333D04: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80333D08: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80333D0C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80333D10: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80333D14: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80333D18: addiu       $a1, $a1, 0x3C28
    ctx->r5 = ADD32(ctx->r5, 0X3C28);
    // 0x80333D1C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80333D20: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80333D24: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80333D28: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80333D2C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80333D30: jal         0x80027464
    // 0x80333D34: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80333D34: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80333D38: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x80333D3C: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x80333D40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333D44: beq         $t1, $at, L_80333FAC
    if (ctx->r9 == ctx->r1) {
        // 0x80333D48: nop
    
            goto L_80333FAC;
    }
    // 0x80333D48: nop

    // 0x80333D4C: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x80333D50: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80333D54: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333D58: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333D5C: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80333D60: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333D64: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333D68: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80333D6C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333D70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D74: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333D78: sh          $t3, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r11;
    // 0x80333D7C: lb          $t8, 0x27($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X27);
    // 0x80333D80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D84: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333D88: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333D8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333D90: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333D94: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333D98: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333D9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80333DA0: sh          $t7, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r15;
    // 0x80333DA4: lb          $t6, 0x27($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X27);
    // 0x80333DA8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333DAC: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80333DB0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80333DB4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333DB8: lwc1        $f4, 0x7980($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7980);
    // 0x80333DBC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80333DC0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333DC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333DC8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333DCC: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80333DD0: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x80333DD4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333DD8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333DDC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333DE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333DE4: lwc1        $f6, 0x7984($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7984);
    // 0x80333DE8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333DEC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333DF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333DF4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333DF8: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80333DFC: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x80333E00: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333E04: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80333E08: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80333E0C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333E10: lwc1        $f8, 0x7988($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7988);
    // 0x80333E14: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80333E18: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333E1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E20: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333E24: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x80333E28: lb          $t5, 0x27($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X27);
    // 0x80333E2C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80333E30: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80333E34: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80333E38: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333E3C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80333E40: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333E44: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333E48: lh          $t7, 0x41F8($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F8);
    // 0x80333E4C: nop

    // 0x80333E50: bne         $t7, $zero, L_80333E80
    if (ctx->r15 != 0) {
        // 0x80333E54: nop
    
            goto L_80333E80;
    }
    // 0x80333E54: nop

    // 0x80333E58: lb          $t6, 0x27($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X27);
    // 0x80333E5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E60: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80333E64: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80333E68: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333E6C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80333E70: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333E74: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333E78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80333E7C: sh          $t9, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r25;
L_80333E80:
    // 0x80333E80: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80333E84: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x80333E88: nop

    // 0x80333E8C: lh          $t2, 0xC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC);
    // 0x80333E90: nop

    // 0x80333E94: beq         $t2, $zero, L_80333EC4
    if (ctx->r10 == 0) {
        // 0x80333E98: nop
    
            goto L_80333EC4;
    }
    // 0x80333E98: nop

    // 0x80333E9C: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x80333EA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333EA4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80333EA8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80333EAC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333EB0: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80333EB4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333EB8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333EBC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80333EC0: sh          $t4, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r12;
L_80333EC4:
    // 0x80333EC4: lb          $t8, 0x27($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X27);
    // 0x80333EC8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80333ECC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80333ED0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333ED4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333ED8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333EDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333EE0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80333EE4: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x80333EE8: lh          $t1, 0xA8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA8);
    // 0x80333EEC: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x80333EF0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333EF4: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80333EF8: mflo        $t3
    ctx->r11 = lo;
    // 0x80333EFC: sh          $t3, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r11;
    // 0x80333F00: nop

    // 0x80333F04: lb          $t5, 0x27($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X27);
    // 0x80333F08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F0C: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80333F10: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80333F14: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333F18: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80333F1C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333F20: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333F24: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80333F28: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
    // 0x80333F2C: lb          $t6, 0x27($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X27);
    // 0x80333F30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F34: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80333F38: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80333F3C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333F40: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80333F44: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333F48: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333F4C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80333F50: sh          $t7, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r15;
    // 0x80333F54: lb          $t2, 0x27($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X27);
    // 0x80333F58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F5C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333F60: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333F64: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333F68: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333F6C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333F70: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333F74: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80333F78: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80333F7C: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x80333F80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F84: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80333F88: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80333F8C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333F90: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80333F94: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333F98: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333F9C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80333FA0: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80333FA4: jal         0x80333FC4
    // 0x80333FA8: nop

    func_80333FC4_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80333FA8: nop

    after_1:
L_80333FAC:
    // 0x80333FAC: b           L_80333FB4
    // 0x80333FB0: nop

        goto L_80333FB4;
    // 0x80333FB0: nop

L_80333FB4:
    // 0x80333FB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333FB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333FBC: jr          $ra
    // 0x80333FC0: nop

    return;
    // 0x80333FC0: nop

;}
RECOMP_FUNC void func_803328CC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803328CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803328D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803328D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803328D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803328DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803328E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803328E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803328E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803328EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803328F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803328F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803328F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803328FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332900: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332904: nop

    // 0x80332908: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033290C: nop

    // 0x80332910: bne         $t1, $zero, L_80332950
    if (ctx->r9 != 0) {
        // 0x80332914: nop
    
            goto L_80332950;
    }
    // 0x80332914: nop

    // 0x80332918: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033291C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80332920: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80332924: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332928: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033292C: nop

    // 0x80332930: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80332934: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332938: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033293C: nop

    // 0x80332940: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80332944: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332948: nop

    // 0x8033294C: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_80332950:
    // 0x80332950: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332954: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332958: jal         0x80029C40
    // 0x8033295C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x8033295C: nop

    after_0:
    // 0x80332960: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332964: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332968: jal         0x80029D04
    // 0x8033296C: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x8033296C: nop

    after_1:
    // 0x80332970: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332974: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332978: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033297C: nop

    // 0x80332980: bne         $t8, $at, L_803329EC
    if (ctx->r24 != ctx->r1) {
        // 0x80332984: nop
    
            goto L_803329EC;
    }
    // 0x80332984: nop

    // 0x80332988: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033298C: nop

    // 0x80332990: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80332994: nop

    // 0x80332998: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x8033299C: bne         $at, $zero, L_803329E0
    if (ctx->r1 != 0) {
        // 0x803329A0: nop
    
            goto L_803329E0;
    }
    // 0x803329A0: nop

    // 0x803329A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803329A8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803329AC: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x803329B0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803329B4: nop

    // 0x803329B8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x803329BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329C8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x803329CC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803329D0: jal         0x800175F0
    // 0x803329D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x803329D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x803329D8: b           L_803329EC
    // 0x803329DC: nop

        goto L_803329EC;
    // 0x803329DC: nop

L_803329E0:
    // 0x803329E0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803329E4: nop

    // 0x803329E8: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_803329EC:
    // 0x803329EC: b           L_803329F4
    // 0x803329F0: nop

        goto L_803329F4;
    // 0x803329F0: nop

L_803329F4:
    // 0x803329F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803329F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803329FC: jr          $ra
    // 0x80332A00: nop

    return;
    // 0x80332A00: nop

;}
RECOMP_FUNC void func_80333FC4_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333FC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333FCC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80333FD0: sb          $zero, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = 0;
L_80333FD4:
    // 0x80333FD4: lb          $t6, 0x23($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X23);
    // 0x80333FD8: lb          $t8, 0x1E($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X1E);
    // 0x80333FDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333FE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333FE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333FE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333FEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333FF0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80333FF4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80333FF8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80333FFC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334000: lh          $t1, 0x4238($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4238);
    // 0x80334004: nop

    // 0x80334008: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    // 0x8033400C: lb          $t3, 0x1F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X1F);
    // 0x80334010: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334014: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334018: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033401C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334020: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334024: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80334028: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033402C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80334030: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
    // 0x80334034: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x80334038: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033403C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80334040: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80334044: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334048: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033404C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334050: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334054: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80334058: sh          $t5, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r13;
    // 0x8033405C: lb          $t7, 0x1F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X1F);
    // 0x80334060: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334064: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80334068: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8033406C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334070: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334074: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334078: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033407C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80334080: lb          $t1, 0x1F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X1F);
    // 0x80334084: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334088: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033408C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334090: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334094: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334098: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033409C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803340A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803340A4: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x803340A8: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x803340AC: lb          $t2, 0x1E($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X1E);
    // 0x803340B0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803340B4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803340B8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803340BC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803340C0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803340C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803340C8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803340CC: addiu       $t4, $t2, -0x3
    ctx->r12 = ADD32(ctx->r10, -0X3);
    // 0x803340D0: sh          $t4, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r12;
    // 0x803340D4: lb          $t8, 0x1F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X1F);
    // 0x803340D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803340DC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x803340E0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x803340E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803340E8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x803340EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803340F0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803340F4: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x803340F8: lb          $t9, 0x1F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X1F);
    // 0x803340FC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334100: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80334104: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80334108: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033410C: lwc1        $f4, 0x798C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X798C);
    // 0x80334110: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80334114: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334118: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033411C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334120: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80334124: lb          $t0, 0x1F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X1F);
    // 0x80334128: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033412C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80334130: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80334134: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334138: lwc1        $f6, 0x7990($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7990);
    // 0x8033413C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80334140: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334144: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334148: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033414C: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80334150: lb          $t2, 0x1F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X1F);
    // 0x80334154: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334158: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8033415C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334160: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334164: lwc1        $f8, 0x7994($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7994);
    // 0x80334168: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033416C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334170: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334174: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80334178: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x8033417C: lb          $t4, 0x1F($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X1F);
    // 0x80334180: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334184: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334188: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033418C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334190: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334194: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334198: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033419C: lh          $t8, 0x41F8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F8);
    // 0x803341A0: nop

    // 0x803341A4: bltz        $t8, L_803341E0
    if (SIGNED(ctx->r24) < 0) {
        // 0x803341A8: nop
    
            goto L_803341E0;
    }
    // 0x803341A8: nop

    // 0x803341AC: lb          $t7, 0x1F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X1F);
    // 0x803341B0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803341B4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x803341B8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803341BC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803341C0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803341C4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803341C8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803341CC: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x803341D0: lh          $t3, 0xA8($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA8);
    // 0x803341D4: nop

    // 0x803341D8: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x803341DC: sh          $t2, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r10;
L_803341E0:
    // 0x803341E0: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x803341E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803341E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803341EC: jal         0x80019448
    // 0x803341F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x803341F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x803341F4: lb          $t6, 0x1E($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1E);
    // 0x803341F8: nop

    // 0x803341FC: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x80334200: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x80334204: sra         $t8, $t5, 24
    ctx->r24 = S32(SIGNED(ctx->r13) >> 24);
    // 0x80334208: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x8033420C: bne         $at, $zero, L_80333FD4
    if (ctx->r1 != 0) {
        // 0x80334210: sb          $t4, 0x1E($sp)
        MEM_B(0X1E, ctx->r29) = ctx->r12;
            goto L_80333FD4;
    }
    // 0x80334210: sb          $t4, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r12;
    // 0x80334214: lb          $v0, 0x1E($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X1E);
    // 0x80334218: b           L_80334228
    // 0x8033421C: nop

        goto L_80334228;
    // 0x8033421C: nop

    // 0x80334220: b           L_80334228
    // 0x80334224: nop

        goto L_80334228;
    // 0x80334224: nop

L_80334228:
    // 0x80334228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033422C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334230: jr          $ra
    // 0x80334234: nop

    return;
    // 0x80334234: nop

;}
RECOMP_FUNC void func_80334E94_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334E94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334E98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334E9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334EA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334EA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334EA8: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80334EAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334EB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334EB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334EB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334EBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334EC0: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80334EC4: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80334EC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334ECC: beq         $s0, $at, L_80334EF4
    if (ctx->r16 == ctx->r1) {
        // 0x80334ED0: nop
    
            goto L_80334EF4;
    }
    // 0x80334ED0: nop

    // 0x80334ED4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334ED8: beq         $s0, $at, L_80334F04
    if (ctx->r16 == ctx->r1) {
        // 0x80334EDC: nop
    
            goto L_80334F04;
    }
    // 0x80334EDC: nop

    // 0x80334EE0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80334EE4: beq         $s0, $at, L_80334F14
    if (ctx->r16 == ctx->r1) {
        // 0x80334EE8: nop
    
            goto L_80334F14;
    }
    // 0x80334EE8: nop

    // 0x80334EEC: b           L_80334F24
    // 0x80334EF0: nop

        goto L_80334F24;
    // 0x80334EF0: nop

L_80334EF4:
    // 0x80334EF4: jal         0x80334AA0
    // 0x80334EF8: nop

    func_80334AA0_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80334EF8: nop

    after_0:
    // 0x80334EFC: b           L_80334F2C
    // 0x80334F00: nop

        goto L_80334F2C;
    // 0x80334F00: nop

L_80334F04:
    // 0x80334F04: jal         0x80334E34
    // 0x80334F08: nop

    func_80334E34_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80334F08: nop

    after_1:
    // 0x80334F0C: b           L_80334F2C
    // 0x80334F10: nop

        goto L_80334F2C;
    // 0x80334F10: nop

L_80334F14:
    // 0x80334F14: jal         0x80334E64
    // 0x80334F18: nop

    func_80334E64_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x80334F18: nop

    after_2:
    // 0x80334F1C: b           L_80334F2C
    // 0x80334F20: nop

        goto L_80334F2C;
    // 0x80334F20: nop

L_80334F24:
    // 0x80334F24: b           L_80334F2C
    // 0x80334F28: nop

        goto L_80334F2C;
    // 0x80334F28: nop

L_80334F2C:
    // 0x80334F2C: b           L_80334F34
    // 0x80334F30: nop

        goto L_80334F34;
    // 0x80334F30: nop

L_80334F34:
    // 0x80334F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334F38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334F3C: jr          $ra
    // 0x80334F40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334F40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80334E34_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80334E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334E3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334E40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334E44: jal         0x8002B114
    // 0x80334E48: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x80334E48: nop

    after_0:
    // 0x80334E4C: b           L_80334E54
    // 0x80334E50: nop

        goto L_80334E54;
    // 0x80334E50: nop

L_80334E54:
    // 0x80334E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334E58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80334E5C: jr          $ra
    // 0x80334E60: nop

    return;
    // 0x80334E60: nop

;}
RECOMP_FUNC void func_803367A0_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803367A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803367A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803367A8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803367AC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803367B0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803367B4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803367B8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803367BC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803367C0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803367C4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803367C8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803367CC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803367D0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803367D4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803367D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803367DC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x803367E0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803367E4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803367E8: addiu       $a1, $a1, 0x36C4
    ctx->r5 = ADD32(ctx->r5, 0X36C4);
    // 0x803367EC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803367F0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803367F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803367F8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803367FC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80336800: jal         0x80027464
    // 0x80336804: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80336804: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80336808: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8033680C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80336810: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80336814: beq         $t1, $at, L_803369C4
    if (ctx->r9 == ctx->r1) {
        // 0x80336818: nop
    
            goto L_803369C4;
    }
    // 0x80336818: nop

    // 0x8033681C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80336820: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336824: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80336828: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033682C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80336830: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336834: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80336838: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033683C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80336840: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80336844: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80336848: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033684C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80336850: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80336854: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336858: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033685C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336860: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80336864: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80336868: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033686C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80336870: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80336874: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336878: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8033687C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80336880: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336884: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80336888: lwc1        $f4, 0x79A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X79A8);
    // 0x8033688C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336890: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336894: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80336898: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033689C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803368A0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803368A4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803368A8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803368AC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803368B0: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x803368B4: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x803368B8: lwc1        $f20, 0x14($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X14);
    // 0x803368BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803368C0: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x803368C4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803368C8: nop

    // 0x803368CC: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803368D0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803368D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803368D8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803368DC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803368E0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803368E4: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x803368E8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803368EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803368F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803368F4: jal         0x80019448
    // 0x803368F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x803368F8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803368FC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80336900: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336904: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80336908: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033690C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336910: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80336914: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336918: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033691C: lwc1        $f12, 0x4168($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80336920: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80336924: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336928: jal         0x80015538
    // 0x8033692C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8033692C: nop

    after_2:
    // 0x80336930: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80336934: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336938: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033693C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336940: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80336944: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336948: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033694C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80336950: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x80336954: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80336958: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033695C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80336960: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80336964: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336968: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033696C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80336970: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336974: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80336978: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033697C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336980: jal         0x80015538
    // 0x80336984: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80336984: nop

    after_3:
    // 0x80336988: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033698C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336990: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80336994: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80336998: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033699C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803369A0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803369A4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803369A8: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x803369AC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803369B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803369B4: addiu       $a3, $a3, -0x74C8
    ctx->r7 = ADD32(ctx->r7, -0X74C8);
    // 0x803369B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803369BC: jal         0x8001ABF4
    // 0x803369C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803369C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803369C4:
    // 0x803369C4: b           L_803369CC
    // 0x803369C8: nop

        goto L_803369CC;
    // 0x803369C8: nop

L_803369CC:
    // 0x803369CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803369D0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803369D4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803369D8: jr          $ra
    // 0x803369DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803369DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80334534_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334534: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334538: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033453C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334540: sb          $zero, 0x23($sp)
    MEM_B(0X23, ctx->r29) = 0;
    // 0x80334544: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334548: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033454C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334550: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334558: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033455C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334560: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334564: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334568: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033456C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334570: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80334574: sb          $t0, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r8;
L_80334578:
    // 0x80334578: lb          $a0, 0x22($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X22);
    // 0x8033457C: jal         0x803345DC
    // 0x80334580: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_803345DC_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80334580: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_0:
    // 0x80334584: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x80334588: lb          $t2, 0x23($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X23);
    // 0x8033458C: sra         $t1, $s0, 16
    ctx->r9 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80334590: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x80334594: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x80334598: sb          $t3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r11;
    // 0x8033459C: lb          $t4, 0x22($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X22);
    // 0x803345A0: nop

    // 0x803345A4: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x803345A8: sll         $t6, $t5, 24
    ctx->r14 = S32(ctx->r13 << 24);
    // 0x803345AC: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803345B0: bgtz        $t7, L_80334578
    if (SIGNED(ctx->r15) > 0) {
        // 0x803345B4: sb          $t5, 0x22($sp)
        MEM_B(0X22, ctx->r29) = ctx->r13;
            goto L_80334578;
    }
    // 0x803345B4: sb          $t5, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r13;
    // 0x803345B8: lb          $v0, 0x23($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X23);
    // 0x803345BC: b           L_803345CC
    // 0x803345C0: nop

        goto L_803345CC;
    // 0x803345C0: nop

    // 0x803345C4: b           L_803345CC
    // 0x803345C8: nop

        goto L_803345CC;
    // 0x803345C8: nop

L_803345CC:
    // 0x803345CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803345D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803345D4: jr          $ra
    // 0x803345D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803345D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80332FE8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332FE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332FEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332FF0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80332FF4: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80332FF8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80332FFC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80333000: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80333004: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80333008: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033300C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333010: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333014: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333018: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033301C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80333020: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80333024: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80333028: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033302C: nop

    // 0x80333030: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x80333034: nop

    // 0x80333038: bne         $t2, $zero, L_803330D4
    if (ctx->r10 != 0) {
        // 0x8033303C: nop
    
            goto L_803330D4;
    }
    // 0x8033303C: nop

    // 0x80333040: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80333044: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80333048: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x8033304C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333050: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80333054: nop

    // 0x80333058: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x8033305C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80333060: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333064: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333068: nop

    // 0x8033306C: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
    // 0x80333070: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80333074: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333078: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033307C: nop

    // 0x80333080: swc1        $f8, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f8.u32l;
    // 0x80333084: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80333088: nop

    // 0x8033308C: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x80333090: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80333094: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80333098: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x8033309C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330A4: jal         0x800272E8
    // 0x803330A8: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x803330A8: nop

    after_0:
    // 0x803330AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803330B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803330BC: jal         0x80019448
    // 0x803330C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x803330C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803330C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330CC: jal         0x8001BBDC
    // 0x803330D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803330D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_803330D4:
    // 0x803330D4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803330D8: nop

    // 0x803330DC: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x803330E0: nop

    // 0x803330E4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x803330E8: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x803330EC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803330F0: nop

    // 0x803330F4: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x803330F8: nop

    // 0x803330FC: bgez        $t5, L_8033310C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80333100: sra         $t6, $t5, 3
        ctx->r14 = S32(SIGNED(ctx->r13) >> 3);
            goto L_8033310C;
    }
    // 0x80333100: sra         $t6, $t5, 3
    ctx->r14 = S32(SIGNED(ctx->r13) >> 3);
    // 0x80333104: addiu       $at, $t5, 0x7
    ctx->r1 = ADD32(ctx->r13, 0X7);
    // 0x80333108: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8033310C:
    // 0x8033310C: addiu       $t7, $t6, 0x1C
    ctx->r15 = ADD32(ctx->r14, 0X1C);
    // 0x80333110: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80333114: nop

    // 0x80333118: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8033311C: swc1        $f16, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f16.u32l;
    // 0x80333120: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80333124: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80333128: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033312C: lwc1        $f12, 0x20($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X20);
    // 0x80333130: jal         0x80015538
    // 0x80333134: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80333134: nop

    after_3:
    // 0x80333138: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033313C: nop

    // 0x80333140: swc1        $f0, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f0.u32l;
    // 0x80333144: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80333148: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033314C: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80333150: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80333154: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80333158: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8033315C: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80333160: jal         0x80015634
    // 0x80333164: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_4;
    // 0x80333164: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_4:
    // 0x80333168: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8033316C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333170: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333174: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80333178: jal         0x800157EC
    // 0x8033317C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_800157EC(rdram, ctx);
        goto after_5;
    // 0x8033317C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_5:
    // 0x80333180: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80333184: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333188: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033318C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80333190: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80333194: jal         0x80015538
    // 0x80333198: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80333198: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_6:
    // 0x8033319C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803331A0: nop

    // 0x803331A4: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x803331A8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x803331AC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803331B0: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x803331B4: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x803331B8: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803331BC: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x803331C0: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803331C4: jal         0x800156C4
    // 0x803331C8: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_7;
    // 0x803331C8: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_7:
    // 0x803331CC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x803331D0: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803331D4: jal         0x80015744
    // 0x803331D8: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_8;
    // 0x803331D8: nop

    after_8:
    // 0x803331DC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x803331E0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803331E4: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803331E8: lwc1        $f12, 0x40($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X40);
    // 0x803331EC: jal         0x800157EC
    // 0x803331F0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_800157EC(rdram, ctx);
        goto after_9;
    // 0x803331F0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_9:
    // 0x803331F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803331F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803331FC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80333200: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80333204: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x80333208: jal         0x80015538
    // 0x8033320C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x8033320C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_10:
    // 0x80333210: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80333214: nop

    // 0x80333218: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
    // 0x8033321C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333220: nop

    // 0x80333224: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80333228: nop

    // 0x8033322C: swc1        $f10, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f10.u32l;
    // 0x80333230: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333234: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80333238: lwc1        $f14, 0x40($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X40);
    // 0x8033323C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80333240: jal         0x80015538
    // 0x80333244: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80333244: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_11:
    // 0x80333248: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033324C: nop

    // 0x80333250: swc1        $f0, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f0.u32l;
    // 0x80333254: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033325C: jal         0x80029D8C
    // 0x80333260: nop

    func_80029D8C(rdram, ctx);
        goto after_12;
    // 0x80333260: nop

    after_12:
    // 0x80333264: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80333268: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033326C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333278: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033327C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80333280: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333284: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80333288: jal         0x800295C0
    // 0x8033328C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_13;
    // 0x8033328C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x80333290: beq         $v0, $zero, L_803332B0
    if (ctx->r2 == 0) {
        // 0x80333294: nop
    
            goto L_803332B0;
    }
    // 0x80333294: nop

    // 0x80333298: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033329C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803332A0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x803332A4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803332A8: nop

    // 0x803332AC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803332B0:
    // 0x803332B0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803332B4: nop

    // 0x803332B8: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x803332BC: nop

    // 0x803332C0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x803332C4: sh          $t0, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r8;
    // 0x803332C8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803332CC: nop

    // 0x803332D0: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x803332D4: nop

    // 0x803332D8: bgtz        $t3, L_803332F8
    if (SIGNED(ctx->r11) > 0) {
        // 0x803332DC: nop
    
            goto L_803332F8;
    }
    // 0x803332DC: nop

    // 0x803332E0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803332E4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803332E8: sh          $t1, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r9;
    // 0x803332EC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803332F0: nop

    // 0x803332F4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803332F8:
    // 0x803332F8: b           L_80333300
    // 0x803332FC: nop

        goto L_80333300;
    // 0x803332FC: nop

L_80333300:
    // 0x80333300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333304: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80333308: jr          $ra
    // 0x8033330C: nop

    return;
    // 0x8033330C: nop

;}
RECOMP_FUNC void func_8033434C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033434C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334354: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334358: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033435C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334360: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334364: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334368: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033436C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334370: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334374: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334378: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033437C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334380: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334384: nop

    // 0x80334388: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033438C: nop

    // 0x80334390: bne         $t1, $zero, L_803343C4
    if (ctx->r9 != 0) {
        // 0x80334394: nop
    
            goto L_803343C4;
    }
    // 0x80334394: nop

    // 0x80334398: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033439C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803343A0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803343A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803343A8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803343AC: nop

    // 0x803343B0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803343B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803343B8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803343BC: nop

    // 0x803343C0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_803343C4:
    // 0x803343C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343CC: jal         0x80029C40
    // 0x803343D0: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x803343D0: nop

    after_0:
    // 0x803343D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343DC: jal         0x80029D04
    // 0x803343E0: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x803343E0: nop

    after_1:
    // 0x803343E4: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
L_803343E8:
    // 0x803343E8: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x803343EC: jal         0x80334248
    // 0x803343F0: nop

    func_80334248_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x803343F0: nop

    after_2:
    // 0x803343F4: lb          $t6, 0x1B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1B);
    // 0x803343F8: nop

    // 0x803343FC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80334400: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x80334404: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80334408: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x8033440C: bne         $at, $zero, L_803343E8
    if (ctx->r1 != 0) {
        // 0x80334410: sb          $t7, 0x1B($sp)
        MEM_B(0X1B, ctx->r29) = ctx->r15;
            goto L_803343E8;
    }
    // 0x80334410: sb          $t7, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r15;
    // 0x80334414: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334418: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033441C: jal         0x8002B0E4
    // 0x80334420: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x80334420: nop

    after_3:
    // 0x80334424: b           L_8033442C
    // 0x80334428: nop

        goto L_8033442C;
    // 0x80334428: nop

L_8033442C:
    // 0x8033442C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334434: jr          $ra
    // 0x80334438: nop

    return;
    // 0x80334438: nop

;}
RECOMP_FUNC void func_80332074_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332074: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033207C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332080: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332084: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332088: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033208C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332090: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332094: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332098: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033209C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803320A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803320A4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803320A8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803320AC: nop

    // 0x803320B0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803320B4: nop

    // 0x803320B8: bne         $t1, $zero, L_803320FC
    if (ctx->r9 != 0) {
        // 0x803320BC: nop
    
            goto L_803320FC;
    }
    // 0x803320BC: nop

    // 0x803320C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803320C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803320C8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803320CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803320D0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803320D4: nop

    // 0x803320D8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803320DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803320E0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803320E4: nop

    // 0x803320E8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803320EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320F4: jal         0x8001BBDC
    // 0x803320F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x803320F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_803320FC:
    // 0x803320FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332104: jal         0x80029C40
    // 0x80332108: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80332108: nop

    after_1:
    // 0x8033210C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332110: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332114: jal         0x80029D04
    // 0x80332118: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x80332118: nop

    after_2:
    // 0x8033211C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332124: jal         0x8001B44C
    // 0x80332128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80332128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033212C: beq         $v0, $zero, L_8033215C
    if (ctx->r2 == 0) {
        // 0x80332130: nop
    
            goto L_8033215C;
    }
    // 0x80332130: nop

    // 0x80332134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033213C: jal         0x8001BBDC
    // 0x80332140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80332140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80332144: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332148: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8033214C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80332150: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332154: nop

    // 0x80332158: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_8033215C:
    // 0x8033215C: b           L_80332164
    // 0x80332160: nop

        goto L_80332164;
    // 0x80332160: nop

L_80332164:
    // 0x80332164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033216C: jr          $ra
    // 0x80332170: nop

    return;
    // 0x80332170: nop

;}
RECOMP_FUNC void func_8033785C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033785C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337860: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337864: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80337868: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033786C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337870: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337874: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337878: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033787C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337880: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337884: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337888: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033788C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80337890: nop

    // 0x80337894: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80337898: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8033789C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803378A0: beq         $s0, $at, L_803378BC
    if (ctx->r16 == ctx->r1) {
        // 0x803378A4: nop
    
            goto L_803378BC;
    }
    // 0x803378A4: nop

    // 0x803378A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803378AC: beq         $s0, $at, L_803378CC
    if (ctx->r16 == ctx->r1) {
        // 0x803378B0: nop
    
            goto L_803378CC;
    }
    // 0x803378B0: nop

    // 0x803378B4: b           L_803378DC
    // 0x803378B8: nop

        goto L_803378DC;
    // 0x803378B8: nop

L_803378BC:
    // 0x803378BC: jal         0x803373B8
    // 0x803378C0: nop

    func_803373B8_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x803378C0: nop

    after_0:
    // 0x803378C4: b           L_803378EC
    // 0x803378C8: nop

        goto L_803378EC;
    // 0x803378C8: nop

L_803378CC:
    // 0x803378CC: jal         0x8033781C
    // 0x803378D0: nop

    func_8033781C_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x803378D0: nop

    after_1:
    // 0x803378D4: b           L_803378EC
    // 0x803378D8: nop

        goto L_803378EC;
    // 0x803378D8: nop

L_803378DC:
    // 0x803378DC: jal         0x8033782C
    // 0x803378E0: nop

    func_8033782C_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x803378E0: nop

    after_2:
    // 0x803378E4: b           L_803378EC
    // 0x803378E8: nop

        goto L_803378EC;
    // 0x803378E8: nop

L_803378EC:
    // 0x803378EC: b           L_803378F4
    // 0x803378F0: nop

        goto L_803378F4;
    // 0x803378F0: nop

L_803378F4:
    // 0x803378F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803378F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803378FC: jr          $ra
    // 0x80337900: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80337900: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803316C4_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316C4: jr          $ra
    // 0x803316C8: nop

    return;
    // 0x803316C8: nop

    // 0x803316CC: jr          $ra
    // 0x803316D0: nop

    return;
    // 0x803316D0: nop

;}
RECOMP_FUNC void func_80335518_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335518: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033551C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80335520: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80335524: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80335528: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033552C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335530: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335534: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335538: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033553C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335540: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335544: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335548: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033554C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335550: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80335554: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335558: nop

    // 0x8033555C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335560: nop

    // 0x80335564: bne         $t1, $zero, L_803355EC
    if (ctx->r9 != 0) {
        // 0x80335568: nop
    
            goto L_803355EC;
    }
    // 0x80335568: nop

    // 0x8033556C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335570: nop

    // 0x80335574: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335578: nop

    // 0x8033557C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335580: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335584: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335588: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033558C: nop

    // 0x80335590: swc1        $f4, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f4.u32l;
    // 0x80335594: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80335598: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033559C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803355A0: nop

    // 0x803355A4: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
    // 0x803355A8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803355AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803355B0: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x803355B4: nop

    // 0x803355B8: bne         $t8, $at, L_803355D0
    if (ctx->r24 != ctx->r1) {
        // 0x803355BC: nop
    
            goto L_803355D0;
    }
    // 0x803355BC: nop

    // 0x803355C0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803355C4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x803355C8: b           L_803355DC
    // 0x803355CC: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
        goto L_803355DC;
    // 0x803355CC: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
L_803355D0:
    // 0x803355D0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803355D4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803355D8: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
L_803355DC:
    // 0x803355DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803355E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803355E4: jal         0x8001BBDC
    // 0x803355E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x803355E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_803355EC:
    // 0x803355EC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803355F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803355F4: lwc1        $f8, 0x20($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X20);
    // 0x803355F8: nop

    // 0x803355FC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80335600: nop

    // 0x80335604: bc1t        L_80335634
    if (c1cs) {
        // 0x80335608: nop
    
            goto L_80335634;
    }
    // 0x80335608: nop

    // 0x8033560C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335610: nop

    // 0x80335614: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x80335618: lwc1        $f12, 0x20($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X20);
    // 0x8033561C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80335620: jal         0x80015538
    // 0x80335624: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80335624: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_1:
    // 0x80335628: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033562C: b           L_8033565C
    // 0x80335630: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
        goto L_8033565C;
    // 0x80335630: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
L_80335634:
    // 0x80335634: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335638: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033563C: nop

    // 0x80335640: swc1        $f18, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f18.u32l;
    // 0x80335644: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335648: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8033564C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335650: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335654: nop

    // 0x80335658: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033565C:
    // 0x8033565C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335660: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335664: jal         0x80029C40
    // 0x80335668: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80335668: nop

    after_2:
    // 0x8033566C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335670: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033567C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335680: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80335684: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335688: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033568C: jal         0x80029018
    // 0x80335690: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80335690: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80335694: beq         $v0, $zero, L_803356FC
    if (ctx->r2 == 0) {
        // 0x80335698: nop
    
            goto L_803356FC;
    }
    // 0x80335698: nop

    // 0x8033569C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x803356A0: lh          $t1, 0x51A0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X51A0);
    // 0x803356A4: nop

    // 0x803356A8: andi        $t3, $t1, 0x80
    ctx->r11 = ctx->r9 & 0X80;
    // 0x803356AC: beq         $t3, $zero, L_803356CC
    if (ctx->r11 == 0) {
        // 0x803356B0: nop
    
            goto L_803356CC;
    }
    // 0x803356B0: nop

    // 0x803356B4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803356B8: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x803356BC: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x803356C0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803356C4: b           L_803356FC
    // 0x803356C8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_803356FC;
    // 0x803356C8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803356CC:
    // 0x803356CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803356D0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803356D4: nop

    // 0x803356D8: swc1        $f8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f8.u32l;
    // 0x803356DC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803356E0: nop

    // 0x803356E4: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x803356E8: nop

    // 0x803356EC: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x803356F0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803356F4: nop

    // 0x803356F8: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
L_803356FC:
    // 0x803356FC: b           L_80335704
    // 0x80335700: nop

        goto L_80335704;
    // 0x80335700: nop

L_80335704:
    // 0x80335704: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80335708: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033570C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80335710: jr          $ra
    // 0x80335714: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80335714: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80334AA0_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334AA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334AA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334AA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334AAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334AB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334AB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334AB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334ABC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334AC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334AC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334AC8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334ACC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334AD0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334AD4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334AD8: nop

    // 0x80334ADC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334AE0: nop

    // 0x80334AE4: bne         $t1, $zero, L_80334B64
    if (ctx->r9 != 0) {
        // 0x80334AE8: nop
    
            goto L_80334B64;
    }
    // 0x80334AE8: nop

    // 0x80334AEC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334AF0: nop

    // 0x80334AF4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334AF8: nop

    // 0x80334AFC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334B00: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334B04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80334B08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334B0C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334B10: nop

    // 0x80334B14: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80334B18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334B1C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334B20: nop

    // 0x80334B24: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x80334B28: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334B2C: nop

    // 0x80334B30: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x80334B34: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334B38: nop

    // 0x80334B3C: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x80334B40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B44: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80334B48: addiu       $t9, $t9, -0x7D34
    ctx->r25 = ADD32(ctx->r25, -0X7D34);
    // 0x80334B4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B50: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80334B54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334B58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334B5C: jal         0x8001C0EC
    // 0x80334B60: addiu       $a3, $zero, 0x8A
    ctx->r7 = ADD32(0, 0X8A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334B60: addiu       $a3, $zero, 0x8A
    ctx->r7 = ADD32(0, 0X8A);
    after_0:
L_80334B64:
    // 0x80334B64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334B68: nop

    // 0x80334B6C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80334B70: nop

    // 0x80334B74: bne         $t1, $zero, L_80334BA0
    if (ctx->r9 != 0) {
        // 0x80334B78: nop
    
            goto L_80334BA0;
    }
    // 0x80334B78: nop

    // 0x80334B7C: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80334B80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334B84: nop

    // 0x80334B88: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80334B8C: nop

    // 0x80334B90: bc1f        L_80334BA0
    if (!c1cs) {
        // 0x80334B94: nop
    
            goto L_80334BA0;
    }
    // 0x80334B94: nop

    // 0x80334B98: b           L_80334CDC
    // 0x80334B9C: nop

        goto L_80334CDC;
    // 0x80334B9C: nop

L_80334BA0:
    // 0x80334BA0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334BA4: nop

    // 0x80334BA8: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80334BAC: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80334BB0: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x80334BB4: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80334BB8: jal         0x80015538
    // 0x80334BBC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80334BBC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_1:
    // 0x80334BC0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334BC4: nop

    // 0x80334BC8: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x80334BCC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334BD0: nop

    // 0x80334BD4: lwc1        $f18, 0x1C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80334BD8: nop

    // 0x80334BDC: swc1        $f18, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f18.u32l;
    // 0x80334BE0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334BE4: nop

    // 0x80334BE8: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80334BEC: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80334BF0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80334BF4: nop

    // 0x80334BF8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334BFC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80334C00: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80334C04: nop

    // 0x80334C08: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80334C0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80334C10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80334C14: nop

    // 0x80334C18: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80334C1C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80334C20: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80334C24: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80334C28: nop

    // 0x80334C2C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80334C30: nop

    // 0x80334C34: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80334C38: beq         $at, $zero, L_80334CDC
    if (ctx->r1 == 0) {
        // 0x80334C3C: nop
    
            goto L_80334CDC;
    }
    // 0x80334C3C: nop

    // 0x80334C40: slti        $at, $t0, -0x2
    ctx->r1 = SIGNED(ctx->r8) < -0X2 ? 1 : 0;
    // 0x80334C44: bne         $at, $zero, L_80334CDC
    if (ctx->r1 != 0) {
        // 0x80334C48: nop
    
            goto L_80334CDC;
    }
    // 0x80334C48: nop

    // 0x80334C4C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334C50: nop

    // 0x80334C54: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80334C58: nop

    // 0x80334C5C: beq         $t4, $zero, L_80334CAC
    if (ctx->r12 == 0) {
        // 0x80334C60: nop
    
            goto L_80334CAC;
    }
    // 0x80334C60: nop

    // 0x80334C64: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334C68: nop

    // 0x80334C6C: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x80334C70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334C74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334C78: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x80334C7C: nop

    // 0x80334C80: bne         $t6, $at, L_80334C98
    if (ctx->r14 != ctx->r1) {
        // 0x80334C84: nop
    
            goto L_80334C98;
    }
    // 0x80334C84: nop

    // 0x80334C88: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334C8C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80334C90: b           L_80334CA4
    // 0x80334C94: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
        goto L_80334CA4;
    // 0x80334C94: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
L_80334C98:
    // 0x80334C98: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334C9C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80334CA0: sh          $t9, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r25;
L_80334CA4:
    // 0x80334CA4: b           L_80334CDC
    // 0x80334CA8: nop

        goto L_80334CDC;
    // 0x80334CA8: nop

L_80334CAC:
    // 0x80334CAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334CB0: nop

    // 0x80334CB4: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x80334CB8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334CBC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334CC0: nop

    // 0x80334CC4: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x80334CC8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334CCC: nop

    // 0x80334CD0: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80334CD4: nop

    // 0x80334CD8: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
L_80334CDC:
    // 0x80334CDC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334CE0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334CE4: nop

    // 0x80334CE8: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
    // 0x80334CEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334CF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334CF4: jal         0x80029C40
    // 0x80334CF8: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80334CF8: nop

    after_2:
    // 0x80334CFC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334D00: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334D04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334D08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334D0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80334D10: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80334D14: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334D18: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334D1C: jal         0x80029018
    // 0x80334D20: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80334D20: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80334D24: beq         $v0, $zero, L_80334E1C
    if (ctx->r2 == 0) {
        // 0x80334D28: nop
    
            goto L_80334E1C;
    }
    // 0x80334D28: nop

    // 0x80334D2C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80334D30: lh          $t5, 0x51A0($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X51A0);
    // 0x80334D34: nop

    // 0x80334D38: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x80334D3C: beq         $t6, $zero, L_80334D5C
    if (ctx->r14 == 0) {
        // 0x80334D40: nop
    
            goto L_80334D5C;
    }
    // 0x80334D40: nop

    // 0x80334D44: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334D48: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80334D4C: sh          $t8, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r24;
    // 0x80334D50: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334D54: nop

    // 0x80334D58: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80334D5C:
    // 0x80334D5C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334D60: nop

    // 0x80334D64: lh          $t0, 0xA6($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XA6);
    // 0x80334D68: nop

    // 0x80334D6C: bne         $t0, $zero, L_80334E1C
    if (ctx->r8 != 0) {
        // 0x80334D70: nop
    
            goto L_80334E1C;
    }
    // 0x80334D70: nop

    // 0x80334D74: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80334D78: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334D7C: nop

    // 0x80334D80: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80334D84: nop

    // 0x80334D88: bc1f        L_80334E1C
    if (!c1cs) {
        // 0x80334D8C: nop
    
            goto L_80334E1C;
    }
    // 0x80334D8C: nop

    // 0x80334D90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334D94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334D98: jal         0x8002A46C
    // 0x80334D9C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x80334D9C: nop

    after_4:
    // 0x80334DA0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80334DA4: nop

    // 0x80334DA8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80334DAC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80334DB0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80334DB4: nop

    // 0x80334DB8: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80334DBC: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80334DC0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80334DC4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80334DC8: nop

    // 0x80334DCC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80334DD0: nop

    // 0x80334DD4: bltz        $t2, L_80334E04
    if (SIGNED(ctx->r10) < 0) {
        // 0x80334DD8: nop
    
            goto L_80334E04;
    }
    // 0x80334DD8: nop

    // 0x80334DDC: slti        $at, $t2, 0xB4
    ctx->r1 = SIGNED(ctx->r10) < 0XB4 ? 1 : 0;
    // 0x80334DE0: beq         $at, $zero, L_80334E04
    if (ctx->r1 == 0) {
        // 0x80334DE4: nop
    
            goto L_80334E04;
    }
    // 0x80334DE4: nop

    // 0x80334DE8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334DEC: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x80334DF0: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80334DF4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334DF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80334DFC: b           L_80334E1C
    // 0x80334E00: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
        goto L_80334E1C;
    // 0x80334E00: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
L_80334E04:
    // 0x80334E04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334E08: addiu       $t9, $zero, 0x10E
    ctx->r25 = ADD32(0, 0X10E);
    // 0x80334E0C: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x80334E10: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334E14: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80334E18: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
L_80334E1C:
    // 0x80334E1C: b           L_80334E24
    // 0x80334E20: nop

        goto L_80334E24;
    // 0x80334E20: nop

L_80334E24:
    // 0x80334E24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334E2C: jr          $ra
    // 0x80334E30: nop

    return;
    // 0x80334E30: nop

;}
