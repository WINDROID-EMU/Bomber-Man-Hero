#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8009219C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009219C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800921A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800921A4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800921A8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800921AC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800921B0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800921B4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800921B8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800921BC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800921C0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800921C4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800921C8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800921CC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800921D0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800921D4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800921D8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800921DC: addiu       $a1, $a1, 0x1678
    ctx->r5 = ADD32(ctx->r5, 0X1678);
    // 0x800921E0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800921E4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800921E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800921EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800921F0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800921F4: jal         0x80027464
    // 0x800921F8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800921F8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800921FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092200: b           L_80092208
    // 0x80092204: nop

        goto L_80092208;
    // 0x80092204: nop

L_80092208:
    // 0x80092208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009220C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092210: jr          $ra
    // 0x80092214: nop

    return;
    // 0x80092214: nop

;}
RECOMP_FUNC void func_8006B1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B1B4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006B1B8: b           L_8006B3B4
    // 0x8006B1BC: nop

        goto L_8006B3B4;
    // 0x8006B1BC: nop

    // 0x8006B1C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B1C4: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B1C8: nop

    // 0x8006B1CC: bne         $t6, $zero, L_8006B1F0
    if (ctx->r14 != 0) {
        // 0x8006B1D0: nop
    
            goto L_8006B1F0;
    }
    // 0x8006B1D0: nop

    // 0x8006B1D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B1D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B1DC: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006B1E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B1E4: sh          $zero, 0x7936($at)
    MEM_H(0X7936, ctx->r1) = 0;
    // 0x8006B1E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B1EC: sb          $zero, 0x7939($at)
    MEM_B(0X7939, ctx->r1) = 0;
L_8006B1F0:
    // 0x8006B1F0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006B1F4: lbu         $t8, 0x7939($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7939);
    // 0x8006B1F8: nop

    // 0x8006B1FC: bne         $t8, $zero, L_8006B350
    if (ctx->r24 != 0) {
        // 0x8006B200: nop
    
            goto L_8006B350;
    }
    // 0x8006B200: nop

    // 0x8006B204: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006B208: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8006B20C: lui         $at, 0x4561
    ctx->r1 = S32(0X4561 << 16);
    // 0x8006B210: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006B214: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8006B218: nop

    // 0x8006B21C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8006B220: nop

    // 0x8006B224: bc1f        L_8006B238
    if (!c1cs) {
        // 0x8006B228: nop
    
            goto L_8006B238;
    }
    // 0x8006B228: nop

    // 0x8006B22C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8006B230: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B234: sb          $t0, 0x7939($at)
    MEM_B(0X7939, ctx->r1) = ctx->r8;
L_8006B238:
    // 0x8006B238: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006B23C: lhu         $t1, 0x7936($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X7936);
    // 0x8006B240: nop

    // 0x8006B244: bne         $t1, $zero, L_8006B33C
    if (ctx->r9 != 0) {
        // 0x8006B248: nop
    
            goto L_8006B33C;
    }
    // 0x8006B248: nop

    // 0x8006B24C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006B250: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8006B254: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006B258: lwc1        $f8, 0x4FA0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4FA0);
    // 0x8006B25C: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8006B260: nop

    // 0x8006B264: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8006B268: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8006B26C: nop

    // 0x8006B270: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8006B274: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006B278: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006B27C: nop

    // 0x8006B280: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8006B284: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x8006B288: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8006B28C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x8006B290: nop

    // 0x8006B294: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8006B298: nop

    // 0x8006B29C: bgez        $t5, L_8006B2AC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8006B2A0: nop
    
            goto L_8006B2AC;
    }
    // 0x8006B2A0: nop

    // 0x8006B2A4: b           L_8006B2C8
    // 0x8006B2A8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
        goto L_8006B2C8;
    // 0x8006B2A8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8006B2AC:
    // 0x8006B2AC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8006B2B0: nop

    // 0x8006B2B4: slti        $at, $t6, 0xFA1
    ctx->r1 = SIGNED(ctx->r14) < 0XFA1 ? 1 : 0;
    // 0x8006B2B8: bne         $at, $zero, L_8006B2C8
    if (ctx->r1 != 0) {
        // 0x8006B2BC: nop
    
            goto L_8006B2C8;
    }
    // 0x8006B2BC: nop

    // 0x8006B2C0: addiu       $t7, $zero, 0xFA0
    ctx->r15 = ADD32(0, 0XFA0);
    // 0x8006B2C4: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
L_8006B2C8:
    // 0x8006B2C8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8006B2CC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8006B2D0: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8006B2D4: mflo        $t9
    ctx->r25 = lo;
    // 0x8006B2D8: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x8006B2DC: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8006B2E0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8006B2E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B2E8: sh          $t1, 0x7936($at)
    MEM_H(0X7936, ctx->r1) = ctx->r9;
    // 0x8006B2EC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8006B2F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B2F4: sb          $t2, 0x75BC($at)
    MEM_B(0X75BC, ctx->r1) = ctx->r10;
    // 0x8006B2F8: addiu       $t3, $zero, 0xC8
    ctx->r11 = ADD32(0, 0XC8);
    // 0x8006B2FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B300: sb          $t3, 0x75C4($at)
    MEM_B(0X75C4, ctx->r1) = ctx->r11;
    // 0x8006B304: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B308: sb          $zero, 0x75CC($at)
    MEM_B(0X75CC, ctx->r1) = 0;
    // 0x8006B30C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B310: sb          $zero, 0x75D4($at)
    MEM_B(0X75D4, ctx->r1) = 0;
    // 0x8006B314: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x8006B318: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B31C: sb          $t4, 0x75DC($at)
    MEM_B(0X75DC, ctx->r1) = ctx->r12;
    // 0x8006B320: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x8006B324: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B328: sb          $t5, 0x75E4($at)
    MEM_B(0X75E4, ctx->r1) = ctx->r13;
    // 0x8006B32C: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x8006B330: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B334: b           L_8006B350
    // 0x8006B338: sb          $t6, 0x75EC($at)
    MEM_B(0X75EC, ctx->r1) = ctx->r14;
        goto L_8006B350;
    // 0x8006B338: sb          $t6, 0x75EC($at)
    MEM_B(0X75EC, ctx->r1) = ctx->r14;
L_8006B33C:
    // 0x8006B33C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006B340: lhu         $t7, 0x7936($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X7936);
    // 0x8006B344: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B348: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006B34C: sh          $t8, 0x7936($at)
    MEM_H(0X7936, ctx->r1) = ctx->r24;
L_8006B350:
    // 0x8006B350: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006B354: lbu         $t9, 0x75C4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X75C4);
    // 0x8006B358: nop

    // 0x8006B35C: beq         $t9, $zero, L_8006B3AC
    if (ctx->r25 == 0) {
        // 0x8006B360: nop
    
            goto L_8006B3AC;
    }
    // 0x8006B360: nop

    // 0x8006B364: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006B368: lbu         $t0, 0x75C4($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X75C4);
    // 0x8006B36C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B370: addiu       $t1, $t0, -0xA
    ctx->r9 = ADD32(ctx->r8, -0XA);
    // 0x8006B374: sb          $t1, 0x75C4($at)
    MEM_B(0X75C4, ctx->r1) = ctx->r9;
    // 0x8006B378: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006B37C: lbu         $t2, 0x75C4($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X75C4);
    // 0x8006B380: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B384: sb          $t2, 0x75DC($at)
    MEM_B(0X75DC, ctx->r1) = ctx->r10;
    // 0x8006B388: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006B38C: lbu         $t3, 0x75DC($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X75DC);
    // 0x8006B390: nop

    // 0x8006B394: slti        $at, $t3, 0x32
    ctx->r1 = SIGNED(ctx->r11) < 0X32 ? 1 : 0;
    // 0x8006B398: beq         $at, $zero, L_8006B3AC
    if (ctx->r1 == 0) {
        // 0x8006B39C: nop
    
            goto L_8006B3AC;
    }
    // 0x8006B39C: nop

    // 0x8006B3A0: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x8006B3A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B3A8: sb          $t4, 0x75DC($at)
    MEM_B(0X75DC, ctx->r1) = ctx->r12;
L_8006B3AC:
    // 0x8006B3AC: b           L_8006B3B4
    // 0x8006B3B0: nop

        goto L_8006B3B4;
    // 0x8006B3B0: nop

L_8006B3B4:
    // 0x8006B3B4: jr          $ra
    // 0x8006B3B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006B3B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800E753C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E753C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E7540: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E7544: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E7548: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E754C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E7550: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7554: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E7558: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E755C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E7560: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E7564: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E7568: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E756C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800E7570: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800E7574: nop

    // 0x800E7578: bne         $t0, $zero, L_800E75C0
    if (ctx->r8 != 0) {
        // 0x800E757C: nop
    
            goto L_800E75C0;
    }
    // 0x800E757C: nop

    // 0x800E7580: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E7584: nop

    // 0x800E7588: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800E758C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E7590: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800E7594: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800E7598: nop

    // 0x800E759C: beq         $t3, $at, L_800E75B0
    if (ctx->r11 == ctx->r1) {
        // 0x800E75A0: nop
    
            goto L_800E75B0;
    }
    // 0x800E75A0: nop

    // 0x800E75A4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E75A8: nop

    // 0x800E75AC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E75B0:
    // 0x800E75B0: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E75B4: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800E75B8: b           L_800E763C
    // 0x800E75BC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
        goto L_800E763C;
    // 0x800E75BC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_800E75C0:
    // 0x800E75C0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800E75C4: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x800E75C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E75CC: bne         $t7, $at, L_800E75F4
    if (ctx->r15 != ctx->r1) {
        // 0x800E75D0: nop
    
            goto L_800E75F4;
    }
    // 0x800E75D0: nop

    // 0x800E75D4: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800E75D8: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x800E75DC: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x800E75E0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800E75E4: nop

    // 0x800E75E8: lh          $t1, 0xB2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB2);
    // 0x800E75EC: b           L_800E763C
    // 0x800E75F0: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
        goto L_800E763C;
    // 0x800E75F0: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
L_800E75F4:
    // 0x800E75F4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E75F8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800E75FC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800E7600: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E7604: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E7608: nop

    // 0x800E760C: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800E7610: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800E7614: nop

    // 0x800E7618: lwc1        $f12, 0x2C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800E761C: nop

    // 0x800E7620: swc1        $f12, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f12.u32l;
    // 0x800E7624: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E7628: nop

    // 0x800E762C: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x800E7630: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800E7634: nop

    // 0x800E7638: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800E763C:
    // 0x800E763C: b           L_800E7644
    // 0x800E7640: nop

        goto L_800E7644;
    // 0x800E7640: nop

L_800E7644:
    // 0x800E7644: jr          $ra
    // 0x800E7648: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E7648: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Skybox_ProcessDraw(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D6F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006D6F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D6FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006D700: lbu         $t6, 0x7930($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7930);
    // 0x8006D704: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006D708: bne         $t6, $at, L_8006D75C
    if (ctx->r14 != ctx->r1) {
        // 0x8006D70C: nop
    
            goto L_8006D75C;
    }
    // 0x8006D70C: nop

    // 0x8006D710: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006D714: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D718: swc1        $f4, 0x759C($at)
    MEM_W(0X759C, ctx->r1) = ctx->f4.u32l;
    // 0x8006D71C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8006D720: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D724: swc1        $f6, 0x75A4($at)
    MEM_W(0X75A4, ctx->r1) = ctx->f6.u32l;
    // 0x8006D728: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8006D72C: jal         0x8006C3D0
    // 0x8006D730: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    Skybox_GetWidthHeight(rdram, ctx);
        goto after_0;
    // 0x8006D730: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8006D734: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D738: lwc1        $f12, 0x759C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X759C);
    // 0x8006D73C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D740: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D744: lwc1        $f14, 0x75A4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75A4);
    // 0x8006D748: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8006D74C: jal         0x8006CC5C
    // 0x8006D750: addiu       $a2, $a2, 0x50
    ctx->r6 = ADD32(ctx->r6, 0X50);
    Skybox_DrawWave(rdram, ctx);
        goto after_1;
    // 0x8006D750: addiu       $a2, $a2, 0x50
    ctx->r6 = ADD32(ctx->r6, 0X50);
    after_1:
    // 0x8006D754: b           L_8006D788
    // 0x8006D758: nop

        goto L_8006D788;
    // 0x8006D758: nop

L_8006D75C:
    // 0x8006D75C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8006D760: jal         0x8006C3D0
    // 0x8006D764: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    Skybox_GetWidthHeight(rdram, ctx);
        goto after_2;
    // 0x8006D764: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x8006D768: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D76C: lwc1        $f12, 0x759C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X759C);
    // 0x8006D770: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D774: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D778: lwc1        $f14, 0x75A4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75A4);
    // 0x8006D77C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8006D780: jal         0x8006C428
    // 0x8006D784: addiu       $a2, $a2, 0x50
    ctx->r6 = ADD32(ctx->r6, 0X50);
    Skybox_DrawStandard(rdram, ctx);
        goto after_3;
    // 0x8006D784: addiu       $a2, $a2, 0x50
    ctx->r6 = ADD32(ctx->r6, 0X50);
    after_3:
L_8006D788:
    // 0x8006D788: b           L_8006D790
    // 0x8006D78C: nop

        goto L_8006D790;
    // 0x8006D78C: nop

L_8006D790:
    // 0x8006D790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D794: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006D798: jr          $ra
    // 0x8006D79C: nop

    return;
    // 0x8006D79C: nop

;}
RECOMP_FUNC void func_800E8CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8CD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8CD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E8CDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E8CE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E8CE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E8CE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E8CEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8CF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8CF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8CF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E8CFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8D00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E8D04: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E8D08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E8D0C: nop

    // 0x800E8D10: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E8D14: nop

    // 0x800E8D18: bne         $t1, $zero, L_800E8D98
    if (ctx->r9 != 0) {
        // 0x800E8D1C: nop
    
            goto L_800E8D98;
    }
    // 0x800E8D1C: nop

    // 0x800E8D20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E8D24: nop

    // 0x800E8D28: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E8D2C: nop

    // 0x800E8D30: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E8D34: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E8D38: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E8D3C: nop

    // 0x800E8D40: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E8D44: nop

    // 0x800E8D48: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E8D4C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E8D50: nop

    // 0x800E8D54: sh          $zero, 0x108($t7)
    MEM_H(0X108, ctx->r15) = 0;
    // 0x800E8D58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E8D5C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E8D60: nop

    // 0x800E8D64: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x800E8D68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8D6C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800E8D70: addiu       $t9, $t9, -0x6730
    ctx->r25 = ADD32(ctx->r25, -0X6730);
    // 0x800E8D74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8D78: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800E8D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E8D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800E8D84: jal         0x8001C0EC
    // 0x800E8D88: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E8D88: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    after_0:
    // 0x800E8D8C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E8D90: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800E8D94: sb          $t0, 0x13A($t1)
    MEM_B(0X13A, ctx->r9) = ctx->r8;
L_800E8D98:
    // 0x800E8D98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8D9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8DA0: jal         0x8001B4AC
    // 0x800E8DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x800E8DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800E8DA8: beq         $v0, $zero, L_800E8DD8
    if (ctx->r2 == 0) {
        // 0x800E8DAC: nop
    
            goto L_800E8DD8;
    }
    // 0x800E8DAC: nop

    // 0x800E8DB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8DB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8DB8: jal         0x8001BBDC
    // 0x800E8DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800E8DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800E8DC0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E8DC4: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x800E8DC8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800E8DCC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E8DD0: nop

    // 0x800E8DD4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800E8DD8:
    // 0x800E8DD8: b           L_800E8DE0
    // 0x800E8DDC: nop

        goto L_800E8DE0;
    // 0x800E8DDC: nop

L_800E8DE0:
    // 0x800E8DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8DE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E8DE8: jr          $ra
    // 0x800E8DEC: nop

    return;
    // 0x800E8DEC: nop

;}
RECOMP_FUNC void func_80081C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081C50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081C54: sh          $zero, -0x1BD0($at)
    MEM_H(-0X1BD0, ctx->r1) = 0;
    // 0x80081C58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80081C5C: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80081C60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081C64: sh          $t6, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r14;
    // 0x80081C68: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80081C6C: lw          $t7, -0x1BD8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1BD8);
    // 0x80081C70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081C74: sh          $t7, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r15;
    // 0x80081C78: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80081C7C: lw          $t8, -0x1BD8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1BD8);
    // 0x80081C80: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80081C84: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80081C88: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80081C8C: lw          $t0, -0x7DC8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7DC8);
    // 0x80081C90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081C94: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80081C98: nop

    // 0x80081C9C: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x80081CA0: nop

    // 0x80081CA4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80081CA8: nop

    // 0x80081CAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80081CB0: swc1        $f6, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f6.u32l;
    // 0x80081CB4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80081CB8: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x80081CBC: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80081CC0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80081CC4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80081CC8: lw          $t5, -0x7DC8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7DC8);
    // 0x80081CCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081CD0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80081CD4: nop

    // 0x80081CD8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80081CDC: nop

    // 0x80081CE0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80081CE4: nop

    // 0x80081CE8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80081CEC: swc1        $f10, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f10.u32l;
    // 0x80081CF0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80081CF4: lw          $t8, -0x1BD8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1BD8);
    // 0x80081CF8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80081CFC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80081D00: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80081D04: lw          $t0, -0x7DC8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7DC8);
    // 0x80081D08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081D0C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80081D10: nop

    // 0x80081D14: lh          $t2, 0x4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X4);
    // 0x80081D18: nop

    // 0x80081D1C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80081D20: nop

    // 0x80081D24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80081D28: swc1        $f18, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f18.u32l;
    // 0x80081D2C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80081D30: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x80081D34: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80081D38: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80081D3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80081D40: lw          $t5, -0x7DC8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7DC8);
    // 0x80081D44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80081D48: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80081D4C: nop

    // 0x80081D50: lh          $t7, 0x6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X6);
    // 0x80081D54: nop

    // 0x80081D58: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80081D5C: nop

    // 0x80081D60: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80081D64: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x80081D68: jr          $ra
    // 0x80081D6C: nop

    return;
    // 0x80081D6C: nop

    // 0x80081D70: jr          $ra
    // 0x80081D74: nop

    return;
    // 0x80081D74: nop

;}
RECOMP_FUNC void func_800FA1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA1C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FA1C4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800FA1C8: nop

    // 0x800FA1CC: bne         $t6, $zero, L_800FA204
    if (ctx->r14 != 0) {
        // 0x800FA1D0: nop
    
            goto L_800FA204;
    }
    // 0x800FA1D0: nop

    // 0x800FA1D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FA1D8: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800FA1DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FA1E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800FA1E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800FA1E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FA1EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800FA1F0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800FA1F4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800FA1F8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800FA1FC: b           L_800FA244
    // 0x800FA200: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800FA244;
    // 0x800FA200: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800FA204:
    // 0x800FA204: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FA208: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800FA20C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FA210: bne         $t0, $at, L_800FA244
    if (ctx->r8 != ctx->r1) {
        // 0x800FA214: nop
    
            goto L_800FA244;
    }
    // 0x800FA214: nop

    // 0x800FA218: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800FA21C: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800FA220: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FA224: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800FA228: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FA22C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800FA230: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FA234: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800FA238: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800FA23C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800FA240: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_800FA244:
    // 0x800FA244: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800FA248: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x800FA24C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FA250: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800FA254: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800FA258: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800FA25C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800FA260: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800FA264: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800FA268: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800FA26C: jr          $ra
    // 0x800FA270: nop

    return;
    // 0x800FA270: nop

    // 0x800FA274: jr          $ra
    // 0x800FA278: nop

    return;
    // 0x800FA278: nop

;}
RECOMP_FUNC void func_800E2A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2A30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E2A34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E2A38: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E2A3C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E2A40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E2A44: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E2A48: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E2A4C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E2A50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2A54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E2A58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2A5C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E2A60: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E2A64: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E2A68: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E2A6C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2A70: nop

    // 0x800E2A74: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E2A78: nop

    // 0x800E2A7C: bne         $t1, $zero, L_800E2AE0
    if (ctx->r9 != 0) {
        // 0x800E2A80: nop
    
            goto L_800E2AE0;
    }
    // 0x800E2A80: nop

    // 0x800E2A84: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2A88: nop

    // 0x800E2A8C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E2A90: nop

    // 0x800E2A94: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E2A98: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E2A9C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2AA0: nop

    // 0x800E2AA4: lwc1        $f4, 0x28($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X28);
    // 0x800E2AA8: nop

    // 0x800E2AAC: swc1        $f4, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f4.u32l;
    // 0x800E2AB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2AB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2AB8: jal         0x8001BBDC
    // 0x800E2ABC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800E2ABC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800E2AC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2AC4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E2AC8: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E2ACC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2AD0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800E2AD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E2AD8: jal         0x8001ABF4
    // 0x800E2ADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E2ADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E2AE0:
    // 0x800E2AE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E2AE4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2AE8: nop

    // 0x800E2AEC: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x800E2AF0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2AF4: nop

    // 0x800E2AF8: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800E2AFC: nop

    // 0x800E2B00: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800E2B04: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2B08: nop

    // 0x800E2B0C: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800E2B10: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2B14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E2B18: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x800E2B1C: nop

    // 0x800E2B20: bne         $t0, $at, L_800E2CC0
    if (ctx->r8 != ctx->r1) {
        // 0x800E2B24: nop
    
            goto L_800E2CC0;
    }
    // 0x800E2B24: nop

    // 0x800E2B28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2B2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2B30: jal         0x8001BBDC
    // 0x800E2B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800E2B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E2B38: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2B3C: nop

    // 0x800E2B40: lwc1        $f8, 0xD4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x800E2B44: nop

    // 0x800E2B48: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
    // 0x800E2B4C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2B50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E2B54: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800E2B58: nop

    // 0x800E2B5C: bne         $t4, $at, L_800E2B80
    if (ctx->r12 != ctx->r1) {
        // 0x800E2B60: nop
    
            goto L_800E2B80;
    }
    // 0x800E2B60: nop

    // 0x800E2B64: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2B68: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800E2B6C: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800E2B70: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2B74: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800E2B78: b           L_800E2CC0
    // 0x800E2B7C: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
        goto L_800E2CC0;
    // 0x800E2B7C: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
L_800E2B80:
    // 0x800E2B80: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2B84: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E2B88: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800E2B8C: nop

    // 0x800E2B90: bne         $t9, $at, L_800E2C74
    if (ctx->r25 != ctx->r1) {
        // 0x800E2B94: nop
    
            goto L_800E2C74;
    }
    // 0x800E2B94: nop

    // 0x800E2B98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2B9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2BA0: jal         0x8001B4AC
    // 0x800E2BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x800E2BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800E2BA8: beq         $v0, $zero, L_800E2C60
    if (ctx->r2 == 0) {
        // 0x800E2BAC: nop
    
            goto L_800E2C60;
    }
    // 0x800E2BAC: nop

    // 0x800E2BB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2BB4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800E2BB8: addiu       $t0, $t0, -0x700C
    ctx->r8 = ADD32(ctx->r8, -0X700C);
    // 0x800E2BBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2BC0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800E2BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E2BC8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x800E2BCC: jal         0x8001C0EC
    // 0x800E2BD0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800E2BD0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_4:
    // 0x800E2BD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2BD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2BDC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E2BE0: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E2BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E2BE8: jal         0x8001ABF4
    // 0x800E2BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800E2BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x800E2BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2BF4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E2BF8: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E2BFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2C00: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E2C04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E2C08: jal         0x8001ABF4
    // 0x800E2C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800E2C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800E2C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2C14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2C18: lui         $a1, 0xC0A0
    ctx->r5 = S32(0XC0A0 << 16);
    // 0x800E2C1C: jal         0x80029EF8
    // 0x800E2C20: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x800E2C20: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
    // 0x800E2C24: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800E2C28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E2C2C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2C30: nop

    // 0x800E2C34: swc1        $f10, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f10.u32l;
    // 0x800E2C38: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2C3C: nop

    // 0x800E2C40: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
    // 0x800E2C44: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2C48: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800E2C4C: sh          $t4, 0xB2($t2)
    MEM_H(0XB2, ctx->r10) = ctx->r12;
    // 0x800E2C50: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2C54: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x800E2C58: b           L_800E2C6C
    // 0x800E2C5C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
        goto L_800E2C6C;
    // 0x800E2C5C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_800E2C60:
    // 0x800E2C60: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2C64: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800E2C68: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
L_800E2C6C:
    // 0x800E2C6C: b           L_800E2CC0
    // 0x800E2C70: nop

        goto L_800E2CC0;
    // 0x800E2C70: nop

L_800E2C74:
    // 0x800E2C74: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2C78: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800E2C7C: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800E2C80: nop

    // 0x800E2C84: bne         $t0, $at, L_800E2C9C
    if (ctx->r8 != ctx->r1) {
        // 0x800E2C88: nop
    
            goto L_800E2C9C;
    }
    // 0x800E2C88: nop

    // 0x800E2C8C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2C90: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800E2C94: b           L_800E2CC0
    // 0x800E2C98: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
        goto L_800E2CC0;
    // 0x800E2C98: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
L_800E2C9C:
    // 0x800E2C9C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2CA0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800E2CA4: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800E2CA8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2CAC: nop

    // 0x800E2CB0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800E2CB4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E2CB8: nop

    // 0x800E2CBC: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800E2CC0:
    // 0x800E2CC0: b           L_800E2CC8
    // 0x800E2CC4: nop

        goto L_800E2CC8;
    // 0x800E2CC4: nop

L_800E2CC8:
    // 0x800E2CC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E2CCC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E2CD0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E2CD4: jr          $ra
    // 0x800E2CD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E2CD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800AE2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AE2B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AE2BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AE2C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AE2C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AE2C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AE2CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AE2D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AE2D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AE2D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AE2DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AE2E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AE2E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AE2E8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800AE2EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE2F0: nop

    // 0x800AE2F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AE2F8: nop

    // 0x800AE2FC: bne         $t1, $zero, L_800AE33C
    if (ctx->r9 != 0) {
        // 0x800AE300: nop
    
            goto L_800AE33C;
    }
    // 0x800AE300: nop

    // 0x800AE304: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE308: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AE30C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AE310: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AE314: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE318: nop

    // 0x800AE31C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AE320: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AE324: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE328: nop

    // 0x800AE32C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AE330: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE334: nop

    // 0x800AE338: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800AE33C:
    // 0x800AE33C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE340: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE344: jal         0x80029C40
    // 0x800AE348: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800AE348: nop

    after_0:
    // 0x800AE34C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE350: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE354: jal         0x80029D04
    // 0x800AE358: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800AE358: nop

    after_1:
    // 0x800AE35C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE364: jal         0x8002A1FC
    // 0x800AE368: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800AE368: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_2:
    // 0x800AE36C: beq         $v0, $zero, L_800AE490
    if (ctx->r2 == 0) {
        // 0x800AE370: nop
    
            goto L_800AE490;
    }
    // 0x800AE370: nop

    // 0x800AE374: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE378: nop

    // 0x800AE37C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800AE380: nop

    // 0x800AE384: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800AE388: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x800AE38C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE390: nop

    // 0x800AE394: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800AE398: nop

    // 0x800AE39C: slti        $at, $t1, 0x14
    ctx->r1 = SIGNED(ctx->r9) < 0X14 ? 1 : 0;
    // 0x800AE3A0: bne         $at, $zero, L_800AE3C0
    if (ctx->r1 != 0) {
        // 0x800AE3A4: nop
    
            goto L_800AE3C0;
    }
    // 0x800AE3A4: nop

    // 0x800AE3A8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE3AC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800AE3B0: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800AE3B4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE3B8: nop

    // 0x800AE3BC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800AE3C0:
    // 0x800AE3C0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE3C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AE3C8: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x800AE3CC: nop

    // 0x800AE3D0: bne         $t6, $at, L_800AE490
    if (ctx->r14 != ctx->r1) {
        // 0x800AE3D4: nop
    
            goto L_800AE490;
    }
    // 0x800AE3D4: nop

    // 0x800AE3D8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE3DC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800AE3E0: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x800AE3E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE3E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE3EC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AE3F0: addiu       $a3, $a3, 0x7858
    ctx->r7 = ADD32(ctx->r7, 0X7858);
    // 0x800AE3F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AE3F8: jal         0x8001ABF4
    // 0x800AE3FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800AE3FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800AE400: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE404: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AE408: lh          $t0, 0xE8($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XE8);
    // 0x800AE40C: nop

    // 0x800AE410: beq         $t0, $at, L_800AE430
    if (ctx->r8 == ctx->r1) {
        // 0x800AE414: sh          $t0, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r8;
            goto L_800AE430;
    }
    // 0x800AE414: sh          $t0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r8;
    // 0x800AE418: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x800AE41C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AE420: addiu       $a3, $a3, 0x7858
    ctx->r7 = ADD32(ctx->r7, 0X7858);
    // 0x800AE424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AE428: jal         0x8001ABF4
    // 0x800AE42C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x800AE42C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_800AE430:
    // 0x800AE430: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE434: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AE438: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x800AE43C: nop

    // 0x800AE440: beq         $t2, $at, L_800AE460
    if (ctx->r10 == ctx->r1) {
        // 0x800AE444: sh          $t2, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r10;
            goto L_800AE460;
    }
    // 0x800AE444: sh          $t2, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r10;
    // 0x800AE448: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x800AE44C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AE450: addiu       $a3, $a3, 0x7858
    ctx->r7 = ADD32(ctx->r7, 0X7858);
    // 0x800AE454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AE458: jal         0x8001ABF4
    // 0x800AE45C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800AE45C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_800AE460:
    // 0x800AE460: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE464: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AE468: lh          $t4, 0xEC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEC);
    // 0x800AE46C: nop

    // 0x800AE470: beq         $t4, $at, L_800AE490
    if (ctx->r12 == ctx->r1) {
        // 0x800AE474: sh          $t4, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r12;
            goto L_800AE490;
    }
    // 0x800AE474: sh          $t4, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r12;
    // 0x800AE478: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x800AE47C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AE480: addiu       $a3, $a3, 0x7858
    ctx->r7 = ADD32(ctx->r7, 0X7858);
    // 0x800AE484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AE488: jal         0x8001ABF4
    // 0x800AE48C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800AE48C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_800AE490:
    // 0x800AE490: b           L_800AE498
    // 0x800AE494: nop

        goto L_800AE498;
    // 0x800AE494: nop

L_800AE498:
    // 0x800AE498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AE49C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AE4A0: jr          $ra
    // 0x800AE4A4: nop

    return;
    // 0x800AE4A4: nop

;}
RECOMP_FUNC void func_800D4C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4C8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D4C90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D4C94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D4C98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D4C9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D4CA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D4CA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4CA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D4CAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4CB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D4CB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D4CB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D4CBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D4CC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D4CC4: nop

    // 0x800D4CC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D4CCC: nop

    // 0x800D4CD0: bne         $t1, $zero, L_800D4D14
    if (ctx->r9 != 0) {
        // 0x800D4CD4: nop
    
            goto L_800D4D14;
    }
    // 0x800D4CD4: nop

    // 0x800D4CD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D4CDC: nop

    // 0x800D4CE0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D4CE4: nop

    // 0x800D4CE8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D4CEC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D4CF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D4CF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D4CF8: nop

    // 0x800D4CFC: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800D4D00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4D04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4D08: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x800D4D0C: jal         0x80029EF8
    // 0x800D4D10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800D4D10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
L_800D4D14:
    // 0x800D4D14: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D4D18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D4D1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4D24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D4D28: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D4D2C: lui         $a3, 0xC2F0
    ctx->r7 = S32(0XC2F0 << 16);
    // 0x800D4D30: jal         0x80029F58
    // 0x800D4D34: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_1;
    // 0x800D4D34: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x800D4D38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D4D3C: bne         $v0, $at, L_800D4D5C
    if (ctx->r2 != ctx->r1) {
        // 0x800D4D40: nop
    
            goto L_800D4D5C;
    }
    // 0x800D4D40: nop

    // 0x800D4D44: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D4D48: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800D4D4C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800D4D50: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D4D54: nop

    // 0x800D4D58: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800D4D5C:
    // 0x800D4D5C: b           L_800D4D64
    // 0x800D4D60: nop

        goto L_800D4D64;
    // 0x800D4D60: nop

L_800D4D64:
    // 0x800D4D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4D68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D4D6C: jr          $ra
    // 0x800D4D70: nop

    return;
    // 0x800D4D70: nop

;}
RECOMP_FUNC void func_800A4AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4AB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A4ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4AC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A4AC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A4AC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A4ACC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A4AD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A4AD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A4AD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A4ADC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A4AE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A4AE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A4AE8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800A4AEC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4AF0: nop

    // 0x800A4AF4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A4AF8: nop

    // 0x800A4AFC: bne         $t1, $zero, L_800A4B30
    if (ctx->r9 != 0) {
        // 0x800A4B00: nop
    
            goto L_800A4B30;
    }
    // 0x800A4B00: nop

    // 0x800A4B04: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4B08: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A4B0C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A4B10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A4B14: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4B18: nop

    // 0x800A4B1C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A4B20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A4B24: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4B28: nop

    // 0x800A4B2C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_800A4B30:
    // 0x800A4B30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4B34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4B38: jal         0x8002A8B4
    // 0x800A4B3C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x800A4B3C: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_0:
    // 0x800A4B40: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4B44: nop

    // 0x800A4B48: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800A4B4C: nop

    // 0x800A4B50: swc1        $f8, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f8.u32l;
    // 0x800A4B54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4B58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4B5C: jal         0x80029C40
    // 0x800A4B60: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800A4B60: nop

    after_1:
    // 0x800A4B64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4B68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4B6C: jal         0x80029D04
    // 0x800A4B70: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800A4B70: nop

    after_2:
    // 0x800A4B74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4B78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4B7C: jal         0x8002A560
    // 0x800A4B80: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A560(rdram, ctx);
        goto after_3;
    // 0x800A4B80: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_3:
    // 0x800A4B84: bne         $v0, $zero, L_800A4BF4
    if (ctx->r2 != 0) {
        // 0x800A4B88: nop
    
            goto L_800A4BF4;
    }
    // 0x800A4B88: nop

    // 0x800A4B8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4B90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4B94: jal         0x8002A1FC
    // 0x800A4B98: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x800A4B98: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    after_4:
    // 0x800A4B9C: beq         $v0, $zero, L_800A4BBC
    if (ctx->r2 == 0) {
        // 0x800A4BA0: nop
    
            goto L_800A4BBC;
    }
    // 0x800A4BA0: nop

    // 0x800A4BA4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4BA8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800A4BAC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800A4BB0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4BB4: nop

    // 0x800A4BB8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800A4BBC:
    // 0x800A4BBC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4BC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A4BC4: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800A4BC8: nop

    // 0x800A4BCC: bne         $t1, $at, L_800A4BEC
    if (ctx->r9 != ctx->r1) {
        // 0x800A4BD0: nop
    
            goto L_800A4BEC;
    }
    // 0x800A4BD0: nop

    // 0x800A4BD4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4BD8: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800A4BDC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800A4BE0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4BE4: nop

    // 0x800A4BE8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800A4BEC:
    // 0x800A4BEC: b           L_800A4C3C
    // 0x800A4BF0: nop

        goto L_800A4C3C;
    // 0x800A4BF0: nop

L_800A4BF4:
    // 0x800A4BF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4BF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4BFC: jal         0x8002A1FC
    // 0x800A4C00: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800A4C00: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_5:
    // 0x800A4C04: bne         $v0, $zero, L_800A4C3C
    if (ctx->r2 != 0) {
        // 0x800A4C08: nop
    
            goto L_800A4C3C;
    }
    // 0x800A4C08: nop

    // 0x800A4C0C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4C10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A4C14: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800A4C18: nop

    // 0x800A4C1C: beq         $t6, $at, L_800A4C3C
    if (ctx->r14 == ctx->r1) {
        // 0x800A4C20: nop
    
            goto L_800A4C3C;
    }
    // 0x800A4C20: nop

    // 0x800A4C24: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4C28: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800A4C2C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800A4C30: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4C34: nop

    // 0x800A4C38: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800A4C3C:
    // 0x800A4C3C: b           L_800A4C44
    // 0x800A4C40: nop

        goto L_800A4C44;
    // 0x800A4C40: nop

L_800A4C44:
    // 0x800A4C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4C48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A4C4C: jr          $ra
    // 0x800A4C50: nop

    return;
    // 0x800A4C50: nop

;}
RECOMP_FUNC void stub_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A841C: jr          $ra
    // 0x800A8420: nop

    return;
    // 0x800A8420: nop

    // 0x800A8424: jr          $ra
    // 0x800A8428: nop

    return;
    // 0x800A8428: nop

;}
RECOMP_FUNC void func_800CB36C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB36C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800CB370: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CB374: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CB378: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CB37C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CB380: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB384: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CB388: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB38C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CB390: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CB394: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CB398: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800CB39C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CB3A0: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800CB3A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CB3A8: bne         $t0, $at, L_800CB3C8
    if (ctx->r8 != ctx->r1) {
        // 0x800CB3AC: nop
    
            goto L_800CB3C8;
    }
    // 0x800CB3AC: nop

    // 0x800CB3B0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800CB3B4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800CB3B8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800CB3BC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800CB3C0: nop

    // 0x800CB3C4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800CB3C8:
    // 0x800CB3C8: b           L_800CB3D0
    // 0x800CB3CC: nop

        goto L_800CB3D0;
    // 0x800CB3CC: nop

L_800CB3D0:
    // 0x800CB3D0: jr          $ra
    // 0x800CB3D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800CB3D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F0558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F0558: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F055C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F0560: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F0564: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F0568: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F056C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F0570: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F0574: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F0578: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F057C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F0580: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F0584: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F0588: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F058C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0590: nop

    // 0x800F0594: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F0598: nop

    // 0x800F059C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800F05A0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F05A4: nop

    // 0x800F05A8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F05AC: nop

    // 0x800F05B0: bne         $t3, $zero, L_800F0690
    if (ctx->r11 != 0) {
        // 0x800F05B4: nop
    
            goto L_800F0690;
    }
    // 0x800F05B4: nop

    // 0x800F05B8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F05BC: nop

    // 0x800F05C0: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F05C4: nop

    // 0x800F05C8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800F05CC: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800F05D0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F05D4: nop

    // 0x800F05D8: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800F05DC: nop

    // 0x800F05E0: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F05E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F05E8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800F05EC: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800F05F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F05F4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800F05F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F05FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800F0600: jal         0x8001C0EC
    // 0x800F0604: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F0604: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800F0608: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800F060C: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800F0610: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800F0614: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800F0618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F061C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800F0620: jal         0x8001C0EC
    // 0x800F0624: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F0624: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800F0628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F062C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F0630: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800F0634: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0638: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800F063C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F0640: jal         0x8001ABF4
    // 0x800F0644: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800F0644: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800F0648: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F064C: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800F0650: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800F0654: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800F0658: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F065C: jal         0x8001ABF4
    // 0x800F0660: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800F0660: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800F0664: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0668: nop

    // 0x800F066C: lh          $t2, 0xB0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB0);
    // 0x800F0670: nop

    // 0x800F0674: bne         $t2, $zero, L_800F0690
    if (ctx->r10 != 0) {
        // 0x800F0678: nop
    
            goto L_800F0690;
    }
    // 0x800F0678: nop

    // 0x800F067C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0684: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F0688: jal         0x80029EF8
    // 0x800F068C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x800F068C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_4:
L_800F0690:
    // 0x800F0690: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800F0694: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F0698: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F069C: nop

    // 0x800F06A0: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x800F06A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F06A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F06AC: jal         0x80028FA0
    // 0x800F06B0: nop

    func_80028FA0(rdram, ctx);
        goto after_5;
    // 0x800F06B0: nop

    after_5:
    // 0x800F06B4: beq         $v0, $zero, L_800F06CC
    if (ctx->r2 == 0) {
        // 0x800F06B8: nop
    
            goto L_800F06CC;
    }
    // 0x800F06B8: nop

    // 0x800F06BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F06C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F06C4: jal         0x80029B60
    // 0x800F06C8: nop

    func_80029B60(rdram, ctx);
        goto after_6;
    // 0x800F06C8: nop

    after_6:
L_800F06CC:
    // 0x800F06CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F06D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F06D4: jal         0x8002A8B4
    // 0x800F06D8: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_7;
    // 0x800F06D8: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_7:
    // 0x800F06DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F06E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F06E4: jal         0x80029C40
    // 0x800F06E8: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x800F06E8: nop

    after_8:
    // 0x800F06EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F06F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F06F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F06F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F06FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F0700: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800F0704: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F0708: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800F070C: jal         0x80029018
    // 0x800F0710: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x800F0710: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x800F0714: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F071C: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x800F0720: nop

    // 0x800F0724: bne         $t6, $at, L_800F0780
    if (ctx->r14 != ctx->r1) {
        // 0x800F0728: nop
    
            goto L_800F0780;
    }
    // 0x800F0728: nop

    // 0x800F072C: lh          $t4, 0xB0($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XB0);
    // 0x800F0730: nop

    // 0x800F0734: bne         $t4, $zero, L_800F0780
    if (ctx->r12 != 0) {
        // 0x800F0738: nop
    
            goto L_800F0780;
    }
    // 0x800F0738: nop

    // 0x800F073C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0740: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0744: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F0748: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800F074C: jal         0x8002A0D0
    // 0x800F0750: lui         $a3, 0xC3B4
    ctx->r7 = S32(0XC3B4 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_10;
    // 0x800F0750: lui         $a3, 0xC3B4
    ctx->r7 = S32(0XC3B4 << 16);
    after_10:
    // 0x800F0754: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F0758: bne         $v0, $at, L_800F0778
    if (ctx->r2 != ctx->r1) {
        // 0x800F075C: nop
    
            goto L_800F0778;
    }
    // 0x800F075C: nop

    // 0x800F0760: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0764: nop

    // 0x800F0768: lbu         $t7, 0x132($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X132);
    // 0x800F076C: nop

    // 0x800F0770: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800F0774: sb          $t9, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r25;
L_800F0778:
    // 0x800F0778: b           L_800F088C
    // 0x800F077C: nop

        goto L_800F088C;
    // 0x800F077C: nop

L_800F0780:
    // 0x800F0780: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F0784: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F0788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F078C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0790: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800F0794: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800F0798: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F079C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F07A0: jal         0x800295C0
    // 0x800F07A4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_11;
    // 0x800F07A4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x800F07A8: beq         $v0, $zero, L_800F07C0
    if (ctx->r2 == 0) {
        // 0x800F07AC: nop
    
            goto L_800F07C0;
    }
    // 0x800F07AC: nop

    // 0x800F07B0: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F07B4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F07B8: b           L_800F07D0
    // 0x800F07BC: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
        goto L_800F07D0;
    // 0x800F07BC: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
L_800F07C0:
    // 0x800F07C0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800F07C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F07C8: nop

    // 0x800F07CC: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
L_800F07D0:
    // 0x800F07D0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F07D4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800F07D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F07DC: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800F07E0: nop

    // 0x800F07E4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800F07E8: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x800F07EC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800F07F0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F07F4: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800F07F8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F07FC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F0800: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F0804: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800F0808: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F080C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0810: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F0814: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800F0818: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F081C: nop

    // 0x800F0820: lh          $t7, 0xB6($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XB6);
    // 0x800F0824: nop

    // 0x800F0828: bne         $t7, $zero, L_800F0874
    if (ctx->r15 != 0) {
        // 0x800F082C: nop
    
            goto L_800F0874;
    }
    // 0x800F082C: nop

    // 0x800F0830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0834: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0838: jal         0x8002A2EC
    // 0x800F083C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_12;
    // 0x800F083C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_12:
    // 0x800F0840: beq         $v0, $zero, L_800F086C
    if (ctx->r2 == 0) {
        // 0x800F0844: nop
    
            goto L_800F086C;
    }
    // 0x800F0844: nop

    // 0x800F0848: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F084C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800F0850: sh          $t9, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r25;
    // 0x800F0854: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0858: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800F085C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800F0860: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0864: nop

    // 0x800F0868: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800F086C:
    // 0x800F086C: b           L_800F088C
    // 0x800F0870: nop

        goto L_800F088C;
    // 0x800F0870: nop

L_800F0874:
    // 0x800F0874: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0878: nop

    // 0x800F087C: lh          $t6, 0xB6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XB6);
    // 0x800F0880: nop

    // 0x800F0884: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x800F0888: sh          $t5, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r13;
L_800F088C:
    // 0x800F088C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800F0890: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0894: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F0898: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F089C: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800F08A0: lwc1        $f4, 0x24($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X24);
    // 0x800F08A4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F08A8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F08AC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800F08B0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F08B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F08B8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F08BC: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x800F08C0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800F08C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F08C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F08CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F08D0: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800F08D4: lwc1        $f10, 0x28($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800F08D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F08DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F08E0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800F08E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F08E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F08EC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F08F0: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800F08F4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800F08F8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F08FC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800F0900: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F0904: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800F0908: lwc1        $f4, 0x2C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800F090C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F0910: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F0914: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800F0918: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F091C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F0920: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F0924: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x800F0928: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F092C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0930: jal         0x8002A2EC
    // 0x800F0934: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_13;
    // 0x800F0934: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_13:
    // 0x800F0938: beq         $v0, $zero, L_800F0948
    if (ctx->r2 == 0) {
        // 0x800F093C: nop
    
            goto L_800F0948;
    }
    // 0x800F093C: nop

    // 0x800F0940: b           L_800F0960
    // 0x800F0944: nop

        goto L_800F0960;
    // 0x800F0944: nop

L_800F0948:
    // 0x800F0948: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F094C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800F0950: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800F0954: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F0958: nop

    // 0x800F095C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800F0960:
    // 0x800F0960: b           L_800F0968
    // 0x800F0964: nop

        goto L_800F0968;
    // 0x800F0964: nop

L_800F0968:
    // 0x800F0968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F096C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F0970: jr          $ra
    // 0x800F0974: nop

    return;
    // 0x800F0974: nop

;}
RECOMP_FUNC void func_800C0290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0290: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C0294: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C0298: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C029C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C02A0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C02A4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C02A8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C02AC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C02B0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C02B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C02B8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C02BC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C02C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C02C4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C02C8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C02CC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C02D0: addiu       $a1, $a1, 0x3DFC
    ctx->r5 = ADD32(ctx->r5, 0X3DFC);
    // 0x800C02D4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C02D8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C02DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C02E0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C02E4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C02E8: jal         0x80027464
    // 0x800C02EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C02EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C02F0: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800C02F4: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800C02F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C02FC: beq         $t1, $at, L_800C049C
    if (ctx->r9 == ctx->r1) {
        // 0x800C0300: nop
    
            goto L_800C049C;
    }
    // 0x800C0300: nop

    // 0x800C0304: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800C0308: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C030C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C0310: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C0314: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C0318: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C031C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C0320: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800C0324: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800C0328: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800C032C: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x800C0330: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0334: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C0338: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C033C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C0340: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C0344: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C0348: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C034C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800C0350: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x800C0354: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x800C0358: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C035C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800C0360: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C0364: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C0368: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C036C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C0370: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C0374: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x800C0378: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800C037C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0380: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800C0384: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800C0388: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C038C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800C0390: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C0394: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C0398: addiu       $t0, $zero, 0x258
    ctx->r8 = ADD32(0, 0X258);
    // 0x800C039C: sh          $t0, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r8;
    // 0x800C03A0: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800C03A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C03A8: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800C03AC: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800C03B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C03B4: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800C03B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C03BC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C03C0: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x800C03C4: sh          $t2, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r10;
    // 0x800C03C8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800C03CC: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x800C03D0: nop

    // 0x800C03D4: lh          $t8, 0xA($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XA);
    // 0x800C03D8: nop

    // 0x800C03DC: blez        $t8, L_800C0420
    if (SIGNED(ctx->r24) <= 0) {
        // 0x800C03E0: nop
    
            goto L_800C0420;
    }
    // 0x800C03E0: nop

    // 0x800C03E4: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800C03E8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800C03EC: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x800C03F0: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800C03F4: lh          $t6, 0xA($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XA);
    // 0x800C03F8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800C03FC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C0400: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800C0404: sll         $t1, $t6, 4
    ctx->r9 = S32(ctx->r14 << 4);
    // 0x800C0408: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C040C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0410: subu        $t1, $t1, $t6
    ctx->r9 = SUB32(ctx->r9, ctx->r14);
    // 0x800C0414: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C0418: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C041C: sh          $t1, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r9;
L_800C0420:
    // 0x800C0420: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800C0424: lw          $t4, 0x5100($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5100);
    // 0x800C0428: nop

    // 0x800C042C: lh          $t2, 0xC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC);
    // 0x800C0430: nop

    // 0x800C0434: blez        $t2, L_800C046C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x800C0438: nop
    
            goto L_800C046C;
    }
    // 0x800C0438: nop

    // 0x800C043C: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x800C0440: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800C0444: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800C0448: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C044C: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800C0450: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C0454: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C0458: lh          $t5, 0xC($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XC);
    // 0x800C045C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C0460: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0464: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C0468: sh          $t5, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r13;
L_800C046C:
    // 0x800C046C: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x800C0470: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0474: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800C0478: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800C047C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C0480: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800C0484: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C0488: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800C048C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800C0490: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800C0494: jal         0x8001BB34
    // 0x800C0498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800C0498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800C049C:
    // 0x800C049C: b           L_800C04A4
    // 0x800C04A0: nop

        goto L_800C04A4;
    // 0x800C04A0: nop

L_800C04A4:
    // 0x800C04A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C04A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C04AC: jr          $ra
    // 0x800C04B0: nop

    return;
    // 0x800C04B0: nop

;}
RECOMP_FUNC void func_800E6E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6E80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E6E84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E6E88: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E6E8C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E6E90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E6E94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E6E98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E6E9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E6EA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6EA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E6EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6EAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E6EB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E6EB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E6EB8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E6EBC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6EC0: nop

    // 0x800E6EC4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E6EC8: nop

    // 0x800E6ECC: bne         $t1, $zero, L_800E6F44
    if (ctx->r9 != 0) {
        // 0x800E6ED0: nop
    
            goto L_800E6F44;
    }
    // 0x800E6ED0: nop

    // 0x800E6ED4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6ED8: nop

    // 0x800E6EDC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E6EE0: nop

    // 0x800E6EE4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E6EE8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E6EEC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6EF0: nop

    // 0x800E6EF4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E6EF8: nop

    // 0x800E6EFC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E6F00: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x800E6F04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E6F08: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6F0C: nop

    // 0x800E6F10: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800E6F14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6F18: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800E6F1C: addiu       $t8, $t8, -0x6878
    ctx->r24 = ADD32(ctx->r24, -0X6878);
    // 0x800E6F20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6F24: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800E6F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E6F2C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800E6F30: jal         0x8001C0EC
    // 0x800E6F34: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E6F34: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
    // 0x800E6F38: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6F3C: nop

    // 0x800E6F40: sh          $zero, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = 0;
L_800E6F44:
    // 0x800E6F44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6F48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6F4C: jal         0x8002A1FC
    // 0x800E6F50: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x800E6F50: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_1:
    // 0x800E6F54: beq         $v0, $zero, L_800E6FBC
    if (ctx->r2 == 0) {
        // 0x800E6F58: nop
    
            goto L_800E6FBC;
    }
    // 0x800E6F58: nop

    // 0x800E6F5C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6F60: nop

    // 0x800E6F64: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x800E6F68: nop

    // 0x800E6F6C: bne         $t1, $zero, L_800E6FA4
    if (ctx->r9 != 0) {
        // 0x800E6F70: nop
    
            goto L_800E6FA4;
    }
    // 0x800E6F70: nop

    // 0x800E6F74: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6F78: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x800E6F7C: sh          $t3, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r11;
    // 0x800E6F80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6F84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6F88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E6F8C: addiu       $a2, $zero, 0x53
    ctx->r6 = ADD32(0, 0X53);
    // 0x800E6F90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800E6F94: jal         0x800175F0
    // 0x800E6F98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800E6F98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x800E6F9C: b           L_800E6FBC
    // 0x800E6FA0: nop

        goto L_800E6FBC;
    // 0x800E6FA0: nop

L_800E6FA4:
    // 0x800E6FA4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6FA8: nop

    // 0x800E6FAC: lh          $t6, 0xB6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XB6);
    // 0x800E6FB0: nop

    // 0x800E6FB4: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x800E6FB8: sh          $t5, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r13;
L_800E6FBC:
    // 0x800E6FBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6FC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6FC4: jal         0x8002A8B4
    // 0x800E6FC8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800E6FC8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x800E6FCC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6FD0: nop

    // 0x800E6FD4: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800E6FD8: nop

    // 0x800E6FDC: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x800E6FE0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6FE4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800E6FE8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800E6FEC: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800E6FF0: jal         0x80015538
    // 0x800E6FF4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800E6FF4: nop

    after_4:
    // 0x800E6FF8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E6FFC: nop

    // 0x800E7000: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x800E7004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7008: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E700C: jal         0x80029C40
    // 0x800E7010: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800E7010: nop

    after_5:
    // 0x800E7014: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E7018: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E701C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7020: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7028: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800E702C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E7030: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800E7034: jal         0x80029018
    // 0x800E7038: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800E7038: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x800E703C: beq         $v0, $zero, L_800E7054
    if (ctx->r2 == 0) {
        // 0x800E7040: nop
    
            goto L_800E7054;
    }
    // 0x800E7040: nop

    // 0x800E7044: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7048: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E704C: jal         0x80029824
    // 0x800E7050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x800E7050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_800E7054:
    // 0x800E7054: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7058: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E705C: jal         0x8002A1FC
    // 0x800E7060: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_8;
    // 0x800E7060: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_8:
    // 0x800E7064: beq         $v0, $zero, L_800E70B4
    if (ctx->r2 == 0) {
        // 0x800E7068: nop
    
            goto L_800E70B4;
    }
    // 0x800E7068: nop

    // 0x800E706C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E7070: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7074: nop

    // 0x800E7078: swc1        $f16, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f16.u32l;
    // 0x800E707C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7080: nop

    // 0x800E7084: lwc1        $f20, 0x44($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X44);
    // 0x800E7088: nop

    // 0x800E708C: swc1        $f20, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f20.u32l;
    // 0x800E7090: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7094: nop

    // 0x800E7098: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x800E709C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E70A0: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x800E70A4: sh          $t4, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r12;
    // 0x800E70A8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E70AC: nop

    // 0x800E70B0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800E70B4:
    // 0x800E70B4: b           L_800E70BC
    // 0x800E70B8: nop

        goto L_800E70BC;
    // 0x800E70B8: nop

L_800E70BC:
    // 0x800E70BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E70C0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E70C4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E70C8: jr          $ra
    // 0x800E70CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E70CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A605C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A605C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A6060: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A6064: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A6068: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A606C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A6070: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A6074: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A6078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A607C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A6080: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A6084: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A6088: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A608C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A6090: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800A6094: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A6098: nop

    // 0x800A609C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A60A0: nop

    // 0x800A60A4: bne         $t1, $zero, L_800A60E4
    if (ctx->r9 != 0) {
        // 0x800A60A8: nop
    
            goto L_800A60E4;
    }
    // 0x800A60A8: nop

    // 0x800A60AC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A60B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A60B4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A60B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A60BC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A60C0: nop

    // 0x800A60C4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A60C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A60CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A60D0: nop

    // 0x800A60D4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A60D8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A60DC: nop

    // 0x800A60E0: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800A60E4:
    // 0x800A60E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A60E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A60EC: jal         0x80028FA0
    // 0x800A60F0: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800A60F0: nop

    after_0:
    // 0x800A60F4: beq         $v0, $zero, L_800A610C
    if (ctx->r2 == 0) {
        // 0x800A60F8: nop
    
            goto L_800A610C;
    }
    // 0x800A60F8: nop

    // 0x800A60FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6104: jal         0x80029B60
    // 0x800A6108: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x800A6108: nop

    after_1:
L_800A610C:
    // 0x800A610C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6110: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6114: jal         0x80029C40
    // 0x800A6118: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A6118: nop

    after_2:
    // 0x800A611C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6124: jal         0x80029D04
    // 0x800A6128: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800A6128: nop

    after_3:
    // 0x800A612C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A6130: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A6134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A613C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800A6140: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800A6144: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A6148: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800A614C: jal         0x80029018
    // 0x800A6150: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800A6150: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800A6154: beq         $v0, $zero, L_800A6178
    if (ctx->r2 == 0) {
        // 0x800A6158: nop
    
            goto L_800A6178;
    }
    // 0x800A6158: nop

    // 0x800A615C: jal         0x800297DC
    // 0x800A6160: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x800A6160: nop

    after_5:
    // 0x800A6164: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6168: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A616C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A6170: jal         0x80029824
    // 0x800A6174: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x800A6174: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_800A6178:
    // 0x800A6178: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A617C: nop

    // 0x800A6180: lwc1        $f16, 0x3C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800A6184: nop

    // 0x800A6188: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x800A618C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A6190: nop

    // 0x800A6194: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A6198: nop

    // 0x800A619C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800A61A0: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800A61A4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800A61A8: nop

    // 0x800A61AC: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A61B0: nop

    // 0x800A61B4: slti        $at, $t2, 0x3C
    ctx->r1 = SIGNED(ctx->r10) < 0X3C ? 1 : 0;
    // 0x800A61B8: bne         $at, $zero, L_800A61D8
    if (ctx->r1 != 0) {
        // 0x800A61BC: nop
    
            goto L_800A61D8;
    }
    // 0x800A61BC: nop

    // 0x800A61C0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A61C4: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x800A61C8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800A61CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A61D0: nop

    // 0x800A61D4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800A61D8:
    // 0x800A61D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A61DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A61E0: jal         0x8002A1FC
    // 0x800A61E4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x800A61E4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_7:
    // 0x800A61E8: bne         $v0, $zero, L_800A6208
    if (ctx->r2 != 0) {
        // 0x800A61EC: nop
    
            goto L_800A6208;
    }
    // 0x800A61EC: nop

    // 0x800A61F0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A61F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A61F8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800A61FC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A6200: nop

    // 0x800A6204: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800A6208:
    // 0x800A6208: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A620C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6210: jal         0x8002A1FC
    // 0x800A6214: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_8;
    // 0x800A6214: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_8:
    // 0x800A6218: beq         $v0, $zero, L_800A6290
    if (ctx->r2 == 0) {
        // 0x800A621C: nop
    
            goto L_800A6290;
    }
    // 0x800A621C: nop

    // 0x800A6220: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6224: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6228: jal         0x8002A8B4
    // 0x800A622C: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_9;
    // 0x800A622C: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_9:
    // 0x800A6230: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6234: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6238: jal         0x8002A560
    // 0x800A623C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    func_8002A560(rdram, ctx);
        goto after_10;
    // 0x800A623C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_10:
    // 0x800A6240: bne         $v0, $zero, L_800A626C
    if (ctx->r2 != 0) {
        // 0x800A6244: nop
    
            goto L_800A626C;
    }
    // 0x800A6244: nop

    // 0x800A6248: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A624C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800A6250: sh          $t0, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r8;
    // 0x800A6254: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A6258: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800A625C: sh          $t1, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r9;
    // 0x800A6260: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800A6264: nop

    // 0x800A6268: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800A626C:
    // 0x800A626C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A6270: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800A6274: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800A6278: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A627C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A6280: sh          $t6, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r14;
    // 0x800A6284: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A6288: nop

    // 0x800A628C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800A6290:
    // 0x800A6290: b           L_800A6298
    // 0x800A6294: nop

        goto L_800A6298;
    // 0x800A6294: nop

L_800A6298:
    // 0x800A6298: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A629C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A62A0: jr          $ra
    // 0x800A62A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800A62A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800CCCE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CCCE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CCCE8: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800CCCEC: nop

    // 0x800CCCF0: bne         $t6, $zero, L_800CCD4C
    if (ctx->r14 != 0) {
        // 0x800CCCF4: nop
    
            goto L_800CCD4C;
    }
    // 0x800CCCF4: nop

    // 0x800CCCF8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800CCCFC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800CCD00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCD04: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CCD08: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CCD0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CCD10: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CCD14: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CCD18: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CCD1C: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x800CCD20: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800CCD24: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CCD28: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CCD2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCD30: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CCD34: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CCD38: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CCD3C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CCD40: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CCD44: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CCD48: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800CCD4C:
    // 0x800CCD4C: jr          $ra
    // 0x800CCD50: nop

    return;
    // 0x800CCD50: nop

    // 0x800CCD54: jr          $ra
    // 0x800CCD58: nop

    return;
    // 0x800CCD58: nop

;}
RECOMP_FUNC void func_800BDCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDCF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BDCF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BDCFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BDD00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BDD04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BDD08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BDD0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BDD10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BDD14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BDD18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BDD1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BDD20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BDD24: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BDD28: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDD2C: nop

    // 0x800BDD30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BDD34: nop

    // 0x800BDD38: bne         $t1, $zero, L_800BDD88
    if (ctx->r9 != 0) {
        // 0x800BDD3C: nop
    
            goto L_800BDD88;
    }
    // 0x800BDD3C: nop

    // 0x800BDD40: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDD44: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BDD48: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BDD4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BDD50: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDD54: nop

    // 0x800BDD58: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BDD5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BDD60: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDD64: nop

    // 0x800BDD68: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BDD6C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDD70: nop

    // 0x800BDD74: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800BDD78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDD7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDD80: jal         0x8001BBDC
    // 0x800BDD84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800BDD84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800BDD88:
    // 0x800BDD88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDD8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDD90: jal         0x80029C40
    // 0x800BDD94: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800BDD94: nop

    after_1:
    // 0x800BDD98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDD9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDDA0: jal         0x80029D04
    // 0x800BDDA4: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800BDDA4: nop

    after_2:
    // 0x800BDDA8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDDAC: nop

    // 0x800BDDB0: lh          $t8, 0xAE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAE);
    // 0x800BDDB4: nop

    // 0x800BDDB8: bne         $t8, $zero, L_800BDDDC
    if (ctx->r24 != 0) {
        // 0x800BDDBC: nop
    
            goto L_800BDDDC;
    }
    // 0x800BDDBC: nop

    // 0x800BDDC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDDC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDDC8: jal         0x8002A46C
    // 0x800BDDCC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800BDDCC: nop

    after_3:
    // 0x800BDDD0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDDD4: b           L_800BDE18
    // 0x800BDDD8: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
        goto L_800BDE18;
    // 0x800BDDD8: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
L_800BDDDC:
    // 0x800BDDDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDDE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDDE4: jal         0x80028FA0
    // 0x800BDDE8: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800BDDE8: nop

    after_4:
    // 0x800BDDEC: beq         $v0, $zero, L_800BDE18
    if (ctx->r2 == 0) {
        // 0x800BDDF0: nop
    
            goto L_800BDE18;
    }
    // 0x800BDDF0: nop

    // 0x800BDDF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDDF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDDFC: jal         0x80029B60
    // 0x800BDE00: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800BDE00: nop

    after_5:
    // 0x800BDE04: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDE08: nop

    // 0x800BDE0C: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800BDE10: nop

    // 0x800BDE14: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
L_800BDE18:
    // 0x800BDE18: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDE1C: nop

    // 0x800BDE20: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800BDE24: nop

    // 0x800BDE28: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800BDE2C: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x800BDE30: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDE34: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800BDE38: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800BDE3C: nop

    // 0x800BDE40: bne         $t5, $at, L_800BDE64
    if (ctx->r13 != ctx->r1) {
        // 0x800BDE44: nop
    
            goto L_800BDE64;
    }
    // 0x800BDE44: nop

    // 0x800BDE48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDE4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDE50: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BDE54: addiu       $a3, $a3, 0x7EA8
    ctx->r7 = ADD32(ctx->r7, 0X7EA8);
    // 0x800BDE58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BDE5C: jal         0x8001ABF4
    // 0x800BDE60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800BDE60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_800BDE64:
    // 0x800BDE64: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDE68: nop

    // 0x800BDE6C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800BDE70: nop

    // 0x800BDE74: slti        $at, $t7, 0x28
    ctx->r1 = SIGNED(ctx->r15) < 0X28 ? 1 : 0;
    // 0x800BDE78: bne         $at, $zero, L_800BDEC8
    if (ctx->r1 != 0) {
        // 0x800BDE7C: nop
    
            goto L_800BDEC8;
    }
    // 0x800BDE7C: nop

    // 0x800BDE80: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDE84: nop

    // 0x800BDE88: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x800BDE8C: nop

    // 0x800BDE90: beq         $t9, $zero, L_800BDEB0
    if (ctx->r25 == 0) {
        // 0x800BDE94: nop
    
            goto L_800BDEB0;
    }
    // 0x800BDE94: nop

    // 0x800BDE98: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDE9C: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x800BDEA0: sh          $t0, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r8;
    // 0x800BDEA4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDEA8: b           L_800BDEC8
    // 0x800BDEAC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_800BDEC8;
    // 0x800BDEAC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800BDEB0:
    // 0x800BDEB0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDEB4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800BDEB8: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x800BDEBC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDEC0: nop

    // 0x800BDEC4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800BDEC8:
    // 0x800BDEC8: b           L_800BDED0
    // 0x800BDECC: nop

        goto L_800BDED0;
    // 0x800BDECC: nop

L_800BDED0:
    // 0x800BDED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BDED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BDED8: jr          $ra
    // 0x800BDEDC: nop

    return;
    // 0x800BDEDC: nop

;}
RECOMP_FUNC void func_800FEFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FEFA0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800FEFA4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800FEFA8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800FEFAC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800FEFB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FEFB4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800FEFB8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800FEFBC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FEFC0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FEFC4: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800FEFC8: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800FEFCC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FEFD0: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800FEFD4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800FEFD8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800FEFDC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800FEFE0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800FEFE4: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800FEFE8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800FEFEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FEFF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FEFF4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800FEFF8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FEFFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF000: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800FF004: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800FF008: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF00C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800FF010: addiu       $a1, $a1, 0x4558
    ctx->r5 = ADD32(ctx->r5, 0X4558);
    // 0x800FF014: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800FF018: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF01C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF020: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF024: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800FF028: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x800FF02C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800FF030: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800FF034: lh          $t1, 0xA4($t6)
    ctx->r9 = MEM_H(ctx->r14, 0XA4);
    // 0x800FF038: nop

    // 0x800FF03C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800FF040: lh          $t3, 0x140($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X140);
    // 0x800FF044: nop

    // 0x800FF048: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x800FF04C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800FF050: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800FF054: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800FF058: lbu         $t5, 0x52A4($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X52A4);
    // 0x800FF05C: nop

    // 0x800FF060: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800FF064: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x800FF068: jal         0x80036BE4
    // 0x800FF06C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x800FF06C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x800FF070: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF074: jal         0x8005F9EC
    // 0x800FF078: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_1;
    // 0x800FF078: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800FF07C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800FF080: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FF084: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800FF088: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800FF08C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF090: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF094: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800FF098: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800FF09C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FF0A0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800FF0A4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800FF0A8: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x800FF0AC: mflo        $t1
    ctx->r9 = lo;
    // 0x800FF0B0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x800FF0B4: nop

    // 0x800FF0B8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800FF0BC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800FF0C0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x800FF0C4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800FF0C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF0CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF0D0: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800FF0D4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800FF0D8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FF0DC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800FF0E0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800FF0E4: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x800FF0E8: mfhi        $t5
    ctx->r13 = hi;
    // 0x800FF0EC: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x800FF0F0: nop

    // 0x800FF0F4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800FF0F8: nop

    // 0x800FF0FC: bgez        $t6, L_800FF10C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800FF100: nop
    
            goto L_800FF10C;
    }
    // 0x800FF100: nop

    // 0x800FF104: b           L_800FF114
    // 0x800FF108: negu        $s0, $t6
    ctx->r16 = SUB32(0, ctx->r14);
        goto L_800FF114;
    // 0x800FF108: negu        $s0, $t6
    ctx->r16 = SUB32(0, ctx->r14);
L_800FF10C:
    // 0x800FF10C: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x800FF110: nop

L_800FF114:
    // 0x800FF114: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x800FF118: bne         $at, $zero, L_800FF154
    if (ctx->r1 != 0) {
        // 0x800FF11C: nop
    
            goto L_800FF154;
    }
    // 0x800FF11C: nop

    // 0x800FF120: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800FF124: nop

    // 0x800FF128: bltz        $t7, L_800FF144
    if (SIGNED(ctx->r15) < 0) {
        // 0x800FF12C: nop
    
            goto L_800FF144;
    }
    // 0x800FF12C: nop

    // 0x800FF130: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800FF134: nop

    // 0x800FF138: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800FF13C: b           L_800FF154
    // 0x800FF140: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
        goto L_800FF154;
    // 0x800FF140: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
L_800FF144:
    // 0x800FF144: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x800FF148: nop

    // 0x800FF14C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800FF150: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
L_800FF154:
    // 0x800FF154: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800FF158: nop

    // 0x800FF15C: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x800FF160: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800FF164: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800FF168: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x800FF16C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800FF170: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800FF174: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x800FF178: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800FF17C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF180: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF184: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x800FF188: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800FF18C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800FF190: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x800FF194: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800FF198: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x800FF19C: mflo        $t7
    ctx->r15 = lo;
    // 0x800FF1A0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x800FF1A4: nop

    // 0x800FF1A8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800FF1AC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FF1B0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800FF1B4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800FF1B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF1BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF1C0: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800FF1C4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x800FF1C8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FF1CC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800FF1D0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800FF1D4: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x800FF1D8: mfhi        $t1
    ctx->r9 = hi;
    // 0x800FF1DC: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x800FF1E0: nop

    // 0x800FF1E4: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x800FF1E8: nop

    // 0x800FF1EC: bgez        $t2, L_800FF1FC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800FF1F0: nop
    
            goto L_800FF1FC;
    }
    // 0x800FF1F0: nop

    // 0x800FF1F4: b           L_800FF204
    // 0x800FF1F8: negu        $s0, $t2
    ctx->r16 = SUB32(0, ctx->r10);
        goto L_800FF204;
    // 0x800FF1F8: negu        $s0, $t2
    ctx->r16 = SUB32(0, ctx->r10);
L_800FF1FC:
    // 0x800FF1FC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800FF200: nop

L_800FF204:
    // 0x800FF204: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x800FF208: bne         $at, $zero, L_800FF244
    if (ctx->r1 != 0) {
        // 0x800FF20C: nop
    
            goto L_800FF244;
    }
    // 0x800FF20C: nop

    // 0x800FF210: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x800FF214: nop

    // 0x800FF218: bltz        $t3, L_800FF234
    if (SIGNED(ctx->r11) < 0) {
        // 0x800FF21C: nop
    
            goto L_800FF234;
    }
    // 0x800FF21C: nop

    // 0x800FF220: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800FF224: nop

    // 0x800FF228: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800FF22C: b           L_800FF244
    // 0x800FF230: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
        goto L_800FF244;
    // 0x800FF230: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
L_800FF234:
    // 0x800FF234: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800FF238: nop

    // 0x800FF23C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800FF240: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
L_800FF244:
    // 0x800FF244: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800FF248: nop

    // 0x800FF24C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800FF250: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800FF254: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FF258: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x800FF25C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800FF260: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800FF264: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x800FF268: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800FF26C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FF270: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FF274: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800FF278: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800FF27C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FF280: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800FF284: lhu         $t4, -0x1BE4($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1BE4);
    // 0x800FF288: lbu         $t3, -0x1BEC($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1BEC);
    // 0x800FF28C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800FF290: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800FF294: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF298: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF29C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x800FF2A0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800FF2A4: addiu       $a1, $a1, 0x4574
    ctx->r5 = ADD32(ctx->r5, 0X4574);
    // 0x800FF2A8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF2AC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800FF2B0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800FF2B4: jal         0x80036BE4
    // 0x800FF2B8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x800FF2B8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x800FF2BC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF2C0: jal         0x8005F9EC
    // 0x800FF2C4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_3;
    // 0x800FF2C4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x800FF2C8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800FF2CC: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800FF2D0: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800FF2D4: lwc1        $f14, 0x4($t5)
    ctx->f14.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800FF2D8: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x800FF2DC: addiu       $t6, $sp, 0x3C
    ctx->r14 = ADD32(ctx->r29, 0X3C);
    // 0x800FF2E0: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x800FF2E4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800FF2E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800FF2EC: jal         0x80065AEC
    // 0x800FF2F0: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_80065AEC(rdram, ctx);
        goto after_4;
    // 0x800FF2F0: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x800FF2F4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FF2F8: lw          $t8, 0x7778($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7778);
    // 0x800FF2FC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800FF300: lh          $t9, 0x18($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X18);
    // 0x800FF304: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x800FF308: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800FF30C: mflo        $t1
    ctx->r9 = lo;
    // 0x800FF310: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800FF314: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x800FF318: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800FF31C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF320: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF324: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x800FF328: addiu       $a1, $a1, 0x458C
    ctx->r5 = ADD32(ctx->r5, 0X458C);
    // 0x800FF32C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF330: jal         0x80036BE4
    // 0x800FF334: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x800FF334: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    after_5:
    // 0x800FF338: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF33C: jal         0x8005F9EC
    // 0x800FF340: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    Debug_PrintXY(rdram, ctx);
        goto after_6;
    // 0x800FF340: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_6:
    // 0x800FF344: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800FF348: lw          $t4, -0x1BD8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1BD8);
    // 0x800FF34C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800FF350: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800FF354: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800FF358: lw          $t6, -0x4C04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4C04);
    // 0x800FF35C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF360: lb          $t7, 0x2($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2);
    // 0x800FF364: lb          $a2, 0x0($t6)
    ctx->r6 = MEM_B(ctx->r14, 0X0);
    // 0x800FF368: lb          $a3, 0x1($t6)
    ctx->r7 = MEM_B(ctx->r14, 0X1);
    // 0x800FF36C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800FF370: lb          $t8, 0x3($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X3);
    // 0x800FF374: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF378: addiu       $a1, $a1, 0x45A4
    ctx->r5 = ADD32(ctx->r5, 0X45A4);
    // 0x800FF37C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF380: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800FF384: jal         0x80036BE4
    // 0x800FF388: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x800FF388: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_7:
    // 0x800FF38C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF390: jal         0x8005F9EC
    // 0x800FF394: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_8;
    // 0x800FF394: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_8:
    // 0x800FF398: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800FF39C: lwc1        $f16, 0x51C0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X51C0);
    // 0x800FF3A0: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x800FF3A4: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x800FF3A8: lw          $a3, 0x51BC($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X51BC);
    // 0x800FF3AC: lbu         $a2, 0x51A8($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X51A8);
    // 0x800FF3B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF3B4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF3B8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800FF3BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x800FF3C0: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x800FF3C4: addiu       $a1, $a1, 0x45CC
    ctx->r5 = ADD32(ctx->r5, 0X45CC);
    // 0x800FF3C8: jal         0x80036BE4
    // 0x800FF3CC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x800FF3CC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_9:
    // 0x800FF3D0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF3D4: jal         0x8005F9EC
    // 0x800FF3D8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    Debug_PrintXY(rdram, ctx);
        goto after_10;
    // 0x800FF3D8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_10:
    // 0x800FF3DC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800FF3E0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800FF3E4: lw          $t0, 0x51B8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51B8);
    // 0x800FF3E8: lw          $t9, 0x51B4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51B4);
    // 0x800FF3EC: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x800FF3F0: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x800FF3F4: lw          $a3, 0x51B0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X51B0);
    // 0x800FF3F8: lw          $a2, 0x51AC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X51AC);
    // 0x800FF3FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FF400: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FF404: addiu       $a1, $a1, 0x45E0
    ctx->r5 = ADD32(ctx->r5, 0X45E0);
    // 0x800FF408: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x800FF40C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800FF410: jal         0x80036BE4
    // 0x800FF414: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x800FF414: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_11:
    // 0x800FF418: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FF41C: jal         0x8005F9EC
    // 0x800FF420: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    Debug_PrintXY(rdram, ctx);
        goto after_12;
    // 0x800FF420: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_12:
    // 0x800FF424: b           L_800FF42C
    // 0x800FF428: nop

        goto L_800FF42C;
    // 0x800FF428: nop

L_800FF42C:
    // 0x800FF42C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800FF430: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800FF434: jr          $ra
    // 0x800FF438: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800FF438: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800B0110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B0110: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B0114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B0118: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B011C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B0120: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B0124: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B0128: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B012C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B0130: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0134: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B0138: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B013C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B0140: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B0144: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B0148: nop

    // 0x800B014C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B0150: nop

    // 0x800B0154: bne         $t1, $zero, L_800B0228
    if (ctx->r9 != 0) {
        // 0x800B0158: nop
    
            goto L_800B0228;
    }
    // 0x800B0158: nop

    // 0x800B015C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B0160: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B0164: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B0168: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B016C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B0170: nop

    // 0x800B0174: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B0178: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B017C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B0180: nop

    // 0x800B0184: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B0188: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B018C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800B0190: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
    // 0x800B0194: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B0198: nop

    // 0x800B019C: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800B01A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B01A4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800B01A8: addiu       $t9, $t9, 0x7660
    ctx->r25 = ADD32(ctx->r25, 0X7660);
    // 0x800B01AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B01B0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800B01B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B01B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800B01BC: jal         0x8001C0EC
    // 0x800B01C0: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B01C0: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    after_0:
    // 0x800B01C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B01C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B01CC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B01D0: addiu       $a3, $a3, 0x771C
    ctx->r7 = ADD32(ctx->r7, 0X771C);
    // 0x800B01D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B01D8: jal         0x8001ABF4
    // 0x800B01DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B01DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800B01E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B01E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B01E8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B01EC: addiu       $a3, $a3, 0x7770
    ctx->r7 = ADD32(ctx->r7, 0X7770);
    // 0x800B01F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B01F4: jal         0x8001ABF4
    // 0x800B01F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800B01F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800B01FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0200: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0204: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B0208: addiu       $a3, $a3, 0x77A8
    ctx->r7 = ADD32(ctx->r7, 0X77A8);
    // 0x800B020C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B0210: jal         0x8001ABF4
    // 0x800B0214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800B0214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800B0218: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B021C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0220: jal         0x8001BB34
    // 0x800B0224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x800B0224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_800B0228:
    // 0x800B0228: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B022C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0230: jal         0x8001BBDC
    // 0x800B0234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800B0234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800B0238: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B023C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0240: jal         0x80029C40
    // 0x800B0244: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800B0244: nop

    after_6:
    // 0x800B0248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B024C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0250: jal         0x80029D04
    // 0x800B0254: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x800B0254: nop

    after_7:
    // 0x800B0258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B025C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0260: jal         0x8001B44C
    // 0x800B0264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_8;
    // 0x800B0264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800B0268: beq         $v0, $zero, L_800B0280
    if (ctx->r2 == 0) {
        // 0x800B026C: nop
    
            goto L_800B0280;
    }
    // 0x800B026C: nop

    // 0x800B0270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0278: jal         0x8002B0E4
    // 0x800B027C: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800B027C: nop

    after_9:
L_800B0280:
    // 0x800B0280: b           L_800B0288
    // 0x800B0284: nop

        goto L_800B0288;
    // 0x800B0284: nop

L_800B0288:
    // 0x800B0288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B028C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B0290: jr          $ra
    // 0x800B0294: nop

    return;
    // 0x800B0294: nop

;}
RECOMP_FUNC void func_800FACF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FACF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FACF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FACF8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800FACFC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800FAD00: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800FAD04: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800FAD08: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800FAD0C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800FAD10: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800FAD14: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800FAD18: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800FAD1C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800FAD20: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800FAD24: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800FAD28: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FAD2C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800FAD30: addiu       $a1, $a1, 0x36D0
    ctx->r5 = ADD32(ctx->r5, 0X36D0);
    // 0x800FAD34: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800FAD38: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800FAD3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FAD40: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800FAD44: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800FAD48: jal         0x80027464
    // 0x800FAD4C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800FAD4C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800FAD50: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800FAD54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800FAD58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FAD5C: beq         $t1, $at, L_800FADE8
    if (ctx->r9 == ctx->r1) {
        // 0x800FAD60: nop
    
            goto L_800FADE8;
    }
    // 0x800FAD60: nop

    // 0x800FAD64: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800FAD68: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FAD6C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800FAD70: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FAD74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800FAD78: lwc1        $f4, 0x5740($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5740);
    // 0x800FAD7C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800FAD80: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800FAD84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FAD88: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800FAD8C: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800FAD90: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800FAD94: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FAD98: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800FAD9C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800FADA0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800FADA4: lwc1        $f6, 0x5744($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5744);
    // 0x800FADA8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800FADAC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800FADB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FADB4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800FADB8: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x800FADBC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800FADC0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FADC4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800FADC8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FADCC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800FADD0: lwc1        $f8, 0x5748($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5748);
    // 0x800FADD4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FADD8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800FADDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FADE0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800FADE4: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_800FADE8:
    // 0x800FADE8: b           L_800FADF0
    // 0x800FADEC: nop

        goto L_800FADF0;
    // 0x800FADEC: nop

L_800FADF0:
    // 0x800FADF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FADF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FADF8: jr          $ra
    // 0x800FADFC: nop

    return;
    // 0x800FADFC: nop

;}
RECOMP_FUNC void func_800B08FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B08FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B0900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B0904: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B0908: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B090C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B0910: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B0914: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0918: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B091C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0920: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B0924: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B0928: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B092C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B0930: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0934: nop

    // 0x800B0938: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B093C: nop

    // 0x800B0940: bne         $t1, $zero, L_800B0980
    if (ctx->r9 != 0) {
        // 0x800B0944: nop
    
            goto L_800B0980;
    }
    // 0x800B0944: nop

    // 0x800B0948: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B094C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B0950: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B0954: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B0958: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B095C: nop

    // 0x800B0960: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B0964: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B0968: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B096C: nop

    // 0x800B0970: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B0974: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0978: nop

    // 0x800B097C: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
L_800B0980:
    // 0x800B0980: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0984: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0988: jal         0x80029C40
    // 0x800B098C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B098C: nop

    after_0:
    // 0x800B0990: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0994: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0998: jal         0x80029D04
    // 0x800B099C: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B099C: nop

    after_1:
    // 0x800B09A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B09A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B09A8: jal         0x8002B0E4
    // 0x800B09AC: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800B09AC: nop

    after_2:
    // 0x800B09B0: b           L_800B09B8
    // 0x800B09B4: nop

        goto L_800B09B8;
    // 0x800B09B4: nop

L_800B09B8:
    // 0x800B09B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B09BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B09C0: jr          $ra
    // 0x800B09C4: nop

    return;
    // 0x800B09C4: nop

;}
RECOMP_FUNC void func_800F9C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9C4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9C50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9C54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F9C58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F9C5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F9C60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F9C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9C68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F9C6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9C70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F9C74: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F9C78: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800F9C7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F9C80: bne         $t8, $at, L_800F9CA0
    if (ctx->r24 != ctx->r1) {
        // 0x800F9C84: nop
    
            goto L_800F9CA0;
    }
    // 0x800F9C84: nop

    // 0x800F9C88: b           L_800F9C90
    // 0x800F9C8C: nop

        goto L_800F9C90;
    // 0x800F9C8C: nop

L_800F9C90:
    // 0x800F9C90: jal         0x800F9A20
    // 0x800F9C94: nop

    func_800F9A20(rdram, ctx);
        goto after_0;
    // 0x800F9C94: nop

    after_0:
    // 0x800F9C98: b           L_800F9CA0
    // 0x800F9C9C: nop

        goto L_800F9CA0;
    // 0x800F9C9C: nop

L_800F9CA0:
    // 0x800F9CA0: b           L_800F9CA8
    // 0x800F9CA4: nop

        goto L_800F9CA8;
    // 0x800F9CA4: nop

L_800F9CA8:
    // 0x800F9CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F9CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9CB0: jr          $ra
    // 0x800F9CB4: nop

    return;
    // 0x800F9CB4: nop

;}
RECOMP_FUNC void func_800BEB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEB10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BEB14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BEB18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BEB1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BEB20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BEB24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BEB28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BEB2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BEB30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BEB34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BEB38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BEB3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BEB40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BEB44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BEB48: nop

    // 0x800BEB4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BEB50: nop

    // 0x800BEB54: bne         $t1, $zero, L_800BEBB0
    if (ctx->r9 != 0) {
        // 0x800BEB58: nop
    
            goto L_800BEBB0;
    }
    // 0x800BEB58: nop

    // 0x800BEB5C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BEB60: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BEB64: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BEB68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BEB6C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BEB70: nop

    // 0x800BEB74: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BEB78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BEB7C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BEB80: nop

    // 0x800BEB84: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BEB88: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BEB8C: nop

    // 0x800BEB90: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800BEB94: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BEB98: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800BEB9C: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x800BEBA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEBA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEBA8: jal         0x8001BBDC
    // 0x800BEBAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800BEBAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_800BEBB0:
    // 0x800BEBB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEBB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEBB8: jal         0x80029C40
    // 0x800BEBBC: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800BEBBC: nop

    after_1:
    // 0x800BEBC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEBC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEBC8: jal         0x80029D04
    // 0x800BEBCC: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800BEBCC: nop

    after_2:
    // 0x800BEBD0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BEBD4: nop

    // 0x800BEBD8: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800BEBDC: nop

    // 0x800BEBE0: slti        $at, $t0, 0xF0
    ctx->r1 = SIGNED(ctx->r8) < 0XF0 ? 1 : 0;
    // 0x800BEBE4: bne         $at, $zero, L_800BEC44
    if (ctx->r1 != 0) {
        // 0x800BEBE8: nop
    
            goto L_800BEC44;
    }
    // 0x800BEBE8: nop

    // 0x800BEBEC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BEBF0: nop

    // 0x800BEBF4: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800BEBF8: nop

    // 0x800BEBFC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x800BEC00: beq         $t3, $zero, L_800BEC28
    if (ctx->r11 == 0) {
        // 0x800BEC04: nop
    
            goto L_800BEC28;
    }
    // 0x800BEC04: nop

    // 0x800BEC08: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BEC0C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800BEC10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800BEC14: lwc1        $f8, 0x20($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X20);
    // 0x800BEC18: nop

    // 0x800BEC1C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800BEC20: b           L_800BEC44
    // 0x800BEC24: swc1        $f16, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f16.u32l;
        goto L_800BEC44;
    // 0x800BEC24: swc1        $f16, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f16.u32l;
L_800BEC28:
    // 0x800BEC28: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BEC2C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800BEC30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BEC34: lwc1        $f18, 0x20($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X20);
    // 0x800BEC38: nop

    // 0x800BEC3C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800BEC40: swc1        $f6, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f6.u32l;
L_800BEC44:
    // 0x800BEC44: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BEC48: nop

    // 0x800BEC4C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800BEC50: nop

    // 0x800BEC54: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800BEC58: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x800BEC5C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BEC60: nop

    // 0x800BEC64: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800BEC68: nop

    // 0x800BEC6C: slti        $at, $t0, 0x12C
    ctx->r1 = SIGNED(ctx->r8) < 0X12C ? 1 : 0;
    // 0x800BEC70: bne         $at, $zero, L_800BED98
    if (ctx->r1 != 0) {
        // 0x800BEC74: nop
    
            goto L_800BED98;
    }
    // 0x800BEC74: nop

    // 0x800BEC78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEC7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEC80: jal         0x8001BBDC
    // 0x800BEC84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800BEC84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800BEC88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BEC8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BEC90: jal         0x8001B44C
    // 0x800BEC94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800BEC94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800BEC98: beq         $v0, $zero, L_800BED98
    if (ctx->r2 == 0) {
        // 0x800BEC9C: nop
    
            goto L_800BED98;
    }
    // 0x800BEC9C: nop

    // 0x800BECA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BECA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BECA8: jal         0x8001BBDC
    // 0x800BECAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800BECAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800BECB0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BECB4: nop

    // 0x800BECB8: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800BECBC: nop

    // 0x800BECC0: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x800BECC4: bne         $at, $zero, L_800BED48
    if (ctx->r1 != 0) {
        // 0x800BECC8: nop
    
            goto L_800BED48;
    }
    // 0x800BECC8: nop

    // 0x800BECCC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BECD0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800BECD4: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800BECD8: nop

    // 0x800BECDC: bne         $t4, $at, L_800BED18
    if (ctx->r12 != ctx->r1) {
        // 0x800BECE0: nop
    
            goto L_800BED18;
    }
    // 0x800BECE0: nop

    // 0x800BECE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BECE8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800BECEC: addiu       $t5, $t5, 0x7E64
    ctx->r13 = ADD32(ctx->r13, 0X7E64);
    // 0x800BECF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BECF4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800BECF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BECFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BED00: jal         0x8001C0EC
    // 0x800BED04: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x800BED04: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    after_6:
    // 0x800BED08: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BED0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800BED10: b           L_800BED48
    // 0x800BED14: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
        goto L_800BED48;
    // 0x800BED14: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
L_800BED18:
    // 0x800BED18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BED1C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800BED20: addiu       $t6, $t6, 0x7E64
    ctx->r14 = ADD32(ctx->r14, 0X7E64);
    // 0x800BED24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BED28: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800BED2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BED30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800BED34: jal         0x8001C0EC
    // 0x800BED38: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800BED38: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    after_7:
    // 0x800BED3C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BED40: nop

    // 0x800BED44: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
L_800BED48:
    // 0x800BED48: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BED4C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800BED50: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800BED54: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BED58: nop

    // 0x800BED5C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800BED60: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BED64: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BED68: nop

    // 0x800BED6C: swc1        $f8, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f8.u32l;
    // 0x800BED70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BED74: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800BED78: sh          $t4, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r12;
    // 0x800BED7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BED80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BED84: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BED88: addiu       $a3, $a3, 0x7EA8
    ctx->r7 = ADD32(ctx->r7, 0X7EA8);
    // 0x800BED8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BED90: jal         0x8001ABF4
    // 0x800BED94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x800BED94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_800BED98:
    // 0x800BED98: b           L_800BEDA0
    // 0x800BED9C: nop

        goto L_800BEDA0;
    // 0x800BED9C: nop

L_800BEDA0:
    // 0x800BEDA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BEDA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BEDA8: jr          $ra
    // 0x800BEDAC: nop

    return;
    // 0x800BEDAC: nop

;}
RECOMP_FUNC void func_800AC680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC680: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AC684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AC688: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AC68C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AC690: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AC694: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AC698: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AC69C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AC6A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AC6A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AC6A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800AC6AC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800AC6B0: nop

    // 0x800AC6B4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800AC6B8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800AC6BC: nop

    // 0x800AC6C0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800AC6C4: sltiu       $at, $t0, 0x7
    ctx->r1 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x800AC6C8: beq         $at, $zero, L_800AC75C
    if (ctx->r1 == 0) {
        // 0x800AC6CC: nop
    
            goto L_800AC75C;
    }
    // 0x800AC6CC: nop

    // 0x800AC6D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800AC6D4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AC6D8: addu        $at, $at, $t0
    gpr jr_addend_800AC6E4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800AC6DC: lw          $t0, 0x4AA8($at)
    ctx->r8 = ADD32(ctx->r1, 0X4AA8);
    // 0x800AC6E0: nop

    // 0x800AC6E4: jr          $t0
    // 0x800AC6E8: nop

    switch (jr_addend_800AC6E4 >> 2) {
        case 0: goto L_800AC6EC; break;
        case 1: goto L_800AC6FC; break;
        case 2: goto L_800AC70C; break;
        case 3: goto L_800AC71C; break;
        case 4: goto L_800AC72C; break;
        case 5: goto L_800AC73C; break;
        case 6: goto L_800AC74C; break;
        default: switch_error(__func__, 0x800AC6E4, 0x80114AA8);
    }
    // 0x800AC6E8: nop

L_800AC6EC:
    // 0x800AC6EC: jal         0x800AB748
    // 0x800AC6F0: nop

    func_800AB748(rdram, ctx);
        goto after_0;
    // 0x800AC6F0: nop

    after_0:
    // 0x800AC6F4: b           L_800AC764
    // 0x800AC6F8: nop

        goto L_800AC764;
    // 0x800AC6F8: nop

L_800AC6FC:
    // 0x800AC6FC: jal         0x800ABA38
    // 0x800AC700: nop

    func_800ABA38(rdram, ctx);
        goto after_1;
    // 0x800AC700: nop

    after_1:
    // 0x800AC704: b           L_800AC764
    // 0x800AC708: nop

        goto L_800AC764;
    // 0x800AC708: nop

L_800AC70C:
    // 0x800AC70C: jal         0x800ABC88
    // 0x800AC710: nop

    func_800ABC88(rdram, ctx);
        goto after_2;
    // 0x800AC710: nop

    after_2:
    // 0x800AC714: b           L_800AC764
    // 0x800AC718: nop

        goto L_800AC764;
    // 0x800AC718: nop

L_800AC71C:
    // 0x800AC71C: jal         0x800ABF34
    // 0x800AC720: nop

    func_800ABF34(rdram, ctx);
        goto after_3;
    // 0x800AC720: nop

    after_3:
    // 0x800AC724: b           L_800AC764
    // 0x800AC728: nop

        goto L_800AC764;
    // 0x800AC728: nop

L_800AC72C:
    // 0x800AC72C: jal         0x800AC194
    // 0x800AC730: nop

    func_800AC194(rdram, ctx);
        goto after_4;
    // 0x800AC730: nop

    after_4:
    // 0x800AC734: b           L_800AC764
    // 0x800AC738: nop

        goto L_800AC764;
    // 0x800AC738: nop

L_800AC73C:
    // 0x800AC73C: jal         0x800AC3D0
    // 0x800AC740: nop

    func_800AC3D0(rdram, ctx);
        goto after_5;
    // 0x800AC740: nop

    after_5:
    // 0x800AC744: b           L_800AC764
    // 0x800AC748: nop

        goto L_800AC764;
    // 0x800AC748: nop

L_800AC74C:
    // 0x800AC74C: jal         0x800AC57C
    // 0x800AC750: nop

    func_800AC57C(rdram, ctx);
        goto after_6;
    // 0x800AC750: nop

    after_6:
    // 0x800AC754: b           L_800AC764
    // 0x800AC758: nop

        goto L_800AC764;
    // 0x800AC758: nop

L_800AC75C:
    // 0x800AC75C: b           L_800AC764
    // 0x800AC760: nop

        goto L_800AC764;
    // 0x800AC760: nop

L_800AC764:
    // 0x800AC764: b           L_800AC76C
    // 0x800AC768: nop

        goto L_800AC76C;
    // 0x800AC768: nop

L_800AC76C:
    // 0x800AC76C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AC770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AC774: jr          $ra
    // 0x800AC778: nop

    return;
    // 0x800AC778: nop

;}
RECOMP_FUNC void func_80091230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091230: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091234: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091238: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009123C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091240: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091244: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091248: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009124C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091250: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091254: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091258: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009125C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091260: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091264: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091268: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009126C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091270: addiu       $a1, $a1, 0x1528
    ctx->r5 = ADD32(ctx->r5, 0X1528);
    // 0x80091274: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091278: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009127C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091280: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091284: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091288: jal         0x80027464
    // 0x8009128C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009128C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091290: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091294: b           L_8009129C
    // 0x80091298: nop

        goto L_8009129C;
    // 0x80091298: nop

L_8009129C:
    // 0x8009129C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800912A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800912A4: jr          $ra
    // 0x800912A8: nop

    return;
    // 0x800912A8: nop

;}
RECOMP_FUNC void func_800A6574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6574: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A6578: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A657C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A6580: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A6584: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A6588: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A658C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A6590: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A6594: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A6598: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A659C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A65A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A65A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A65A8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800A65AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A65B0: nop

    // 0x800A65B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A65B8: nop

    // 0x800A65BC: bne         $t1, $zero, L_800A6640
    if (ctx->r9 != 0) {
        // 0x800A65C0: nop
    
            goto L_800A6640;
    }
    // 0x800A65C0: nop

    // 0x800A65C4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A65C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A65CC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A65D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800A65D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A65D8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A65DC: nop

    // 0x800A65E0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A65E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A65E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A65EC: nop

    // 0x800A65F0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A65F4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A65F8: addiu       $t6, $zero, 0x168
    ctx->r14 = ADD32(0, 0X168);
    // 0x800A65FC: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800A6600: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6604: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800A6608: addiu       $t8, $t8, 0x7088
    ctx->r24 = ADD32(ctx->r24, 0X7088);
    // 0x800A660C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6610: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A6614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6618: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A661C: jal         0x8001C0EC
    // 0x800A6620: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A6620: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_0:
    // 0x800A6624: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6628: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A662C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6630: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x800A6634: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A6638: jal         0x800175F0
    // 0x800A663C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800A663C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800A6640:
    // 0x800A6640: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6644: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6648: jal         0x80028FA0
    // 0x800A664C: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800A664C: nop

    after_2:
    // 0x800A6650: beq         $v0, $zero, L_800A6668
    if (ctx->r2 == 0) {
        // 0x800A6654: nop
    
            goto L_800A6668;
    }
    // 0x800A6654: nop

    // 0x800A6658: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A665C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6660: jal         0x80029B60
    // 0x800A6664: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800A6664: nop

    after_3:
L_800A6668:
    // 0x800A6668: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A666C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6670: jal         0x80029C40
    // 0x800A6674: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A6674: nop

    after_4:
    // 0x800A6678: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A667C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6680: jal         0x80029D04
    // 0x800A6684: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A6684: nop

    after_5:
    // 0x800A6688: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A668C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A6690: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6694: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6698: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800A669C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800A66A0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A66A4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800A66A8: jal         0x80029018
    // 0x800A66AC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800A66AC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x800A66B0: beq         $v0, $zero, L_800A66F0
    if (ctx->r2 == 0) {
        // 0x800A66B4: nop
    
            goto L_800A66F0;
    }
    // 0x800A66B4: nop

    // 0x800A66B8: jal         0x800297DC
    // 0x800A66BC: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800A66BC: nop

    after_7:
    // 0x800A66C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A66C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A66C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A66CC: jal         0x80029824
    // 0x800A66D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800A66D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800A66D4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A66D8: nop

    // 0x800A66DC: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800A66E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A66E4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A66E8: nop

    // 0x800A66EC: swc1        $f16, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f16.u32l;
L_800A66F0:
    // 0x800A66F0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A66F4: nop

    // 0x800A66F8: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A66FC: nop

    // 0x800A6700: addiu       $t3, $t2, -0xA
    ctx->r11 = ADD32(ctx->r10, -0XA);
    // 0x800A6704: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x800A6708: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A670C: nop

    // 0x800A6710: lwc1        $f18, 0x3C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800A6714: nop

    // 0x800A6718: swc1        $f18, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f18.u32l;
    // 0x800A671C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A6720: nop

    // 0x800A6724: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800A6728: nop

    // 0x800A672C: bgez        $t6, L_800A6758
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800A6730: nop
    
            goto L_800A6758;
    }
    // 0x800A6730: nop

    // 0x800A6734: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A6738: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x800A673C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800A6740: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A6744: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800A6748: sh          $t9, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r25;
    // 0x800A674C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800A6750: nop

    // 0x800A6754: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800A6758:
    // 0x800A6758: b           L_800A6760
    // 0x800A675C: nop

        goto L_800A6760;
    // 0x800A675C: nop

L_800A6760:
    // 0x800A6760: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A6764: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A6768: jr          $ra
    // 0x800A676C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A676C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C8B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8B64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C8B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C8B6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C8B70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C8B74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C8B78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C8B7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8B80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C8B84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8B88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C8B8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C8B90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C8B94: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800C8B98: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8B9C: nop

    // 0x800C8BA0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C8BA4: nop

    // 0x800C8BA8: bne         $t1, $zero, L_800C8BF8
    if (ctx->r9 != 0) {
        // 0x800C8BAC: nop
    
            goto L_800C8BF8;
    }
    // 0x800C8BAC: nop

    // 0x800C8BB0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8BB4: nop

    // 0x800C8BB8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C8BBC: nop

    // 0x800C8BC0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C8BC4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C8BC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8BD0: jal         0x8001BBDC
    // 0x800C8BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C8BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800C8BD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8BDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8BE0: jal         0x8001BB34
    // 0x800C8BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800C8BE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C8BE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8BEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8BF0: jal         0x8001BB04
    // 0x800C8BF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_2;
    // 0x800C8BF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800C8BF8:
    // 0x800C8BF8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8BFC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C8C00: lwc1        $f4, 0xC($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XC);
    // 0x800C8C04: lwc1        $f9, 0x4F08($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4F08);
    // 0x800C8C08: lwc1        $f8, 0x4F0C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F0C);
    // 0x800C8C0C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800C8C10: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800C8C14: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800C8C18: swc1        $f16, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f16.u32l;
    // 0x800C8C1C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8C20: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C8C24: lwc1        $f18, 0x10($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X10);
    // 0x800C8C28: lwc1        $f7, 0x4F10($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4F10);
    // 0x800C8C2C: lwc1        $f6, 0x4F14($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F14);
    // 0x800C8C30: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800C8C34: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800C8C38: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800C8C3C: swc1        $f10, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f10.u32l;
    // 0x800C8C40: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8C44: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C8C48: lwc1        $f16, 0x14($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X14);
    // 0x800C8C4C: lwc1        $f5, 0x4F18($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4F18);
    // 0x800C8C50: lwc1        $f4, 0x4F1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F1C);
    // 0x800C8C54: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800C8C58: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800C8C5C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800C8C60: swc1        $f8, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f8.u32l;
    // 0x800C8C64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8C68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8C6C: jal         0x8001B44C
    // 0x800C8C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800C8C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800C8C74: beq         $v0, $zero, L_800C8CB0
    if (ctx->r2 == 0) {
        // 0x800C8C78: nop
    
            goto L_800C8CB0;
    }
    // 0x800C8C78: nop

    // 0x800C8C7C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8C80: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800C8C84: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800C8C88: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8C8C: nop

    // 0x800C8C90: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800C8C94: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8C98: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C8C9C: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
    // 0x800C8CA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C8CA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C8CA8: jal         0x8001BBDC
    // 0x800C8CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x800C8CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_800C8CB0:
    // 0x800C8CB0: b           L_800C8CB8
    // 0x800C8CB4: nop

        goto L_800C8CB8;
    // 0x800C8CB4: nop

L_800C8CB8:
    // 0x800C8CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C8CBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C8CC0: jr          $ra
    // 0x800C8CC4: nop

    return;
    // 0x800C8CC4: nop

;}
RECOMP_FUNC void func_800DC07C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC07C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800DC080: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DC084: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DC088: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800DC08C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DC090: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DC094: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DC098: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DC09C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC0A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DC0A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC0A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DC0AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DC0B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DC0B4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800DC0B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800DC0BC: nop

    // 0x800DC0C0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DC0C4: nop

    // 0x800DC0C8: bne         $t1, $zero, L_800DC10C
    if (ctx->r9 != 0) {
        // 0x800DC0CC: nop
    
            goto L_800DC10C;
    }
    // 0x800DC0CC: nop

    // 0x800DC0D0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800DC0D4: nop

    // 0x800DC0D8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DC0DC: nop

    // 0x800DC0E0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DC0E4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DC0E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC0EC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DC0F0: addiu       $t5, $t5, -0x714C
    ctx->r13 = ADD32(ctx->r13, -0X714C);
    // 0x800DC0F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC0F8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DC0FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DC100: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800DC104: jal         0x8001C0EC
    // 0x800DC108: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DC108: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    after_0:
L_800DC10C:
    // 0x800DC10C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC110: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC114: jal         0x8001B4AC
    // 0x800DC118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x800DC118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800DC11C: beq         $v0, $zero, L_800DC16C
    if (ctx->r2 == 0) {
        // 0x800DC120: nop
    
            goto L_800DC16C;
    }
    // 0x800DC120: nop

    // 0x800DC124: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DC128: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800DC12C: nop

    // 0x800DC130: swc1        $f4, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f4.u32l;
    // 0x800DC134: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800DC138: nop

    // 0x800DC13C: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800DC140: nop

    // 0x800DC144: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800DC148: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800DC14C: nop

    // 0x800DC150: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800DC154: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800DC158: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x800DC15C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800DC160: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800DC164: nop

    // 0x800DC168: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800DC16C:
    // 0x800DC16C: b           L_800DC174
    // 0x800DC170: nop

        goto L_800DC174;
    // 0x800DC170: nop

L_800DC174:
    // 0x800DC174: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DC178: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800DC17C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800DC180: jr          $ra
    // 0x800DC184: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800DC184: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800F8AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8AB8: jr          $ra
    // 0x800F8ABC: nop

    return;
    // 0x800F8ABC: nop

    // 0x800F8AC0: jr          $ra
    // 0x800F8AC4: nop

    return;
    // 0x800F8AC4: nop

;}
RECOMP_FUNC void func_800A4434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4434: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A4438: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800A443C: nop

    // 0x800A4440: beq         $t6, $zero, L_800A445C
    if (ctx->r14 == 0) {
        // 0x800A4444: nop
    
            goto L_800A445C;
    }
    // 0x800A4444: nop

    // 0x800A4448: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A444C: beq         $t6, $at, L_800A445C
    if (ctx->r14 == ctx->r1) {
        // 0x800A4450: nop
    
            goto L_800A445C;
    }
    // 0x800A4450: nop

    // 0x800A4454: jr          $ra
    // 0x800A4458: nop

    return;
    // 0x800A4458: nop

L_800A445C:
    // 0x800A445C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800A4460: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800A4464: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A4468: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A446C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A4470: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A4474: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A4478: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A447C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A4480: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800A4484: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800A4488: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800A448C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800A4490: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A4494: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A4498: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A449C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A44A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A44A4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A44A8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A44AC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A44B0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800A44B4: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800A44B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A44BC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A44C0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A44C4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A44C8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A44CC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A44D0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A44D4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800A44D8: jr          $ra
    // 0x800A44DC: nop

    return;
    // 0x800A44DC: nop

    // 0x800A44E0: jr          $ra
    // 0x800A44E4: nop

    return;
    // 0x800A44E4: nop

;}
RECOMP_FUNC void func_8007AD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AD60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007AD64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AD68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007AD6C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007AD70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007AD74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007AD78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007AD7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007AD80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007AD84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007AD88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007AD8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007AD90: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007AD94: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007AD98: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8007AD9C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8007ADA0: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8007ADA4: nop

    // 0x8007ADA8: beq         $t1, $at, L_8007ADC8
    if (ctx->r9 == ctx->r1) {
        // 0x8007ADAC: nop
    
            goto L_8007ADC8;
    }
    // 0x8007ADAC: nop

    // 0x8007ADB0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8007ADB4: beq         $t1, $at, L_8007ADC8
    if (ctx->r9 == ctx->r1) {
        // 0x8007ADB8: nop
    
            goto L_8007ADC8;
    }
    // 0x8007ADB8: nop

    // 0x8007ADBC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8007ADC0: bne         $t1, $at, L_8007AE4C
    if (ctx->r9 != ctx->r1) {
        // 0x8007ADC4: nop
    
            goto L_8007AE4C;
    }
    // 0x8007ADC4: nop

L_8007ADC8:
    // 0x8007ADC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007ADCC: jal         0x8001B62C
    // 0x8007ADD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8007ADD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007ADD4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007ADD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007ADDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007ADE0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8007ADE4: nop

    // 0x8007ADE8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007ADEC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8007ADF0: nop

    // 0x8007ADF4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8007ADF8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007ADFC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007AE00: nop

    // 0x8007AE04: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8007AE08: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8007AE0C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8007AE10: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8007AE14: nop

    // 0x8007AE18: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007AE1C: nop

    // 0x8007AE20: bgez        $t4, L_8007AE2C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8007AE24: nop
    
            goto L_8007AE2C;
    }
    // 0x8007AE24: nop

    // 0x8007AE28: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8007AE2C:
    // 0x8007AE2C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AE30: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8007AE34: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8007AE38: addiu       $a2, $a2, -0x3C04
    ctx->r6 = ADD32(ctx->r6, -0X3C04);
    // 0x8007AE3C: jal         0x80079BEC
    // 0x8007AE40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80079BEC(rdram, ctx);
        goto after_1;
    // 0x8007AE40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x8007AE44: b           L_8007AE54
    // 0x8007AE48: nop

        goto L_8007AE54;
    // 0x8007AE48: nop

L_8007AE4C:
    // 0x8007AE4C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x8007AE50: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
L_8007AE54:
    // 0x8007AE54: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007AE58: jal         0x80079688
    // 0x8007AE5C: nop

    func_80079688(rdram, ctx);
        goto after_2;
    // 0x8007AE5C: nop

    after_2:
    // 0x8007AE60: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007AE64: jal         0x800797FC
    // 0x8007AE68: nop

    func_800797FC(rdram, ctx);
        goto after_3;
    // 0x8007AE68: nop

    after_3:
    // 0x8007AE6C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007AE70: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8007AE74: bne         $t6, $at, L_8007AFEC
    if (ctx->r14 != ctx->r1) {
        // 0x8007AE78: nop
    
            goto L_8007AFEC;
    }
    // 0x8007AE78: nop

    // 0x8007AE7C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AE80: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x8007AE84: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x8007AE88: nop

    // 0x8007AE8C: bne         $t8, $at, L_8007AFC8
    if (ctx->r24 != ctx->r1) {
        // 0x8007AE90: nop
    
            goto L_8007AFC8;
    }
    // 0x8007AE90: nop

    // 0x8007AE94: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AE98: addiu       $t9, $zero, 0x27
    ctx->r25 = ADD32(0, 0X27);
    // 0x8007AE9C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8007AEA0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007AEA4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8007AEA8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AEAC: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8007AEB0: nop

    // 0x8007AEB4: swc1        $f18, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f18.u32l;
    // 0x8007AEB8: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8007AEBC: lw          $t3, 0x51A4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X51A4);
    // 0x8007AEC0: nop

    // 0x8007AEC4: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8007AEC8: beq         $t4, $zero, L_8007AEE4
    if (ctx->r12 == 0) {
        // 0x8007AECC: nop
    
            goto L_8007AEE4;
    }
    // 0x8007AECC: nop

    // 0x8007AED0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8007AED4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007AED8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AEDC: b           L_8007AEF8
    // 0x8007AEE0: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
        goto L_8007AEF8;
    // 0x8007AEE0: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
L_8007AEE4:
    // 0x8007AEE4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8007AEE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007AEEC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AEF0: nop

    // 0x8007AEF4: swc1        $f6, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f6.u32l;
L_8007AEF8:
    // 0x8007AEF8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007AEFC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8007AF00: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AF04: lwc1        $f8, 0x1C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8007AF08: nop

    // 0x8007AF0C: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
    // 0x8007AF10: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8007AF14: lb          $t9, 0x5268($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X5268);
    // 0x8007AF18: nop

    // 0x8007AF1C: bne         $t9, $zero, L_8007AF68
    if (ctx->r25 != 0) {
        // 0x8007AF20: nop
    
            goto L_8007AF68;
    }
    // 0x8007AF20: nop

    // 0x8007AF24: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AF28: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007AF2C: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x8007AF30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007AF34: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8007AF38: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8007AF3C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8007AF40: lb          $t2, 0x5240($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5240);
    // 0x8007AF44: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8007AF48: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8007AF4C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x8007AF50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007AF54: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8007AF58: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007AF5C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8007AF60: b           L_8007AFA8
    // 0x8007AF64: swc1        $f18, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f18.u32l;
        goto L_8007AFA8;
    // 0x8007AF64: swc1        $f18, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f18.u32l;
L_8007AF68:
    // 0x8007AF68: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AF6C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007AF70: lh          $t4, 0xB4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB4);
    // 0x8007AF74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007AF78: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8007AF7C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8007AF80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007AF84: lb          $t5, 0x5240($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5240);
    // 0x8007AF88: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8007AF8C: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8007AF90: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8007AF94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007AF98: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007AF9C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8007AFA0: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8007AFA4: swc1        $f10, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f10.u32l;
L_8007AFA8:
    // 0x8007AFA8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007AFAC: jal         0x800799A8
    // 0x8007AFB0: nop

    func_800799A8(rdram, ctx);
        goto after_4;
    // 0x8007AFB0: nop

    after_4:
    // 0x8007AFB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007AFB8: jal         0x80079AD8
    // 0x8007AFBC: nop

    func_80079AD8(rdram, ctx);
        goto after_5;
    // 0x8007AFBC: nop

    after_5:
    // 0x8007AFC0: b           L_8007AFEC
    // 0x8007AFC4: nop

        goto L_8007AFEC;
    // 0x8007AFC4: nop

L_8007AFC8:
    // 0x8007AFC8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AFCC: addiu       $t6, $zero, 0x26
    ctx->r14 = ADD32(0, 0X26);
    // 0x8007AFD0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x8007AFD4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007AFD8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8007AFDC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007AFE0: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8007AFE4: nop

    // 0x8007AFE8: swc1        $f8, 0xD4($t9)
    MEM_W(0XD4, ctx->r25) = ctx->f8.u32l;
L_8007AFEC:
    // 0x8007AFEC: b           L_8007AFF4
    // 0x8007AFF0: nop

        goto L_8007AFF4;
    // 0x8007AFF0: nop

L_8007AFF4:
    // 0x8007AFF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AFF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007AFFC: jr          $ra
    // 0x8007B000: nop

    return;
    // 0x8007B000: nop

;}
RECOMP_FUNC void func_8005EF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EF78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005EF7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005EF80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005EF84: lw          $t6, -0x1DC4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DC4);
    // 0x8005EF88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EF8C: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x8005EF90: sw          $t7, -0x1DC4($at)
    MEM_W(-0X1DC4, ctx->r1) = ctx->r15;
    // 0x8005EF94: jal         0x8003C940
    // 0x8005EF98: nop

    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x8005EF98: nop

    after_0:
    // 0x8005EF9C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005EFA0: lw          $t8, -0x1DC4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1DC4);
    // 0x8005EFA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EFA8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8005EFAC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8005EFB0: sw          $v0, -0x1DD0($at)
    MEM_W(-0X1DD0, ctx->r1) = ctx->r2;
    // 0x8005EFB4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005EFB8: lw          $t0, -0x1DC4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1DC4);
    // 0x8005EFBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005EFC0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8005EFC4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8005EFC8: sw          $zero, -0x1DE0($at)
    MEM_W(-0X1DE0, ctx->r1) = 0;
    // 0x8005EFCC: b           L_8005EFD4
    // 0x8005EFD0: nop

        goto L_8005EFD4;
    // 0x8005EFD0: nop

L_8005EFD4:
    // 0x8005EFD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005EFD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005EFDC: jr          $ra
    // 0x8005EFE0: nop

    return;
    // 0x8005EFE0: nop

;}
RECOMP_FUNC void func_80072948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072948: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8007294C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80072950: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072954: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
    // 0x80072958: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007295C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072960: swc1        $f6, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f6.u32l;
    // 0x80072964: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80072968: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007296C: swc1        $f8, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f8.u32l;
    // 0x80072970: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80072974: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072978: swc1        $f10, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f10.u32l;
    // 0x8007297C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80072980: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80072984: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072988: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
    // 0x8007298C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80072990: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072994: swc1        $f18, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f18.u32l;
    // 0x80072998: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x8007299C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800729A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800729A4: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x800729A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800729AC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800729B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800729B4: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800729B8: nop

    // 0x800729BC: swc1        $f6, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f6.u32l;
    // 0x800729C0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800729C4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800729C8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800729CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800729D0: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800729D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800729D8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800729DC: swc1        $f16, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f16.u32l;
    // 0x800729E0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800729E4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800729E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800729EC: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800729F0: nop

    // 0x800729F4: swc1        $f18, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f18.u32l;
    // 0x800729F8: jr          $ra
    // 0x800729FC: nop

    return;
    // 0x800729FC: nop

    // 0x80072A00: jr          $ra
    // 0x80072A04: nop

    return;
    // 0x80072A04: nop

;}
RECOMP_FUNC void func_800E6C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6C48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E6C4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E6C50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E6C54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E6C58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E6C5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E6C60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6C64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E6C68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6C6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E6C70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E6C74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E6C78: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E6C7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E6C80: nop

    // 0x800E6C84: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E6C88: nop

    // 0x800E6C8C: bne         $t1, $zero, L_800E6CE4
    if (ctx->r9 != 0) {
        // 0x800E6C90: nop
    
            goto L_800E6CE4;
    }
    // 0x800E6C90: nop

    // 0x800E6C94: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E6C98: nop

    // 0x800E6C9C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E6CA0: nop

    // 0x800E6CA4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E6CA8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E6CAC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E6CB0: nop

    // 0x800E6CB4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E6CB8: nop

    // 0x800E6CBC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E6CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6CC4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E6CC8: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E6CCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6CD0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E6CD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E6CD8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x800E6CDC: jal         0x8001C0EC
    // 0x800E6CE0: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E6CE0: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
L_800E6CE4:
    // 0x800E6CE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6CE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6CEC: jal         0x8001B4AC
    // 0x800E6CF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x800E6CF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800E6CF4: beq         $v0, $zero, L_800E6D14
    if (ctx->r2 == 0) {
        // 0x800E6CF8: nop
    
            goto L_800E6D14;
    }
    // 0x800E6CF8: nop

    // 0x800E6CFC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E6D00: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800E6D04: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E6D08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E6D0C: nop

    // 0x800E6D10: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E6D14:
    // 0x800E6D14: b           L_800E6D1C
    // 0x800E6D18: nop

        goto L_800E6D1C;
    // 0x800E6D18: nop

L_800E6D1C:
    // 0x800E6D1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E6D20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E6D24: jr          $ra
    // 0x800E6D28: nop

    return;
    // 0x800E6D28: nop

;}
RECOMP_FUNC void func_80093810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093810: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80093814: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093818: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009381C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093820: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80093824: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80093828: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009382C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80093830: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80093834: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80093838: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009383C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80093840: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80093844: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80093848: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009384C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093850: addiu       $a1, $a1, 0x1868
    ctx->r5 = ADD32(ctx->r5, 0X1868);
    // 0x80093854: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80093858: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009385C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80093860: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80093864: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80093868: jal         0x80027464
    // 0x8009386C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009386C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093870: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80093874: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80093878: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x8009387C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80093880: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80093884: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80093888: jal         0x8001ABF4
    // 0x8009388C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009388C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80093890: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80093894: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x80093898: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009389C: addiu       $a3, $a3, 0xE0
    ctx->r7 = ADD32(ctx->r7, 0XE0);
    // 0x800938A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800938A4: jal         0x8001ABF4
    // 0x800938A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800938A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800938AC: b           L_800938B4
    // 0x800938B0: nop

        goto L_800938B4;
    // 0x800938B0: nop

L_800938B4:
    // 0x800938B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800938B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800938BC: jr          $ra
    // 0x800938C0: nop

    return;
    // 0x800938C0: nop

;}
RECOMP_FUNC void func_800A1E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1E80: jr          $ra
    // 0x800A1E84: nop

    return;
    // 0x800A1E84: nop

    // 0x800A1E88: jr          $ra
    // 0x800A1E8C: nop

    return;
    // 0x800A1E8C: nop

;}
RECOMP_FUNC void func_800AA0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA0BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800AA0C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AA0C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AA0C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AA0CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AA0D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AA0D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA0D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AA0DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA0E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AA0E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AA0E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AA0EC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800AA0F0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA0F4: nop

    // 0x800AA0F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AA0FC: nop

    // 0x800AA100: bne         $t1, $zero, L_800AA14C
    if (ctx->r9 != 0) {
        // 0x800AA104: nop
    
            goto L_800AA14C;
    }
    // 0x800AA104: nop

    // 0x800AA108: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA10C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AA110: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AA114: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AA118: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA11C: nop

    // 0x800AA120: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AA124: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AA128: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA12C: nop

    // 0x800AA130: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AA134: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA138: nop

    // 0x800AA13C: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800AA140: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA144: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x800AA148: sh          $t7, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r15;
L_800AA14C:
    // 0x800AA14C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA150: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA154: jal         0x80029C40
    // 0x800AA158: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800AA158: nop

    after_0:
    // 0x800AA15C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA160: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA164: jal         0x80029D04
    // 0x800AA168: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800AA168: nop

    after_1:
    // 0x800AA16C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA170: nop

    // 0x800AA174: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800AA178: nop

    // 0x800AA17C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800AA180: sh          $t1, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r9;
    // 0x800AA184: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA188: nop

    // 0x800AA18C: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800AA190: nop

    // 0x800AA194: bgtz        $t3, L_800AA1C0
    if (SIGNED(ctx->r11) > 0) {
        // 0x800AA198: nop
    
            goto L_800AA1C0;
    }
    // 0x800AA198: nop

    // 0x800AA19C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA1A0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800AA1A4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800AA1A8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA1AC: nop

    // 0x800AA1B0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800AA1B4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA1B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800AA1BC: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
L_800AA1C0:
    // 0x800AA1C0: b           L_800AA1C8
    // 0x800AA1C4: nop

        goto L_800AA1C8;
    // 0x800AA1C4: nop

L_800AA1C8:
    // 0x800AA1C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AA1CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AA1D0: jr          $ra
    // 0x800AA1D4: nop

    return;
    // 0x800AA1D4: nop

;}
RECOMP_FUNC void func_800C1F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1F64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C1F68: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800C1F6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C1F70: bne         $t6, $at, L_800C1FF4
    if (ctx->r14 != ctx->r1) {
        // 0x800C1F74: nop
    
            goto L_800C1FF4;
    }
    // 0x800C1F74: nop

    // 0x800C1F78: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800C1F7C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800C1F80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C1F84: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C1F88: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C1F8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C1F90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C1F94: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C1F98: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C1F9C: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
    // 0x800C1FA0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C1FA4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C1FA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C1FAC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C1FB0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C1FB4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C1FB8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C1FBC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C1FC0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C1FC4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800C1FC8: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x800C1FCC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800C1FD0: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800C1FD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C1FD8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C1FDC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C1FE0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C1FE4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C1FE8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C1FEC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C1FF0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800C1FF4:
    // 0x800C1FF4: jr          $ra
    // 0x800C1FF8: nop

    return;
    // 0x800C1FF8: nop

    // 0x800C1FFC: jr          $ra
    // 0x800C2000: nop

    return;
    // 0x800C2000: nop

;}
RECOMP_FUNC void func_800883A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800883A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800883AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800883B0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800883B4: lb          $t6, 0x523E($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X523E);
    // 0x800883B8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800883BC: addiu       $t8, $t8, -0x3398
    ctx->r24 = ADD32(ctx->r24, -0X3398);
    // 0x800883C0: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800883C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800883C8: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x800883CC: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x800883D0: nop

    // 0x800883D4: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x800883D8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800883DC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x800883E0: lb          $t3, 0x523E($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X523E);
    // 0x800883E4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800883E8: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x800883EC: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x800883F0: lw          $a0, -0x3398($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3398);
    // 0x800883F4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800883F8: jal         0x8000068C
    // 0x800883FC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800883FC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    after_0:
    // 0x80088400: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80088404: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80088408: jal         0x8001E954
    // 0x8008840C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    Set_DecompressHeap(rdram, ctx);
        goto after_1;
    // 0x8008840C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x80088410: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80088414: lb          $t5, 0x523E($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X523E);
    // 0x80088418: nop

    // 0x8008841C: bne         $t5, $zero, L_800884BC
    if (ctx->r13 != 0) {
        // 0x80088420: nop
    
            goto L_800884BC;
    }
    // 0x80088420: nop

    // 0x80088424: lui         $a1, 0x60
    ctx->r5 = S32(0X60 << 16);
    // 0x80088428: lui         $a2, 0x61
    ctx->r6 = S32(0X61 << 16);
    // 0x8008842C: addiu       $a2, $a2, 0xA40
    ctx->r6 = ADD32(ctx->r6, 0XA40);
    // 0x80088430: addiu       $a1, $a1, 0x3530
    ctx->r5 = ADD32(ctx->r5, 0X3530);
    // 0x80088434: jal         0x8001EB68
    // 0x80088438: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001EB68(rdram, ctx);
        goto after_2;
    // 0x80088438: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8008843C: lui         $a1, 0x62
    ctx->r5 = S32(0X62 << 16);
    // 0x80088440: lui         $a2, 0x62
    ctx->r6 = S32(0X62 << 16);
    // 0x80088444: addiu       $a2, $a2, 0x7030
    ctx->r6 = ADD32(ctx->r6, 0X7030);
    // 0x80088448: addiu       $a1, $a1, 0x6CF0
    ctx->r5 = ADD32(ctx->r5, 0X6CF0);
    // 0x8008844C: jal         0x8001EB68
    // 0x80088450: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8001EB68(rdram, ctx);
        goto after_3;
    // 0x80088450: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x80088454: lui         $a1, 0x62
    ctx->r5 = S32(0X62 << 16);
    // 0x80088458: lui         $a2, 0x62
    ctx->r6 = S32(0X62 << 16);
    // 0x8008845C: addiu       $a2, $a2, 0x7330
    ctx->r6 = ADD32(ctx->r6, 0X7330);
    // 0x80088460: addiu       $a1, $a1, 0x7030
    ctx->r5 = ADD32(ctx->r5, 0X7030);
    // 0x80088464: jal         0x8001EB68
    // 0x80088468: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001EB68(rdram, ctx);
        goto after_4;
    // 0x80088468: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x8008846C: lui         $a1, 0x62
    ctx->r5 = S32(0X62 << 16);
    // 0x80088470: lui         $a2, 0x63
    ctx->r6 = S32(0X63 << 16);
    // 0x80088474: addiu       $a2, $a2, -0x7890
    ctx->r6 = ADD32(ctx->r6, -0X7890);
    // 0x80088478: addiu       $a1, $a1, 0x7330
    ctx->r5 = ADD32(ctx->r5, 0X7330);
    // 0x8008847C: jal         0x8001EB68
    // 0x80088480: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8001EB68(rdram, ctx);
        goto after_5;
    // 0x80088480: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_5:
    // 0x80088484: lui         $a1, 0x63
    ctx->r5 = S32(0X63 << 16);
    // 0x80088488: lui         $a2, 0x63
    ctx->r6 = S32(0X63 << 16);
    // 0x8008848C: addiu       $a2, $a2, -0x28B0
    ctx->r6 = ADD32(ctx->r6, -0X28B0);
    // 0x80088490: addiu       $a1, $a1, -0x34E0
    ctx->r5 = ADD32(ctx->r5, -0X34E0);
    // 0x80088494: jal         0x8001EB68
    // 0x80088498: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8001EB68(rdram, ctx);
        goto after_6;
    // 0x80088498: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_6:
    // 0x8008849C: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x800884A0: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x800884A4: addiu       $a2, $a2, 0xF90
    ctx->r6 = ADD32(ctx->r6, 0XF90);
    // 0x800884A8: addiu       $a1, $a1, 0x7D0
    ctx->r5 = ADD32(ctx->r5, 0X7D0);
    // 0x800884AC: jal         0x8001EB68
    // 0x800884B0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8001EB68(rdram, ctx);
        goto after_7;
    // 0x800884B0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_7:
    // 0x800884B4: b           L_8008867C
    // 0x800884B8: nop

        goto L_8008867C;
    // 0x800884B8: nop

L_800884BC:
    // 0x800884BC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800884C0: lb          $t6, 0x523E($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X523E);
    // 0x800884C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800884C8: bne         $t6, $at, L_80088508
    if (ctx->r14 != ctx->r1) {
        // 0x800884CC: nop
    
            goto L_80088508;
    }
    // 0x800884CC: nop

    // 0x800884D0: lui         $a1, 0x61
    ctx->r5 = S32(0X61 << 16);
    // 0x800884D4: lui         $a2, 0x61
    ctx->r6 = S32(0X61 << 16);
    // 0x800884D8: addiu       $a2, $a2, 0x3370
    ctx->r6 = ADD32(ctx->r6, 0X3370);
    // 0x800884DC: addiu       $a1, $a1, 0xA40
    ctx->r5 = ADD32(ctx->r5, 0XA40);
    // 0x800884E0: jal         0x8001EB68
    // 0x800884E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001EB68(rdram, ctx);
        goto after_8;
    // 0x800884E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x800884E8: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x800884EC: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x800884F0: addiu       $a2, $a2, 0x14B0
    ctx->r6 = ADD32(ctx->r6, 0X14B0);
    // 0x800884F4: addiu       $a1, $a1, 0xF90
    ctx->r5 = ADD32(ctx->r5, 0XF90);
    // 0x800884F8: jal         0x8001EB68
    // 0x800884FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8001EB68(rdram, ctx);
        goto after_9;
    // 0x800884FC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x80088500: b           L_8008867C
    // 0x80088504: nop

        goto L_8008867C;
    // 0x80088504: nop

L_80088508:
    // 0x80088508: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8008850C: lb          $t7, 0x523E($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X523E);
    // 0x80088510: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80088514: bne         $t7, $at, L_8008856C
    if (ctx->r15 != ctx->r1) {
        // 0x80088518: nop
    
            goto L_8008856C;
    }
    // 0x80088518: nop

    // 0x8008851C: lui         $a1, 0x61
    ctx->r5 = S32(0X61 << 16);
    // 0x80088520: lui         $a2, 0x61
    ctx->r6 = S32(0X61 << 16);
    // 0x80088524: addiu       $a2, $a2, 0x65A0
    ctx->r6 = ADD32(ctx->r6, 0X65A0);
    // 0x80088528: addiu       $a1, $a1, 0x3370
    ctx->r5 = ADD32(ctx->r5, 0X3370);
    // 0x8008852C: jal         0x8001EB68
    // 0x80088530: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001EB68(rdram, ctx);
        goto after_10;
    // 0x80088530: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x80088534: lui         $a1, 0x63
    ctx->r5 = S32(0X63 << 16);
    // 0x80088538: lui         $a2, 0x63
    ctx->r6 = S32(0X63 << 16);
    // 0x8008853C: addiu       $a2, $a2, -0x34E0
    ctx->r6 = ADD32(ctx->r6, -0X34E0);
    // 0x80088540: addiu       $a1, $a1, -0x3D80
    ctx->r5 = ADD32(ctx->r5, -0X3D80);
    // 0x80088544: jal         0x8001EB68
    // 0x80088548: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001EB68(rdram, ctx);
        goto after_11;
    // 0x80088548: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_11:
    // 0x8008854C: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x80088550: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x80088554: addiu       $a2, $a2, 0x19D0
    ctx->r6 = ADD32(ctx->r6, 0X19D0);
    // 0x80088558: addiu       $a1, $a1, 0x14B0
    ctx->r5 = ADD32(ctx->r5, 0X14B0);
    // 0x8008855C: jal         0x8001EB68
    // 0x80088560: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_8001EB68(rdram, ctx);
        goto after_12;
    // 0x80088560: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_12:
    // 0x80088564: b           L_8008867C
    // 0x80088568: nop

        goto L_8008867C;
    // 0x80088568: nop

L_8008856C:
    // 0x8008856C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80088570: lb          $t8, 0x523E($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X523E);
    // 0x80088574: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80088578: bne         $t8, $at, L_800885A0
    if (ctx->r24 != ctx->r1) {
        // 0x8008857C: nop
    
            goto L_800885A0;
    }
    // 0x8008857C: nop

    // 0x80088580: lui         $a1, 0x61
    ctx->r5 = S32(0X61 << 16);
    // 0x80088584: lui         $a2, 0x62
    ctx->r6 = S32(0X62 << 16);
    // 0x80088588: addiu       $a2, $a2, -0x7BF0
    ctx->r6 = ADD32(ctx->r6, -0X7BF0);
    // 0x8008858C: addiu       $a1, $a1, 0x65A0
    ctx->r5 = ADD32(ctx->r5, 0X65A0);
    // 0x80088590: jal         0x8001EB68
    // 0x80088594: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001EB68(rdram, ctx);
        goto after_13;
    // 0x80088594: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x80088598: b           L_8008867C
    // 0x8008859C: nop

        goto L_8008867C;
    // 0x8008859C: nop

L_800885A0:
    // 0x800885A0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800885A4: lb          $t9, 0x523E($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X523E);
    // 0x800885A8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800885AC: bne         $t9, $at, L_80088604
    if (ctx->r25 != ctx->r1) {
        // 0x800885B0: nop
    
            goto L_80088604;
    }
    // 0x800885B0: nop

    // 0x800885B4: lui         $a1, 0x62
    ctx->r5 = S32(0X62 << 16);
    // 0x800885B8: lui         $a2, 0x62
    ctx->r6 = S32(0X62 << 16);
    // 0x800885BC: addiu       $a2, $a2, -0x56C0
    ctx->r6 = ADD32(ctx->r6, -0X56C0);
    // 0x800885C0: addiu       $a1, $a1, -0x7BF0
    ctx->r5 = ADD32(ctx->r5, -0X7BF0);
    // 0x800885C4: jal         0x8001EB68
    // 0x800885C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001EB68(rdram, ctx);
        goto after_14;
    // 0x800885C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x800885CC: lui         $a1, 0x63
    ctx->r5 = S32(0X63 << 16);
    // 0x800885D0: lui         $a2, 0x63
    ctx->r6 = S32(0X63 << 16);
    // 0x800885D4: addiu       $a2, $a2, -0x74F0
    ctx->r6 = ADD32(ctx->r6, -0X74F0);
    // 0x800885D8: addiu       $a1, $a1, -0x7890
    ctx->r5 = ADD32(ctx->r5, -0X7890);
    // 0x800885DC: jal         0x8001EB68
    // 0x800885E0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8001EB68(rdram, ctx);
        goto after_15;
    // 0x800885E0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_15:
    // 0x800885E4: lui         $a1, 0x64
    ctx->r5 = S32(0X64 << 16);
    // 0x800885E8: lui         $a2, 0x64
    ctx->r6 = S32(0X64 << 16);
    // 0x800885EC: addiu       $a2, $a2, 0x1EC0
    ctx->r6 = ADD32(ctx->r6, 0X1EC0);
    // 0x800885F0: addiu       $a1, $a1, 0x19D0
    ctx->r5 = ADD32(ctx->r5, 0X19D0);
    // 0x800885F4: jal         0x8001EB68
    // 0x800885F8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_8001EB68(rdram, ctx);
        goto after_16;
    // 0x800885F8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_16:
    // 0x800885FC: b           L_8008867C
    // 0x80088600: nop

        goto L_8008867C;
    // 0x80088600: nop

L_80088604:
    // 0x80088604: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80088608: lb          $t0, 0x523E($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X523E);
    // 0x8008860C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80088610: bne         $t0, $at, L_80088638
    if (ctx->r8 != ctx->r1) {
        // 0x80088614: nop
    
            goto L_80088638;
    }
    // 0x80088614: nop

    // 0x80088618: lui         $a1, 0x62
    ctx->r5 = S32(0X62 << 16);
    // 0x8008861C: lui         $a2, 0x62
    ctx->r6 = S32(0X62 << 16);
    // 0x80088620: addiu       $a2, $a2, 0x560
    ctx->r6 = ADD32(ctx->r6, 0X560);
    // 0x80088624: addiu       $a1, $a1, -0x56C0
    ctx->r5 = ADD32(ctx->r5, -0X56C0);
    // 0x80088628: jal         0x8001EB68
    // 0x8008862C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001EB68(rdram, ctx);
        goto after_17;
    // 0x8008862C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x80088630: b           L_8008867C
    // 0x80088634: nop

        goto L_8008867C;
    // 0x80088634: nop

L_80088638:
    // 0x80088638: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8008863C: lb          $t1, 0x523E($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X523E);
    // 0x80088640: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80088644: bne         $t1, $at, L_8008867C
    if (ctx->r9 != ctx->r1) {
        // 0x80088648: nop
    
            goto L_8008867C;
    }
    // 0x80088648: nop

    // 0x8008864C: lui         $a1, 0x62
    ctx->r5 = S32(0X62 << 16);
    // 0x80088650: lui         $a2, 0x62
    ctx->r6 = S32(0X62 << 16);
    // 0x80088654: addiu       $a2, $a2, 0x6CF0
    ctx->r6 = ADD32(ctx->r6, 0X6CF0);
    // 0x80088658: addiu       $a1, $a1, 0x560
    ctx->r5 = ADD32(ctx->r5, 0X560);
    // 0x8008865C: jal         0x8001EB68
    // 0x80088660: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001EB68(rdram, ctx);
        goto after_18;
    // 0x80088660: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_18:
    // 0x80088664: lui         $a1, 0x63
    ctx->r5 = S32(0X63 << 16);
    // 0x80088668: lui         $a2, 0x63
    ctx->r6 = S32(0X63 << 16);
    // 0x8008866C: addiu       $a2, $a2, -0x3D80
    ctx->r6 = ADD32(ctx->r6, -0X3D80);
    // 0x80088670: addiu       $a1, $a1, -0x74F0
    ctx->r5 = ADD32(ctx->r5, -0X74F0);
    // 0x80088674: jal         0x8001EB68
    // 0x80088678: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8001EB68(rdram, ctx);
        goto after_19;
    // 0x80088678: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_19:
L_8008867C:
    // 0x8008867C: b           L_80088684
    // 0x80088680: nop

        goto L_80088684;
    // 0x80088680: nop

L_80088684:
    // 0x80088684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008868C: jr          $ra
    // 0x80088690: nop

    return;
    // 0x80088690: nop

;}
RECOMP_FUNC void func_800D6684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D6684: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800D6688: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D668C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800D6690: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D6694: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800D6698: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D669C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D66A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D66A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D66A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D66AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D66B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D66B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D66B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D66BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D66C0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800D66C4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D66C8: nop

    // 0x800D66CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D66D0: nop

    // 0x800D66D4: bne         $t1, $zero, L_800D6734
    if (ctx->r9 != 0) {
        // 0x800D66D8: nop
    
            goto L_800D6734;
    }
    // 0x800D66D8: nop

    // 0x800D66DC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D66E0: nop

    // 0x800D66E4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D66E8: nop

    // 0x800D66EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D66F0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D66F4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800D66F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D66FC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D6700: nop

    // 0x800D6704: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800D6708: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800D670C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D6710: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D6714: nop

    // 0x800D6718: swc1        $f6, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f6.u32l;
    // 0x800D671C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D6720: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800D6724: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800D6728: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D672C: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x800D6730: sh          $t9, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r25;
L_800D6734:
    // 0x800D6734: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D6738: nop

    // 0x800D673C: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800D6740: nop

    // 0x800D6744: beq         $t3, $zero, L_800D69A4
    if (ctx->r11 == 0) {
        // 0x800D6748: nop
    
            goto L_800D69A4;
    }
    // 0x800D6748: nop

    // 0x800D674C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D6750: nop

    // 0x800D6754: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800D6758: nop

    // 0x800D675C: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x800D6760: sh          $t5, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r13;
    // 0x800D6764: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D6768: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800D676C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D6770: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800D6774: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800D6778: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D677C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800D6780: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D6784: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800D6788: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800D678C: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800D6790: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800D6794: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800D6798: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800D679C: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x800D67A0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x800D67A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800D67A8: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x800D67AC: jal         0x800158B4
    // 0x800D67B0: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    func_800158B4(rdram, ctx);
        goto after_0;
    // 0x800D67B0: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x800D67B4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800D67B8: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800D67BC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800D67C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D67C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D67C8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D67CC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800D67D0: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x800D67D4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800D67D8: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x800D67DC: nop

    // 0x800D67E0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D67E4: nop

    // 0x800D67E8: lh          $t2, 0xA8($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XA8);
    // 0x800D67EC: nop

    // 0x800D67F0: slti        $at, $t2, 0x2E
    ctx->r1 = SIGNED(ctx->r10) < 0X2E ? 1 : 0;
    // 0x800D67F4: bne         $at, $zero, L_800D6854
    if (ctx->r1 != 0) {
        // 0x800D67F8: nop
    
            goto L_800D6854;
    }
    // 0x800D67F8: nop

    // 0x800D67FC: slti        $at, $t2, 0xB5
    ctx->r1 = SIGNED(ctx->r10) < 0XB5 ? 1 : 0;
    // 0x800D6800: beq         $at, $zero, L_800D6854
    if (ctx->r1 == 0) {
        // 0x800D6804: nop
    
            goto L_800D6854;
    }
    // 0x800D6804: nop

    // 0x800D6808: jal         0x80014E80
    // 0x800D680C: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x800D680C: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_1:
    // 0x800D6810: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D6814: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x800D6818: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800D681C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800D6820: jal         0x80015538
    // 0x800D6824: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800D6824: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_2:
    // 0x800D6828: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800D682C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D6830: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800D6834: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D6838: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D683C: nop

    // 0x800D6840: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D6844: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x800D6848: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800D684C: b           L_800D691C
    // 0x800D6850: sh          $t4, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r12;
        goto L_800D691C;
    // 0x800D6850: sh          $t4, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r12;
L_800D6854:
    // 0x800D6854: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D6858: nop

    // 0x800D685C: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800D6860: nop

    // 0x800D6864: slti        $at, $t8, 0xB5
    ctx->r1 = SIGNED(ctx->r24) < 0XB5 ? 1 : 0;
    // 0x800D6868: bne         $at, $zero, L_800D68C8
    if (ctx->r1 != 0) {
        // 0x800D686C: nop
    
            goto L_800D68C8;
    }
    // 0x800D686C: nop

    // 0x800D6870: slti        $at, $t8, 0x13C
    ctx->r1 = SIGNED(ctx->r24) < 0X13C ? 1 : 0;
    // 0x800D6874: beq         $at, $zero, L_800D68C8
    if (ctx->r1 == 0) {
        // 0x800D6878: nop
    
            goto L_800D68C8;
    }
    // 0x800D6878: nop

    // 0x800D687C: jal         0x80014E80
    // 0x800D6880: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x800D6880: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_3:
    // 0x800D6884: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D6888: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x800D688C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D6890: lwc1        $f12, 0x50EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X50EC);
    // 0x800D6894: jal         0x80015538
    // 0x800D6898: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800D6898: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_4:
    // 0x800D689C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800D68A0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D68A4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800D68A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D68AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D68B0: nop

    // 0x800D68B4: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D68B8: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x800D68BC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800D68C0: b           L_800D691C
    // 0x800D68C4: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
        goto L_800D691C;
    // 0x800D68C4: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_800D68C8:
    // 0x800D68C8: jal         0x80014E80
    // 0x800D68CC: addiu       $a0, $zero, -0xF
    ctx->r4 = ADD32(0, -0XF);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x800D68CC: addiu       $a0, $zero, -0xF
    ctx->r4 = ADD32(0, -0XF);
    after_5:
    // 0x800D68D0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D68D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D68D8: lh          $t2, 0xA8($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XA8);
    // 0x800D68DC: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x800D68E0: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800D68E4: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D68E8: jal         0x80015538
    // 0x800D68EC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x800D68EC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_6:
    // 0x800D68F0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800D68F4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D68F8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800D68FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D6900: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D6904: nop

    // 0x800D6908: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D690C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x800D6910: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800D6914: sh          $t4, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r12;
    // 0x800D6918: nop

L_800D691C:
    // 0x800D691C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800D6920: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D6924: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800D6928: nop

    // 0x800D692C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800D6930: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x800D6934: jal         0x80014E80
    // 0x800D6938: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    Math_Random(rdram, ctx);
        goto after_7;
    // 0x800D6938: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    after_7:
    // 0x800D693C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D6940: addiu       $t7, $s0, 0x14
    ctx->r15 = ADD32(ctx->r16, 0X14);
    // 0x800D6944: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800D6948: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800D694C: jal         0x80015538
    // 0x800D6950: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x800D6950: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_8:
    // 0x800D6954: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D6958: nop

    // 0x800D695C: swc1        $f0, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f0.u32l;
    // 0x800D6960: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D6964: nop

    // 0x800D6968: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800D696C: nop

    // 0x800D6970: slti        $at, $t0, 0xB4
    ctx->r1 = SIGNED(ctx->r8) < 0XB4 ? 1 : 0;
    // 0x800D6974: bne         $at, $zero, L_800D698C
    if (ctx->r1 != 0) {
        // 0x800D6978: nop
    
            goto L_800D698C;
    }
    // 0x800D6978: nop

    // 0x800D697C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D6980: addiu       $t1, $zero, -0x5
    ctx->r9 = ADD32(0, -0X5);
    // 0x800D6984: b           L_800D6998
    // 0x800D6988: sh          $t1, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r9;
        goto L_800D6998;
    // 0x800D6988: sh          $t1, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r9;
L_800D698C:
    // 0x800D698C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D6990: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800D6994: sh          $t2, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r10;
L_800D6998:
    // 0x800D6998: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D699C: b           L_800D6AA8
    // 0x800D69A0: sh          $zero, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = 0;
        goto L_800D6AA8;
    // 0x800D69A0: sh          $zero, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = 0;
L_800D69A4:
    // 0x800D69A4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D69A8: nop

    // 0x800D69AC: lh          $t7, 0xAE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAE);
    // 0x800D69B0: nop

    // 0x800D69B4: beq         $t7, $zero, L_800D6A88
    if (ctx->r15 == 0) {
        // 0x800D69B8: nop
    
            goto L_800D6A88;
    }
    // 0x800D69B8: nop

    // 0x800D69BC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D69C0: nop

    // 0x800D69C4: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800D69C8: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D69CC: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x800D69D0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800D69D4: jal         0x80015538
    // 0x800D69D8: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x800D69D8: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_9:
    // 0x800D69DC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800D69E0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D69E4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800D69E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D69EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D69F0: nop

    // 0x800D69F4: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D69F8: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800D69FC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800D6A00: sh          $t3, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r11;
    // 0x800D6A04: nop

    // 0x800D6A08: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D6A0C: nop

    // 0x800D6A10: lh          $t4, 0xB0($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XB0);
    // 0x800D6A14: nop

    // 0x800D6A18: slti        $at, $t4, 0x6
    ctx->r1 = SIGNED(ctx->r12) < 0X6 ? 1 : 0;
    // 0x800D6A1C: bne         $at, $zero, L_800D6A30
    if (ctx->r1 != 0) {
        // 0x800D6A20: nop
    
            goto L_800D6A30;
    }
    // 0x800D6A20: nop

    // 0x800D6A24: slti        $at, $t4, 0x163
    ctx->r1 = SIGNED(ctx->r12) < 0X163 ? 1 : 0;
    // 0x800D6A28: bne         $at, $zero, L_800D6A74
    if (ctx->r1 != 0) {
        // 0x800D6A2C: nop
    
            goto L_800D6A74;
    }
    // 0x800D6A2C: nop

L_800D6A30:
    // 0x800D6A30: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D6A34: nop

    // 0x800D6A38: lh          $t7, 0xAC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAC);
    // 0x800D6A3C: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800D6A40: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800D6A44: jal         0x80015538
    // 0x800D6A48: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x800D6A48: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_10:
    // 0x800D6A4C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D6A50: nop

    // 0x800D6A54: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800D6A58: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D6A5C: nop

    // 0x800D6A60: lh          $t0, 0xAE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAE);
    // 0x800D6A64: nop

    // 0x800D6A68: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800D6A6C: b           L_800D6A80
    // 0x800D6A70: sh          $t1, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r9;
        goto L_800D6A80;
    // 0x800D6A70: sh          $t1, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r9;
L_800D6A74:
    // 0x800D6A74: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D6A78: nop

    // 0x800D6A7C: sh          $zero, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = 0;
L_800D6A80:
    // 0x800D6A80: b           L_800D6AA8
    // 0x800D6A84: nop

        goto L_800D6AA8;
    // 0x800D6A84: nop

L_800D6A88:
    // 0x800D6A88: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D6A8C: nop

    // 0x800D6A90: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x800D6A94: nop

    // 0x800D6A98: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x800D6A9C: nop

    // 0x800D6AA0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800D6AA4: swc1        $f16, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f16.u32l;
L_800D6AA8:
    // 0x800D6AA8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D6AAC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D6AB0: lwc1        $f18, 0xC($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800D6AB4: lwc1        $f7, 0x50F0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X50F0);
    // 0x800D6AB8: lwc1        $f6, 0x50F4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X50F4);
    // 0x800D6ABC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800D6AC0: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800D6AC4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800D6AC8: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    // 0x800D6ACC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D6AD0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D6AD4: lwc1        $f16, 0x10($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X10);
    // 0x800D6AD8: lwc1        $f5, 0x50F8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X50F8);
    // 0x800D6ADC: lwc1        $f4, 0x50FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X50FC);
    // 0x800D6AE0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800D6AE4: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800D6AE8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800D6AEC: swc1        $f8, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f8.u32l;
    // 0x800D6AF0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D6AF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D6AF8: lwc1        $f10, 0x14($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X14);
    // 0x800D6AFC: lwc1        $f19, 0x5100($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5100);
    // 0x800D6B00: lwc1        $f18, 0x5104($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5104);
    // 0x800D6B04: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800D6B08: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800D6B0C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800D6B10: swc1        $f6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f6.u32l;
    // 0x800D6B14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6B18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6B1C: jal         0x80029C40
    // 0x800D6B20: nop

    func_80029C40(rdram, ctx);
        goto after_11;
    // 0x800D6B20: nop

    after_11:
    // 0x800D6B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6B2C: jal         0x80029D04
    // 0x800D6B30: nop

    func_80029D04(rdram, ctx);
        goto after_12;
    // 0x800D6B30: nop

    after_12:
    // 0x800D6B34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D6B38: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D6B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6B44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800D6B48: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800D6B4C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D6B50: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800D6B54: jal         0x80029018
    // 0x800D6B58: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_13;
    // 0x800D6B58: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x800D6B5C: beq         $v0, $zero, L_800D6BAC
    if (ctx->r2 == 0) {
        // 0x800D6B60: nop
    
            goto L_800D6BAC;
    }
    // 0x800D6B60: nop

    // 0x800D6B64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D6B68: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D6B6C: nop

    // 0x800D6B70: swc1        $f16, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f16.u32l;
    // 0x800D6B74: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D6B78: nop

    // 0x800D6B7C: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800D6B80: nop

    // 0x800D6B84: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x800D6B88: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D6B8C: nop

    // 0x800D6B90: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x800D6B94: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D6B98: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800D6B9C: sh          $t9, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r25;
    // 0x800D6BA0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D6BA4: b           L_800D6BF4
    // 0x800D6BA8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_800D6BF4;
    // 0x800D6BA8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800D6BAC:
    // 0x800D6BAC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D6BB0: nop

    // 0x800D6BB4: lh          $t4, 0xB6($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XB6);
    // 0x800D6BB8: nop

    // 0x800D6BBC: bne         $t4, $zero, L_800D6BDC
    if (ctx->r12 != 0) {
        // 0x800D6BC0: nop
    
            goto L_800D6BDC;
    }
    // 0x800D6BC0: nop

    // 0x800D6BC4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D6BC8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800D6BCC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800D6BD0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D6BD4: b           L_800D6BF4
    // 0x800D6BD8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_800D6BF4;
    // 0x800D6BD8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800D6BDC:
    // 0x800D6BDC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D6BE0: nop

    // 0x800D6BE4: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x800D6BE8: nop

    // 0x800D6BEC: addiu       $t9, $t1, -0x1
    ctx->r25 = ADD32(ctx->r9, -0X1);
    // 0x800D6BF0: sh          $t9, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r25;
L_800D6BF4:
    // 0x800D6BF4: b           L_800D6BFC
    // 0x800D6BF8: nop

        goto L_800D6BFC;
    // 0x800D6BF8: nop

L_800D6BFC:
    // 0x800D6BFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6C00: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800D6C04: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800D6C08: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800D6C0C: jr          $ra
    // 0x800D6C10: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800D6C10: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800CA9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA9F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CA9FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CAA00: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800CAA04: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800CAA08: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CAA0C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800CAA10: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800CAA14: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800CAA18: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800CAA1C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CAA20: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800CAA24: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800CAA28: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CAA2C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800CAA30: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CAA34: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800CAA38: addiu       $a1, $a1, 0x3FE8
    ctx->r5 = ADD32(ctx->r5, 0X3FE8);
    // 0x800CAA3C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CAA40: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800CAA44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CAA48: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CAA4C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800CAA50: jal         0x80027464
    // 0x800CAA54: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800CAA54: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800CAA58: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800CAA5C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800CAA60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CAA64: beq         $t1, $at, L_800CAA7C
    if (ctx->r9 == ctx->r1) {
        // 0x800CAA68: nop
    
            goto L_800CAA7C;
    }
    // 0x800CAA68: nop

    // 0x800CAA6C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800CAA70: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CAA74: jal         0x80027B34
    // 0x800CAA78: addiu       $a1, $a1, 0x4E30
    ctx->r5 = ADD32(ctx->r5, 0X4E30);
    func_80027B34(rdram, ctx);
        goto after_1;
    // 0x800CAA78: addiu       $a1, $a1, 0x4E30
    ctx->r5 = ADD32(ctx->r5, 0X4E30);
    after_1:
L_800CAA7C:
    // 0x800CAA7C: b           L_800CAA84
    // 0x800CAA80: nop

        goto L_800CAA84;
    // 0x800CAA80: nop

L_800CAA84:
    // 0x800CAA84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CAA88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CAA8C: jr          $ra
    // 0x800CAA90: nop

    return;
    // 0x800CAA90: nop

;}
RECOMP_FUNC void func_800CA55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA55C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA564: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CA568: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CA56C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CA570: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CA574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA578: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CA57C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA580: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CA584: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CA588: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800CA58C: nop

    // 0x800CA590: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800CA594: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x800CA598: beq         $at, $zero, L_800CA61C
    if (ctx->r1 == 0) {
        // 0x800CA59C: nop
    
            goto L_800CA61C;
    }
    // 0x800CA59C: nop

    // 0x800CA5A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CA5A4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CA5A8: addu        $at, $at, $t9
    gpr jr_addend_800CA5B4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CA5AC: lw          $t9, 0x4F98($at)
    ctx->r25 = ADD32(ctx->r1, 0X4F98);
    // 0x800CA5B0: nop

    // 0x800CA5B4: jr          $t9
    // 0x800CA5B8: nop

    switch (jr_addend_800CA5B4 >> 2) {
        case 0: goto L_800CA5BC; break;
        case 1: goto L_800CA5CC; break;
        case 2: goto L_800CA5DC; break;
        case 3: goto L_800CA5EC; break;
        case 4: goto L_800CA5FC; break;
        case 5: goto L_800CA60C; break;
        default: switch_error(__func__, 0x800CA5B4, 0x80114F98);
    }
    // 0x800CA5B8: nop

L_800CA5BC:
    // 0x800CA5BC: jal         0x800C9FF8
    // 0x800CA5C0: nop

    func_800C9FF8(rdram, ctx);
        goto after_0;
    // 0x800CA5C0: nop

    after_0:
    // 0x800CA5C4: b           L_800CA624
    // 0x800CA5C8: nop

        goto L_800CA624;
    // 0x800CA5C8: nop

L_800CA5CC:
    // 0x800CA5CC: jal         0x800CA140
    // 0x800CA5D0: nop

    func_800CA140(rdram, ctx);
        goto after_1;
    // 0x800CA5D0: nop

    after_1:
    // 0x800CA5D4: b           L_800CA624
    // 0x800CA5D8: nop

        goto L_800CA624;
    // 0x800CA5D8: nop

L_800CA5DC:
    // 0x800CA5DC: jal         0x800CA2D4
    // 0x800CA5E0: nop

    func_800CA2D4(rdram, ctx);
        goto after_2;
    // 0x800CA5E0: nop

    after_2:
    // 0x800CA5E4: b           L_800CA624
    // 0x800CA5E8: nop

        goto L_800CA624;
    // 0x800CA5E8: nop

L_800CA5EC:
    // 0x800CA5EC: jal         0x800CA4EC
    // 0x800CA5F0: nop

    func_800CA4EC(rdram, ctx);
        goto after_3;
    // 0x800CA5F0: nop

    after_3:
    // 0x800CA5F4: b           L_800CA624
    // 0x800CA5F8: nop

        goto L_800CA624;
    // 0x800CA5F8: nop

L_800CA5FC:
    // 0x800CA5FC: jal         0x800CA4FC
    // 0x800CA600: nop

    func_800CA4FC(rdram, ctx);
        goto after_4;
    // 0x800CA600: nop

    after_4:
    // 0x800CA604: b           L_800CA624
    // 0x800CA608: nop

        goto L_800CA624;
    // 0x800CA608: nop

L_800CA60C:
    // 0x800CA60C: jal         0x800CA52C
    // 0x800CA610: nop

    func_800CA52C(rdram, ctx);
        goto after_5;
    // 0x800CA610: nop

    after_5:
    // 0x800CA614: b           L_800CA624
    // 0x800CA618: nop

        goto L_800CA624;
    // 0x800CA618: nop

L_800CA61C:
    // 0x800CA61C: b           L_800CA624
    // 0x800CA620: nop

        goto L_800CA624;
    // 0x800CA620: nop

L_800CA624:
    // 0x800CA624: b           L_800CA62C
    // 0x800CA628: nop

        goto L_800CA62C;
    // 0x800CA628: nop

L_800CA62C:
    // 0x800CA62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA634: jr          $ra
    // 0x800CA638: nop

    return;
    // 0x800CA638: nop

;}
RECOMP_FUNC void func_800BB270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BB270: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BB274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BB278: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BB27C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BB280: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BB284: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BB288: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB28C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BB290: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB294: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BB298: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BB29C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BB2A0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BB2A4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB2A8: nop

    // 0x800BB2AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BB2B0: nop

    // 0x800BB2B4: bne         $t1, $zero, L_800BB308
    if (ctx->r9 != 0) {
        // 0x800BB2B8: nop
    
            goto L_800BB308;
    }
    // 0x800BB2B8: nop

    // 0x800BB2BC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB2C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BB2C4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BB2C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BB2CC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB2D0: nop

    // 0x800BB2D4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BB2D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BB2DC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB2E0: nop

    // 0x800BB2E4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BB2E8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB2EC: addiu       $t6, $zero, 0x82
    ctx->r14 = ADD32(0, 0X82);
    // 0x800BB2F0: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
    // 0x800BB2F4: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800BB2F8: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800BB2FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB300: jal         0x800BBAD4
    // 0x800BB304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800BBAD4(rdram, ctx);
        goto after_0;
    // 0x800BB304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800BB308:
    // 0x800BB308: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB30C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB310: jal         0x80029C40
    // 0x800BB314: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800BB314: nop

    after_1:
    // 0x800BB318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB31C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB320: jal         0x80029D04
    // 0x800BB324: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800BB324: nop

    after_2:
    // 0x800BB328: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB32C: nop

    // 0x800BB330: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800BB334: nop

    // 0x800BB338: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800BB33C: sh          $t0, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r8;
    // 0x800BB340: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB344: nop

    // 0x800BB348: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x800BB34C: nop

    // 0x800BB350: bgtz        $t2, L_800BB370
    if (SIGNED(ctx->r10) > 0) {
        // 0x800BB354: nop
    
            goto L_800BB370;
    }
    // 0x800BB354: nop

    // 0x800BB358: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB35C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800BB360: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800BB364: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB368: nop

    // 0x800BB36C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800BB370:
    // 0x800BB370: b           L_800BB378
    // 0x800BB374: nop

        goto L_800BB378;
    // 0x800BB374: nop

L_800BB378:
    // 0x800BB378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BB37C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BB380: jr          $ra
    // 0x800BB384: nop

    return;
    // 0x800BB384: nop

;}
RECOMP_FUNC void func_800A72B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A72B0: jr          $ra
    // 0x800A72B4: nop

    return;
    // 0x800A72B4: nop

    // 0x800A72B8: jr          $ra
    // 0x800A72BC: nop

    return;
    // 0x800A72BC: nop

;}
RECOMP_FUNC void func_800EDAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDAE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800EDAE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800EDAE8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800EDAEC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800EDAF0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800EDAF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EDAF8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EDAFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EDB00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EDB04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EDB08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EDB0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EDB10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EDB14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EDB18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EDB1C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800EDB20: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDB24: nop

    // 0x800EDB28: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EDB2C: nop

    // 0x800EDB30: bne         $t1, $zero, L_800EDB9C
    if (ctx->r9 != 0) {
        // 0x800EDB34: nop
    
            goto L_800EDB9C;
    }
    // 0x800EDB34: nop

    // 0x800EDB38: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDB3C: nop

    // 0x800EDB40: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EDB44: nop

    // 0x800EDB48: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EDB4C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EDB50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EDB54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EDB58: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDB5C: nop

    // 0x800EDB60: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800EDB64: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800EDB68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EDB6C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDB70: nop

    // 0x800EDB74: swc1        $f6, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f6.u32l;
    // 0x800EDB78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDB7C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800EDB80: addiu       $t7, $t7, -0x7018
    ctx->r15 = ADD32(ctx->r15, -0X7018);
    // 0x800EDB84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDB88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800EDB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EDB90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EDB94: jal         0x8001C0EC
    // 0x800EDB98: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EDB98: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_0:
L_800EDB9C:
    // 0x800EDB9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDBA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDBA4: jal         0x80028FA0
    // 0x800EDBA8: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800EDBA8: nop

    after_1:
    // 0x800EDBAC: beq         $v0, $zero, L_800EDBC4
    if (ctx->r2 == 0) {
        // 0x800EDBB0: nop
    
            goto L_800EDBC4;
    }
    // 0x800EDBB0: nop

    // 0x800EDBB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDBB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDBBC: jal         0x80029B60
    // 0x800EDBC0: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800EDBC0: nop

    after_2:
L_800EDBC4:
    // 0x800EDBC4: jal         0x80014E80
    // 0x800EDBC8: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x800EDBC8: addiu       $a0, $zero, -0x6
    ctx->r4 = ADD32(0, -0X6);
    after_3:
    // 0x800EDBCC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800EDBD0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800EDBD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDBD8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800EDBDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDBE0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EDBE4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800EDBE8: jal         0x8002A8B4
    // 0x800EDBEC: nop

    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x800EDBEC: nop

    after_4:
    // 0x800EDBF0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDBF4: nop

    // 0x800EDBF8: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800EDBFC: nop

    // 0x800EDC00: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x800EDC04: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDC08: nop

    // 0x800EDC0C: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800EDC10: nop

    // 0x800EDC14: bne         $t1, $zero, L_800EDC94
    if (ctx->r9 != 0) {
        // 0x800EDC18: nop
    
            goto L_800EDC94;
    }
    // 0x800EDC18: nop

    // 0x800EDC1C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDC20: nop

    // 0x800EDC24: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800EDC28: nop

    // 0x800EDC2C: slti        $at, $t4, 0x1E
    ctx->r1 = SIGNED(ctx->r12) < 0X1E ? 1 : 0;
    // 0x800EDC30: beq         $at, $zero, L_800EDC68
    if (ctx->r1 == 0) {
        // 0x800EDC34: nop
    
            goto L_800EDC68;
    }
    // 0x800EDC34: nop

    // 0x800EDC38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EDC3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EDC40: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDC44: nop

    // 0x800EDC48: swc1        $f16, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f16.u32l;
    // 0x800EDC4C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDC50: nop

    // 0x800EDC54: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800EDC58: nop

    // 0x800EDC5C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800EDC60: b           L_800EDC8C
    // 0x800EDC64: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
        goto L_800EDC8C;
    // 0x800EDC64: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
L_800EDC68:
    // 0x800EDC68: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDC6C: nop

    // 0x800EDC70: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800EDC74: nop

    // 0x800EDC78: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800EDC7C: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
    // 0x800EDC80: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDC84: nop

    // 0x800EDC88: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
L_800EDC8C:
    // 0x800EDC8C: b           L_800EDCF8
    // 0x800EDC90: nop

        goto L_800EDCF8;
    // 0x800EDC90: nop

L_800EDC94:
    // 0x800EDC94: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDC98: nop

    // 0x800EDC9C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800EDCA0: nop

    // 0x800EDCA4: slti        $at, $t4, 0x1E
    ctx->r1 = SIGNED(ctx->r12) < 0X1E ? 1 : 0;
    // 0x800EDCA8: beq         $at, $zero, L_800EDCE0
    if (ctx->r1 == 0) {
        // 0x800EDCAC: nop
    
            goto L_800EDCE0;
    }
    // 0x800EDCAC: nop

    // 0x800EDCB0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800EDCB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EDCB8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDCBC: nop

    // 0x800EDCC0: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
    // 0x800EDCC4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDCC8: nop

    // 0x800EDCCC: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800EDCD0: nop

    // 0x800EDCD4: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x800EDCD8: b           L_800EDCF8
    // 0x800EDCDC: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
        goto L_800EDCF8;
    // 0x800EDCDC: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_800EDCE0:
    // 0x800EDCE0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDCE4: nop

    // 0x800EDCE8: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
    // 0x800EDCEC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDCF0: nop

    // 0x800EDCF4: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
L_800EDCF8:
    // 0x800EDCF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDCFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDD00: jal         0x80029C40
    // 0x800EDD04: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800EDD04: nop

    after_5:
    // 0x800EDD08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EDD0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EDD10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDD14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDD18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800EDD1C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800EDD20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EDD24: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EDD28: jal         0x80029018
    // 0x800EDD2C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800EDD2C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x800EDD30: beq         $v0, $zero, L_800EDD54
    if (ctx->r2 == 0) {
        // 0x800EDD34: nop
    
            goto L_800EDD54;
    }
    // 0x800EDD34: nop

    // 0x800EDD38: jal         0x800297DC
    // 0x800EDD3C: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800EDD3C: nop

    after_7:
    // 0x800EDD40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDD44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDD48: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800EDD4C: jal         0x80029824
    // 0x800EDD50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800EDD50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800EDD54:
    // 0x800EDD54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDD58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDD5C: jal         0x8002A1FC
    // 0x800EDD60: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x800EDD60: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_9:
    // 0x800EDD64: beq         $v0, $zero, L_800EDDC4
    if (ctx->r2 == 0) {
        // 0x800EDD68: nop
    
            goto L_800EDDC4;
    }
    // 0x800EDD68: nop

    // 0x800EDD6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EDD70: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDD74: nop

    // 0x800EDD78: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
    // 0x800EDD7C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDD80: nop

    // 0x800EDD84: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800EDD88: nop

    // 0x800EDD8C: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x800EDD90: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDD94: nop

    // 0x800EDD98: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x800EDD9C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EDDA0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDDA4: nop

    // 0x800EDDA8: swc1        $f10, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f10.u32l;
    // 0x800EDDAC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDDB0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800EDDB4: sh          $t2, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r10;
    // 0x800EDDB8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800EDDBC: nop

    // 0x800EDDC0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800EDDC4:
    // 0x800EDDC4: b           L_800EDDCC
    // 0x800EDDC8: nop

        goto L_800EDDCC;
    // 0x800EDDC8: nop

L_800EDDCC:
    // 0x800EDDCC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDDD0: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800EDDD4: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EDDD8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800EDDDC: jr          $ra
    // 0x800EDDE0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800EDDE0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800D4AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4AB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D4AB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D4ABC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D4AC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D4AC4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D4AC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D4ACC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4AD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D4AD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4AD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D4ADC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D4AE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D4AE4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D4AE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D4AEC: nop

    // 0x800D4AF0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D4AF4: nop

    // 0x800D4AF8: bne         $t1, $zero, L_800D4B70
    if (ctx->r9 != 0) {
        // 0x800D4AFC: nop
    
            goto L_800D4B70;
    }
    // 0x800D4AFC: nop

    // 0x800D4B00: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D4B04: nop

    // 0x800D4B08: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D4B0C: nop

    // 0x800D4B10: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D4B14: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D4B18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D4B1C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D4B20: nop

    // 0x800D4B24: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800D4B28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4B2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4B30: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D4B34: jal         0x80029EF8
    // 0x800D4B38: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800D4B38: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x800D4B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4B40: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800D4B44: addiu       $t6, $t6, -0x779C
    ctx->r14 = ADD32(ctx->r14, -0X779C);
    // 0x800D4B48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4B4C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800D4B50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D4B54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D4B58: jal         0x8001C0EC
    // 0x800D4B5C: addiu       $a3, $zero, 0xB3
    ctx->r7 = ADD32(0, 0XB3);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800D4B5C: addiu       $a3, $zero, 0xB3
    ctx->r7 = ADD32(0, 0XB3);
    after_1:
    // 0x800D4B60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4B64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4B68: jal         0x8001BBDC
    // 0x800D4B6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800D4B6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_800D4B70:
    // 0x800D4B70: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D4B74: nop

    // 0x800D4B78: lwc1        $f6, 0x28($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800D4B7C: nop

    // 0x800D4B80: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800D4B84: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D4B88: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D4B8C: nop

    // 0x800D4B90: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x800D4B94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4B98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4B9C: jal         0x80029C40
    // 0x800D4BA0: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800D4BA0: nop

    after_3:
    // 0x800D4BA4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D4BA8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D4BAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4BB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4BB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800D4BB8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D4BBC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D4BC0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D4BC4: jal         0x80029018
    // 0x800D4BC8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800D4BC8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x800D4BCC: beq         $v0, $zero, L_800D4BF8
    if (ctx->r2 == 0) {
        // 0x800D4BD0: nop
    
            goto L_800D4BF8;
    }
    // 0x800D4BD0: nop

    // 0x800D4BD4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D4BD8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D4BDC: nop

    // 0x800D4BE0: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x800D4BE4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D4BE8: nop

    // 0x800D4BEC: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800D4BF0: nop

    // 0x800D4BF4: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
L_800D4BF8:
    // 0x800D4BF8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800D4BFC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D4C00: nop

    // 0x800D4C04: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
    // 0x800D4C08: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D4C0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D4C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4C14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4C18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D4C1C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D4C20: lui         $a3, 0xC2F0
    ctx->r7 = S32(0XC2F0 << 16);
    // 0x800D4C24: jal         0x80029F58
    // 0x800D4C28: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x800D4C28: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x800D4C2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D4C30: bne         $v0, $at, L_800D4C74
    if (ctx->r2 != ctx->r1) {
        // 0x800D4C34: nop
    
            goto L_800D4C74;
    }
    // 0x800D4C34: nop

    // 0x800D4C38: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D4C3C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D4C40: nop

    // 0x800D4C44: swc1        $f10, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f10.u32l;
    // 0x800D4C48: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D4C4C: nop

    // 0x800D4C50: lwc1        $f16, 0x2C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800D4C54: nop

    // 0x800D4C58: swc1        $f16, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f16.u32l;
    // 0x800D4C5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D4C60: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800D4C64: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800D4C68: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D4C6C: nop

    // 0x800D4C70: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800D4C74:
    // 0x800D4C74: b           L_800D4C7C
    // 0x800D4C78: nop

        goto L_800D4C7C;
    // 0x800D4C78: nop

L_800D4C7C:
    // 0x800D4C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4C80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D4C84: jr          $ra
    // 0x800D4C88: nop

    return;
    // 0x800D4C88: nop

;}
RECOMP_FUNC void func_800EC534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC534: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EC538: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC53C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EC540: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EC544: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EC548: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EC54C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC550: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EC554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC558: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EC55C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EC560: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EC564: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800EC568: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EC56C: nop

    // 0x800EC570: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EC574: nop

    // 0x800EC578: bne         $t1, $zero, L_800EC5A4
    if (ctx->r9 != 0) {
        // 0x800EC57C: nop
    
            goto L_800EC5A4;
    }
    // 0x800EC57C: nop

    // 0x800EC580: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EC584: nop

    // 0x800EC588: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EC58C: nop

    // 0x800EC590: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EC594: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EC598: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800EC59C: nop

    // 0x800EC5A0: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_800EC5A4:
    // 0x800EC5A4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800EC5A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EC5AC: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800EC5B0: nop

    // 0x800EC5B4: bne         $t7, $at, L_800EC708
    if (ctx->r15 != ctx->r1) {
        // 0x800EC5B8: nop
    
            goto L_800EC708;
    }
    // 0x800EC5B8: nop

    // 0x800EC5BC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800EC5C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EC5C4: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800EC5C8: nop

    // 0x800EC5CC: bne         $t9, $at, L_800EC700
    if (ctx->r25 != ctx->r1) {
        // 0x800EC5D0: nop
    
            goto L_800EC700;
    }
    // 0x800EC5D0: nop

    // 0x800EC5D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EC5D8: nop

    // 0x800EC5DC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EC5E0: nop

    // 0x800EC5E4: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x800EC5E8: sb          $t3, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r11;
    // 0x800EC5EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC5F0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800EC5F4: addiu       $t4, $t4, -0x6680
    ctx->r12 = ADD32(ctx->r12, -0X6680);
    // 0x800EC5F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC5FC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800EC600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EC604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EC608: jal         0x8001C0EC
    // 0x800EC60C: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EC60C: addiu       $a3, $zero, 0x10A
    ctx->r7 = ADD32(0, 0X10A);
    after_0:
    // 0x800EC610: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC614: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EC618: addiu       $a3, $a3, -0x6654
    ctx->r7 = ADD32(ctx->r7, -0X6654);
    // 0x800EC61C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC620: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800EC624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EC628: jal         0x8001ABF4
    // 0x800EC62C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800EC62C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800EC630: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EC634: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800EC638: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EC63C: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800EC640: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x800EC644: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800EC648: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EC64C: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800EC650: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EC654: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x800EC658: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800EC65C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800EC660: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EC664: addiu       $a1, $a1, 0x44D4
    ctx->r5 = ADD32(ctx->r5, 0X44D4);
    // 0x800EC668: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800EC66C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EC670: jal         0x80027464
    // 0x800EC674: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x800EC674: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x800EC678: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800EC67C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800EC680: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EC684: beq         $t5, $at, L_800EC700
    if (ctx->r13 == ctx->r1) {
        // 0x800EC688: nop
    
            goto L_800EC700;
    }
    // 0x800EC688: nop

    // 0x800EC68C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800EC690: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800EC694: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EC698: jal         0x80026F10
    // 0x800EC69C: nop

    func_80026F10(rdram, ctx);
        goto after_3;
    // 0x800EC69C: nop

    after_3:
    // 0x800EC6A0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800EC6A4: addiu       $t6, $t6, -0x661C
    ctx->r14 = ADD32(ctx->r14, -0X661C);
    // 0x800EC6A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EC6AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800EC6B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EC6B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EC6B8: jal         0x8001C0EC
    // 0x800EC6BC: addiu       $a3, $zero, 0x10B
    ctx->r7 = ADD32(0, 0X10B);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800EC6BC: addiu       $a3, $zero, 0x10B
    ctx->r7 = ADD32(0, 0X10B);
    after_4:
    // 0x800EC6C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EC6C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EC6C8: addiu       $a3, $a3, -0x65C0
    ctx->r7 = ADD32(ctx->r7, -0X65C0);
    // 0x800EC6CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EC6D0: jal         0x8001ABF4
    // 0x800EC6D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800EC6D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x800EC6D8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800EC6DC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800EC6E0: nop

    // 0x800EC6E4: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
    // 0x800EC6E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EC6EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EC6F0: addiu       $a2, $zero, 0x35
    ctx->r6 = ADD32(0, 0X35);
    // 0x800EC6F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800EC6F8: jal         0x800175F0
    // 0x800EC6FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x800EC6FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
L_800EC700:
    // 0x800EC700: b           L_800EC724
    // 0x800EC704: nop

        goto L_800EC724;
    // 0x800EC704: nop

L_800EC708:
    // 0x800EC708: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC70C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC710: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EC714: addiu       $a3, $a3, -0x6654
    ctx->r7 = ADD32(ctx->r7, -0X6654);
    // 0x800EC718: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EC71C: jal         0x8001ABF4
    // 0x800EC720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x800EC720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_800EC724:
    // 0x800EC724: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800EC728: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800EC72C: lbu         $t1, 0x132($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X132);
    // 0x800EC730: nop

    // 0x800EC734: bne         $t1, $at, L_800EC79C
    if (ctx->r9 != ctx->r1) {
        // 0x800EC738: nop
    
            goto L_800EC79C;
    }
    // 0x800EC738: nop

    // 0x800EC73C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC740: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC744: jal         0x8001B4AC
    // 0x800EC748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x800EC748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800EC74C: beq         $v0, $zero, L_800EC79C
    if (ctx->r2 == 0) {
        // 0x800EC750: nop
    
            goto L_800EC79C;
    }
    // 0x800EC750: nop

    // 0x800EC754: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800EC758: nop

    // 0x800EC75C: lbu         $t0, 0x132($t3)
    ctx->r8 = MEM_BU(ctx->r11, 0X132);
    // 0x800EC760: nop

    // 0x800EC764: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x800EC768: sb          $t4, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r12;
    // 0x800EC76C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC770: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC774: jal         0x8001BBDC
    // 0x800EC778: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x800EC778: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x800EC77C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EC780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EC784: lh          $a0, 0xAA($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XAA);
    // 0x800EC788: jal         0x8001BBDC
    // 0x800EC78C: nop

    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x800EC78C: nop

    after_10:
    // 0x800EC790: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800EC794: addiu       $t5, $zero, 0x2A
    ctx->r13 = ADD32(0, 0X2A);
    // 0x800EC798: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
L_800EC79C:
    // 0x800EC79C: b           L_800EC7A4
    // 0x800EC7A0: nop

        goto L_800EC7A4;
    // 0x800EC7A0: nop

L_800EC7A4:
    // 0x800EC7A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC7A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EC7AC: jr          $ra
    // 0x800EC7B0: nop

    return;
    // 0x800EC7B0: nop

;}
RECOMP_FUNC void func_800A46E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A46E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A46E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A46EC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A46F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800A46F4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A46F8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A46FC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A4700: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A4704: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A4708: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A470C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A4710: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A4714: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A4718: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A471C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A4720: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A4724: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A4728: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A472C: addiu       $a1, $a1, 0x38C8
    ctx->r5 = ADD32(ctx->r5, 0X38C8);
    // 0x800A4730: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A4734: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A4738: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A473C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A4740: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A4744: jal         0x80027464
    // 0x800A4748: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A4748: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A474C: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x800A4750: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800A4754: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A4758: beq         $t1, $at, L_800A4870
    if (ctx->r9 == ctx->r1) {
        // 0x800A475C: nop
    
            goto L_800A4870;
    }
    // 0x800A475C: nop

    // 0x800A4760: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800A4764: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800A4768: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A476C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A4770: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A4774: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A4778: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A477C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A4780: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A4784: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A4788: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800A478C: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800A4790: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800A4794: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800A4798: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A479C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A47A0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A47A4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800A47A8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800A47AC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800A47B0: lwc1        $f20, 0xC($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800A47B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A47B8: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x800A47BC: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x800A47C0: nop

    // 0x800A47C4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800A47C8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A47CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A47D0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A47D4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A47D8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A47DC: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
    // 0x800A47E0: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800A47E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A47E8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800A47EC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800A47F0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800A47F4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800A47F8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800A47FC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800A4800: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800A4804: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x800A4808: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800A480C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A4810: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A4814: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A4818: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A481C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A4820: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A4824: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A4828: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x800A482C: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800A4830: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A4834: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A4838: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A483C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A4840: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A4844: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A4848: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A484C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A4850: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800A4854: addiu       $t8, $t8, 0x7028
    ctx->r24 = ADD32(ctx->r24, 0X7028);
    // 0x800A4858: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x800A485C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800A4860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A4864: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A4868: jal         0x8001C0EC
    // 0x800A486C: addiu       $a3, $zero, 0x5F
    ctx->r7 = ADD32(0, 0X5F);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800A486C: addiu       $a3, $zero, 0x5F
    ctx->r7 = ADD32(0, 0X5F);
    after_1:
L_800A4870:
    // 0x800A4870: b           L_800A4878
    // 0x800A4874: nop

        goto L_800A4878;
    // 0x800A4874: nop

L_800A4878:
    // 0x800A4878: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A487C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800A4880: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A4884: jr          $ra
    // 0x800A4888: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A4888: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
