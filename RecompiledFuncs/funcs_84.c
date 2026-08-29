#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80332C60_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80332C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332C68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C70: jal         0x8002B0E4
    // 0x80332C74: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80332C74: nop

    after_0:
    // 0x80332C78: b           L_80332C80
    // 0x80332C7C: nop

        goto L_80332C80;
    // 0x80332C7C: nop

L_80332C80:
    // 0x80332C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80332C88: jr          $ra
    // 0x80332C8C: nop

    return;
    // 0x80332C8C: nop

;}
RECOMP_FUNC void func_803369E0_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803369E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803369E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803369E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803369EC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x803369F0: nop

    // 0x803369F4: bne         $t6, $zero, L_80336A0C
    if (ctx->r14 != 0) {
        // 0x803369F8: nop
    
            goto L_80336A0C;
    }
    // 0x803369F8: nop

    // 0x803369FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336A00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336A04: jal         0x8002B0E4
    // 0x80336A08: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80336A08: nop

    after_0:
L_80336A0C:
    // 0x80336A0C: b           L_80336A14
    // 0x80336A10: nop

        goto L_80336A14;
    // 0x80336A10: nop

L_80336A14:
    // 0x80336A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80336A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80336A1C: jr          $ra
    // 0x80336A20: nop

    return;
    // 0x80336A20: nop

;}
RECOMP_FUNC void func_803373B8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803373B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803373BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803373C0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x803373C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x803373C8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803373CC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803373D0: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x803373D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x803373D8: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x803373DC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803373E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803373E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803373E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803373EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803373F0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803373F4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803373F8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x803373FC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80337400: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337404: nop

    // 0x80337408: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x8033740C: nop

    // 0x80337410: bne         $t2, $zero, L_803374C8
    if (ctx->r10 != 0) {
        // 0x80337414: nop
    
            goto L_803374C8;
    }
    // 0x80337414: nop

    // 0x80337418: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033741C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80337420: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x80337424: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80337428: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033742C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337430: nop

    // 0x80337434: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80337438: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033743C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337440: nop

    // 0x80337444: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x80337448: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033744C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337450: jal         0x8002A560
    // 0x80337454: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8002A560(rdram, ctx);
        goto after_0;
    // 0x80337454: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x80337458: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8033745C: nop

    // 0x80337460: sh          $v0, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r2;
    // 0x80337464: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80337468: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033746C: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x80337470: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80337474: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80337478: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033747C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337480: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80337484: jal         0x80015538
    // 0x80337488: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80337488: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_1:
    // 0x8033748C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337490: nop

    // 0x80337494: swc1        $f0, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f0.u32l;
    // 0x80337498: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033749C: nop

    // 0x803374A0: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x803374A4: nop

    // 0x803374A8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803374AC: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x803374B0: sh          $t4, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r12;
    // 0x803374B4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x803374B8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803374BC: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x803374C0: nop

    // 0x803374C4: swc1        $f10, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = ctx->f10.u32l;
L_803374C8:
    // 0x803374C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374D0: jal         0x80029C40
    // 0x803374D4: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x803374D4: nop

    after_2:
    // 0x803374D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374E0: jal         0x80029D04
    // 0x803374E4: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x803374E4: nop

    after_3:
    // 0x803374E8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803374EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803374F0: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x803374F4: nop

    // 0x803374F8: bne         $t8, $at, L_80337720
    if (ctx->r24 != ctx->r1) {
        // 0x803374FC: nop
    
            goto L_80337720;
    }
    // 0x803374FC: nop

    // 0x80337500: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337504: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80337508: lwc1        $f18, 0x79E8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X79E8);
    // 0x8033750C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80337510: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80337514: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80337518: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033751C: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80337520: nop

    // 0x80337524: bc1f        L_80337720
    if (!c1cs) {
        // 0x80337528: nop
    
            goto L_80337720;
    }
    // 0x80337528: nop

    // 0x8033752C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337530: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80337534: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x80337538: nop

    // 0x8033753C: bne         $t3, $at, L_8033758C
    if (ctx->r11 != ctx->r1) {
        // 0x80337540: nop
    
            goto L_8033758C;
    }
    // 0x80337540: nop

    // 0x80337544: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033754C: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x80337550: lw          $a2, 0xD4($t4)
    ctx->r6 = MEM_W(ctx->r12, 0XD4);
    // 0x80337554: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80337558: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8033755C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80337560: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80337564: jal         0x800BFFCC
    // 0x80337568: nop

    func_800BFFCC(rdram, ctx);
        goto after_4;
    // 0x80337568: nop

    after_4:
    // 0x8033756C: sb          $v0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r2;
    // 0x80337570: lb          $t5, 0x37($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X37);
    // 0x80337574: nop

    // 0x80337578: bne         $t5, $zero, L_8033758C
    if (ctx->r13 != 0) {
        // 0x8033757C: nop
    
            goto L_8033758C;
    }
    // 0x8033757C: nop

    // 0x80337580: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337584: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80337588: sb          $t6, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r14;
L_8033758C:
    // 0x8033758C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337590: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337594: jal         0x80028FA0
    // 0x80337598: nop

    func_80028FA0(rdram, ctx);
        goto after_5;
    // 0x80337598: nop

    after_5:
    // 0x8033759C: sb          $v0, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r2;
    // 0x803375A0: lb          $t8, 0x36($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X36);
    // 0x803375A4: nop

    // 0x803375A8: beq         $t8, $zero, L_803375C0
    if (ctx->r24 == 0) {
        // 0x803375AC: nop
    
            goto L_803375C0;
    }
    // 0x803375AC: nop

    // 0x803375B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803375B4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803375B8: nop

    // 0x803375BC: swc1        $f10, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f10.u32l;
L_803375C0:
    // 0x803375C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803375C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803375C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803375CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803375D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803375D4: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x803375D8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803375DC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803375E0: jal         0x80029018
    // 0x803375E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x803375E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x803375E8: beq         $v0, $zero, L_8033761C
    if (ctx->r2 == 0) {
        // 0x803375EC: nop
    
            goto L_8033761C;
    }
    // 0x803375EC: nop

    // 0x803375F0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803375F4: sb          $t0, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r8;
    // 0x803375F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803375FC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337600: nop

    // 0x80337604: swc1        $f4, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f4.u32l;
    // 0x80337608: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8033760C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80337610: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337614: nop

    // 0x80337618: swc1        $f6, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f6.u32l;
L_8033761C:
    // 0x8033761C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337620: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80337624: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80337628: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033762C: lwc1        $f18, 0xD8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XD8);
    // 0x80337630: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80337634: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80337638: nop

    // 0x8033763C: bc1f        L_80337664
    if (!c1cs) {
        // 0x80337640: nop
    
            goto L_80337664;
    }
    // 0x80337640: nop

    // 0x80337644: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80337648: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033764C: nop

    // 0x80337650: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80337654: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x80337658: nop

    // 0x8033765C: bc1t        L_80337674
    if (c1cs) {
        // 0x80337660: nop
    
            goto L_80337674;
    }
    // 0x80337660: nop

L_80337664:
    // 0x80337664: lb          $t2, 0x36($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X36);
    // 0x80337668: nop

    // 0x8033766C: beq         $t2, $zero, L_80337720
    if (ctx->r10 == 0) {
        // 0x80337670: nop
    
            goto L_80337720;
    }
    // 0x80337670: nop

L_80337674:
    // 0x80337674: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337678: nop

    // 0x8033767C: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
    // 0x80337680: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337684: nop

    // 0x80337688: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x8033768C: nop

    // 0x80337690: blez        $t7, L_803376A0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80337694: nop
    
            goto L_803376A0;
    }
    // 0x80337694: nop

    // 0x80337698: b           L_803376C8
    // 0x8033769C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_803376C8;
    // 0x8033769C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_803376A0:
    // 0x803376A0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803376A4: nop

    // 0x803376A8: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x803376AC: nop

    // 0x803376B0: bne         $t9, $zero, L_803376C0
    if (ctx->r25 != 0) {
        // 0x803376B4: nop
    
            goto L_803376C0;
    }
    // 0x803376B4: nop

    // 0x803376B8: b           L_803376C4
    // 0x803376BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_803376C4;
    // 0x803376BC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803376C0:
    // 0x803376C0: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_803376C4:
    // 0x803376C4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_803376C8:
    // 0x803376C8: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x803376CC: addu        $t0, $t0, $s0
    ctx->r8 = ADD32(ctx->r8, ctx->r16);
    // 0x803376D0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803376D4: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x803376D8: negu        $t1, $t0
    ctx->r9 = SUB32(0, ctx->r8);
    // 0x803376DC: sh          $t1, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r9;
    // 0x803376E0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803376E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803376E8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803376EC: nop

    // 0x803376F0: swc1        $f10, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f10.u32l;
    // 0x803376F4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803376F8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803376FC: nop

    // 0x80337700: swc1        $f16, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f16.u32l;
    // 0x80337704: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337708: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8033770C: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x80337710: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80337714: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337718: nop

    // 0x8033771C: swc1        $f8, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f8.u32l;
L_80337720:
    // 0x80337720: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80337724: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80337728: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033772C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337730: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80337734: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x80337738: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033773C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80337740: jal         0x80029018
    // 0x80337744: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x80337744: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x80337748: beq         $v0, $zero, L_80337768
    if (ctx->r2 == 0) {
        // 0x8033774C: nop
    
            goto L_80337768;
    }
    // 0x8033774C: nop

    // 0x80337750: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337754: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337758: jal         0x8002B0E4
    // 0x8033775C: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x8033775C: nop

    after_8:
    // 0x80337760: b           L_80337808
    // 0x80337764: nop

        goto L_80337808;
    // 0x80337764: nop

L_80337768:
    // 0x80337768: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033776C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80337770: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80337774: nop

    // 0x80337778: bne         $t9, $at, L_803377C8
    if (ctx->r25 != ctx->r1) {
        // 0x8033777C: nop
    
            goto L_803377C8;
    }
    // 0x8033777C: nop

    // 0x80337780: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337788: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x8033778C: lw          $a2, 0xD4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XD4);
    // 0x80337790: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80337794: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80337798: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8033779C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x803377A0: jal         0x800BFFCC
    // 0x803377A4: nop

    func_800BFFCC(rdram, ctx);
        goto after_9;
    // 0x803377A4: nop

    after_9:
    // 0x803377A8: sb          $v0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r2;
    // 0x803377AC: lb          $t3, 0x37($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X37);
    // 0x803377B0: nop

    // 0x803377B4: bne         $t3, $zero, L_803377C8
    if (ctx->r11 != 0) {
        // 0x803377B8: nop
    
            goto L_803377C8;
    }
    // 0x803377B8: nop

    // 0x803377BC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803377C0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803377C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
L_803377C8:
    // 0x803377C8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803377CC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x803377D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803377D4: lwc1        $f12, 0x20($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X20);
    // 0x803377D8: jal         0x80015538
    // 0x803377DC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x803377DC: nop

    after_10:
    // 0x803377E0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803377E4: nop

    // 0x803377E8: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
    // 0x803377EC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803377F0: nop

    // 0x803377F4: lwc1        $f10, 0x3C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x803377F8: nop

    // 0x803377FC: swc1        $f10, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f10.u32l;
    // 0x80337800: b           L_80337808
    // 0x80337804: nop

        goto L_80337808;
    // 0x80337804: nop

L_80337808:
    // 0x80337808: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033780C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80337810: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80337814: jr          $ra
    // 0x80337818: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80337818: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80331A0C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A0C: jr          $ra
    // 0x80331A10: nop

    return;
    // 0x80331A10: nop

    // 0x80331A14: jr          $ra
    // 0x80331A18: nop

    return;
    // 0x80331A18: nop

;}
RECOMP_FUNC void func_80337130_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337130: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337138: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033713C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337140: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337144: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337148: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033714C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337150: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337154: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337158: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033715C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337160: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337164: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337168: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033716C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80337170: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80337174: nop

    // 0x80337178: beq         $s0, $at, L_80337194
    if (ctx->r16 == ctx->r1) {
        // 0x8033717C: nop
    
            goto L_80337194;
    }
    // 0x8033717C: nop

    // 0x80337180: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80337184: beq         $s0, $at, L_803371A4
    if (ctx->r16 == ctx->r1) {
        // 0x80337188: nop
    
            goto L_803371A4;
    }
    // 0x80337188: nop

    // 0x8033718C: b           L_803371B4
    // 0x80337190: nop

        goto L_803371B4;
    // 0x80337190: nop

L_80337194:
    // 0x80337194: jal         0x80336A24
    // 0x80337198: nop

    func_80336A24_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80337198: nop

    after_0:
    // 0x8033719C: b           L_803371B4
    // 0x803371A0: nop

        goto L_803371B4;
    // 0x803371A0: nop

L_803371A4:
    // 0x803371A4: jal         0x80336DF4
    // 0x803371A8: nop

    func_80336DF4_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x803371A8: nop

    after_1:
    // 0x803371AC: b           L_803371B4
    // 0x803371B0: nop

        goto L_803371B4;
    // 0x803371B0: nop

L_803371B4:
    // 0x803371B4: b           L_803371BC
    // 0x803371B8: nop

        goto L_803371BC;
    // 0x803371B8: nop

L_803371BC:
    // 0x803371BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803371C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803371C4: jr          $ra
    // 0x803371C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803371C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80336270_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336270: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80336274: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336278: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033627C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80336280: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80336284: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80336288: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033628C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80336290: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80336294: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80336298: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033629C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803362A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803362A4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x803362A8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803362AC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803362B0: addiu       $a1, $a1, 0x460C
    ctx->r5 = ADD32(ctx->r5, 0X460C);
    // 0x803362B4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803362B8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803362BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803362C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803362C4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803362C8: jal         0x80027464
    // 0x803362CC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803362CC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803362D0: b           L_803362D8
    // 0x803362D4: nop

        goto L_803362D8;
    // 0x803362D4: nop

L_803362D8:
    // 0x803362D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803362DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803362E0: jr          $ra
    // 0x803362E4: nop

    return;
    // 0x803362E4: nop

;}
RECOMP_FUNC void func_80335054_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335054: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335058: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8033505C: nop

    // 0x80335060: bne         $t6, $zero, L_803350BC
    if (ctx->r14 != 0) {
        // 0x80335064: nop
    
            goto L_803350BC;
    }
    // 0x80335064: nop

    // 0x80335068: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033506C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80335070: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335074: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80335078: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033507C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335080: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335084: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335088: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033508C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80335090: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80335094: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80335098: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033509C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803350A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803350A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803350A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803350AC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803350B0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803350B4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x803350B8: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_803350BC:
    // 0x803350BC: jr          $ra
    // 0x803350C0: nop

    return;
    // 0x803350C0: nop

    // 0x803350C4: jr          $ra
    // 0x803350C8: nop

    return;
    // 0x803350C8: nop

;}
RECOMP_FUNC void func_80333340_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333340: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333344: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333348: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033334C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333350: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333354: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333358: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033335C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333360: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333364: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333368: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033336C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333370: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x80333374: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333378: bne         $t8, $at, L_803333F0
    if (ctx->r24 != ctx->r1) {
        // 0x8033337C: nop
    
            goto L_803333F0;
    }
    // 0x8033337C: nop

    // 0x80333380: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80333384: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80333388: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033338C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333390: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333394: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333398: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033339C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803333A0: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x803333A4: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x803333A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803333AC: beq         $s0, $at, L_803333C8
    if (ctx->r16 == ctx->r1) {
        // 0x803333B0: nop
    
            goto L_803333C8;
    }
    // 0x803333B0: nop

    // 0x803333B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803333B8: beq         $s0, $at, L_803333D8
    if (ctx->r16 == ctx->r1) {
        // 0x803333BC: nop
    
            goto L_803333D8;
    }
    // 0x803333BC: nop

    // 0x803333C0: b           L_803333E8
    // 0x803333C4: nop

        goto L_803333E8;
    // 0x803333C4: nop

L_803333C8:
    // 0x803333C8: jal         0x80332FE8
    // 0x803333CC: nop

    func_80332FE8_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x803333CC: nop

    after_0:
    // 0x803333D0: b           L_803333F0
    // 0x803333D4: nop

        goto L_803333F0;
    // 0x803333D4: nop

L_803333D8:
    // 0x803333D8: jal         0x80333310
    // 0x803333DC: nop

    func_80333310_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x803333DC: nop

    after_1:
    // 0x803333E0: b           L_803333F0
    // 0x803333E4: nop

        goto L_803333F0;
    // 0x803333E4: nop

L_803333E8:
    // 0x803333E8: b           L_803333F0
    // 0x803333EC: nop

        goto L_803333F0;
    // 0x803333EC: nop

L_803333F0:
    // 0x803333F0: b           L_803333F8
    // 0x803333F4: nop

        goto L_803333F8;
    // 0x803333F4: nop

L_803333F8:
    // 0x803333F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803333FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333400: jr          $ra
    // 0x80333404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80333404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80331F90_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F84: jr          $ra
    // 0x80331F88: nop

    return;
    // 0x80331F88: nop

    // 0x80331F8C: jr          $ra
    // 0x80331F90: nop

    return;
    // 0x80331F90: nop

;}
RECOMP_FUNC void func_803316D4_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803316D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803316DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803316E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803316E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803316E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803316EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803316F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803316FC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331700: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80331704: nop

    // 0x80331708: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8033170C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331710: nop

    // 0x80331714: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80331718: sltiu       $at, $t0, 0x8
    ctx->r1 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x8033171C: beq         $at, $zero, L_803317C0
    if (ctx->r1 == 0) {
        // 0x80331720: nop
    
            goto L_803317C0;
    }
    // 0x80331720: nop

    // 0x80331724: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331728: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033172C: addu        $at, $at, $t0
    gpr jr_addend_80331738 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331730: lw          $t0, 0x7910($at)
    ctx->r8 = ADD32(ctx->r1, 0X7910);
    // 0x80331734: nop

    // 0x80331738: jr          $t0
    // 0x8033173C: nop

    switch (jr_addend_80331738 >> 2) {
        case 0: goto L_80331750; break;
        case 1: goto L_80331760; break;
        case 2: goto L_80331770; break;
        case 3: goto L_80331780; break;
        case 4: goto L_803317A0; break;
        case 5: goto L_80331790; break;
        case 6: goto L_803317B0; break;
        case 7: goto L_80331740; break;
        default: switch_error(__func__, 0x80331738, 0x80337910);
    }
    // 0x8033173C: nop

L_80331740:
    // 0x80331740: jal         0x80331064
    // 0x80331744: nop

    func_80331064_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80331744: nop

    after_0:
    // 0x80331748: b           L_803317C8
    // 0x8033174C: nop

        goto L_803317C8;
    // 0x8033174C: nop

L_80331750:
    // 0x80331750: jal         0x8033117C
    // 0x80331754: nop

    func_8033117C_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80331754: nop

    after_1:
    // 0x80331758: b           L_803317C8
    // 0x8033175C: nop

        goto L_803317C8;
    // 0x8033175C: nop

L_80331760:
    // 0x80331760: jal         0x8033131C
    // 0x80331764: nop

    func_8033131C_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x80331764: nop

    after_2:
    // 0x80331768: b           L_803317C8
    // 0x8033176C: nop

        goto L_803317C8;
    // 0x8033176C: nop

L_80331770:
    // 0x80331770: jal         0x8033145C
    // 0x80331774: nop

    func_8033145C_unk_bin_37(rdram, ctx);
        goto after_3;
    // 0x80331774: nop

    after_3:
    // 0x80331778: b           L_803317C8
    // 0x8033177C: nop

        goto L_803317C8;
    // 0x8033177C: nop

L_80331780:
    // 0x80331780: jal         0x803304D0
    // 0x80331784: nop

    func_803304D0_unk_bin_37(rdram, ctx);
        goto after_4;
    // 0x80331784: nop

    after_4:
    // 0x80331788: b           L_803317C8
    // 0x8033178C: nop

        goto L_803317C8;
    // 0x8033178C: nop

L_80331790:
    // 0x80331790: jal         0x803316B4
    // 0x80331794: nop

    func_803316B4_unk_bin_37(rdram, ctx);
        goto after_5;
    // 0x80331794: nop

    after_5:
    // 0x80331798: b           L_803317C8
    // 0x8033179C: nop

        goto L_803317C8;
    // 0x8033179C: nop

L_803317A0:
    // 0x803317A0: jal         0x80331684
    // 0x803317A4: nop

    func_80331684_unk_bin_37(rdram, ctx);
        goto after_6;
    // 0x803317A4: nop

    after_6:
    // 0x803317A8: b           L_803317C8
    // 0x803317AC: nop

        goto L_803317C8;
    // 0x803317AC: nop

L_803317B0:
    // 0x803317B0: jal         0x803316C4
    // 0x803317B4: nop

    func_803316C4_unk_bin_37(rdram, ctx);
        goto after_7;
    // 0x803317B4: nop

    after_7:
    // 0x803317B8: b           L_803317C8
    // 0x803317BC: nop

        goto L_803317C8;
    // 0x803317BC: nop

L_803317C0:
    // 0x803317C0: b           L_803317C8
    // 0x803317C4: nop

        goto L_803317C8;
    // 0x803317C4: nop

L_803317C8:
    // 0x803317C8: b           L_803317D0
    // 0x803317CC: nop

        goto L_803317D0;
    // 0x803317CC: nop

L_803317D0:
    // 0x803317D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803317D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803317D8: jr          $ra
    // 0x803317DC: nop

    return;
    // 0x803317DC: nop

;}
RECOMP_FUNC void stub_1D1720_803363F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803362E8: jr          $ra
    // 0x803362EC: nop

    return;
    // 0x803362EC: nop

    // 0x803362F0: jr          $ra
    // 0x803362F4: nop

    return;
    // 0x803362F4: nop

;}
RECOMP_FUNC void func_803318B8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803318AC: jr          $ra
    // 0x803318B0: nop

    return;
    // 0x803318B0: nop

    // 0x803318B4: jr          $ra
    // 0x803318B8: nop

    return;
    // 0x803318B8: nop

;}
RECOMP_FUNC void func_80336A24_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336A24: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80336A28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336A2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336A30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336A34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336A38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336A3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336A44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336A4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336A50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336A54: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80336A58: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80336A5C: nop

    // 0x80336A60: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336A64: nop

    // 0x80336A68: bne         $t1, $zero, L_80336AC4
    if (ctx->r9 != 0) {
        // 0x80336A6C: nop
    
            goto L_80336AC4;
    }
    // 0x80336A6C: nop

    // 0x80336A70: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80336A74: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80336A78: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80336A7C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80336A80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336A84: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80336A88: nop

    // 0x80336A8C: swc1        $f4, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f4.u32l;
    // 0x80336A90: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80336A94: nop

    // 0x80336A98: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x80336A9C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80336AA0: nop

    // 0x80336AA4: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x80336AA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336AAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336AB4: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80336AB8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80336ABC: jal         0x80017664
    // 0x80336AC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_0;
    // 0x80336AC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_80336AC4:
    // 0x80336AC4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80336AC8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80336ACC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336AD0: lwc1        $f12, 0x20($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X20);
    // 0x80336AD4: jal         0x80015538
    // 0x80336AD8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80336AD8: nop

    after_1:
    // 0x80336ADC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80336AE0: nop

    // 0x80336AE4: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
    // 0x80336AE8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80336AEC: nop

    // 0x80336AF0: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80336AF4: nop

    // 0x80336AF8: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80336AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336B04: jal         0x8002A8B4
    // 0x80336B08: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80336B08: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x80336B0C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80336B10: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80336B14: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80336B18: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336B1C: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80336B20: jal         0x80015538
    // 0x80336B24: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80336B24: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_3:
    // 0x80336B28: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80336B2C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80336B30: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80336B34: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80336B38: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80336B3C: nop

    // 0x80336B40: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80336B44: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80336B48: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80336B4C: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x80336B50: nop

    // 0x80336B54: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80336B58: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336B5C: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80336B60: lwc1        $f5, 0x79B0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X79B0);
    // 0x80336B64: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80336B68: lwc1        $f4, 0x79B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X79B4);
    // 0x80336B6C: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80336B70: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80336B74: jal         0x80034970
    // 0x80336B78: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x80336B78: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_4:
    // 0x80336B7C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80336B80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336B84: nop

    // 0x80336B88: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80336B8C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80336B90: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80336B94: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80336B98: jal         0x80015538
    // 0x80336B9C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80336B9C: nop

    after_5:
    // 0x80336BA0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80336BA4: nop

    // 0x80336BA8: swc1        $f0, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f0.u32l;
    // 0x80336BAC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80336BB0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80336BB4: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80336BB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336BBC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80336BC0: jal         0x80015538
    // 0x80336BC4: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80336BC4: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_6:
    // 0x80336BC8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80336BCC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80336BD0: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80336BD4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80336BD8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80336BDC: nop

    // 0x80336BE0: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80336BE4: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80336BE8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80336BEC: sh          $t1, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r9;
    // 0x80336BF0: nop

    // 0x80336BF4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80336BF8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336BFC: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80336C00: lwc1        $f9, 0x79B8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X79B8);
    // 0x80336C04: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80336C08: lwc1        $f8, 0x79BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X79BC);
    // 0x80336C0C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80336C10: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80336C14: jal         0x80034970
    // 0x80336C18: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x80336C18: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_7:
    // 0x80336C1C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80336C20: nop

    // 0x80336C24: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80336C28: nop

    // 0x80336C2C: bc1f        L_80336C68
    if (!c1cs) {
        // 0x80336C30: nop
    
            goto L_80336C68;
    }
    // 0x80336C30: nop

    // 0x80336C34: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80336C38: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336C3C: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x80336C40: lwc1        $f7, 0x79C0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X79C0);
    // 0x80336C44: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80336C48: lwc1        $f6, 0x79C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X79C4);
    // 0x80336C4C: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x80336C50: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80336C54: jal         0x80034970
    // 0x80336C58: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x80336C58: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_8:
    // 0x80336C5C: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x80336C60: b           L_80336C94
    // 0x80336C64: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
        goto L_80336C94;
    // 0x80336C64: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_80336C68:
    // 0x80336C68: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80336C6C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336C70: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x80336C74: lwc1        $f5, 0x79C8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X79C8);
    // 0x80336C78: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80336C7C: lwc1        $f4, 0x79CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X79CC);
    // 0x80336C80: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80336C84: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80336C88: jal         0x80034970
    // 0x80336C8C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_9;
    // 0x80336C8C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_9:
    // 0x80336C90: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_80336C94:
    // 0x80336C94: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80336C98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336C9C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80336CA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80336CA4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80336CA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80336CAC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80336CB0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80336CB4: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
    // 0x80336CB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336CBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336CC0: jal         0x80029C40
    // 0x80336CC4: nop

    func_80029C40(rdram, ctx);
        goto after_10;
    // 0x80336CC4: nop

    after_10:
    // 0x80336CC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336CCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336CD0: jal         0x80029D04
    // 0x80336CD4: nop

    func_80029D04(rdram, ctx);
        goto after_11;
    // 0x80336CD4: nop

    after_11:
    // 0x80336CD8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80336CDC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80336CE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336CE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336CE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336CEC: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80336CF0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80336CF4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80336CF8: jal         0x80029018
    // 0x80336CFC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_12;
    // 0x80336CFC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x80336D00: beq         $v0, $zero, L_80336D24
    if (ctx->r2 == 0) {
        // 0x80336D04: nop
    
            goto L_80336D24;
    }
    // 0x80336D04: nop

    // 0x80336D08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336D0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336D10: jal         0x8002A46C
    // 0x80336D14: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_13;
    // 0x80336D14: nop

    after_13:
    // 0x80336D18: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80336D1C: nop

    // 0x80336D20: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
L_80336D24:
    // 0x80336D24: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80336D28: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80336D2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80336D30: lwc1        $f10, 0x3C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80336D34: nop

    // 0x80336D38: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80336D3C: nop

    // 0x80336D40: bc1f        L_80336D74
    if (!c1cs) {
        // 0x80336D44: nop
    
            goto L_80336D74;
    }
    // 0x80336D44: nop

    // 0x80336D48: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80336D4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80336D50: nop

    // 0x80336D54: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x80336D58: nop

    // 0x80336D5C: bc1f        L_80336D74
    if (!c1cs) {
        // 0x80336D60: nop
    
            goto L_80336D74;
    }
    // 0x80336D60: nop

    // 0x80336D64: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80336D68: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80336D6C: nop

    // 0x80336D70: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
L_80336D74:
    // 0x80336D74: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80336D78: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80336D7C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80336D80: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80336D84: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80336D88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80336D8C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80336D90: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80336D94: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80336D98: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80336D9C: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x80336DA0: nop

    // 0x80336DA4: bc1f        L_80336DDC
    if (!c1cs) {
        // 0x80336DA8: nop
    
            goto L_80336DDC;
    }
    // 0x80336DA8: nop

    // 0x80336DAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336DB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336DB4: jal         0x8002B0E4
    // 0x80336DB8: nop

    func_8002B0E4(rdram, ctx);
        goto after_14;
    // 0x80336DB8: nop

    after_14:
    // 0x80336DBC: b           L_80336DE4
    // 0x80336DC0: nop

        goto L_80336DE4;
    // 0x80336DC0: nop

    // 0x80336DC4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80336DC8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80336DCC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80336DD0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80336DD4: nop

    // 0x80336DD8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80336DDC:
    // 0x80336DDC: b           L_80336DE4
    // 0x80336DE0: nop

        goto L_80336DE4;
    // 0x80336DE0: nop

L_80336DE4:
    // 0x80336DE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336DE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80336DEC: jr          $ra
    // 0x80336DF0: nop

    return;
    // 0x80336DF0: nop

;}
RECOMP_FUNC void func_80335AAC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80335AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335ABC: jal         0x8002B0E4
    // 0x80335AC0: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80335AC0: nop

    after_0:
    // 0x80335AC4: b           L_80335ACC
    // 0x80335AC8: nop

        goto L_80335ACC;
    // 0x80335AC8: nop

L_80335ACC:
    // 0x80335ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80335AD4: jr          $ra
    // 0x80335AD8: nop

    return;
    // 0x80335AD8: nop

;}
RECOMP_FUNC void func_803362F8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803362F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803362FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80336300: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336304: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336308: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033630C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336310: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336314: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336318: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033631C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336320: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336324: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336328: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033632C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80336330: nop

    // 0x80336334: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336338: nop

    // 0x8033633C: bne         $t1, $zero, L_80336350
    if (ctx->r9 != 0) {
        // 0x80336340: nop
    
            goto L_80336350;
    }
    // 0x80336340: nop

    // 0x80336344: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80336348: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033634C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_80336350:
    // 0x80336350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336354: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336358: jal         0x8002A1FC
    // 0x8033635C: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_0;
    // 0x8033635C: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_0:
    // 0x80336360: beq         $v0, $zero, L_80336380
    if (ctx->r2 == 0) {
        // 0x80336364: nop
    
            goto L_80336380;
    }
    // 0x80336364: nop

    // 0x80336368: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033636C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80336370: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80336374: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80336378: nop

    // 0x8033637C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80336380:
    // 0x80336380: b           L_80336388
    // 0x80336384: nop

        goto L_80336388;
    // 0x80336384: nop

L_80336388:
    // 0x80336388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033638C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80336390: jr          $ra
    // 0x80336394: nop

    return;
    // 0x80336394: nop

;}
RECOMP_FUNC void func_80335718_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335718: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033571C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335720: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335724: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335728: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033572C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335730: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335734: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335738: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033573C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335740: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335744: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335748: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033574C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335750: nop

    // 0x80335754: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335758: nop

    // 0x8033575C: bne         $t1, $zero, L_803357DC
    if (ctx->r9 != 0) {
        // 0x80335760: nop
    
            goto L_803357DC;
    }
    // 0x80335760: nop

    // 0x80335764: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335768: nop

    // 0x8033576C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335770: nop

    // 0x80335774: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335778: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033577C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80335780: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335784: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335788: nop

    // 0x8033578C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80335790: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335794: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335798: nop

    // 0x8033579C: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x803357A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803357A4: nop

    // 0x803357A8: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x803357AC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803357B0: nop

    // 0x803357B4: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x803357B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803357BC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803357C0: addiu       $t9, $t9, -0x7D34
    ctx->r25 = ADD32(ctx->r25, -0X7D34);
    // 0x803357C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803357C8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803357CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803357D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803357D4: jal         0x8001C0EC
    // 0x803357D8: addiu       $a3, $zero, 0x8A
    ctx->r7 = ADD32(0, 0X8A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803357D8: addiu       $a3, $zero, 0x8A
    ctx->r7 = ADD32(0, 0X8A);
    after_0:
L_803357DC:
    // 0x803357DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803357E0: nop

    // 0x803357E4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803357E8: nop

    // 0x803357EC: bne         $t1, $zero, L_80335818
    if (ctx->r9 != 0) {
        // 0x803357F0: nop
    
            goto L_80335818;
    }
    // 0x803357F0: nop

    // 0x803357F4: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x803357F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803357FC: nop

    // 0x80335800: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80335804: nop

    // 0x80335808: bc1f        L_80335818
    if (!c1cs) {
        // 0x8033580C: nop
    
            goto L_80335818;
    }
    // 0x8033580C: nop

    // 0x80335810: b           L_80335954
    // 0x80335814: nop

        goto L_80335954;
    // 0x80335814: nop

L_80335818:
    // 0x80335818: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033581C: nop

    // 0x80335820: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80335824: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80335828: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x8033582C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80335830: jal         0x80015538
    // 0x80335834: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80335834: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_1:
    // 0x80335838: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033583C: nop

    // 0x80335840: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x80335844: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335848: nop

    // 0x8033584C: lwc1        $f18, 0x1C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80335850: nop

    // 0x80335854: swc1        $f18, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f18.u32l;
    // 0x80335858: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033585C: nop

    // 0x80335860: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80335864: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80335868: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8033586C: nop

    // 0x80335870: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80335874: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80335878: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8033587C: nop

    // 0x80335880: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80335884: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80335888: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033588C: nop

    // 0x80335890: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80335894: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80335898: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8033589C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x803358A0: nop

    // 0x803358A4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803358A8: nop

    // 0x803358AC: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x803358B0: beq         $at, $zero, L_80335954
    if (ctx->r1 == 0) {
        // 0x803358B4: nop
    
            goto L_80335954;
    }
    // 0x803358B4: nop

    // 0x803358B8: slti        $at, $t0, -0x2
    ctx->r1 = SIGNED(ctx->r8) < -0X2 ? 1 : 0;
    // 0x803358BC: bne         $at, $zero, L_80335954
    if (ctx->r1 != 0) {
        // 0x803358C0: nop
    
            goto L_80335954;
    }
    // 0x803358C0: nop

    // 0x803358C4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803358C8: nop

    // 0x803358CC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x803358D0: nop

    // 0x803358D4: beq         $t4, $zero, L_80335924
    if (ctx->r12 == 0) {
        // 0x803358D8: nop
    
            goto L_80335924;
    }
    // 0x803358D8: nop

    // 0x803358DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803358E0: nop

    // 0x803358E4: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x803358E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803358EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803358F0: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x803358F4: nop

    // 0x803358F8: bne         $t6, $at, L_80335910
    if (ctx->r14 != ctx->r1) {
        // 0x803358FC: nop
    
            goto L_80335910;
    }
    // 0x803358FC: nop

    // 0x80335900: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335904: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80335908: b           L_8033591C
    // 0x8033590C: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
        goto L_8033591C;
    // 0x8033590C: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
L_80335910:
    // 0x80335910: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335914: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80335918: sh          $t9, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r25;
L_8033591C:
    // 0x8033591C: b           L_80335954
    // 0x80335920: nop

        goto L_80335954;
    // 0x80335920: nop

L_80335924:
    // 0x80335924: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335928: nop

    // 0x8033592C: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x80335930: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335934: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335938: nop

    // 0x8033593C: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x80335940: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335944: nop

    // 0x80335948: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033594C: nop

    // 0x80335950: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
L_80335954:
    // 0x80335954: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335958: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033595C: nop

    // 0x80335960: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
    // 0x80335964: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335968: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033596C: jal         0x80029C40
    // 0x80335970: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80335970: nop

    after_2:
    // 0x80335974: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335978: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033597C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335980: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335984: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335988: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8033598C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335990: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80335994: jal         0x80029018
    // 0x80335998: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80335998: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x8033599C: beq         $v0, $zero, L_80335A94
    if (ctx->r2 == 0) {
        // 0x803359A0: nop
    
            goto L_80335A94;
    }
    // 0x803359A0: nop

    // 0x803359A4: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x803359A8: lh          $t5, 0x51A0($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X51A0);
    // 0x803359AC: nop

    // 0x803359B0: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x803359B4: beq         $t6, $zero, L_803359D4
    if (ctx->r14 == 0) {
        // 0x803359B8: nop
    
            goto L_803359D4;
    }
    // 0x803359B8: nop

    // 0x803359BC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803359C0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803359C4: sh          $t8, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r24;
    // 0x803359C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803359CC: nop

    // 0x803359D0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803359D4:
    // 0x803359D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803359D8: nop

    // 0x803359DC: lh          $t0, 0xA6($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XA6);
    // 0x803359E0: nop

    // 0x803359E4: bne         $t0, $zero, L_80335A94
    if (ctx->r8 != 0) {
        // 0x803359E8: nop
    
            goto L_80335A94;
    }
    // 0x803359E8: nop

    // 0x803359EC: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803359F0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803359F4: nop

    // 0x803359F8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x803359FC: nop

    // 0x80335A00: bc1f        L_80335A94
    if (!c1cs) {
        // 0x80335A04: nop
    
            goto L_80335A94;
    }
    // 0x80335A04: nop

    // 0x80335A08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335A0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335A10: jal         0x8002A46C
    // 0x80335A14: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x80335A14: nop

    after_4:
    // 0x80335A18: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80335A1C: nop

    // 0x80335A20: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80335A24: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80335A28: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80335A2C: nop

    // 0x80335A30: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80335A34: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80335A38: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80335A3C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80335A40: nop

    // 0x80335A44: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80335A48: nop

    // 0x80335A4C: bltz        $t2, L_80335A7C
    if (SIGNED(ctx->r10) < 0) {
        // 0x80335A50: nop
    
            goto L_80335A7C;
    }
    // 0x80335A50: nop

    // 0x80335A54: slti        $at, $t2, 0xB4
    ctx->r1 = SIGNED(ctx->r10) < 0XB4 ? 1 : 0;
    // 0x80335A58: beq         $at, $zero, L_80335A7C
    if (ctx->r1 == 0) {
        // 0x80335A5C: nop
    
            goto L_80335A7C;
    }
    // 0x80335A5C: nop

    // 0x80335A60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335A64: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x80335A68: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80335A6C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335A70: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80335A74: b           L_80335A94
    // 0x80335A78: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
        goto L_80335A94;
    // 0x80335A78: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
L_80335A7C:
    // 0x80335A7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335A80: addiu       $t9, $zero, 0x10E
    ctx->r25 = ADD32(0, 0X10E);
    // 0x80335A84: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x80335A88: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335A8C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80335A90: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
L_80335A94:
    // 0x80335A94: b           L_80335A9C
    // 0x80335A98: nop

        goto L_80335A9C;
    // 0x80335A98: nop

L_80335A9C:
    // 0x80335A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335AA4: jr          $ra
    // 0x80335AA8: nop

    return;
    // 0x80335AA8: nop

;}
RECOMP_FUNC void func_8033011C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033011C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330124: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330128: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033012C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330130: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330134: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330138: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033013C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330140: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330144: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330148: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033014C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330150: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330154: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330158: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x8033015C: nop

    // 0x80330160: bne         $t1, $at, L_80330290
    if (ctx->r9 != ctx->r1) {
        // 0x80330164: nop
    
            goto L_80330290;
    }
    // 0x80330164: nop

    // 0x80330168: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033016C: nop

    // 0x80330170: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x80330174: nop

    // 0x80330178: sb          $t3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r11;
    // 0x8033017C: lb          $t4, 0x1B($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X1B);
    // 0x80330180: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330184: beq         $t4, $at, L_803301A4
    if (ctx->r12 == ctx->r1) {
        // 0x80330188: nop
    
            goto L_803301A4;
    }
    // 0x80330188: nop

    // 0x8033018C: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x80330190: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80330194: addiu       $a3, $a3, 0x7424
    ctx->r7 = ADD32(ctx->r7, 0X7424);
    // 0x80330198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033019C: jal         0x8001ABF4
    // 0x803301A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803301A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_803301A4:
    // 0x803301A4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803301A8: nop

    // 0x803301AC: lh          $t6, 0xEA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XEA);
    // 0x803301B0: nop

    // 0x803301B4: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
    // 0x803301B8: lb          $t7, 0x1B($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X1B);
    // 0x803301BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803301C0: beq         $t7, $at, L_803301E0
    if (ctx->r15 == ctx->r1) {
        // 0x803301C4: nop
    
            goto L_803301E0;
    }
    // 0x803301C4: nop

    // 0x803301C8: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x803301CC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803301D0: addiu       $a3, $a3, 0x7424
    ctx->r7 = ADD32(ctx->r7, 0X7424);
    // 0x803301D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803301D8: jal         0x8001ABF4
    // 0x803301DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803301DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_803301E0:
    // 0x803301E0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803301E4: nop

    // 0x803301E8: lh          $t9, 0xEC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XEC);
    // 0x803301EC: nop

    // 0x803301F0: sb          $t9, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r25;
    // 0x803301F4: lb          $t0, 0x1B($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X1B);
    // 0x803301F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803301FC: beq         $t0, $at, L_80330284
    if (ctx->r8 == ctx->r1) {
        // 0x80330200: nop
    
            goto L_80330284;
    }
    // 0x80330200: nop

    // 0x80330204: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330208: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033020C: jal         0x800281A4
    // 0x80330210: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x80330210: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80330214: lb          $t2, 0x1B($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X1B);
    // 0x80330218: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033021C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330220: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330224: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330228: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033022C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330230: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330234: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80330238: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x8033023C: lb          $t4, 0x1B($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X1B);
    // 0x80330240: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330244: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330248: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033024C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330250: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330254: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330258: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033025C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330260: lb          $t6, 0x1B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1B);
    // 0x80330264: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330268: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033026C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330270: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330274: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330278: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033027C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330280: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80330284:
    // 0x80330284: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330288: addiu       $t8, $zero, -0x2
    ctx->r24 = ADD32(0, -0X2);
    // 0x8033028C: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
L_80330290:
    // 0x80330290: b           L_80330298
    // 0x80330294: nop

        goto L_80330298;
    // 0x80330294: nop

L_80330298:
    // 0x80330298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033029C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803302A0: jr          $ra
    // 0x803302A4: nop

    return;
    // 0x803302A4: nop

;}
RECOMP_FUNC void func_80334248_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334248: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8033424C: b           L_80334254
    // 0x80334250: nop

        goto L_80334254;
    // 0x80334250: nop

L_80334254:
    // 0x80334254: jr          $ra
    // 0x80334258: nop

    return;
    // 0x80334258: nop

;}
RECOMP_FUNC void func_80337358_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033735C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337360: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337364: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80337368: nop

    // 0x8033736C: beq         $t6, $zero, L_80337388
    if (ctx->r14 == 0) {
        // 0x80337370: nop
    
            goto L_80337388;
    }
    // 0x80337370: nop

    // 0x80337374: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80337378: beq         $t6, $at, L_80337388
    if (ctx->r14 == ctx->r1) {
        // 0x8033737C: nop
    
            goto L_80337388;
    }
    // 0x8033737C: nop

    // 0x80337380: b           L_803373A8
    // 0x80337384: nop

        goto L_803373A8;
    // 0x80337384: nop

L_80337388:
    // 0x80337388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033738C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337390: jal         0x8002B0E4
    // 0x80337394: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80337394: nop

    after_0:
    // 0x80337398: b           L_803373A8
    // 0x8033739C: nop

        goto L_803373A8;
    // 0x8033739C: nop

    // 0x803373A0: b           L_803373A8
    // 0x803373A4: nop

        goto L_803373A8;
    // 0x803373A4: nop

L_803373A8:
    // 0x803373A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803373AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803373B0: jr          $ra
    // 0x803373B4: nop

    return;
    // 0x803373B4: nop

;}
RECOMP_FUNC void func_8033117C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033117C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331184: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331188: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033118C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331190: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331194: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331198: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033119C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803311A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803311A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803311AC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803311B0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803311B4: nop

    // 0x803311B8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803311BC: nop

    // 0x803311C0: bne         $t1, $zero, L_80331238
    if (ctx->r9 != 0) {
        // 0x803311C4: nop
    
            goto L_80331238;
    }
    // 0x803311C4: nop

    // 0x803311C8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803311CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803311D0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803311D4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803311D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803311DC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803311E0: nop

    // 0x803311E4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803311E8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803311EC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803311F0: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x803311F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803311F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803311FC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80331200: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331204: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80331208: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033120C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331210: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80331214: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80331218: jal         0x80015538
    // 0x8033121C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8033121C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x80331220: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331224: nop

    // 0x80331228: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x8033122C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331230: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x80331234: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80331238:
    // 0x80331238: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033123C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331240: jal         0x80029C40
    // 0x80331244: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80331244: nop

    after_1:
    // 0x80331248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033124C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331250: jal         0x80029D04
    // 0x80331254: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x80331254: nop

    after_2:
    // 0x80331258: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033125C: nop

    // 0x80331260: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x80331264: nop

    // 0x80331268: addiu       $t3, $t2, -0x8
    ctx->r11 = ADD32(ctx->r10, -0X8);
    // 0x8033126C: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x80331270: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331274: nop

    // 0x80331278: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x8033127C: nop

    // 0x80331280: bgtz        $t5, L_803312D0
    if (SIGNED(ctx->r13) > 0) {
        // 0x80331284: nop
    
            goto L_803312D0;
    }
    // 0x80331284: nop

    // 0x80331288: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033128C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80331290: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80331294: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331298: nop

    // 0x8033129C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x803312A0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803312A4: nop

    // 0x803312A8: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x803312AC: nop

    // 0x803312B0: negu        $t2, $t0
    ctx->r10 = SUB32(0, ctx->r8);
    // 0x803312B4: sh          $t2, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r10;
    // 0x803312B8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803312BC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803312C0: sh          $t3, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r11;
    // 0x803312C4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803312C8: nop

    // 0x803312CC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803312D0:
    // 0x803312D0: jal         0x803304D0
    // 0x803312D4: nop

    func_803304D0_unk_bin_37(rdram, ctx);
        goto after_3;
    // 0x803312D4: nop

    after_3:
    // 0x803312D8: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    // 0x803312DC: lb          $t5, 0x1B($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1B);
    // 0x803312E0: nop

    // 0x803312E4: bne         $t5, $zero, L_80331304
    if (ctx->r13 != 0) {
        // 0x803312E8: nop
    
            goto L_80331304;
    }
    // 0x803312E8: nop

    // 0x803312EC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803312F0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x803312F4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x803312F8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803312FC: nop

    // 0x80331300: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80331304:
    // 0x80331304: b           L_8033130C
    // 0x80331308: nop

        goto L_8033130C;
    // 0x80331308: nop

L_8033130C:
    // 0x8033130C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331314: jr          $ra
    // 0x80331318: nop

    return;
    // 0x80331318: nop

;}
RECOMP_FUNC void func_80333844_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333844: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033384C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333850: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80333854: nop

    // 0x80333858: beq         $t6, $zero, L_80333960
    if (ctx->r14 == 0) {
        // 0x8033385C: nop
    
            goto L_80333960;
    }
    // 0x8033385C: nop

    // 0x80333860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333864: beq         $t6, $at, L_80333960
    if (ctx->r14 == ctx->r1) {
        // 0x80333868: nop
    
            goto L_80333960;
    }
    // 0x80333868: nop

    // 0x8033386C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80333870: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80333874: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80333878: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033387C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333880: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333884: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333888: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033388C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80333890: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80333894: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80333898: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8033389C: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x803338A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803338A4: beq         $t1, $at, L_80333960
    if (ctx->r9 == ctx->r1) {
        // 0x803338A8: nop
    
            goto L_80333960;
    }
    // 0x803338A8: nop

L_803338AC:
    // 0x803338AC: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x803338B0: jal         0x80026E58
    // 0x803338B4: addiu       $a0, $zero, 0x142
    ctx->r4 = ADD32(0, 0X142);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_0;
    // 0x803338B4: addiu       $a0, $zero, 0x142
    ctx->r4 = ADD32(0, 0X142);
    after_0:
    // 0x803338B8: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x803338BC: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x803338C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803338C4: beq         $t2, $at, L_80333950
    if (ctx->r10 == ctx->r1) {
        // 0x803338C8: nop
    
            goto L_80333950;
    }
    // 0x803338C8: nop

    // 0x803338CC: lh          $t4, 0x1A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1A);
    // 0x803338D0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803338D4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803338D8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803338DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803338E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803338E4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803338E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803338EC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803338F0: lwc1        $f6, 0x4158($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x803338F4: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803338F8: nop

    // 0x803338FC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80333900: nop

    // 0x80333904: bc1f        L_80333940
    if (!c1cs) {
        // 0x80333908: nop
    
            goto L_80333940;
    }
    // 0x80333908: nop

    // 0x8033390C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80333910: nop

    // 0x80333914: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x80333918: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x8033391C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333920: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333924: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333928: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033392C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333930: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333934: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333938: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033393C: sh          $t7, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r15;
L_80333940:
    // 0x80333940: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x80333944: nop

    // 0x80333948: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8033394C: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
L_80333950:
    // 0x80333950: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x80333954: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333958: bne         $t2, $at, L_803338AC
    if (ctx->r10 != ctx->r1) {
        // 0x8033395C: nop
    
            goto L_803338AC;
    }
    // 0x8033395C: nop

L_80333960:
    // 0x80333960: b           L_80333968
    // 0x80333964: nop

        goto L_80333968;
    // 0x80333964: nop

L_80333968:
    // 0x80333968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033396C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333970: jr          $ra
    // 0x80333974: nop

    return;
    // 0x80333974: nop

;}
RECOMP_FUNC void func_80332384_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332384: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033238C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332390: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332394: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332398: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033239C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803323A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803323A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803323A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803323AC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803323B0: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x803323B4: nop

    // 0x803323B8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x803323BC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803323C0: nop

    // 0x803323C4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x803323C8: sltiu       $at, $t0, 0x6
    ctx->r1 = ctx->r8 < 0X6 ? 1 : 0;
    // 0x803323CC: beq         $at, $zero, L_80332450
    if (ctx->r1 == 0) {
        // 0x803323D0: nop
    
            goto L_80332450;
    }
    // 0x803323D0: nop

    // 0x803323D4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803323D8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803323DC: addu        $at, $at, $t0
    gpr jr_addend_803323E8 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803323E0: lw          $t0, 0x7930($at)
    ctx->r8 = ADD32(ctx->r1, 0X7930);
    // 0x803323E4: nop

    // 0x803323E8: jr          $t0
    // 0x803323EC: nop

    switch (jr_addend_803323E8 >> 2) {
        case 0: goto L_803323F0; break;
        case 1: goto L_80332400; break;
        case 2: goto L_80332410; break;
        case 3: goto L_80332430; break;
        case 4: goto L_80332420; break;
        case 5: goto L_80332440; break;
        default: switch_error(__func__, 0x803323E8, 0x80337930);
    }
    // 0x803323EC: nop

L_803323F0:
    // 0x803323F0: jal         0x80331F94
    // 0x803323F4: nop

    func_80331F94_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x803323F4: nop

    after_0:
    // 0x803323F8: b           L_80332458
    // 0x803323FC: nop

        goto L_80332458;
    // 0x803323FC: nop

L_80332400:
    // 0x80332400: jal         0x80332074
    // 0x80332404: nop

    func_80332074_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80332404: nop

    after_1:
    // 0x80332408: b           L_80332458
    // 0x8033240C: nop

        goto L_80332458;
    // 0x8033240C: nop

L_80332410:
    // 0x80332410: jal         0x80332174
    // 0x80332414: nop

    func_80332174_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x80332414: nop

    after_2:
    // 0x80332418: b           L_80332458
    // 0x8033241C: nop

        goto L_80332458;
    // 0x8033241C: nop

L_80332420:
    // 0x80332420: jal         0x80332364
    // 0x80332424: nop

    func_80332364_unk_bin_37(rdram, ctx);
        goto after_3;
    // 0x80332424: nop

    after_3:
    // 0x80332428: b           L_80332458
    // 0x8033242C: nop

        goto L_80332458;
    // 0x8033242C: nop

L_80332430:
    // 0x80332430: jal         0x80332354
    // 0x80332434: nop

    func_80332354_unk_bin_37(rdram, ctx);
        goto after_4;
    // 0x80332434: nop

    after_4:
    // 0x80332438: b           L_80332458
    // 0x8033243C: nop

        goto L_80332458;
    // 0x8033243C: nop

L_80332440:
    // 0x80332440: jal         0x80332374
    // 0x80332444: nop

    func_80332374_unk_bin_37(rdram, ctx);
        goto after_5;
    // 0x80332444: nop

    after_5:
    // 0x80332448: b           L_80332458
    // 0x8033244C: nop

        goto L_80332458;
    // 0x8033244C: nop

L_80332450:
    // 0x80332450: b           L_80332458
    // 0x80332454: nop

        goto L_80332458;
    // 0x80332454: nop

L_80332458:
    // 0x80332458: b           L_80332460
    // 0x8033245C: nop

        goto L_80332460;
    // 0x8033245C: nop

L_80332460:
    // 0x80332460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332464: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332468: jr          $ra
    // 0x8033246C: nop

    return;
    // 0x8033246C: nop

;}
RECOMP_FUNC void func_80332CA0_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332CA0: jr          $ra
    // 0x80332CA4: nop

    return;
    // 0x80332CA4: nop

    // 0x80332CA8: jr          $ra
    // 0x80332CAC: nop

    return;
    // 0x80332CAC: nop

;}
RECOMP_FUNC void func_80333408_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333408: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8033340C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80333410: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80333414: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80333418: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8033341C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80333420: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80333424: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80333428: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033342C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80333430: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80333434: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80333438: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033343C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80333440: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80333444: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80333448: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033344C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80333450: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80333454: addiu       $a1, $a1, 0x3E44
    ctx->r5 = ADD32(ctx->r5, 0X3E44);
    // 0x80333458: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033345C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80333460: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333464: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80333468: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033346C: jal         0x80027464
    // 0x80333470: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80333470: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80333474: sh          $v0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r2;
    // 0x80333478: lh          $t1, 0x3E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3E);
    // 0x8033347C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333480: beq         $t1, $at, L_80333824
    if (ctx->r9 == ctx->r1) {
        // 0x80333484: nop
    
            goto L_80333824;
    }
    // 0x80333484: nop

    // 0x80333488: lh          $t3, 0x3E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3E);
    // 0x8033348C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333490: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80333494: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333498: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033349C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803334A0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803334A4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803334A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803334AC: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
    // 0x803334B0: lh          $t7, 0x3E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3E);
    // 0x803334B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803334B8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803334BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803334C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803334C4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803334C8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803334CC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803334D0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x803334D4: sh          $t5, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r13;
    // 0x803334D8: lh          $t9, 0x3E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X3E);
    // 0x803334DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803334E0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803334E4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803334E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803334EC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803334F0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803334F4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803334F8: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x803334FC: lh          $t1, 0x3E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3E);
    // 0x80333500: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333504: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80333508: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033350C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333510: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333514: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333518: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033351C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80333520: sh          $t0, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r8;
    // 0x80333524: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x80333528: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033352C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80333530: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80333534: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333538: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8033353C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333540: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333544: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80333548: sh          $t2, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r10;
    // 0x8033354C: lh          $t5, 0x3E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3E);
    // 0x80333550: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333554: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80333558: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033355C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333560: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80333564: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333568: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033356C: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x80333570: lh          $t9, 0x3E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X3E);
    // 0x80333574: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333578: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033357C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333580: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333584: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333588: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033358C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333590: sh          $zero, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = 0;
    // 0x80333594: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x80333598: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033359C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x803335A0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x803335A4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803335A8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x803335AC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803335B0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803335B4: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x803335B8: sh          $t1, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r9;
    // 0x803335BC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x803335C0: lw          $t4, 0x5100($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5100);
    // 0x803335C4: nop

    // 0x803335C8: lh          $t2, 0xA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA);
    // 0x803335CC: nop

    // 0x803335D0: beq         $t2, $zero, L_8033360C
    if (ctx->r10 == 0) {
        // 0x803335D4: nop
    
            goto L_8033360C;
    }
    // 0x803335D4: nop

    // 0x803335D8: lh          $t9, 0x3E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X3E);
    // 0x803335DC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x803335E0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803335E4: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x803335E8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803335EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803335F0: lh          $t5, 0xA($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XA);
    // 0x803335F4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803335F8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803335FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333600: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333604: addiu       $t8, $t5, 0x18
    ctx->r24 = ADD32(ctx->r13, 0X18);
    // 0x80333608: sh          $t8, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r24;
L_8033360C:
    // 0x8033360C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80333610: lw          $t0, 0x5100($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5100);
    // 0x80333614: nop

    // 0x80333618: lh          $t1, 0xC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC);
    // 0x8033361C: nop

    // 0x80333620: beq         $t1, $zero, L_803336F0
    if (ctx->r9 == 0) {
        // 0x80333624: nop
    
            goto L_803336F0;
    }
    // 0x80333624: nop

    // 0x80333628: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8033362C: lw          $t3, 0x5100($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5100);
    // 0x80333630: nop

    // 0x80333634: lh          $t4, 0xC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC);
    // 0x80333638: nop

    // 0x8033363C: bgez        $t4, L_8033364C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80333640: nop
    
            goto L_8033364C;
    }
    // 0x80333640: nop

    // 0x80333644: b           L_80333660
    // 0x80333648: negu        $s0, $t4
    ctx->r16 = SUB32(0, ctx->r12);
        goto L_80333660;
    // 0x80333648: negu        $s0, $t4
    ctx->r16 = SUB32(0, ctx->r12);
L_8033364C:
    // 0x8033364C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80333650: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80333654: nop

    // 0x80333658: lh          $s0, 0xC($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XC);
    // 0x8033365C: nop

L_80333660:
    // 0x80333660: lh          $t5, 0x3E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3E);
    // 0x80333664: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333668: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x8033366C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80333670: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333674: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80333678: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033367C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333680: bgez        $s0, L_80333694
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80333684: andi        $t7, $s0, 0x3
        ctx->r15 = ctx->r16 & 0X3;
            goto L_80333694;
    }
    // 0x80333684: andi        $t7, $s0, 0x3
    ctx->r15 = ctx->r16 & 0X3;
    // 0x80333688: beq         $t7, $zero, L_80333694
    if (ctx->r15 == 0) {
        // 0x8033368C: nop
    
            goto L_80333694;
    }
    // 0x8033368C: nop

    // 0x80333690: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_80333694:
    // 0x80333694: sh          $t7, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r15;
    // 0x80333698: lh          $t8, 0x3E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3E);
    // 0x8033369C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803336A0: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x803336A4: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x803336A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803336AC: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x803336B0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803336B4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803336B8: lh          $t0, 0x41F8($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F8);
    // 0x803336BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803336C0: bne         $t0, $at, L_803336F0
    if (ctx->r8 != ctx->r1) {
        // 0x803336C4: nop
    
            goto L_803336F0;
    }
    // 0x803336C4: nop

    // 0x803336C8: lh          $t3, 0x3E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3E);
    // 0x803336CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803336D0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803336D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803336D8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803336DC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803336E0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803336E4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803336E8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803336EC: sh          $t1, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r9;
L_803336F0:
    // 0x803336F0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x803336F4: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x803336F8: nop

    // 0x803336FC: lh          $t5, 0xE($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XE);
    // 0x80333700: nop

    // 0x80333704: beq         $t5, $zero, L_80333784
    if (ctx->r13 == 0) {
        // 0x80333708: nop
    
            goto L_80333784;
    }
    // 0x80333708: nop

    // 0x8033370C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80333710: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80333714: nop

    // 0x80333718: lh          $t9, 0xE($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XE);
    // 0x8033371C: nop

    // 0x80333720: bgez        $t9, L_80333754
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80333724: nop
    
            goto L_80333754;
    }
    // 0x80333724: nop

    // 0x80333728: lh          $t6, 0x3E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3E);
    // 0x8033372C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333730: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80333734: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80333738: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033373C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80333740: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333744: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333748: negu        $t8, $t9
    ctx->r24 = SUB32(0, ctx->r25);
    // 0x8033374C: b           L_80333784
    // 0x80333750: sh          $t8, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r24;
        goto L_80333784;
    // 0x80333750: sh          $t8, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r24;
L_80333754:
    // 0x80333754: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x80333758: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8033375C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333760: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333764: lw          $t3, 0x5100($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5100);
    // 0x80333768: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033376C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333770: lh          $t1, 0xE($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XE);
    // 0x80333774: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333778: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033377C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333780: sh          $t1, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r9;
L_80333784:
    // 0x80333784: lh          $t5, 0x3E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3E);
    // 0x80333788: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8033378C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333790: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333794: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333798: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033379C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803337A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803337A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803337A8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803337AC: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x803337B0: lh          $t9, 0x3E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X3E);
    // 0x803337B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803337B8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803337BC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803337C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803337C4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803337C8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803337CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803337D0: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x803337D4: lwc1        $f20, 0xC($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0XC);
    // 0x803337D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803337DC: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x803337E0: lh          $t3, 0x3E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3E);
    // 0x803337E4: nop

    // 0x803337E8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803337EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803337F0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803337F4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803337F8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803337FC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333800: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
    // 0x80333804: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80333808: addiu       $t1, $t1, 0x748C
    ctx->r9 = ADD32(ctx->r9, 0X748C);
    // 0x8033380C: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x80333810: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80333814: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333818: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033381C: jal         0x8001C0EC
    // 0x80333820: addiu       $a3, $zero, 0x133
    ctx->r7 = ADD32(0, 0X133);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80333820: addiu       $a3, $zero, 0x133
    ctx->r7 = ADD32(0, 0X133);
    after_1:
L_80333824:
    // 0x80333824: b           L_8033382C
    // 0x80333828: nop

        goto L_8033382C;
    // 0x80333828: nop

L_8033382C:
    // 0x8033382C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80333830: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80333834: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333838: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8033383C: jr          $ra
    // 0x80333840: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80333840: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803345DC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803345DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803345E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803345E4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x803345E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803345EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803345F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803345F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803345F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803345FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334600: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334604: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334608: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033460C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334610: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334614: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80334618: lh          $t1, 0x3A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3A);
    // 0x8033461C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334620: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80334624: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80334628: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x8033462C: nop

    // 0x80334630: sb          $t4, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r12;
    // 0x80334634: lb          $t5, 0x2B($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2B);
    // 0x80334638: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033463C: beq         $t5, $at, L_8033482C
    if (ctx->r13 == ctx->r1) {
        // 0x80334640: nop
    
            goto L_8033482C;
    }
    // 0x80334640: nop

    // 0x80334644: lb          $t6, 0x2B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2B);
    // 0x80334648: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033464C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334650: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334654: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334658: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033465C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334660: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334664: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334668: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x8033466C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80334670: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80334674: lh          $t0, 0xE6($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XE6);
    // 0x80334678: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033467C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80334680: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80334684: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334688: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8033468C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334690: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80334694: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x80334698: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033469C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803346A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803346A4: lwc1        $f12, 0x3C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x803346A8: jal         0x80015538
    // 0x803346AC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803346AC: nop

    after_0:
    // 0x803346B0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x803346B4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803346B8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803346BC: lwc1        $f9, 0x7998($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7998);
    // 0x803346C0: lwc1        $f8, 0x799C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X799C);
    // 0x803346C4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803346C8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803346CC: jal         0x80034970
    // 0x803346D0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x803346D0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x803346D4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x803346D8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803346DC: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x803346E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803346E4: lwc1        $f18, 0xC($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0XC);
    // 0x803346E8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x803346EC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x803346F0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803346F4: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x803346F8: nop

    // 0x803346FC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80334700: swc1        $f16, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f16.u32l;
    // 0x80334704: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334708: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033470C: lwc1        $f9, 0x79A0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X79A0);
    // 0x80334710: lwc1        $f8, 0x79A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X79A4);
    // 0x80334714: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x80334718: mul.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033471C: jal         0x80036570
    // 0x80334720: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x80334720: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x80334724: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80334728: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8033472C: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80334730: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334734: lwc1        $f16, 0xC($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80334738: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8033473C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80334740: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334744: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80334748: nop

    // 0x8033474C: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80334750: swc1        $f10, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f10.u32l;
    // 0x80334754: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80334758: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8033475C: lwc1        $f16, 0x0($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80334760: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80334764: nop

    // 0x80334768: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8033476C: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x80334770: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80334774: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80334778: lwc1        $f18, 0x4($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8033477C: lwc1        $f4, 0x28($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80334780: nop

    // 0x80334784: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80334788: swc1        $f10, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f10.u32l;
    // 0x8033478C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80334790: lh          $t5, 0x3A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3A);
    // 0x80334794: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x80334798: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033479C: lwc1        $f6, 0xC($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0XC);
    // 0x803347A0: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803347A4: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x803347A8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803347AC: nop

    // 0x803347B0: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x803347B4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803347B8: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x803347BC: sub.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x803347C0: swc1        $f6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f6.u32l;
    // 0x803347C4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803347C8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x803347CC: lh          $t8, 0xA8($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XA8);
    // 0x803347D0: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x803347D4: negu        $t1, $t8
    ctx->r9 = SUB32(0, ctx->r24);
    // 0x803347D8: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x803347DC: jal         0x80015538
    // 0x803347E0: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803347E0: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_3:
    // 0x803347E4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x803347E8: nop

    // 0x803347EC: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x803347F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803347F4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x803347F8: lwc1        $f8, 0x40($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X40);
    // 0x803347FC: nop

    // 0x80334800: swc1        $f8, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f8.u32l;
    // 0x80334804: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80334808: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8033480C: lwc1        $f4, 0x44($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80334810: nop

    // 0x80334814: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80334818: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033481C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80334820: lwc1        $f16, 0x48($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X48);
    // 0x80334824: nop

    // 0x80334828: swc1        $f16, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f16.u32l;
L_8033482C:
    // 0x8033482C: lb          $t9, 0x2B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2B);
    // 0x80334830: nop

    // 0x80334834: sltu        $t8, $zero, $t9
    ctx->r24 = 0 < ctx->r25 ? 1 : 0;
    // 0x80334838: nor         $t1, $t8, $zero
    ctx->r9 = ~(ctx->r24 | 0);
    // 0x8033483C: beq         $t1, $zero, L_8033484C
    if (ctx->r9 == 0) {
        // 0x80334840: nop
    
            goto L_8033484C;
    }
    // 0x80334840: nop

    // 0x80334844: b           L_80334850
    // 0x80334848: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80334850;
    // 0x80334848: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8033484C:
    // 0x8033484C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80334850:
    // 0x80334850: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80334854: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80334858: b           L_80334868
    // 0x8033485C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_80334868;
    // 0x8033485C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80334860: b           L_80334868
    // 0x80334864: nop

        goto L_80334868;
    // 0x80334864: nop

L_80334868:
    // 0x80334868: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033486C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334870: jr          $ra
    // 0x80334874: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80334874: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80332DF0_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80332DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332DF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E00: jal         0x8002B114
    // 0x80332E04: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x80332E04: nop

    after_0:
    // 0x80332E08: b           L_80332E10
    // 0x80332E0C: nop

        goto L_80332E10;
    // 0x80332E0C: nop

L_80332E10:
    // 0x80332E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80332E18: jr          $ra
    // 0x80332E1C: nop

    return;
    // 0x80332E1C: nop

;}
RECOMP_FUNC void stub_80331778_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803317E0: jr          $ra
    // 0x803317E4: nop

    return;
    // 0x803317E4: nop

    // 0x803317E8: jr          $ra
    // 0x803317EC: nop

    return;
    // 0x803317EC: nop

;}
RECOMP_FUNC void func_80331C10_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331C10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331C14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331C18: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80331C1C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80331C20: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331C24: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80331C28: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80331C2C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80331C30: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80331C34: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331C38: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80331C3C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80331C40: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331C44: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80331C48: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331C4C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80331C50: addiu       $a1, $a1, 0x3E08
    ctx->r5 = ADD32(ctx->r5, 0X3E08);
    // 0x80331C54: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80331C58: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80331C5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331C60: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80331C64: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80331C68: jal         0x80027464
    // 0x80331C6C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80331C6C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80331C70: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80331C74: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80331C78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331C7C: beq         $t1, $at, L_80331F6C
    if (ctx->r9 == ctx->r1) {
        // 0x80331C80: nop
    
            goto L_80331F6C;
    }
    // 0x80331C80: nop

    // 0x80331C84: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80331C88: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80331C8C: nop

    // 0x80331C90: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80331C94: nop

    // 0x80331C98: beq         $t3, $zero, L_80331D88
    if (ctx->r11 == 0) {
        // 0x80331C9C: nop
    
            goto L_80331D88;
    }
    // 0x80331C9C: nop

    // 0x80331CA0: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x80331CA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331CA8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331CAC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331CB0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331CB4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331CB8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331CBC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331CC0: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x80331CC4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80331CC8: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80331CCC: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80331CD0: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x80331CD4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80331CD8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80331CDC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331CE0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331CE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331CE8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331CEC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331CF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331CF4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331CF8: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x80331CFC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80331D00: lw          $t0, 0x5100($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5100);
    // 0x80331D04: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x80331D08: lh          $t1, 0xA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA);
    // 0x80331D0C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331D10: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80331D14: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331D18: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331D1C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331D20: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331D24: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331D28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D2C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331D30: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x80331D34: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x80331D38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331D3C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331D40: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331D44: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331D48: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331D4C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331D50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D54: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331D58: swc1        $f16, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f16.u32l;
    // 0x80331D5C: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x80331D60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331D64: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331D68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331D6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331D70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331D74: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331D78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D7C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331D80: b           L_80331E7C
    // 0x80331D84: swc1        $f18, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f18.u32l;
        goto L_80331E7C;
    // 0x80331D84: swc1        $f18, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f18.u32l;
L_80331D88:
    // 0x80331D88: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x80331D8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D90: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80331D94: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80331D98: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331D9C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80331DA0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331DA4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331DA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80331DAC: sh          $t9, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r25;
    // 0x80331DB0: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80331DB4: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x80331DB8: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x80331DBC: lh          $t2, 0xC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC);
    // 0x80331DC0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331DC4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80331DC8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331DCC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331DD0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331DD4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331DD8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331DDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331DE0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331DE4: swc1        $f6, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f6.u32l;
    // 0x80331DE8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80331DEC: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x80331DF0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331DF4: lh          $t7, 0xC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XC);
    // 0x80331DF8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80331DFC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80331E00: jal         0x80015538
    // 0x80331E04: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80331E04: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_1:
    // 0x80331E08: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x80331E0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E10: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80331E14: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80331E18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331E1C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80331E20: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331E24: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331E28: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x80331E2C: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80331E30: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331E34: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331E38: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331E3C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331E40: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331E44: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331E48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E4C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331E50: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80331E54: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80331E58: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331E5C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331E60: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331E64: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331E68: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331E6C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331E70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E74: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331E78: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
L_80331E7C:
    // 0x80331E7C: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80331E80: lw          $t3, 0x5100($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5100);
    // 0x80331E84: nop

    // 0x80331E88: lh          $t4, 0xE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE);
    // 0x80331E8C: nop

    // 0x80331E90: beq         $t4, $zero, L_80331ECC
    if (ctx->r12 == 0) {
        // 0x80331E94: nop
    
            goto L_80331ECC;
    }
    // 0x80331E94: nop

    // 0x80331E98: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x80331E9C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80331EA0: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80331EA4: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80331EA8: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x80331EAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331EB0: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80331EB4: lh          $t7, 0xE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE);
    // 0x80331EB8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331EBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331EC0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331EC4: b           L_80331EF4
    // 0x80331EC8: sh          $t7, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r15;
        goto L_80331EF4;
    // 0x80331EC8: sh          $t7, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r15;
L_80331ECC:
    // 0x80331ECC: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x80331ED0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331ED4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331ED8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331EDC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331EE0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331EE4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331EE8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331EEC: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80331EF0: sh          $t9, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r25;
L_80331EF4:
    // 0x80331EF4: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x80331EF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331EFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331F00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331F08: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F0C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331F10: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331F14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331F18: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80331F1C: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80331F20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331F24: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80331F28: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80331F2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331F30: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80331F34: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331F38: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331F3C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80331F40: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80331F44: addiu       $t7, $t7, 0x7484
    ctx->r15 = ADD32(ctx->r15, 0X7484);
    // 0x80331F48: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80331F4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331F58: jal         0x8001C0EC
    // 0x80331F5C: addiu       $a3, $zero, 0x12A
    ctx->r7 = ADD32(0, 0X12A);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80331F5C: addiu       $a3, $zero, 0x12A
    ctx->r7 = ADD32(0, 0X12A);
    after_2:
    // 0x80331F60: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80331F64: jal         0x8001BBDC
    // 0x80331F68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80331F68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80331F6C:
    // 0x80331F6C: b           L_80331F74
    // 0x80331F70: nop

        goto L_80331F74;
    // 0x80331F70: nop

L_80331F74:
    // 0x80331F74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331F7C: jr          $ra
    // 0x80331F80: nop

    return;
    // 0x80331F80: nop

;}
RECOMP_FUNC void func_803304D0_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803304D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803304D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803304D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803304DC: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x803304E0: jal         0x803302A8
    // 0x803304E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803302A8_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x803304E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803304E8: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x803304EC: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x803304F0: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x803304F4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803304F8: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x803304FC: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
    // 0x80330500: jal         0x803302A8
    // 0x80330504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803302A8_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80330504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80330508: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x8033050C: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
    // 0x80330510: sra         $t9, $s0, 24
    ctx->r25 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80330514: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80330518: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x8033051C: sb          $t1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r9;
    // 0x80330520: jal         0x803302A8
    // 0x80330524: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_803302A8_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x80330524: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x80330528: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x8033052C: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x80330530: sra         $t2, $s0, 24
    ctx->r10 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80330534: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80330538: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x8033053C: sb          $t4, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r12;
    // 0x80330540: jal         0x8033011C
    // 0x80330544: nop

    func_8033011C_unk_bin_37(rdram, ctx);
        goto after_3;
    // 0x80330544: nop

    after_3:
    // 0x80330548: lb          $v0, 0x27($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X27);
    // 0x8033054C: b           L_8033055C
    // 0x80330550: nop

        goto L_8033055C;
    // 0x80330550: nop

    // 0x80330554: b           L_8033055C
    // 0x80330558: nop

        goto L_8033055C;
    // 0x80330558: nop

L_8033055C:
    // 0x8033055C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330560: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80330564: jr          $ra
    // 0x80330568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80330568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80333310_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80333314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033331C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333320: jal         0x8002B0E4
    // 0x80333324: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80333324: nop

    after_0:
    // 0x80333328: b           L_80333330
    // 0x8033332C: nop

        goto L_80333330;
    // 0x8033332C: nop

L_80333330:
    // 0x80333330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80333338: jr          $ra
    // 0x8033333C: nop

    return;
    // 0x8033333C: nop

;}
RECOMP_FUNC void func_80332888_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033288C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332890: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332894: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80332898: nop

    // 0x8033289C: bne         $t6, $zero, L_803328B4
    if (ctx->r14 != 0) {
        // 0x803328A0: nop
    
            goto L_803328B4;
    }
    // 0x803328A0: nop

    // 0x803328A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803328A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328AC: jal         0x8002B0E4
    // 0x803328B0: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803328B0: nop

    after_0:
L_803328B4:
    // 0x803328B4: b           L_803328BC
    // 0x803328B8: nop

        goto L_803328BC;
    // 0x803328B8: nop

L_803328BC:
    // 0x803328BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803328C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803328C4: jr          $ra
    // 0x803328C8: nop

    return;
    // 0x803328C8: nop

;}
RECOMP_FUNC void func_803318BC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803318BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803318C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803318C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803318C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803318CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803318D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803318D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803318D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803318DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803318E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803318E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803318E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803318EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803318F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803318F4: nop

    // 0x803318F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803318FC: nop

    // 0x80331900: bne         $t1, $zero, L_80331964
    if (ctx->r9 != 0) {
        // 0x80331904: nop
    
            goto L_80331964;
    }
    // 0x80331904: nop

    // 0x80331908: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033190C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331910: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331914: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331918: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033191C: nop

    // 0x80331920: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80331924: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331928: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033192C: nop

    // 0x80331930: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80331934: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331938: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8033193C: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80331940: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331944: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80331948: addiu       $t8, $t8, 0x7478
    ctx->r24 = ADD32(ctx->r24, 0X7478);
    // 0x8033194C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331950: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80331954: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331958: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033195C: jal         0x8001C0EC
    // 0x80331960: addiu       $a3, $zero, 0x101
    ctx->r7 = ADD32(0, 0X101);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331960: addiu       $a3, $zero, 0x101
    ctx->r7 = ADD32(0, 0X101);
    after_0:
L_80331964:
    // 0x80331964: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331968: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033196C: jal         0x80029C40
    // 0x80331970: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80331970: nop

    after_1:
    // 0x80331974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033197C: jal         0x80029D04
    // 0x80331980: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x80331980: nop

    after_2:
    // 0x80331984: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331988: nop

    // 0x8033198C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80331990: nop

    // 0x80331994: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80331998: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x8033199C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803319A0: nop

    // 0x803319A4: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x803319A8: nop

    // 0x803319AC: bgtz        $t3, L_803319CC
    if (SIGNED(ctx->r11) > 0) {
        // 0x803319B0: nop
    
            goto L_803319CC;
    }
    // 0x803319B0: nop

    // 0x803319B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319BC: jal         0x8002B114
    // 0x803319C0: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x803319C0: nop

    after_3:
    // 0x803319C4: b           L_803319FC
    // 0x803319C8: nop

        goto L_803319FC;
    // 0x803319C8: nop

L_803319CC:
    // 0x803319CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319D4: jal         0x8001B44C
    // 0x803319D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x803319D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x803319DC: beq         $v0, $zero, L_803319F4
    if (ctx->r2 == 0) {
        // 0x803319E0: nop
    
            goto L_803319F4;
    }
    // 0x803319E0: nop

    // 0x803319E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319EC: jal         0x8002B114
    // 0x803319F0: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x803319F0: nop

    after_5:
L_803319F4:
    // 0x803319F4: b           L_803319FC
    // 0x803319F8: nop

        goto L_803319FC;
    // 0x803319F8: nop

L_803319FC:
    // 0x803319FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331A04: jr          $ra
    // 0x80331A08: nop

    return;
    // 0x80331A08: nop

;}
RECOMP_FUNC void func_803364C8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803364C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803364CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803364D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803364D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803364D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803364DC: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x803364E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803364E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803364E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803364EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803364F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803364F4: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x803364F8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x803364FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336500: beq         $s0, $at, L_8033651C
    if (ctx->r16 == ctx->r1) {
        // 0x80336504: nop
    
            goto L_8033651C;
    }
    // 0x80336504: nop

    // 0x80336508: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033650C: beq         $s0, $at, L_8033652C
    if (ctx->r16 == ctx->r1) {
        // 0x80336510: nop
    
            goto L_8033652C;
    }
    // 0x80336510: nop

    // 0x80336514: b           L_8033653C
    // 0x80336518: nop

        goto L_8033653C;
    // 0x80336518: nop

L_8033651C:
    // 0x8033651C: jal         0x803362F8
    // 0x80336520: nop

    func_803362F8_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80336520: nop

    after_0:
    // 0x80336524: b           L_80336544
    // 0x80336528: nop

        goto L_80336544;
    // 0x80336528: nop

L_8033652C:
    // 0x8033652C: jal         0x80336398
    // 0x80336530: nop

    func_80336398_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80336530: nop

    after_1:
    // 0x80336534: b           L_80336544
    // 0x80336538: nop

        goto L_80336544;
    // 0x80336538: nop

L_8033653C:
    // 0x8033653C: b           L_80336544
    // 0x80336540: nop

        goto L_80336544;
    // 0x80336540: nop

L_80336544:
    // 0x80336544: b           L_8033654C
    // 0x80336548: nop

        goto L_8033654C;
    // 0x80336548: nop

L_8033654C:
    // 0x8033654C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80336554: jr          $ra
    // 0x80336558: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80336558: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80332E20_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332E20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332E24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332E28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332E2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332E30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332E34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332E38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332E40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332E48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332E4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332E50: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332E54: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80332E58: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80332E5C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80332E60: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332E64: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332E68: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332E6C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332E70: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332E74: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332E78: lh          $t2, 0x4236($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4236);
    // 0x80332E7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332E80: bne         $t2, $at, L_80332F5C
    if (ctx->r10 != ctx->r1) {
        // 0x80332E84: nop
    
            goto L_80332F5C;
    }
    // 0x80332E84: nop

    // 0x80332E88: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332E8C: nop

    // 0x80332E90: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80332E94: nop

    // 0x80332E98: bne         $t4, $zero, L_80332F00
    if (ctx->r12 != 0) {
        // 0x80332E9C: nop
    
            goto L_80332F00;
    }
    // 0x80332E9C: nop

    // 0x80332EA0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332EA4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80332EA8: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x80332EAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332EB0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332EB4: nop

    // 0x80332EB8: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80332EBC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332EC0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332EC4: nop

    // 0x80332EC8: swc1        $f6, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f6.u32l;
    // 0x80332ECC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332ED0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80332ED4: addiu       $t9, $t9, 0x7488
    ctx->r25 = ADD32(ctx->r25, 0X7488);
    // 0x80332ED8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EDC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80332EE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332EE8: jal         0x8001C0EC
    // 0x80332EEC: addiu       $a3, $zero, 0x131
    ctx->r7 = ADD32(0, 0X131);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332EEC: addiu       $a3, $zero, 0x131
    ctx->r7 = ADD32(0, 0X131);
    after_0:
    // 0x80332EF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EF8: jal         0x800272E8
    // 0x80332EFC: nop

    func_800272E8(rdram, ctx);
        goto after_1;
    // 0x80332EFC: nop

    after_1:
L_80332F00:
    // 0x80332F00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F08: jal         0x80029C40
    // 0x80332F0C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80332F0C: nop

    after_2:
    // 0x80332F10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F18: jal         0x80029D04
    // 0x80332F1C: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80332F1C: nop

    after_3:
    // 0x80332F20: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332F24: nop

    // 0x80332F28: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80332F2C: nop

    // 0x80332F30: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x80332F34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F3C: jal         0x8001B44C
    // 0x80332F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80332F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332F44: beq         $v0, $zero, L_80332F5C
    if (ctx->r2 == 0) {
        // 0x80332F48: nop
    
            goto L_80332F5C;
    }
    // 0x80332F48: nop

    // 0x80332F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F54: jal         0x8002B114
    // 0x80332F58: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x80332F58: nop

    after_5:
L_80332F5C:
    // 0x80332F5C: b           L_80332F64
    // 0x80332F60: nop

        goto L_80332F64;
    // 0x80332F60: nop

L_80332F64:
    // 0x80332F64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332F68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332F6C: jr          $ra
    // 0x80332F70: nop

    return;
    // 0x80332F70: nop

;}
RECOMP_FUNC void func_80332354_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332354: jr          $ra
    // 0x80332358: nop

    return;
    // 0x80332358: nop

    // 0x8033235C: jr          $ra
    // 0x80332360: nop

    return;
    // 0x80332360: nop

;}
RECOMP_FUNC void func_8033425C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033425C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334264: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334268: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033426C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334270: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334274: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334278: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033427C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334280: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334284: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334288: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033428C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334290: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334294: nop

    // 0x80334298: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033429C: nop

    // 0x803342A0: bne         $t1, $zero, L_803342E4
    if (ctx->r9 != 0) {
        // 0x803342A4: nop
    
            goto L_803342E4;
    }
    // 0x803342A4: nop

    // 0x803342A8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803342AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803342B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803342B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803342B8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803342BC: nop

    // 0x803342C0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803342C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803342C8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803342CC: nop

    // 0x803342D0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803342D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803342D8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803342DC: nop

    // 0x803342E0: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
L_803342E4:
    // 0x803342E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342EC: jal         0x80029C40
    // 0x803342F0: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x803342F0: nop

    after_0:
    // 0x803342F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342FC: jal         0x80029D04
    // 0x80334300: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80334300: nop

    after_1:
    // 0x80334304: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334308: nop

    // 0x8033430C: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x80334310: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80334314: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80334318: jal         0x80015538
    // 0x8033431C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8033431C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_2:
    // 0x80334320: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334324: nop

    // 0x80334328: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x8033432C: jal         0x80334534
    // 0x80334330: nop

    func_80334534_unk_bin_37(rdram, ctx);
        goto after_3;
    // 0x80334330: nop

    after_3:
    // 0x80334334: b           L_8033433C
    // 0x80334338: nop

        goto L_8033433C;
    // 0x80334338: nop

L_8033433C:
    // 0x8033433C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334340: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334344: jr          $ra
    // 0x80334348: nop

    return;
    // 0x80334348: nop

;}
RECOMP_FUNC void func_80332A04_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332A04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332A08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332A0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332A10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332A14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
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
    // 0x80332A2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332A30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332A34: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332A38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332A3C: nop

    // 0x80332A40: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332A44: nop

    // 0x80332A48: bne         $t1, $zero, L_80332A88
    if (ctx->r9 != 0) {
        // 0x80332A4C: nop
    
            goto L_80332A88;
    }
    // 0x80332A4C: nop

    // 0x80332A50: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332A54: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80332A58: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80332A5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332A60: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332A64: nop

    // 0x80332A68: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80332A6C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332A70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332A74: nop

    // 0x80332A78: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80332A7C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332A80: nop

    // 0x80332A84: sh          $zero, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = 0;
L_80332A88:
    // 0x80332A88: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332A8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332A90: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80332A94: nop

    // 0x80332A98: bne         $t8, $at, L_80332AE8
    if (ctx->r24 != ctx->r1) {
        // 0x80332A9C: nop
    
            goto L_80332AE8;
    }
    // 0x80332A9C: nop

    // 0x80332AA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AA8: jal         0x8002A8B4
    // 0x80332AAC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x80332AAC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_0:
    // 0x80332AB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AB8: jal         0x8002A560
    // 0x80332ABC: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A560(rdram, ctx);
        goto after_1;
    // 0x80332ABC: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_1:
    // 0x80332AC0: bne         $v0, $zero, L_80332AE0
    if (ctx->r2 != 0) {
        // 0x80332AC4: nop
    
            goto L_80332AE0;
    }
    // 0x80332AC4: nop

    // 0x80332AC8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332ACC: nop

    // 0x80332AD0: sh          $zero, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = 0;
    // 0x80332AD4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332AD8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80332ADC: sb          $t0, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r8;
L_80332AE0:
    // 0x80332AE0: b           L_80332B00
    // 0x80332AE4: nop

        goto L_80332B00;
    // 0x80332AE4: nop

L_80332AE8:
    // 0x80332AE8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332AEC: nop

    // 0x80332AF0: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x80332AF4: nop

    // 0x80332AF8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332AFC: sh          $t4, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r12;
L_80332B00:
    // 0x80332B00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B08: jal         0x80029C40
    // 0x80332B0C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80332B0C: nop

    after_2:
    // 0x80332B10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B18: jal         0x80029D04
    // 0x80332B1C: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80332B1C: nop

    after_3:
    // 0x80332B20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332B24: nop

    // 0x80332B28: lwc1        $f8, 0x3C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80332B2C: nop

    // 0x80332B30: swc1        $f8, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f8.u32l;
    // 0x80332B34: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332B38: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80332B3C: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x80332B40: nop

    // 0x80332B44: bne         $t7, $at, L_80332BA0
    if (ctx->r15 != ctx->r1) {
        // 0x80332B48: nop
    
            goto L_80332BA0;
    }
    // 0x80332B48: nop

    // 0x80332B4C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80332B50: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x80332B54: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80332B58: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80332B5C: addiu       $a3, $a3, 0x3E38
    ctx->r7 = ADD32(ctx->r7, 0X3E38);
    // 0x80332B60: jal         0x80332470
    // 0x80332B64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80332470_unk_bin_37(rdram, ctx);
        goto after_4;
    // 0x80332B64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80332B68: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80332B6C: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x80332B70: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80332B74: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80332B78: addiu       $a3, $a3, 0x3E2C
    ctx->r7 = ADD32(ctx->r7, 0X3E2C);
    // 0x80332B7C: jal         0x80332470
    // 0x80332B80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80332470_unk_bin_37(rdram, ctx);
        goto after_5;
    // 0x80332B80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80332B84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332B90: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x80332B94: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332B98: jal         0x800175F0
    // 0x80332B9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x80332B9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
L_80332BA0:
    // 0x80332BA0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332BA4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80332BA8: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x80332BAC: nop

    // 0x80332BB0: bne         $t9, $at, L_80332C0C
    if (ctx->r25 != ctx->r1) {
        // 0x80332BB4: nop
    
            goto L_80332C0C;
    }
    // 0x80332BB4: nop

    // 0x80332BB8: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80332BBC: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x80332BC0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80332BC4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80332BC8: addiu       $a3, $a3, 0x3E38
    ctx->r7 = ADD32(ctx->r7, 0X3E38);
    // 0x80332BCC: jal         0x80332470
    // 0x80332BD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80332470_unk_bin_37(rdram, ctx);
        goto after_7;
    // 0x80332BD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x80332BD4: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80332BD8: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x80332BDC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80332BE0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80332BE4: addiu       $a3, $a3, 0x3E2C
    ctx->r7 = ADD32(ctx->r7, 0X3E2C);
    // 0x80332BE8: jal         0x80332470
    // 0x80332BEC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80332470_unk_bin_37(rdram, ctx);
        goto after_8;
    // 0x80332BEC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x80332BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332BF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332BFC: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x80332C00: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332C04: jal         0x800175F0
    // 0x80332C08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x80332C08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
L_80332C0C:
    // 0x80332C0C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332C10: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80332C14: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80332C18: nop

    // 0x80332C1C: bne         $t1, $at, L_80332C48
    if (ctx->r9 != ctx->r1) {
        // 0x80332C20: nop
    
            goto L_80332C48;
    }
    // 0x80332C20: nop

    // 0x80332C24: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332C28: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80332C2C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332C30: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332C34: nop

    // 0x80332C38: sh          $zero, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = 0;
    // 0x80332C3C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332C40: nop

    // 0x80332C44: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80332C48:
    // 0x80332C48: b           L_80332C50
    // 0x80332C4C: nop

        goto L_80332C50;
    // 0x80332C4C: nop

L_80332C50:
    // 0x80332C50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332C54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332C58: jr          $ra
    // 0x80332C5C: nop

    return;
    // 0x80332C5C: nop

;}
RECOMP_FUNC void func_80334918_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334918: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033491C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334920: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80334924: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80334928: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033492C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80334930: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80334934: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80334938: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033493C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80334940: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80334944: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80334948: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033494C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80334950: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334954: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80334958: addiu       $a1, $a1, 0x4048
    ctx->r5 = ADD32(ctx->r5, 0X4048);
    // 0x8033495C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334960: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80334964: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334968: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033496C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80334970: jal         0x80027464
    // 0x80334974: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80334974: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80334978: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033497C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334980: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334984: beq         $t1, $at, L_80334A10
    if (ctx->r9 == ctx->r1) {
        // 0x80334988: nop
    
            goto L_80334A10;
    }
    // 0x80334988: nop

    // 0x8033498C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334990: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80334994: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334998: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033499C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803349A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803349A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803349A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803349AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803349B0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803349B4: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x803349B8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803349BC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803349C0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803349C4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803349C8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803349CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803349D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803349D4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803349D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803349DC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803349E0: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x803349E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803349E8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803349EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803349F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803349F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803349F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803349FC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334A00: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334A04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334A08: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334A0C: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_80334A10:
    // 0x80334A10: b           L_80334A18
    // 0x80334A14: nop

        goto L_80334A18;
    // 0x80334A14: nop

L_80334A18:
    // 0x80334A18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334A20: jr          $ra
    // 0x80334A24: nop

    return;
    // 0x80334A24: nop

;}
RECOMP_FUNC void func_80336DF4_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336DF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80336DF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336DFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336E00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336E04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336E08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336E0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336E10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336E14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336E18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336E1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336E20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336E24: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80336E28: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80336E2C: nop

    // 0x80336E30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336E34: nop

    // 0x80336E38: bne         $t1, $zero, L_80336E9C
    if (ctx->r9 != 0) {
        // 0x80336E3C: nop
    
            goto L_80336E9C;
    }
    // 0x80336E3C: nop

    // 0x80336E40: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80336E44: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80336E48: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80336E4C: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80336E50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336E54: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80336E58: nop

    // 0x80336E5C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80336E60: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80336E64: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80336E68: nop

    // 0x80336E6C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80336E70: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80336E74: nop

    // 0x80336E78: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x80336E7C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80336E80: nop

    // 0x80336E84: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x80336E88: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80336E8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336E90: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80336E94: nop

    // 0x80336E98: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
L_80336E9C:
    // 0x80336E9C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80336EA0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80336EA4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336EA8: lwc1        $f12, 0x20($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80336EAC: jal         0x80015538
    // 0x80336EB0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80336EB0: nop

    after_0:
    // 0x80336EB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80336EB8: nop

    // 0x80336EBC: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x80336EC0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80336EC4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80336EC8: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x80336ECC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336ED0: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80336ED4: jal         0x80015538
    // 0x80336ED8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80336ED8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_1:
    // 0x80336EDC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80336EE0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80336EE4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80336EE8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80336EEC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80336EF0: nop

    // 0x80336EF4: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80336EF8: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x80336EFC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80336F00: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x80336F04: nop

    // 0x80336F08: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80336F0C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336F10: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x80336F14: lwc1        $f7, 0x79D0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X79D0);
    // 0x80336F18: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80336F1C: lwc1        $f6, 0x79D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X79D4);
    // 0x80336F20: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x80336F24: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80336F28: jal         0x80034970
    // 0x80336F2C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80336F2C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_2:
    // 0x80336F30: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80336F34: nop

    // 0x80336F38: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80336F3C: nop

    // 0x80336F40: bc1f        L_80336F7C
    if (!c1cs) {
        // 0x80336F44: nop
    
            goto L_80336F7C;
    }
    // 0x80336F44: nop

    // 0x80336F48: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80336F4C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336F50: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80336F54: lwc1        $f5, 0x79D8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X79D8);
    // 0x80336F58: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80336F5C: lwc1        $f4, 0x79DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X79DC);
    // 0x80336F60: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80336F64: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80336F68: jal         0x80034970
    // 0x80336F6C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x80336F6C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_3:
    // 0x80336F70: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x80336F74: b           L_80336FA8
    // 0x80336F78: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
        goto L_80336FA8;
    // 0x80336F78: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_80336F7C:
    // 0x80336F7C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80336F80: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336F84: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80336F88: lwc1        $f19, 0x79E0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X79E0);
    // 0x80336F8C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80336F90: lwc1        $f18, 0x79E4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X79E4);
    // 0x80336F94: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80336F98: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80336F9C: jal         0x80034970
    // 0x80336FA0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x80336FA0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x80336FA4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_80336FA8:
    // 0x80336FA8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80336FAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80336FB0: lwc1        $f6, 0x44($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80336FB4: nop

    // 0x80336FB8: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80336FBC: nop

    // 0x80336FC0: bc1f        L_80336FEC
    if (!c1cs) {
        // 0x80336FC4: nop
    
            goto L_80336FEC;
    }
    // 0x80336FC4: nop

    // 0x80336FC8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80336FCC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80336FD0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80336FD4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80336FD8: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80336FDC: lwc1        $f4, 0x44($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80336FE0: nop

    // 0x80336FE4: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x80336FE8: swc1        $f6, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f6.u32l;
L_80336FEC:
    // 0x80336FEC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80336FF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336FF4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80336FF8: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80336FFC: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80337000: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80337004: jal         0x80015538
    // 0x80337008: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80337008: nop

    after_5:
    // 0x8033700C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80337010: nop

    // 0x80337014: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x80337018: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033701C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337020: jal         0x80029C40
    // 0x80337024: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x80337024: nop

    after_6:
    // 0x80337028: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033702C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337030: jal         0x80029D04
    // 0x80337034: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x80337034: nop

    after_7:
    // 0x80337038: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033703C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80337040: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337044: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337048: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033704C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80337050: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80337054: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80337058: jal         0x80029018
    // 0x8033705C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x8033705C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80337060: beq         $v0, $zero, L_803370A4
    if (ctx->r2 == 0) {
        // 0x80337064: nop
    
            goto L_803370A4;
    }
    // 0x80337064: nop

    // 0x80337068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033706C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337070: jal         0x8002A46C
    // 0x80337074: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_9;
    // 0x80337074: nop

    after_9:
    // 0x80337078: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033707C: nop

    // 0x80337080: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x80337084: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337088: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033708C: jal         0x80029C40
    // 0x80337090: nop

    func_80029C40(rdram, ctx);
        goto after_10;
    // 0x80337090: nop

    after_10:
    // 0x80337094: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337098: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033709C: jal         0x80029D04
    // 0x803370A0: nop

    func_80029D04(rdram, ctx);
        goto after_11;
    // 0x803370A0: nop

    after_11:
L_803370A4:
    // 0x803370A4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803370A8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803370AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803370B0: lwc1        $f18, 0x3C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x803370B4: nop

    // 0x803370B8: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x803370BC: nop

    // 0x803370C0: bc1f        L_803370E8
    if (!c1cs) {
        // 0x803370C4: nop
    
            goto L_803370E8;
    }
    // 0x803370C4: nop

    // 0x803370C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803370CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803370D0: jal         0x8002B0E4
    // 0x803370D4: nop

    func_8002B0E4(rdram, ctx);
        goto after_12;
    // 0x803370D4: nop

    after_12:
    // 0x803370D8: b           L_80337120
    // 0x803370DC: nop

        goto L_80337120;
    // 0x803370DC: nop

    // 0x803370E0: b           L_80337118
    // 0x803370E4: nop

        goto L_80337118;
    // 0x803370E4: nop

L_803370E8:
    // 0x803370E8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803370EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803370F0: lwc1        $f8, 0x44($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X44);
    // 0x803370F4: nop

    // 0x803370F8: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x803370FC: nop

    // 0x80337100: bc1f        L_80337118
    if (!c1cs) {
        // 0x80337104: nop
    
            goto L_80337118;
    }
    // 0x80337104: nop

    // 0x80337108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033710C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337110: jal         0x8002B0E4
    // 0x80337114: nop

    func_8002B0E4(rdram, ctx);
        goto after_13;
    // 0x80337114: nop

    after_13:
L_80337118:
    // 0x80337118: b           L_80337120
    // 0x8033711C: nop

        goto L_80337120;
    // 0x8033711C: nop

L_80337120:
    // 0x80337120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337124: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80337128: jr          $ra
    // 0x8033712C: nop

    return;
    // 0x8033712C: nop

;}
RECOMP_FUNC void func_803371CC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803371CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803371D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803371D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803371D8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803371DC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803371E0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803371E4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803371E8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803371EC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803371F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803371F4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803371F8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803371FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80337200: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80337204: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80337208: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033720C: addiu       $a1, $a1, 0x3BA4
    ctx->r5 = ADD32(ctx->r5, 0X3BA4);
    // 0x80337210: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80337214: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80337218: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033721C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80337220: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80337224: jal         0x80027464
    // 0x80337228: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80337228: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033722C: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80337230: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80337234: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80337238: beq         $t1, $at, L_80337340
    if (ctx->r9 == ctx->r1) {
        // 0x8033723C: nop
    
            goto L_80337340;
    }
    // 0x8033723C: nop

    // 0x80337240: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x80337244: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337248: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033724C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337250: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337254: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337258: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033725C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337260: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80337264: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80337268: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x8033726C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337270: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80337274: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80337278: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033727C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80337280: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337284: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80337288: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033728C: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x80337290: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337294: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80337298: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033729C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803372A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803372A4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803372A8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803372AC: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x803372B0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803372B4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803372B8: nop

    // 0x803372BC: lh          $t0, 0xA($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XA);
    // 0x803372C0: nop

    // 0x803372C4: beq         $t0, $zero, L_803372F4
    if (ctx->r8 == 0) {
        // 0x803372C8: nop
    
            goto L_803372F4;
    }
    // 0x803372C8: nop

    // 0x803372CC: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x803372D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803372D4: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x803372D8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803372DC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803372E0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803372E4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803372E8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803372EC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803372F0: sh          $t1, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r9;
L_803372F4:
    // 0x803372F4: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x803372F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803372FC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80337300: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80337304: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337308: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033730C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337310: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80337314: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80337318: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
    // 0x8033731C: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80337320: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80337324: addiu       $a3, $a3, 0x7424
    ctx->r7 = ADD32(ctx->r7, 0X7424);
    // 0x80337328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033732C: jal         0x8001ABF4
    // 0x80337330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80337330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80337334: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80337338: jal         0x8001BB34
    // 0x8033733C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x8033733C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_80337340:
    // 0x80337340: b           L_80337348
    // 0x80337344: nop

        goto L_80337348;
    // 0x80337344: nop

L_80337348:
    // 0x80337348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033734C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337350: jr          $ra
    // 0x80337354: nop

    return;
    // 0x80337354: nop

;}
RECOMP_FUNC void func_80335ADC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335ADC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335AE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335AE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335AE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335AEC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335AF0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80335AF4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335AF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335AFC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335B00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335B04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335B08: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80335B0C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80335B10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335B14: beq         $s0, $at, L_80335B48
    if (ctx->r16 == ctx->r1) {
        // 0x80335B18: nop
    
            goto L_80335B48;
    }
    // 0x80335B18: nop

    // 0x80335B1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335B20: beq         $s0, $at, L_80335B58
    if (ctx->r16 == ctx->r1) {
        // 0x80335B24: nop
    
            goto L_80335B58;
    }
    // 0x80335B24: nop

    // 0x80335B28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80335B2C: beq         $s0, $at, L_80335B68
    if (ctx->r16 == ctx->r1) {
        // 0x80335B30: nop
    
            goto L_80335B68;
    }
    // 0x80335B30: nop

    // 0x80335B34: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80335B38: beq         $s0, $at, L_80335B78
    if (ctx->r16 == ctx->r1) {
        // 0x80335B3C: nop
    
            goto L_80335B78;
    }
    // 0x80335B3C: nop

    // 0x80335B40: b           L_80335B88
    // 0x80335B44: nop

        goto L_80335B88;
    // 0x80335B44: nop

L_80335B48:
    // 0x80335B48: jal         0x803350CC
    // 0x80335B4C: nop

    func_803350CC_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80335B4C: nop

    after_0:
    // 0x80335B50: b           L_80335B90
    // 0x80335B54: nop

        goto L_80335B90;
    // 0x80335B54: nop

L_80335B58:
    // 0x80335B58: jal         0x80335518
    // 0x80335B5C: nop

    func_80335518_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80335B5C: nop

    after_1:
    // 0x80335B60: b           L_80335B90
    // 0x80335B64: nop

        goto L_80335B90;
    // 0x80335B64: nop

L_80335B68:
    // 0x80335B68: jal         0x80335718
    // 0x80335B6C: nop

    func_80335718_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x80335B6C: nop

    after_2:
    // 0x80335B70: b           L_80335B90
    // 0x80335B74: nop

        goto L_80335B90;
    // 0x80335B74: nop

L_80335B78:
    // 0x80335B78: jal         0x80335AAC
    // 0x80335B7C: nop

    func_80335AAC_unk_bin_37(rdram, ctx);
        goto after_3;
    // 0x80335B7C: nop

    after_3:
    // 0x80335B80: b           L_80335B90
    // 0x80335B84: nop

        goto L_80335B90;
    // 0x80335B84: nop

L_80335B88:
    // 0x80335B88: b           L_80335B90
    // 0x80335B8C: nop

        goto L_80335B90;
    // 0x80335B8C: nop

L_80335B90:
    // 0x80335B90: b           L_80335B98
    // 0x80335B94: nop

        goto L_80335B98;
    // 0x80335B94: nop

L_80335B98:
    // 0x80335B98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335B9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80335BA0: jr          $ra
    // 0x80335BA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80335BA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80334F44_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334F44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334F48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334F4C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80334F50: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80334F54: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80334F58: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80334F5C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80334F60: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80334F64: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80334F68: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80334F6C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80334F70: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80334F74: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80334F78: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80334F7C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334F80: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80334F84: addiu       $a1, $a1, 0x4054
    ctx->r5 = ADD32(ctx->r5, 0X4054);
    // 0x80334F88: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334F8C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80334F90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334F94: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80334F98: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80334F9C: jal         0x80027464
    // 0x80334FA0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80334FA0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80334FA4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80334FA8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334FAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334FB0: beq         $t1, $at, L_8033503C
    if (ctx->r9 == ctx->r1) {
        // 0x80334FB4: nop
    
            goto L_8033503C;
    }
    // 0x80334FB4: nop

    // 0x80334FB8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334FBC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80334FC0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334FC4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334FC8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334FCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334FD0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334FD4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334FD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334FDC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334FE0: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80334FE4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334FE8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80334FEC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334FF0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334FF4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334FF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334FFC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335000: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335004: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335008: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033500C: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80335010: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335014: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80335018: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033501C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335020: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335024: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335028: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033502C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335030: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335034: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80335038: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_8033503C:
    // 0x8033503C: b           L_80335044
    // 0x80335040: nop

        goto L_80335044;
    // 0x80335040: nop

L_80335044:
    // 0x80335044: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335048: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033504C: jr          $ra
    // 0x80335050: nop

    return;
    // 0x80335050: nop

;}
RECOMP_FUNC void func_80334E64_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334E64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80334E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334E6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334E70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334E74: jal         0x8002B0E4
    // 0x80334E78: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80334E78: nop

    after_0:
    // 0x80334E7C: b           L_80334E84
    // 0x80334E80: nop

        goto L_80334E84;
    // 0x80334E80: nop

L_80334E84:
    // 0x80334E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80334E8C: jr          $ra
    // 0x80334E90: nop

    return;
    // 0x80334E90: nop

;}
RECOMP_FUNC void func_80334878_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334878: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033487C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334880: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334884: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334888: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033488C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334890: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334894: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334898: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033489C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803348A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803348A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803348A8: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x803348AC: nop

    // 0x803348B0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x803348B4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x803348B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803348BC: beq         $s0, $at, L_803348D8
    if (ctx->r16 == ctx->r1) {
        // 0x803348C0: nop
    
            goto L_803348D8;
    }
    // 0x803348C0: nop

    // 0x803348C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803348C8: beq         $s0, $at, L_803348E8
    if (ctx->r16 == ctx->r1) {
        // 0x803348CC: nop
    
            goto L_803348E8;
    }
    // 0x803348CC: nop

    // 0x803348D0: b           L_803348F8
    // 0x803348D4: nop

        goto L_803348F8;
    // 0x803348D4: nop

L_803348D8:
    // 0x803348D8: jal         0x8033425C
    // 0x803348DC: nop

    func_8033425C_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x803348DC: nop

    after_0:
    // 0x803348E0: b           L_80334900
    // 0x803348E4: nop

        goto L_80334900;
    // 0x803348E4: nop

L_803348E8:
    // 0x803348E8: jal         0x8033434C
    // 0x803348EC: nop

    func_8033434C_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x803348EC: nop

    after_1:
    // 0x803348F0: b           L_80334900
    // 0x803348F4: nop

        goto L_80334900;
    // 0x803348F4: nop

L_803348F8:
    // 0x803348F8: b           L_80334900
    // 0x803348FC: nop

        goto L_80334900;
    // 0x803348FC: nop

L_80334900:
    // 0x80334900: b           L_80334908
    // 0x80334904: nop

        goto L_80334908;
    // 0x80334904: nop

L_80334908:
    // 0x80334908: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033490C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334910: jr          $ra
    // 0x80334914: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334914: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033655C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033655C: jr          $ra
    // 0x80336560: nop

    return;
    // 0x80336560: nop

    // 0x80336564: jr          $ra
    // 0x80336568: nop

    return;
    // 0x80336568: nop

;}
RECOMP_FUNC void func_803339A8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803339A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803339AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803339B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803339B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803339B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803339BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803339C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803339C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803339C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803339CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803339D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803339D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803339D8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803339DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803339E0: nop

    // 0x803339E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803339E8: nop

    // 0x803339EC: bne         $t1, $zero, L_80333AB0
    if (ctx->r9 != 0) {
        // 0x803339F0: nop
    
            goto L_80333AB0;
    }
    // 0x803339F0: nop

    // 0x803339F4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803339F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803339FC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80333A00: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333A04: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80333A08: nop

    // 0x80333A0C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80333A10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80333A14: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80333A18: nop

    // 0x80333A1C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80333A20: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80333A24: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80333A28: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x80333A2C: nop

    // 0x80333A30: bgez        $t7, L_80333A44
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80333A34: andi        $t8, $t7, 0x3
        ctx->r24 = ctx->r15 & 0X3;
            goto L_80333A44;
    }
    // 0x80333A34: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x80333A38: beq         $t8, $zero, L_80333A44
    if (ctx->r24 == 0) {
        // 0x80333A3C: nop
    
            goto L_80333A44;
    }
    // 0x80333A3C: nop

    // 0x80333A40: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_80333A44:
    // 0x80333A44: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333A48: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80333A4C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333A50: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80333A54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333A58: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333A5C: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80333A60: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80333A64: jal         0x80015538
    // 0x80333A68: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80333A68: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_0:
    // 0x80333A6C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80333A70: nop

    // 0x80333A74: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x80333A78: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333A7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333A80: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80333A84: nop

    // 0x80333A88: swc1        $f10, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f10.u32l;
    // 0x80333A8C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80333A90: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x80333A94: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x80333A98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333AA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80333AA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333AA8: jal         0x80019448
    // 0x80333AAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80333AAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_80333AB0:
    // 0x80333AB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333AB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333AB8: jal         0x80029C40
    // 0x80333ABC: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80333ABC: nop

    after_2:
    // 0x80333AC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333AC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333AC8: jal         0x80029D04
    // 0x80333ACC: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80333ACC: nop

    after_3:
    // 0x80333AD0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80333AD4: nop

    // 0x80333AD8: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x80333ADC: nop

    // 0x80333AE0: bne         $t5, $zero, L_80333B48
    if (ctx->r13 != 0) {
        // 0x80333AE4: nop
    
            goto L_80333B48;
    }
    // 0x80333AE4: nop

    // 0x80333AE8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80333AEC: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x80333AF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333AF4: lwc1        $f16, 0x40($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80333AF8: nop

    // 0x80333AFC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80333B00: nop

    // 0x80333B04: bc1f        L_80333B34
    if (!c1cs) {
        // 0x80333B08: nop
    
            goto L_80333B34;
    }
    // 0x80333B08: nop

    // 0x80333B0C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B10: nop

    // 0x80333B14: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x80333B18: lwc1        $f12, 0x40($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X40);
    // 0x80333B1C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80333B20: jal         0x80015538
    // 0x80333B24: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80333B24: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x80333B28: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B2C: b           L_80333B40
    // 0x80333B30: swc1        $f0, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f0.u32l;
        goto L_80333B40;
    // 0x80333B30: swc1        $f0, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f0.u32l;
L_80333B34:
    // 0x80333B34: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B38: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80333B3C: sh          $t0, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = ctx->r8;
L_80333B40:
    // 0x80333B40: b           L_80333BA4
    // 0x80333B44: nop

        goto L_80333BA4;
    // 0x80333B44: nop

L_80333B48:
    // 0x80333B48: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B4C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80333B50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333B54: lwc1        $f6, 0x40($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X40);
    // 0x80333B58: nop

    // 0x80333B5C: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80333B60: nop

    // 0x80333B64: bc1f        L_80333B98
    if (!c1cs) {
        // 0x80333B68: nop
    
            goto L_80333B98;
    }
    // 0x80333B68: nop

    // 0x80333B6C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B70: nop

    // 0x80333B74: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x80333B78: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80333B7C: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x80333B80: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80333B84: jal         0x80015538
    // 0x80333B88: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80333B88: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_5:
    // 0x80333B8C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B90: b           L_80333BA4
    // 0x80333B94: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
        goto L_80333BA4;
    // 0x80333B94: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
L_80333B98:
    // 0x80333B98: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B9C: nop

    // 0x80333BA0: sh          $zero, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = 0;
L_80333BA4:
    // 0x80333BA4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80333BA8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80333BAC: lh          $t9, 0xAE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAE);
    // 0x80333BB0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80333BB4: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80333BB8: jal         0x80015538
    // 0x80333BBC: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80333BBC: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_6:
    // 0x80333BC0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80333BC4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80333BC8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80333BCC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80333BD0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80333BD4: nop

    // 0x80333BD8: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80333BDC: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80333BE0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80333BE4: sh          $t1, 0xAE($t2)
    MEM_H(0XAE, ctx->r10) = ctx->r9;
    // 0x80333BE8: nop

    // 0x80333BEC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80333BF0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333BF4: lh          $t4, 0xAE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAE);
    // 0x80333BF8: lwc1        $f9, 0x7978($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7978);
    // 0x80333BFC: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80333C00: lwc1        $f8, 0x797C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X797C);
    // 0x80333C04: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80333C08: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80333C0C: jal         0x80034970
    // 0x80333C10: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x80333C10: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_7:
    // 0x80333C14: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C18: nop

    // 0x80333C1C: lh          $t6, 0xB0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB0);
    // 0x80333C20: nop

    // 0x80333C24: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80333C28: nop

    // 0x80333C2C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80333C30: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80333C34: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80333C38: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C3C: nop

    // 0x80333C40: lwc1        $f6, 0x40($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X40);
    // 0x80333C44: nop

    // 0x80333C48: swc1        $f6, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f6.u32l;
    // 0x80333C4C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C50: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80333C54: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80333C58: jal         0x80015538
    // 0x80333C5C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x80333C5C: nop

    after_8:
    // 0x80333C60: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C64: nop

    // 0x80333C68: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80333C6C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C70: nop

    // 0x80333C74: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80333C78: nop

    // 0x80333C7C: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x80333C80: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C84: nop

    // 0x80333C88: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x80333C8C: nop

    // 0x80333C90: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80333C94: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x80333C98: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C9C: nop

    // 0x80333CA0: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x80333CA4: nop

    // 0x80333CA8: slti        $at, $t5, 0x2000
    ctx->r1 = SIGNED(ctx->r13) < 0X2000 ? 1 : 0;
    // 0x80333CAC: bne         $at, $zero, L_80333CC0
    if (ctx->r1 != 0) {
        // 0x80333CB0: nop
    
            goto L_80333CC0;
    }
    // 0x80333CB0: nop

    // 0x80333CB4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80333CB8: nop

    // 0x80333CBC: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_80333CC0:
    // 0x80333CC0: b           L_80333CC8
    // 0x80333CC4: nop

        goto L_80333CC8;
    // 0x80333CC4: nop

L_80333CC8:
    // 0x80333CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333CCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333CD0: jr          $ra
    // 0x80333CD4: nop

    return;
    // 0x80333CD4: nop

;}
RECOMP_FUNC void func_8033131C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033131C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331324: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331328: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033132C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331330: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331334: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331338: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033133C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331340: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331344: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331348: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033134C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331350: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331354: nop

    // 0x80331358: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033135C: nop

    // 0x80331360: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    // 0x80331364: lb          $t2, 0x1F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X1F);
    // 0x80331368: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033136C: beq         $t2, $at, L_8033138C
    if (ctx->r10 == ctx->r1) {
        // 0x80331370: nop
    
            goto L_8033138C;
    }
    // 0x80331370: nop

    // 0x80331374: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x80331378: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8033137C: addiu       $a3, $a3, 0x7440
    ctx->r7 = ADD32(ctx->r7, 0X7440);
    // 0x80331380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331384: jal         0x8001ABF4
    // 0x80331388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80331388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_8033138C:
    // 0x8033138C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331390: nop

    // 0x80331394: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x80331398: nop

    // 0x8033139C: sb          $t4, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r12;
    // 0x803313A0: lb          $t5, 0x1F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1F);
    // 0x803313A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803313A8: beq         $t5, $at, L_803313C8
    if (ctx->r13 == ctx->r1) {
        // 0x803313AC: nop
    
            goto L_803313C8;
    }
    // 0x803313AC: nop

    // 0x803313B0: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x803313B4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803313B8: addiu       $a3, $a3, 0x7440
    ctx->r7 = ADD32(ctx->r7, 0X7440);
    // 0x803313BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803313C0: jal         0x8001ABF4
    // 0x803313C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803313C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_803313C8:
    // 0x803313C8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803313CC: nop

    // 0x803313D0: lh          $t7, 0xEC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEC);
    // 0x803313D4: nop

    // 0x803313D8: sb          $t7, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r15;
    // 0x803313DC: lb          $t8, 0x1F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X1F);
    // 0x803313E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803313E4: beq         $t8, $at, L_8033142C
    if (ctx->r24 == ctx->r1) {
        // 0x803313E8: nop
    
            goto L_8033142C;
    }
    // 0x803313E8: nop

    // 0x803313EC: lb          $t9, 0x1F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X1F);
    // 0x803313F0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803313F4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803313F8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803313FC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331400: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331404: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331408: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033140C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80331410: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80331414: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80331418: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8033141C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80331420: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80331424: nop

    // 0x80331428: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033142C:
    // 0x8033142C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331430: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80331434: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80331438: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033143C: nop

    // 0x80331440: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80331444: b           L_8033144C
    // 0x80331448: nop

        goto L_8033144C;
    // 0x80331448: nop

L_8033144C:
    // 0x8033144C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331454: jr          $ra
    // 0x80331458: nop

    return;
    // 0x80331458: nop

;}
RECOMP_FUNC void func_8033443C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033443C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80334440: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80334444: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80334448: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033444C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334450: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334454: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334458: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033445C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334460: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334464: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334468: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033446C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334470: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80334474: sb          $zero, 0x7($sp)
    MEM_B(0X7, ctx->r29) = 0;
    // 0x80334478: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8033447C: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x80334480: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80334484: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x80334488: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033448C: beq         $t3, $at, L_8033449C
    if (ctx->r11 == ctx->r1) {
        // 0x80334490: nop
    
            goto L_8033449C;
    }
    // 0x80334490: nop

    // 0x80334494: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80334498: sb          $t4, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r12;
L_8033449C:
    // 0x8033449C: lb          $v0, 0x7($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X7);
    // 0x803344A0: b           L_803344B0
    // 0x803344A4: nop

        goto L_803344B0;
    // 0x803344A4: nop

    // 0x803344A8: b           L_803344B0
    // 0x803344AC: nop

        goto L_803344B0;
    // 0x803344AC: nop

L_803344B0:
    // 0x803344B0: jr          $ra
    // 0x803344B4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x803344B4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80330000_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330008: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8033000C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330010: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330014: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330018: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033001C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330020: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330024: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330028: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033002C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330030: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330034: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330038: lb          $t1, 0x2B($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2B);
    // 0x8033003C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330040: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80330044: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80330048: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x8033004C: nop

    // 0x80330050: sb          $t4, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r12;
    // 0x80330054: lb          $t5, 0x1F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1F);
    // 0x80330058: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033005C: beq         $t5, $at, L_803300F8
    if (ctx->r13 == ctx->r1) {
        // 0x80330060: nop
    
            goto L_803300F8;
    }
    // 0x80330060: nop

    // 0x80330064: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x80330068: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033006C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330070: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330074: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033007C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330080: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330084: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330088: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8033008C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330090: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330094: lh          $t0, 0x104($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X104);
    // 0x80330098: nop

    // 0x8033009C: bne         $t0, $at, L_803300B4
    if (ctx->r8 != ctx->r1) {
        // 0x803300A0: nop
    
            goto L_803300B4;
    }
    // 0x803300A0: nop

    // 0x803300A4: lh          $t2, 0x100($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X100);
    // 0x803300A8: nop

    // 0x803300AC: bne         $t2, $zero, L_803300F8
    if (ctx->r10 != 0) {
        // 0x803300B0: nop
    
            goto L_803300F8;
    }
    // 0x803300B0: nop

L_803300B4:
    // 0x803300B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803300B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803300BC: lb          $a1, 0x2B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2B);
    // 0x803300C0: jal         0x800281A4
    // 0x803300C4: nop

    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x803300C4: nop

    after_0:
    // 0x803300C8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x803300CC: nop

    // 0x803300D0: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
    // 0x803300D4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x803300D8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803300DC: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x803300E0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x803300E4: nop

    // 0x803300E8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x803300EC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803300F0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x803300F4: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
L_803300F8:
    // 0x803300F8: lb          $v0, 0x1F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X1F);
    // 0x803300FC: b           L_8033010C
    // 0x80330100: nop

        goto L_8033010C;
    // 0x80330100: nop

    // 0x80330104: b           L_8033010C
    // 0x80330108: nop

        goto L_8033010C;
    // 0x80330108: nop

L_8033010C:
    // 0x8033010C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330114: jr          $ra
    // 0x80330118: nop

    return;
    // 0x80330118: nop

;}
RECOMP_FUNC void func_80332470_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332470: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80332474: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332478: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8033247C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80332480: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80332484: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80332488: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033248C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332490: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80332494: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80332498: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033249C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x803324A0: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x803324A4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803324A8: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803324AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803324B0: jal         0x80027464
    // 0x803324B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803324B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x803324B8: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x803324BC: lh          $t7, 0x3A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3A);
    // 0x803324C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803324C4: beq         $t7, $at, L_803326D4
    if (ctx->r15 == ctx->r1) {
        // 0x803324C8: nop
    
            goto L_803326D4;
    }
    // 0x803324C8: nop

    // 0x803324CC: lh          $a0, 0x46($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X46);
    // 0x803324D0: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x803324D4: jal         0x80026F10
    // 0x803324D8: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x803324D8: nop

    after_1:
    // 0x803324DC: lh          $t8, 0x3A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3A);
    // 0x803324E0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803324E4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803324E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803324EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803324F0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803324F4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803324F8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803324FC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80332500: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80332504: lh          $t2, 0x4A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X4A);
    // 0x80332508: nop

    // 0x8033250C: bgez        $t2, L_8033251C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80332510: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_8033251C;
    }
    // 0x80332510: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80332514: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x80332518: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_8033251C:
    // 0x8033251C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332520: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332524: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80332528: addiu       $t5, $t4, -0x14
    ctx->r13 = ADD32(ctx->r12, -0X14);
    // 0x8033252C: sh          $t5, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r13;
    // 0x80332530: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x80332534: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80332538: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8033253C: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80332540: jal         0x80015538
    // 0x80332544: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80332544: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_2:
    // 0x80332548: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8033254C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332550: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80332554: lwc1        $f19, 0x7948($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7948);
    // 0x80332558: lwc1        $f18, 0x794C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X794C);
    // 0x8033255C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80332560: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80332564: jal         0x80034970
    // 0x80332568: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x80332568: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_3:
    // 0x8033256C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80332570: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332574: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332578: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8033257C: swc1        $f8, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f8.u32l;
    // 0x80332580: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332584: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80332588: lwc1        $f19, 0x7950($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7950);
    // 0x8033258C: lwc1        $f18, 0x7954($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7954);
    // 0x80332590: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80332594: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80332598: jal         0x80036570
    // 0x8033259C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x8033259C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x803325A0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803325A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803325A8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803325AC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x803325B0: swc1        $f8, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f8.u32l;
    // 0x803325B4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x803325B8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803325BC: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803325C0: lwc1        $f16, 0x24($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X24);
    // 0x803325C4: nop

    // 0x803325C8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803325CC: swc1        $f18, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f18.u32l;
    // 0x803325D0: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x803325D4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803325D8: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803325DC: lwc1        $f6, 0x2C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x803325E0: nop

    // 0x803325E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803325E8: swc1        $f8, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f8.u32l;
    // 0x803325EC: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x803325F0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803325F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803325F8: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x803325FC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332600: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80332604: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
    // 0x80332608: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8033260C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332610: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332614: nop

    // 0x80332618: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x8033261C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80332620: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332624: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80332628: nop

    // 0x8033262C: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x80332630: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80332634: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332638: lwc1        $f8, 0x40($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X40);
    // 0x8033263C: nop

    // 0x80332640: swc1        $f8, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f8.u32l;
    // 0x80332644: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80332648: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033264C: lwc1        $f10, 0x3C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80332650: nop

    // 0x80332654: swc1        $f10, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f10.u32l;
    // 0x80332658: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033265C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80332660: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332664: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332668: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033266C: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x80332670: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332674: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x80332678: sh          $t7, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r15;
    // 0x8033267C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332680: nop

    // 0x80332684: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80332688: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033268C: lwc1        $f16, 0x7958($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7958);
    // 0x80332690: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332694: nop

    // 0x80332698: swc1        $f16, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f16.u32l;
    // 0x8033269C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803326A0: nop

    // 0x803326A4: lwc1        $f20, 0xC($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0XC);
    // 0x803326A8: nop

    // 0x803326AC: swc1        $f20, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f20.u32l;
    // 0x803326B0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803326B4: nop

    // 0x803326B8: swc1        $f20, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f20.u32l;
    // 0x803326BC: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    // 0x803326C0: jal         0x80029C40
    // 0x803326C4: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x803326C4: nop

    after_5:
    // 0x803326C8: lh          $a0, 0x3A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3A);
    // 0x803326CC: jal         0x80029D04
    // 0x803326D0: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x803326D0: nop

    after_6:
L_803326D4:
    // 0x803326D4: lh          $v0, 0x3A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X3A);
    // 0x803326D8: b           L_803326E8
    // 0x803326DC: nop

        goto L_803326E8;
    // 0x803326DC: nop

    // 0x803326E0: b           L_803326E8
    // 0x803326E4: nop

        goto L_803326E8;
    // 0x803326E4: nop

L_803326E8:
    // 0x803326E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803326EC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803326F0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803326F4: jr          $ra
    // 0x803326F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803326F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
