#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800812D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800812D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800812D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800812DC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800812E0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800812E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800812E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800812EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800812F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800812F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800812F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800812FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80081300: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80081304: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80081308: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008130C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80081310: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80081314: addiu       $t0, $zero, 0x2CD
    ctx->r8 = ADD32(0, 0X2CD);
    // 0x80081318: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x8008131C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80081320: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80081324: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80081328: nop

    // 0x8008132C: swc1        $f4, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f4.u32l;
    // 0x80081330: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80081334: nop

    // 0x80081338: lwc1        $f20, 0x14($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X14);
    // 0x8008133C: nop

    // 0x80081340: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x80081344: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80081348: nop

    // 0x8008134C: swc1        $f20, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f20.u32l;
    // 0x80081350: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80081354: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x80081358: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x8008135C: jal         0x80014E80
    // 0x80081360: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80081360: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x80081364: addiu       $t7, $v0, 0x2
    ctx->r15 = ADD32(ctx->r2, 0X2);
    // 0x80081368: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8008136C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80081370: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80081374: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x80081378: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008137C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80081380: sh          $t9, 0xBE($t0)
    MEM_H(0XBE, ctx->r8) = ctx->r25;
    // 0x80081384: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80081388: nop

    // 0x8008138C: sh          $zero, 0xC0($t1)
    MEM_H(0XC0, ctx->r9) = 0;
    // 0x80081390: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80081394: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x80081398: sh          $t2, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r10;
    // 0x8008139C: b           L_800813A4
    // 0x800813A0: nop

        goto L_800813A4;
    // 0x800813A0: nop

L_800813A4:
    // 0x800813A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800813A8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800813AC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800813B0: jr          $ra
    // 0x800813B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800813B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80099F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099F80: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80099F84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80099F88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80099F8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80099F90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80099F94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80099F98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80099F9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80099FA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80099FA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80099FA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80099FAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80099FB0: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x80099FB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099FB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099FBC: jal         0x8002AA94
    // 0x80099FC0: nop

    func_8002AA94(rdram, ctx);
        goto after_0;
    // 0x80099FC0: nop

    after_0:
    // 0x80099FC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099FC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80099FD0: jal         0x80098864
    // 0x80099FD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098864(rdram, ctx);
        goto after_1;
    // 0x80099FD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80099FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099FDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099FE0: jal         0x8002A640
    // 0x80099FE4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A640(rdram, ctx);
        goto after_2;
    // 0x80099FE4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_2:
    // 0x80099FE8: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x80099FEC: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80099FF0: nop

    // 0x80099FF4: bne         $t0, $zero, L_8009A018
    if (ctx->r8 != 0) {
        // 0x80099FF8: nop
    
            goto L_8009A018;
    }
    // 0x80099FF8: nop

    // 0x80099FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A004: jal         0x8002A46C
    // 0x8009A008: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x8009A008: nop

    after_3:
    // 0x8009A00C: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A010: b           L_8009A040
    // 0x8009A014: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
        goto L_8009A040;
    // 0x8009A014: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
L_8009A018:
    // 0x8009A018: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x8009A01C: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A020: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8009A024: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8009A028: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8009A02C: jal         0x80015538
    // 0x8009A030: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8009A030: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x8009A034: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A038: nop

    // 0x8009A03C: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
L_8009A040:
    // 0x8009A040: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A044: nop

    // 0x8009A048: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8009A04C: nop

    // 0x8009A050: bne         $t7, $zero, L_8009A0F0
    if (ctx->r15 != 0) {
        // 0x8009A054: nop
    
            goto L_8009A0F0;
    }
    // 0x8009A054: nop

    // 0x8009A058: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x8009A05C: nop

    // 0x8009A060: bne         $t8, $zero, L_8009A0E8
    if (ctx->r24 != 0) {
        // 0x8009A064: nop
    
            goto L_8009A0E8;
    }
    // 0x8009A064: nop

    // 0x8009A068: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A06C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8009A070: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8009A074: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8009A078: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009A07C: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8009A080: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8009A084: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8009A088: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8009A08C: nop

    // 0x8009A090: bc1f        L_8009A0E8
    if (!c1cs) {
        // 0x8009A094: nop
    
            goto L_8009A0E8;
    }
    // 0x8009A094: nop

    // 0x8009A098: jal         0x80014E80
    // 0x8009A09C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x8009A09C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_5:
    // 0x8009A0A0: bne         $v0, $zero, L_8009A0E8
    if (ctx->r2 != 0) {
        // 0x8009A0A4: nop
    
            goto L_8009A0E8;
    }
    // 0x8009A0A4: nop

    // 0x8009A0A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A0AC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009A0B0: addiu       $t1, $t1, 0x6940
    ctx->r9 = ADD32(ctx->r9, 0X6940);
    // 0x8009A0B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A0B8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8009A0BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009A0C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009A0C4: jal         0x8001C0EC
    // 0x8009A0C8: addiu       $a3, $zero, 0xAB
    ctx->r7 = ADD32(0, 0XAB);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x8009A0C8: addiu       $a3, $zero, 0xAB
    ctx->r7 = ADD32(0, 0XAB);
    after_6:
    // 0x8009A0CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A0D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A0D4: jal         0x8001B754
    // 0x8009A0D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_7;
    // 0x8009A0D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8009A0DC: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A0E0: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x8009A0E4: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_8009A0E8:
    // 0x8009A0E8: b           L_8009A108
    // 0x8009A0EC: nop

        goto L_8009A108;
    // 0x8009A0EC: nop

L_8009A0F0:
    // 0x8009A0F0: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A0F4: nop

    // 0x8009A0F8: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x8009A0FC: nop

    // 0x8009A100: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8009A104: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_8009A108:
    // 0x8009A108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A10C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A110: jal         0x8001B62C
    // 0x8009A114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_8;
    // 0x8009A114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8009A118: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8009A11C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009A120: nop

    // 0x8009A124: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x8009A128: nop

    // 0x8009A12C: bc1f        L_8009A1E0
    if (!c1cs) {
        // 0x8009A130: nop
    
            goto L_8009A1E0;
    }
    // 0x8009A130: nop

    // 0x8009A134: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A138: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009A13C: lw          $a1, 0x1C($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1C);
    // 0x8009A140: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8009A144: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8009A148: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8009A14C: jal         0x800372A0
    // 0x8009A150: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_9;
    // 0x8009A150: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x8009A154: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A158: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8009A15C: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x8009A160: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x8009A164: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x8009A168: jal         0x80037200
    // 0x8009A16C: nop

    guTranslateF(rdram, ctx);
        goto after_10;
    // 0x8009A16C: nop

    after_10:
    // 0x8009A170: addiu       $t9, $sp, 0x74
    ctx->r25 = ADD32(ctx->r29, 0X74);
    // 0x8009A174: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8009A178: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8009A17C: jal         0x80036400
    // 0x8009A180: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    guMtxCatF(rdram, ctx);
        goto after_11;
    // 0x8009A180: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_11:
    // 0x8009A184: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x8009A188: addiu       $t1, $sp, 0x2C
    ctx->r9 = ADD32(ctx->r29, 0X2C);
    // 0x8009A18C: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x8009A190: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8009A194: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8009A198: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8009A19C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8009A1A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8009A1A4: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x8009A1A8: jal         0x80036360
    // 0x8009A1AC: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_12;
    // 0x8009A1AC: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    after_12:
    // 0x8009A1B0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009A1B4: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x8009A1B8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8009A1BC: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8009A1C0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009A1C4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8009A1C8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8009A1CC: addiu       $a1, $a1, 0x3454
    ctx->r5 = ADD32(ctx->r5, 0X3454);
    // 0x8009A1D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009A1D4: jal         0x80027464
    // 0x8009A1D8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_13;
    // 0x8009A1D8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x8009A1DC: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
L_8009A1E0:
    // 0x8009A1E0: b           L_8009A1E8
    // 0x8009A1E4: nop

        goto L_8009A1E8;
    // 0x8009A1E4: nop

L_8009A1E8:
    // 0x8009A1E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009A1EC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x8009A1F0: jr          $ra
    // 0x8009A1F4: nop

    return;
    // 0x8009A1F4: nop

;}
RECOMP_FUNC void func_800D8E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D8E40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D8E44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D8E48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D8E4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D8E50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D8E54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D8E58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D8E5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D8E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D8E64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D8E68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D8E6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D8E70: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800D8E74: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8E78: nop

    // 0x800D8E7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D8E80: nop

    // 0x800D8E84: bne         $t1, $zero, L_800D8EC0
    if (ctx->r9 != 0) {
        // 0x800D8E88: nop
    
            goto L_800D8EC0;
    }
    // 0x800D8E88: nop

    // 0x800D8E8C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8E90: nop

    // 0x800D8E94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D8E98: nop

    // 0x800D8E9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D8EA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D8EA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D8EA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D8EAC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D8EB0: addiu       $a3, $a3, -0x74C8
    ctx->r7 = ADD32(ctx->r7, -0X74C8);
    // 0x800D8EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D8EB8: jal         0x8001ABF4
    // 0x800D8EBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800D8EBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800D8EC0:
    // 0x800D8EC0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8EC4: nop

    // 0x800D8EC8: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800D8ECC: lh          $t7, 0xBC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBC);
    // 0x800D8ED0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800D8ED4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800D8ED8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D8EDC: jal         0x80015538
    // 0x800D8EE0: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800D8EE0: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x800D8EE4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800D8EE8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8EEC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800D8EF0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D8EF4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D8EF8: nop

    // 0x800D8EFC: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D8F00: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x800D8F04: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800D8F08: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800D8F0C: nop

    // 0x800D8F10: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8F14: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D8F18: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800D8F1C: lwc1        $f19, 0x5120($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5120);
    // 0x800D8F20: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800D8F24: lwc1        $f18, 0x5124($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5124);
    // 0x800D8F28: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x800D8F2C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x800D8F30: jal         0x80034970
    // 0x800D8F34: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x800D8F34: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x800D8F38: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8F3C: nop

    // 0x800D8F40: lh          $t2, 0xBA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBA);
    // 0x800D8F44: lh          $t6, 0xB6($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XB6);
    // 0x800D8F48: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800D8F4C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800D8F50: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D8F54: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800D8F58: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D8F5C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800D8F60: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x800D8F64: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8F68: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D8F6C: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x800D8F70: lwc1        $f17, 0x5128($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5128);
    // 0x800D8F74: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800D8F78: lwc1        $f16, 0x512C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X512C);
    // 0x800D8F7C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x800D8F80: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x800D8F84: jal         0x80036570
    // 0x800D8F88: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x800D8F88: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_3:
    // 0x800D8F8C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8F90: nop

    // 0x800D8F94: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x800D8F98: lh          $t0, 0xB8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XB8);
    // 0x800D8F9C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800D8FA0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800D8FA4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D8FA8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800D8FAC: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D8FB0: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800D8FB4: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x800D8FB8: b           L_800D8FC0
    // 0x800D8FBC: nop

        goto L_800D8FC0;
    // 0x800D8FBC: nop

L_800D8FC0:
    // 0x800D8FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D8FC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D8FC8: jr          $ra
    // 0x800D8FCC: nop

    return;
    // 0x800D8FCC: nop

;}
RECOMP_FUNC void func_800BB388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BB388: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BB38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BB390: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BB394: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BB398: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BB39C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BB3A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB3A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BB3A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB3AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BB3B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BB3B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BB3B8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BB3BC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB3C0: nop

    // 0x800BB3C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BB3C8: nop

    // 0x800BB3CC: bne         $t1, $zero, L_800BB41C
    if (ctx->r9 != 0) {
        // 0x800BB3D0: nop
    
            goto L_800BB41C;
    }
    // 0x800BB3D0: nop

    // 0x800BB3D4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB3D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BB3DC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BB3E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BB3E4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB3E8: nop

    // 0x800BB3EC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BB3F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BB3F4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB3F8: nop

    // 0x800BB3FC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BB400: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB404: nop

    // 0x800BB408: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800BB40C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB410: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB414: jal         0x8001BB34
    // 0x800BB418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800BB418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800BB41C:
    // 0x800BB41C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB420: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB424: jal         0x80029C40
    // 0x800BB428: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800BB428: nop

    after_1:
    // 0x800BB42C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB430: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB434: jal         0x80029D04
    // 0x800BB438: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800BB438: nop

    after_2:
    // 0x800BB43C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB440: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x800BB444: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800BB448: lwc1        $f14, 0x4($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800BB44C: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x800BB450: jal         0x8007EDF4
    // 0x800BB454: nop

    func_8007EDF4(rdram, ctx);
        goto after_3;
    // 0x800BB454: nop

    after_3:
    // 0x800BB458: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB45C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB460: jal         0x8002B114
    // 0x800BB464: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x800BB464: nop

    after_4:
    // 0x800BB468: b           L_800BB470
    // 0x800BB46C: nop

        goto L_800BB470;
    // 0x800BB46C: nop

L_800BB470:
    // 0x800BB470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BB474: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BB478: jr          $ra
    // 0x800BB47C: nop

    return;
    // 0x800BB47C: nop

;}
RECOMP_FUNC void func_800F4BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F4BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F4BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F4BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4BF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4BF8: jal         0x8002AA94
    // 0x800F4BFC: nop

    func_8002AA94(rdram, ctx);
        goto after_0;
    // 0x800F4BFC: nop

    after_0:
    // 0x800F4C00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F4C04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F4C08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F4C0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F4C10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4C14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F4C18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4C1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F4C20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F4C24: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800F4C28: nop

    // 0x800F4C2C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800F4C30: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x800F4C34: beq         $at, $zero, L_800F4CB8
    if (ctx->r1 == 0) {
        // 0x800F4C38: nop
    
            goto L_800F4CB8;
    }
    // 0x800F4C38: nop

    // 0x800F4C3C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F4C40: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F4C44: addu        $at, $at, $t9
    gpr jr_addend_800F4C50 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F4C48: lw          $t9, 0x56F0($at)
    ctx->r25 = ADD32(ctx->r1, 0X56F0);
    // 0x800F4C4C: nop

    // 0x800F4C50: jr          $t9
    // 0x800F4C54: nop

    switch (jr_addend_800F4C50 >> 2) {
        case 0: goto L_800F4C58; break;
        case 1: goto L_800F4C68; break;
        case 2: goto L_800F4C78; break;
        case 3: goto L_800F4C88; break;
        case 4: goto L_800F4C98; break;
        case 5: goto L_800F4CA8; break;
        default: switch_error(__func__, 0x800F4C50, 0x801156F0);
    }
    // 0x800F4C54: nop

L_800F4C58:
    // 0x800F4C58: jal         0x800F4164
    // 0x800F4C5C: nop

    func_800F4164(rdram, ctx);
        goto after_1;
    // 0x800F4C5C: nop

    after_1:
    // 0x800F4C60: b           L_800F4CC0
    // 0x800F4C64: nop

        goto L_800F4CC0;
    // 0x800F4C64: nop

L_800F4C68:
    // 0x800F4C68: jal         0x800F4378
    // 0x800F4C6C: nop

    func_800F4378(rdram, ctx);
        goto after_2;
    // 0x800F4C6C: nop

    after_2:
    // 0x800F4C70: b           L_800F4CC0
    // 0x800F4C74: nop

        goto L_800F4CC0;
    // 0x800F4C74: nop

L_800F4C78:
    // 0x800F4C78: jal         0x800F4534
    // 0x800F4C7C: nop

    func_800F4534(rdram, ctx);
        goto after_3;
    // 0x800F4C7C: nop

    after_3:
    // 0x800F4C80: b           L_800F4CC0
    // 0x800F4C84: nop

        goto L_800F4CC0;
    // 0x800F4C84: nop

L_800F4C88:
    // 0x800F4C88: jal         0x800F49A0
    // 0x800F4C8C: nop

    func_800F49A0(rdram, ctx);
        goto after_4;
    // 0x800F4C8C: nop

    after_4:
    // 0x800F4C90: b           L_800F4CC0
    // 0x800F4C94: nop

        goto L_800F4CC0;
    // 0x800F4C94: nop

L_800F4C98:
    // 0x800F4C98: jal         0x800F49D0
    // 0x800F4C9C: nop

    func_800F49D0(rdram, ctx);
        goto after_5;
    // 0x800F4C9C: nop

    after_5:
    // 0x800F4CA0: b           L_800F4CC0
    // 0x800F4CA4: nop

        goto L_800F4CC0;
    // 0x800F4CA4: nop

L_800F4CA8:
    // 0x800F4CA8: jal         0x800F4AD4
    // 0x800F4CAC: nop

    func_800F4AD4(rdram, ctx);
        goto after_6;
    // 0x800F4CAC: nop

    after_6:
    // 0x800F4CB0: b           L_800F4CC0
    // 0x800F4CB4: nop

        goto L_800F4CC0;
    // 0x800F4CB4: nop

L_800F4CB8:
    // 0x800F4CB8: b           L_800F4CC0
    // 0x800F4CBC: nop

        goto L_800F4CC0;
    // 0x800F4CBC: nop

L_800F4CC0:
    // 0x800F4CC0: b           L_800F4CC8
    // 0x800F4CC4: nop

        goto L_800F4CC8;
    // 0x800F4CC4: nop

L_800F4CC8:
    // 0x800F4CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F4CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F4CD0: jr          $ra
    // 0x800F4CD4: nop

    return;
    // 0x800F4CD4: nop

;}
RECOMP_FUNC void func_800C8858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C8858: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C885C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C8860: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C8864: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C8868: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C886C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800C8870: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C8874: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8878: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C887C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C8880: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C8884: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800C8888: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800C888C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C8890: beq         $s0, $at, L_800C88C4
    if (ctx->r16 == ctx->r1) {
        // 0x800C8894: nop
    
            goto L_800C88C4;
    }
    // 0x800C8894: nop

    // 0x800C8898: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C889C: beq         $s0, $at, L_800C88D4
    if (ctx->r16 == ctx->r1) {
        // 0x800C88A0: nop
    
            goto L_800C88D4;
    }
    // 0x800C88A0: nop

    // 0x800C88A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C88A8: beq         $s0, $at, L_800C88E4
    if (ctx->r16 == ctx->r1) {
        // 0x800C88AC: nop
    
            goto L_800C88E4;
    }
    // 0x800C88AC: nop

    // 0x800C88B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C88B4: beq         $s0, $at, L_800C88F4
    if (ctx->r16 == ctx->r1) {
        // 0x800C88B8: nop
    
            goto L_800C88F4;
    }
    // 0x800C88B8: nop

    // 0x800C88BC: b           L_800C8904
    // 0x800C88C0: nop

        goto L_800C8904;
    // 0x800C88C0: nop

L_800C88C4:
    // 0x800C88C4: jal         0x800C785C
    // 0x800C88C8: nop

    func_800C785C(rdram, ctx);
        goto after_0;
    // 0x800C88C8: nop

    after_0:
    // 0x800C88CC: b           L_800C890C
    // 0x800C88D0: nop

        goto L_800C890C;
    // 0x800C88D0: nop

L_800C88D4:
    // 0x800C88D4: jal         0x800C7BD8
    // 0x800C88D8: nop

    func_800C7BD8(rdram, ctx);
        goto after_1;
    // 0x800C88D8: nop

    after_1:
    // 0x800C88DC: b           L_800C890C
    // 0x800C88E0: nop

        goto L_800C890C;
    // 0x800C88E0: nop

L_800C88E4:
    // 0x800C88E4: jal         0x800C7FE4
    // 0x800C88E8: nop

    func_800C7FE4(rdram, ctx);
        goto after_2;
    // 0x800C88E8: nop

    after_2:
    // 0x800C88EC: b           L_800C890C
    // 0x800C88F0: nop

        goto L_800C890C;
    // 0x800C88F0: nop

L_800C88F4:
    // 0x800C88F4: jal         0x800C8764
    // 0x800C88F8: nop

    func_800C8764(rdram, ctx);
        goto after_3;
    // 0x800C88F8: nop

    after_3:
    // 0x800C88FC: b           L_800C890C
    // 0x800C8900: nop

        goto L_800C890C;
    // 0x800C8900: nop

L_800C8904:
    // 0x800C8904: b           L_800C890C
    // 0x800C8908: nop

        goto L_800C890C;
    // 0x800C8908: nop

L_800C890C:
    // 0x800C890C: b           L_800C8914
    // 0x800C8910: nop

        goto L_800C8914;
    // 0x800C8910: nop

L_800C8914:
    // 0x800C8914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C8918: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C891C: jr          $ra
    // 0x800C8920: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C8920: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800B4898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4898: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B489C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B48A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B48A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B48A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B48AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B48B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B48B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B48B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B48BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B48C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B48C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B48C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B48CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B48D0: nop

    // 0x800B48D4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B48D8: nop

    // 0x800B48DC: bne         $t1, $zero, L_800B4960
    if (ctx->r9 != 0) {
        // 0x800B48E0: nop
    
            goto L_800B4960;
    }
    // 0x800B48E0: nop

    // 0x800B48E4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B48E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B48EC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B48F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B48F4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B48F8: nop

    // 0x800B48FC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B4900: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B4904: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B4908: nop

    // 0x800B490C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B4910: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B4914: nop

    // 0x800B4918: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800B491C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4920: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4924: jal         0x8001BB34
    // 0x800B4928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800B4928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B492C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4930: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4934: jal         0x8001BBDC
    // 0x800B4938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800B4938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800B493C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4940: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B4944: addiu       $t7, $t7, 0x7928
    ctx->r15 = ADD32(ctx->r15, 0X7928);
    // 0x800B4948: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B494C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B4950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B4954: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800B4958: jal         0x8001C0EC
    // 0x800B495C: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800B495C: addiu       $a3, $zero, 0xB6
    ctx->r7 = ADD32(0, 0XB6);
    after_2:
L_800B4960:
    // 0x800B4960: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4964: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4968: jal         0x80029C40
    // 0x800B496C: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B496C: nop

    after_3:
    // 0x800B4970: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4974: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4978: jal         0x80029D04
    // 0x800B497C: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800B497C: nop

    after_4:
    // 0x800B4980: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4984: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4988: jal         0x8001B44C
    // 0x800B498C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x800B498C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800B4990: beq         $v0, $zero, L_800B49A8
    if (ctx->r2 == 0) {
        // 0x800B4994: nop
    
            goto L_800B49A8;
    }
    // 0x800B4994: nop

    // 0x800B4998: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B499C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B49A0: jal         0x8002B0E4
    // 0x800B49A4: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800B49A4: nop

    after_6:
L_800B49A8:
    // 0x800B49A8: b           L_800B49B0
    // 0x800B49AC: nop

        goto L_800B49B0;
    // 0x800B49AC: nop

L_800B49B0:
    // 0x800B49B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B49B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B49B8: jr          $ra
    // 0x800B49BC: nop

    return;
    // 0x800B49BC: nop

;}
RECOMP_FUNC void func_801002BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801002BC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x801002C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x801002C4: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x801002C8: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x801002CC: nop

    // 0x801002D0: beq         $t7, $zero, L_80100484
    if (ctx->r15 == 0) {
        // 0x801002D4: nop
    
            goto L_80100484;
    }
    // 0x801002D4: nop

    // 0x801002D8: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_801002DC:
    // 0x801002DC: lh          $t8, 0x6($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6);
    // 0x801002E0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x801002E4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x801002E8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801002EC: lh          $t0, 0x4738($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4738);
    // 0x801002F0: nop

    // 0x801002F4: bne         $t0, $zero, L_801003FC
    if (ctx->r8 != 0) {
        // 0x801002F8: nop
    
            goto L_801003FC;
    }
    // 0x801002F8: nop

    // 0x801002FC: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x80100300: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80100304: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80100308: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8010030C: lh          $t4, 0x4734($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4734);
    // 0x80100310: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80100314: lw          $t3, 0x4784($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4784);
    // 0x80100318: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8010031C: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80100320: addiu       $t8, $t8, -0x1D50
    ctx->r24 = ADD32(ctx->r24, -0X1D50);
    // 0x80100324: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80100328: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x8010032C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80100330: nop

    // 0x80100334: and         $t0, $t9, $t7
    ctx->r8 = ctx->r25 & ctx->r15;
    // 0x80100338: bne         $t7, $t0, L_801003E4
    if (ctx->r15 != ctx->r8) {
        // 0x8010033C: nop
    
            goto L_801003E4;
    }
    // 0x8010033C: nop

    // 0x80100340: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x80100344: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80100348: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8010034C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80100350: lh          $t3, 0x4734($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4734);
    // 0x80100354: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80100358: lw          $t4, 0x4784($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4784);
    // 0x8010035C: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x80100360: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80100364: lhu         $t8, 0x2($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X2);
    // 0x80100368: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8010036C: bne         $t8, $at, L_801003D4
    if (ctx->r24 != ctx->r1) {
        // 0x80100370: nop
    
            goto L_801003D4;
    }
    // 0x80100370: nop

    // 0x80100374: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80100378: sh          $zero, 0x4734($at)
    MEM_H(0X4734, ctx->r1) = 0;
    // 0x8010037C: sh          $zero, 0x4($sp)
    MEM_H(0X4, ctx->r29) = 0;
L_80100380:
    // 0x80100380: lh          $t9, 0x4($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X4);
    // 0x80100384: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80100388: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x8010038C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80100390: sh          $zero, 0x4738($at)
    MEM_H(0X4738, ctx->r1) = 0;
    // 0x80100394: lh          $t0, 0x4($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4);
    // 0x80100398: nop

    // 0x8010039C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801003A0: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x801003A4: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x801003A8: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x801003AC: bne         $at, $zero, L_80100380
    if (ctx->r1 != 0) {
        // 0x801003B0: sh          $t1, 0x4($sp)
        MEM_H(0X4, ctx->r29) = ctx->r9;
            goto L_80100380;
    }
    // 0x801003B0: sh          $t1, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r9;
    // 0x801003B4: lh          $v0, 0x6($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X6);
    // 0x801003B8: nop

    // 0x801003BC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x801003C0: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x801003C4: b           L_80100514
    // 0x801003C8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_80100514;
    // 0x801003C8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x801003CC: b           L_801003DC
    // 0x801003D0: nop

        goto L_801003DC;
    // 0x801003D0: nop

L_801003D4:
    // 0x801003D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801003D8: sh          $zero, 0x4730($at)
    MEM_H(0X4730, ctx->r1) = 0;
L_801003DC:
    // 0x801003DC: b           L_801003FC
    // 0x801003E0: nop

        goto L_801003FC;
    // 0x801003E0: nop

L_801003E4:
    // 0x801003E4: lh          $t6, 0x6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6);
    // 0x801003E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801003EC: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x801003F0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801003F4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801003F8: sh          $t5, 0x4738($at)
    MEM_H(0X4738, ctx->r1) = ctx->r13;
L_801003FC:
    // 0x801003FC: lh          $t9, 0x6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X6);
    // 0x80100400: nop

    // 0x80100404: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x80100408: sll         $t0, $t7, 16
    ctx->r8 = S32(ctx->r15 << 16);
    // 0x8010040C: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80100410: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x80100414: bne         $at, $zero, L_801002DC
    if (ctx->r1 != 0) {
        // 0x80100418: sh          $t7, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r15;
            goto L_801002DC;
    }
    // 0x80100418: sh          $t7, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r15;
    // 0x8010041C: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_80100420:
    // 0x80100420: lh          $t2, 0x6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6);
    // 0x80100424: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80100428: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8010042C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80100430: lh          $t4, 0x4738($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4738);
    // 0x80100434: nop

    // 0x80100438: bne         $t4, $zero, L_8010045C
    if (ctx->r12 != 0) {
        // 0x8010043C: nop
    
            goto L_8010045C;
    }
    // 0x8010043C: nop

    // 0x80100440: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80100444: lh          $t6, 0x4734($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4734);
    // 0x80100448: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010044C: addiu       $t5, $t6, 0x2
    ctx->r13 = ADD32(ctx->r14, 0X2);
    // 0x80100450: sh          $t5, 0x4734($at)
    MEM_H(0X4734, ctx->r1) = ctx->r13;
    // 0x80100454: b           L_80100514
    // 0x80100458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80100514;
    // 0x80100458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010045C:
    // 0x8010045C: lh          $t8, 0x6($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6);
    // 0x80100460: nop

    // 0x80100464: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80100468: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x8010046C: sra         $t0, $t7, 16
    ctx->r8 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80100470: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x80100474: bne         $at, $zero, L_80100420
    if (ctx->r1 != 0) {
        // 0x80100478: sh          $t9, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r25;
            goto L_80100420;
    }
    // 0x80100478: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x8010047C: b           L_80100504
    // 0x80100480: nop

        goto L_80100504;
    // 0x80100480: nop

L_80100484:
    // 0x80100484: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80100488: lh          $t1, 0x4730($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4730);
    // 0x8010048C: nop

    // 0x80100490: slti        $at, $t1, 0x1E
    ctx->r1 = SIGNED(ctx->r9) < 0X1E ? 1 : 0;
    // 0x80100494: beq         $at, $zero, L_801004B4
    if (ctx->r1 == 0) {
        // 0x80100498: nop
    
            goto L_801004B4;
    }
    // 0x80100498: nop

    // 0x8010049C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x801004A0: lh          $t2, 0x4730($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4730);
    // 0x801004A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801004A8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801004AC: b           L_80100504
    // 0x801004B0: sh          $t3, 0x4730($at)
    MEM_H(0X4730, ctx->r1) = ctx->r11;
        goto L_80100504;
    // 0x801004B0: sh          $t3, 0x4730($at)
    MEM_H(0X4730, ctx->r1) = ctx->r11;
L_801004B4:
    // 0x801004B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801004B8: sh          $zero, 0x4734($at)
    MEM_H(0X4734, ctx->r1) = 0;
    // 0x801004BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801004C0: sh          $zero, 0x4730($at)
    MEM_H(0X4730, ctx->r1) = 0;
    // 0x801004C4: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_801004C8:
    // 0x801004C8: lh          $t4, 0x6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6);
    // 0x801004CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801004D0: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x801004D4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801004D8: sh          $zero, 0x4738($at)
    MEM_H(0X4738, ctx->r1) = 0;
    // 0x801004DC: lh          $t5, 0x6($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6);
    // 0x801004E0: nop

    // 0x801004E4: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x801004E8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x801004EC: sra         $t7, $t9, 16
    ctx->r15 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801004F0: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x801004F4: bne         $at, $zero, L_801004C8
    if (ctx->r1 != 0) {
        // 0x801004F8: sh          $t8, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r24;
            goto L_801004C8;
    }
    // 0x801004F8: sh          $t8, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r24;
    // 0x801004FC: b           L_80100514
    // 0x80100500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80100514;
    // 0x80100500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80100504:
    // 0x80100504: b           L_80100514
    // 0x80100508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80100514;
    // 0x80100508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8010050C: b           L_80100514
    // 0x80100510: nop

        goto L_80100514;
    // 0x80100510: nop

L_80100514:
    // 0x80100514: jr          $ra
    // 0x80100518: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80100518: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F49A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F49A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F49A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F49A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F49AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F49B0: jal         0x8002B0E4
    // 0x800F49B4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800F49B4: nop

    after_0:
    // 0x800F49B8: b           L_800F49C0
    // 0x800F49BC: nop

        goto L_800F49C0;
    // 0x800F49BC: nop

L_800F49C0:
    // 0x800F49C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F49C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F49C8: jr          $ra
    // 0x800F49CC: nop

    return;
    // 0x800F49CC: nop

;}
RECOMP_FUNC void func_800DC188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC188: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DC18C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DC190: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DC194: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DC198: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DC19C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DC1A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC1A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DC1A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC1AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DC1B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DC1B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DC1B8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DC1BC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC1C0: nop

    // 0x800DC1C4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800DC1C8: nop

    // 0x800DC1CC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800DC1D0: sltiu       $at, $t2, 0x7
    ctx->r1 = ctx->r10 < 0X7 ? 1 : 0;
    // 0x800DC1D4: beq         $at, $zero, L_800DC268
    if (ctx->r1 == 0) {
        // 0x800DC1D8: nop
    
            goto L_800DC268;
    }
    // 0x800DC1D8: nop

    // 0x800DC1DC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800DC1E0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DC1E4: addu        $at, $at, $t2
    gpr jr_addend_800DC1F0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800DC1E8: lw          $t2, 0x5328($at)
    ctx->r10 = ADD32(ctx->r1, 0X5328);
    // 0x800DC1EC: nop

    // 0x800DC1F0: jr          $t2
    // 0x800DC1F4: nop

    switch (jr_addend_800DC1F0 >> 2) {
        case 0: goto L_800DC1F8; break;
        case 1: goto L_800DC208; break;
        case 2: goto L_800DC218; break;
        case 3: goto L_800DC228; break;
        case 4: goto L_800DC238; break;
        case 5: goto L_800DC248; break;
        case 6: goto L_800DC258; break;
        default: switch_error(__func__, 0x800DC1F0, 0x80115328);
    }
    // 0x800DC1F4: nop

L_800DC1F8:
    // 0x800DC1F8: jal         0x800DB840
    // 0x800DC1FC: nop

    func_800DB840(rdram, ctx);
        goto after_0;
    // 0x800DC1FC: nop

    after_0:
    // 0x800DC200: b           L_800DC270
    // 0x800DC204: nop

        goto L_800DC270;
    // 0x800DC204: nop

L_800DC208:
    // 0x800DC208: jal         0x800DB910
    // 0x800DC20C: nop

    func_800DB910(rdram, ctx);
        goto after_1;
    // 0x800DC20C: nop

    after_1:
    // 0x800DC210: b           L_800DC270
    // 0x800DC214: nop

        goto L_800DC270;
    // 0x800DC214: nop

L_800DC218:
    // 0x800DC218: jal         0x800DBA0C
    // 0x800DC21C: nop

    func_800DBA0C(rdram, ctx);
        goto after_2;
    // 0x800DC21C: nop

    after_2:
    // 0x800DC220: b           L_800DC270
    // 0x800DC224: nop

        goto L_800DC270;
    // 0x800DC224: nop

L_800DC228:
    // 0x800DC228: jal         0x800DBB78
    // 0x800DC22C: nop

    func_800DBB78(rdram, ctx);
        goto after_3;
    // 0x800DC22C: nop

    after_3:
    // 0x800DC230: b           L_800DC270
    // 0x800DC234: nop

        goto L_800DC270;
    // 0x800DC234: nop

L_800DC238:
    // 0x800DC238: jal         0x800DBBA8
    // 0x800DC23C: nop

    func_800DBBA8(rdram, ctx);
        goto after_4;
    // 0x800DC23C: nop

    after_4:
    // 0x800DC240: b           L_800DC270
    // 0x800DC244: nop

        goto L_800DC270;
    // 0x800DC244: nop

L_800DC248:
    // 0x800DC248: jal         0x800DBCFC
    // 0x800DC24C: nop

    func_800DBCFC(rdram, ctx);
        goto after_5;
    // 0x800DC24C: nop

    after_5:
    // 0x800DC250: b           L_800DC270
    // 0x800DC254: nop

        goto L_800DC270;
    // 0x800DC254: nop

L_800DC258:
    // 0x800DC258: jal         0x800DC07C
    // 0x800DC25C: nop

    func_800DC07C(rdram, ctx);
        goto after_6;
    // 0x800DC25C: nop

    after_6:
    // 0x800DC260: b           L_800DC270
    // 0x800DC264: nop

        goto L_800DC270;
    // 0x800DC264: nop

L_800DC268:
    // 0x800DC268: b           L_800DC270
    // 0x800DC26C: nop

        goto L_800DC270;
    // 0x800DC26C: nop

L_800DC270:
    // 0x800DC270: b           L_800DC278
    // 0x800DC274: nop

        goto L_800DC278;
    // 0x800DC274: nop

L_800DC278:
    // 0x800DC278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DC27C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DC280: jr          $ra
    // 0x800DC284: nop

    return;
    // 0x800DC284: nop

;}
RECOMP_FUNC void func_80088248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088248: blez        $a0, L_80088290
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8008824C: nop
    
            goto L_80088290;
    }
    // 0x8008824C: nop

    // 0x80088250: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80088254: lbu         $t6, 0x5243($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5243);
    // 0x80088258: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8008825C: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x80088260: sb          $t7, 0x5243($at)
    MEM_B(0X5243, ctx->r1) = ctx->r15;
    // 0x80088264: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80088268: lbu         $t8, 0x5243($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5243);
    // 0x8008826C: nop

    // 0x80088270: slti        $at, $t8, 0x63
    ctx->r1 = SIGNED(ctx->r24) < 0X63 ? 1 : 0;
    // 0x80088274: bne         $at, $zero, L_80088288
    if (ctx->r1 != 0) {
        // 0x80088278: nop
    
            goto L_80088288;
    }
    // 0x80088278: nop

    // 0x8008827C: addiu       $t9, $zero, 0x63
    ctx->r25 = ADD32(0, 0X63);
    // 0x80088280: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088284: sb          $t9, 0x5243($at)
    MEM_B(0X5243, ctx->r1) = ctx->r25;
L_80088288:
    // 0x80088288: b           L_800882B8
    // 0x8008828C: nop

        goto L_800882B8;
    // 0x8008828C: nop

L_80088290:
    // 0x80088290: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80088294: lbu         $t0, 0x5243($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X5243);
    // 0x80088298: nop

    // 0x8008829C: beq         $t0, $zero, L_800882B8
    if (ctx->r8 == 0) {
        // 0x800882A0: nop
    
            goto L_800882B8;
    }
    // 0x800882A0: nop

    // 0x800882A4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800882A8: lbu         $t1, 0x5243($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5243);
    // 0x800882AC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800882B0: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x800882B4: sb          $t2, 0x5243($at)
    MEM_B(0X5243, ctx->r1) = ctx->r10;
L_800882B8:
    // 0x800882B8: jr          $ra
    // 0x800882BC: nop

    return;
    // 0x800882BC: nop

    // 0x800882C0: jr          $ra
    // 0x800882C4: nop

    return;
    // 0x800882C4: nop

;}
RECOMP_FUNC void func_80090D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090D84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090D88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090D8C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090D90: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090D94: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090D98: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090D9C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090DA0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090DA4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090DA8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090DAC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090DB0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090DB4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090DB8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090DBC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090DC0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090DC4: addiu       $a1, $a1, 0x14BC
    ctx->r5 = ADD32(ctx->r5, 0X14BC);
    // 0x80090DC8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090DCC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090DD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090DD4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090DD8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090DDC: jal         0x80027464
    // 0x80090DE0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090DE0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090DE4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090DE8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090DEC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090DF0: addiu       $a3, $a3, 0x2518
    ctx->r7 = ADD32(ctx->r7, 0X2518);
    // 0x80090DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80090DF8: jal         0x8001ABF4
    // 0x80090DFC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80090DFC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80090E00: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090E04: addiu       $a3, $a3, 0x2518
    ctx->r7 = ADD32(ctx->r7, 0X2518);
    // 0x80090E08: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090E0C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80090E10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80090E14: jal         0x8001ABF4
    // 0x80090E18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80090E18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80090E1C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090E20: addiu       $a3, $a3, 0x2518
    ctx->r7 = ADD32(ctx->r7, 0X2518);
    // 0x80090E24: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090E28: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80090E2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80090E30: jal         0x8001ABF4
    // 0x80090E34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80090E34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80090E38: b           L_80090E40
    // 0x80090E3C: nop

        goto L_80090E40;
    // 0x80090E3C: nop

L_80090E40:
    // 0x80090E40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090E44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090E48: jr          $ra
    // 0x80090E4C: nop

    return;
    // 0x80090E4C: nop

;}
RECOMP_FUNC void func_800A98A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A98A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A98A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A98A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A98AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A98B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A98B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A98B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A98BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A98C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A98C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A98C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A98CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A98D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A98D4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800A98D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A98DC: nop

    // 0x800A98E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A98E4: nop

    // 0x800A98E8: bne         $t1, $zero, L_800A9968
    if (ctx->r9 != 0) {
        // 0x800A98EC: nop
    
            goto L_800A9968;
    }
    // 0x800A98EC: nop

    // 0x800A98F0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A98F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A98F8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A98FC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800A9900: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A9904: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9908: nop

    // 0x800A990C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A9910: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A9914: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9918: nop

    // 0x800A991C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A9920: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9924: addiu       $t6, $zero, 0x294
    ctx->r14 = ADD32(0, 0X294);
    // 0x800A9928: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800A992C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9930: nop

    // 0x800A9934: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800A9938: nop

    // 0x800A993C: bne         $t9, $zero, L_800A9968
    if (ctx->r25 != 0) {
        // 0x800A9940: nop
    
            goto L_800A9968;
    }
    // 0x800A9940: nop

    // 0x800A9944: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9948: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800A994C: addiu       $t0, $t0, 0x75D0
    ctx->r8 = ADD32(ctx->r8, 0X75D0);
    // 0x800A9950: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9954: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A9958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A995C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800A9960: jal         0x8001C0EC
    // 0x800A9964: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A9964: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
L_800A9968:
    // 0x800A9968: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A996C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9974: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x800A9978: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A997C: jal         0x800175F0
    // 0x800A9980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800A9980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x800A9984: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9988: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A998C: jal         0x80029C40
    // 0x800A9990: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A9990: nop

    after_2:
    // 0x800A9994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9998: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A999C: jal         0x80029D04
    // 0x800A99A0: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800A99A0: nop

    after_3:
    // 0x800A99A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A99A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A99AC: jal         0x80028FA0
    // 0x800A99B0: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800A99B0: nop

    after_4:
    // 0x800A99B4: beq         $v0, $zero, L_800A99CC
    if (ctx->r2 == 0) {
        // 0x800A99B8: nop
    
            goto L_800A99CC;
    }
    // 0x800A99B8: nop

    // 0x800A99BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A99C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A99C4: jal         0x80029B60
    // 0x800A99C8: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800A99C8: nop

    after_5:
L_800A99CC:
    // 0x800A99CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A99D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A99D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A99D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A99DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800A99E0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800A99E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A99E8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800A99EC: jal         0x80029018
    // 0x800A99F0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800A99F0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x800A99F4: beq         $v0, $zero, L_800A9A18
    if (ctx->r2 == 0) {
        // 0x800A99F8: nop
    
            goto L_800A9A18;
    }
    // 0x800A99F8: nop

    // 0x800A99FC: jal         0x800297DC
    // 0x800A9A00: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800A9A00: nop

    after_7:
    // 0x800A9A04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9A08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9A0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A9A10: jal         0x80029824
    // 0x800A9A14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800A9A14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800A9A18:
    // 0x800A9A18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9A1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9A20: jal         0x8002A1FC
    // 0x800A9A24: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x800A9A24: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_9:
    // 0x800A9A28: beq         $v0, $zero, L_800A9A78
    if (ctx->r2 == 0) {
        // 0x800A9A2C: nop
    
            goto L_800A9A78;
    }
    // 0x800A9A2C: nop

    // 0x800A9A30: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9A34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A9A38: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800A9A3C: nop

    // 0x800A9A40: bne         $t2, $at, L_800A9A60
    if (ctx->r10 != ctx->r1) {
        // 0x800A9A44: nop
    
            goto L_800A9A60;
    }
    // 0x800A9A44: nop

    // 0x800A9A48: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9A4C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800A9A50: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800A9A54: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9A58: b           L_800A9A78
    // 0x800A9A5C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_800A9A78;
    // 0x800A9A5C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800A9A60:
    // 0x800A9A60: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9A64: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x800A9A68: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800A9A6C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9A70: nop

    // 0x800A9A74: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800A9A78:
    // 0x800A9A78: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9A7C: nop

    // 0x800A9A80: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800A9A84: nop

    // 0x800A9A88: swc1        $f16, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f16.u32l;
    // 0x800A9A8C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9A90: nop

    // 0x800A9A94: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800A9A98: nop

    // 0x800A9A9C: addiu       $t2, $t1, -0xC
    ctx->r10 = ADD32(ctx->r9, -0XC);
    // 0x800A9AA0: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x800A9AA4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9AA8: nop

    // 0x800A9AAC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800A9AB0: nop

    // 0x800A9AB4: bgez        $t4, L_800A9AD4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800A9AB8: nop
    
            goto L_800A9AD4;
    }
    // 0x800A9AB8: nop

    // 0x800A9ABC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9AC0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800A9AC4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800A9AC8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A9ACC: nop

    // 0x800A9AD0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800A9AD4:
    // 0x800A9AD4: b           L_800A9ADC
    // 0x800A9AD8: nop

        goto L_800A9ADC;
    // 0x800A9AD8: nop

L_800A9ADC:
    // 0x800A9ADC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A9AE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A9AE4: jr          $ra
    // 0x800A9AE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A9AE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800CB950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB950: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CB954: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CB958: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800CB95C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800CB960: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CB964: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800CB968: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800CB96C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800CB970: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800CB974: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CB978: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800CB97C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800CB980: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CB984: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800CB988: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CB98C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800CB990: addiu       $a1, $a1, 0x4000
    ctx->r5 = ADD32(ctx->r5, 0X4000);
    // 0x800CB994: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CB998: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800CB99C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CB9A0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CB9A4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800CB9A8: jal         0x80027464
    // 0x800CB9AC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800CB9AC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800CB9B0: b           L_800CB9B8
    // 0x800CB9B4: nop

        goto L_800CB9B8;
    // 0x800CB9B4: nop

L_800CB9B8:
    // 0x800CB9B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CB9BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CB9C0: jr          $ra
    // 0x800CB9C4: nop

    return;
    // 0x800CB9C4: nop

;}
RECOMP_FUNC void func_800B9234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9234: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B9238: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B923C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B9240: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800B9244: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800B9248: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800B924C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B9250: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800B9254: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800B9258: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800B925C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800B9260: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B9264: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800B9268: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800B926C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B9270: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800B9274: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B9278: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800B927C: addiu       $a1, $a1, 0x3A6C
    ctx->r5 = ADD32(ctx->r5, 0X3A6C);
    // 0x800B9280: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B9284: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800B9288: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B928C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B9290: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800B9294: jal         0x80027464
    // 0x800B9298: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B9298: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800B929C: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x800B92A0: lb          $t1, 0x2F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2F);
    // 0x800B92A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B92A8: beq         $t1, $at, L_800B9530
    if (ctx->r9 == ctx->r1) {
        // 0x800B92AC: nop
    
            goto L_800B9530;
    }
    // 0x800B92AC: nop

    // 0x800B92B0: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x800B92B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B92B8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B92BC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B92C0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B92C4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B92C8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B92CC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B92D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B92D4: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800B92D8: lb          $t5, 0x2F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2F);
    // 0x800B92DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B92E0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800B92E4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B92E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B92EC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B92F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B92F4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800B92F8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B92FC: lb          $t8, 0x2F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2F);
    // 0x800B9300: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B9304: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B9308: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B930C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B9310: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B9314: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B9318: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B931C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800B9320: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x800B9324: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x800B9328: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B932C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800B9330: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B9334: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800B9338: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B933C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800B9340: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800B9344: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800B9348: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x800B934C: lb          $t2, 0x2F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2F);
    // 0x800B9350: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9354: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800B9358: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800B935C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B9360: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800B9364: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B9368: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B936C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800B9370: sh          $t3, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r11;
    // 0x800B9374: lb          $t7, 0x2F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2F);
    // 0x800B9378: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B937C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800B9380: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B9384: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800B9388: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B938C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800B9390: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800B9394: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x800B9398: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x800B939C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800B93A0: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x800B93A4: nop

    // 0x800B93A8: lh          $t0, 0xA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA);
    // 0x800B93AC: nop

    // 0x800B93B0: beq         $t0, $zero, L_800B93E8
    if (ctx->r8 == 0) {
        // 0x800B93B4: nop
    
            goto L_800B93E8;
    }
    // 0x800B93B4: nop

    // 0x800B93B8: lb          $t2, 0x2F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2F);
    // 0x800B93BC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800B93C0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800B93C4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B93C8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800B93CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800B93D0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B93D4: lh          $t1, 0xA($t6)
    ctx->r9 = MEM_H(ctx->r14, 0XA);
    // 0x800B93D8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800B93DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B93E0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800B93E4: sh          $t1, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r9;
L_800B93E8:
    // 0x800B93E8: lb          $t4, 0x2F($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X2F);
    // 0x800B93EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B93F0: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800B93F4: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800B93F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B93FC: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800B9400: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B9404: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800B9408: sh          $zero, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = 0;
    // 0x800B940C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800B9410: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x800B9414: nop

    // 0x800B9418: lh          $t8, 0xC($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XC);
    // 0x800B941C: nop

    // 0x800B9420: beq         $t8, $zero, L_800B9450
    if (ctx->r24 == 0) {
        // 0x800B9424: nop
    
            goto L_800B9450;
    }
    // 0x800B9424: nop

    // 0x800B9428: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x800B942C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9430: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x800B9434: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800B9438: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800B943C: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800B9440: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800B9444: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800B9448: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800B944C: sh          $t9, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r25;
L_800B9450:
    // 0x800B9450: lb          $t2, 0x2F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2F);
    // 0x800B9454: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x800B9458: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800B945C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800B9460: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B9464: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800B9468: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B946C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B9470: lwc1        $f6, 0x4C2C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4C2C);
    // 0x800B9474: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B9478: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800B947C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800B9480: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9484: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800B9488: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B948C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B9490: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800B9494: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800B9498: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x800B949C: swc1        $f6, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f6.u32l;
    // 0x800B94A0: lwc1        $f20, 0x14($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800B94A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B94A8: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x800B94AC: lb          $t8, 0x2F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2F);
    // 0x800B94B0: nop

    // 0x800B94B4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800B94B8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800B94BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B94C0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800B94C4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B94C8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B94CC: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x800B94D0: lb          $t6, 0x2F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2F);
    // 0x800B94D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B94D8: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x800B94DC: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x800B94E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800B94E4: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x800B94E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800B94EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800B94F0: addiu       $t9, $zero, 0x140
    ctx->r25 = ADD32(0, 0X140);
    // 0x800B94F4: sh          $t9, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r25;
    // 0x800B94F8: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800B94FC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B9500: addiu       $a3, $a3, 0x7C78
    ctx->r7 = ADD32(ctx->r7, 0X7C78);
    // 0x800B9504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B9508: jal         0x8001ABF4
    // 0x800B950C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B950C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800B9510: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800B9514: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B9518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B951C: jal         0x80019448
    // 0x800B9520: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x800B9520: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x800B9524: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800B9528: jal         0x8001BB04
    // 0x800B952C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_3;
    // 0x800B952C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_800B9530:
    // 0x800B9530: b           L_800B9538
    // 0x800B9534: nop

        goto L_800B9538;
    // 0x800B9534: nop

L_800B9538:
    // 0x800B9538: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B953C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B9540: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B9544: jr          $ra
    // 0x800B9548: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800B9548: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A08B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A08B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A08B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A08BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A08C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A08C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A08C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A08CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A08D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A08D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A08D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A08DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A08E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A08E4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A08E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A08EC: nop

    // 0x800A08F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A08F4: nop

    // 0x800A08F8: bne         $t1, $zero, L_800A093C
    if (ctx->r9 != 0) {
        // 0x800A08FC: nop
    
            goto L_800A093C;
    }
    // 0x800A08FC: nop

    // 0x800A0900: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A0904: nop

    // 0x800A0908: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A090C: nop

    // 0x800A0910: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A0914: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800A0918: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A091C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800A0920: addiu       $t5, $t5, 0x6938
    ctx->r13 = ADD32(ctx->r13, 0X6938);
    // 0x800A0924: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A0928: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A092C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A0930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A0934: jal         0x8001C0EC
    // 0x800A0938: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A0938: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    after_0:
L_800A093C:
    // 0x800A093C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800A0940: jal         0x800A0580
    // 0x800A0944: nop

    func_800A0580(rdram, ctx);
        goto after_1;
    // 0x800A0944: nop

    after_1:
    // 0x800A0948: b           L_800A0950
    // 0x800A094C: nop

        goto L_800A0950;
    // 0x800A094C: nop

L_800A0950:
    // 0x800A0950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0954: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A0958: jr          $ra
    // 0x800A095C: nop

    return;
    // 0x800A095C: nop

;}
RECOMP_FUNC void func_80069AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069AA8: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80069AAC: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x80069AB0: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80069AB4: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80069AB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069ABC: sb          $a0, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = ctx->r4;
    // 0x80069AC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069AC4: sb          $a1, -0x1C33($at)
    MEM_B(-0X1C33, ctx->r1) = ctx->r5;
    // 0x80069AC8: jr          $ra
    // 0x80069ACC: nop

    return;
    // 0x80069ACC: nop

    // 0x80069AD0: jr          $ra
    // 0x80069AD4: nop

    return;
    // 0x80069AD4: nop

;}
RECOMP_FUNC void Skybox_Format(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DE90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006DE94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DE98: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006DE9C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006DEA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DEA4: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x8006DEA8: sw          $t7, 0x75AC($at)
    MEM_W(0X75AC, ctx->r1) = ctx->r15;
    // 0x8006DEAC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006DEB0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8006DEB4: lb          $t9, 0x4($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X4);
    // 0x8006DEB8: nop

    // 0x8006DEBC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8006DEC0: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x8006DEC4: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x8006DEC8: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x8006DECC: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x8006DED0: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8006DED4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8006DED8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DEDC: sw          $t5, 0x75B4($at)
    MEM_W(0X75B4, ctx->r1) = ctx->r13;
    // 0x8006DEE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006DEE4: lbu         $t6, 0x792E($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X792E);
    // 0x8006DEE8: nop

    // 0x8006DEEC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006DEF0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8006DEF4: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8006DEF8: jal         0x8006C3D0
    // 0x8006DEFC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    Skybox_GetWidthHeight(rdram, ctx);
        goto after_0;
    // 0x8006DEFC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8006DF00: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8006DF04: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8006DF08: srl         $t0, $t9, 1
    ctx->r8 = S32(U32(ctx->r25) >> 1);
    // 0x8006DF0C: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x8006DF10: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006DF14: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006DF18: lw          $t3, 0x75B4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X75B4);
    // 0x8006DF1C: mflo        $t2
    ctx->r10 = lo;
    // 0x8006DF20: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8006DF24: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8006DF28: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8006DF2C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8006DF30: srl         $t6, $t5, 1
    ctx->r14 = S32(U32(ctx->r13) >> 1);
    // 0x8006DF34: addiu       $t7, $t6, 0x28
    ctx->r15 = ADD32(ctx->r14, 0X28);
    // 0x8006DF38: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006DF3C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006DF40: lw          $t0, 0x75B4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X75B4);
    // 0x8006DF44: mflo        $t8
    ctx->r24 = lo;
    // 0x8006DF48: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8006DF4C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8006DF50: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8006DF54: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8006DF58: beq         $t2, $zero, L_8006E070
    if (ctx->r10 == 0) {
        // 0x8006DF5C: nop
    
            goto L_8006E070;
    }
    // 0x8006DF5C: nop

L_8006DF60:
    // 0x8006DF60: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8006DF64: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8006DF68: srl         $t4, $t3, 1
    ctx->r12 = S32(U32(ctx->r11) >> 1);
    // 0x8006DF6C: beq         $t4, $zero, L_8006DFC4
    if (ctx->r12 == 0) {
        // 0x8006DF70: nop
    
            goto L_8006DFC4;
    }
    // 0x8006DF70: nop

L_8006DF74:
    // 0x8006DF74: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8006DF78: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8006DF7C: lb          $t6, 0x0($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X0);
    // 0x8006DF80: nop

    // 0x8006DF84: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8006DF88: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8006DF8C: nop

    // 0x8006DF90: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8006DF94: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8006DF98: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8006DF9C: nop

    // 0x8006DFA0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8006DFA4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8006DFA8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8006DFAC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8006DFB0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8006DFB4: srl         $t5, $t4, 1
    ctx->r13 = S32(U32(ctx->r12) >> 1);
    // 0x8006DFB8: sltu        $at, $t3, $t5
    ctx->r1 = ctx->r11 < ctx->r13 ? 1 : 0;
    // 0x8006DFBC: bne         $at, $zero, L_8006DF74
    if (ctx->r1 != 0) {
        // 0x8006DFC0: sw          $t3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r11;
            goto L_8006DF74;
    }
    // 0x8006DFC0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
L_8006DFC4:
    // 0x8006DFC4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8006DFC8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8006DFCC: srl         $t9, $t7, 1
    ctx->r25 = S32(U32(ctx->r15) >> 1);
    // 0x8006DFD0: subu        $t8, $t6, $t9
    ctx->r24 = SUB32(ctx->r14, ctx->r25);
    // 0x8006DFD4: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x8006DFD8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8006DFDC:
    // 0x8006DFDC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8006DFE0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8006DFE4: lb          $t1, 0x0($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X0);
    // 0x8006DFE8: nop

    // 0x8006DFEC: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x8006DFF0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8006DFF4: nop

    // 0x8006DFF8: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x8006DFFC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8006E000: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8006E004: nop

    // 0x8006E008: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x8006E00C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8006E010: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006E014: nop

    // 0x8006E018: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x8006E01C: slti        $at, $t9, 0x28
    ctx->r1 = SIGNED(ctx->r25) < 0X28 ? 1 : 0;
    // 0x8006E020: bne         $at, $zero, L_8006DFDC
    if (ctx->r1 != 0) {
        // 0x8006E024: sw          $t9, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r25;
            goto L_8006DFDC;
    }
    // 0x8006E024: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8006E028: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8006E02C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8006E030: srl         $t1, $t0, 1
    ctx->r9 = S32(U32(ctx->r8) >> 1);
    // 0x8006E034: subu        $t2, $t8, $t1
    ctx->r10 = SUB32(ctx->r24, ctx->r9);
    // 0x8006E038: addiu       $t4, $t2, -0x28
    ctx->r12 = ADD32(ctx->r10, -0X28);
    // 0x8006E03C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8006E040: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8006E044: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8006E048: nop

    // 0x8006E04C: subu        $t7, $t3, $t5
    ctx->r15 = SUB32(ctx->r11, ctx->r13);
    // 0x8006E050: addiu       $t6, $t7, -0x50
    ctx->r14 = ADD32(ctx->r15, -0X50);
    // 0x8006E054: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8006E058: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E05C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8006E060: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8006E064: sltu        $at, $t0, $t8
    ctx->r1 = ctx->r8 < ctx->r24 ? 1 : 0;
    // 0x8006E068: bne         $at, $zero, L_8006DF60
    if (ctx->r1 != 0) {
        // 0x8006E06C: sw          $t0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r8;
            goto L_8006DF60;
    }
    // 0x8006E06C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_8006E070:
    // 0x8006E070: b           L_8006E078
    // 0x8006E074: nop

        goto L_8006E078;
    // 0x8006E074: nop

L_8006E078:
    // 0x8006E078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E07C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8006E080: jr          $ra
    // 0x8006E084: nop

    return;
    // 0x8006E084: nop

;}
RECOMP_FUNC void func_800799A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800799A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800799AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800799B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800799B4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800799B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800799BC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800799C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800799C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800799C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800799CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800799D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800799D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800799D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800799DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800799E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800799E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800799E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800799EC: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x800799F0: lwc1        $f9, -0x3630($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3630);
    // 0x800799F4: lwc1        $f8, -0x362C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X362C);
    // 0x800799F8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800799FC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80079A00: jal         0x80036570
    // 0x80079A04: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_0;
    // 0x80079A04: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80079A08: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80079A0C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80079A10: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80079A14: lwc1        $f5, -0x3628($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X3628);
    // 0x80079A18: lwc1        $f4, -0x3624($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3624);
    // 0x80079A1C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80079A20: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80079A24: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80079A28: jal         0x80034970
    // 0x80079A2C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80079A2C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_1:
    // 0x80079A30: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80079A34: nop

    // 0x80079A38: lwc1        $f8, 0x44($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80079A3C: nop

    // 0x80079A40: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80079A44: nop

    // 0x80079A48: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80079A4C: swc1        $f16, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f16.u32l;
    // 0x80079A50: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80079A54: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80079A58: lwc1        $f18, 0x40($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80079A5C: lwc1        $f7, -0x3620($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X3620);
    // 0x80079A60: lwc1        $f6, -0x361C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X361C);
    // 0x80079A64: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80079A68: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80079A6C: jal         0x80036570
    // 0x80079A70: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x80079A70: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_2:
    // 0x80079A74: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80079A78: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80079A7C: lwc1        $f10, 0x3C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80079A80: lwc1        $f19, -0x3618($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X3618);
    // 0x80079A84: lwc1        $f18, -0x3614($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3614);
    // 0x80079A88: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80079A8C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80079A90: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80079A94: jal         0x80036570
    // 0x80079A98: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80079A98: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_3:
    // 0x80079A9C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80079AA0: nop

    // 0x80079AA4: lwc1        $f6, 0x44($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80079AA8: nop

    // 0x80079AAC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80079AB0: nop

    // 0x80079AB4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80079AB8: swc1        $f10, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f10.u32l;
    // 0x80079ABC: b           L_80079AC4
    // 0x80079AC0: nop

        goto L_80079AC4;
    // 0x80079AC0: nop

L_80079AC4:
    // 0x80079AC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80079AC8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80079ACC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80079AD0: jr          $ra
    // 0x80079AD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80079AD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E3734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3734: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E3738: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E373C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E3740: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E3744: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E3748: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E374C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3750: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3754: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3758: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E375C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3760: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3764: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E3768: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E376C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E3770: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E3774: lh          $s0, 0xB2($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XB2);
    // 0x800E3778: nop

    // 0x800E377C: beq         $s0, $at, L_800E37A4
    if (ctx->r16 == ctx->r1) {
        // 0x800E3780: nop
    
            goto L_800E37A4;
    }
    // 0x800E3780: nop

    // 0x800E3784: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E3788: beq         $s0, $at, L_800E3800
    if (ctx->r16 == ctx->r1) {
        // 0x800E378C: nop
    
            goto L_800E3800;
    }
    // 0x800E378C: nop

    // 0x800E3790: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800E3794: beq         $s0, $at, L_800E385C
    if (ctx->r16 == ctx->r1) {
        // 0x800E3798: nop
    
            goto L_800E385C;
    }
    // 0x800E3798: nop

    // 0x800E379C: b           L_800E38B8
    // 0x800E37A0: nop

        goto L_800E38B8;
    // 0x800E37A0: nop

L_800E37A4:
    // 0x800E37A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E37A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E37AC: lh          $s0, 0xA4($t1)
    ctx->r16 = MEM_H(ctx->r9, 0XA4);
    // 0x800E37B0: nop

    // 0x800E37B4: beq         $s0, $at, L_800E37D0
    if (ctx->r16 == ctx->r1) {
        // 0x800E37B8: nop
    
            goto L_800E37D0;
    }
    // 0x800E37B8: nop

    // 0x800E37BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E37C0: beq         $s0, $at, L_800E37E0
    if (ctx->r16 == ctx->r1) {
        // 0x800E37C4: nop
    
            goto L_800E37E0;
    }
    // 0x800E37C4: nop

    // 0x800E37C8: b           L_800E37F0
    // 0x800E37CC: nop

        goto L_800E37F0;
    // 0x800E37CC: nop

L_800E37D0:
    // 0x800E37D0: jal         0x800E302C
    // 0x800E37D4: nop

    func_800E302C(rdram, ctx);
        goto after_0;
    // 0x800E37D4: nop

    after_0:
    // 0x800E37D8: b           L_800E37F8
    // 0x800E37DC: nop

        goto L_800E37F8;
    // 0x800E37DC: nop

L_800E37E0:
    // 0x800E37E0: jal         0x800E31E4
    // 0x800E37E4: nop

    func_800E31E4(rdram, ctx);
        goto after_1;
    // 0x800E37E4: nop

    after_1:
    // 0x800E37E8: b           L_800E37F8
    // 0x800E37EC: nop

        goto L_800E37F8;
    // 0x800E37EC: nop

L_800E37F0:
    // 0x800E37F0: b           L_800E37F8
    // 0x800E37F4: nop

        goto L_800E37F8;
    // 0x800E37F4: nop

L_800E37F8:
    // 0x800E37F8: b           L_800E38C0
    // 0x800E37FC: nop

        goto L_800E38C0;
    // 0x800E37FC: nop

L_800E3800:
    // 0x800E3800: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E3804: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E3808: lh          $s0, 0xA4($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XA4);
    // 0x800E380C: nop

    // 0x800E3810: beq         $s0, $at, L_800E382C
    if (ctx->r16 == ctx->r1) {
        // 0x800E3814: nop
    
            goto L_800E382C;
    }
    // 0x800E3814: nop

    // 0x800E3818: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E381C: beq         $s0, $at, L_800E383C
    if (ctx->r16 == ctx->r1) {
        // 0x800E3820: nop
    
            goto L_800E383C;
    }
    // 0x800E3820: nop

    // 0x800E3824: b           L_800E384C
    // 0x800E3828: nop

        goto L_800E384C;
    // 0x800E3828: nop

L_800E382C:
    // 0x800E382C: jal         0x800E3214
    // 0x800E3830: nop

    func_800E3214(rdram, ctx);
        goto after_2;
    // 0x800E3830: nop

    after_2:
    // 0x800E3834: b           L_800E3854
    // 0x800E3838: nop

        goto L_800E3854;
    // 0x800E3838: nop

L_800E383C:
    // 0x800E383C: jal         0x800E3474
    // 0x800E3840: nop

    func_800E3474(rdram, ctx);
        goto after_3;
    // 0x800E3840: nop

    after_3:
    // 0x800E3844: b           L_800E3854
    // 0x800E3848: nop

        goto L_800E3854;
    // 0x800E3848: nop

L_800E384C:
    // 0x800E384C: b           L_800E3854
    // 0x800E3850: nop

        goto L_800E3854;
    // 0x800E3850: nop

L_800E3854:
    // 0x800E3854: b           L_800E38C0
    // 0x800E3858: nop

        goto L_800E38C0;
    // 0x800E3858: nop

L_800E385C:
    // 0x800E385C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E3860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E3864: lh          $s0, 0xA4($t3)
    ctx->r16 = MEM_H(ctx->r11, 0XA4);
    // 0x800E3868: nop

    // 0x800E386C: beq         $s0, $at, L_800E3888
    if (ctx->r16 == ctx->r1) {
        // 0x800E3870: nop
    
            goto L_800E3888;
    }
    // 0x800E3870: nop

    // 0x800E3874: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E3878: beq         $s0, $at, L_800E3898
    if (ctx->r16 == ctx->r1) {
        // 0x800E387C: nop
    
            goto L_800E3898;
    }
    // 0x800E387C: nop

    // 0x800E3880: b           L_800E38A8
    // 0x800E3884: nop

        goto L_800E38A8;
    // 0x800E3884: nop

L_800E3888:
    // 0x800E3888: jal         0x800E34A4
    // 0x800E388C: nop

    func_800E34A4(rdram, ctx);
        goto after_4;
    // 0x800E388C: nop

    after_4:
    // 0x800E3890: b           L_800E38B0
    // 0x800E3894: nop

        goto L_800E38B0;
    // 0x800E3894: nop

L_800E3898:
    // 0x800E3898: jal         0x800E3704
    // 0x800E389C: nop

    func_800E3704(rdram, ctx);
        goto after_5;
    // 0x800E389C: nop

    after_5:
    // 0x800E38A0: b           L_800E38B0
    // 0x800E38A4: nop

        goto L_800E38B0;
    // 0x800E38A4: nop

L_800E38A8:
    // 0x800E38A8: b           L_800E38B0
    // 0x800E38AC: nop

        goto L_800E38B0;
    // 0x800E38AC: nop

L_800E38B0:
    // 0x800E38B0: b           L_800E38C0
    // 0x800E38B4: nop

        goto L_800E38C0;
    // 0x800E38B4: nop

L_800E38B8:
    // 0x800E38B8: b           L_800E38C0
    // 0x800E38BC: nop

        goto L_800E38C0;
    // 0x800E38BC: nop

L_800E38C0:
    // 0x800E38C0: b           L_800E38C8
    // 0x800E38C4: nop

        goto L_800E38C8;
    // 0x800E38C4: nop

L_800E38C8:
    // 0x800E38C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E38CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E38D0: jr          $ra
    // 0x800E38D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E38D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800CB25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB25C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CB260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CB264: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB268: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB26C: jal         0x8002B0E4
    // 0x800CB270: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800CB270: nop

    after_0:
    // 0x800CB274: b           L_800CB27C
    // 0x800CB278: nop

        goto L_800CB27C;
    // 0x800CB278: nop

L_800CB27C:
    // 0x800CB27C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CB280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CB284: jr          $ra
    // 0x800CB288: nop

    return;
    // 0x800CB288: nop

;}
RECOMP_FUNC void func_800A4178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A4178: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A417C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A4180: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A4184: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800A4188: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A418C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A4190: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A4194: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A4198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A419C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A41A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A41A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A41A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A41AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A41B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A41B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A41B8: nop

    // 0x800A41BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A41C0: nop

    // 0x800A41C4: bne         $t1, $zero, L_800A4258
    if (ctx->r9 != 0) {
        // 0x800A41C8: nop
    
            goto L_800A4258;
    }
    // 0x800A41C8: nop

    // 0x800A41CC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A41D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A41D4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A41D8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A41DC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A41E0: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800A41E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A41E8: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800A41EC: jal         0x80015538
    // 0x800A41F0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800A41F0: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x800A41F4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A41F8: nop

    // 0x800A41FC: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800A4200: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800A4204: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A4208: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A420C: nop

    // 0x800A4210: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
    // 0x800A4214: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A4218: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A421C: nop

    // 0x800A4220: swc1        $f8, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f8.u32l;
    // 0x800A4224: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A4228: addiu       $t9, $zero, 0x168
    ctx->r25 = ADD32(0, 0X168);
    // 0x800A422C: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800A4230: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A4234: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A4238: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A423C: nop

    // 0x800A4240: swc1        $f10, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f10.u32l;
    // 0x800A4244: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A4248: nop

    // 0x800A424C: lwc1        $f16, 0x54($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X54);
    // 0x800A4250: nop

    // 0x800A4254: swc1        $f16, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f16.u32l;
L_800A4258:
    // 0x800A4258: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A425C: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x800A4260: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800A4264: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A4268: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x800A426C: jal         0x80015538
    // 0x800A4270: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800A4270: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_1:
    // 0x800A4274: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800A4278: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A427C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800A4280: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A4284: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A4288: nop

    // 0x800A428C: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A4290: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x800A4294: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800A4298: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800A429C: nop

    // 0x800A42A0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A42A4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A42A8: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A42AC: lwc1        $f11, 0x4988($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4988);
    // 0x800A42B0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800A42B4: lwc1        $f10, 0x498C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X498C);
    // 0x800A42B8: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x800A42BC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800A42C0: jal         0x80034970
    // 0x800A42C4: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x800A42C4: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x800A42C8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800A42CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800A42D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A42D4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800A42D8: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
    // 0x800A42DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A42E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A42E4: jal         0x80029C40
    // 0x800A42E8: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800A42E8: nop

    after_3:
    // 0x800A42EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A42F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A42F4: jal         0x80029D04
    // 0x800A42F8: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800A42F8: nop

    after_4:
    // 0x800A42FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A4300: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800A4304: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A4308: lwc1        $f6, 0x28($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800A430C: nop

    // 0x800A4310: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x800A4314: nop

    // 0x800A4318: bc1f        L_800A4330
    if (!c1cs) {
        // 0x800A431C: nop
    
            goto L_800A4330;
    }
    // 0x800A431C: nop

    // 0x800A4320: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800A4324: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A4328: b           L_800A4380
    // 0x800A432C: swc1        $f10, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f10.u32l;
        goto L_800A4380;
    // 0x800A432C: swc1        $f10, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f10.u32l;
L_800A4330:
    // 0x800A4330: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A4334: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800A4338: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800A433C: lwc1        $f16, 0x28($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X28);
    // 0x800A4340: nop

    // 0x800A4344: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800A4348: nop

    // 0x800A434C: bc1f        L_800A4364
    if (!c1cs) {
        // 0x800A4350: nop
    
            goto L_800A4364;
    }
    // 0x800A4350: nop

    // 0x800A4354: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800A4358: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800A435C: b           L_800A4374
    // 0x800A4360: nop

        goto L_800A4374;
    // 0x800A4360: nop

L_800A4364:
    // 0x800A4364: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A4368: nop

    // 0x800A436C: lwc1        $f20, 0x28($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800A4370: nop

L_800A4374:
    // 0x800A4374: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A4378: nop

    // 0x800A437C: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
L_800A4380:
    // 0x800A4380: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A4384: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A4388: jal         0x8002A46C
    // 0x800A438C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_5;
    // 0x800A438C: nop

    after_5:
    // 0x800A4390: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A4394: nop

    // 0x800A4398: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x800A439C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A43A0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800A43A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A43A8: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800A43AC: nop

    // 0x800A43B0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800A43B4: nop

    // 0x800A43B8: bc1f        L_800A43CC
    if (!c1cs) {
        // 0x800A43BC: nop
    
            goto L_800A43CC;
    }
    // 0x800A43BC: nop

    // 0x800A43C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A43C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800A43C8: sb          $t7, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r15;
L_800A43CC:
    // 0x800A43CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A43D0: nop

    // 0x800A43D4: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800A43D8: lwc1        $f10, 0x54($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X54);
    // 0x800A43DC: nop

    // 0x800A43E0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800A43E4: nop

    // 0x800A43E8: bc1f        L_800A4418
    if (!c1cs) {
        // 0x800A43EC: nop
    
            goto L_800A4418;
    }
    // 0x800A43EC: nop

    // 0x800A43F0: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x800A43F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A43F8: bne         $t0, $at, L_800A4418
    if (ctx->r8 != ctx->r1) {
        // 0x800A43FC: nop
    
            goto L_800A4418;
    }
    // 0x800A43FC: nop

    // 0x800A4400: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A4404: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A4408: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800A440C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A4410: nop

    // 0x800A4414: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800A4418:
    // 0x800A4418: b           L_800A4420
    // 0x800A441C: nop

        goto L_800A4420;
    // 0x800A441C: nop

L_800A4420:
    // 0x800A4420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A4424: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800A4428: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800A442C: jr          $ra
    // 0x800A4430: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A4430: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D4258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4258: jr          $ra
    // 0x800D425C: nop

    return;
    // 0x800D425C: nop

    // 0x800D4260: jr          $ra
    // 0x800D4264: nop

    return;
    // 0x800D4264: nop

;}
RECOMP_FUNC void func_8009E67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E67C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009E680: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009E684: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009E688: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009E68C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009E690: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009E694: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009E698: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009E69C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009E6A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009E6A4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009E6A8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009E6AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009E6B0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009E6B4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009E6B8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009E6BC: addiu       $a1, $a1, 0x3658
    ctx->r5 = ADD32(ctx->r5, 0X3658);
    // 0x8009E6C0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009E6C4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009E6C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009E6CC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009E6D0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009E6D4: jal         0x80027464
    // 0x8009E6D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009E6D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009E6DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009E6E0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009E6E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009E6E8: beq         $t1, $at, L_8009E7C8
    if (ctx->r9 == ctx->r1) {
        // 0x8009E6EC: nop
    
            goto L_8009E7C8;
    }
    // 0x8009E6EC: nop

    // 0x8009E6F0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8009E6F4: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x8009E6F8: nop

    // 0x8009E6FC: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x8009E700: nop

    // 0x8009E704: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8009E708: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8009E70C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8009E710: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8009E714: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x8009E718: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8009E71C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009E720: addiu       $t8, $t8, 0x6B60
    ctx->r24 = ADD32(ctx->r24, 0X6B60);
    // 0x8009E724: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009E728: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x8009E72C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009E730: jal         0x8001ABF4
    // 0x8009E734: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009E734: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009E738: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8009E73C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009E740: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x8009E744: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x8009E748: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009E74C: addiu       $t0, $t6, 0x1C
    ctx->r8 = ADD32(ctx->r14, 0X1C);
    // 0x8009E750: addiu       $t1, $t1, 0x6B60
    ctx->r9 = ADD32(ctx->r9, 0X6B60);
    // 0x8009E754: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009E758: addu        $a3, $t0, $t1
    ctx->r7 = ADD32(ctx->r8, ctx->r9);
    // 0x8009E75C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009E760: jal         0x8001ABF4
    // 0x8009E764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8009E764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8009E768: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8009E76C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8009E770: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8009E774: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8009E778: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009E77C: addiu       $t4, $t3, 0x38
    ctx->r12 = ADD32(ctx->r11, 0X38);
    // 0x8009E780: addiu       $t5, $t5, 0x6B60
    ctx->r13 = ADD32(ctx->r13, 0X6B60);
    // 0x8009E784: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009E788: addu        $a3, $t4, $t5
    ctx->r7 = ADD32(ctx->r12, ctx->r13);
    // 0x8009E78C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009E790: jal         0x8001ABF4
    // 0x8009E794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8009E794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8009E798: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8009E79C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8009E7A0: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8009E7A4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8009E7A8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009E7AC: addiu       $t9, $t8, 0x54
    ctx->r25 = ADD32(ctx->r24, 0X54);
    // 0x8009E7B0: addiu       $t6, $t6, 0x6B60
    ctx->r14 = ADD32(ctx->r14, 0X6B60);
    // 0x8009E7B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009E7B8: addu        $a3, $t9, $t6
    ctx->r7 = ADD32(ctx->r25, ctx->r14);
    // 0x8009E7BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009E7C0: jal         0x8001ABF4
    // 0x8009E7C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x8009E7C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_8009E7C8:
    // 0x8009E7C8: b           L_8009E7D0
    // 0x8009E7CC: nop

        goto L_8009E7D0;
    // 0x8009E7CC: nop

L_8009E7D0:
    // 0x8009E7D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E7D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009E7D8: jr          $ra
    // 0x8009E7DC: nop

    return;
    // 0x8009E7DC: nop

;}
RECOMP_FUNC void func_8009E20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E20C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009E210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E214: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009E218: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009E21C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009E220: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009E224: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E228: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009E22C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E230: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009E234: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009E238: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009E23C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009E240: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E244: nop

    // 0x8009E248: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009E24C: nop

    // 0x8009E250: bne         $t1, $zero, L_8009E264
    if (ctx->r9 != 0) {
        // 0x8009E254: nop
    
            goto L_8009E264;
    }
    // 0x8009E254: nop

    // 0x8009E258: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E25C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009E260: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_8009E264:
    // 0x8009E264: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8009E268: lb          $t4, 0x5246($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X5246);
    // 0x8009E26C: nop

    // 0x8009E270: beq         $t4, $zero, L_8009E2A4
    if (ctx->r12 == 0) {
        // 0x8009E274: nop
    
            goto L_8009E2A4;
    }
    // 0x8009E274: nop

    // 0x8009E278: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8009E27C: sb          $zero, 0x5246($at)
    MEM_B(0X5246, ctx->r1) = 0;
    // 0x8009E280: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E284: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8009E288: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x8009E28C: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x8009E290: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8009E294: lui         $at, 0x452F
    ctx->r1 = S32(0X452F << 16);
    // 0x8009E298: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009E29C: jal         0x8009D9BC
    // 0x8009E2A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009D9BC(rdram, ctx);
        goto after_0;
    // 0x8009E2A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
L_8009E2A4:
    // 0x8009E2A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8009E2A8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8009E2AC: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x8009E2B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009E2B4: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8009E2B8: nop

    // 0x8009E2BC: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8009E2C0: nop

    // 0x8009E2C4: bc1f        L_8009E2E4
    if (!c1cs) {
        // 0x8009E2C8: nop
    
            goto L_8009E2E4;
    }
    // 0x8009E2C8: nop

    // 0x8009E2CC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E2D0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8009E2D4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8009E2D8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E2DC: nop

    // 0x8009E2E0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8009E2E4:
    // 0x8009E2E4: b           L_8009E2EC
    // 0x8009E2E8: nop

        goto L_8009E2EC;
    // 0x8009E2E8: nop

L_8009E2EC:
    // 0x8009E2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E2F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009E2F4: jr          $ra
    // 0x8009E2F8: nop

    return;
    // 0x8009E2F8: nop

;}
RECOMP_FUNC void func_800D2D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2D64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D2D68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D2D6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D2D70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D2D74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D2D78: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D2D7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D2D80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2D84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D2D88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2D8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D2D90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D2D94: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800D2D98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D2D9C: bne         $t8, $at, L_800D2E14
    if (ctx->r24 != ctx->r1) {
        // 0x800D2DA0: nop
    
            goto L_800D2E14;
    }
    // 0x800D2DA0: nop

    // 0x800D2DA4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800D2DA8: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800D2DAC: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D2DB0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800D2DB4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D2DB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D2DBC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D2DC0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D2DC4: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800D2DC8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D2DCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D2DD0: beq         $s0, $at, L_800D2DEC
    if (ctx->r16 == ctx->r1) {
        // 0x800D2DD4: nop
    
            goto L_800D2DEC;
    }
    // 0x800D2DD4: nop

    // 0x800D2DD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D2DDC: beq         $s0, $at, L_800D2DFC
    if (ctx->r16 == ctx->r1) {
        // 0x800D2DE0: nop
    
            goto L_800D2DFC;
    }
    // 0x800D2DE0: nop

    // 0x800D2DE4: b           L_800D2E0C
    // 0x800D2DE8: nop

        goto L_800D2E0C;
    // 0x800D2DE8: nop

L_800D2DEC:
    // 0x800D2DEC: jal         0x800D2A04
    // 0x800D2DF0: nop

    func_800D2A04(rdram, ctx);
        goto after_0;
    // 0x800D2DF0: nop

    after_0:
    // 0x800D2DF4: b           L_800D2E14
    // 0x800D2DF8: nop

        goto L_800D2E14;
    // 0x800D2DF8: nop

L_800D2DFC:
    // 0x800D2DFC: jal         0x800D2D34
    // 0x800D2E00: nop

    func_800D2D34(rdram, ctx);
        goto after_1;
    // 0x800D2E00: nop

    after_1:
    // 0x800D2E04: b           L_800D2E14
    // 0x800D2E08: nop

        goto L_800D2E14;
    // 0x800D2E08: nop

L_800D2E0C:
    // 0x800D2E0C: b           L_800D2E14
    // 0x800D2E10: nop

        goto L_800D2E14;
    // 0x800D2E10: nop

L_800D2E14:
    // 0x800D2E14: b           L_800D2E1C
    // 0x800D2E18: nop

        goto L_800D2E1C;
    // 0x800D2E18: nop

L_800D2E1C:
    // 0x800D2E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2E20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D2E24: jr          $ra
    // 0x800D2E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D2E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800DDC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DDC5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DDC60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DDC64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DDC68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DDC6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DDC70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DDC74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DDC78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DDC7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DDC80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DDC84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DDC88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DDC8C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DDC90: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DDC94: nop

    // 0x800DDC98: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DDC9C: nop

    // 0x800DDCA0: bne         $t1, $zero, L_800DDD38
    if (ctx->r9 != 0) {
        // 0x800DDCA4: nop
    
            goto L_800DDD38;
    }
    // 0x800DDCA4: nop

    // 0x800DDCA8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DDCAC: nop

    // 0x800DDCB0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DDCB4: nop

    // 0x800DDCB8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DDCBC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DDCC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDCC4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DDCC8: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DDCCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDCD0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DDCD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DDCD8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800DDCDC: jal         0x8001C0EC
    // 0x800DDCE0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DDCE0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DDCE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDCE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDCEC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DDCF0: addiu       $a3, $a3, -0x6ED8
    ctx->r7 = ADD32(ctx->r7, -0X6ED8);
    // 0x800DDCF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DDCF8: jal         0x8001ABF4
    // 0x800DDCFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DDCFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DDD00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDD04: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DDD08: addiu       $a3, $a3, -0x6ED8
    ctx->r7 = ADD32(ctx->r7, -0X6ED8);
    // 0x800DDD0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDD10: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DDD14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DDD18: jal         0x8001ABF4
    // 0x800DDD1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DDD1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DDD20: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DDD24: nop

    // 0x800DDD28: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800DDD2C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DDD30: nop

    // 0x800DDD34: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
L_800DDD38:
    // 0x800DDD38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDD3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDD40: jal         0x80028FA0
    // 0x800DDD44: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800DDD44: nop

    after_3:
    // 0x800DDD48: beq         $v0, $zero, L_800DDD84
    if (ctx->r2 == 0) {
        // 0x800DDD4C: nop
    
            goto L_800DDD84;
    }
    // 0x800DDD4C: nop

    // 0x800DDD50: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DDD54: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800DDD58: lh          $t9, 0x106($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X106);
    // 0x800DDD5C: nop

    // 0x800DDD60: beq         $t9, $at, L_800DDD74
    if (ctx->r25 == ctx->r1) {
        // 0x800DDD64: nop
    
            goto L_800DDD74;
    }
    // 0x800DDD64: nop

    // 0x800DDD68: addiu       $at, $zero, 0xA3
    ctx->r1 = ADD32(0, 0XA3);
    // 0x800DDD6C: bne         $t9, $at, L_800DDD84
    if (ctx->r25 != ctx->r1) {
        // 0x800DDD70: nop
    
            goto L_800DDD84;
    }
    // 0x800DDD70: nop

L_800DDD74:
    // 0x800DDD74: jal         0x800E3EE4
    // 0x800DDD78: nop

    func_800E3EE4(rdram, ctx);
        goto after_4;
    // 0x800DDD78: nop

    after_4:
    // 0x800DDD7C: b           L_800DDDF8
    // 0x800DDD80: nop

        goto L_800DDDF8;
    // 0x800DDD80: nop

L_800DDD84:
    // 0x800DDD84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDD88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDD8C: jal         0x8002A46C
    // 0x800DDD90: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_5;
    // 0x800DDD90: nop

    after_5:
    // 0x800DDD94: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DDD98: nop

    // 0x800DDD9C: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x800DDDA0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800DDDA4: nop

    // 0x800DDDA8: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800DDDAC: nop

    // 0x800DDDB0: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
    // 0x800DDDB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDDB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDDBC: jal         0x8001B4AC
    // 0x800DDDC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x800DDDC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800DDDC4: beq         $v0, $zero, L_800DDDF0
    if (ctx->r2 == 0) {
        // 0x800DDDC8: nop
    
            goto L_800DDDF0;
    }
    // 0x800DDDC8: nop

    // 0x800DDDCC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DDDD0: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800DDDD4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800DDDD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DDDDC: nop

    // 0x800DDDE0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800DDDE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DDDE8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800DDDEC: sh          $t5, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r13;
L_800DDDF0:
    // 0x800DDDF0: b           L_800DDDF8
    // 0x800DDDF4: nop

        goto L_800DDDF8;
    // 0x800DDDF4: nop

L_800DDDF8:
    // 0x800DDDF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DDDFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DDE00: jr          $ra
    // 0x800DDE04: nop

    return;
    // 0x800DDE04: nop

;}
RECOMP_FUNC void func_800E5528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5528: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E552C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E5530: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E5534: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E5538: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E553C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5540: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5544: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E5548: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E554C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E5550: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E5554: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5558: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800E555C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5560: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5564: jal         0x8001B4AC
    // 0x800E5568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x800E5568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E556C: beq         $v0, $zero, L_800E56BC
    if (ctx->r2 == 0) {
        // 0x800E5570: nop
    
            goto L_800E56BC;
    }
    // 0x800E5570: nop

    // 0x800E5574: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5578: nop

    // 0x800E557C: lh          $t1, 0xB2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB2);
    // 0x800E5580: nop

    // 0x800E5584: addiu       $t2, $t1, -0x2
    ctx->r10 = ADD32(ctx->r9, -0X2);
    // 0x800E5588: sltiu       $at, $t2, 0x7
    ctx->r1 = ctx->r10 < 0X7 ? 1 : 0;
    // 0x800E558C: beq         $at, $zero, L_800E5690
    if (ctx->r1 == 0) {
        // 0x800E5590: nop
    
            goto L_800E5690;
    }
    // 0x800E5590: nop

    // 0x800E5594: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800E5598: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E559C: addu        $at, $at, $t2
    gpr jr_addend_800E55A8 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800E55A0: lw          $t2, 0x5470($at)
    ctx->r10 = ADD32(ctx->r1, 0X5470);
    // 0x800E55A4: nop

    // 0x800E55A8: jr          $t2
    // 0x800E55AC: nop

    switch (jr_addend_800E55A8 >> 2) {
        case 0: goto L_800E55B0; break;
        case 1: goto L_800E55D0; break;
        case 2: goto L_800E55F0; break;
        case 3: goto L_800E5610; break;
        case 4: goto L_800E5630; break;
        case 5: goto L_800E5650; break;
        case 6: goto L_800E5670; break;
        default: switch_error(__func__, 0x800E55A8, 0x80115470);
    }
    // 0x800E55AC: nop

L_800E55B0:
    // 0x800E55B0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800E55B4: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x800E55B8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800E55BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800E55C0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800E55C4: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800E55C8: b           L_800E56B0
    // 0x800E55CC: nop

        goto L_800E56B0;
    // 0x800E55CC: nop

L_800E55D0:
    // 0x800E55D0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800E55D4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x800E55D8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800E55DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E55E0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800E55E4: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800E55E8: b           L_800E56B0
    // 0x800E55EC: nop

        goto L_800E56B0;
    // 0x800E55EC: nop

L_800E55F0:
    // 0x800E55F0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800E55F4: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x800E55F8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800E55FC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5600: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800E5604: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x800E5608: b           L_800E56B0
    // 0x800E560C: nop

        goto L_800E56B0;
    // 0x800E560C: nop

L_800E5610:
    // 0x800E5610: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5614: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800E5618: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800E561C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5620: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800E5624: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800E5628: b           L_800E56B0
    // 0x800E562C: nop

        goto L_800E56B0;
    // 0x800E562C: nop

L_800E5630:
    // 0x800E5630: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5634: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x800E5638: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E563C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5640: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800E5644: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x800E5648: b           L_800E56B0
    // 0x800E564C: nop

        goto L_800E56B0;
    // 0x800E564C: nop

L_800E5650:
    // 0x800E5650: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5654: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x800E5658: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800E565C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5660: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800E5664: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800E5668: b           L_800E56B0
    // 0x800E566C: nop

        goto L_800E56B0;
    // 0x800E566C: nop

L_800E5670:
    // 0x800E5670: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5674: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x800E5678: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800E567C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5680: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800E5684: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800E5688: b           L_800E56B0
    // 0x800E568C: nop

        goto L_800E56B0;
    // 0x800E568C: nop

L_800E5690:
    // 0x800E5690: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5694: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x800E5698: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800E569C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800E56A0: nop

    // 0x800E56A4: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
    // 0x800E56A8: b           L_800E56B0
    // 0x800E56AC: nop

        goto L_800E56B0;
    // 0x800E56AC: nop

L_800E56B0:
    // 0x800E56B0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800E56B4: nop

    // 0x800E56B8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E56BC:
    // 0x800E56BC: b           L_800E56C4
    // 0x800E56C0: nop

        goto L_800E56C4;
    // 0x800E56C0: nop

L_800E56C4:
    // 0x800E56C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E56C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E56CC: jr          $ra
    // 0x800E56D0: nop

    return;
    // 0x800E56D0: nop

;}
RECOMP_FUNC void func_8007DF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DF4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007DF50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DF54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007DF58: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007DF5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007DF60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007DF64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007DF68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007DF6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007DF70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007DF74: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007DF78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007DF7C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007DF80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007DF84: jal         0x8001B62C
    // 0x8007DF88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8007DF88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007DF8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007DF90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007DF94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007DF98: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8007DF9C: nop

    // 0x8007DFA0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007DFA4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8007DFA8: nop

    // 0x8007DFAC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8007DFB0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007DFB4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007DFB8: nop

    // 0x8007DFBC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8007DFC0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8007DFC4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8007DFC8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8007DFCC: nop

    // 0x8007DFD0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007DFD4: nop

    // 0x8007DFD8: bgez        $t2, L_8007E028
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8007DFDC: nop
    
            goto L_8007E028;
    }
    // 0x8007DFDC: nop

    // 0x8007DFE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007DFE4: jal         0x8001B580
    // 0x8007DFE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_1;
    // 0x8007DFE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007DFEC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007DFF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007DFF4: nop

    // 0x8007DFF8: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8007DFFC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8007E000: nop

    // 0x8007E004: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8007E008: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007E00C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007E010: nop

    // 0x8007E014: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007E018: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8007E01C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8007E020: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8007E024: nop

L_8007E028:
    // 0x8007E028: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E02C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8007E030: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8007E034: addiu       $a2, $a2, -0x38B4
    ctx->r6 = ADD32(ctx->r6, -0X38B4);
    // 0x8007E038: jal         0x80079BEC
    // 0x8007E03C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80079BEC(rdram, ctx);
        goto after_2;
    // 0x8007E03C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_2:
    // 0x8007E040: b           L_8007E048
    // 0x8007E044: nop

        goto L_8007E048;
    // 0x8007E044: nop

L_8007E048:
    // 0x8007E048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E04C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007E050: jr          $ra
    // 0x8007E054: nop

    return;
    // 0x8007E054: nop

;}
RECOMP_FUNC void func_800CAC6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAC6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CAC70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CAC74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CAC78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CAC7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CAC80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CAC84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CAC88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CAC8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CAC90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CAC94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CAC98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CAC9C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800CACA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CACA4: nop

    // 0x800CACA8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CACAC: nop

    // 0x800CACB0: bne         $t1, $zero, L_800CAD68
    if (ctx->r9 != 0) {
        // 0x800CACB4: nop
    
            goto L_800CAD68;
    }
    // 0x800CACB4: nop

    // 0x800CACB8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CACBC: nop

    // 0x800CACC0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CACC4: nop

    // 0x800CACC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CACCC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CACD0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CACD4: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800CACD8: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800CACDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CACE0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800CACE4: nop

    // 0x800CACE8: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800CACEC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800CACF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CACF4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800CACF8: nop

    // 0x800CACFC: swc1        $f6, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f6.u32l;
    // 0x800CAD00: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800CAD04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800CAD08: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800CAD0C: nop

    // 0x800CAD10: swc1        $f8, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f8.u32l;
    // 0x800CAD14: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800CAD18: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800CAD1C: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x800CAD20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CAD24: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800CAD28: addiu       $t3, $t3, -0x7E10
    ctx->r11 = ADD32(ctx->r11, -0X7E10);
    // 0x800CAD2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CAD30: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800CAD34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CAD38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CAD3C: jal         0x8001C0EC
    // 0x800CAD40: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CAD40: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_0:
    // 0x800CAD44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CAD48: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800CAD4C: addiu       $t4, $t4, -0x7E00
    ctx->r12 = ADD32(ctx->r12, -0X7E00);
    // 0x800CAD50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CAD54: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800CAD58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CAD5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CAD60: jal         0x8001C0EC
    // 0x800CAD64: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800CAD64: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_1:
L_800CAD68:
    // 0x800CAD68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CAD6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CAD70: jal         0x8002A640
    // 0x800CAD74: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_2;
    // 0x800CAD74: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x800CAD78: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800CAD7C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800CAD80: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CAD84: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CAD88: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CAD8C: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800CAD90: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800CAD94: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x800CAD98: jal         0x80015538
    // 0x800CAD9C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800CAD9C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x800CADA0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800CADA4: nop

    // 0x800CADA8: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x800CADAC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800CADB0: nop

    // 0x800CADB4: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800CADB8: nop

    // 0x800CADBC: swc1        $f16, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f16.u32l;
    // 0x800CADC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CADC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CADC8: jal         0x80029C40
    // 0x800CADCC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800CADCC: nop

    after_4:
    // 0x800CADD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CADD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CADD8: jal         0x80029D04
    // 0x800CADDC: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800CADDC: nop

    after_5:
    // 0x800CADE0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800CADE4: nop

    // 0x800CADE8: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800CADEC: nop

    // 0x800CADF0: bne         $t0, $zero, L_800CAE10
    if (ctx->r8 != 0) {
        // 0x800CADF4: nop
    
            goto L_800CAE10;
    }
    // 0x800CADF4: nop

    // 0x800CADF8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800CADFC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800CAE00: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800CAE04: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CAE08: b           L_800CAE28
    // 0x800CAE0C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800CAE28;
    // 0x800CAE0C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800CAE10:
    // 0x800CAE10: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CAE14: nop

    // 0x800CAE18: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800CAE1C: nop

    // 0x800CAE20: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800CAE24: sh          $t6, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r14;
L_800CAE28:
    // 0x800CAE28: b           L_800CAE30
    // 0x800CAE2C: nop

        goto L_800CAE30;
    // 0x800CAE2C: nop

L_800CAE30:
    // 0x800CAE30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CAE34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CAE38: jr          $ra
    // 0x800CAE3C: nop

    return;
    // 0x800CAE3C: nop

;}
RECOMP_FUNC void func_80076F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076F6C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80076F70: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80076F74: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80076F78: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80076F7C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80076F80: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80076F84: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80076F88: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80076F8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80076F90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076F94: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80076F98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076F9C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80076FA0: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80076FA4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80076FA8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80076FAC: lui         $t8, 0xFD48
    ctx->r24 = S32(0XFD48 << 16);
    // 0x80076FB0: ori         $t8, $t8, 0x7F
    ctx->r24 = ctx->r24 | 0X7F;
    // 0x80076FB4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80076FB8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80076FBC: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x80076FC0: lw          $t1, 0xD0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD0);
    // 0x80076FC4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80076FC8: addiu       $t2, $t1, 0x30
    ctx->r10 = ADD32(ctx->r9, 0X30);
    // 0x80076FCC: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80076FD0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80076FD4: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80076FD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076FDC: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80076FE0: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80076FE4: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80076FE8: subu        $t6, $a2, $a2
    ctx->r14 = SUB32(ctx->r6, ctx->r6);
    // 0x80076FEC: addiu       $t7, $t6, 0x9
    ctx->r15 = ADD32(ctx->r14, 0X9);
    // 0x80076FF0: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80076FF4: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x80076FF8: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x80076FFC: andi        $t1, $t0, 0x1FF
    ctx->r9 = ctx->r8 & 0X1FF;
    // 0x80077000: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80077004: sll         $t2, $t1, 9
    ctx->r10 = S32(ctx->r9 << 9);
    // 0x80077008: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8007700C: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80077010: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80077014: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80077018: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8007701C: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80077020: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80077024: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80077028: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007702C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80077030: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80077034: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80077038: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007703C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80077040: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80077044: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80077048: nop

    // 0x8007704C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80077050: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80077054: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80077058: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007705C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80077060: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80077064: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80077068: sll         $t4, $a2, 1
    ctx->r12 = S32(ctx->r6 << 1);
    // 0x8007706C: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x80077070: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x80077074: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80077078: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x8007707C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80077080: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80077084: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80077088: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x8007708C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80077090: addiu       $t2, $a2, 0x8
    ctx->r10 = ADD32(ctx->r6, 0X8);
    // 0x80077094: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80077098: andi        $t4, $t3, 0xFFF
    ctx->r12 = ctx->r11 & 0XFFF;
    // 0x8007709C: addiu       $t8, $a3, 0x10
    ctx->r24 = ADD32(ctx->r7, 0X10);
    // 0x800770A0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800770A4: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x800770A8: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800770AC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800770B0: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x800770B4: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x800770B8: or          $t0, $t6, $t9
    ctx->r8 = ctx->r14 | ctx->r25;
    // 0x800770BC: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x800770C0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800770C4: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x800770C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800770CC: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x800770D0: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x800770D4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x800770D8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800770DC: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x800770E0: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x800770E4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800770E8: nop

    // 0x800770EC: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x800770F0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800770F4: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x800770F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800770FC: addiu       $t6, $t7, 0x8
    ctx->r14 = ADD32(ctx->r15, 0X8);
    // 0x80077100: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80077104: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80077108: subu        $t9, $a2, $a2
    ctx->r25 = SUB32(ctx->r6, ctx->r6);
    // 0x8007710C: addiu       $t0, $t9, 0x9
    ctx->r8 = ADD32(ctx->r25, 0X9);
    // 0x80077110: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80077114: addiu       $t2, $t1, 0x7
    ctx->r10 = ADD32(ctx->r9, 0X7);
    // 0x80077118: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x8007711C: andi        $t4, $t3, 0x1FF
    ctx->r12 = ctx->r11 & 0X1FF;
    // 0x80077120: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80077124: sll         $t5, $t4, 9
    ctx->r13 = S32(ctx->r12 << 9);
    // 0x80077128: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x8007712C: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x80077130: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x80077134: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80077138: nop

    // 0x8007713C: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80077140: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80077144: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80077148: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007714C: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80077150: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80077154: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80077158: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8007715C: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x80077160: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x80077164: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80077168: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x8007716C: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80077170: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x80077174: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80077178: or          $t7, $t4, $t8
    ctx->r15 = ctx->r12 | ctx->r24;
    // 0x8007717C: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x80077180: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x80077184: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80077188: addiu       $t3, $a3, 0x10
    ctx->r11 = ADD32(ctx->r7, 0X10);
    // 0x8007718C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80077190: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x80077194: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80077198: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x8007719C: andi        $t4, $t5, 0xFFF
    ctx->r12 = ctx->r13 & 0XFFF;
    // 0x800771A0: or          $t8, $t2, $t4
    ctx->r24 = ctx->r10 | ctx->r12;
    // 0x800771A4: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x800771A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800771AC: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x800771B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800771B4: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x800771B8: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x800771BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800771C0: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x800771C4: lui         $t0, 0xF200
    ctx->r8 = S32(0XF200 << 16);
    // 0x800771C8: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x800771CC: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x800771D0: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x800771D4: ori         $t3, $t3, 0x40
    ctx->r11 = ctx->r11 | 0X40;
    // 0x800771D8: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x800771DC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800771E0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x800771E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800771E8: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x800771EC: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x800771F0: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x800771F4: addiu       $t8, $a0, 0x8
    ctx->r24 = ADD32(ctx->r4, 0X8);
    // 0x800771F8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800771FC: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80077200: addiu       $t1, $a1, 0x10
    ctx->r9 = ADD32(ctx->r5, 0X10);
    // 0x80077204: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80077208: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8007720C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80077210: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x80077214: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80077218: andi        $t5, $t3, 0xFFF
    ctx->r13 = ctx->r11 & 0XFFF;
    // 0x8007721C: or          $t2, $t0, $t5
    ctx->r10 = ctx->r8 | ctx->r13;
    // 0x80077220: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x80077224: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80077228: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8007722C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80077230: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x80077234: andi        $t1, $t9, 0xFFF
    ctx->r9 = ctx->r25 & 0XFFF;
    // 0x80077238: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8007723C: or          $t3, $t6, $t1
    ctx->r11 = ctx->r14 | ctx->r9;
    // 0x80077240: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x80077244: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80077248: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8007724C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80077250: addiu       $t2, $t5, 0x8
    ctx->r10 = ADD32(ctx->r13, 0X8);
    // 0x80077254: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80077258: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x8007725C: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80077260: lui         $t4, 0xB400
    ctx->r12 = S32(0XB400 << 16);
    // 0x80077264: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80077268: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8007726C: nop

    // 0x80077270: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80077274: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80077278: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8007727C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80077280: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x80077284: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80077288: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8007728C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80077290: lui         $t1, 0xB300
    ctx->r9 = S32(0XB300 << 16);
    // 0x80077294: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x80077298: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8007729C: lui         $t0, 0x400
    ctx->r8 = S32(0X400 << 16);
    // 0x800772A0: ori         $t0, $t0, 0x400
    ctx->r8 = ctx->r8 | 0X400;
    // 0x800772A4: sw          $t0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r8;
    // 0x800772A8: b           L_800772B0
    // 0x800772AC: nop

        goto L_800772B0;
    // 0x800772AC: nop

L_800772B0:
    // 0x800772B0: jr          $ra
    // 0x800772B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800772B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800B86FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B86FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B8700: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B8704: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B8708: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B870C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B8710: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B8714: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B8718: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B871C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B8720: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8724: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B8728: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B872C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800B8730: nop

    // 0x800B8734: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800B8738: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800B873C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B8740: beq         $s0, $at, L_800B8768
    if (ctx->r16 == ctx->r1) {
        // 0x800B8744: nop
    
            goto L_800B8768;
    }
    // 0x800B8744: nop

    // 0x800B8748: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B874C: beq         $s0, $at, L_800B8778
    if (ctx->r16 == ctx->r1) {
        // 0x800B8750: nop
    
            goto L_800B8778;
    }
    // 0x800B8750: nop

    // 0x800B8754: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800B8758: beq         $s0, $at, L_800B8788
    if (ctx->r16 == ctx->r1) {
        // 0x800B875C: nop
    
            goto L_800B8788;
    }
    // 0x800B875C: nop

    // 0x800B8760: b           L_800B87A0
    // 0x800B8764: nop

        goto L_800B87A0;
    // 0x800B8764: nop

L_800B8768:
    // 0x800B8768: jal         0x800B846C
    // 0x800B876C: nop

    func_800B846C(rdram, ctx);
        goto after_0;
    // 0x800B876C: nop

    after_0:
    // 0x800B8770: b           L_800B87A8
    // 0x800B8774: nop

        goto L_800B87A8;
    // 0x800B8774: nop

L_800B8778:
    // 0x800B8778: jal         0x800B85C0
    // 0x800B877C: nop

    func_800B85C0(rdram, ctx);
        goto after_1;
    // 0x800B877C: nop

    after_1:
    // 0x800B8780: b           L_800B87A8
    // 0x800B8784: nop

        goto L_800B87A8;
    // 0x800B8784: nop

L_800B8788:
    // 0x800B8788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B878C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8790: jal         0x8002B0E4
    // 0x800B8794: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800B8794: nop

    after_2:
    // 0x800B8798: b           L_800B87A8
    // 0x800B879C: nop

        goto L_800B87A8;
    // 0x800B879C: nop

L_800B87A0:
    // 0x800B87A0: b           L_800B87A8
    // 0x800B87A4: nop

        goto L_800B87A8;
    // 0x800B87A4: nop

L_800B87A8:
    // 0x800B87A8: b           L_800B87B0
    // 0x800B87AC: nop

        goto L_800B87B0;
    // 0x800B87AC: nop

L_800B87B0:
    // 0x800B87B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B87B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B87B8: jr          $ra
    // 0x800B87BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800B87BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800CFEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFEC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CFEC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CFECC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CFED0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CFED4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CFED8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CFEDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CFEE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CFEE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CFEE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CFEEC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CFEF0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CFEF4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800CFEF8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CFEFC: nop

    // 0x800CFF00: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CFF04: nop

    // 0x800CFF08: bne         $t1, $zero, L_800CFFD8
    if (ctx->r9 != 0) {
        // 0x800CFF0C: nop
    
            goto L_800CFFD8;
    }
    // 0x800CFF0C: nop

    // 0x800CFF10: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CFF14: nop

    // 0x800CFF18: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CFF1C: nop

    // 0x800CFF20: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CFF24: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CFF28: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CFF2C: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x800CFF30: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x800CFF34: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800CFF38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CFF3C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800CFF40: nop

    // 0x800CFF44: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800CFF48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFF4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFF50: jal         0x8002A46C
    // 0x800CFF54: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800CFF54: nop

    after_0:
    // 0x800CFF58: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800CFF5C: nop

    // 0x800CFF60: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800CFF64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFF68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFF6C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800CFF70: jal         0x80029EF8
    // 0x800CFF74: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800CFF74: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_1:
    // 0x800CFF78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFF7C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800CFF80: addiu       $t9, $t9, -0x7AEC
    ctx->r25 = ADD32(ctx->r25, -0X7AEC);
    // 0x800CFF84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFF88: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800CFF8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CFF90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CFF94: jal         0x8001C0EC
    // 0x800CFF98: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800CFF98: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    after_2:
    // 0x800CFF9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFFA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFFA4: jal         0x8001BB34
    // 0x800CFFA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800CFFA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800CFFAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFFB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFFB4: jal         0x8001BB04
    // 0x800CFFB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_4;
    // 0x800CFFB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800CFFBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFFC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFFC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CFFC8: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    // 0x800CFFCC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800CFFD0: jal         0x800175F0
    // 0x800CFFD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x800CFFD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_800CFFD8:
    // 0x800CFFD8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CFFDC: nop

    // 0x800CFFE0: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800CFFE4: nop

    // 0x800CFFE8: beq         $t1, $zero, L_800D0078
    if (ctx->r9 == 0) {
        // 0x800CFFEC: nop
    
            goto L_800D0078;
    }
    // 0x800CFFEC: nop

    // 0x800CFFF0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800CFFF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CFFF8: lwc1        $f6, 0xC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC);
    // 0x800CFFFC: lwc1        $f11, 0x5040($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5040);
    // 0x800D0000: lwc1        $f10, 0x5044($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5044);
    // 0x800D0004: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800D0008: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x800D000C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800D0010: swc1        $f18, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f18.u32l;
    // 0x800D0014: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D0018: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D001C: lwc1        $f4, 0x10($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X10);
    // 0x800D0020: lwc1        $f9, 0x5048($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5048);
    // 0x800D0024: lwc1        $f8, 0x504C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X504C);
    // 0x800D0028: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800D002C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800D0030: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800D0034: swc1        $f16, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f16.u32l;
    // 0x800D0038: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D003C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D0040: lwc1        $f18, 0x14($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800D0044: lwc1        $f7, 0x5050($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5050);
    // 0x800D0048: lwc1        $f6, 0x5054($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5054);
    // 0x800D004C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800D0050: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800D0054: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800D0058: swc1        $f10, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f10.u32l;
    // 0x800D005C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D0060: nop

    // 0x800D0064: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800D0068: nop

    // 0x800D006C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800D0070: b           L_800D017C
    // 0x800D0074: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
        goto L_800D017C;
    // 0x800D0074: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
L_800D0078:
    // 0x800D0078: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D007C: nop

    // 0x800D0080: lwc1        $f16, 0x28($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800D0084: nop

    // 0x800D0088: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x800D008C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D0090: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D0094: nop

    // 0x800D0098: swc1        $f18, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f18.u32l;
    // 0x800D009C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D00A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D00A4: jal         0x80029C40
    // 0x800D00A8: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800D00A8: nop

    after_6:
    // 0x800D00AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D00B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D00B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D00B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D00BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800D00C0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800D00C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D00C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800D00CC: jal         0x80029018
    // 0x800D00D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800D00D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x800D00D4: beq         $v0, $zero, L_800D0100
    if (ctx->r2 == 0) {
        // 0x800D00D8: nop
    
            goto L_800D0100;
    }
    // 0x800D00D8: nop

    // 0x800D00DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D00E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D00E4: nop

    // 0x800D00E8: swc1        $f8, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f8.u32l;
    // 0x800D00EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D00F0: nop

    // 0x800D00F4: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800D00F8: nop

    // 0x800D00FC: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
L_800D0100:
    // 0x800D0100: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800D0104: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D0108: nop

    // 0x800D010C: swc1        $f16, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f16.u32l;
    // 0x800D0110: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D0114: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D0118: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D011C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0120: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D0124: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D0128: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D012C: jal         0x80029F58
    // 0x800D0130: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80029F58(rdram, ctx);
        goto after_8;
    // 0x800D0130: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x800D0134: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D0138: bne         $v0, $at, L_800D017C
    if (ctx->r2 != ctx->r1) {
        // 0x800D013C: nop
    
            goto L_800D017C;
    }
    // 0x800D013C: nop

    // 0x800D0140: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D0144: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D0148: nop

    // 0x800D014C: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800D0150: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D0154: nop

    // 0x800D0158: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800D015C: nop

    // 0x800D0160: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x800D0164: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D0168: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800D016C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800D0170: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D0174: nop

    // 0x800D0178: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800D017C:
    // 0x800D017C: b           L_800D0184
    // 0x800D0180: nop

        goto L_800D0184;
    // 0x800D0180: nop

L_800D0184:
    // 0x800D0184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D0188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D018C: jr          $ra
    // 0x800D0190: nop

    return;
    // 0x800D0190: nop

;}
RECOMP_FUNC void func_800ABC88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ABC88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800ABC8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800ABC90: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800ABC94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ABC98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ABC9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ABCA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ABCA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ABCA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ABCAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ABCB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ABCB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ABCB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ABCBC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800ABCC0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABCC4: nop

    // 0x800ABCC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ABCCC: nop

    // 0x800ABCD0: bne         $t1, $zero, L_800ABD10
    if (ctx->r9 != 0) {
        // 0x800ABCD4: nop
    
            goto L_800ABD10;
    }
    // 0x800ABCD4: nop

    // 0x800ABCD8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABCDC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ABCE0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800ABCE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800ABCE8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABCEC: nop

    // 0x800ABCF0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800ABCF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800ABCF8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABCFC: nop

    // 0x800ABD00: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800ABD04: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABD08: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800ABD0C: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
L_800ABD10:
    // 0x800ABD10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABD14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABD18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABD1C: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x800ABD20: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800ABD24: jal         0x800175F0
    // 0x800ABD28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800ABD28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800ABD2C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABD30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800ABD34: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x800ABD38: nop

    // 0x800ABD3C: beq         $t9, $at, L_800ABD94
    if (ctx->r25 == ctx->r1) {
        // 0x800ABD40: nop
    
            goto L_800ABD94;
    }
    // 0x800ABD40: nop

    // 0x800ABD44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABD48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABD4C: jal         0x8001B44C
    // 0x800ABD50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x800ABD50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800ABD54: beq         $v0, $zero, L_800ABD8C
    if (ctx->r2 == 0) {
        // 0x800ABD58: nop
    
            goto L_800ABD8C;
    }
    // 0x800ABD58: nop

    // 0x800ABD5C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABD60: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800ABD64: sh          $t0, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r8;
    // 0x800ABD68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABD6C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800ABD70: addiu       $t2, $t2, 0x75D0
    ctx->r10 = ADD32(ctx->r10, 0X75D0);
    // 0x800ABD74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABD78: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800ABD7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABD80: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800ABD84: jal         0x8001C0EC
    // 0x800ABD88: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800ABD88: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_2:
L_800ABD8C:
    // 0x800ABD8C: b           L_800ABE14
    // 0x800ABD90: nop

        goto L_800ABE14;
    // 0x800ABD90: nop

L_800ABD94:
    // 0x800ABD94: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABD98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800ABD9C: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x800ABDA0: nop

    // 0x800ABDA4: bne         $t4, $at, L_800ABE14
    if (ctx->r12 != ctx->r1) {
        // 0x800ABDA8: nop
    
            goto L_800ABE14;
    }
    // 0x800ABDA8: nop

    // 0x800ABDAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABDB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABDB4: jal         0x8001B44C
    // 0x800ABDB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800ABDB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800ABDBC: beq         $v0, $zero, L_800ABE14
    if (ctx->r2 == 0) {
        // 0x800ABDC0: nop
    
            goto L_800ABE14;
    }
    // 0x800ABDC0: nop

    // 0x800ABDC4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABDC8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800ABDCC: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x800ABDD0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800ABDD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800ABDD8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABDDC: nop

    // 0x800ABDE0: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
    // 0x800ABDE4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABDE8: addiu       $t8, $zero, 0x1E0
    ctx->r24 = ADD32(0, 0X1E0);
    // 0x800ABDEC: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800ABDF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABDF4: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800ABDF8: addiu       $t0, $t0, 0x75D0
    ctx->r8 = ADD32(ctx->r8, 0X75D0);
    // 0x800ABDFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABE00: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800ABE04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ABE08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800ABE0C: jal         0x8001C0EC
    // 0x800ABE10: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800ABE10: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_4:
L_800ABE14:
    // 0x800ABE14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABE18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABE1C: jal         0x80028FA0
    // 0x800ABE20: nop

    func_80028FA0(rdram, ctx);
        goto after_5;
    // 0x800ABE20: nop

    after_5:
    // 0x800ABE24: beq         $v0, $zero, L_800ABE3C
    if (ctx->r2 == 0) {
        // 0x800ABE28: nop
    
            goto L_800ABE3C;
    }
    // 0x800ABE28: nop

    // 0x800ABE2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABE30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABE34: jal         0x80029B60
    // 0x800ABE38: nop

    func_80029B60(rdram, ctx);
        goto after_6;
    // 0x800ABE38: nop

    after_6:
L_800ABE3C:
    // 0x800ABE3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABE40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABE44: jal         0x80029C40
    // 0x800ABE48: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800ABE48: nop

    after_7:
    // 0x800ABE4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABE50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABE54: jal         0x80029D04
    // 0x800ABE58: nop

    func_80029D04(rdram, ctx);
        goto after_8;
    // 0x800ABE58: nop

    after_8:
    // 0x800ABE5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800ABE60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800ABE64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABE68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABE6C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800ABE70: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800ABE74: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800ABE78: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800ABE7C: jal         0x80029018
    // 0x800ABE80: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x800ABE80: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x800ABE84: beq         $v0, $zero, L_800ABEA8
    if (ctx->r2 == 0) {
        // 0x800ABE88: nop
    
            goto L_800ABEA8;
    }
    // 0x800ABE88: nop

    // 0x800ABE8C: jal         0x800297DC
    // 0x800ABE90: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800ABE90: nop

    after_10:
    // 0x800ABE94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ABE98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ABE9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800ABEA0: jal         0x80029824
    // 0x800ABEA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800ABEA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
L_800ABEA8:
    // 0x800ABEA8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABEAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800ABEB0: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800ABEB4: nop

    // 0x800ABEB8: bne         $t2, $at, L_800ABEEC
    if (ctx->r10 != ctx->r1) {
        // 0x800ABEBC: nop
    
            goto L_800ABEEC;
    }
    // 0x800ABEBC: nop

    // 0x800ABEC0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABEC4: nop

    // 0x800ABEC8: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800ABECC: nop

    // 0x800ABED0: addiu       $t5, $t4, -0x4
    ctx->r13 = ADD32(ctx->r12, -0X4);
    // 0x800ABED4: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x800ABED8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABEDC: nop

    // 0x800ABEE0: lwc1        $f18, 0x3C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800ABEE4: nop

    // 0x800ABEE8: swc1        $f18, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f18.u32l;
L_800ABEEC:
    // 0x800ABEEC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABEF0: nop

    // 0x800ABEF4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800ABEF8: nop

    // 0x800ABEFC: bgez        $t8, L_800ABF1C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800ABF00: nop
    
            goto L_800ABF1C;
    }
    // 0x800ABF00: nop

    // 0x800ABF04: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABF08: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800ABF0C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800ABF10: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800ABF14: nop

    // 0x800ABF18: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800ABF1C:
    // 0x800ABF1C: b           L_800ABF24
    // 0x800ABF20: nop

        goto L_800ABF24;
    // 0x800ABF20: nop

L_800ABF24:
    // 0x800ABF24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800ABF28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800ABF2C: jr          $ra
    // 0x800ABF30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800ABF30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80077798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80077798: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007779C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800777A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800777A4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800777A8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800777AC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800777B0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800777B4: nop

    // 0x800777B8: bne         $t6, $zero, L_800777F8
    if (ctx->r14 != 0) {
        // 0x800777BC: nop
    
            goto L_800777F8;
    }
    // 0x800777BC: nop

    // 0x800777C0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800777C4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800777C8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800777CC: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x800777D0: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x800777D4: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x800777D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800777DC: addiu       $a0, $a0, 0x4B68
    ctx->r4 = ADD32(ctx->r4, 0X4B68);
    // 0x800777E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800777E4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800777E8: jal         0x80036360
    // 0x800777EC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    guMtxXFMF(rdram, ctx);
        goto after_0;
    // 0x800777EC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_0:
    // 0x800777F0: b           L_80077828
    // 0x800777F4: nop

        goto L_80077828;
    // 0x800777F4: nop

L_800777F8:
    // 0x800777F8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800777FC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80077800: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80077804: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80077808: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x8007780C: lw          $a3, 0x0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X0);
    // 0x80077810: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80077814: addiu       $a0, $a0, 0x4BA8
    ctx->r4 = ADD32(ctx->r4, 0X4BA8);
    // 0x80077818: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8007781C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80077820: jal         0x80036360
    // 0x80077824: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    guMtxXFMF(rdram, ctx);
        goto after_1;
    // 0x80077824: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_1:
L_80077828:
    // 0x80077828: b           L_80077830
    // 0x8007782C: nop

        goto L_80077830;
    // 0x8007782C: nop

L_80077830:
    // 0x80077830: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80077834: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80077838: jr          $ra
    // 0x8007783C: nop

    return;
    // 0x8007783C: nop

;}
RECOMP_FUNC void func_80080780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080780: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80080784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080788: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008078C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080790: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80080794: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080798: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008079C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800807A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800807A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800807A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800807AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800807B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800807B4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800807B8: nop

    // 0x800807BC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800807C0: nop

    // 0x800807C4: bgez        $t1, L_800807D4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800807C8: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_800807D4;
    }
    // 0x800807C8: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x800807CC: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x800807D0: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_800807D4:
    // 0x800807D4: sh          $t2, 0xC0($t0)
    MEM_H(0XC0, ctx->r8) = ctx->r10;
    // 0x800807D8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800807DC: nop

    // 0x800807E0: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800807E4: nop

    // 0x800807E8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800807EC: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x800807F0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800807F4: nop

    // 0x800807F8: lh          $t7, 0xC0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC0);
    // 0x800807FC: nop

    // 0x80080800: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x80080804: bne         $at, $zero, L_8008081C
    if (ctx->r1 != 0) {
        // 0x80080808: nop
    
            goto L_8008081C;
    }
    // 0x80080808: nop

    // 0x8008080C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80080810: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80080814: jal         0x8001A928
    // 0x80080818: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80080818: nop

    after_0:
L_8008081C:
    // 0x8008081C: b           L_80080824
    // 0x80080820: nop

        goto L_80080824;
    // 0x80080820: nop

L_80080824:
    // 0x80080824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008082C: jr          $ra
    // 0x80080830: nop

    return;
    // 0x80080830: nop

;}
RECOMP_FUNC void func_800D6D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D6D0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D6D10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D6D14: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D6D18: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D6D1C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D6D20: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D6D24: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D6D28: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D6D2C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D6D30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D6D34: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D6D38: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D6D3C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D6D40: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D6D44: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D6D48: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D6D4C: addiu       $a1, $a1, 0x4228
    ctx->r5 = ADD32(ctx->r5, 0X4228);
    // 0x800D6D50: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D6D54: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D6D58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D6D5C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D6D60: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D6D64: jal         0x80027464
    // 0x800D6D68: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D6D68: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D6D6C: b           L_800D6D74
    // 0x800D6D70: nop

        goto L_800D6D74;
    // 0x800D6D70: nop

L_800D6D74:
    // 0x800D6D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D6D78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D6D7C: jr          $ra
    // 0x800D6D80: nop

    return;
    // 0x800D6D80: nop

;}
RECOMP_FUNC void func_800B890C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B890C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B8910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B8914: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_800B8918:
    // 0x800B8918: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x800B891C: jal         0x800B8968
    // 0x800B8920: nop

    func_800B8968(rdram, ctx);
        goto after_0;
    // 0x800B8920: nop

    after_0:
    // 0x800B8924: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x800B8928: nop

    // 0x800B892C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800B8930: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x800B8934: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x800B8938: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x800B893C: bne         $at, $zero, L_800B8918
    if (ctx->r1 != 0) {
        // 0x800B8940: sb          $t7, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r15;
            goto L_800B8918;
    }
    // 0x800B8940: sb          $t7, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r15;
    // 0x800B8944: lb          $v0, 0x1F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X1F);
    // 0x800B8948: b           L_800B8958
    // 0x800B894C: nop

        goto L_800B8958;
    // 0x800B894C: nop

    // 0x800B8950: b           L_800B8958
    // 0x800B8954: nop

        goto L_800B8958;
    // 0x800B8954: nop

L_800B8958:
    // 0x800B8958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B895C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B8960: jr          $ra
    // 0x800B8964: nop

    return;
    // 0x800B8964: nop

;}
RECOMP_FUNC void func_8009EF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009EF20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009EF24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009EF28: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8009EF2C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009EF30: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8009EF34: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8009EF38: nop

    // 0x8009EF3C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8009EF40: nop

    // 0x8009EF44: bne         $t7, $zero, L_8009F00C
    if (ctx->r15 != 0) {
        // 0x8009EF48: nop
    
            goto L_8009F00C;
    }
    // 0x8009EF48: nop

    // 0x8009EF4C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8009EF50: nop

    // 0x8009EF54: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8009EF58: nop

    // 0x8009EF5C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009EF60: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8009EF64: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8009EF68: nop

    // 0x8009EF6C: sb          $zero, 0x102($t1)
    MEM_B(0X102, ctx->r9) = 0;
    // 0x8009EF70: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8009EF74: nop

    // 0x8009EF78: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x8009EF7C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8009EF80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009EF84: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8009EF88: nop

    // 0x8009EF8C: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x8009EF90: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8009EF94: addiu       $at, $zero, 0x169
    ctx->r1 = ADD32(0, 0X169);
    // 0x8009EF98: lh          $t5, 0xE4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE4);
    // 0x8009EF9C: nop

    // 0x8009EFA0: bne         $t5, $at, L_8009EFCC
    if (ctx->r13 != ctx->r1) {
        // 0x8009EFA4: nop
    
            goto L_8009EFCC;
    }
    // 0x8009EFA4: nop

    // 0x8009EFA8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009EFAC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8009EFB0: nop

    // 0x8009EFB4: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x8009EFB8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8009EFBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009EFC0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8009EFC4: b           L_8009EFF0
    // 0x8009EFC8: swc1        $f8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f8.u32l;
        goto L_8009EFF0;
    // 0x8009EFC8: swc1        $f8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f8.u32l;
L_8009EFCC:
    // 0x8009EFCC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8009EFD0: nop

    // 0x8009EFD4: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8009EFD8: nop

    // 0x8009EFDC: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
    // 0x8009EFE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8009EFE4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8009EFE8: nop

    // 0x8009EFEC: swc1        $f16, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f16.u32l;
L_8009EFF0:
    // 0x8009EFF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009EFF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009EFF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009EFFC: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x8009F000: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009F004: jal         0x800175F0
    // 0x8009F008: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x8009F008: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_8009F00C:
    // 0x8009F00C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009F010: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009F014: jal         0x80029D8C
    // 0x8009F018: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x8009F018: nop

    after_1:
    // 0x8009F01C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8009F020: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8009F024: lh          $t1, 0xA6($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA6);
    // 0x8009F028: nop

    // 0x8009F02C: bne         $t1, $at, L_8009F07C
    if (ctx->r9 != ctx->r1) {
        // 0x8009F030: nop
    
            goto L_8009F07C;
    }
    // 0x8009F030: nop

    // 0x8009F034: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8009F038: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8009F03C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8009F040: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8009F044: nop

    // 0x8009F048: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x8009F04C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8009F050: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8009F054: nop

    // 0x8009F058: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x8009F05C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8009F060: nop

    // 0x8009F064: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8009F068: nop

    // 0x8009F06C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x8009F070: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8009F074: b           L_8009F094
    // 0x8009F078: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
        goto L_8009F094;
    // 0x8009F078: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
L_8009F07C:
    // 0x8009F07C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8009F080: nop

    // 0x8009F084: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8009F088: nop

    // 0x8009F08C: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x8009F090: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_8009F094:
    // 0x8009F094: b           L_8009F09C
    // 0x8009F098: nop

        goto L_8009F09C;
    // 0x8009F098: nop

L_8009F09C:
    // 0x8009F09C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009F0A0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8009F0A4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009F0A8: jr          $ra
    // 0x8009F0AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8009F0AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800E9420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E9420: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E9424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E9428: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E942C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E9430: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E9434: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E9438: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E943C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E9440: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E9444: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E9448: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E944C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E9450: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800E9454: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E9458: nop

    // 0x800E945C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E9460: nop

    // 0x800E9464: bne         $t1, $zero, L_800E9564
    if (ctx->r9 != 0) {
        // 0x800E9468: nop
    
            goto L_800E9564;
    }
    // 0x800E9468: nop

    // 0x800E946C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E9470: nop

    // 0x800E9474: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E9478: nop

    // 0x800E947C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E9480: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E9484: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E9488: nop

    // 0x800E948C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E9490: nop

    // 0x800E9494: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E9498: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E949C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E94A0: nop

    // 0x800E94A4: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x800E94A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800E94AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E94B0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E94B4: nop

    // 0x800E94B8: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800E94BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E94C0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800E94C4: addiu       $t9, $t9, -0x6714
    ctx->r25 = ADD32(ctx->r25, -0X6714);
    // 0x800E94C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E94CC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800E94D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E94D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800E94D8: jal         0x8001C0EC
    // 0x800E94DC: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E94DC: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    after_0:
    // 0x800E94E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E94E4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800E94E8: addiu       $t1, $t1, -0x66F4
    ctx->r9 = ADD32(ctx->r9, -0X66F4);
    // 0x800E94EC: lh          $a0, 0xEC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XEC);
    // 0x800E94F0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800E94F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E94F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E94FC: jal         0x8001C0EC
    // 0x800E9500: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800E9500: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    after_1:
    // 0x800E9504: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E9508: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E950C: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x800E9510: lwc1        $f8, 0x5540($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5540);
    // 0x800E9514: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800E9518: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800E951C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800E9520: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800E9524: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800E9528: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E952C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800E9530: swc1        $f8, 0x4188($at)
    MEM_W(0X4188, ctx->r1) = ctx->f8.u32l;
    // 0x800E9534: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E9538: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E953C: lh          $t5, 0xEA($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XEA);
    // 0x800E9540: lwc1        $f10, 0x5544($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5544);
    // 0x800E9544: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800E9548: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800E954C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E9550: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800E9554: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E9558: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E955C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E9560: swc1        $f10, 0x4188($at)
    MEM_W(0X4188, ctx->r1) = ctx->f10.u32l;
L_800E9564:
    // 0x800E9564: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E9568: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E956C: jal         0x80029C40
    // 0x800E9570: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800E9570: nop

    after_2:
    // 0x800E9574: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E9578: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E957C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E9580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E9584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E9588: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800E958C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E9590: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800E9594: jal         0x80029018
    // 0x800E9598: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800E9598: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x800E959C: beq         $v0, $zero, L_800E95C8
    if (ctx->r2 == 0) {
        // 0x800E95A0: nop
    
            goto L_800E95C8;
    }
    // 0x800E95A0: nop

    // 0x800E95A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E95A8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E95AC: nop

    // 0x800E95B0: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x800E95B4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E95B8: nop

    // 0x800E95BC: lwc1        $f6, 0x2C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800E95C0: nop

    // 0x800E95C4: swc1        $f6, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f6.u32l;
L_800E95C8:
    // 0x800E95C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E95CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E95D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E95D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E95D8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800E95DC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800E95E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E95E4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800E95E8: jal         0x800295C0
    // 0x800E95EC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800E95EC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800E95F0: beq         $v0, $zero, L_800E9608
    if (ctx->r2 == 0) {
        // 0x800E95F4: nop
    
            goto L_800E9608;
    }
    // 0x800E95F4: nop

    // 0x800E95F8: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E95FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E9600: b           L_800E9618
    // 0x800E9604: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
        goto L_800E9618;
    // 0x800E9604: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
L_800E9608:
    // 0x800E9608: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800E960C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E9610: nop

    // 0x800E9614: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
L_800E9618:
    // 0x800E9618: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800E961C:
    // 0x800E961C: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800E9620: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E9624: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x800E9628: addu        $t6, $t3, $t2
    ctx->r14 = ADD32(ctx->r11, ctx->r10);
    // 0x800E962C: lh          $t5, 0xE8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XE8);
    // 0x800E9630: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800E9634: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800E9638: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800E963C: lwc1        $f6, 0x24($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X24);
    // 0x800E9640: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E9644: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800E9648: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800E964C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E9650: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9654: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E9658: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x800E965C: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x800E9660: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E9664: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800E9668: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800E966C: lh          $t4, 0xE8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XE8);
    // 0x800E9670: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800E9674: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x800E9678: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800E967C: lwc1        $f16, 0x28($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800E9680: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800E9684: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800E9688: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800E968C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800E9690: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9694: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800E9698: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x800E969C: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x800E96A0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E96A4: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x800E96A8: addu        $t7, $t2, $t5
    ctx->r15 = ADD32(ctx->r10, ctx->r13);
    // 0x800E96AC: lh          $t9, 0xE8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XE8);
    // 0x800E96B0: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800E96B4: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800E96B8: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800E96BC: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800E96C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800E96C4: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800E96C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800E96CC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800E96D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E96D4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800E96D8: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x800E96DC: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x800E96E0: nop

    // 0x800E96E4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800E96E8: sll         $t4, $t1, 16
    ctx->r12 = S32(ctx->r9 << 16);
    // 0x800E96EC: sra         $t3, $t4, 16
    ctx->r11 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800E96F0: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x800E96F4: bne         $at, $zero, L_800E961C
    if (ctx->r1 != 0) {
        // 0x800E96F8: sh          $t1, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r9;
            goto L_800E961C;
    }
    // 0x800E96F8: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
    // 0x800E96FC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E9700: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800E9704: lh          $t2, 0xE8($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XE8);
    // 0x800E9708: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800E970C: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800E9710: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800E9714: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E9718: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800E971C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E9720: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x800E9724: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800E9728: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800E972C: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800E9730: nop

    // 0x800E9734: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800E9738: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x800E973C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E9740: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800E9744: lh          $t0, 0xEA($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XEA);
    // 0x800E9748: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800E974C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800E9750: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800E9754: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800E9758: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800E975C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800E9760: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x800E9764: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800E9768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E976C: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800E9770: nop

    // 0x800E9774: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800E9778: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
    // 0x800E977C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E9780: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800E9784: lh          $t2, 0xEC($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XEC);
    // 0x800E9788: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800E978C: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800E9790: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800E9794: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E9798: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800E979C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E97A0: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x800E97A4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E97A8: lwc1        $f16, 0x5548($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5548);
    // 0x800E97AC: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800E97B0: nop

    // 0x800E97B4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800E97B8: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x800E97BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E97C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E97C4: jal         0x8002A2EC
    // 0x800E97C8: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_5;
    // 0x800E97C8: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_5:
    // 0x800E97CC: beq         $v0, $zero, L_800E97EC
    if (ctx->r2 == 0) {
        // 0x800E97D0: nop
    
            goto L_800E97EC;
    }
    // 0x800E97D0: nop

    // 0x800E97D4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E97D8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800E97DC: sh          $t8, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r24;
    // 0x800E97E0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E97E4: nop

    // 0x800E97E8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800E97EC:
    // 0x800E97EC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E97F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E97F4: lh          $t3, 0xA6($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XA6);
    // 0x800E97F8: nop

    // 0x800E97FC: bne         $t3, $at, L_800E9868
    if (ctx->r11 != ctx->r1) {
        // 0x800E9800: nop
    
            goto L_800E9868;
    }
    // 0x800E9800: nop

    // 0x800E9804: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E9808: nop

    // 0x800E980C: lh          $t2, 0xA8($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XA8);
    // 0x800E9810: nop

    // 0x800E9814: bne         $t2, $zero, L_800E9850
    if (ctx->r10 != 0) {
        // 0x800E9818: nop
    
            goto L_800E9850;
    }
    // 0x800E9818: nop

    // 0x800E981C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E9820: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800E9824: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800E9828: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E982C: nop

    // 0x800E9830: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800E9834: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E9838: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x800E983C: sh          $t8, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r24;
    // 0x800E9840: b           L_800E9AEC
    // 0x800E9844: nop

        goto L_800E9AEC;
    // 0x800E9844: nop

    // 0x800E9848: b           L_800E9868
    // 0x800E984C: nop

        goto L_800E9868;
    // 0x800E984C: nop

L_800E9850:
    // 0x800E9850: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E9854: nop

    // 0x800E9858: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x800E985C: nop

    // 0x800E9860: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x800E9864: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
L_800E9868:
    // 0x800E9868: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E986C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9870: lh          $t2, 0xEA($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XEA);
    // 0x800E9874: nop

    // 0x800E9878: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800E987C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800E9880: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E9884: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800E9888: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E988C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800E9890: lwc1        $f4, 0x4170($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800E9894: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800E9898: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E989C: nop

    // 0x800E98A0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800E98A4: nop

    // 0x800E98A8: bc1f        L_800E98F4
    if (!c1cs) {
        // 0x800E98AC: nop
    
            goto L_800E98F4;
    }
    // 0x800E98AC: nop

    // 0x800E98B0: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x800E98B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E98B8: nop

    // 0x800E98BC: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x800E98C0: nop

    // 0x800E98C4: bc1f        L_800E98F4
    if (!c1cs) {
        // 0x800E98C8: nop
    
            goto L_800E98F4;
    }
    // 0x800E98C8: nop

    // 0x800E98CC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E98D0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800E98D4: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x800E98D8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E98DC: nop

    // 0x800E98E0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800E98E4: b           L_800E9AEC
    // 0x800E98E8: nop

        goto L_800E9AEC;
    // 0x800E98E8: nop

    // 0x800E98EC: b           L_800E9A04
    // 0x800E98F0: nop

        goto L_800E9A04;
    // 0x800E98F0: nop

L_800E98F4:
    // 0x800E98F4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E98F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E98FC: lh          $t4, 0xEA($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XEA);
    // 0x800E9900: nop

    // 0x800E9904: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x800E9908: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800E990C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800E9910: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800E9914: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800E9918: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800E991C: lwc1        $f10, 0x4170($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800E9920: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800E9924: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800E9928: nop

    // 0x800E992C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800E9930: nop

    // 0x800E9934: bc1f        L_800E9980
    if (!c1cs) {
        // 0x800E9938: nop
    
            goto L_800E9980;
    }
    // 0x800E9938: nop

    // 0x800E993C: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x800E9940: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E9944: nop

    // 0x800E9948: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x800E994C: nop

    // 0x800E9950: bc1f        L_800E9980
    if (!c1cs) {
        // 0x800E9954: nop
    
            goto L_800E9980;
    }
    // 0x800E9954: nop

    // 0x800E9958: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E995C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x800E9960: sh          $t1, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r9;
    // 0x800E9964: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E9968: nop

    // 0x800E996C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800E9970: b           L_800E9AEC
    // 0x800E9974: nop

        goto L_800E9AEC;
    // 0x800E9974: nop

    // 0x800E9978: b           L_800E9A04
    // 0x800E997C: nop

        goto L_800E9A04;
    // 0x800E997C: nop

L_800E9980:
    // 0x800E9980: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E9984: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9988: lh          $t7, 0xEA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEA);
    // 0x800E998C: nop

    // 0x800E9990: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800E9994: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800E9998: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800E999C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800E99A0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800E99A4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800E99A8: lwc1        $f6, 0x4170($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800E99AC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800E99B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E99B4: nop

    // 0x800E99B8: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x800E99BC: nop

    // 0x800E99C0: bc1f        L_800E9A04
    if (!c1cs) {
        // 0x800E99C4: nop
    
            goto L_800E9A04;
    }
    // 0x800E99C4: nop

    // 0x800E99C8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x800E99CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800E99D0: nop

    // 0x800E99D4: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x800E99D8: nop

    // 0x800E99DC: bc1f        L_800E9A04
    if (!c1cs) {
        // 0x800E99E0: nop
    
            goto L_800E9A04;
    }
    // 0x800E99E0: nop

    // 0x800E99E4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E99E8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x800E99EC: sh          $t8, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r24;
    // 0x800E99F0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E99F4: nop

    // 0x800E99F8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800E99FC: b           L_800E9AEC
    // 0x800E9A00: nop

        goto L_800E9AEC;
    // 0x800E9A00: nop

L_800E9A04:
    // 0x800E9A04: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E9A08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800E9A0C: lh          $t1, 0xA6($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XA6);
    // 0x800E9A10: nop

    // 0x800E9A14: bne         $t1, $at, L_800E9AE4
    if (ctx->r9 != ctx->r1) {
        // 0x800E9A18: nop
    
            goto L_800E9AE4;
    }
    // 0x800E9A18: nop

    // 0x800E9A1C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E9A20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9A24: lh          $t2, 0xEA($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XEA);
    // 0x800E9A28: nop

    // 0x800E9A2C: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800E9A30: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800E9A34: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E9A38: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800E9A3C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E9A40: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800E9A44: lwc1        $f16, 0x4170($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x800E9A48: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x800E9A4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E9A50: nop

    // 0x800E9A54: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800E9A58: nop

    // 0x800E9A5C: bc1f        L_800E9AE4
    if (!c1cs) {
        // 0x800E9A60: nop
    
            goto L_800E9AE4;
    }
    // 0x800E9A60: nop

    // 0x800E9A64: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E9A68: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x800E9A6C: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x800E9A70: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E9A74: nop

    // 0x800E9A78: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800E9A7C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E9A80: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800E9A84: sh          $t0, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r8;
    // 0x800E9A88: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800E9A8C:
    // 0x800E9A8C: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x800E9A90: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E9A94: sll         $t2, $t6, 1
    ctx->r10 = S32(ctx->r14 << 1);
    // 0x800E9A98: addu        $t5, $t1, $t2
    ctx->r13 = ADD32(ctx->r9, ctx->r10);
    // 0x800E9A9C: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x800E9AA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E9AA4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800E9AA8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800E9AAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800E9AB0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800E9AB4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800E9AB8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800E9ABC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800E9AC0: sh          $t3, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r11;
    // 0x800E9AC4: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x800E9AC8: nop

    // 0x800E9ACC: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x800E9AD0: sll         $t4, $t0, 16
    ctx->r12 = S32(ctx->r8 << 16);
    // 0x800E9AD4: sra         $t6, $t4, 16
    ctx->r14 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800E9AD8: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x800E9ADC: bne         $at, $zero, L_800E9A8C
    if (ctx->r1 != 0) {
        // 0x800E9AE0: sh          $t0, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r8;
            goto L_800E9A8C;
    }
    // 0x800E9AE0: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
L_800E9AE4:
    // 0x800E9AE4: b           L_800E9AEC
    // 0x800E9AE8: nop

        goto L_800E9AEC;
    // 0x800E9AE8: nop

L_800E9AEC:
    // 0x800E9AEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E9AF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800E9AF4: jr          $ra
    // 0x800E9AF8: nop

    return;
    // 0x800E9AF8: nop

;}
RECOMP_FUNC void func_8009612C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009612C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80096134: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80096138: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8009613C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80096140: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80096144: nop

    // 0x80096148: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8009614C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80096150: lbu         $t9, 0x65D9($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X65D9);
    // 0x80096154: nop

    // 0x80096158: bne         $t9, $zero, L_8009617C
    if (ctx->r25 != 0) {
        // 0x8009615C: nop
    
            goto L_8009617C;
    }
    // 0x8009615C: nop

    // 0x80096160: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80096164: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80096168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009616C: jal         0x8001B6BC
    // 0x80096170: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_0;
    // 0x80096170: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x80096174: b           L_80096190
    // 0x80096178: nop

        goto L_80096190;
    // 0x80096178: nop

L_8009617C:
    // 0x8009617C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80096180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80096184: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80096188: jal         0x8001B6BC
    // 0x8009618C: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_1;
    // 0x8009618C: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_1:
L_80096190:
    // 0x80096190: b           L_80096198
    // 0x80096194: nop

        goto L_80096198;
    // 0x80096194: nop

L_80096198:
    // 0x80096198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009619C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800961A0: jr          $ra
    // 0x800961A4: nop

    return;
    // 0x800961A4: nop

;}
RECOMP_FUNC void func_800F2428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F2428: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800F242C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F2430: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F2434: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F2438: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F243C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F2440: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F2444: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F2448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F244C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F2450: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F2454: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F2458: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800F245C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2460: nop

    // 0x800F2464: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F2468: nop

    // 0x800F246C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x800F2470: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2474: nop

    // 0x800F2478: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F247C: nop

    // 0x800F2480: bne         $t3, $zero, L_800F253C
    if (ctx->r11 != 0) {
        // 0x800F2484: nop
    
            goto L_800F253C;
    }
    // 0x800F2484: nop

    // 0x800F2488: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800F248C: nop

    // 0x800F2490: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F2494: nop

    // 0x800F2498: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800F249C: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800F24A0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800F24A4: nop

    // 0x800F24A8: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800F24AC: nop

    // 0x800F24B0: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F24B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F24B8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800F24BC: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800F24C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F24C4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800F24C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F24CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800F24D0: jal         0x8001C0EC
    // 0x800F24D4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F24D4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800F24D8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800F24DC: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800F24E0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800F24E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800F24E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F24EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800F24F0: jal         0x8001C0EC
    // 0x800F24F4: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F24F4: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800F24F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F24FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2500: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F2504: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800F2508: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F250C: jal         0x8001ABF4
    // 0x800F2510: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800F2510: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800F2514: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F2518: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800F251C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800F2520: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800F2524: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F2528: jal         0x8001ABF4
    // 0x800F252C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800F252C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800F2530: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2534: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800F2538: sh          $t1, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r9;
L_800F253C:
    // 0x800F253C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2540: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2544: jal         0x80028FA0
    // 0x800F2548: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800F2548: nop

    after_4:
    // 0x800F254C: beq         $v0, $zero, L_800F2564
    if (ctx->r2 == 0) {
        // 0x800F2550: nop
    
            goto L_800F2564;
    }
    // 0x800F2550: nop

    // 0x800F2554: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2558: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F255C: jal         0x80029B60
    // 0x800F2560: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800F2560: nop

    after_5:
L_800F2564:
    // 0x800F2564: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2568: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F256C: jal         0x8002A8B4
    // 0x800F2570: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x800F2570: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_6:
    // 0x800F2574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2578: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F257C: jal         0x80029C40
    // 0x800F2580: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800F2580: nop

    after_7:
    // 0x800F2584: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F2588: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F258C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2590: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F2598: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x800F259C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F25A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800F25A4: jal         0x80029018
    // 0x800F25A8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800F25A8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x800F25AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F25B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F25B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F25B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F25BC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800F25C0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800F25C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F25C8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800F25CC: jal         0x800295C0
    // 0x800F25D0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x800F25D0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x800F25D4: beq         $v0, $zero, L_800F25EC
    if (ctx->r2 == 0) {
        // 0x800F25D8: nop
    
            goto L_800F25EC;
    }
    // 0x800F25D8: nop

    // 0x800F25DC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800F25E0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800F25E4: b           L_800F25FC
    // 0x800F25E8: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
        goto L_800F25FC;
    // 0x800F25E8: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
L_800F25EC:
    // 0x800F25EC: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800F25F0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F25F4: nop

    // 0x800F25F8: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
L_800F25FC:
    // 0x800F25FC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2600: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800F2604: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F2608: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800F260C: nop

    // 0x800F2610: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800F2614: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x800F2618: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800F261C: nop

    // 0x800F2620: lh          $t8, 0xA6($t4)
    ctx->r24 = MEM_H(ctx->r12, 0XA6);
    // 0x800F2624: nop

    // 0x800F2628: bne         $t8, $zero, L_800F2AB4
    if (ctx->r24 != 0) {
        // 0x800F262C: nop
    
            goto L_800F2AB4;
    }
    // 0x800F262C: nop

    // 0x800F2630: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2634: nop

    // 0x800F2638: lh          $t9, 0xB6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XB6);
    // 0x800F263C: nop

    // 0x800F2640: bne         $t9, $zero, L_800F2678
    if (ctx->r25 != 0) {
        // 0x800F2644: nop
    
            goto L_800F2678;
    }
    // 0x800F2644: nop

    // 0x800F2648: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F264C: nop

    // 0x800F2650: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
    // 0x800F2654: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2658: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x800F265C: sh          $t1, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r9;
    // 0x800F2660: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2664: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800F2668: sh          $t3, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r11;
    // 0x800F266C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2670: b           L_800F2AAC
    // 0x800F2674: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_800F2AAC;
    // 0x800F2674: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800F2678:
    // 0x800F2678: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F267C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2680: jal         0x8002A2EC
    // 0x800F2684: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_10;
    // 0x800F2684: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_10:
    // 0x800F2688: beq         $v0, $zero, L_800F2A7C
    if (ctx->r2 == 0) {
        // 0x800F268C: nop
    
            goto L_800F2A7C;
    }
    // 0x800F268C: nop

    // 0x800F2690: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F2694: lwc1        $f12, 0x5688($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5688);
    // 0x800F2698: jal         0x80034970
    // 0x800F269C: nop

    sinf_game(rdram, ctx);
        goto after_11;
    // 0x800F269C: nop

    after_11:
    // 0x800F26A0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800F26A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F26A8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800F26AC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800F26B0: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800F26B4: nop

    // 0x800F26B8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F26BC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x800F26C0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F26C4: lwc1        $f12, 0x568C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X568C);
    // 0x800F26C8: jal         0x80036570
    // 0x800F26CC: nop

    cosf_game(rdram, ctx);
        goto after_12;
    // 0x800F26CC: nop

    after_12:
    // 0x800F26D0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800F26D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F26D8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800F26DC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800F26E0: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800F26E4: nop

    // 0x800F26E8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800F26EC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x800F26F0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800F26F4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800F26F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F26FC: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800F2700: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F2704: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800F2708: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F270C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F2710: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F2714: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800F2718: addiu       $a1, $a1, 0x4444
    ctx->r5 = ADD32(ctx->r5, 0X4444);
    // 0x800F271C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F2720: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800F2724: jal         0x80027464
    // 0x800F2728: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_13;
    // 0x800F2728: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x800F272C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800F2730: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800F2734: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F2738: beq         $t9, $at, L_800F2A74
    if (ctx->r25 == ctx->r1) {
        // 0x800F273C: nop
    
            goto L_800F2A74;
    }
    // 0x800F273C: nop

    // 0x800F2740: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2744: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2748: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800F274C: jal         0x80026F10
    // 0x800F2750: nop

    func_80026F10(rdram, ctx);
        goto after_14;
    // 0x800F2750: nop

    after_14:
    // 0x800F2754: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F2758: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800F275C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F2760: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F2764: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F2768: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F276C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F2770: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F2774: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F2778: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F277C: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
    // 0x800F2780: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F2784: lwc1        $f12, 0x5690($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5690);
    // 0x800F2788: jal         0x80034970
    // 0x800F278C: nop

    sinf_game(rdram, ctx);
        goto after_15;
    // 0x800F278C: nop

    after_15:
    // 0x800F2790: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800F2794: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F2798: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F279C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800F27A0: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800F27A4: nop

    // 0x800F27A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800F27AC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x800F27B0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F27B4: lwc1        $f12, 0x5694($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5694);
    // 0x800F27B8: jal         0x80036570
    // 0x800F27BC: nop

    cosf_game(rdram, ctx);
        goto after_16;
    // 0x800F27BC: nop

    after_16:
    // 0x800F27C0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800F27C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F27C8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800F27CC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800F27D0: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800F27D4: nop

    // 0x800F27D8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F27DC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x800F27E0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F27E4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800F27E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F27EC: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800F27F0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F27F4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800F27F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F27FC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800F2800: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F2804: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800F2808: addiu       $a1, $a1, 0x4444
    ctx->r5 = ADD32(ctx->r5, 0X4444);
    // 0x800F280C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F2810: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800F2814: jal         0x80027464
    // 0x800F2818: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_17;
    // 0x800F2818: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x800F281C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800F2820: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F2824: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F2828: beq         $t6, $at, L_800F2870
    if (ctx->r14 == ctx->r1) {
        // 0x800F282C: nop
    
            goto L_800F2870;
    }
    // 0x800F282C: nop

    // 0x800F2830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2834: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2838: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800F283C: jal         0x80026F10
    // 0x800F2840: nop

    func_80026F10(rdram, ctx);
        goto after_18;
    // 0x800F2840: nop

    after_18:
    // 0x800F2844: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F2848: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x800F284C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800F2850: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F2854: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F2858: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F285C: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F2860: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F2864: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F2868: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800F286C: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
L_800F2870:
    // 0x800F2870: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F2874: lwc1        $f12, 0x5698($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5698);
    // 0x800F2878: jal         0x80034970
    // 0x800F287C: nop

    sinf_game(rdram, ctx);
        goto after_19;
    // 0x800F287C: nop

    after_19:
    // 0x800F2880: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800F2884: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F2888: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800F288C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800F2890: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800F2894: nop

    // 0x800F2898: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800F289C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x800F28A0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F28A4: lwc1        $f12, 0x569C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X569C);
    // 0x800F28A8: jal         0x80036570
    // 0x800F28AC: nop

    cosf_game(rdram, ctx);
        goto after_20;
    // 0x800F28AC: nop

    after_20:
    // 0x800F28B0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800F28B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F28B8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800F28BC: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x800F28C0: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800F28C4: nop

    // 0x800F28C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800F28CC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x800F28D0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F28D4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800F28D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F28DC: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800F28E0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F28E4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800F28E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F28EC: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x800F28F0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F28F4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800F28F8: addiu       $a1, $a1, 0x4444
    ctx->r5 = ADD32(ctx->r5, 0X4444);
    // 0x800F28FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F2900: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800F2904: jal         0x80027464
    // 0x800F2908: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_21;
    // 0x800F2908: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_21:
    // 0x800F290C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800F2910: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F2914: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F2918: beq         $t1, $at, L_800F2960
    if (ctx->r9 == ctx->r1) {
        // 0x800F291C: nop
    
            goto L_800F2960;
    }
    // 0x800F291C: nop

    // 0x800F2920: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2924: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2928: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800F292C: jal         0x80026F10
    // 0x800F2930: nop

    func_80026F10(rdram, ctx);
        goto after_22;
    // 0x800F2930: nop

    after_22:
    // 0x800F2934: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F2938: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x800F293C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F2940: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F2944: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F2948: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F294C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F2950: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F2954: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F2958: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800F295C: swc1        $f8, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f8.u32l;
L_800F2960:
    // 0x800F2960: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F2964: lwc1        $f12, 0x56A0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X56A0);
    // 0x800F2968: jal         0x80034970
    // 0x800F296C: nop

    sinf_game(rdram, ctx);
        goto after_23;
    // 0x800F296C: nop

    after_23:
    // 0x800F2970: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800F2974: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F2978: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F297C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800F2980: lwc1        $f18, 0x0($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800F2984: nop

    // 0x800F2988: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F298C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x800F2990: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F2994: lwc1        $f12, 0x56A4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X56A4);
    // 0x800F2998: jal         0x80036570
    // 0x800F299C: nop

    cosf_game(rdram, ctx);
        goto after_24;
    // 0x800F299C: nop

    after_24:
    // 0x800F29A0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800F29A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F29A8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F29AC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800F29B0: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800F29B4: nop

    // 0x800F29B8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800F29BC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x800F29C0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800F29C4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800F29C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F29CC: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800F29D0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F29D4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800F29D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F29DC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F29E0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F29E4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800F29E8: addiu       $a1, $a1, 0x4444
    ctx->r5 = ADD32(ctx->r5, 0X4444);
    // 0x800F29EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F29F0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800F29F4: jal         0x80027464
    // 0x800F29F8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_25;
    // 0x800F29F8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_25:
    // 0x800F29FC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800F2A00: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F2A04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F2A08: beq         $t8, $at, L_800F2A50
    if (ctx->r24 == ctx->r1) {
        // 0x800F2A0C: nop
    
            goto L_800F2A50;
    }
    // 0x800F2A0C: nop

    // 0x800F2A10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2A14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2A18: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800F2A1C: jal         0x80026F10
    // 0x800F2A20: nop

    func_80026F10(rdram, ctx);
        goto after_26;
    // 0x800F2A20: nop

    after_26:
    // 0x800F2A24: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F2A28: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F2A2C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F2A30: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F2A34: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F2A38: lwc1        $f16, 0x56A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X56A8);
    // 0x800F2A3C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F2A40: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F2A44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F2A48: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F2A4C: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
L_800F2A50:
    // 0x800F2A50: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2A54: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x800F2A58: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x800F2A5C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2A60: nop

    // 0x800F2A64: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x800F2A68: nop

    // 0x800F2A6C: addiu       $t5, $t3, -0x1
    ctx->r13 = ADD32(ctx->r11, -0X1);
    // 0x800F2A70: sh          $t5, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r13;
L_800F2A74:
    // 0x800F2A74: b           L_800F2AAC
    // 0x800F2A78: nop

        goto L_800F2AAC;
    // 0x800F2A78: nop

L_800F2A7C:
    // 0x800F2A7C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2A80: nop

    // 0x800F2A84: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800F2A88: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2A8C: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x800F2A90: sh          $t4, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r12;
    // 0x800F2A94: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2A98: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800F2A9C: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x800F2AA0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2AA4: nop

    // 0x800F2AA8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800F2AAC:
    // 0x800F2AAC: b           L_800F2ACC
    // 0x800F2AB0: nop

        goto L_800F2ACC;
    // 0x800F2AB0: nop

L_800F2AB4:
    // 0x800F2AB4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2AB8: nop

    // 0x800F2ABC: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800F2AC0: nop

    // 0x800F2AC4: addiu       $t5, $t3, -0x1
    ctx->r13 = ADD32(ctx->r11, -0X1);
    // 0x800F2AC8: sh          $t5, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r13;
L_800F2ACC:
    // 0x800F2ACC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800F2AD0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2AD4: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800F2AD8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800F2ADC: lwc1        $f18, 0x0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800F2AE0: lwc1        $f4, 0x24($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X24);
    // 0x800F2AE4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F2AE8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800F2AEC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800F2AF0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F2AF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F2AF8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800F2AFC: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x800F2B00: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800F2B04: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2B08: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F2B0C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F2B10: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800F2B14: lwc1        $f10, 0x28($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800F2B18: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F2B1C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F2B20: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800F2B24: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F2B28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F2B2C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F2B30: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800F2B34: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800F2B38: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2B3C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800F2B40: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F2B44: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800F2B48: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800F2B4C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F2B50: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F2B54: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800F2B58: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F2B5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F2B60: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F2B64: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x800F2B68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2B6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2B70: jal         0x8002A2EC
    // 0x800F2B74: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_27;
    // 0x800F2B74: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_27:
    // 0x800F2B78: beq         $v0, $zero, L_800F2B88
    if (ctx->r2 == 0) {
        // 0x800F2B7C: nop
    
            goto L_800F2B88;
    }
    // 0x800F2B7C: nop

    // 0x800F2B80: b           L_800F2BA0
    // 0x800F2B84: nop

        goto L_800F2BA0;
    // 0x800F2B84: nop

L_800F2B88:
    // 0x800F2B88: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2B8C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800F2B90: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800F2B94: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800F2B98: nop

    // 0x800F2B9C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800F2BA0:
    // 0x800F2BA0: b           L_800F2BA8
    // 0x800F2BA4: nop

        goto L_800F2BA8;
    // 0x800F2BA4: nop

L_800F2BA8:
    // 0x800F2BA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F2BAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800F2BB0: jr          $ra
    // 0x800F2BB4: nop

    return;
    // 0x800F2BB4: nop

;}
RECOMP_FUNC void func_800B81F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B81F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B81F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B81F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B81FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B8200: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B8204: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B8208: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B820C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B8210: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8214: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B8218: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B821C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800B8220: nop

    // 0x800B8224: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800B8228: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B822C: nop

    // 0x800B8230: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800B8234: sltiu       $at, $t0, 0xA
    ctx->r1 = ctx->r8 < 0XA ? 1 : 0;
    // 0x800B8238: beq         $at, $zero, L_800B82FC
    if (ctx->r1 == 0) {
        // 0x800B823C: nop
    
            goto L_800B82FC;
    }
    // 0x800B823C: nop

    // 0x800B8240: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B8244: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B8248: addu        $at, $at, $t0
    gpr jr_addend_800B8254 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B824C: lw          $t0, 0x4C04($at)
    ctx->r8 = ADD32(ctx->r1, 0X4C04);
    // 0x800B8250: nop

    // 0x800B8254: jr          $t0
    // 0x800B8258: nop

    switch (jr_addend_800B8254 >> 2) {
        case 0: goto L_800B825C; break;
        case 1: goto L_800B826C; break;
        case 2: goto L_800B827C; break;
        case 3: goto L_800B828C; break;
        case 4: goto L_800B829C; break;
        case 5: goto L_800B82CC; break;
        case 6: goto L_800B82DC; break;
        case 7: goto L_800B82EC; break;
        case 8: goto L_800B82AC; break;
        case 9: goto L_800B82BC; break;
        default: switch_error(__func__, 0x800B8254, 0x80114C04);
    }
    // 0x800B8258: nop

L_800B825C:
    // 0x800B825C: jal         0x800B7A28
    // 0x800B8260: nop

    func_800B7A28(rdram, ctx);
        goto after_0;
    // 0x800B8260: nop

    after_0:
    // 0x800B8264: b           L_800B8304
    // 0x800B8268: nop

        goto L_800B8304;
    // 0x800B8268: nop

L_800B826C:
    // 0x800B826C: jal         0x800B5978
    // 0x800B8270: nop

    func_800B5978(rdram, ctx);
        goto after_1;
    // 0x800B8270: nop

    after_1:
    // 0x800B8274: b           L_800B8304
    // 0x800B8278: nop

        goto L_800B8304;
    // 0x800B8278: nop

L_800B827C:
    // 0x800B827C: jal         0x800B7BB4
    // 0x800B8280: nop

    func_800B7BB4(rdram, ctx);
        goto after_2;
    // 0x800B8280: nop

    after_2:
    // 0x800B8284: b           L_800B8304
    // 0x800B8288: nop

        goto L_800B8304;
    // 0x800B8288: nop

L_800B828C:
    // 0x800B828C: jal         0x800B7F90
    // 0x800B8290: nop

    func_800B7F90(rdram, ctx);
        goto after_3;
    // 0x800B8290: nop

    after_3:
    // 0x800B8294: b           L_800B8304
    // 0x800B8298: nop

        goto L_800B8304;
    // 0x800B8298: nop

L_800B829C:
    // 0x800B829C: jal         0x800B6A94
    // 0x800B82A0: nop

    func_800B6A94(rdram, ctx);
        goto after_4;
    // 0x800B82A0: nop

    after_4:
    // 0x800B82A4: b           L_800B8304
    // 0x800B82A8: nop

        goto L_800B8304;
    // 0x800B82A8: nop

L_800B82AC:
    // 0x800B82AC: jal         0x800B6C60
    // 0x800B82B0: nop

    func_800B6C60(rdram, ctx);
        goto after_5;
    // 0x800B82B0: nop

    after_5:
    // 0x800B82B4: b           L_800B8304
    // 0x800B82B8: nop

        goto L_800B8304;
    // 0x800B82B8: nop

L_800B82BC:
    // 0x800B82BC: jal         0x800B7158
    // 0x800B82C0: nop

    func_800B7158(rdram, ctx);
        goto after_6;
    // 0x800B82C0: nop

    after_6:
    // 0x800B82C4: b           L_800B8304
    // 0x800B82C8: nop

        goto L_800B8304;
    // 0x800B82C8: nop

L_800B82CC:
    // 0x800B82CC: jal         0x800B6F6C
    // 0x800B82D0: nop

    func_800B6F6C(rdram, ctx);
        goto after_7;
    // 0x800B82D0: nop

    after_7:
    // 0x800B82D4: b           L_800B8304
    // 0x800B82D8: nop

        goto L_800B8304;
    // 0x800B82D8: nop

L_800B82DC:
    // 0x800B82DC: jal         0x800B6F2C
    // 0x800B82E0: nop

    func_800B6F2C(rdram, ctx);
        goto after_8;
    // 0x800B82E0: nop

    after_8:
    // 0x800B82E4: b           L_800B8304
    // 0x800B82E8: nop

        goto L_800B8304;
    // 0x800B82E8: nop

L_800B82EC:
    // 0x800B82EC: jal         0x800B7148
    // 0x800B82F0: nop

    func_800B7148(rdram, ctx);
        goto after_9;
    // 0x800B82F0: nop

    after_9:
    // 0x800B82F4: b           L_800B8304
    // 0x800B82F8: nop

        goto L_800B8304;
    // 0x800B82F8: nop

L_800B82FC:
    // 0x800B82FC: b           L_800B8304
    // 0x800B8300: nop

        goto L_800B8304;
    // 0x800B8300: nop

L_800B8304:
    // 0x800B8304: b           L_800B830C
    // 0x800B8308: nop

        goto L_800B830C;
    // 0x800B8308: nop

L_800B830C:
    // 0x800B830C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B8310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B8314: jr          $ra
    // 0x800B8318: nop

    return;
    // 0x800B8318: nop

;}
RECOMP_FUNC void func_800DC288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC288: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DC28C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DC290: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DC294: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DC298: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DC29C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800DC2A0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DC2A4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800DC2A8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DC2AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DC2B0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DC2B4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800DC2B8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DC2BC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800DC2C0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DC2C4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800DC2C8: addiu       $a1, $a1, 0x4300
    ctx->r5 = ADD32(ctx->r5, 0X4300);
    // 0x800DC2CC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DC2D0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DC2D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DC2D8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DC2DC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DC2E0: jal         0x80027464
    // 0x800DC2E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DC2E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DC2E8: b           L_800DC2F0
    // 0x800DC2EC: nop

        goto L_800DC2F0;
    // 0x800DC2EC: nop

L_800DC2F0:
    // 0x800DC2F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC2F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DC2F8: jr          $ra
    // 0x800DC2FC: nop

    return;
    // 0x800DC2FC: nop

;}
RECOMP_FUNC void func_8006E7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E7CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006E7D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006E7D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006E7D8: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006E7DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006E7E0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8006E7E4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006E7E8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8006E7EC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E7F0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8006E7F4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8006E7F8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E7FC: lui         $t0, 0x100
    ctx->r8 = S32(0X100 << 16);
    // 0x8006E800: addiu       $t0, $t0, 0x5A0
    ctx->r8 = ADD32(ctx->r8, 0X5A0);
    // 0x8006E804: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006E808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8006E80C: lw          $a0, 0x753C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X753C);
    // 0x8006E810: jal         0x8006E1B4
    // 0x8006E814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8006E1B4(rdram, ctx);
        goto after_0;
    // 0x8006E814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8006E818: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8006E81C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8006E820: addiu       $t3, $t2, 0x2A0
    ctx->r11 = ADD32(ctx->r10, 0X2A0);
    // 0x8006E824: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8006E828: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8006E82C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_8006E830:
    // 0x8006E830: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8006E834: nop

    // 0x8006E838: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8006E83C: nop

    // 0x8006E840: beq         $t6, $zero, L_8006E858
    if (ctx->r14 == 0) {
        // 0x8006E844: nop
    
            goto L_8006E858;
    }
    // 0x8006E844: nop

    // 0x8006E848: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006E84C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006E850: jal         0x8006E1B4
    // 0x8006E854: nop

    func_8006E1B4(rdram, ctx);
        goto after_1;
    // 0x8006E854: nop

    after_1:
L_8006E858:
    // 0x8006E858: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8006E85C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8006E860: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8006E864: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x8006E868: addiu       $t8, $t7, 0x150
    ctx->r24 = ADD32(ctx->r15, 0X150);
    // 0x8006E86C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8006E870: bne         $at, $zero, L_8006E830
    if (ctx->r1 != 0) {
        // 0x8006E874: sw          $t0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r8;
            goto L_8006E830;
    }
    // 0x8006E874: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8006E878: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8006E87C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8006E880: addiu       $t2, $t1, 0x1260
    ctx->r10 = ADD32(ctx->r9, 0X1260);
    // 0x8006E884: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x8006E888: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8006E88C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_8006E890:
    // 0x8006E890: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8006E894: nop

    // 0x8006E898: lh          $t5, 0xA4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA4);
    // 0x8006E89C: nop

    // 0x8006E8A0: beq         $t5, $zero, L_8006E904
    if (ctx->r13 == 0) {
        // 0x8006E8A4: nop
    
            goto L_8006E904;
    }
    // 0x8006E8A4: nop

    // 0x8006E8A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006E8AC: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x8006E8B0: nop

    // 0x8006E8B4: slti        $at, $t6, 0x80
    ctx->r1 = SIGNED(ctx->r14) < 0X80 ? 1 : 0;
    // 0x8006E8B8: beq         $at, $zero, L_8006E8F4
    if (ctx->r1 == 0) {
        // 0x8006E8BC: nop
    
            goto L_8006E8F4;
    }
    // 0x8006E8BC: nop

    // 0x8006E8C0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8006E8C4: nop

    // 0x8006E8C8: lbu         $t8, 0x131($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X131);
    // 0x8006E8CC: nop

    // 0x8006E8D0: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x8006E8D4: bne         $t9, $zero, L_8006E8EC
    if (ctx->r25 != 0) {
        // 0x8006E8D8: nop
    
            goto L_8006E8EC;
    }
    // 0x8006E8D8: nop

    // 0x8006E8DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006E8E0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006E8E4: jal         0x8006E1B4
    // 0x8006E8E8: nop

    func_8006E1B4(rdram, ctx);
        goto after_2;
    // 0x8006E8E8: nop

    after_2:
L_8006E8EC:
    // 0x8006E8EC: b           L_8006E904
    // 0x8006E8F0: nop

        goto L_8006E904;
    // 0x8006E8F0: nop

L_8006E8F4:
    // 0x8006E8F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8006E8F8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8006E8FC: jal         0x8006E1B4
    // 0x8006E900: nop

    func_8006E1B4(rdram, ctx);
        goto after_3;
    // 0x8006E900: nop

    after_3:
L_8006E904:
    // 0x8006E904: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8006E908: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8006E90C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8006E910: slti        $at, $t3, 0x4E
    ctx->r1 = SIGNED(ctx->r11) < 0X4E ? 1 : 0;
    // 0x8006E914: addiu       $t1, $t0, 0x150
    ctx->r9 = ADD32(ctx->r8, 0X150);
    // 0x8006E918: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8006E91C: bne         $at, $zero, L_8006E890
    if (ctx->r1 != 0) {
        // 0x8006E920: sw          $t3, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r11;
            goto L_8006E890;
    }
    // 0x8006E920: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8006E924: b           L_8006E92C
    // 0x8006E928: nop

        goto L_8006E92C;
    // 0x8006E928: nop

L_8006E92C:
    // 0x8006E92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006E930: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006E934: jr          $ra
    // 0x8006E938: nop

    return;
    // 0x8006E938: nop

;}
RECOMP_FUNC void func_8009D9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D9BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009D9C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D9C4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8009D9C8: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x8009D9CC: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x8009D9D0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009D9D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009D9D8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8009D9DC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009D9E0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8009D9E4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8009D9E8: addiu       $a1, $a1, 0x35E0
    ctx->r5 = ADD32(ctx->r5, 0X35E0);
    // 0x8009D9EC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8009D9F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8009D9F4: jal         0x80027464
    // 0x8009D9F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009D9F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8009D9FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009DA00: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009DA04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009DA08: beq         $t6, $at, L_8009DA20
    if (ctx->r14 == ctx->r1) {
        // 0x8009DA0C: nop
    
            goto L_8009DA20;
    }
    // 0x8009DA0C: nop

    // 0x8009DA10: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009DA14: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009DA18: jal         0x80027B34
    // 0x8009DA1C: addiu       $a1, $a1, 0x485C
    ctx->r5 = ADD32(ctx->r5, 0X485C);
    func_80027B34(rdram, ctx);
        goto after_1;
    // 0x8009DA1C: addiu       $a1, $a1, 0x485C
    ctx->r5 = ADD32(ctx->r5, 0X485C);
    after_1:
L_8009DA20:
    // 0x8009DA20: b           L_8009DA28
    // 0x8009DA24: nop

        goto L_8009DA28;
    // 0x8009DA24: nop

L_8009DA28:
    // 0x8009DA28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009DA2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009DA30: jr          $ra
    // 0x8009DA34: nop

    return;
    // 0x8009DA34: nop

;}
RECOMP_FUNC void func_800C2E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2E50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C2E54: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800C2E58: nop

    // 0x800C2E5C: bne         $t6, $zero, L_800C2EB8
    if (ctx->r14 != 0) {
        // 0x800C2E60: nop
    
            goto L_800C2EB8;
    }
    // 0x800C2E60: nop

    // 0x800C2E64: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800C2E68: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800C2E6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C2E70: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800C2E74: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C2E78: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C2E7C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C2E80: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C2E84: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C2E88: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800C2E8C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800C2E90: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C2E94: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C2E98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C2E9C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C2EA0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C2EA4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C2EA8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C2EAC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C2EB0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C2EB4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800C2EB8:
    // 0x800C2EB8: jr          $ra
    // 0x800C2EBC: nop

    return;
    // 0x800C2EBC: nop

    // 0x800C2EC0: jr          $ra
    // 0x800C2EC4: nop

    return;
    // 0x800C2EC4: nop

;}
RECOMP_FUNC void func_800EF6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EF6AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EF6B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EF6B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EF6B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EF6BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EF6C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EF6C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EF6C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EF6CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EF6D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EF6D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EF6D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EF6DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800EF6E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EF6E4: nop

    // 0x800EF6E8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800EF6EC: nop

    // 0x800EF6F0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800EF6F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EF6F8: nop

    // 0x800EF6FC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EF700: nop

    // 0x800EF704: bne         $t3, $zero, L_800EF848
    if (ctx->r11 != 0) {
        // 0x800EF708: nop
    
            goto L_800EF848;
    }
    // 0x800EF708: nop

    // 0x800EF70C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800EF710: nop

    // 0x800EF714: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800EF718: nop

    // 0x800EF71C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800EF720: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800EF724: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800EF728: nop

    // 0x800EF72C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800EF730: nop

    // 0x800EF734: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800EF738: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EF73C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800EF740: nop

    // 0x800EF744: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x800EF748: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EF74C: nop

    // 0x800EF750: lwc1        $f6, 0x2C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800EF754: nop

    // 0x800EF758: swc1        $f6, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f6.u32l;
    // 0x800EF75C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EF760: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800EF764: nop

    // 0x800EF768: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x800EF76C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF770: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800EF774: addiu       $t2, $t2, -0x6A88
    ctx->r10 = ADD32(ctx->r10, -0X6A88);
    // 0x800EF778: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF77C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800EF780: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EF784: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EF788: jal         0x8001C0EC
    // 0x800EF78C: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EF78C: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800EF790: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800EF794: addiu       $t3, $t3, -0x69AC
    ctx->r11 = ADD32(ctx->r11, -0X69AC);
    // 0x800EF798: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EF79C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800EF7A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EF7A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EF7A8: jal         0x8001C0EC
    // 0x800EF7AC: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EF7AC: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800EF7B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EF7B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EF7B8: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800EF7BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EF7C0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800EF7C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EF7C8: jal         0x8001ABF4
    // 0x800EF7CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800EF7CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800EF7D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800EF7D4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EF7D8: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800EF7DC: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x800EF7E0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800EF7E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EF7E8: jal         0x8001ABF4
    // 0x800EF7EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800EF7EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800EF7F0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800EF7F4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800EF7F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EF7FC: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800EF800: nop

    // 0x800EF804: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800EF808: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800EF80C: nop

    // 0x800EF810: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800EF814: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800EF818: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800EF81C: nop

    // 0x800EF820: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800EF824: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x800EF828: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800EF82C: sh          $t8, 0xBE($t6)
    MEM_H(0XBE, ctx->r14) = ctx->r24;
    // 0x800EF830: nop

    // 0x800EF834: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800EF838: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EF83C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800EF840: nop

    // 0x800EF844: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
L_800EF848:
    // 0x800EF848: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800EF84C: nop

    // 0x800EF850: lh          $t0, 0xBE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBE);
    // 0x800EF854: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800EF858: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800EF85C: nop

    // 0x800EF860: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800EF864: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x800EF868: nop

    // 0x800EF86C: bc1f        L_800EF8C8
    if (!c1cs) {
        // 0x800EF870: nop
    
            goto L_800EF8C8;
    }
    // 0x800EF870: nop

    // 0x800EF874: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800EF878: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800EF87C: nop

    // 0x800EF880: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x800EF884: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EF888: nop

    // 0x800EF88C: lh          $t3, 0xBE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBE);
    // 0x800EF890: nop

    // 0x800EF894: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800EF898: nop

    // 0x800EF89C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EF8A0: swc1        $f6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f6.u32l;
    // 0x800EF8A4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800EF8A8: nop

    // 0x800EF8AC: sh          $zero, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = 0;
    // 0x800EF8B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800EF8B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800EF8B8: sh          $t4, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r12;
    // 0x800EF8BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800EF8C0: b           L_800EF8FC
    // 0x800EF8C4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_800EF8FC;
    // 0x800EF8C4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800EF8C8:
    // 0x800EF8C8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800EF8CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800EF8D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800EF8D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EF8D8: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800EF8DC: lwc1        $f8, 0x28($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800EF8E0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800EF8E4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EF8E8: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800EF8EC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800EF8F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EF8F4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800EF8F8: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
L_800EF8FC:
    // 0x800EF8FC: b           L_800EF904
    // 0x800EF900: nop

        goto L_800EF904;
    // 0x800EF900: nop

L_800EF904:
    // 0x800EF904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EF908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EF90C: jr          $ra
    // 0x800EF910: nop

    return;
    // 0x800EF910: nop

;}
RECOMP_FUNC void func_800903CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800903CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800903D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800903D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800903D8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800903DC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800903E0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800903E4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800903E8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800903EC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800903F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800903F4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800903F8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800903FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090400: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090404: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090408: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009040C: addiu       $a1, $a1, 0x13E4
    ctx->r5 = ADD32(ctx->r5, 0X13E4);
    // 0x80090410: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090414: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090418: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009041C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090420: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090424: jal         0x80027464
    // 0x80090428: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090428: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009042C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090430: b           L_80090438
    // 0x80090434: nop

        goto L_80090438;
    // 0x80090434: nop

L_80090438:
    // 0x80090438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009043C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090440: jr          $ra
    // 0x80090444: nop

    return;
    // 0x80090444: nop

;}
RECOMP_FUNC void func_8007D59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D59C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007D5A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007D5A4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8007D5A8: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8007D5AC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8007D5B0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007D5B4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007D5B8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8007D5BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007D5C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007D5C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D5C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007D5CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D5D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007D5D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007D5D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007D5DC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007D5E0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D5E4: jal         0x8007D2C8
    // 0x8007D5E8: nop

    func_8007D2C8(rdram, ctx);
        goto after_0;
    // 0x8007D5E8: nop

    after_0:
    // 0x8007D5EC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007D5F0: lh          $t0, -0x1D08($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1D08);
    // 0x8007D5F4: nop

    // 0x8007D5F8: beq         $t0, $zero, L_8007D744
    if (ctx->r8 == 0) {
        // 0x8007D5FC: nop
    
            goto L_8007D744;
    }
    // 0x8007D5FC: nop

    // 0x8007D600: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007D604: lh          $t1, -0x1D08($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1D08);
    // 0x8007D608: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007D60C: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8007D610: mflo        $t2
    ctx->r10 = lo;
    // 0x8007D614: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007D618: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8007D61C: nop

    // 0x8007D620: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007D624: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8007D628: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007D62C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007D630: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007D634: nop

    // 0x8007D638: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8007D63C: nop

    // 0x8007D640: bc1f        L_8007D658
    if (!c1cs) {
        // 0x8007D644: nop
    
            goto L_8007D658;
    }
    // 0x8007D644: nop

    // 0x8007D648: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007D64C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007D650: nop

    // 0x8007D654: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_8007D658:
    // 0x8007D658: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007D65C: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x8007D660: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007D664: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007D668: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8007D66C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8007D670: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8007D674: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8007D678: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007D67C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8007D680: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8007D684: cvt.s.d     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f22.fl = CVT_S_D(ctx->f16.d);
    // 0x8007D688: swc1        $f22, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f22.u32l;
    // 0x8007D68C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8007D690: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x8007D694: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x8007D698: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007D69C: nop

    // 0x8007D6A0: swc1        $f20, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
    // 0x8007D6A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007D6A8: lh          $t7, -0x1D08($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1D08);
    // 0x8007D6AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007D6B0: bne         $t7, $at, L_8007D6DC
    if (ctx->r15 != ctx->r1) {
        // 0x8007D6B4: nop
    
            goto L_8007D6DC;
    }
    // 0x8007D6B4: nop

    // 0x8007D6B8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007D6BC: addiu       $a3, $a3, 0x6540
    ctx->r7 = ADD32(ctx->r7, 0X6540);
    // 0x8007D6C0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D6C4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8007D6C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007D6CC: jal         0x8001ABF4
    // 0x8007D6D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8007D6D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8007D6D4: b           L_8007D744
    // 0x8007D6D8: nop

        goto L_8007D744;
    // 0x8007D6D8: nop

L_8007D6DC:
    // 0x8007D6DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007D6E0: lh          $t8, -0x1D08($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1D08);
    // 0x8007D6E4: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007D6E8: bne         $t8, $at, L_8007D714
    if (ctx->r24 != ctx->r1) {
        // 0x8007D6EC: nop
    
            goto L_8007D714;
    }
    // 0x8007D6EC: nop

    // 0x8007D6F0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007D6F4: addiu       $a3, $a3, 0x6540
    ctx->r7 = ADD32(ctx->r7, 0X6540);
    // 0x8007D6F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D6FC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8007D700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007D704: jal         0x8001ABF4
    // 0x8007D708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8007D708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8007D70C: b           L_8007D744
    // 0x8007D710: nop

        goto L_8007D744;
    // 0x8007D710: nop

L_8007D714:
    // 0x8007D714: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007D718: lh          $t9, -0x1D08($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1D08);
    // 0x8007D71C: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x8007D720: bne         $t9, $at, L_8007D744
    if (ctx->r25 != ctx->r1) {
        // 0x8007D724: nop
    
            goto L_8007D744;
    }
    // 0x8007D724: nop

    // 0x8007D728: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007D72C: addiu       $a3, $a3, 0x6540
    ctx->r7 = ADD32(ctx->r7, 0X6540);
    // 0x8007D730: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8007D734: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8007D738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007D73C: jal         0x8001ABF4
    // 0x8007D740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8007D740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_8007D744:
    // 0x8007D744: b           L_8007D74C
    // 0x8007D748: nop

        goto L_8007D74C;
    // 0x8007D748: nop

L_8007D74C:
    // 0x8007D74C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007D750: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007D754: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007D758: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007D75C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007D760: jr          $ra
    // 0x8007D764: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007D764: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
