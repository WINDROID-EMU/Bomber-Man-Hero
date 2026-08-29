#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80334244_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334238: jr          $ra
    // 0x8033423C: nop

    return;
    // 0x8033423C: nop

    // 0x80334240: jr          $ra
    // 0x80334244: nop

    return;
    // 0x80334244: nop

;}
RECOMP_FUNC void func_80332CB0_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332CB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332CB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332CBC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332CC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332CC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332CC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CCC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332CD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CD4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332CD8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332CDC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332CE0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332CE4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332CE8: nop

    // 0x80332CEC: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332CF0: nop

    // 0x80332CF4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80332CF8: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x80332CFC: beq         $at, $zero, L_80332D70
    if (ctx->r1 == 0) {
        // 0x80332D00: nop
    
            goto L_80332D70;
    }
    // 0x80332D00: nop

    // 0x80332D04: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332D08: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332D0C: addu        $at, $at, $t2
    gpr jr_addend_80332D18 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332D10: lw          $t2, 0x7960($at)
    ctx->r10 = ADD32(ctx->r1, 0X7960);
    // 0x80332D14: nop

    // 0x80332D18: jr          $t2
    // 0x80332D1C: nop

    switch (jr_addend_80332D18 >> 2) {
        case 0: goto L_80332D20; break;
        case 1: goto L_80332D30; break;
        case 2: goto L_80332D50; break;
        case 3: goto L_80332D40; break;
        case 4: goto L_80332D60; break;
        default: switch_error(__func__, 0x80332D18, 0x80337960);
    }
    // 0x80332D1C: nop

L_80332D20:
    // 0x80332D20: jal         0x803328CC
    // 0x80332D24: nop

    func_803328CC_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80332D24: nop

    after_0:
    // 0x80332D28: b           L_80332D78
    // 0x80332D2C: nop

        goto L_80332D78;
    // 0x80332D2C: nop

L_80332D30:
    // 0x80332D30: jal         0x80332A04
    // 0x80332D34: nop

    func_80332A04_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80332D34: nop

    after_1:
    // 0x80332D38: b           L_80332D78
    // 0x80332D3C: nop

        goto L_80332D78;
    // 0x80332D3C: nop

L_80332D40:
    // 0x80332D40: jal         0x80332C90
    // 0x80332D44: nop

    func_80332C90_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x80332D44: nop

    after_2:
    // 0x80332D48: b           L_80332D78
    // 0x80332D4C: nop

        goto L_80332D78;
    // 0x80332D4C: nop

L_80332D50:
    // 0x80332D50: jal         0x80332C60
    // 0x80332D54: nop

    func_80332C60_unk_bin_37(rdram, ctx);
        goto after_3;
    // 0x80332D54: nop

    after_3:
    // 0x80332D58: b           L_80332D78
    // 0x80332D5C: nop

        goto L_80332D78;
    // 0x80332D5C: nop

L_80332D60:
    // 0x80332D60: jal         0x80332CA0
    // 0x80332D64: nop

    func_80332CA0_unk_bin_37(rdram, ctx);
        goto after_4;
    // 0x80332D64: nop

    after_4:
    // 0x80332D68: b           L_80332D78
    // 0x80332D6C: nop

        goto L_80332D78;
    // 0x80332D6C: nop

L_80332D70:
    // 0x80332D70: b           L_80332D78
    // 0x80332D74: nop

        goto L_80332D78;
    // 0x80332D74: nop

L_80332D78:
    // 0x80332D78: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332D7C: nop

    // 0x80332D80: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80332D84: nop

    // 0x80332D88: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80332D8C: sh          $t5, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r13;
    // 0x80332D90: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80332D94: nop

    // 0x80332D98: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x80332D9C: nop

    // 0x80332DA0: slti        $at, $t7, 0x2000
    ctx->r1 = SIGNED(ctx->r15) < 0X2000 ? 1 : 0;
    // 0x80332DA4: bne         $at, $zero, L_80332DB8
    if (ctx->r1 != 0) {
        // 0x80332DA8: nop
    
            goto L_80332DB8;
    }
    // 0x80332DA8: nop

    // 0x80332DAC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80332DB0: addiu       $t8, $zero, 0x2000
    ctx->r24 = ADD32(0, 0X2000);
    // 0x80332DB4: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
L_80332DB8:
    // 0x80332DB8: b           L_80332DC0
    // 0x80332DBC: nop

        goto L_80332DC0;
    // 0x80332DBC: nop

L_80332DC0:
    // 0x80332DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332DC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332DC8: jr          $ra
    // 0x80332DCC: nop

    return;
    // 0x80332DCC: nop

;}
RECOMP_FUNC void func_8033145C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033145C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331464: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331468: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033146C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331470: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331474: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331478: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033147C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331480: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331484: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331488: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033148C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331490: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331494: nop

    // 0x80331498: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033149C: nop

    // 0x803314A0: bne         $t1, $zero, L_803315B8
    if (ctx->r9 != 0) {
        // 0x803314A4: nop
    
            goto L_803315B8;
    }
    // 0x803314A4: nop

    // 0x803314A8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803314AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803314B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803314B4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803314B8: nop

    // 0x803314BC: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x803314C0: nop

    // 0x803314C4: sh          $t5, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r13;
    // 0x803314C8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803314CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803314D0: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803314D4: nop

    // 0x803314D8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x803314DC: nop

    // 0x803314E0: bc1f        L_80331550
    if (!c1cs) {
        // 0x803314E4: nop
    
            goto L_80331550;
    }
    // 0x803314E4: nop

    // 0x803314E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803314EC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803314F0: nop

    // 0x803314F4: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
    // 0x803314F8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803314FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331500: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331504: nop

    // 0x80331508: swc1        $f10, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f10.u32l;
    // 0x8033150C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80331510: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331514: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80331518: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033151C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331520: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80331524: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331528: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8033152C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331530: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331534: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x80331538: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8033153C: jal         0x80015538
    // 0x80331540: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80331540: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_0:
    // 0x80331544: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331548: b           L_803315B8
    // 0x8033154C: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
        goto L_803315B8;
    // 0x8033154C: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
L_80331550:
    // 0x80331550: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80331554: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331558: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033155C: nop

    // 0x80331560: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
    // 0x80331564: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331568: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033156C: nop

    // 0x80331570: swc1        $f4, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f4.u32l;
    // 0x80331574: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331578: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033157C: lh          $t6, 0xA8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XA8);
    // 0x80331580: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80331584: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331588: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8033158C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331590: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80331594: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331598: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033159C: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x803315A0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x803315A4: jal         0x80015538
    // 0x803315A8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803315A8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x803315AC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803315B0: nop

    // 0x803315B4: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
L_803315B8:
    // 0x803315B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315C0: jal         0x80029C40
    // 0x803315C4: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x803315C4: nop

    after_2:
    // 0x803315C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315D0: jal         0x80029D04
    // 0x803315D4: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x803315D4: nop

    after_3:
    // 0x803315D8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803315DC: nop

    // 0x803315E0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803315E4: nop

    // 0x803315E8: addiu       $t1, $t0, -0x8
    ctx->r9 = ADD32(ctx->r8, -0X8);
    // 0x803315EC: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x803315F0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803315F4: nop

    // 0x803315F8: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x803315FC: nop

    // 0x80331600: bgtz        $t3, L_80331638
    if (SIGNED(ctx->r11) > 0) {
        // 0x80331604: nop
    
            goto L_80331638;
    }
    // 0x80331604: nop

    // 0x80331608: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033160C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80331610: sh          $t5, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r13;
    // 0x80331614: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80331618: nop

    // 0x8033161C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80331620: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80331624: nop

    // 0x80331628: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x8033162C: nop

    // 0x80331630: negu        $t0, $t8
    ctx->r8 = SUB32(0, ctx->r24);
    // 0x80331634: sh          $t0, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r8;
L_80331638:
    // 0x80331638: jal         0x803304D0
    // 0x8033163C: nop

    func_803304D0_unk_bin_37(rdram, ctx);
        goto after_4;
    // 0x8033163C: nop

    after_4:
    // 0x80331640: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    // 0x80331644: lb          $t1, 0x1B($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X1B);
    // 0x80331648: nop

    // 0x8033164C: bne         $t1, $zero, L_8033166C
    if (ctx->r9 != 0) {
        // 0x80331650: nop
    
            goto L_8033166C;
    }
    // 0x80331650: nop

    // 0x80331654: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331658: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8033165C: sh          $t9, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r25;
    // 0x80331660: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80331664: nop

    // 0x80331668: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033166C:
    // 0x8033166C: b           L_80331674
    // 0x80331670: nop

        goto L_80331674;
    // 0x80331670: nop

L_80331674:
    // 0x80331674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331678: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033167C: jr          $ra
    // 0x80331680: nop

    return;
    // 0x80331680: nop

;}
RECOMP_FUNC void func_8033781C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033781C: jr          $ra
    // 0x80337820: nop

    return;
    // 0x80337820: nop

    // 0x80337824: jr          $ra
    // 0x80337828: nop

    return;
    // 0x80337828: nop

;}
RECOMP_FUNC void func_803344B8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803344B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803344BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803344C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803344C4: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x803344C8: sb          $zero, 0x26($sp)
    MEM_B(0X26, ctx->r29) = 0;
L_803344CC:
    // 0x803344CC: lb          $a0, 0x26($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X26);
    // 0x803344D0: jal         0x8033443C
    // 0x803344D4: nop

    func_8033443C_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x803344D4: nop

    after_0:
    // 0x803344D8: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x803344DC: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x803344E0: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x803344E4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803344E8: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x803344EC: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
    // 0x803344F0: lb          $t9, 0x26($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X26);
    // 0x803344F4: nop

    // 0x803344F8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803344FC: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x80334500: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x80334504: slti        $at, $t2, 0x6
    ctx->r1 = SIGNED(ctx->r10) < 0X6 ? 1 : 0;
    // 0x80334508: bne         $at, $zero, L_803344CC
    if (ctx->r1 != 0) {
        // 0x8033450C: sb          $t0, 0x26($sp)
        MEM_B(0X26, ctx->r29) = ctx->r8;
            goto L_803344CC;
    }
    // 0x8033450C: sb          $t0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r8;
    // 0x80334510: lb          $v0, 0x27($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X27);
    // 0x80334514: b           L_80334524
    // 0x80334518: nop

        goto L_80334524;
    // 0x80334518: nop

    // 0x8033451C: b           L_80334524
    // 0x80334520: nop

        goto L_80334524;
    // 0x80334520: nop

L_80334524:
    // 0x80334524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033452C: jr          $ra
    // 0x80334530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033056C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033056C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330574: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330578: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033057C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80330580: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330584: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330588: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033058C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80330590: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330594: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330598: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033059C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803305A0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x803305A4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803305A8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803305AC: addiu       $a1, $a1, 0x3B74
    ctx->r5 = ADD32(ctx->r5, 0X3B74);
    // 0x803305B0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803305B4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803305B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x803305BC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803305C0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803305C4: jal         0x80027464
    // 0x803305C8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803305C8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803305CC: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x803305D0: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x803305D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803305D8: beq         $t1, $at, L_8033100C
    if (ctx->r9 == ctx->r1) {
        // 0x803305DC: nop
    
            goto L_8033100C;
    }
    // 0x803305DC: nop

    // 0x803305E0: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x803305E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803305E8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803305EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803305F0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803305F4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803305F8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803305FC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330600: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80330604: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80330608: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x8033060C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330610: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330614: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330618: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033061C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330620: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330624: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330628: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033062C: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x80330630: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x80330634: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330638: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033063C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330640: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330644: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330648: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033064C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330650: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x80330654: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x80330658: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033065C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330660: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330664: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330668: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033066C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330670: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330674: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330678: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033067C: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80330680: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80330684: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330688: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8033068C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330690: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330694: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330698: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033069C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803306A0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803306A4: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x803306A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306AC: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x803306B0: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x803306B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803306B8: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x803306BC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803306C0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803306C4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x803306C8: sh          $t4, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r12;
    // 0x803306CC: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x803306D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803306D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803306DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803306E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803306E4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803306E8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803306EC: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x803306F0: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x803306F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306F8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803306FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330700: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330704: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330708: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033070C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330710: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330714: sb          $t6, 0x4253($at)
    MEM_B(0X4253, ctx->r1) = ctx->r14;
    // 0x80330718: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x8033071C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330720: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80330724: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330728: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033072C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330730: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330734: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330738: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033073C: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x80330740: jal         0x8001BB34
    // 0x80330744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80330744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80330748: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x8033074C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330750: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80330754: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80330758: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033075C: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80330760: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330764: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330768: lh          $t5, 0x4238($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4238);
    // 0x8033076C: nop

    // 0x80330770: sh          $t5, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r13;
    // 0x80330774: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x80330778: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033077C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330780: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330784: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330788: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033078C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330790: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330794: lh          $t0, 0x423A($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X423A);
    // 0x80330798: nop

    // 0x8033079C: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    // 0x803307A0: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x803307A4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803307A8: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x803307AC: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803307B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803307B4: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803307B8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803307BC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803307C0: lh          $t3, 0x423C($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X423C);
    // 0x803307C4: nop

    // 0x803307C8: sh          $t3, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r11;
    // 0x803307CC: lh          $t7, 0x2C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2C);
    // 0x803307D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307D4: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x803307D8: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x803307DC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803307E0: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x803307E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803307E8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803307EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803307F0: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x803307F4: lh          $t5, 0x2C($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2C);
    // 0x803307F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307FC: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80330800: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330804: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330808: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033080C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330810: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330814: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330818: lh          $t9, 0x2C($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2C);
    // 0x8033081C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330820: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330824: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330828: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033082C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330830: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330834: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330838: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x8033083C: lh          $t1, 0x2C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2C);
    // 0x80330840: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330844: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80330848: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033084C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330850: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330854: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330858: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033085C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330860: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x80330864: lh          $t2, 0x2A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2A);
    // 0x80330868: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033086C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80330870: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330874: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330878: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033087C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330880: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330884: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330888: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8033088C: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x80330890: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330894: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80330898: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033089C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803308A0: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803308A4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803308A8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803308AC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803308B0: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x803308B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308B8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803308BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803308C0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803308C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803308C8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803308CC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803308D0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803308D4: sh          $t9, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r25;
    // 0x803308D8: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x803308DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308E0: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x803308E4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803308E8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803308EC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803308F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803308F4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803308F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803308FC: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x80330900: lh          $t4, 0x28($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X28);
    // 0x80330904: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330908: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033090C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330910: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330914: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330918: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033091C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330920: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330924: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80330928: lh          $t8, 0x28($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X28);
    // 0x8033092C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330930: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80330934: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80330938: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033093C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80330940: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330944: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330948: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033094C: lh          $t1, 0x28($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X28);
    // 0x80330950: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330954: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80330958: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033095C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330960: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330964: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330968: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033096C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80330970: sh          $t9, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r25;
    // 0x80330974: lh          $t2, 0x28($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X28);
    // 0x80330978: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033097C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80330980: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330984: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330988: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033098C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330990: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330994: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80330998: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x8033099C: lh          $t5, 0x28($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X28);
    // 0x803309A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309A4: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x803309A8: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803309AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803309B0: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803309B4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803309B8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803309BC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x803309C0: sh          $t7, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r15;
    // 0x803309C4: lh          $a0, 0x2C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2C);
    // 0x803309C8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803309CC: addiu       $a3, $a3, 0x7424
    ctx->r7 = ADD32(ctx->r7, 0X7424);
    // 0x803309D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803309D4: jal         0x8001ABF4
    // 0x803309D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803309D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803309DC: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x803309E0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803309E4: addiu       $a3, $a3, 0x7424
    ctx->r7 = ADD32(ctx->r7, 0X7424);
    // 0x803309E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803309EC: jal         0x8001ABF4
    // 0x803309F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803309F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803309F4: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x803309F8: jal         0x8001BBDC
    // 0x803309FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x803309FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80330A00: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80330A04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A08: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80330A0C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80330A10: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330A14: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80330A18: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330A1C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330A20: addiu       $t0, $zero, 0x1E0
    ctx->r8 = ADD32(0, 0X1E0);
    // 0x80330A24: sh          $t0, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r8;
    // 0x80330A28: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80330A2C: lw          $t3, 0x5100($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5100);
    // 0x80330A30: nop

    // 0x80330A34: lh          $t2, 0xE($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XE);
    // 0x80330A38: nop

    // 0x80330A3C: beq         $t2, $zero, L_80330A80
    if (ctx->r10 == 0) {
        // 0x80330A40: nop
    
            goto L_80330A80;
    }
    // 0x80330A40: nop

    // 0x80330A44: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80330A48: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330A4C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330A50: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330A54: lh          $t4, 0xE($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XE);
    // 0x80330A58: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330A5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330A60: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330A64: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x80330A68: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330A6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A70: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80330A74: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330A78: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330A7C: sh          $t5, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r13;
L_80330A80:
    // 0x80330A80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330A84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330A88: nop

    // 0x80330A8C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80330A90: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80330A94: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x80330A98: nop

    // 0x80330A9C: lh          $t0, 0xC($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XC);
    // 0x80330AA0: nop

    // 0x80330AA4: beq         $t0, $zero, L_80330AD8
    if (ctx->r8 == 0) {
        // 0x80330AA8: nop
    
            goto L_80330AD8;
    }
    // 0x80330AA8: nop

    // 0x80330AAC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80330AB0: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x80330AB4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330AB8: lh          $t3, 0xC($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XC);
    // 0x80330ABC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330AC0: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80330AC4: nop

    // 0x80330AC8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330ACC: nop

    // 0x80330AD0: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80330AD4: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_80330AD8:
    // 0x80330AD8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80330ADC: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80330AE0: nop

    // 0x80330AE4: lh          $t6, 0xA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA);
    // 0x80330AE8: nop

    // 0x80330AEC: bne         $t6, $zero, L_80330D80
    if (ctx->r14 != 0) {
        // 0x80330AF0: nop
    
            goto L_80330D80;
    }
    // 0x80330AF0: nop

    // 0x80330AF4: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80330AF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330AFC: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80330B00: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80330B04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B08: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80330B0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B14: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330B18: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80330B1C: lh          $t5, 0x28($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X28);
    // 0x80330B20: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330B24: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80330B28: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330B2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330B30: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330B34: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330B38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B3C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330B40: swc1        $f6, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f6.u32l;
    // 0x80330B44: lh          $t1, 0x28($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X28);
    // 0x80330B48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B4C: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80330B50: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330B54: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330B58: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330B5C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330B60: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330B64: lwc1        $f8, 0x415C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X415C);
    // 0x80330B68: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80330B6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330B70: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80330B74: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80330B78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330B7C: nop

    // 0x80330B80: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80330B84: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80330B88: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80330B8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330B90: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330B94: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80330B98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330B9C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330BA0: lh          $t2, 0x2C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2C);
    // 0x80330BA4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80330BA8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80330BAC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80330BB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330BB4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80330BB8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80330BBC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80330BC0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330BC4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330BC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BCC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80330BD0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330BD4: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80330BD8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80330BDC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330BE0: sh          $t3, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r11;
    // 0x80330BE4: lh          $t4, 0x2C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2C);
    // 0x80330BE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BEC: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80330BF0: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80330BF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330BF8: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80330BFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C00: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330C04: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x80330C08: lh          $t8, 0x2C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2C);
    // 0x80330C0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C10: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80330C14: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80330C18: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330C1C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80330C20: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330C24: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330C28: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x80330C2C: sh          $t5, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r13;
    // 0x80330C30: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80330C34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330C38: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330C3C: lh          $t2, 0x2A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2A);
    // 0x80330C40: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330C44: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330C48: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80330C4C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330C50: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80330C54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330C58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330C5C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330C60: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80330C64: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330C68: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80330C6C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330C70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C74: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80330C78: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330C7C: sh          $t9, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r25;
    // 0x80330C80: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x80330C84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C88: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80330C8C: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80330C90: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330C94: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80330C98: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330C9C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330CA0: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x80330CA4: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x80330CA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330CAC: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80330CB0: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80330CB4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330CB8: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80330CBC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330CC0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330CC4: addiu       $t7, $zero, 0x10E
    ctx->r15 = ADD32(0, 0X10E);
    // 0x80330CC8: sh          $t7, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r15;
    // 0x80330CCC: lh          $t1, 0x28($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X28);
    // 0x80330CD0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330CD4: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80330CD8: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330CDC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330CE0: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330CE4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330CE8: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330CEC: addu        $t9, $t0, $t2
    ctx->r25 = ADD32(ctx->r8, ctx->r10);
    // 0x80330CF0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330CF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330CF8: lwc1        $f18, 0xC($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80330CFC: nop

    // 0x80330D00: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80330D04: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80330D08: nop

    // 0x80330D0C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80330D10: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330D14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330D18: nop

    // 0x80330D1C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80330D20: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80330D24: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80330D28: sh          $t6, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r14;
    // 0x80330D2C: nop

    // 0x80330D30: lh          $t4, 0x28($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X28);
    // 0x80330D34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D38: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80330D3C: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80330D40: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330D44: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80330D48: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330D4C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330D50: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x80330D54: lh          $t5, 0x28($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X28);
    // 0x80330D58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D5C: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x80330D60: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80330D64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330D68: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80330D6C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330D70: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330D74: addiu       $t7, $zero, 0x10E
    ctx->r15 = ADD32(0, 0X10E);
    // 0x80330D78: b           L_8033100C
    // 0x80330D7C: sh          $t7, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r15;
        goto L_8033100C;
    // 0x80330D7C: sh          $t7, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r15;
L_80330D80:
    // 0x80330D80: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x80330D84: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330D88: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80330D8C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330D90: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330D94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330D98: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330D9C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330DA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DA4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330DA8: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x80330DAC: lh          $t3, 0x28($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X28);
    // 0x80330DB0: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330DB4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80330DB8: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x80330DBC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330DC0: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x80330DC4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330DC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DCC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330DD0: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x80330DD4: lh          $t9, 0x28($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X28);
    // 0x80330DD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DDC: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80330DE0: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x80330DE4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330DE8: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x80330DEC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330DF0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330DF4: lwc1        $f18, 0x4160($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4160);
    // 0x80330DF8: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80330DFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330E00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80330E04: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80330E08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330E0C: nop

    // 0x80330E10: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80330E14: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80330E18: lh          $t8, 0x2C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2C);
    // 0x80330E1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E20: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80330E24: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80330E28: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330E2C: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80330E30: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330E34: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330E38: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x80330E3C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80330E40: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330E44: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330E48: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80330E4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330E50: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330E54: lh          $t0, 0x2C($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2C);
    // 0x80330E58: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80330E5C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80330E60: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330E64: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330E68: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80330E6C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80330E70: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80330E74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330E78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330E7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E80: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80330E84: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330E88: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80330E8C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80330E90: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330E94: sh          $t1, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r9;
    // 0x80330E98: lh          $t6, 0x2C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2C);
    // 0x80330E9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330EA0: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80330EA4: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80330EA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330EAC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80330EB0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330EB4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330EB8: addiu       $t3, $zero, 0x10E
    ctx->r11 = ADD32(0, 0X10E);
    // 0x80330EBC: sh          $t3, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r11;
    // 0x80330EC0: lh          $t4, 0x2A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2A);
    // 0x80330EC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330EC8: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80330ECC: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80330ED0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330ED4: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80330ED8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330EDC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330EE0: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x80330EE4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80330EE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330EEC: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330EF0: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x80330EF4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330EF8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330EFC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80330F00: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330F04: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80330F08: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330F0C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330F10: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330F14: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80330F18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330F1C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80330F20: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330F24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F28: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80330F2C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330F30: sh          $t7, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r15;
    // 0x80330F34: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x80330F38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F3C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80330F40: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80330F44: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330F48: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80330F4C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330F50: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330F54: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x80330F58: sh          $t2, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r10;
    // 0x80330F5C: lh          $t9, 0x28($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X28);
    // 0x80330F60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F64: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80330F68: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x80330F6C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330F70: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x80330F74: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330F78: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330F7C: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x80330F80: lh          $t8, 0x28($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X28);
    // 0x80330F84: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330F88: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80330F8C: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80330F90: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330F94: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80330F98: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330F9C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330FA0: addu        $t7, $t5, $t0
    ctx->r15 = ADD32(ctx->r13, ctx->r8);
    // 0x80330FA4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330FA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330FAC: lwc1        $f8, 0x10($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X10);
    // 0x80330FB0: nop

    // 0x80330FB4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80330FB8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80330FBC: nop

    // 0x80330FC0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80330FC4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80330FC8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80330FCC: nop

    // 0x80330FD0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80330FD4: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x80330FD8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80330FDC: sh          $t6, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r14;
    // 0x80330FE0: nop

    // 0x80330FE4: lh          $t3, 0x28($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X28);
    // 0x80330FE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FEC: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80330FF0: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80330FF4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330FF8: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80330FFC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331000: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331004: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x80331008: sh          $t2, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r10;
L_8033100C:
    // 0x8033100C: b           L_80331014
    // 0x80331010: nop

        goto L_80331014;
    // 0x80331010: nop

L_80331014:
    // 0x80331014: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331018: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033101C: jr          $ra
    // 0x80331020: nop

    return;
    // 0x80331020: nop

;}
RECOMP_FUNC void func_80336398_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336398: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033639C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803363A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803363A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803363A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803363AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803363B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803363B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803363C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803363C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803363C8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803363CC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803363D0: nop

    // 0x803363D4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803363D8: nop

    // 0x803363DC: bne         $t1, $zero, L_803363F0
    if (ctx->r9 != 0) {
        // 0x803363E0: nop
    
            goto L_803363F0;
    }
    // 0x803363E0: nop

    // 0x803363E4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803363E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803363EC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_803363F0:
    // 0x803363F0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803363F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803363F8: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x803363FC: nop

    // 0x80336400: bne         $t5, $at, L_80336440
    if (ctx->r13 != ctx->r1) {
        // 0x80336404: nop
    
            goto L_80336440;
    }
    // 0x80336404: nop

    // 0x80336408: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033640C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80336410: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80336414: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x80336418: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033641C: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80336420: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336424: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336428: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8033642C: addiu       $a2, $a2, 0x4618
    ctx->r6 = ADD32(ctx->r6, 0X4618);
    // 0x80336430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336434: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80336438: jal         0x80027C00
    // 0x8033643C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027C00(rdram, ctx);
        goto after_0;
    // 0x8033643C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
L_80336440:
    // 0x80336440: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80336444: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80336448: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033644C: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80336450: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80336454: lui         $at, 0xC3F0
    ctx->r1 = S32(0XC3F0 << 16);
    // 0x80336458: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033645C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80336460: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80336464: nop

    // 0x80336468: bc1f        L_803364B0
    if (!c1cs) {
        // 0x8033646C: nop
    
            goto L_803364B0;
    }
    // 0x8033646C: nop

    // 0x80336470: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80336474: nop

    // 0x80336478: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x8033647C: nop

    // 0x80336480: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80336484: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80336488: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033648C: beq         $t1, $at, L_803364B0
    if (ctx->r9 == ctx->r1) {
        // 0x80336490: nop
    
            goto L_803364B0;
    }
    // 0x80336490: nop

    // 0x80336494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033649C: jal         0x800281A4
    // 0x803364A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_1;
    // 0x803364A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803364A4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803364A8: jal         0x8002B0E4
    // 0x803364AC: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x803364AC: nop

    after_2:
L_803364B0:
    // 0x803364B0: b           L_803364B8
    // 0x803364B4: nop

        goto L_803364B8;
    // 0x803364B4: nop

L_803364B8:
    // 0x803364B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803364BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803364C0: jr          $ra
    // 0x803364C4: nop

    return;
    // 0x803364C4: nop

;}
RECOMP_FUNC void func_803361DC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803361DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803361E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803361E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803361E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803361EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803361F0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x803361F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803361F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803361FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336200: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336204: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336208: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033620C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80336210: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336214: beq         $s0, $at, L_80336230
    if (ctx->r16 == ctx->r1) {
        // 0x80336218: nop
    
            goto L_80336230;
    }
    // 0x80336218: nop

    // 0x8033621C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80336220: beq         $s0, $at, L_80336240
    if (ctx->r16 == ctx->r1) {
        // 0x80336224: nop
    
            goto L_80336240;
    }
    // 0x80336224: nop

    // 0x80336228: b           L_80336250
    // 0x8033622C: nop

        goto L_80336250;
    // 0x8033622C: nop

L_80336230:
    // 0x80336230: jal         0x80335D30
    // 0x80336234: nop

    func_80335D30_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80336234: nop

    after_0:
    // 0x80336238: b           L_80336258
    // 0x8033623C: nop

        goto L_80336258;
    // 0x8033623C: nop

L_80336240:
    // 0x80336240: jal         0x803361AC
    // 0x80336244: nop

    func_803361AC_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80336244: nop

    after_1:
    // 0x80336248: b           L_80336258
    // 0x8033624C: nop

        goto L_80336258;
    // 0x8033624C: nop

L_80336250:
    // 0x80336250: b           L_80336258
    // 0x80336254: nop

        goto L_80336258;
    // 0x80336254: nop

L_80336258:
    // 0x80336258: b           L_80336260
    // 0x8033625C: nop

        goto L_80336260;
    // 0x8033625C: nop

L_80336260:
    // 0x80336260: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80336268: jr          $ra
    // 0x8033626C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033626C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803361AC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803361AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803361B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803361B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803361B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803361BC: jal         0x8002B0E4
    // 0x803361C0: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803361C0: nop

    after_0:
    // 0x803361C4: b           L_803361CC
    // 0x803361C8: nop

        goto L_803361CC;
    // 0x803361C8: nop

L_803361CC:
    // 0x803361CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803361D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803361D4: jr          $ra
    // 0x803361D8: nop

    return;
    // 0x803361D8: nop

;}
RECOMP_FUNC void func_80335BA8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335BA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335BAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335BB0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80335BB4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80335BB8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80335BBC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80335BC0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80335BC4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80335BC8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80335BCC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80335BD0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80335BD4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80335BD8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335BDC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80335BE0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80335BE4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80335BE8: addiu       $a1, $a1, 0x4060
    ctx->r5 = ADD32(ctx->r5, 0X4060);
    // 0x80335BEC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80335BF0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80335BF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335BF8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80335BFC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80335C00: jal         0x80027464
    // 0x80335C04: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80335C04: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80335C08: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80335C0C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335C10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80335C14: beq         $t1, $at, L_80335CA0
    if (ctx->r9 == ctx->r1) {
        // 0x80335C18: nop
    
            goto L_80335CA0;
    }
    // 0x80335C18: nop

    // 0x80335C1C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335C20: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80335C24: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80335C28: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335C2C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335C30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335C34: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335C38: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80335C3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335C40: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335C44: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80335C48: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335C4C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80335C50: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80335C54: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335C58: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335C5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335C60: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335C64: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335C68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335C6C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335C70: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80335C74: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335C78: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80335C7C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80335C80: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335C84: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335C88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335C8C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335C90: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335C94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335C98: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80335C9C: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_80335CA0:
    // 0x80335CA0: b           L_80335CA8
    // 0x80335CA4: nop

        goto L_80335CA8;
    // 0x80335CA4: nop

L_80335CA8:
    // 0x80335CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335CAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335CB0: jr          $ra
    // 0x80335CB4: nop

    return;
    // 0x80335CB4: nop

;}
RECOMP_FUNC void func_80331A1C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331A20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331A24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A28: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A2C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A4C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331A50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A54: nop

    // 0x80331A58: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331A5C: nop

    // 0x80331A60: bne         $t1, $zero, L_80331AC8
    if (ctx->r9 != 0) {
        // 0x80331A64: nop
    
            goto L_80331AC8;
    }
    // 0x80331A64: nop

    // 0x80331A68: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331A6C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331A70: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331A74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331A78: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331A7C: nop

    // 0x80331A80: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80331A84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331A88: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331A8C: nop

    // 0x80331A90: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80331A94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A98: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80331A9C: addiu       $t6, $t6, 0x7478
    ctx->r14 = ADD32(ctx->r14, 0X7478);
    // 0x80331AA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AA4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80331AA8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331AAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331AB0: jal         0x8001C0EC
    // 0x80331AB4: addiu       $a3, $zero, 0x101
    ctx->r7 = ADD32(0, 0X101);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331AB4: addiu       $a3, $zero, 0x101
    ctx->r7 = ADD32(0, 0X101);
    after_0:
    // 0x80331AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AC0: jal         0x8001BBDC
    // 0x80331AC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80331AC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80331AC8:
    // 0x80331AC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ACC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AD0: jal         0x80029C40
    // 0x80331AD4: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80331AD4: nop

    after_2:
    // 0x80331AD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ADC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AE0: jal         0x80029D04
    // 0x80331AE4: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80331AE4: nop

    after_3:
    // 0x80331AE8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331AEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331AF0: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80331AF4: nop

    // 0x80331AF8: bne         $t8, $at, L_80331B48
    if (ctx->r24 != ctx->r1) {
        // 0x80331AFC: nop
    
            goto L_80331B48;
    }
    // 0x80331AFC: nop

    // 0x80331B00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B08: jal         0x8001B44C
    // 0x80331B0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80331B0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80331B10: beq         $v0, $zero, L_80331B48
    if (ctx->r2 == 0) {
        // 0x80331B14: nop
    
            goto L_80331B48;
    }
    // 0x80331B14: nop

    // 0x80331B18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B1C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80331B20: addiu       $t9, $t9, 0x7478
    ctx->r25 = ADD32(ctx->r25, 0X7478);
    // 0x80331B24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B28: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80331B2C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331B30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80331B34: jal         0x8001C0EC
    // 0x80331B38: addiu       $a3, $zero, 0x101
    ctx->r7 = ADD32(0, 0X101);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80331B38: addiu       $a3, $zero, 0x101
    ctx->r7 = ADD32(0, 0X101);
    after_5:
    // 0x80331B3C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331B40: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80331B44: sb          $t0, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r8;
L_80331B48:
    // 0x80331B48: b           L_80331B50
    // 0x80331B4C: nop

        goto L_80331B50;
    // 0x80331B4C: nop

L_80331B50:
    // 0x80331B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331B58: jr          $ra
    // 0x80331B5C: nop

    return;
    // 0x80331B5C: nop

;}
RECOMP_FUNC void func_80335D30_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335D30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335D34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335D38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335D3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335D40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335D44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335D48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335D50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335D58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335D5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335D60: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335D64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335D68: nop

    // 0x80335D6C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335D70: nop

    // 0x80335D74: bne         $t1, $zero, L_80335DE4
    if (ctx->r9 != 0) {
        // 0x80335D78: nop
    
            goto L_80335DE4;
    }
    // 0x80335D78: nop

    // 0x80335D7C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335D80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80335D84: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80335D88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80335D8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335D90: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335D94: nop

    // 0x80335D98: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80335D9C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335DA0: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x80335DA4: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80335DA8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335DAC: nop

    // 0x80335DB0: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x80335DB4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335DB8: nop

    // 0x80335DBC: sh          $zero, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = 0;
    // 0x80335DC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335DC4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80335DC8: addiu       $t9, $t9, -0x7D34
    ctx->r25 = ADD32(ctx->r25, -0X7D34);
    // 0x80335DCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335DD0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80335DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335DDC: jal         0x8001C0EC
    // 0x80335DE0: addiu       $a3, $zero, 0x8A
    ctx->r7 = ADD32(0, 0X8A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335DE0: addiu       $a3, $zero, 0x8A
    ctx->r7 = ADD32(0, 0X8A);
    after_0:
L_80335DE4:
    // 0x80335DE4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335DE8: nop

    // 0x80335DEC: lwc1        $f6, 0x28($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80335DF0: nop

    // 0x80335DF4: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80335DF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335DFC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335E00: nop

    // 0x80335E04: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
    // 0x80335E08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335E0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335E10: jal         0x80029C40
    // 0x80335E14: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80335E14: nop

    after_1:
    // 0x80335E18: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80335E1C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80335E20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335E24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335E28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335E2C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80335E30: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335E34: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335E38: jal         0x80029018
    // 0x80335E3C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x80335E3C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80335E40: beq         $v0, $zero, L_80335E6C
    if (ctx->r2 == 0) {
        // 0x80335E44: nop
    
            goto L_80335E6C;
    }
    // 0x80335E44: nop

    // 0x80335E48: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335E4C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335E50: nop

    // 0x80335E54: swc1        $f18, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f18.u32l;
    // 0x80335E58: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335E5C: nop

    // 0x80335E60: lwc1        $f4, 0x2C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80335E64: nop

    // 0x80335E68: swc1        $f4, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f4.u32l;
L_80335E6C:
    // 0x80335E6C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80335E70: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335E74: nop

    // 0x80335E78: swc1        $f6, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f6.u32l;
    // 0x80335E7C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335E80: nop

    // 0x80335E84: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x80335E88: nop

    // 0x80335E8C: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80335E90: beq         $at, $zero, L_803360F4
    if (ctx->r1 == 0) {
        // 0x80335E94: nop
    
            goto L_803360F4;
    }
    // 0x80335E94: nop

    // 0x80335E98: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335E9C: nop

    // 0x80335EA0: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x80335EA4: nop

    // 0x80335EA8: bne         $t8, $zero, L_80335F58
    if (ctx->r24 != 0) {
        // 0x80335EAC: nop
    
            goto L_80335F58;
    }
    // 0x80335EAC: nop

    // 0x80335EB0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335EB4: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x80335EB8: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80335EBC: nop

    // 0x80335EC0: bne         $t0, $at, L_80335ED8
    if (ctx->r8 != ctx->r1) {
        // 0x80335EC4: nop
    
            goto L_80335ED8;
    }
    // 0x80335EC4: nop

    // 0x80335EC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335ECC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335ED0: jal         0x8001BBDC
    // 0x80335ED4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80335ED4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80335ED8:
    // 0x80335ED8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335EDC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80335EE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335EE4: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80335EE8: nop

    // 0x80335EEC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80335EF0: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
    // 0x80335EF4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80335EF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80335EFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335F00: nop

    // 0x80335F04: swc1        $f18, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f18.u32l;
    // 0x80335F08: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335F0C: nop

    // 0x80335F10: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80335F14: nop

    // 0x80335F18: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80335F1C: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x80335F20: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335F24: nop

    // 0x80335F28: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80335F2C: nop

    // 0x80335F30: bne         $t7, $zero, L_80335F50
    if (ctx->r15 != 0) {
        // 0x80335F34: nop
    
            goto L_80335F50;
    }
    // 0x80335F34: nop

    // 0x80335F38: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335F3C: nop

    // 0x80335F40: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80335F44: nop

    // 0x80335F48: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80335F4C: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
L_80335F50:
    // 0x80335F50: b           L_803360EC
    // 0x80335F54: nop

        goto L_803360EC;
    // 0x80335F54: nop

L_80335F58:
    // 0x80335F58: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335F5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335F60: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x80335F64: nop

    // 0x80335F68: bne         $t2, $at, L_80335FE0
    if (ctx->r10 != ctx->r1) {
        // 0x80335F6C: nop
    
            goto L_80335FE0;
    }
    // 0x80335F6C: nop

    // 0x80335F70: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335F74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335F78: lwc1        $f4, 0x18($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X18);
    // 0x80335F7C: nop

    // 0x80335F80: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80335F84: nop

    // 0x80335F88: bc1t        L_80335FB4
    if (c1cs) {
        // 0x80335F8C: nop
    
            goto L_80335FB4;
    }
    // 0x80335F8C: nop

    // 0x80335F90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335F94: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80335F98: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80335F9C: lwc1        $f12, 0x18($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X18);
    // 0x80335FA0: jal         0x80015538
    // 0x80335FA4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80335FA4: nop

    after_4:
    // 0x80335FA8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335FAC: b           L_80335FD8
    // 0x80335FB0: swc1        $f0, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f0.u32l;
        goto L_80335FD8;
    // 0x80335FB0: swc1        $f0, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f0.u32l;
L_80335FB4:
    // 0x80335FB4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335FB8: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80335FBC: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80335FC0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335FC4: nop

    // 0x80335FC8: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80335FCC: nop

    // 0x80335FD0: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x80335FD4: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
L_80335FD8:
    // 0x80335FD8: b           L_803360EC
    // 0x80335FDC: nop

        goto L_803360EC;
    // 0x80335FDC: nop

L_80335FE0:
    // 0x80335FE0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335FE4: nop

    // 0x80335FE8: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x80335FEC: nop

    // 0x80335FF0: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80335FF4: sh          $t4, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r12;
    // 0x80335FF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335FFC: nop

    // 0x80336000: lh          $t3, 0xAA($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XAA);
    // 0x80336004: nop

    // 0x80336008: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x8033600C: bne         $at, $zero, L_80336020
    if (ctx->r1 != 0) {
        // 0x80336010: nop
    
            goto L_80336020;
    }
    // 0x80336010: nop

    // 0x80336014: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336018: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8033601C: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
L_80336020:
    // 0x80336020: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336024: nop

    // 0x80336028: lh          $t8, 0xAA($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XAA);
    // 0x8033602C: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80336030: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80336034: nop

    // 0x80336038: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8033603C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80336040: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
    // 0x80336044: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336048: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033604C: lwc1        $f4, 0x18($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X18);
    // 0x80336050: nop

    // 0x80336054: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80336058: nop

    // 0x8033605C: bc1t        L_80336080
    if (c1cs) {
        // 0x80336060: nop
    
            goto L_80336080;
    }
    // 0x80336060: nop

    // 0x80336064: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80336068: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033606C: nop

    // 0x80336070: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80336074: nop

    // 0x80336078: bc1f        L_803360A4
    if (!c1cs) {
        // 0x8033607C: nop
    
            goto L_803360A4;
    }
    // 0x8033607C: nop

L_80336080:
    // 0x80336080: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336084: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80336088: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033608C: lwc1        $f12, 0x18($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X18);
    // 0x80336090: jal         0x80015538
    // 0x80336094: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80336094: nop

    after_5:
    // 0x80336098: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033609C: nop

    // 0x803360A0: swc1        $f0, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f0.u32l;
L_803360A4:
    // 0x803360A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803360A8: nop

    // 0x803360AC: lh          $t5, 0xA6($t1)
    ctx->r13 = MEM_H(ctx->r9, 0XA6);
    // 0x803360B0: nop

    // 0x803360B4: addiu       $t3, $t5, -0x1
    ctx->r11 = ADD32(ctx->r13, -0X1);
    // 0x803360B8: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x803360BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803360C0: nop

    // 0x803360C4: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x803360C8: nop

    // 0x803360CC: bne         $t7, $zero, L_803360EC
    if (ctx->r15 != 0) {
        // 0x803360D0: nop
    
            goto L_803360EC;
    }
    // 0x803360D0: nop

    // 0x803360D4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803360D8: nop

    // 0x803360DC: lh          $t0, 0xA8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA8);
    // 0x803360E0: nop

    // 0x803360E4: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x803360E8: sh          $t9, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r25;
L_803360EC:
    // 0x803360EC: b           L_8033614C
    // 0x803360F0: nop

        goto L_8033614C;
    // 0x803360F0: nop

L_803360F4:
    // 0x803360F4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x803360F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803360FC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336100: nop

    // 0x80336104: swc1        $f8, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f8.u32l;
    // 0x80336108: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033610C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80336110: lwc1        $f16, 0x18($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X18);
    // 0x80336114: nop

    // 0x80336118: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8033611C: nop

    // 0x80336120: bc1t        L_8033614C
    if (c1cs) {
        // 0x80336124: nop
    
            goto L_8033614C;
    }
    // 0x80336124: nop

    // 0x80336128: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033612C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80336130: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336134: lwc1        $f12, 0x18($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X18);
    // 0x80336138: jal         0x80015538
    // 0x8033613C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x8033613C: nop

    after_6:
    // 0x80336140: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80336144: nop

    // 0x80336148: swc1        $f0, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f0.u32l;
L_8033614C:
    // 0x8033614C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336150: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80336154: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336158: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033615C: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80336160: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80336164: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336168: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8033616C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80336170: nop

    // 0x80336174: bc1f        L_80336194
    if (!c1cs) {
        // 0x80336178: nop
    
            goto L_80336194;
    }
    // 0x80336178: nop

    // 0x8033617C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336180: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80336184: sh          $t7, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r15;
    // 0x80336188: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033618C: nop

    // 0x80336190: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80336194:
    // 0x80336194: b           L_8033619C
    // 0x80336198: nop

        goto L_8033619C;
    // 0x80336198: nop

L_8033619C:
    // 0x8033619C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803361A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803361A4: jr          $ra
    // 0x803361A8: nop

    return;
    // 0x803361A8: nop

;}
RECOMP_FUNC void func_80332C90_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C90: jr          $ra
    // 0x80332C94: nop

    return;
    // 0x80332C94: nop

    // 0x80332C98: jr          $ra
    // 0x80332C9C: nop

    return;
    // 0x80332C9C: nop

;}
RECOMP_FUNC void func_80335CB8_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335CB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335CBC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80335CC0: nop

    // 0x80335CC4: bne         $t6, $zero, L_80335D20
    if (ctx->r14 != 0) {
        // 0x80335CC8: nop
    
            goto L_80335D20;
    }
    // 0x80335CC8: nop

    // 0x80335CCC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80335CD0: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80335CD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335CD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80335CDC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335CE0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335CE4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335CE8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335CEC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80335CF0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80335CF4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80335CF8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80335CFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335D00: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80335D04: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80335D08: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80335D0C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80335D10: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80335D14: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80335D18: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80335D1C: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_80335D20:
    // 0x80335D20: jr          $ra
    // 0x80335D24: nop

    return;
    // 0x80335D24: nop

    // 0x80335D28: jr          $ra
    // 0x80335D2C: nop

    return;
    // 0x80335D2C: nop

;}
RECOMP_FUNC void func_80334A28_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334A28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334A2C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80334A30: nop

    // 0x80334A34: bne         $t6, $zero, L_80334A90
    if (ctx->r14 != 0) {
        // 0x80334A38: nop
    
            goto L_80334A90;
    }
    // 0x80334A38: nop

    // 0x80334A3C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80334A40: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80334A44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334A48: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80334A4C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334A50: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334A54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334A58: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334A5C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334A60: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80334A64: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80334A68: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80334A6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334A70: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334A74: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334A78: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334A7C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334A80: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334A84: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334A88: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80334A8C: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_80334A90:
    // 0x80334A90: jr          $ra
    // 0x80334A94: nop

    return;
    // 0x80334A94: nop

    // 0x80334A98: jr          $ra
    // 0x80334A9C: nop

    return;
    // 0x80334A9C: nop

;}
RECOMP_FUNC void func_8033670C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033670C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336710: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336714: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80336718: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033671C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336720: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80336724: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033672C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336730: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336734: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336738: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033673C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80336740: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336744: beq         $s0, $at, L_80336760
    if (ctx->r16 == ctx->r1) {
        // 0x80336748: nop
    
            goto L_80336760;
    }
    // 0x80336748: nop

    // 0x8033674C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80336750: beq         $s0, $at, L_80336770
    if (ctx->r16 == ctx->r1) {
        // 0x80336754: nop
    
            goto L_80336770;
    }
    // 0x80336754: nop

    // 0x80336758: b           L_80336780
    // 0x8033675C: nop

        goto L_80336780;
    // 0x8033675C: nop

L_80336760:
    // 0x80336760: jal         0x8033656C
    // 0x80336764: nop

    func_8033656C_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80336764: nop

    after_0:
    // 0x80336768: b           L_80336788
    // 0x8033676C: nop

        goto L_80336788;
    // 0x8033676C: nop

L_80336770:
    // 0x80336770: jal         0x8033665C
    // 0x80336774: nop

    func_8033665C_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80336774: nop

    after_1:
    // 0x80336778: b           L_80336788
    // 0x8033677C: nop

        goto L_80336788;
    // 0x8033677C: nop

L_80336780:
    // 0x80336780: b           L_80336788
    // 0x80336784: nop

        goto L_80336788;
    // 0x80336784: nop

L_80336788:
    // 0x80336788: b           L_80336790
    // 0x8033678C: nop

        goto L_80336790;
    // 0x8033678C: nop

L_80336790:
    // 0x80336790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336794: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80336798: jr          $ra
    // 0x8033679C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033679C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80331800_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033180C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331810: jal         0x8001BB34
    // 0x80331814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80331814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80331818: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033181C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331820: jal         0x8002B0E4
    // 0x80331824: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80331824: nop

    after_1:
    // 0x80331828: b           L_80331830
    // 0x8033182C: nop

        goto L_80331830;
    // 0x8033182C: nop

L_80331830:
    // 0x80331830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331838: jr          $ra
    // 0x8033183C: nop

    return;
    // 0x8033183C: nop

;}
RECOMP_FUNC void func_80331F94_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331F98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331F9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331FA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331FA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331FA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331FAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331FB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331FB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331FB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331FBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331FC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331FC4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331FC8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FCC: nop

    // 0x80331FD0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331FD4: nop

    // 0x80331FD8: bne         $t1, $zero, L_8033200C
    if (ctx->r9 != 0) {
        // 0x80331FDC: nop
    
            goto L_8033200C;
    }
    // 0x80331FDC: nop

    // 0x80331FE0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FE4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331FE8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331FEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331FF0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FF4: nop

    // 0x80331FF8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80331FFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332000: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332004: nop

    // 0x80332008: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_8033200C:
    // 0x8033200C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332010: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332014: jal         0x80029C40
    // 0x80332018: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80332018: nop

    after_0:
    // 0x8033201C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332020: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332024: jal         0x80029D04
    // 0x80332028: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80332028: nop

    after_1:
    // 0x8033202C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332030: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332034: jal         0x8002A2EC
    // 0x80332038: lui         $a1, 0x44E1
    ctx->r5 = S32(0X44E1 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x80332038: lui         $a1, 0x44E1
    ctx->r5 = S32(0X44E1 << 16);
    after_2:
    // 0x8033203C: beq         $v0, $zero, L_8033205C
    if (ctx->r2 == 0) {
        // 0x80332040: nop
    
            goto L_8033205C;
    }
    // 0x80332040: nop

    // 0x80332044: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332048: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8033204C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80332050: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332054: nop

    // 0x80332058: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_8033205C:
    // 0x8033205C: b           L_80332064
    // 0x80332060: nop

        goto L_80332064;
    // 0x80332060: nop

L_80332064:
    // 0x80332064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033206C: jr          $ra
    // 0x80332070: nop

    return;
    // 0x80332070: nop

;}
RECOMP_FUNC void func_80331024_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331024: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033102C: jal         0x80330000
    // 0x80331030: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80330000_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80331030: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80331034: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x80331038: jal         0x80330000
    // 0x8033103C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80330000_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x8033103C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80331040: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x80331044: jal         0x8033011C
    // 0x80331048: nop

    func_8033011C_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x80331048: nop

    after_2:
    // 0x8033104C: b           L_80331054
    // 0x80331050: nop

        goto L_80331054;
    // 0x80331050: nop

L_80331054:
    // 0x80331054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331058: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033105C: jr          $ra
    // 0x80331060: nop

    return;
    // 0x80331060: nop

;}
RECOMP_FUNC void func_80331B60_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331B64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331B68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331B6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331B70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331B74: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80331B78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331B7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331B84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331B8C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80331B90: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80331B94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331B98: beq         $s0, $at, L_80331BC0
    if (ctx->r16 == ctx->r1) {
        // 0x80331B9C: nop
    
            goto L_80331BC0;
    }
    // 0x80331B9C: nop

    // 0x80331BA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331BA4: beq         $s0, $at, L_80331BD0
    if (ctx->r16 == ctx->r1) {
        // 0x80331BA8: nop
    
            goto L_80331BD0;
    }
    // 0x80331BA8: nop

    // 0x80331BAC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80331BB0: beq         $s0, $at, L_80331BE0
    if (ctx->r16 == ctx->r1) {
        // 0x80331BB4: nop
    
            goto L_80331BE0;
    }
    // 0x80331BB4: nop

    // 0x80331BB8: b           L_80331BF0
    // 0x80331BBC: nop

        goto L_80331BF0;
    // 0x80331BBC: nop

L_80331BC0:
    // 0x80331BC0: jal         0x80331A0C
    // 0x80331BC4: nop

    func_80331A0C_unk_bin_37(rdram, ctx);
        goto after_0;
    // 0x80331BC4: nop

    after_0:
    // 0x80331BC8: b           L_80331BF8
    // 0x80331BCC: nop

        goto L_80331BF8;
    // 0x80331BCC: nop

L_80331BD0:
    // 0x80331BD0: jal         0x80331A1C
    // 0x80331BD4: nop

    func_80331A1C_unk_bin_37(rdram, ctx);
        goto after_1;
    // 0x80331BD4: nop

    after_1:
    // 0x80331BD8: b           L_80331BF8
    // 0x80331BDC: nop

        goto L_80331BF8;
    // 0x80331BDC: nop

L_80331BE0:
    // 0x80331BE0: jal         0x803318BC
    // 0x80331BE4: nop

    func_803318BC_unk_bin_37(rdram, ctx);
        goto after_2;
    // 0x80331BE4: nop

    after_2:
    // 0x80331BE8: b           L_80331BF8
    // 0x80331BEC: nop

        goto L_80331BF8;
    // 0x80331BEC: nop

L_80331BF0:
    // 0x80331BF0: b           L_80331BF8
    // 0x80331BF4: nop

        goto L_80331BF8;
    // 0x80331BF4: nop

L_80331BF8:
    // 0x80331BF8: b           L_80331C00
    // 0x80331BFC: nop

        goto L_80331C00;
    // 0x80331BFC: nop

L_80331C00:
    // 0x80331C00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80331C08: jr          $ra
    // 0x80331C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80331C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803350CC_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803350CC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803350D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803350D4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803350D8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803350DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803350E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803350E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803350E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803350EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803350F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803350FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335100: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335104: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80335108: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033510C: nop

    // 0x80335110: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335114: nop

    // 0x80335118: bne         $t1, $zero, L_80335284
    if (ctx->r9 != 0) {
        // 0x8033511C: nop
    
            goto L_80335284;
    }
    // 0x8033511C: nop

    // 0x80335120: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80335124: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80335128: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033512C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80335130: addiu       $t4, $zero, 0x2D
    ctx->r12 = ADD32(0, 0X2D);
    // 0x80335134: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x80335138: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033513C: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x80335140: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
    // 0x80335144: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80335148: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8033514C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80335150: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80335154: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80335158: nop

    // 0x8033515C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80335160: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80335164: nop

    // 0x80335168: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8033516C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80335170: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80335174: nop

    // 0x80335178: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8033517C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80335180: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80335184: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x80335188: nop

    // 0x8033518C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80335190: nop

    // 0x80335194: bgez        $t2, L_803351C0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80335198: nop
    
            goto L_803351C0;
    }
    // 0x80335198: nop

    // 0x8033519C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x803351A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803351A4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x803351A8: nop

    // 0x803351AC: swc1        $f16, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f16.u32l;
    // 0x803351B0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803351B4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x803351B8: b           L_803351E0
    // 0x803351BC: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
        goto L_803351E0;
    // 0x803351BC: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
L_803351C0:
    // 0x803351C0: lui         $at, 0x4391
    ctx->r1 = S32(0X4391 << 16);
    // 0x803351C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803351C8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803351CC: nop

    // 0x803351D0: swc1        $f18, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f18.u32l;
    // 0x803351D4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803351D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803351DC: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
L_803351E0:
    // 0x803351E0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803351E4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x803351E8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803351EC: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803351F0: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x803351F4: nop

    // 0x803351F8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803351FC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80335200: nop

    // 0x80335204: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80335208: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033520C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80335210: nop

    // 0x80335214: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80335218: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x8033521C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80335220: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80335224: nop

    // 0x80335228: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8033522C: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80335230: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x80335234: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80335238: mflo        $t4
    ctx->r12 = lo;
    // 0x8033523C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80335240: nop

    // 0x80335244: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80335248: swc1        $f18, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f18.u32l;
    // 0x8033524C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80335250: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335254: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80335258: nop

    // 0x8033525C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x80335260: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335264: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335268: addiu       $t7, $t7, -0x7D34
    ctx->r15 = ADD32(ctx->r15, -0X7D34);
    // 0x8033526C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335270: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033527C: jal         0x8001C0EC
    // 0x80335280: addiu       $a3, $zero, 0x8A
    ctx->r7 = ADD32(0, 0X8A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335280: addiu       $a3, $zero, 0x8A
    ctx->r7 = ADD32(0, 0X8A);
    after_0:
L_80335284:
    // 0x80335284: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x80335288: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033528C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335290: jal         0x80028FA0
    // 0x80335294: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80335294: nop

    after_1:
    // 0x80335298: beq         $v0, $zero, L_803352A8
    if (ctx->r2 == 0) {
        // 0x8033529C: nop
    
            goto L_803352A8;
    }
    // 0x8033529C: nop

    // 0x803352A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803352A4: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
L_803352A8:
    // 0x803352A8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803352AC: nop

    // 0x803352B0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803352B4: nop

    // 0x803352B8: beq         $t0, $zero, L_80335328
    if (ctx->r8 == 0) {
        // 0x803352BC: nop
    
            goto L_80335328;
    }
    // 0x803352BC: nop

    // 0x803352C0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x803352C4: nop

    // 0x803352C8: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x803352CC: nop

    // 0x803352D0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x803352D4: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x803352D8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x803352DC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x803352E0: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x803352E4: nop

    // 0x803352E8: bne         $t5, $at, L_80335300
    if (ctx->r13 != ctx->r1) {
        // 0x803352EC: nop
    
            goto L_80335300;
    }
    // 0x803352EC: nop

    // 0x803352F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352F8: jal         0x8001BBDC
    // 0x803352FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803352FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80335300:
    // 0x80335300: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80335304: nop

    // 0x80335308: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x8033530C: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80335310: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80335314: jal         0x80015538
    // 0x80335318: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80335318: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_3:
    // 0x8033531C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80335320: nop

    // 0x80335324: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
L_80335328:
    // 0x80335328: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033532C: nop

    // 0x80335330: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80335334: nop

    // 0x80335338: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x8033533C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80335340: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80335344: nop

    // 0x80335348: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
    // 0x8033534C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335350: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335354: jal         0x80029C40
    // 0x80335358: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80335358: nop

    after_4:
    // 0x8033535C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80335360: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335364: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033536C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335370: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80335374: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335378: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033537C: jal         0x80029018
    // 0x80335380: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80335380: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80335384: beq         $v0, $zero, L_80335394
    if (ctx->r2 == 0) {
        // 0x80335388: nop
    
            goto L_80335394;
    }
    // 0x80335388: nop

    // 0x8033538C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80335390: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
L_80335394:
    // 0x80335394: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80335398: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033539C: nop

    // 0x803353A0: swc1        $f4, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f4.u32l;
    // 0x803353A4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803353A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803353AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803353B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803353B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803353B8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x803353BC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803353C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803353C4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803353C8: jal         0x800295C0
    // 0x803353CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x803353CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x803353D0: beq         $v0, $zero, L_803353E0
    if (ctx->r2 == 0) {
        // 0x803353D4: nop
    
            goto L_803353E0;
    }
    // 0x803353D4: nop

    // 0x803353D8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803353DC: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
L_803353E0:
    // 0x803353E0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x803353E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803353E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803353EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803353F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803353F4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x803353F8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x803353FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335400: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335404: jal         0x800295C0
    // 0x80335408: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x80335408: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x8033540C: beq         $v0, $zero, L_8033541C
    if (ctx->r2 == 0) {
        // 0x80335410: nop
    
            goto L_8033541C;
    }
    // 0x80335410: nop

    // 0x80335414: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80335418: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
L_8033541C:
    // 0x8033541C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80335420: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80335424: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80335428: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033542C: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80335430: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80335434: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335438: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8033543C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80335440: nop

    // 0x80335444: bc1f        L_80335454
    if (!c1cs) {
        // 0x80335448: nop
    
            goto L_80335454;
    }
    // 0x80335448: nop

    // 0x8033544C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80335450: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_80335454:
    // 0x80335454: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80335458: nop

    // 0x8033545C: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x80335460: nop

    // 0x80335464: beq         $t9, $zero, L_803354A4
    if (ctx->r25 == 0) {
        // 0x80335468: nop
    
            goto L_803354A4;
    }
    // 0x80335468: nop

    // 0x8033546C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80335470: nop

    // 0x80335474: lh          $t2, 0xAA($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XAA);
    // 0x80335478: nop

    // 0x8033547C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80335480: sh          $t3, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r11;
    // 0x80335484: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80335488: nop

    // 0x8033548C: lh          $t4, 0xAA($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XAA);
    // 0x80335490: nop

    // 0x80335494: bne         $t4, $zero, L_803354A4
    if (ctx->r12 != 0) {
        // 0x80335498: nop
    
            goto L_803354A4;
    }
    // 0x80335498: nop

    // 0x8033549C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803354A0: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
L_803354A4:
    // 0x803354A4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x803354A8: nop

    // 0x803354AC: beq         $t6, $zero, L_803354FC
    if (ctx->r14 == 0) {
        // 0x803354B0: nop
    
            goto L_803354FC;
    }
    // 0x803354B0: nop

    // 0x803354B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803354B8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803354BC: nop

    // 0x803354C0: swc1        $f10, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f10.u32l;
    // 0x803354C4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803354C8: nop

    // 0x803354CC: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x803354D0: nop

    // 0x803354D4: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x803354D8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803354DC: nop

    // 0x803354E0: swc1        $f20, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f20.u32l;
    // 0x803354E4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x803354E8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803354EC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x803354F0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803354F4: nop

    // 0x803354F8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803354FC:
    // 0x803354FC: b           L_80335504
    // 0x80335500: nop

        goto L_80335504;
    // 0x80335500: nop

L_80335504:
    // 0x80335504: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80335508: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033550C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80335510: jr          $ra
    // 0x80335514: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80335514: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80332364_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332364: jr          $ra
    // 0x80332368: nop

    return;
    // 0x80332368: nop

    // 0x8033236C: jr          $ra
    // 0x80332370: nop

    return;
    // 0x80332370: nop

;}
RECOMP_FUNC void func_8033782C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033782C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80337830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337834: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337838: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033783C: jal         0x8002B0E4
    // 0x80337840: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80337840: nop

    after_0:
    // 0x80337844: b           L_8033784C
    // 0x80337848: nop

        goto L_8033784C;
    // 0x80337848: nop

L_8033784C:
    // 0x8033784C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80337850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80337854: jr          $ra
    // 0x80337858: nop

    return;
    // 0x80337858: nop

;}
RECOMP_FUNC void stub_8033177C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803317F0: jr          $ra
    // 0x803317F4: nop

    return;
    // 0x803317F4: nop

    // 0x803317F8: jr          $ra
    // 0x803317FC: nop

    return;
    // 0x803317FC: nop

;}
RECOMP_FUNC void func_80331684_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033168C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331690: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331694: jal         0x8002B0E4
    // 0x80331698: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80331698: nop

    after_0:
    // 0x8033169C: b           L_803316A4
    // 0x803316A0: nop

        goto L_803316A4;
    // 0x803316A0: nop

L_803316A4:
    // 0x803316A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803316A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803316AC: jr          $ra
    // 0x803316B0: nop

    return;
    // 0x803316B0: nop

;}
RECOMP_FUNC void func_8033656C_unk_bin_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033656C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336574: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336578: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033657C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336580: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336584: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336588: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033658C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336590: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336594: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336598: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033659C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803365A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803365A4: nop

    // 0x803365A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803365AC: nop

    // 0x803365B0: bne         $t1, $zero, L_80336604
    if (ctx->r9 != 0) {
        // 0x803365B4: nop
    
            goto L_80336604;
    }
    // 0x803365B4: nop

    // 0x803365B8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803365BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803365C0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803365C4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803365C8: nop

    // 0x803365CC: sh          $zero, 0x108($t4)
    MEM_H(0X108, ctx->r12) = 0;
    // 0x803365D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803365D4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x803365D8: addiu       $t5, $t5, -0x74AC
    ctx->r13 = ADD32(ctx->r13, -0X74AC);
    // 0x803365DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803365E0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803365E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803365E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803365EC: jal         0x8001C0EC
    // 0x803365F0: addiu       $a3, $zero, 0x17F
    ctx->r7 = ADD32(0, 0X17F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803365F0: addiu       $a3, $zero, 0x17F
    ctx->r7 = ADD32(0, 0X17F);
    after_0:
    // 0x803365F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803365F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803365FC: jal         0x8001BBDC
    // 0x80336600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80336604:
    // 0x80336604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033660C: jal         0x8001B44C
    // 0x80336610: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80336610: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80336614: beq         $v0, $zero, L_80336644
    if (ctx->r2 == 0) {
        // 0x80336618: nop
    
            goto L_80336644;
    }
    // 0x80336618: nop

    // 0x8033661C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336620: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80336624: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80336628: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033662C: nop

    // 0x80336630: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80336634: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336638: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033663C: jal         0x8001BBDC
    // 0x80336640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80336640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80336644:
    // 0x80336644: b           L_8033664C
    // 0x80336648: nop

        goto L_8033664C;
    // 0x80336648: nop

L_8033664C:
    // 0x8033664C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336650: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336654: jr          $ra
    // 0x80336658: nop

    return;
    // 0x80336658: nop

;}
RECOMP_FUNC void func_803380D8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803380D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803380DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803380E0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803380E4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803380E8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803380EC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803380F0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803380F4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803380F8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803380FC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80338100: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80338104: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80338108: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033810C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80338110: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80338114: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80338118: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033811C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80338120: addiu       $a1, $a1, 0x4624
    ctx->r5 = ADD32(ctx->r5, 0X4624);
    // 0x80338124: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80338128: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033812C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80338130: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80338134: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80338138: jal         0x80027464
    // 0x8033813C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033813C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80338140: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80338144: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80338148: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033814C: beq         $t1, $at, L_80338280
    if (ctx->r9 == ctx->r1) {
        // 0x80338150: nop
    
            goto L_80338280;
    }
    // 0x80338150: nop

    // 0x80338154: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80338158: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033815C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80338160: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338164: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338168: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033816C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80338170: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80338174: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80338178: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x8033817C: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80338180: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338184: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80338188: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033818C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338190: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338194: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80338198: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033819C: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x803381A0: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x803381A4: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x803381A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803381AC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803381B0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803381B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803381B8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803381BC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803381C0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803381C4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803381C8: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x803381CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803381D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803381D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803381D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803381DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803381E0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803381E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803381E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803381EC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803381F0: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x803381F4: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x803381F8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803381FC: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80338200: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80338204: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80338208: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033820C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80338210: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80338214: addu        $t7, $t2, $t4
    ctx->r15 = ADD32(ctx->r10, ctx->r12);
    // 0x80338218: lwc1        $f20, 0xC($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0XC);
    // 0x8033821C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338220: swc1        $f20, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f20.u32l;
    // 0x80338224: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x80338228: nop

    // 0x8033822C: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80338230: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80338234: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338238: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033823C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80338240: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80338244: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
    // 0x80338248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033824C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338250: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80338254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80338258: jal         0x80019448
    // 0x8033825C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x8033825C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80338260: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80338264: addiu       $t9, $t9, 0x7874
    ctx->r25 = ADD32(ctx->r25, 0X7874);
    // 0x80338268: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8033826C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80338270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80338278: jal         0x8001C0EC
    // 0x8033827C: addiu       $a3, $zero, 0x99
    ctx->r7 = ADD32(0, 0X99);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x8033827C: addiu       $a3, $zero, 0x99
    ctx->r7 = ADD32(0, 0X99);
    after_2:
L_80338280:
    // 0x80338280: b           L_80338288
    // 0x80338284: nop

        goto L_80338288;
    // 0x80338284: nop

L_80338288:
    // 0x80338288: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033828C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80338290: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80338294: jr          $ra
    // 0x80338298: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80338298: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80338D50_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338D50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338D54: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80338D58: nop

    // 0x80338D5C: bne         $t6, $zero, L_80338E14
    if (ctx->r14 != 0) {
        // 0x80338D60: nop
    
            goto L_80338E14;
    }
    // 0x80338D60: nop

    // 0x80338D64: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80338D68: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80338D6C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80338D70: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80338D74: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338D78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338D7C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338D80: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80338D84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80338D88: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x80338D8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338D90: bne         $t9, $at, L_80338E14
    if (ctx->r25 != ctx->r1) {
        // 0x80338D94: nop
    
            goto L_80338E14;
    }
    // 0x80338D94: nop

    // 0x80338D98: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80338D9C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80338DA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338DA4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80338DA8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80338DAC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80338DB0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80338DB4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80338DB8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80338DBC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80338DC0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80338DC4: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80338DC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338DCC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80338DD0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338DD4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338DD8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338DDC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80338DE0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80338DE4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80338DE8: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80338DEC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80338DF0: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80338DF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338DF8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80338DFC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80338E00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80338E04: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80338E08: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80338E0C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80338E10: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80338E14:
    // 0x80338E14: jr          $ra
    // 0x80338E18: nop

    return;
    // 0x80338E18: nop

    // 0x80338E1C: jr          $ra
    // 0x80338E20: nop

    return;
    // 0x80338E20: nop

;}
RECOMP_FUNC void func_8033A7F4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A7F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A7F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A7FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033A800: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A804: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A808: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A80C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A810: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A814: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A818: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A81C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A820: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033A824: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x8033A828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033A82C: bne         $t8, $at, L_8033A8A4
    if (ctx->r24 != ctx->r1) {
        // 0x8033A830: nop
    
            goto L_8033A8A4;
    }
    // 0x8033A830: nop

    // 0x8033A834: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033A838: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8033A83C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033A840: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A844: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A848: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A84C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A850: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A854: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x8033A858: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8033A85C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A860: beq         $s0, $at, L_8033A87C
    if (ctx->r16 == ctx->r1) {
        // 0x8033A864: nop
    
            goto L_8033A87C;
    }
    // 0x8033A864: nop

    // 0x8033A868: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033A86C: beq         $s0, $at, L_8033A88C
    if (ctx->r16 == ctx->r1) {
        // 0x8033A870: nop
    
            goto L_8033A88C;
    }
    // 0x8033A870: nop

    // 0x8033A874: b           L_8033A89C
    // 0x8033A878: nop

        goto L_8033A89C;
    // 0x8033A878: nop

L_8033A87C:
    // 0x8033A87C: jal         0x8033A4A0
    // 0x8033A880: nop

    func_8033A4A0_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x8033A880: nop

    after_0:
    // 0x8033A884: b           L_8033A8A4
    // 0x8033A888: nop

        goto L_8033A8A4;
    // 0x8033A888: nop

L_8033A88C:
    // 0x8033A88C: jal         0x8033A7C4
    // 0x8033A890: nop

    func_8033A7C4_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x8033A890: nop

    after_1:
    // 0x8033A894: b           L_8033A8A4
    // 0x8033A898: nop

        goto L_8033A8A4;
    // 0x8033A898: nop

L_8033A89C:
    // 0x8033A89C: b           L_8033A8A4
    // 0x8033A8A0: nop

        goto L_8033A8A4;
    // 0x8033A8A0: nop

L_8033A8A4:
    // 0x8033A8A4: b           L_8033A8AC
    // 0x8033A8A8: nop

        goto L_8033A8AC;
    // 0x8033A8A8: nop

L_8033A8AC:
    // 0x8033A8AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A8B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033A8B4: jr          $ra
    // 0x8033A8B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033A8B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033829C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033829C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803382A0: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x803382A4: nop

    // 0x803382A8: beq         $t6, $zero, L_803382C4
    if (ctx->r14 == 0) {
        // 0x803382AC: nop
    
            goto L_803382C4;
    }
    // 0x803382AC: nop

    // 0x803382B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803382B4: beq         $t6, $at, L_803382C4
    if (ctx->r14 == ctx->r1) {
        // 0x803382B8: nop
    
            goto L_803382C4;
    }
    // 0x803382B8: nop

    // 0x803382BC: jr          $ra
    // 0x803382C0: nop

    return;
    // 0x803382C0: nop

L_803382C4:
    // 0x803382C4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803382C8: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x803382CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803382D0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803382D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803382D8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803382DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803382E0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803382E4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803382E8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803382EC: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x803382F0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803382F4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x803382F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803382FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80338300: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80338304: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80338308: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033830C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80338310: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80338314: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80338318: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033831C: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80338320: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338324: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80338328: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033832C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80338330: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80338334: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80338338: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033833C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80338340: jr          $ra
    // 0x80338344: nop

    return;
    // 0x80338344: nop

    // 0x80338348: jr          $ra
    // 0x8033834C: nop

    return;
    // 0x8033834C: nop

;}
RECOMP_FUNC void func_80335CF8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335CF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335CFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335D00: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80335D04: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80335D08: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80335D0C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80335D10: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80335D14: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80335D18: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80335D1C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80335D20: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80335D24: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80335D28: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335D2C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80335D30: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80335D34: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80335D38: addiu       $a1, $a1, 0x3A78
    ctx->r5 = ADD32(ctx->r5, 0X3A78);
    // 0x80335D3C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80335D40: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80335D44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335D48: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80335D4C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80335D50: jal         0x80027464
    // 0x80335D54: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80335D54: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80335D58: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x80335D5C: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x80335D60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80335D64: beq         $t1, $at, L_80335F0C
    if (ctx->r9 == ctx->r1) {
        // 0x80335D68: nop
    
            goto L_80335F0C;
    }
    // 0x80335D68: nop

    // 0x80335D6C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80335D70: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80335D74: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x80335D78: lh          $t3, 0x8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8);
    // 0x80335D7C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80335D80: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80335D84: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335D88: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335D8C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80335D90: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335D94: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335D98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335D9C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335DA0: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80335DA4: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x80335DA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335DAC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80335DB0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335DB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335DB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335DBC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335DC0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80335DC4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80335DC8: lb          $t6, 0x27($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X27);
    // 0x80335DCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335DD0: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80335DD4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80335DD8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335DDC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80335DE0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335DE4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335DE8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80335DEC: sh          $t9, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r25;
    // 0x80335DF0: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x80335DF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335DF8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80335DFC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335E00: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80335E04: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335E08: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80335E0C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80335E10: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x80335E14: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x80335E18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335E1C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80335E20: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335E24: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335E28: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335E2C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335E30: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335E34: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80335E38: sb          $t3, 0x4253($at)
    MEM_B(0X4253, ctx->r1) = ctx->r11;
    // 0x80335E3C: lb          $t8, 0x27($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X27);
    // 0x80335E40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335E44: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80335E48: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80335E4C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80335E50: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80335E54: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80335E58: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80335E5C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80335E60: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80335E64: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x80335E68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335E6C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335E70: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335E74: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335E78: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335E7C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335E80: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335E84: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80335E88: jal         0x80014E80
    // 0x80335E8C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80335E8C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_1:
    // 0x80335E90: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x80335E94: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80335E98: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80335E9C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335EA0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80335EA4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80335EA8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335EAC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80335EB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335EB4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80335EB8: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80335EBC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80335EC0: addiu       $t4, $t4, 0x731C
    ctx->r12 = ADD32(ctx->r12, 0X731C);
    // 0x80335EC4: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80335EC8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80335ECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335ED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335ED4: jal         0x8001C0EC
    // 0x80335ED8: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80335ED8: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    after_2:
    // 0x80335EDC: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80335EE0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80335EE4: addiu       $a3, $a3, 0x7368
    ctx->r7 = ADD32(ctx->r7, 0X7368);
    // 0x80335EE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335EEC: jal         0x8001ABF4
    // 0x80335EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80335EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80335EF4: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80335EF8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80335EFC: addiu       $a3, $a3, 0x7384
    ctx->r7 = ADD32(ctx->r7, 0X7384);
    // 0x80335F00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80335F04: jal         0x8001ABF4
    // 0x80335F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80335F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80335F0C:
    // 0x80335F0C: b           L_80335F14
    // 0x80335F10: nop

        goto L_80335F14;
    // 0x80335F10: nop

L_80335F14:
    // 0x80335F14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335F18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335F1C: jr          $ra
    // 0x80335F20: nop

    return;
    // 0x80335F20: nop

;}
RECOMP_FUNC void func_803377F8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803377F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803377FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337800: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337804: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337808: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033780C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337810: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337814: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337818: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033781C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337820: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337824: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337828: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033782C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80337830: nop

    // 0x80337834: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337838: nop

    // 0x8033783C: bne         $t1, $zero, L_8033788C
    if (ctx->r9 != 0) {
        // 0x80337840: nop
    
            goto L_8033788C;
    }
    // 0x80337840: nop

    // 0x80337844: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80337848: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033784C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80337850: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80337854: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80337858: nop

    // 0x8033785C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80337860: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80337864: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80337868: nop

    // 0x8033786C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80337870: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80337874: nop

    // 0x80337878: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x8033787C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337880: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337884: jal         0x8001BB34
    // 0x80337888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80337888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_8033788C:
    // 0x8033788C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337890: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337894: jal         0x8001BBDC
    // 0x80337898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80337898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033789C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803378A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803378A4: jal         0x80029C40
    // 0x803378A8: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x803378A8: nop

    after_2:
    // 0x803378AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803378B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803378B4: jal         0x80029D04
    // 0x803378B8: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x803378B8: nop

    after_3:
    // 0x803378BC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803378C0: nop

    // 0x803378C4: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x803378C8: nop

    // 0x803378CC: beq         $t8, $zero, L_803378D4
    if (ctx->r24 == 0) {
        // 0x803378D0: nop
    
            goto L_803378D4;
    }
    // 0x803378D0: nop

L_803378D4:
    // 0x803378D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803378D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803378DC: jal         0x8002B0E4
    // 0x803378E0: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x803378E0: nop

    after_4:
    // 0x803378E4: b           L_803378EC
    // 0x803378E8: nop

        goto L_803378EC;
    // 0x803378E8: nop

L_803378EC:
    // 0x803378EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803378F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803378F4: jr          $ra
    // 0x803378F8: nop

    return;
    // 0x803378F8: nop

;}
RECOMP_FUNC void func_80336B5C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336B5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336B60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336B64: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80336B68: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80336B6C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80336B70: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80336B74: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80336B78: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80336B7C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80336B80: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80336B84: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80336B88: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80336B8C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80336B90: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80336B94: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80336B98: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80336B9C: addiu       $a1, $a1, 0x3A84
    ctx->r5 = ADD32(ctx->r5, 0X3A84);
    // 0x80336BA0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80336BA4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80336BA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80336BAC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80336BB0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80336BB4: jal         0x80027464
    // 0x80336BB8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80336BB8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80336BBC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x80336BC0: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x80336BC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80336BC8: beq         $t1, $at, L_80336D70
    if (ctx->r9 == ctx->r1) {
        // 0x80336BCC: nop
    
            goto L_80336D70;
    }
    // 0x80336BCC: nop

    // 0x80336BD0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80336BD4: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80336BD8: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x80336BDC: lh          $t3, 0x8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8);
    // 0x80336BE0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80336BE4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80336BE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80336BEC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80336BF0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80336BF4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80336BF8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80336BFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336C00: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80336C04: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80336C08: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x80336C0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336C10: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80336C14: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80336C18: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80336C1C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80336C20: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80336C24: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80336C28: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80336C2C: lb          $t6, 0x27($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X27);
    // 0x80336C30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336C34: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80336C38: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80336C3C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336C40: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80336C44: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80336C48: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336C4C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80336C50: sh          $t9, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r25;
    // 0x80336C54: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x80336C58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336C5C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80336C60: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80336C64: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80336C68: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80336C6C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80336C70: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80336C74: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x80336C78: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x80336C7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336C80: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80336C84: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80336C88: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80336C8C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80336C90: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80336C94: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80336C98: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80336C9C: sb          $t3, 0x4253($at)
    MEM_B(0X4253, ctx->r1) = ctx->r11;
    // 0x80336CA0: lb          $t8, 0x27($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X27);
    // 0x80336CA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336CA8: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80336CAC: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80336CB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80336CB4: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80336CB8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80336CBC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80336CC0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80336CC4: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80336CC8: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x80336CCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336CD0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80336CD4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336CD8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336CDC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336CE0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80336CE4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336CE8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80336CEC: jal         0x80014E80
    // 0x80336CF0: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80336CF0: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_1:
    // 0x80336CF4: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x80336CF8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80336CFC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80336D00: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80336D04: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80336D08: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80336D0C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80336D10: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80336D14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336D18: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80336D1C: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80336D20: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80336D24: addiu       $t4, $t4, 0x731C
    ctx->r12 = ADD32(ctx->r12, 0X731C);
    // 0x80336D28: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80336D2C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80336D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80336D38: jal         0x8001C0EC
    // 0x80336D3C: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80336D3C: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    after_2:
    // 0x80336D40: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80336D44: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80336D48: addiu       $a3, $a3, 0x73A0
    ctx->r7 = ADD32(ctx->r7, 0X73A0);
    // 0x80336D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336D50: jal         0x8001ABF4
    // 0x80336D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80336D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80336D58: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80336D5C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80336D60: addiu       $a3, $a3, 0x73BC
    ctx->r7 = ADD32(ctx->r7, 0X73BC);
    // 0x80336D64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80336D68: jal         0x8001ABF4
    // 0x80336D6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80336D6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80336D70:
    // 0x80336D70: b           L_80336D78
    // 0x80336D74: nop

        goto L_80336D78;
    // 0x80336D74: nop

L_80336D78:
    // 0x80336D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336D80: jr          $ra
    // 0x80336D84: nop

    return;
    // 0x80336D84: nop

;}
RECOMP_FUNC void func_80333890_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333890: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333898: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033389C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803338A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803338A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803338A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803338AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803338B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803338B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803338B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803338BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803338C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803338C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803338C8: nop

    // 0x803338CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803338D0: nop

    // 0x803338D4: bne         $t1, $zero, L_8033391C
    if (ctx->r9 != 0) {
        // 0x803338D8: nop
    
            goto L_8033391C;
    }
    // 0x803338D8: nop

    // 0x803338DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803338E0: nop

    // 0x803338E4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803338E8: nop

    // 0x803338EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803338F0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803338F4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803338F8: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x803338FC: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x80333900: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333904: nop

    // 0x80333908: sh          $zero, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = 0;
    // 0x8033390C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333910: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333914: jal         0x8001BB34
    // 0x80333918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80333918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_8033391C:
    // 0x8033391C: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_80333920:
    // 0x80333920: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80333924: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80333928: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x8033392C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333930: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333934: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333938: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033393C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333940: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80333944: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80333948: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033394C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333950: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x80333954: nop

    // 0x80333958: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8033395C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80333960: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80333964: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80333968: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8033396C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333970: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333974: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333978: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033397C: lh          $t6, 0x41F6($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X41F6);
    // 0x80333980: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80333984: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80333988: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033398C: jal         0x80015538
    // 0x80333990: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80333990: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x80333994: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80333998: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8033399C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x803339A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803339A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803339A8: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x803339AC: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803339B0: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803339B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803339B8: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803339BC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x803339C0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803339C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803339C8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x803339CC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803339D0: sh          $t8, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r24;
    // 0x803339D4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803339D8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803339DC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803339E0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803339E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803339E8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803339EC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803339F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803339F4: lh          $t4, 0x41F6($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F6);
    // 0x803339F8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803339FC: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80333A00: lwc1        $f17, -0x51E8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X51E8);
    // 0x80333A04: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80333A08: lwc1        $f16, -0x51E4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X51E4);
    // 0x80333A0C: nop

    // 0x80333A10: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80333A14: jal         0x80034970
    // 0x80333A18: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80333A18: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x80333A1C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333A20: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80333A24: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x80333A28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333A2C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80333A30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333A34: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80333A38: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80333A3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333A40: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80333A44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333A48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333A4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A50: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80333A54: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333A58: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x80333A5C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80333A60: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80333A64: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80333A68: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80333A6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333A70: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80333A74: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333A78: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333A7C: lh          $t9, 0x41F6($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F6);
    // 0x80333A80: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333A84: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80333A88: lwc1        $f7, -0x51E0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X51E0);
    // 0x80333A8C: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x80333A90: lwc1        $f6, -0x51DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X51DC);
    // 0x80333A94: nop

    // 0x80333A98: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80333A9C: jal         0x80036570
    // 0x80333AA0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80333AA0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_3:
    // 0x80333AA4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333AA8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80333AAC: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x80333AB0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333AB4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80333AB8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333ABC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80333AC0: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80333AC4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333AC8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80333ACC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333AD0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333AD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333AD8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80333ADC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333AE0: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80333AE4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80333AE8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333AEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333AF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333AF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333AF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333AFC: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80333B00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333B04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B08: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333B0C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80333B10: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80333B14: nop

    // 0x80333B18: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x80333B1C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80333B20: sra         $t3, $t9, 16
    ctx->r11 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80333B24: slti        $at, $t3, 0x6
    ctx->r1 = SIGNED(ctx->r11) < 0X6 ? 1 : 0;
    // 0x80333B28: bne         $at, $zero, L_80333920
    if (ctx->r1 != 0) {
        // 0x80333B2C: sh          $t8, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r24;
            goto L_80333920;
    }
    // 0x80333B2C: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    // 0x80333B30: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333B34: nop

    // 0x80333B38: lh          $t4, 0xAA($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XAA);
    // 0x80333B3C: nop

    // 0x80333B40: bne         $t4, $zero, L_80333B8C
    if (ctx->r12 != 0) {
        // 0x80333B44: nop
    
            goto L_80333B8C;
    }
    // 0x80333B44: nop

    // 0x80333B48: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333B4C: nop

    // 0x80333B50: lh          $t2, 0xA8($t5)
    ctx->r10 = MEM_H(ctx->r13, 0XA8);
    // 0x80333B54: nop

    // 0x80333B58: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x80333B5C: sh          $t6, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r14;
    // 0x80333B60: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333B64: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80333B68: lh          $t0, 0xA8($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XA8);
    // 0x80333B6C: nop

    // 0x80333B70: bne         $t0, $at, L_80333B84
    if (ctx->r8 != ctx->r1) {
        // 0x80333B74: nop
    
            goto L_80333B84;
    }
    // 0x80333B74: nop

    // 0x80333B78: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333B7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80333B80: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
L_80333B84:
    // 0x80333B84: b           L_80333BC8
    // 0x80333B88: nop

        goto L_80333BC8;
    // 0x80333B88: nop

L_80333B8C:
    // 0x80333B8C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333B90: nop

    // 0x80333B94: lh          $t1, 0xA8($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XA8);
    // 0x80333B98: nop

    // 0x80333B9C: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x80333BA0: sh          $t4, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r12;
    // 0x80333BA4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333BA8: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80333BAC: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x80333BB0: nop

    // 0x80333BB4: bne         $t6, $at, L_80333BC8
    if (ctx->r14 != ctx->r1) {
        // 0x80333BB8: nop
    
            goto L_80333BC8;
    }
    // 0x80333BB8: nop

    // 0x80333BBC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333BC0: nop

    // 0x80333BC4: sh          $zero, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = 0;
L_80333BC8:
    // 0x80333BC8: b           L_80333BD0
    // 0x80333BCC: nop

        goto L_80333BD0;
    // 0x80333BCC: nop

L_80333BD0:
    // 0x80333BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333BD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333BD8: jr          $ra
    // 0x80333BDC: nop

    return;
    // 0x80333BDC: nop

;}
RECOMP_FUNC void func_803311B8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803311B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803311BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803311C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803311C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803311C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803311CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803311D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803311D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803311E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803311E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803311E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803311EC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803311F0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x803311F4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803311F8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803311FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331200: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331204: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331208: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033120C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331210: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80331214: nop

    // 0x80331218: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8033121C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331220: nop

    // 0x80331224: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80331228: nop

    // 0x8033122C: bne         $t4, $zero, L_8033129C
    if (ctx->r12 != 0) {
        // 0x80331230: nop
    
            goto L_8033129C;
    }
    // 0x80331230: nop

    // 0x80331234: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331238: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033123C: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x80331240: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331244: nop

    // 0x80331248: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x8033124C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331250: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80331254: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x80331258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033125C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80331260: addiu       $t0, $t0, -0x7594
    ctx->r8 = ADD32(ctx->r8, -0X7594);
    // 0x80331264: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331268: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033126C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331274: jal         0x8001C0EC
    // 0x80331278: addiu       $a3, $zero, 0x61
    ctx->r7 = ADD32(0, 0X61);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331278: addiu       $a3, $zero, 0x61
    ctx->r7 = ADD32(0, 0X61);
    after_0:
    // 0x8033127C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331280: addiu       $t1, $t1, -0x758C
    ctx->r9 = ADD32(ctx->r9, -0X758C);
    // 0x80331284: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80331288: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033128C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331294: jal         0x8001C0EC
    // 0x80331298: addiu       $a3, $zero, 0x62
    ctx->r7 = ADD32(0, 0X62);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80331298: addiu       $a3, $zero, 0x62
    ctx->r7 = ADD32(0, 0X62);
    after_1:
L_8033129C:
    // 0x8033129C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803312A0: nop

    // 0x803312A4: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x803312A8: nop

    // 0x803312AC: bne         $t3, $zero, L_80331320
    if (ctx->r11 != 0) {
        // 0x803312B0: nop
    
            goto L_80331320;
    }
    // 0x803312B0: nop

    // 0x803312B4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803312B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803312BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803312C0: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x803312C4: nop

    // 0x803312C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803312CC: swc1        $f8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f8.u32l;
    // 0x803312D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803312D4: nop

    // 0x803312D8: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x803312DC: nop

    // 0x803312E0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803312E4: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
    // 0x803312E8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803312EC: nop

    // 0x803312F0: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x803312F4: nop

    // 0x803312F8: bne         $t9, $zero, L_80331318
    if (ctx->r25 != 0) {
        // 0x803312FC: nop
    
            goto L_80331318;
    }
    // 0x803312FC: nop

    // 0x80331300: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331304: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80331308: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x8033130C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331310: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x80331314: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
L_80331318:
    // 0x80331318: b           L_80331384
    // 0x8033131C: nop

        goto L_80331384;
    // 0x8033131C: nop

L_80331320:
    // 0x80331320: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331324: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80331328: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033132C: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80331330: nop

    // 0x80331334: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80331338: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
    // 0x8033133C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331340: nop

    // 0x80331344: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x80331348: nop

    // 0x8033134C: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x80331350: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x80331354: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331358: nop

    // 0x8033135C: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80331360: nop

    // 0x80331364: bne         $t9, $zero, L_80331384
    if (ctx->r25 != 0) {
        // 0x80331368: nop
    
            goto L_80331384;
    }
    // 0x80331368: nop

    // 0x8033136C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331370: nop

    // 0x80331374: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
    // 0x80331378: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033137C: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x80331380: sh          $t1, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r9;
L_80331384:
    // 0x80331384: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80331388: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033138C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80331390: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80331394: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331398: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8033139C: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x803313A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803313A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803313A8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803313AC: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x803313B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313B8: jal         0x8002A1FC
    // 0x803313BC: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x803313BC: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_2:
    // 0x803313C0: beq         $v0, $zero, L_803313E0
    if (ctx->r2 == 0) {
        // 0x803313C4: nop
    
            goto L_803313E0;
    }
    // 0x803313C4: nop

    // 0x803313C8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803313CC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803313D0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x803313D4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803313D8: nop

    // 0x803313DC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803313E0:
    // 0x803313E0: b           L_803313E8
    // 0x803313E4: nop

        goto L_803313E8;
    // 0x803313E4: nop

L_803313E8:
    // 0x803313E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803313EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803313F0: jr          $ra
    // 0x803313F4: nop

    return;
    // 0x803313F4: nop

;}
RECOMP_FUNC void func_80333ED4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333ED4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333EDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333EE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333EE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333EE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333EEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333EF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333EF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333EF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333EFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333F00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333F04: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333F08: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F0C: nop

    // 0x80333F10: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333F14: nop

    // 0x80333F18: bne         $t1, $zero, L_80333F94
    if (ctx->r9 != 0) {
        // 0x80333F1C: nop
    
            goto L_80333F94;
    }
    // 0x80333F1C: nop

    // 0x80333F20: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F24: nop

    // 0x80333F28: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333F2C: nop

    // 0x80333F30: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333F34: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333F38: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F3C: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x80333F40: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x80333F44: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F48: nop

    // 0x80333F4C: sh          $zero, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = 0;
    // 0x80333F50: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F54: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80333F58: sh          $t8, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r24;
    // 0x80333F5C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80333F60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333F64: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F68: nop

    // 0x80333F6C: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x80333F70: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80333F74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333F78: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F7C: nop

    // 0x80333F80: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80333F84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333F88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333F8C: jal         0x8001BB34
    // 0x80333F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80333F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_80333F94:
    // 0x80333F94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333F98: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F9C: nop

    // 0x80333FA0: swc1        $f8, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f8.u32l;
    // 0x80333FA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FAC: jal         0x80029C40
    // 0x80333FB0: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80333FB0: nop

    after_1:
    // 0x80333FB4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80333FB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333FBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FC4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333FC8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80333FCC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333FD0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80333FD4: jal         0x80029018
    // 0x80333FD8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x80333FD8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80333FDC: beq         $v0, $zero, L_80334008
    if (ctx->r2 == 0) {
        // 0x80333FE0: nop
    
            goto L_80334008;
    }
    // 0x80333FE0: nop

    // 0x80333FE4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333FE8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FEC: nop

    // 0x80333FF0: swc1        $f18, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f18.u32l;
    // 0x80333FF4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FF8: nop

    // 0x80333FFC: lwc1        $f4, 0x2C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80334000: nop

    // 0x80334004: swc1        $f4, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f4.u32l;
L_80334008:
    // 0x80334008: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033400C: nop

    // 0x80334010: lh          $t6, 0xAC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAC);
    // 0x80334014: nop

    // 0x80334018: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8033401C: sh          $t7, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r15;
    // 0x80334020: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334024: nop

    // 0x80334028: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x8033402C: nop

    // 0x80334030: bne         $t9, $zero, L_80334090
    if (ctx->r25 != 0) {
        // 0x80334034: nop
    
            goto L_80334090;
    }
    // 0x80334034: nop

    // 0x80334038: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033403C: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x80334040: sh          $t0, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = ctx->r8;
    // 0x80334044: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334048: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033404C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334050: lwc1        $f6, 0x3C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80334054: nop

    // 0x80334058: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8033405C: nop

    // 0x80334060: bc1f        L_8033407C
    if (!c1cs) {
        // 0x80334064: nop
    
            goto L_8033407C;
    }
    // 0x80334064: nop

    // 0x80334068: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8033406C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334070: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334074: b           L_80334090
    // 0x80334078: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
        goto L_80334090;
    // 0x80334078: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
L_8033407C:
    // 0x8033407C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80334080: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334084: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334088: nop

    // 0x8033408C: swc1        $f16, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f16.u32l;
L_80334090:
    // 0x80334090: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
L_80334094:
    // 0x80334094: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334098: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033409C: lh          $t5, 0x22($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X22);
    // 0x803340A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803340A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803340AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803340B4: sll         $t8, $t5, 1
    ctx->r24 = S32(ctx->r13 << 1);
    // 0x803340B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803340BC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803340C0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803340C4: lh          $t0, 0x4238($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4238);
    // 0x803340C8: nop

    // 0x803340CC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x803340D0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803340D4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803340D8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803340DC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803340E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803340E4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803340E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803340EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803340F0: lh          $t4, 0x41F6($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F6);
    // 0x803340F4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x803340F8: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x803340FC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80334100: jal         0x80015538
    // 0x80334104: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80334104: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_3:
    // 0x80334108: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8033410C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80334110: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80334114: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80334118: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033411C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80334120: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80334124: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80334128: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033412C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80334130: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80334134: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334138: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033413C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80334140: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334144: sh          $t6, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r14;
    // 0x80334148: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033414C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80334150: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80334154: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334158: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033415C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334160: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334164: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334168: lh          $t0, 0x41F6($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F6);
    // 0x8033416C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334170: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80334174: lwc1        $f11, -0x51C8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X51C8);
    // 0x80334178: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8033417C: lwc1        $f10, -0x51C4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X51C4);
    // 0x80334180: nop

    // 0x80334184: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80334188: jal         0x80034970
    // 0x8033418C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x8033418C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_4:
    // 0x80334190: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334194: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80334198: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x8033419C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803341A0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x803341A4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803341A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803341AC: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803341B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803341B4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803341B8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803341BC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803341C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803341C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803341C8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803341CC: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x803341D0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x803341D4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803341D8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803341DC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803341E0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803341E4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803341E8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803341EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341F0: lh          $t7, 0x41F6($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F6);
    // 0x803341F4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803341F8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x803341FC: lwc1        $f5, -0x51C0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X51C0);
    // 0x80334200: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80334204: lwc1        $f4, -0x51BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X51BC);
    // 0x80334208: nop

    // 0x8033420C: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80334210: jal         0x80036570
    // 0x80334214: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x80334214: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_5:
    // 0x80334218: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033421C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80334220: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80334224: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80334228: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033422C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80334230: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80334234: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80334238: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033423C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80334240: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80334244: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334248: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033424C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80334250: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334254: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x80334258: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8033425C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334260: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80334264: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80334268: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033426C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80334270: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80334274: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334278: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033427C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334280: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x80334284: lh          $t5, 0x22($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X22);
    // 0x80334288: nop

    // 0x8033428C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80334290: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80334294: sra         $t9, $t7, 16
    ctx->r25 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80334298: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x8033429C: bne         $at, $zero, L_80334094
    if (ctx->r1 != 0) {
        // 0x803342A0: sh          $t6, 0x22($sp)
        MEM_H(0X22, ctx->r29) = ctx->r14;
            goto L_80334094;
    }
    // 0x803342A0: sh          $t6, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r14;
    // 0x803342A4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803342A8: nop

    // 0x803342AC: lh          $t0, 0xAA($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XAA);
    // 0x803342B0: nop

    // 0x803342B4: bne         $t0, $zero, L_80334300
    if (ctx->r8 != 0) {
        // 0x803342B8: nop
    
            goto L_80334300;
    }
    // 0x803342B8: nop

    // 0x803342BC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803342C0: nop

    // 0x803342C4: lh          $t1, 0xA8($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XA8);
    // 0x803342C8: nop

    // 0x803342CC: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x803342D0: sh          $t4, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r12;
    // 0x803342D4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803342D8: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x803342DC: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x803342E0: nop

    // 0x803342E4: bne         $t5, $at, L_803342F8
    if (ctx->r13 != ctx->r1) {
        // 0x803342E8: nop
    
            goto L_803342F8;
    }
    // 0x803342E8: nop

    // 0x803342EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803342F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803342F4: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
L_803342F8:
    // 0x803342F8: b           L_8033433C
    // 0x803342FC: nop

        goto L_8033433C;
    // 0x803342FC: nop

L_80334300:
    // 0x80334300: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334304: nop

    // 0x80334308: lh          $t8, 0xA8($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XA8);
    // 0x8033430C: nop

    // 0x80334310: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x80334314: sh          $t0, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r8;
    // 0x80334318: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033431C: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80334320: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x80334324: nop

    // 0x80334328: bne         $t4, $at, L_8033433C
    if (ctx->r12 != ctx->r1) {
        // 0x8033432C: nop
    
            goto L_8033433C;
    }
    // 0x8033432C: nop

    // 0x80334330: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334334: nop

    // 0x80334338: sh          $zero, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = 0;
L_8033433C:
    // 0x8033433C: b           L_80334344
    // 0x80334340: nop

        goto L_80334344;
    // 0x80334340: nop

L_80334344:
    // 0x80334344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334348: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033434C: jr          $ra
    // 0x80334350: nop

    return;
    // 0x80334350: nop

;}
RECOMP_FUNC void func_80337BC4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337BC4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80337BC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337BCC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80337BD0: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80337BD4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80337BD8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80337BDC: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80337BE0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80337BE4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80337BE8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80337BEC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80337BF0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80337BF4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80337BF8: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80337BFC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80337C00: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80337C04: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C08: nop

    // 0x80337C0C: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x80337C10: nop

    // 0x80337C14: bne         $t2, $zero, L_80337CAC
    if (ctx->r10 != 0) {
        // 0x80337C18: nop
    
            goto L_80337CAC;
    }
    // 0x80337C18: nop

    // 0x80337C1C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C20: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80337C24: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x80337C28: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80337C2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80337C30: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C34: nop

    // 0x80337C38: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x80337C3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80337C40: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C44: nop

    // 0x80337C48: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
    // 0x80337C4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80337C50: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C54: nop

    // 0x80337C58: swc1        $f8, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f8.u32l;
    // 0x80337C5C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C60: nop

    // 0x80337C64: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x80337C68: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C6C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80337C70: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x80337C74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337C78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337C7C: jal         0x800272E8
    // 0x80337C80: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x80337C80: nop

    after_0:
    // 0x80337C84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337C88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337C8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80337C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80337C94: jal         0x80019448
    // 0x80337C98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80337C98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80337C9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337CA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337CA4: jal         0x8001BBDC
    // 0x80337CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80337CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_80337CAC:
    // 0x80337CAC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337CB0: nop

    // 0x80337CB4: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x80337CB8: nop

    // 0x80337CBC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80337CC0: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x80337CC4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337CC8: nop

    // 0x80337CCC: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x80337CD0: nop

    // 0x80337CD4: slti        $at, $t5, 0x25
    ctx->r1 = SIGNED(ctx->r13) < 0X25 ? 1 : 0;
    // 0x80337CD8: bne         $at, $zero, L_80337D1C
    if (ctx->r1 != 0) {
        // 0x80337CDC: nop
    
            goto L_80337D1C;
    }
    // 0x80337CDC: nop

    // 0x80337CE0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337CE4: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x80337CE8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80337CEC: nop

    // 0x80337CF0: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80337CF4: mflo        $t8
    ctx->r24 = lo;
    // 0x80337CF8: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
    // 0x80337CFC: nop

    // 0x80337D00: lbu         $t9, 0x27($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X27);
    // 0x80337D04: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D08: addiu       $t0, $t9, 0x14
    ctx->r8 = ADD32(ctx->r25, 0X14);
    // 0x80337D0C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80337D10: nop

    // 0x80337D14: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80337D18: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
L_80337D1C:
    // 0x80337D1C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D20: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80337D24: lh          $t1, 0xA6($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XA6);
    // 0x80337D28: nop

    // 0x80337D2C: bne         $t1, $at, L_80337D5C
    if (ctx->r9 != ctx->r1) {
        // 0x80337D30: nop
    
            goto L_80337D5C;
    }
    // 0x80337D30: nop

    // 0x80337D34: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80337D38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80337D3C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D40: nop

    // 0x80337D44: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
    // 0x80337D48: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80337D4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80337D50: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D54: nop

    // 0x80337D58: swc1        $f4, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f4.u32l;
L_80337D5C:
    // 0x80337D5C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D60: nop

    // 0x80337D64: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80337D68: nop

    // 0x80337D6C: slti        $at, $t7, 0x15
    ctx->r1 = SIGNED(ctx->r15) < 0X15 ? 1 : 0;
    // 0x80337D70: bne         $at, $zero, L_80337E88
    if (ctx->r1 != 0) {
        // 0x80337D74: nop
    
            goto L_80337E88;
    }
    // 0x80337D74: nop

    // 0x80337D78: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80337D7C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D80: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80337D84: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80337D88: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80337D8C: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80337D90: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80337D94: jal         0x80015634
    // 0x80337D98: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_3;
    // 0x80337D98: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_3:
    // 0x80337D9C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80337DA0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DA4: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80337DA8: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80337DAC: jal         0x800157EC
    // 0x80337DB0: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_800157EC(rdram, ctx);
        goto after_4;
    // 0x80337DB0: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_4:
    // 0x80337DB4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80337DB8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80337DBC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DC0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80337DC4: lwc1        $f12, 0x3C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80337DC8: jal         0x80015538
    // 0x80337DCC: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80337DCC: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_5:
    // 0x80337DD0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DD4: nop

    // 0x80337DD8: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x80337DDC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80337DE0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DE4: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80337DE8: lwc1        $f8, 0x4($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80337DEC: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80337DF0: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80337DF4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80337DF8: jal         0x800156C4
    // 0x80337DFC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_6;
    // 0x80337DFC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_6:
    // 0x80337E00: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80337E04: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80337E08: jal         0x80015744
    // 0x80337E0C: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_7;
    // 0x80337E0C: nop

    after_7:
    // 0x80337E10: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80337E14: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337E18: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80337E1C: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80337E20: jal         0x800157EC
    // 0x80337E24: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_800157EC(rdram, ctx);
        goto after_8;
    // 0x80337E24: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_8:
    // 0x80337E28: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80337E2C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80337E30: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337E34: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80337E38: lwc1        $f12, 0x40($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X40);
    // 0x80337E3C: jal         0x80015538
    // 0x80337E40: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x80337E40: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_9:
    // 0x80337E44: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337E48: nop

    // 0x80337E4C: swc1        $f0, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f0.u32l;
    // 0x80337E50: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337E54: nop

    // 0x80337E58: lwc1        $f18, 0x3C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80337E5C: nop

    // 0x80337E60: swc1        $f18, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f18.u32l;
    // 0x80337E64: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337E68: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80337E6C: lwc1        $f14, 0x40($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X40);
    // 0x80337E70: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80337E74: jal         0x80015538
    // 0x80337E78: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x80337E78: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_10:
    // 0x80337E7C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337E80: nop

    // 0x80337E84: swc1        $f0, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f0.u32l;
L_80337E88:
    // 0x80337E88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337E8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337E90: jal         0x80029D8C
    // 0x80337E94: nop

    func_80029D8C(rdram, ctx);
        goto after_11;
    // 0x80337E94: nop

    after_11:
    // 0x80337E98: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80337E9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80337EA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80337EA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337EA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337EAC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80337EB0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80337EB4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80337EB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80337EBC: jal         0x800295C0
    // 0x80337EC0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_12;
    // 0x80337EC0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x80337EC4: beq         $v0, $zero, L_80337EE4
    if (ctx->r2 == 0) {
        // 0x80337EC8: nop
    
            goto L_80337EE4;
    }
    // 0x80337EC8: nop

    // 0x80337ECC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337ED0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80337ED4: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x80337ED8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337EDC: nop

    // 0x80337EE0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337EE4:
    // 0x80337EE4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337EE8: nop

    // 0x80337EEC: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x80337EF0: nop

    // 0x80337EF4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80337EF8: sh          $t8, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r24;
    // 0x80337EFC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337F00: nop

    // 0x80337F04: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x80337F08: nop

    // 0x80337F0C: bgtz        $t0, L_80337F2C
    if (SIGNED(ctx->r8) > 0) {
        // 0x80337F10: nop
    
            goto L_80337F2C;
    }
    // 0x80337F10: nop

    // 0x80337F14: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337F18: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80337F1C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80337F20: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337F24: nop

    // 0x80337F28: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80337F2C:
    // 0x80337F2C: b           L_80337F34
    // 0x80337F30: nop

        goto L_80337F34;
    // 0x80337F30: nop

L_80337F34:
    // 0x80337F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337F38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80337F3C: jr          $ra
    // 0x80337F40: nop

    return;
    // 0x80337F40: nop

;}
RECOMP_FUNC void func_803316C4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803316C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803316CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803316D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803316D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803316D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803316DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803316E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803316EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803316F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803316F4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803316F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803316FC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331700: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331704: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331708: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033170C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331710: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331714: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331718: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033171C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80331720: nop

    // 0x80331724: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80331728: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033172C: nop

    // 0x80331730: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80331734: nop

    // 0x80331738: bne         $t4, $zero, L_80331758
    if (ctx->r12 != 0) {
        // 0x8033173C: nop
    
            goto L_80331758;
    }
    // 0x8033173C: nop

    // 0x80331740: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331744: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80331748: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x8033174C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331750: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x80331754: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_80331758:
    // 0x80331758: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033175C: nop

    // 0x80331760: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80331764: nop

    // 0x80331768: bne         $t0, $zero, L_8033178C
    if (ctx->r8 != 0) {
        // 0x8033176C: nop
    
            goto L_8033178C;
    }
    // 0x8033176C: nop

    // 0x80331770: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331774: nop

    // 0x80331778: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x8033177C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331780: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80331784: b           L_803317F4
    // 0x80331788: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_803317F4;
    // 0x80331788: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_8033178C:
    // 0x8033178C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331790: nop

    // 0x80331794: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x80331798: nop

    // 0x8033179C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x803317A0: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
    // 0x803317A4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803317A8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x803317AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803317B0: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803317B4: jal         0x80015538
    // 0x803317B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803317B8: nop

    after_0:
    // 0x803317BC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803317C0: nop

    // 0x803317C4: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x803317C8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x803317CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803317D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803317D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803317D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803317DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803317E0: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803317E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803317E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803317EC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803317F0: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
L_803317F4:
    // 0x803317F4: b           L_803317FC
    // 0x803317F8: nop

        goto L_803317FC;
    // 0x803317F8: nop

L_803317FC:
    // 0x803317FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331800: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331804: jr          $ra
    // 0x80331808: nop

    return;
    // 0x80331808: nop

;}
RECOMP_FUNC void func_8033AB54_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AB54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033AB58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AB5C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8033AB60: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033AB64: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8033AB68: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8033AB6C: nop

    // 0x8033AB70: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033AB74: nop

    // 0x8033AB78: bne         $t7, $zero, L_8033ABC8
    if (ctx->r15 != 0) {
        // 0x8033AB7C: nop
    
            goto L_8033ABC8;
    }
    // 0x8033AB7C: nop

    // 0x8033AB80: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033AB84: nop

    // 0x8033AB88: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8033AB8C: nop

    // 0x8033AB90: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033AB94: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8033AB98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033AB9C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8033ABA0: nop

    // 0x8033ABA4: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x8033ABA8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8033ABAC: nop

    // 0x8033ABB0: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8033ABB4: nop

    // 0x8033ABB8: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x8033ABBC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8033ABC0: nop

    // 0x8033ABC4: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
L_8033ABC8:
    // 0x8033ABC8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8033ABCC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8033ABD0: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033ABD4: lwc1        $f14, 0x3C($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x8033ABD8: jal         0x8002A800
    // 0x8033ABDC: nop

    func_8002A800(rdram, ctx);
        goto after_0;
    // 0x8033ABDC: nop

    after_0:
    // 0x8033ABE0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033ABE4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033ABE8: nop

    // 0x8033ABEC: bne         $t5, $zero, L_8033AC30
    if (ctx->r13 != 0) {
        // 0x8033ABF0: nop
    
            goto L_8033AC30;
    }
    // 0x8033ABF0: nop

    // 0x8033ABF4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8033ABF8: nop

    // 0x8033ABFC: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8033AC00: nop

    // 0x8033AC04: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
    // 0x8033AC08: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8033AC0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033AC10: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x8033AC14: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8033AC18: nop

    // 0x8033AC1C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x8033AC20: b           L_8033AC60
    // 0x8033AC24: nop

        goto L_8033AC60;
    // 0x8033AC24: nop

    // 0x8033AC28: b           L_8033AC58
    // 0x8033AC2C: nop

        goto L_8033AC58;
    // 0x8033AC2C: nop

L_8033AC30:
    // 0x8033AC30: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033AC34: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033AC38: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8033AC3C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8033AC40: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033AC44: jal         0x80015538
    // 0x8033AC48: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8033AC48: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_1:
    // 0x8033AC4C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8033AC50: nop

    // 0x8033AC54: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
L_8033AC58:
    // 0x8033AC58: b           L_8033AC60
    // 0x8033AC5C: nop

        goto L_8033AC60;
    // 0x8033AC5C: nop

L_8033AC60:
    // 0x8033AC60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AC64: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8033AC68: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8033AC6C: jr          $ra
    // 0x8033AC70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033AC70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80335A70_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335A70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335A74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335A78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335A7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335A80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335A84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335A88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335A8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335A90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335A94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335A98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335A9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335AA0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335AA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335AA8: nop

    // 0x80335AAC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335AB0: nop

    // 0x80335AB4: bne         $t1, $zero, L_80335BB4
    if (ctx->r9 != 0) {
        // 0x80335AB8: nop
    
            goto L_80335BB4;
    }
    // 0x80335AB8: nop

    // 0x80335ABC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335AC0: nop

    // 0x80335AC4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335AC8: nop

    // 0x80335ACC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335AD0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335AD4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335AD8: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x80335ADC: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80335AE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335AE4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335AE8: addiu       $t7, $t7, -0x7EF8
    ctx->r15 = ADD32(ctx->r15, -0X7EF8);
    // 0x80335AEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335AF0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335AF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335AFC: jal         0x8001C0EC
    // 0x80335B00: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335B00: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x80335B04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335B0C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335B10: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x80335B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335B18: jal         0x8001ABF4
    // 0x80335B1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80335B1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80335B20: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335B24: nop

    // 0x80335B28: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x80335B2C: nop

    // 0x80335B30: bne         $t9, $zero, L_80335B6C
    if (ctx->r25 != 0) {
        // 0x80335B34: nop
    
            goto L_80335B6C;
    }
    // 0x80335B34: nop

    // 0x80335B38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335B3C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80335B40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335B44: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80335B48: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80335B4C: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80335B50: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80335B54: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80335B58: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x80335B5C: jal         0x8002AE38
    // 0x80335B60: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8002AE38(rdram, ctx);
        goto after_2;
    // 0x80335B60: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x80335B64: b           L_80335B98
    // 0x80335B68: nop

        goto L_80335B98;
    // 0x80335B68: nop

L_80335B6C:
    // 0x80335B6C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335B70: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80335B74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335B78: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80335B7C: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x80335B80: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80335B84: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    // 0x80335B88: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80335B8C: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x80335B90: jal         0x8002AE38
    // 0x80335B94: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8002AE38(rdram, ctx);
        goto after_3;
    // 0x80335B94: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_3:
L_80335B98:
    // 0x80335B98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335BA4: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x80335BA8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335BAC: jal         0x800175F0
    // 0x80335BB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x80335BB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_80335BB4:
    // 0x80335BB4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335BB8: nop

    // 0x80335BBC: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x80335BC0: nop

    // 0x80335BC4: bne         $t5, $zero, L_80335C18
    if (ctx->r13 != 0) {
        // 0x80335BC8: nop
    
            goto L_80335C18;
    }
    // 0x80335BC8: nop

    // 0x80335BCC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335BD0: nop

    // 0x80335BD4: lh          $t7, 0xB6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB6);
    // 0x80335BD8: nop

    // 0x80335BDC: bne         $t7, $zero, L_80335BF4
    if (ctx->r15 != 0) {
        // 0x80335BE0: nop
    
            goto L_80335BF4;
    }
    // 0x80335BE0: nop

    // 0x80335BE4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335BE8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80335BEC: b           L_80335C00
    // 0x80335BF0: sh          $t8, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r24;
        goto L_80335C00;
    // 0x80335BF0: sh          $t8, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r24;
L_80335BF4:
    // 0x80335BF4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335BF8: nop

    // 0x80335BFC: sh          $zero, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = 0;
L_80335C00:
    // 0x80335C00: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335C04: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80335C08: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80335C0C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335C10: b           L_80335C30
    // 0x80335C14: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_80335C30;
    // 0x80335C14: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80335C18:
    // 0x80335C18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335C1C: nop

    // 0x80335C20: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x80335C24: nop

    // 0x80335C28: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80335C2C: sh          $t6, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r14;
L_80335C30:
    // 0x80335C30: b           L_80335C38
    // 0x80335C34: nop

        goto L_80335C38;
    // 0x80335C34: nop

L_80335C38:
    // 0x80335C38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335C3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335C40: jr          $ra
    // 0x80335C44: nop

    return;
    // 0x80335C44: nop

;}
RECOMP_FUNC void func_80338C64_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338C64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338C68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338C6C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80338C70: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80338C74: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80338C78: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80338C7C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80338C80: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80338C84: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80338C88: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80338C8C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80338C90: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80338C94: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80338C98: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80338C9C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80338CA0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80338CA4: addiu       $a1, $a1, 0x4630
    ctx->r5 = ADD32(ctx->r5, 0X4630);
    // 0x80338CA8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80338CAC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80338CB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80338CB4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80338CB8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80338CBC: jal         0x80027464
    // 0x80338CC0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80338CC0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80338CC4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80338CC8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338CCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338CD0: beq         $t1, $at, L_80338D38
    if (ctx->r9 == ctx->r1) {
        // 0x80338CD4: nop
    
            goto L_80338D38;
    }
    // 0x80338CD4: nop

    // 0x80338CD8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80338CDC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80338CE0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80338CE4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338CE8: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80338CEC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80338CF0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338CF4: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80338CF8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80338CFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338D00: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80338D04: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
    // 0x80338D08: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338D0C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80338D10: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80338D14: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80338D18: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80338D1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80338D20: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80338D24: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x80338D28: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80338D2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338D30: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80338D34: sh          $t8, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r24;
L_80338D38:
    // 0x80338D38: b           L_80338D40
    // 0x80338D3C: nop

        goto L_80338D40;
    // 0x80338D3C: nop

L_80338D40:
    // 0x80338D40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338D44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338D48: jr          $ra
    // 0x80338D4C: nop

    return;
    // 0x80338D4C: nop

;}
RECOMP_FUNC void func_80337F44_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337F44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80337F48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337F4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337F50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337F54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337F58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337F5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337F60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337F64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337F68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337F6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337F70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337F74: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80337F78: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80337F7C: nop

    // 0x80337F80: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337F84: nop

    // 0x80337F88: bne         $t1, $zero, L_80337FC8
    if (ctx->r9 != 0) {
        // 0x80337F8C: nop
    
            goto L_80337FC8;
    }
    // 0x80337F8C: nop

    // 0x80337F90: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80337F94: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80337F98: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80337F9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80337FA0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80337FA4: nop

    // 0x80337FA8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80337FAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80337FB0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80337FB4: nop

    // 0x80337FB8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80337FBC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80337FC0: nop

    // 0x80337FC4: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
L_80337FC8:
    // 0x80337FC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337FCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337FD0: jal         0x80029C40
    // 0x80337FD4: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80337FD4: nop

    after_0:
    // 0x80337FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337FDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337FE0: jal         0x80029D04
    // 0x80337FE4: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80337FE4: nop

    after_1:
    // 0x80337FE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337FEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337FF0: jal         0x8002B0E4
    // 0x80337FF4: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x80337FF4: nop

    after_2:
    // 0x80337FF8: b           L_80338000
    // 0x80337FFC: nop

        goto L_80338000;
    // 0x80337FFC: nop

L_80338000:
    // 0x80338000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80338004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80338008: jr          $ra
    // 0x8033800C: nop

    return;
    // 0x8033800C: nop

;}
RECOMP_FUNC void func_803302C8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803302CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803302D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803302D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803302D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803302DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803302E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803302E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803302F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803302F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803302F8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803302FC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330300: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80330304: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330308: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033030C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330310: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330314: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330318: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033031C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330320: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80330324: nop

    // 0x80330328: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8033032C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330330: nop

    // 0x80330334: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80330338: nop

    // 0x8033033C: bne         $t4, $zero, L_8033047C
    if (ctx->r12 != 0) {
        // 0x80330340: nop
    
            goto L_8033047C;
    }
    // 0x80330340: nop

    // 0x80330344: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330348: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033034C: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x80330350: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330354: nop

    // 0x80330358: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x8033035C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330360: nop

    // 0x80330364: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80330368: nop

    // 0x8033036C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330370: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80330374: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80330378: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033037C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330380: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
    // 0x80330384: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330388: nop

    // 0x8033038C: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
    // 0x80330390: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80330394: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330398: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8033039C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803303A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803303A4: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x803303A8: nop

    // 0x803303AC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803303B0: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x803303B4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803303B8: sh          $t4, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r12;
    // 0x803303BC: nop

    // 0x803303C0: jal         0x80014E80
    // 0x803303C4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x803303C4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x803303C8: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x803303CC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803303D0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x803303D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803303D8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x803303DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803303E0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803303E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803303E8: addiu       $t7, $t6, 0x5A
    ctx->r15 = ADD32(ctx->r14, 0X5A);
    // 0x803303EC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x803303F0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803303F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803303F8: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
    // 0x803303FC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80330400: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330404: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330408: nop

    // 0x8033040C: swc1        $f16, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f16.u32l;
    // 0x80330410: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80330414: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330418: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033041C: nop

    // 0x80330420: swc1        $f18, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f18.u32l;
    // 0x80330424: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330428: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033042C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330430: nop

    // 0x80330434: swc1        $f4, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f4.u32l;
    // 0x80330438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033043C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80330440: addiu       $t3, $t3, -0x7594
    ctx->r11 = ADD32(ctx->r11, -0X7594);
    // 0x80330444: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330448: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8033044C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330454: jal         0x8001C0EC
    // 0x80330458: addiu       $a3, $zero, 0x61
    ctx->r7 = ADD32(0, 0X61);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330458: addiu       $a3, $zero, 0x61
    ctx->r7 = ADD32(0, 0X61);
    after_1:
    // 0x8033045C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80330460: addiu       $t4, $t4, -0x758C
    ctx->r12 = ADD32(ctx->r12, -0X758C);
    // 0x80330464: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80330468: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8033046C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330474: jal         0x8001C0EC
    // 0x80330478: addiu       $a3, $zero, 0x62
    ctx->r7 = ADD32(0, 0X62);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80330478: addiu       $a3, $zero, 0x62
    ctx->r7 = ADD32(0, 0X62);
    after_2:
L_8033047C:
    // 0x8033047C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330480: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330484: jal         0x80028FA0
    // 0x80330488: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x80330488: nop

    after_3:
    // 0x8033048C: beq         $v0, $zero, L_803304A0
    if (ctx->r2 == 0) {
        // 0x80330490: nop
    
            goto L_803304A0;
    }
    // 0x80330490: nop

    // 0x80330494: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330498: nop

    // 0x8033049C: sh          $zero, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = 0;
L_803304A0:
    // 0x803304A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304A8: jal         0x80029C40
    // 0x803304AC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x803304AC: nop

    after_4:
    // 0x803304B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803304B4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803304B8: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x803304BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803304C0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x803304C4: jal         0x80015538
    // 0x803304C8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803304C8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x803304CC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x803304D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803304D4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x803304D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803304DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803304E0: nop

    // 0x803304E4: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803304E8: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x803304EC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x803304F0: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x803304F4: nop

    // 0x803304F8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803304FC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330500: lh          $t1, 0xA6($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA6);
    // 0x80330504: lwc1        $f19, -0x5290($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X5290);
    // 0x80330508: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8033050C: lwc1        $f18, -0x528C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X528C);
    // 0x80330510: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80330514: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80330518: jal         0x80034970
    // 0x8033051C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x8033051C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_6:
    // 0x80330520: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330524: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330528: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x8033052C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330530: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80330534: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330538: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033053C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80330540: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80330544: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80330548: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x8033054C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330550: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330554: jal         0x80029D04
    // 0x80330558: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x80330558: nop

    after_7:
    // 0x8033055C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330560: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330564: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330568: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033056C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330570: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80330574: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330578: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033057C: jal         0x80029018
    // 0x80330580: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x80330580: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80330584: beq         $v0, $zero, L_80330598
    if (ctx->r2 == 0) {
        // 0x80330588: nop
    
            goto L_80330598;
    }
    // 0x80330588: nop

    // 0x8033058C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330590: nop

    // 0x80330594: sh          $zero, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = 0;
L_80330598:
    // 0x80330598: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033059C: nop

    // 0x803305A0: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x803305A4: nop

    // 0x803305A8: bne         $t6, $zero, L_80330658
    if (ctx->r14 != 0) {
        // 0x803305AC: nop
    
            goto L_80330658;
    }
    // 0x803305AC: nop

    // 0x803305B0: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x803305B4: nop

    // 0x803305B8: bne         $t7, $zero, L_80330658
    if (ctx->r15 != 0) {
        // 0x803305BC: nop
    
            goto L_80330658;
    }
    // 0x803305BC: nop

    // 0x803305C0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803305C4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803305C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803305CC: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x803305D0: nop

    // 0x803305D4: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x803305D8: nop

    // 0x803305DC: bc1f        L_803305F8
    if (!c1cs) {
        // 0x803305E0: nop
    
            goto L_803305F8;
    }
    // 0x803305E0: nop

    // 0x803305E4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803305E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803305EC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803305F0: b           L_8033060C
    // 0x803305F4: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
        goto L_8033060C;
    // 0x803305F4: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
L_803305F8:
    // 0x803305F8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803305FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330600: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330604: nop

    // 0x80330608: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
L_8033060C:
    // 0x8033060C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330610: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80330614: sh          $t1, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r9;
    // 0x80330618: jal         0x80014E80
    // 0x8033061C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x8033061C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x80330620: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330624: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x80330628: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x8033062C: sh          $t2, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r10;
    // 0x80330630: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330634: nop

    // 0x80330638: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x8033063C: nop

    // 0x80330640: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80330644: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x80330648: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8033064C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80330650: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330654: sh          $t9, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r25;
L_80330658:
    // 0x80330658: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033065C: nop

    // 0x80330660: lh          $t8, 0xA8($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA8);
    // 0x80330664: nop

    // 0x80330668: beq         $t8, $zero, L_80330688
    if (ctx->r24 == 0) {
        // 0x8033066C: nop
    
            goto L_80330688;
    }
    // 0x8033066C: nop

    // 0x80330670: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330674: nop

    // 0x80330678: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x8033067C: nop

    // 0x80330680: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x80330684: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
L_80330688:
    // 0x80330688: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033068C: nop

    // 0x80330690: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x80330694: nop

    // 0x80330698: beq         $t6, $zero, L_803306B8
    if (ctx->r14 == 0) {
        // 0x8033069C: nop
    
            goto L_803306B8;
    }
    // 0x8033069C: nop

    // 0x803306A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803306A4: nop

    // 0x803306A8: lh          $t9, 0xAA($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAA);
    // 0x803306AC: nop

    // 0x803306B0: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x803306B4: sh          $t5, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r13;
L_803306B8:
    // 0x803306B8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x803306BC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803306C0: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x803306C4: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x803306C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803306CC: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x803306D0: lwc1        $f10, 0x24($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X24);
    // 0x803306D4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803306D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306DC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803306E0: swc1        $f10, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f10.u32l;
    // 0x803306E4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803306E8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803306EC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803306F0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803306F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803306F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803306FC: lwc1        $f8, 0x28($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80330700: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330704: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330708: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033070C: swc1        $f8, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f8.u32l;
    // 0x80330710: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80330714: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330718: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x8033071C: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80330720: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330724: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80330728: lwc1        $f16, 0x2C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033072C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330730: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330734: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330738: swc1        $f16, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f16.u32l;
    // 0x8033073C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330740: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80330744: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330748: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033074C: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80330750: nop

    // 0x80330754: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80330758: nop

    // 0x8033075C: bc1f        L_80330798
    if (!c1cs) {
        // 0x80330760: nop
    
            goto L_80330798;
    }
    // 0x80330760: nop

    // 0x80330764: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330768: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033076C: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x80330770: jal         0x8002A1FC
    // 0x80330774: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_10;
    // 0x80330774: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_10:
    // 0x80330778: beq         $v0, $zero, L_80330798
    if (ctx->r2 == 0) {
        // 0x8033077C: nop
    
            goto L_80330798;
    }
    // 0x8033077C: nop

    // 0x80330780: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330784: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80330788: sh          $t8, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r24;
    // 0x8033078C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330790: nop

    // 0x80330794: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80330798:
    // 0x80330798: b           L_803307A0
    // 0x8033079C: nop

        goto L_803307A0;
    // 0x8033079C: nop

L_803307A0:
    // 0x803307A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803307A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803307A8: jr          $ra
    // 0x803307AC: nop

    return;
    // 0x803307AC: nop

;}
RECOMP_FUNC void func_803349B0_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803349B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803349B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803349B8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803349BC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803349C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803349C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803349C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803349CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803349D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803349D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803349D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803349DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803349E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803349E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803349E8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x803349EC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803349F0: nop

    // 0x803349F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803349F8: nop

    // 0x803349FC: bne         $t1, $zero, L_80334A48
    if (ctx->r9 != 0) {
        // 0x80334A00: nop
    
            goto L_80334A48;
    }
    // 0x80334A00: nop

    // 0x80334A04: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80334A08: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80334A0C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80334A10: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80334A14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334A18: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80334A1C: nop

    // 0x80334A20: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80334A24: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80334A28: nop

    // 0x80334A2C: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80334A30: nop

    // 0x80334A34: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80334A38: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334A3C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80334A40: nop

    // 0x80334A44: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
L_80334A48:
    // 0x80334A48: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x80334A4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A54: jal         0x80028FA0
    // 0x80334A58: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x80334A58: nop

    after_0:
    // 0x80334A5C: beq         $v0, $zero, L_80334A6C
    if (ctx->r2 == 0) {
        // 0x80334A60: nop
    
            goto L_80334A6C;
    }
    // 0x80334A60: nop

    // 0x80334A64: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80334A68: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_80334A6C:
    // 0x80334A6C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80334A70: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80334A74: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80334A78: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80334A7C: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80334A80: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80334A84: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80334A88: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80334A8C: jal         0x80015634
    // 0x80334A90: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x80334A90: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    after_1:
    // 0x80334A94: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80334A98: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80334A9C: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334AA0: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80334AA4: jal         0x800157EC
    // 0x80334AA8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_2;
    // 0x80334AA8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_2:
    // 0x80334AAC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80334AB0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80334AB4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80334AB8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80334ABC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80334AC0: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80334AC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334AC8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80334ACC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80334AD0: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80334AD4: jal         0x80015538
    // 0x80334AD8: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80334AD8: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
    after_3:
    // 0x80334ADC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80334AE0: nop

    // 0x80334AE4: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x80334AE8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80334AEC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80334AF0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80334AF4: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80334AF8: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80334AFC: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80334B00: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80334B04: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80334B08: jal         0x800156C4
    // 0x80334B0C: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_4;
    // 0x80334B0C: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_4:
    // 0x80334B10: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80334B14: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334B18: jal         0x80015744
    // 0x80334B1C: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_5;
    // 0x80334B1C: nop

    after_5:
    // 0x80334B20: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80334B24: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80334B28: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334B2C: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80334B30: jal         0x800157EC
    // 0x80334B34: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_6;
    // 0x80334B34: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_6:
    // 0x80334B38: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80334B3C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80334B40: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80334B44: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80334B48: lwc1        $f12, 0x40($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X40);
    // 0x80334B4C: jal         0x80015538
    // 0x80334B50: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80334B50: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_7:
    // 0x80334B54: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80334B58: nop

    // 0x80334B5C: swc1        $f0, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f0.u32l;
    // 0x80334B60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B68: jal         0x80029D8C
    // 0x80334B6C: nop

    func_80029D8C(rdram, ctx);
        goto after_8;
    // 0x80334B6C: nop

    after_8:
    // 0x80334B70: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334B74: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334B78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80334B84: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80334B88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334B8C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80334B90: jal         0x80029018
    // 0x80334B94: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x80334B94: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x80334B98: beq         $v0, $zero, L_80334BA8
    if (ctx->r2 == 0) {
        // 0x80334B9C: nop
    
            goto L_80334BA8;
    }
    // 0x80334B9C: nop

    // 0x80334BA0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80334BA4: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
L_80334BA8:
    // 0x80334BA8: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80334BAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334BB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334BB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334BB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334BBC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80334BC0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x80334BC4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334BC8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334BCC: jal         0x800295C0
    // 0x80334BD0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_10;
    // 0x80334BD0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x80334BD4: beq         $v0, $zero, L_80334BE4
    if (ctx->r2 == 0) {
        // 0x80334BD8: nop
    
            goto L_80334BE4;
    }
    // 0x80334BD8: nop

    // 0x80334BDC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80334BE0: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
L_80334BE4:
    // 0x80334BE4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80334BE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334BEC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334BF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334BF8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80334BFC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x80334C00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334C04: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334C08: jal         0x800295C0
    // 0x80334C0C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_11;
    // 0x80334C0C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x80334C10: beq         $v0, $zero, L_80334C20
    if (ctx->r2 == 0) {
        // 0x80334C14: nop
    
            goto L_80334C20;
    }
    // 0x80334C14: nop

    // 0x80334C18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80334C1C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
L_80334C20:
    // 0x80334C20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334C24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334C28: lui         $a1, 0x44D4
    ctx->r5 = S32(0X44D4 << 16);
    // 0x80334C2C: jal         0x8002A1FC
    // 0x80334C30: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_12;
    // 0x80334C30: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_12:
    // 0x80334C34: bne         $v0, $zero, L_80334C44
    if (ctx->r2 != 0) {
        // 0x80334C38: nop
    
            goto L_80334C44;
    }
    // 0x80334C38: nop

    // 0x80334C3C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80334C40: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
L_80334C44:
    // 0x80334C44: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80334C48: nop

    // 0x80334C4C: beq         $t4, $zero, L_80334CA8
    if (ctx->r12 == 0) {
        // 0x80334C50: nop
    
            goto L_80334CA8;
    }
    // 0x80334C50: nop

    // 0x80334C54: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334C58: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80334C5C: nop

    // 0x80334C60: swc1        $f16, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f16.u32l;
    // 0x80334C64: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80334C68: nop

    // 0x80334C6C: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80334C70: nop

    // 0x80334C74: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80334C78: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80334C7C: nop

    // 0x80334C80: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x80334C84: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80334C88: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80334C8C: sh          $t8, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = ctx->r24;
    // 0x80334C90: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80334C94: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80334C98: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80334C9C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80334CA0: nop

    // 0x80334CA4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80334CA8:
    // 0x80334CA8: b           L_80334CB0
    // 0x80334CAC: nop

        goto L_80334CB0;
    // 0x80334CAC: nop

L_80334CB0:
    // 0x80334CB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80334CB4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80334CB8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80334CBC: jr          $ra
    // 0x80334CC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80334CC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80338B68_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338B68: jr          $ra
    // 0x80338B6C: nop

    return;
    // 0x80338B6C: nop

    // 0x80338B70: jr          $ra
    // 0x80338B74: nop

    return;
    // 0x80338B74: nop

;}
RECOMP_FUNC void func_80333BE0_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80333BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333BE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333BEC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333BF0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333BF4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333BF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333BFC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333C00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333C08: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333C0C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80333C10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333C14: bne         $t8, $at, L_80333C34
    if (ctx->r24 != ctx->r1) {
        // 0x80333C18: nop
    
            goto L_80333C34;
    }
    // 0x80333C18: nop

    // 0x80333C1C: b           L_80333C24
    // 0x80333C20: nop

        goto L_80333C24;
    // 0x80333C20: nop

L_80333C24:
    // 0x80333C24: jal         0x80333890
    // 0x80333C28: nop

    func_80333890_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x80333C28: nop

    after_0:
    // 0x80333C2C: b           L_80333C3C
    // 0x80333C30: nop

        goto L_80333C3C;
    // 0x80333C30: nop

L_80333C34:
    // 0x80333C34: b           L_80333C3C
    // 0x80333C38: nop

        goto L_80333C3C;
    // 0x80333C38: nop

L_80333C3C:
    // 0x80333C3C: b           L_80333C44
    // 0x80333C40: nop

        goto L_80333C44;
    // 0x80333C40: nop

L_80333C44:
    // 0x80333C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80333C4C: jr          $ra
    // 0x80333C50: nop

    return;
    // 0x80333C50: nop

;}
RECOMP_FUNC void func_80338350_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338350: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80338354: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80338358: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033835C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338360: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338364: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338368: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033836C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338370: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338374: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338378: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033837C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338380: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338384: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80338388: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033838C: nop

    // 0x80338390: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338394: nop

    // 0x80338398: bne         $t1, $zero, L_803383EC
    if (ctx->r9 != 0) {
        // 0x8033839C: nop
    
            goto L_803383EC;
    }
    // 0x8033839C: nop

    // 0x803383A0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803383A4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803383A8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803383AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803383B0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803383B4: nop

    // 0x803383B8: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x803383BC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803383C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803383C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803383C8: nop

    // 0x803383CC: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x803383D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803383D4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803383D8: nop

    // 0x803383DC: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x803383E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803383E4: nop

    // 0x803383E8: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
L_803383EC:
    // 0x803383EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803383F0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803383F4: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x803383F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803383FC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80338400: jal         0x80015538
    // 0x80338404: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80338404: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x80338408: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8033840C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80338410: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80338414: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80338418: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033841C: nop

    // 0x80338420: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80338424: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x80338428: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8033842C: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x80338430: nop

    // 0x80338434: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80338438: nop

    // 0x8033843C: lwc1        $f18, 0x3C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80338440: nop

    // 0x80338444: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x80338448: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033844C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338450: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x80338454: lwc1        $f9, -0x5160($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5160);
    // 0x80338458: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8033845C: lwc1        $f8, -0x515C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X515C);
    // 0x80338460: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80338464: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80338468: jal         0x80034970
    // 0x8033846C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x8033846C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80338470: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338474: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80338478: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033847C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80338480: swc1        $f18, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f18.u32l;
    // 0x80338484: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338488: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033848C: jal         0x80029C40
    // 0x80338490: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80338490: nop

    after_2:
    // 0x80338494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033849C: jal         0x80029D04
    // 0x803384A0: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x803384A0: nop

    after_3:
    // 0x803384A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803384A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803384AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803384B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803384B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803384B8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x803384BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803384C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803384C4: jal         0x80029018
    // 0x803384C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x803384C8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x803384CC: beq         $v0, $zero, L_803384F0
    if (ctx->r2 == 0) {
        // 0x803384D0: nop
    
            goto L_803384F0;
    }
    // 0x803384D0: nop

    // 0x803384D4: jal         0x800297DC
    // 0x803384D8: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x803384D8: nop

    after_5:
    // 0x803384DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803384E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803384E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803384E8: jal         0x80029824
    // 0x803384EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x803384EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_803384F0:
    // 0x803384F0: b           L_803384F8
    // 0x803384F4: nop

        goto L_803384F8;
    // 0x803384F4: nop

L_803384F8:
    // 0x803384F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803384FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80338500: jr          $ra
    // 0x80338504: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80338504: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033A9AC_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A9AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033A9B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033A9B4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8033A9B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033A9BC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8033A9C0: nop

    // 0x8033A9C4: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033A9C8: nop

    // 0x8033A9CC: bne         $t7, $zero, L_8033AA00
    if (ctx->r15 != 0) {
        // 0x8033A9D0: nop
    
            goto L_8033AA00;
    }
    // 0x8033A9D0: nop

    // 0x8033A9D4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8033A9D8: nop

    // 0x8033A9DC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8033A9E0: nop

    // 0x8033A9E4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033A9E8: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8033A9EC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033A9F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A9F4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8033A9F8: nop

    // 0x8033A9FC: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
L_8033AA00:
    // 0x8033AA00: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8033AA04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AA08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA0C: jal         0x80028FA0
    // 0x8033AA10: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x8033AA10: nop

    after_0:
    // 0x8033AA14: beq         $v0, $zero, L_8033AA34
    if (ctx->r2 == 0) {
        // 0x8033AA18: nop
    
            goto L_8033AA34;
    }
    // 0x8033AA18: nop

    // 0x8033AA1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AA20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA24: jal         0x80029B60
    // 0x8033AA28: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x8033AA28: nop

    after_1:
    // 0x8033AA2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033AA30: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_8033AA34:
    // 0x8033AA34: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033AA38: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8033AA3C: nop

    // 0x8033AA40: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
    // 0x8033AA44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AA48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA4C: jal         0x80029C40
    // 0x8033AA50: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x8033AA50: nop

    after_2:
    // 0x8033AA54: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033AA58: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033AA5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AA60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033AA68: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x8033AA6C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033AA70: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033AA74: jal         0x80029018
    // 0x8033AA78: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x8033AA78: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x8033AA7C: beq         $v0, $zero, L_8033AAA8
    if (ctx->r2 == 0) {
        // 0x8033AA80: nop
    
            goto L_8033AAA8;
    }
    // 0x8033AA80: nop

    // 0x8033AA84: jal         0x800297DC
    // 0x8033AA88: nop

    func_800297DC(rdram, ctx);
        goto after_4;
    // 0x8033AA88: nop

    after_4:
    // 0x8033AA8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AA90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8033AA98: jal         0x80029824
    // 0x8033AA9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_5;
    // 0x8033AA9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8033AAA0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033AAA4: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_8033AAA8:
    // 0x8033AAA8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033AAAC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033AAB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AAB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AAB8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8033AABC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8033AAC0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033AAC4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033AAC8: jal         0x800295C0
    // 0x8033AACC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x8033AACC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x8033AAD0: beq         $v0, $zero, L_8033AAE8
    if (ctx->r2 == 0) {
        // 0x8033AAD4: nop
    
            goto L_8033AAE8;
    }
    // 0x8033AAD4: nop

    // 0x8033AAD8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033AADC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8033AAE0: b           L_8033AAF8
    // 0x8033AAE4: swc1        $f4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f4.u32l;
        goto L_8033AAF8;
    // 0x8033AAE4: swc1        $f4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f4.u32l;
L_8033AAE8:
    // 0x8033AAE8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033AAEC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8033AAF0: nop

    // 0x8033AAF4: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
L_8033AAF8:
    // 0x8033AAF8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033AAFC: nop

    // 0x8033AB00: beq         $t7, $zero, L_8033AB28
    if (ctx->r15 == 0) {
        // 0x8033AB04: nop
    
            goto L_8033AB28;
    }
    // 0x8033AB04: nop

    // 0x8033AB08: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8033AB0C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8033AB10: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033AB14: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8033AB18: nop

    // 0x8033AB1C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x8033AB20: b           L_8033AB44
    // 0x8033AB24: nop

        goto L_8033AB44;
    // 0x8033AB24: nop

L_8033AB28:
    // 0x8033AB28: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8033AB2C: nop

    // 0x8033AB30: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8033AB34: nop

    // 0x8033AB38: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
    // 0x8033AB3C: b           L_8033AB44
    // 0x8033AB40: nop

        goto L_8033AB44;
    // 0x8033AB40: nop

L_8033AB44:
    // 0x8033AB44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033AB48: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8033AB4C: jr          $ra
    // 0x8033AB50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033AB50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80337A44_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337A44: jr          $ra
    // 0x80337A48: nop

    return;
    // 0x80337A48: nop

    // 0x80337A4C: jr          $ra
    // 0x80337A50: nop

    return;
    // 0x80337A50: nop

;}
RECOMP_FUNC void func_8033A408_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A408: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033A40C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A410: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A414: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A418: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A41C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A420: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A424: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A428: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A42C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A430: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A434: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033A438: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033A43C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8033A440: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A444: bne         $t0, $at, L_8033A464
    if (ctx->r8 != ctx->r1) {
        // 0x8033A448: nop
    
            goto L_8033A464;
    }
    // 0x8033A448: nop

    // 0x8033A44C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033A450: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033A454: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8033A458: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033A45C: nop

    // 0x8033A460: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033A464:
    // 0x8033A464: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033A468: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x8033A46C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033A470: bne         $t4, $at, L_8033A490
    if (ctx->r12 != ctx->r1) {
        // 0x8033A474: nop
    
            goto L_8033A490;
    }
    // 0x8033A474: nop

    // 0x8033A478: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8033A47C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8033A480: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x8033A484: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8033A488: nop

    // 0x8033A48C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033A490:
    // 0x8033A490: b           L_8033A498
    // 0x8033A494: nop

        goto L_8033A498;
    // 0x8033A494: nop

L_8033A498:
    // 0x8033A498: jr          $ra
    // 0x8033A49C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033A49C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
