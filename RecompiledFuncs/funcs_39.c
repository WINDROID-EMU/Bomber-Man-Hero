#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8009A390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009A390: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009A394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009A398: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009A39C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009A3A0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009A3A4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009A3A8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009A3AC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009A3B0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009A3B4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009A3B8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009A3BC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009A3C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009A3C4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009A3C8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009A3CC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009A3D0: addiu       $a1, $a1, 0x34A8
    ctx->r5 = ADD32(ctx->r5, 0X34A8);
    // 0x8009A3D4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009A3D8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009A3DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8009A3E0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009A3E4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009A3E8: jal         0x80027464
    // 0x8009A3EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009A3EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009A3F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009A3F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009A3F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009A3FC: beq         $t1, $at, L_8009A4C4
    if (ctx->r9 == ctx->r1) {
        // 0x8009A400: nop
    
            goto L_8009A4C4;
    }
    // 0x8009A400: nop

    // 0x8009A404: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009A408: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8009A40C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009A410: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009A414: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009A418: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009A41C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009A420: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x8009A424: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x8009A428: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009A42C: jal         0x80098864
    // 0x8009A430: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_1;
    // 0x8009A430: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8009A434: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009A438: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8009A43C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8009A440: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009A444: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009A448: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009A44C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8009A450: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x8009A454: lh          $a0, 0x423A($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423A);
    // 0x8009A458: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009A45C: jal         0x80098864
    // 0x8009A460: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_2;
    // 0x8009A460: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8009A464: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8009A468: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8009A46C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8009A470: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009A474: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009A478: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009A47C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8009A480: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8009A484: lh          $a0, 0x423C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423C);
    // 0x8009A488: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009A48C: jal         0x80098864
    // 0x8009A490: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_3;
    // 0x8009A490: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8009A494: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8009A498: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8009A49C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8009A4A0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8009A4A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009A4A8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8009A4AC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009A4B0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x8009A4B4: lh          $a0, 0x423E($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423E);
    // 0x8009A4B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009A4BC: jal         0x80098864
    // 0x8009A4C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_4;
    // 0x8009A4C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_8009A4C4:
    // 0x8009A4C4: b           L_8009A4CC
    // 0x8009A4C8: nop

        goto L_8009A4CC;
    // 0x8009A4C8: nop

L_8009A4CC:
    // 0x8009A4CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009A4D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009A4D4: jr          $ra
    // 0x8009A4D8: nop

    return;
    // 0x8009A4D8: nop

;}
RECOMP_FUNC void func_800BA468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA468: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BA46C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA470: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BA474: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BA478: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BA47C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BA480: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA484: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BA488: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA48C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BA490: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BA494: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BA498: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BA49C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BA4A0: nop

    // 0x800BA4A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BA4A8: nop

    // 0x800BA4AC: bne         $t1, $zero, L_800BA4EC
    if (ctx->r9 != 0) {
        // 0x800BA4B0: nop
    
            goto L_800BA4EC;
    }
    // 0x800BA4B0: nop

    // 0x800BA4B4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BA4B8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BA4BC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BA4C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BA4C4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BA4C8: nop

    // 0x800BA4CC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BA4D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BA4D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BA4D8: nop

    // 0x800BA4DC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BA4E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BA4E4: addiu       $t6, $zero, 0x82
    ctx->r14 = ADD32(0, 0X82);
    // 0x800BA4E8: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
L_800BA4EC:
    // 0x800BA4EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA4F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA4F4: jal         0x80029C40
    // 0x800BA4F8: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BA4F8: nop

    after_0:
    // 0x800BA4FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA500: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA504: jal         0x80029D04
    // 0x800BA508: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BA508: nop

    after_1:
    // 0x800BA50C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BA510: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800BA514: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800BA518: nop

    // 0x800BA51C: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x800BA520: mfhi        $t0
    ctx->r8 = hi;
    // 0x800BA524: bne         $t0, $zero, L_800BA548
    if (ctx->r8 != 0) {
        // 0x800BA528: nop
    
            goto L_800BA548;
    }
    // 0x800BA528: nop

    // 0x800BA52C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BA538: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x800BA53C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800BA540: jal         0x800175F0
    // 0x800BA544: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800BA544: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800BA548:
    // 0x800BA548: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BA54C: nop

    // 0x800BA550: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x800BA554: nop

    // 0x800BA558: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800BA55C: sh          $t3, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r11;
    // 0x800BA560: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BA564: nop

    // 0x800BA568: lh          $t5, 0xB2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB2);
    // 0x800BA56C: nop

    // 0x800BA570: bgtz        $t5, L_800BA590
    if (SIGNED(ctx->r13) > 0) {
        // 0x800BA574: nop
    
            goto L_800BA590;
    }
    // 0x800BA574: nop

    // 0x800BA578: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BA57C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800BA580: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800BA584: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BA588: nop

    // 0x800BA58C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800BA590:
    // 0x800BA590: b           L_800BA598
    // 0x800BA594: nop

        goto L_800BA598;
    // 0x800BA594: nop

L_800BA598:
    // 0x800BA598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA59C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BA5A0: jr          $ra
    // 0x800BA5A4: nop

    return;
    // 0x800BA5A4: nop

;}
RECOMP_FUNC void func_800A6770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6770: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A6774: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A6778: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A677C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A6780: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A6784: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A6788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A678C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A6790: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A6794: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A6798: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A679C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A67A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A67A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A67A8: nop

    // 0x800A67AC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800A67B0: nop

    // 0x800A67B4: sh          $t1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r9;
    // 0x800A67B8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A67BC: nop

    // 0x800A67C0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A67C4: nop

    // 0x800A67C8: bne         $t3, $zero, L_800A6884
    if (ctx->r11 != 0) {
        // 0x800A67CC: nop
    
            goto L_800A6884;
    }
    // 0x800A67CC: nop

    // 0x800A67D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A67D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800A67D8: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800A67DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A67E0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A67E4: nop

    // 0x800A67E8: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800A67EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A67F0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A67F4: nop

    // 0x800A67F8: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800A67FC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A6800: nop

    // 0x800A6804: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x800A6808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A680C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6810: jal         0x8002A560
    // 0x800A6814: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8002A560(rdram, ctx);
        goto after_0;
    // 0x800A6814: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_0:
    // 0x800A6818: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A681C: negu        $t9, $v0
    ctx->r25 = SUB32(0, ctx->r2);
    // 0x800A6820: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
    // 0x800A6824: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A6828: addiu       $t1, $zero, 0x4B0
    ctx->r9 = ADD32(0, 0X4B0);
    // 0x800A682C: sh          $t1, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = ctx->r9;
    // 0x800A6830: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x800A6834: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A6838: beq         $t3, $at, L_800A6860
    if (ctx->r11 == ctx->r1) {
        // 0x800A683C: nop
    
            goto L_800A6860;
    }
    // 0x800A683C: nop

    // 0x800A6840: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800A6844: addiu       $t4, $t4, 0x71B0
    ctx->r12 = ADD32(ctx->r12, 0X71B0);
    // 0x800A6848: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800A684C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800A6850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A6858: jal         0x8001C0EC
    // 0x800A685C: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800A685C: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    after_1:
L_800A6860:
    // 0x800A6860: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6864: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800A6868: addiu       $t5, $t5, 0x7088
    ctx->r13 = ADD32(ctx->r13, 0X7088);
    // 0x800A686C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6870: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A6874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6878: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800A687C: jal         0x8001C0EC
    // 0x800A6880: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800A6880: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_2:
L_800A6884:
    // 0x800A6884: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A6888: nop

    // 0x800A688C: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800A6890: nop

    // 0x800A6894: bne         $t7, $zero, L_800A68A8
    if (ctx->r15 != 0) {
        // 0x800A6898: nop
    
            goto L_800A68A8;
    }
    // 0x800A6898: nop

    // 0x800A689C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A68A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A68A4: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
L_800A68A8:
    // 0x800A68A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A68AC: nop

    // 0x800A68B0: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800A68B4: nop

    // 0x800A68B8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800A68BC: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x800A68C0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A68C4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A68C8: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800A68CC: nop

    // 0x800A68D0: bne         $t4, $at, L_800A68F0
    if (ctx->r12 != ctx->r1) {
        // 0x800A68D4: nop
    
            goto L_800A68F0;
    }
    // 0x800A68D4: nop

    // 0x800A68D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A68DC: nop

    // 0x800A68E0: lh          $t6, 0xAA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAA);
    // 0x800A68E4: nop

    // 0x800A68E8: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x800A68EC: sh          $t7, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r15;
L_800A68F0:
    // 0x800A68F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A68F4: nop

    // 0x800A68F8: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A68FC: nop

    // 0x800A6900: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x800A6904: bne         $at, $zero, L_800A6934
    if (ctx->r1 != 0) {
        // 0x800A6908: nop
    
            goto L_800A6934;
    }
    // 0x800A6908: nop

    // 0x800A690C: slti        $at, $t9, 0x21
    ctx->r1 = SIGNED(ctx->r25) < 0X21 ? 1 : 0;
    // 0x800A6910: beq         $at, $zero, L_800A6934
    if (ctx->r1 == 0) {
        // 0x800A6914: nop
    
            goto L_800A6934;
    }
    // 0x800A6914: nop

    // 0x800A6918: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A691C: nop

    // 0x800A6920: lh          $t2, 0xAC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAC);
    // 0x800A6924: nop

    // 0x800A6928: addiu       $t0, $t2, 0x5A
    ctx->r8 = ADD32(ctx->r10, 0X5A);
    // 0x800A692C: b           L_800A6980
    // 0x800A6930: sh          $t0, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = ctx->r8;
        goto L_800A6980;
    // 0x800A6930: sh          $t0, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = ctx->r8;
L_800A6934:
    // 0x800A6934: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A6938: nop

    // 0x800A693C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800A6940: nop

    // 0x800A6944: slti        $at, $t4, 0x21
    ctx->r1 = SIGNED(ctx->r12) < 0X21 ? 1 : 0;
    // 0x800A6948: bne         $at, $zero, L_800A6980
    if (ctx->r1 != 0) {
        // 0x800A694C: nop
    
            goto L_800A6980;
    }
    // 0x800A694C: nop

    // 0x800A6950: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A6954: nop

    // 0x800A6958: lh          $t7, 0xAC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAC);
    // 0x800A695C: nop

    // 0x800A6960: bltz        $t7, L_800A6980
    if (SIGNED(ctx->r15) < 0) {
        // 0x800A6964: nop
    
            goto L_800A6980;
    }
    // 0x800A6964: nop

    // 0x800A6968: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A696C: nop

    // 0x800A6970: lh          $t8, 0xAC($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XAC);
    // 0x800A6974: nop

    // 0x800A6978: addiu       $t9, $t8, -0xA5
    ctx->r25 = ADD32(ctx->r24, -0XA5);
    // 0x800A697C: sh          $t9, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r25;
L_800A6980:
    // 0x800A6980: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A6984: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x800A6988: lh          $t0, 0xAC($t2)
    ctx->r8 = MEM_H(ctx->r10, 0XAC);
    // 0x800A698C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800A6990: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x800A6994: mflo        $t1
    ctx->r9 = lo;
    // 0x800A6998: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800A699C: nop

    // 0x800A69A0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A69A4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800A69A8: jal         0x800A6D1C
    // 0x800A69AC: nop

    func_800A6D1C(rdram, ctx);
        goto after_3;
    // 0x800A69AC: nop

    after_3:
    // 0x800A69B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A69B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A69B8: jal         0x80029C40
    // 0x800A69BC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A69BC: nop

    after_4:
    // 0x800A69C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A69C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A69C8: jal         0x80029D04
    // 0x800A69CC: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A69CC: nop

    after_5:
    // 0x800A69D0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A69D4: nop

    // 0x800A69D8: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800A69DC: nop

    // 0x800A69E0: swc1        $f10, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f10.u32l;
    // 0x800A69E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A69E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A69EC: jal         0x8001B44C
    // 0x800A69F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800A69F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800A69F4: beq         $v0, $zero, L_800A6A44
    if (ctx->r2 == 0) {
        // 0x800A69F8: nop
    
            goto L_800A6A44;
    }
    // 0x800A69F8: nop

    // 0x800A69FC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A6A00: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x800A6A04: sh          $t4, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r12;
    // 0x800A6A08: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A6A0C: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x800A6A10: sh          $t7, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r15;
    // 0x800A6A14: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A6A18: nop

    // 0x800A6A1C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800A6A20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6A24: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800A6A28: addiu       $t5, $t5, 0x7088
    ctx->r13 = ADD32(ctx->r13, 0X7088);
    // 0x800A6A2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6A30: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A6A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6A38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A6A3C: jal         0x8001C0EC
    // 0x800A6A40: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800A6A40: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_7:
L_800A6A44:
    // 0x800A6A44: b           L_800A6A4C
    // 0x800A6A48: nop

        goto L_800A6A4C;
    // 0x800A6A48: nop

L_800A6A4C:
    // 0x800A6A4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A6A50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A6A54: jr          $ra
    // 0x800A6A58: nop

    return;
    // 0x800A6A58: nop

;}
RECOMP_FUNC void func_800BF8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF8AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BF8B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BF8B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BF8B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BF8BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BF8C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BF8C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF8C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BF8CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF8D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BF8D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BF8D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BF8DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BF8E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BF8E4: nop

    // 0x800BF8E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BF8EC: nop

    // 0x800BF8F0: bne         $t1, $zero, L_800BF99C
    if (ctx->r9 != 0) {
        // 0x800BF8F4: nop
    
            goto L_800BF99C;
    }
    // 0x800BF8F4: nop

    // 0x800BF8F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BF8FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BF900: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BF904: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BF908: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BF90C: nop

    // 0x800BF910: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BF914: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BF918: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BF91C: nop

    // 0x800BF920: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BF924: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BF928: nop

    // 0x800BF92C: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800BF930: nop

    // 0x800BF934: bne         $t7, $zero, L_800BF968
    if (ctx->r15 != 0) {
        // 0x800BF938: nop
    
            goto L_800BF968;
    }
    // 0x800BF938: nop

    // 0x800BF93C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF940: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800BF944: addiu       $t8, $t8, 0x7EE8
    ctx->r24 = ADD32(ctx->r24, 0X7EE8);
    // 0x800BF948: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF94C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800BF950: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800BF954: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800BF958: jal         0x8001C0EC
    // 0x800BF95C: addiu       $a3, $zero, 0x116
    ctx->r7 = ADD32(0, 0X116);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800BF95C: addiu       $a3, $zero, 0x116
    ctx->r7 = ADD32(0, 0X116);
    after_0:
    // 0x800BF960: b           L_800BF98C
    // 0x800BF964: nop

        goto L_800BF98C;
    // 0x800BF964: nop

L_800BF968:
    // 0x800BF968: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF96C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800BF970: addiu       $t9, $t9, 0x7EE0
    ctx->r25 = ADD32(ctx->r25, 0X7EE0);
    // 0x800BF974: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF978: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800BF97C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800BF980: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800BF984: jal         0x8001C0EC
    // 0x800BF988: addiu       $a3, $zero, 0x115
    ctx->r7 = ADD32(0, 0X115);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800BF988: addiu       $a3, $zero, 0x115
    ctx->r7 = ADD32(0, 0X115);
    after_1:
L_800BF98C:
    // 0x800BF98C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF990: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF994: jal         0x8001BBDC
    // 0x800BF998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800BF998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800BF99C:
    // 0x800BF99C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF9A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF9A4: jal         0x80029C40
    // 0x800BF9A8: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800BF9A8: nop

    after_3:
    // 0x800BF9AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF9B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF9B4: jal         0x80029D04
    // 0x800BF9B8: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800BF9B8: nop

    after_4:
    // 0x800BF9BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF9C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF9C4: jal         0x8001B44C
    // 0x800BF9C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x800BF9C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x800BF9CC: beq         $v0, $zero, L_800BF9FC
    if (ctx->r2 == 0) {
        // 0x800BF9D0: nop
    
            goto L_800BF9FC;
    }
    // 0x800BF9D0: nop

    // 0x800BF9D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF9D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF9DC: jal         0x8001BBDC
    // 0x800BF9E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x800BF9E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x800BF9E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF9E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF9EC: jal         0x8002B0E4
    // 0x800BF9F0: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800BF9F0: nop

    after_7:
    // 0x800BF9F4: b           L_800BFA04
    // 0x800BF9F8: nop

        goto L_800BFA04;
    // 0x800BF9F8: nop

L_800BF9FC:
    // 0x800BF9FC: b           L_800BFA04
    // 0x800BFA00: nop

        goto L_800BFA04;
    // 0x800BFA00: nop

L_800BFA04:
    // 0x800BFA04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BFA08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BFA0C: jr          $ra
    // 0x800BFA10: nop

    return;
    // 0x800BFA10: nop

;}
RECOMP_FUNC void func_800795C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800795C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800795CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800795D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800795D4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800795D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800795DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800795E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800795E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800795E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800795EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800795F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800795F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800795F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800795FC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80079600: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80079604: lh          $t1, 0xE4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE4);
    // 0x80079608: nop

    // 0x8007960C: bne         $t1, $at, L_80079620
    if (ctx->r9 != ctx->r1) {
        // 0x80079610: nop
    
            goto L_80079620;
    }
    // 0x80079610: nop

    // 0x80079614: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80079618: b           L_80079648
    // 0x8007961C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
        goto L_80079648;
    // 0x8007961C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
L_80079620:
    // 0x80079620: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80079624: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80079628: lh          $t4, 0xE4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE4);
    // 0x8007962C: nop

    // 0x80079630: bne         $t4, $at, L_80079644
    if (ctx->r12 != ctx->r1) {
        // 0x80079634: nop
    
            goto L_80079644;
    }
    // 0x80079634: nop

    // 0x80079638: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8007963C: b           L_80079648
    // 0x80079640: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
        goto L_80079648;
    // 0x80079640: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
L_80079644:
    // 0x80079644: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80079648:
    // 0x80079648: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007964C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80079650: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80079654: lwc1        $f14, 0x4($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80079658: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x8007965C: jal         0x8007E76C
    // 0x80079660: nop

    func_8007E76C(rdram, ctx);
        goto after_0;
    // 0x80079660: nop

    after_0:
    // 0x80079664: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80079668: jal         0x8001A928
    // 0x8007966C: nop

    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x8007966C: nop

    after_1:
    // 0x80079670: b           L_80079678
    // 0x80079674: nop

        goto L_80079678;
    // 0x80079674: nop

L_80079678:
    // 0x80079678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007967C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80079680: jr          $ra
    // 0x80079684: nop

    return;
    // 0x80079684: nop

;}
RECOMP_FUNC void func_800C1214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1214: jr          $ra
    // 0x800C1218: nop

    return;
    // 0x800C1218: nop

    // 0x800C121C: jr          $ra
    // 0x800C1220: nop

    return;
    // 0x800C1220: nop

;}
RECOMP_FUNC void func_800B73FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B73FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B7400: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B7404: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B7408: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B740C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B7410: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B7414: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7418: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B741C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7420: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B7424: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B7428: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B742C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B7430: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7434: nop

    // 0x800B7438: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B743C: nop

    // 0x800B7440: bne         $t1, $zero, L_800B74C4
    if (ctx->r9 != 0) {
        // 0x800B7444: nop
    
            goto L_800B74C4;
    }
    // 0x800B7444: nop

    // 0x800B7448: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B744C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B7450: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B7454: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x800B7458: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B745C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7460: nop

    // 0x800B7464: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B7468: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B746C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7470: nop

    // 0x800B7474: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B7478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B747C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800B7480: addiu       $t6, $t6, 0x7BBC
    ctx->r14 = ADD32(ctx->r14, 0X7BBC);
    // 0x800B7484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7488: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800B748C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B7490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B7494: jal         0x8001C0EC
    // 0x800B7498: addiu       $a3, $zero, 0xBA
    ctx->r7 = ADD32(0, 0XBA);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800B7498: addiu       $a3, $zero, 0xBA
    ctx->r7 = ADD32(0, 0XBA);
    after_0:
    // 0x800B749C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B74A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B74A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B74A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B74AC: jal         0x80019448
    // 0x800B74B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x800B74B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x800B74B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B74B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B74BC: jal         0x800272E8
    // 0x800B74C0: nop

    func_800272E8(rdram, ctx);
        goto after_2;
    // 0x800B74C0: nop

    after_2:
L_800B74C4:
    // 0x800B74C4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B74C8: nop

    // 0x800B74CC: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800B74D0: nop

    // 0x800B74D4: swc1        $f8, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f8.u32l;
    // 0x800B74D8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B74DC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800B74E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B74E4: lwc1        $f12, 0x18($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X18);
    // 0x800B74E8: jal         0x80015538
    // 0x800B74EC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800B74EC: nop

    after_3:
    // 0x800B74F0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B74F4: nop

    // 0x800B74F8: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
    // 0x800B74FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7500: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7504: jal         0x80029C40
    // 0x800B7508: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800B7508: nop

    after_4:
    // 0x800B750C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7510: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7514: jal         0x80029D04
    // 0x800B7518: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800B7518: nop

    after_5:
    // 0x800B751C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B7520: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B7524: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7528: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B752C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B7530: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B7534: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B7538: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B753C: jal         0x80029018
    // 0x800B7540: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800B7540: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x800B7544: beq         $v0, $zero, L_800B7564
    if (ctx->r2 == 0) {
        // 0x800B7548: nop
    
            goto L_800B7564;
    }
    // 0x800B7548: nop

    // 0x800B754C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7550: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800B7554: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800B7558: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B755C: nop

    // 0x800B7560: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800B7564:
    // 0x800B7564: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x800B7568: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B756C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B7570: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7574: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7578: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800B757C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800B7580: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B7584: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800B7588: jal         0x800295C0
    // 0x800B758C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x800B758C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x800B7590: beq         $v0, $zero, L_800B75B0
    if (ctx->r2 == 0) {
        // 0x800B7594: nop
    
            goto L_800B75B0;
    }
    // 0x800B7594: nop

    // 0x800B7598: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B759C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800B75A0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B75A4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B75A8: nop

    // 0x800B75AC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800B75B0:
    // 0x800B75B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800B75B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B75B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B75BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B75C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B75C4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800B75C8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800B75CC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B75D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800B75D4: jal         0x800295C0
    // 0x800B75D8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x800B75D8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x800B75DC: beq         $v0, $zero, L_800B75FC
    if (ctx->r2 == 0) {
        // 0x800B75E0: nop
    
            goto L_800B75FC;
    }
    // 0x800B75E0: nop

    // 0x800B75E4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B75E8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800B75EC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800B75F0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B75F4: nop

    // 0x800B75F8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800B75FC:
    // 0x800B75FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7600: nop

    // 0x800B7604: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800B7608: nop

    // 0x800B760C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800B7610: sh          $t1, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r9;
    // 0x800B7614: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7618: nop

    // 0x800B761C: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800B7620: nop

    // 0x800B7624: bgtz        $t3, L_800B7644
    if (SIGNED(ctx->r11) > 0) {
        // 0x800B7628: nop
    
            goto L_800B7644;
    }
    // 0x800B7628: nop

    // 0x800B762C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7630: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800B7634: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800B7638: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B763C: nop

    // 0x800B7640: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800B7644:
    // 0x800B7644: b           L_800B764C
    // 0x800B7648: nop

        goto L_800B764C;
    // 0x800B7648: nop

L_800B764C:
    // 0x800B764C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B7650: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800B7654: jr          $ra
    // 0x800B7658: nop

    return;
    // 0x800B7658: nop

;}
RECOMP_FUNC void func_800F9120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9120: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F9124: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F9128: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F912C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F9130: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F9134: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9138: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F913C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9140: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F9144: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F9148: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F914C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F9150: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F9154: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800F9158: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F915C: bne         $t0, $at, L_800F9194
    if (ctx->r8 != ctx->r1) {
        // 0x800F9160: nop
    
            goto L_800F9194;
    }
    // 0x800F9160: nop

    // 0x800F9164: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800F9168: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F916C: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x800F9170: nop

    // 0x800F9174: bne         $t2, $at, L_800F9194
    if (ctx->r10 != ctx->r1) {
        // 0x800F9178: nop
    
            goto L_800F9194;
    }
    // 0x800F9178: nop

    // 0x800F917C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800F9180: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800F9184: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800F9188: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800F918C: nop

    // 0x800F9190: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800F9194:
    // 0x800F9194: b           L_800F919C
    // 0x800F9198: nop

        goto L_800F919C;
    // 0x800F9198: nop

L_800F919C:
    // 0x800F919C: jr          $ra
    // 0x800F91A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F91A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800B4120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4120: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B4124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B4128: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B412C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B4130: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B4134: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B4138: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B413C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B4140: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4144: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B4148: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B414C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B4150: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B4154: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4158: nop

    // 0x800B415C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B4160: nop

    // 0x800B4164: bne         $t1, $zero, L_800B4178
    if (ctx->r9 != 0) {
        // 0x800B4168: nop
    
            goto L_800B4178;
    }
    // 0x800B4168: nop

    // 0x800B416C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4170: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B4174: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800B4178:
    // 0x800B4178: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B417C: nop

    // 0x800B4180: lwc1        $f4, 0x3C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800B4184: nop

    // 0x800B4188: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
    // 0x800B418C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4190: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4194: jal         0x80029C40
    // 0x800B4198: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B4198: nop

    after_0:
    // 0x800B419C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B41A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B41A4: jal         0x80029D04
    // 0x800B41A8: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B41A8: nop

    after_1:
    // 0x800B41AC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B41B0: nop

    // 0x800B41B4: lh          $t6, 0xB4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB4);
    // 0x800B41B8: nop

    // 0x800B41BC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800B41C0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800B41C4: nop

    // 0x800B41C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B41CC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x800B41D0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800B41D4: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800B41D8: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800B41DC: jal         0x8002A800
    // 0x800B41E0: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_8002A800(rdram, ctx);
        goto after_2;
    // 0x800B41E0: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_2:
    // 0x800B41E4: bne         $v0, $zero, L_800B4220
    if (ctx->r2 != 0) {
        // 0x800B41E8: nop
    
            goto L_800B4220;
    }
    // 0x800B41E8: nop

    // 0x800B41EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B41F0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800B41F4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800B41F8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800B41FC: nop

    // 0x800B4200: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800B4204: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4208: nop

    // 0x800B420C: lwc1        $f10, 0x3C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800B4210: nop

    // 0x800B4214: swc1        $f10, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f10.u32l;
    // 0x800B4218: b           L_800B4248
    // 0x800B421C: nop

        goto L_800B4248;
    // 0x800B421C: nop

L_800B4220:
    // 0x800B4220: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4224: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800B4228: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800B422C: jal         0x80015538
    // 0x800B4230: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800B4230: nop

    after_3:
    // 0x800B4234: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4238: nop

    // 0x800B423C: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x800B4240: b           L_800B4248
    // 0x800B4244: nop

        goto L_800B4248;
    // 0x800B4244: nop

L_800B4248:
    // 0x800B4248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B424C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B4250: jr          $ra
    // 0x800B4254: nop

    return;
    // 0x800B4254: nop

;}
RECOMP_FUNC void func_800AC77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AC77C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AC780: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AC784: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800AC788: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800AC78C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800AC790: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800AC794: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800AC798: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800AC79C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800AC7A0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800AC7A4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800AC7A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AC7AC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800AC7B0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800AC7B4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800AC7B8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800AC7BC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AC7C0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800AC7C4: addiu       $a1, $a1, 0x394C
    ctx->r5 = ADD32(ctx->r5, 0X394C);
    // 0x800AC7C8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800AC7CC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800AC7D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800AC7D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800AC7D8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800AC7DC: jal         0x80027464
    // 0x800AC7E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800AC7E0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800AC7E4: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x800AC7E8: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800AC7EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AC7F0: beq         $t1, $at, L_800AC92C
    if (ctx->r9 == ctx->r1) {
        // 0x800AC7F4: nop
    
            goto L_800AC92C;
    }
    // 0x800AC7F4: nop

    // 0x800AC7F8: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800AC7FC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800AC800: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800AC804: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AC808: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800AC80C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AC810: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AC814: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800AC818: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AC81C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800AC820: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800AC824: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800AC828: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800AC82C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800AC830: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AC834: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800AC838: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AC83C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800AC840: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800AC844: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800AC848: lwc1        $f20, 0xC($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800AC84C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AC850: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x800AC854: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x800AC858: nop

    // 0x800AC85C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800AC860: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800AC864: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800AC868: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800AC86C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800AC870: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800AC874: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
    // 0x800AC878: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800AC87C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AC880: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800AC884: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800AC888: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800AC88C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800AC890: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800AC894: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800AC898: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800AC89C: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x800AC8A0: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800AC8A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AC8A8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800AC8AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AC8B0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800AC8B4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AC8B8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800AC8BC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800AC8C0: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x800AC8C4: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800AC8C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AC8CC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800AC8D0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AC8D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AC8D8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AC8DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AC8E0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800AC8E4: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x800AC8E8: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x800AC8EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AC8F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800AC8F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AC8F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800AC8FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AC900: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800AC904: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800AC908: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AC90C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800AC910: addiu       $t6, $t6, 0x7658
    ctx->r14 = ADD32(ctx->r14, 0X7658);
    // 0x800AC914: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x800AC918: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800AC91C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AC920: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800AC924: jal         0x8001C0EC
    // 0x800AC928: addiu       $a3, $zero, 0x91
    ctx->r7 = ADD32(0, 0X91);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800AC928: addiu       $a3, $zero, 0x91
    ctx->r7 = ADD32(0, 0X91);
    after_1:
L_800AC92C:
    // 0x800AC92C: b           L_800AC934
    // 0x800AC930: nop

        goto L_800AC934;
    // 0x800AC930: nop

L_800AC934:
    // 0x800AC934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AC938: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800AC93C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800AC940: jr          $ra
    // 0x800AC944: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AC944: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8009B4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B4C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009B4C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B4C8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009B4CC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009B4D0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009B4D4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009B4D8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009B4DC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009B4E0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009B4E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009B4E8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009B4EC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009B4F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009B4F4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009B4F8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009B4FC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009B500: addiu       $a1, $a1, 0x3508
    ctx->r5 = ADD32(ctx->r5, 0X3508);
    // 0x8009B504: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009B508: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009B50C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009B510: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009B514: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009B518: jal         0x80027464
    // 0x8009B51C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009B51C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009B520: b           L_8009B528
    // 0x8009B524: nop

        goto L_8009B528;
    // 0x8009B524: nop

L_8009B528:
    // 0x8009B528: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B52C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009B530: jr          $ra
    // 0x8009B534: nop

    return;
    // 0x8009B534: nop

;}
RECOMP_FUNC void func_8007957C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007957C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80079580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079584: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80079588: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8007958C:
    // 0x8007958C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80079590: jal         0x800794C4
    // 0x80079594: nop

    func_800794C4(rdram, ctx);
        goto after_0;
    // 0x80079594: nop

    after_0:
    // 0x80079598: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007959C: nop

    // 0x800795A0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800795A4: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x800795A8: bne         $at, $zero, L_8007958C
    if (ctx->r1 != 0) {
        // 0x800795AC: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_8007958C;
    }
    // 0x800795AC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800795B0: b           L_800795B8
    // 0x800795B4: nop

        goto L_800795B8;
    // 0x800795B4: nop

L_800795B8:
    // 0x800795B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800795BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800795C0: jr          $ra
    // 0x800795C4: nop

    return;
    // 0x800795C4: nop

;}
RECOMP_FUNC void func_8005F124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F12C: jal         0x8003C940
    // 0x8005F130: nop

    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F130: nop

    after_0:
    // 0x8005F134: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005F138: lw          $t6, -0x1DA4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA4);
    // 0x8005F13C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F140: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x8005F144: sw          $t7, -0x1D9C($at)
    MEM_W(-0X1D9C, ctx->r1) = ctx->r15;
    // 0x8005F148: b           L_8005F150
    // 0x8005F14C: nop

        goto L_8005F150;
    // 0x8005F14C: nop

L_8005F150:
    // 0x8005F150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F158: jr          $ra
    // 0x8005F15C: nop

    return;
    // 0x8005F15C: nop

;}
RECOMP_FUNC void func_80089C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089C18: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80089C1C: lh          $t6, 0x4BF8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4BF8);
    // 0x80089C20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80089C24: bne         $t6, $at, L_80089C34
    if (ctx->r14 != ctx->r1) {
        // 0x80089C28: nop
    
            goto L_80089C34;
    }
    // 0x80089C28: nop

    // 0x80089C2C: jr          $ra
    // 0x80089C30: nop

    return;
    // 0x80089C30: nop

L_80089C34:
    // 0x80089C34: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089C38: lh          $t7, 0x4C0E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4C0E);
    // 0x80089C3C: nop

    // 0x80089C40: bne         $t7, $zero, L_80089CA8
    if (ctx->r15 != 0) {
        // 0x80089C44: nop
    
            goto L_80089CA8;
    }
    // 0x80089C44: nop

    // 0x80089C48: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80089C4C: lh          $t8, 0x4C0E($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4C0E);
    // 0x80089C50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089C54: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80089C58: sh          $t9, 0x4C0E($at)
    MEM_H(0X4C0E, ctx->r1) = ctx->r25;
    // 0x80089C5C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80089C60: lh          $t0, 0x4BF8($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4BF8);
    // 0x80089C64: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80089C68: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80089C6C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80089C70: lw          $t2, 0xD4C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XD4C);
    // 0x80089C74: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089C78: sw          $t2, 0x4C08($at)
    MEM_W(0X4C08, ctx->r1) = ctx->r10;
    // 0x80089C7C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80089C80: lh          $t3, 0x4BF8($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4BF8);
    // 0x80089C84: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80089C88: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80089C8C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80089C90: lh          $t5, 0xB78($t5)
    ctx->r13 = MEM_H(ctx->r13, 0XB78);
    // 0x80089C94: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089C98: sh          $t5, 0x4C16($at)
    MEM_H(0X4C16, ctx->r1) = ctx->r13;
    // 0x80089C9C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80089CA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089CA4: sh          $t6, 0x4C18($at)
    MEM_H(0X4C18, ctx->r1) = ctx->r14;
L_80089CA8:
    // 0x80089CA8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089CAC: lh          $t7, 0x4C16($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4C16);
    // 0x80089CB0: nop

    // 0x80089CB4: bne         $t7, $zero, L_80089D0C
    if (ctx->r15 != 0) {
        // 0x80089CB8: nop
    
            goto L_80089D0C;
    }
    // 0x80089CB8: nop

    // 0x80089CBC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80089CC0: lh          $t8, 0x4C18($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4C18);
    // 0x80089CC4: nop

    // 0x80089CC8: bne         $t8, $zero, L_80089CF0
    if (ctx->r24 != 0) {
        // 0x80089CCC: nop
    
            goto L_80089CF0;
    }
    // 0x80089CCC: nop

    // 0x80089CD0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80089CD4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089CD8: sh          $t9, 0x4BF8($at)
    MEM_H(0X4BF8, ctx->r1) = ctx->r25;
    // 0x80089CDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089CE0: sb          $zero, 0x4BF0($at)
    MEM_B(0X4BF0, ctx->r1) = 0;
    // 0x80089CE4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089CE8: b           L_80089D04
    // 0x80089CEC: sh          $zero, 0x4C0E($at)
    MEM_H(0X4C0E, ctx->r1) = 0;
        goto L_80089D04;
    // 0x80089CEC: sh          $zero, 0x4C0E($at)
    MEM_H(0X4C0E, ctx->r1) = 0;
L_80089CF0:
    // 0x80089CF0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80089CF4: lh          $t0, 0x4C18($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4C18);
    // 0x80089CF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089CFC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80089D00: sh          $t1, 0x4C18($at)
    MEM_H(0X4C18, ctx->r1) = ctx->r9;
L_80089D04:
    // 0x80089D04: b           L_80089D20
    // 0x80089D08: nop

        goto L_80089D20;
    // 0x80089D08: nop

L_80089D0C:
    // 0x80089D0C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80089D10: lh          $t2, 0x4C16($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4C16);
    // 0x80089D14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089D18: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80089D1C: sh          $t3, 0x4C16($at)
    MEM_H(0X4C16, ctx->r1) = ctx->r11;
L_80089D20:
    // 0x80089D20: jr          $ra
    // 0x80089D24: nop

    return;
    // 0x80089D24: nop

    // 0x80089D28: jr          $ra
    // 0x80089D2C: nop

    return;
    // 0x80089D2C: nop

;}
RECOMP_FUNC void func_80069F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069F0C: beq         $a0, $zero, L_80069F70
    if (ctx->r4 == 0) {
        // 0x80069F10: nop
    
            goto L_80069F70;
    }
    // 0x80069F10: nop

    // 0x80069F14: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80069F18: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x80069F1C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80069F20: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x80069F24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80069F28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80069F2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80069F30: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80069F34: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80069F38: lb          $t1, 0x4803($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4803);
    // 0x80069F3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80069F40: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80069F44: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80069F48: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80069F4C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80069F50: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80069F54: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80069F58: lui         $t4, 0x8010
    ctx->r12 = S32(0X8010 << 16);
    // 0x80069F5C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80069F60: lbu         $t4, 0x6DA1($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X6DA1);
    // 0x80069F64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069F68: b           L_80069FC8
    // 0x80069F6C: sw          $t4, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r12;
        goto L_80069FC8;
    // 0x80069F6C: sw          $t4, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r12;
L_80069F70:
    // 0x80069F70: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80069F74: lb          $t5, 0x4801($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4801);
    // 0x80069F78: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80069F7C: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x80069F80: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80069F84: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80069F88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80069F8C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80069F90: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x80069F94: lb          $t1, 0x4803($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4803);
    // 0x80069F98: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80069F9C: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x80069FA0: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80069FA4: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80069FA8: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80069FAC: sll         $t0, $t1, 1
    ctx->r8 = S32(ctx->r9 << 1);
    // 0x80069FB0: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x80069FB4: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80069FB8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80069FBC: lbu         $t3, 0x6DA0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X6DA0);
    // 0x80069FC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069FC4: sw          $t3, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r11;
L_80069FC8:
    // 0x80069FC8: jr          $ra
    // 0x80069FCC: nop

    return;
    // 0x80069FCC: nop

    // 0x80069FD0: jr          $ra
    // 0x80069FD4: nop

    return;
    // 0x80069FD4: nop

;}
RECOMP_FUNC void func_800F2F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F2F8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F2F90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F2F94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F2F98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F2F9C: jal         0x8002B0E4
    // 0x800F2FA0: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800F2FA0: nop

    after_0:
    // 0x800F2FA4: b           L_800F2FAC
    // 0x800F2FA8: nop

        goto L_800F2FAC;
    // 0x800F2FA8: nop

L_800F2FAC:
    // 0x800F2FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F2FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F2FB4: jr          $ra
    // 0x800F2FB8: nop

    return;
    // 0x800F2FB8: nop

;}
RECOMP_FUNC void func_8007DA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DA44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007DA48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DA4C: jal         0x8007944C
    // 0x8007DA50: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007DA50: nop

    after_0:
    // 0x8007DA54: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007DA58: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DA5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007DA60: beq         $t6, $at, L_8007DB14
    if (ctx->r14 == ctx->r1) {
        // 0x8007DA64: nop
    
            goto L_8007DB14;
    }
    // 0x8007DA64: nop

    // 0x8007DA68: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DA6C: jal         0x8007D944
    // 0x8007DA70: nop

    func_8007D944(rdram, ctx);
        goto after_1;
    // 0x8007DA70: nop

    after_1:
    // 0x8007DA74: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DA78: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007DA7C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007DA80: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007DA84: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007DA88: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007DA8C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007DA90: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8007DA94: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007DA98: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8007DA9C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007DAA0: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    // 0x8007DAA4: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8007DAA8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007DAAC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007DAB0: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007DAB4: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8007DAB8: nop

    // 0x8007DABC: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x8007DAC0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007DAC4: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8007DAC8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007DACC: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8007DAD0: nop

    // 0x8007DAD4: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x8007DAD8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007DADC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8007DAE0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007DAE4: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8007DAE8: nop

    // 0x8007DAEC: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x8007DAF0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007DAF4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8007DAF8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007DAFC: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8007DB00: nop

    // 0x8007DB04: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
    // 0x8007DB08: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DB0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007DB10: sh          $t1, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = ctx->r9;
L_8007DB14:
    // 0x8007DB14: b           L_8007DB1C
    // 0x8007DB18: nop

        goto L_8007DB1C;
    // 0x8007DB18: nop

L_8007DB1C:
    // 0x8007DB1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DB20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007DB24: jr          $ra
    // 0x8007DB28: nop

    return;
    // 0x8007DB28: nop

;}
RECOMP_FUNC void func_8009A2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009A2B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009A2B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009A2B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009A2BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009A2C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009A2C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009A2C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A2CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009A2D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A2D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009A2D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009A2DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009A2E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009A2E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A2E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A2EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009A2F0: jal         0x80098864
    // 0x8009A2F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098864(rdram, ctx);
        goto after_0;
    // 0x8009A2F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8009A2F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A2FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A300: jal         0x8002AA94
    // 0x8009A304: nop

    func_8002AA94(rdram, ctx);
        goto after_1;
    // 0x8009A304: nop

    after_1:
    // 0x8009A308: b           L_8009A310
    // 0x8009A30C: nop

        goto L_8009A310;
    // 0x8009A30C: nop

L_8009A310:
    // 0x8009A310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009A314: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009A318: jr          $ra
    // 0x8009A31C: nop

    return;
    // 0x8009A31C: nop

;}
RECOMP_FUNC void Cutscene_SetupTextPal(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A384: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8008A388: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008A38C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8008A390: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A394: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8008A398: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8008A39C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8008A3A0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8008A3A4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8008A3A8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8008A3AC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8008A3B0: nop

    // 0x8008A3B4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8008A3B8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008A3BC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8008A3C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A3C4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8008A3C8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8008A3CC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8008A3D0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8008A3D4: lui         $t3, 0xB600
    ctx->r11 = S32(0XB600 << 16);
    // 0x8008A3D8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8008A3DC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008A3E0: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x8008A3E4: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x8008A3E8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8008A3EC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008A3F0: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8008A3F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A3F8: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8008A3FC: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8008A400: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8008A404: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8008A408: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x8008A40C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8008A410: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8008A414: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x8008A418: ori         $t1, $t1, 0x2205
    ctx->r9 = ctx->r9 | 0X2205;
    // 0x8008A41C: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8008A420: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8008A424: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8008A428: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A42C: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8008A430: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8008A434: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8008A438: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8008A43C: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x8008A440: ori         $t5, $t5, 0x1301
    ctx->r13 = ctx->r13 | 0X1301;
    // 0x8008A444: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8008A448: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8008A44C: nop

    // 0x8008A450: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8008A454: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008A458: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8008A45C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A460: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8008A464: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8008A468: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8008A46C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8008A470: lui         $t0, 0xB900
    ctx->r8 = S32(0XB900 << 16);
    // 0x8008A474: ori         $t0, $t0, 0x31D
    ctx->r8 = ctx->r8 | 0X31D;
    // 0x8008A478: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8008A47C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8008A480: lui         $t2, 0x55
    ctx->r10 = S32(0X55 << 16);
    // 0x8008A484: ori         $t2, $t2, 0x3048
    ctx->r10 = ctx->r10 | 0X3048;
    // 0x8008A488: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8008A48C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8008A490: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8008A494: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A498: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8008A49C: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8008A4A0: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8008A4A4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8008A4A8: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x8008A4AC: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x8008A4B0: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8008A4B4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8008A4B8: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x8008A4BC: ori         $t8, $t8, 0xF279
    ctx->r24 = ctx->r24 | 0XF279;
    // 0x8008A4C0: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8008A4C4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8008A4C8: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8008A4CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A4D0: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8008A4D4: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8008A4D8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8008A4DC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008A4E0: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x8008A4E4: ori         $t2, $t2, 0x602
    ctx->r10 = ctx->r10 | 0X602;
    // 0x8008A4E8: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8008A4EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8008A4F0: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x8008A4F4: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8008A4F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008A4FC: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8008A500: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A504: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8008A508: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8008A50C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8008A510: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8008A514: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8008A518: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x8008A51C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8008A520: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8008A524: addiu       $t0, $zero, 0x2000
    ctx->r8 = ADD32(0, 0X2000);
    // 0x8008A528: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8008A52C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008A530: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8008A534: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A538: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8008A53C: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8008A540: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8008A544: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A548: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x8008A54C: ori         $t4, $t4, 0xE02
    ctx->r12 = ctx->r12 | 0XE02;
    // 0x8008A550: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8008A554: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A558: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x8008A55C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8008A560: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008A564: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8008A568: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A56C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8008A570: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8008A574: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8008A578: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8008A57C: lui         $t0, 0xFD10
    ctx->r8 = S32(0XFD10 << 16);
    // 0x8008A580: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8008A584: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008A588: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x8008A58C: lw          $t3, 0xD0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD0);
    // 0x8008A590: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8008A594: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x8008A598: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8008A59C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008A5A0: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8008A5A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A5A8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8008A5AC: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8008A5B0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8008A5B4: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8008A5B8: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x8008A5BC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8008A5C0: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8008A5C4: nop

    // 0x8008A5C8: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8008A5CC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008A5D0: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8008A5D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A5D8: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8008A5DC: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8008A5E0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8008A5E4: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x8008A5E8: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8008A5EC: ori         $t3, $t3, 0x100
    ctx->r11 = ctx->r11 | 0X100;
    // 0x8008A5F0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8008A5F4: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8008A5F8: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8008A5FC: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8008A600: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008A604: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8008A608: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A60C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8008A610: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8008A614: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x8008A618: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8008A61C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8008A620: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8008A624: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8008A628: nop

    // 0x8008A62C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8008A630: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008A634: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8008A638: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A63C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8008A640: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8008A644: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x8008A648: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x8008A64C: lui         $t4, 0xF000
    ctx->r12 = S32(0XF000 << 16);
    // 0x8008A650: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8008A654: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8008A658: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x8008A65C: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x8008A660: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8008A664: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008A668: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8008A66C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A670: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8008A674: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8008A678: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008A67C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8008A680: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x8008A684: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8008A688: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8008A68C: nop

    // 0x8008A690: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8008A694: b           L_8008A69C
    // 0x8008A698: nop

        goto L_8008A69C;
    // 0x8008A698: nop

L_8008A69C:
    // 0x8008A69C: jr          $ra
    // 0x8008A6A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8008A6A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8005F088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F08C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F090: jal         0x8003C940
    // 0x8005F094: nop

    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F094: nop

    after_0:
    // 0x8005F098: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F09C: sw          $v0, -0x1DB4($at)
    MEM_W(-0X1DB4, ctx->r1) = ctx->r2;
    // 0x8005F0A0: b           L_8005F0A8
    // 0x8005F0A4: nop

        goto L_8005F0A8;
    // 0x8005F0A4: nop

L_8005F0A8:
    // 0x8005F0A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F0AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F0B0: jr          $ra
    // 0x8005F0B4: nop

    return;
    // 0x8005F0B4: nop

;}
RECOMP_FUNC void func_800F197C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F197C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F1980: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F1984: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F1988: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F198C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F1990: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F1994: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F1998: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F199C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F19A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F19A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F19A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F19AC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F19B0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F19B4: nop

    // 0x800F19B8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F19BC: nop

    // 0x800F19C0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800F19C4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F19C8: nop

    // 0x800F19CC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F19D0: nop

    // 0x800F19D4: bne         $t3, $zero, L_800F1B48
    if (ctx->r11 != 0) {
        // 0x800F19D8: nop
    
            goto L_800F1B48;
    }
    // 0x800F19D8: nop

    // 0x800F19DC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F19E0: nop

    // 0x800F19E4: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F19E8: nop

    // 0x800F19EC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800F19F0: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800F19F4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F19F8: nop

    // 0x800F19FC: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800F1A00: nop

    // 0x800F1A04: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F1A08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1A0C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800F1A10: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800F1A14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1A18: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800F1A1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F1A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F1A24: jal         0x8001C0EC
    // 0x800F1A28: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F1A28: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800F1A2C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800F1A30: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800F1A34: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800F1A38: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800F1A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F1A40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F1A44: jal         0x8001C0EC
    // 0x800F1A48: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F1A48: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800F1A4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1A50: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F1A54: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800F1A58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1A5C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800F1A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F1A64: jal         0x8001ABF4
    // 0x800F1A68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800F1A68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800F1A6C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F1A70: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800F1A74: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800F1A78: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800F1A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F1A80: jal         0x8001ABF4
    // 0x800F1A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800F1A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800F1A88: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F1A8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F1A90: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1A94: nop

    // 0x800F1A98: swc1        $f4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f4.u32l;
    // 0x800F1A9C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F1AA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F1AA4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1AA8: nop

    // 0x800F1AAC: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x800F1AB0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F1AB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F1AB8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1ABC: nop

    // 0x800F1AC0: swc1        $f8, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f8.u32l;
    // 0x800F1AC4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800F1AC8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F1ACC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800F1AD0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F1AD4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F1AD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F1ADC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F1AE0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F1AE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1AE8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F1AEC: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x800F1AF0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800F1AF4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F1AF8: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800F1AFC: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F1B00: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F1B04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F1B08: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F1B0C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F1B10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1B14: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800F1B18: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x800F1B1C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800F1B20: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800F1B24: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F1B28: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F1B2C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F1B30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F1B34: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F1B38: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F1B3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1B40: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F1B44: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
L_800F1B48:
    // 0x800F1B48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F1B4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F1B50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1B54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1B58: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800F1B5C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800F1B60: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F1B64: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800F1B68: jal         0x800295C0
    // 0x800F1B6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800F1B6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800F1B70: beq         $v0, $zero, L_800F1B88
    if (ctx->r2 == 0) {
        // 0x800F1B74: nop
    
            goto L_800F1B88;
    }
    // 0x800F1B74: nop

    // 0x800F1B78: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800F1B7C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1B80: b           L_800F1B98
    // 0x800F1B84: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
        goto L_800F1B98;
    // 0x800F1B84: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_800F1B88:
    // 0x800F1B88: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F1B8C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1B90: nop

    // 0x800F1B94: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
L_800F1B98:
    // 0x800F1B98: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1B9C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800F1BA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F1BA4: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800F1BA8: nop

    // 0x800F1BAC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F1BB0: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
    // 0x800F1BB4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800F1BB8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1BBC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800F1BC0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F1BC4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F1BC8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F1BCC: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800F1BD0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F1BD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1BD8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F1BDC: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x800F1BE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1BE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1BE8: jal         0x8002A1FC
    // 0x800F1BEC: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800F1BEC: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_5:
    // 0x800F1BF0: beq         $v0, $zero, L_800F1C10
    if (ctx->r2 == 0) {
        // 0x800F1BF4: nop
    
            goto L_800F1C10;
    }
    // 0x800F1BF4: nop

    // 0x800F1BF8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1BFC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800F1C00: sh          $t4, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r12;
    // 0x800F1C04: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1C08: nop

    // 0x800F1C0C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800F1C10:
    // 0x800F1C10: b           L_800F1C18
    // 0x800F1C14: nop

        goto L_800F1C18;
    // 0x800F1C14: nop

L_800F1C18:
    // 0x800F1C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F1C1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F1C20: jr          $ra
    // 0x800F1C24: nop

    return;
    // 0x800F1C24: nop

;}
RECOMP_FUNC void func_8009C96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C96C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009C970: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009C974: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009C978: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009C97C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009C980: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8009C984: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009C988: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C98C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009C990: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C994: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009C998: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8009C99C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8009C9A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009C9A4: beq         $s0, $at, L_8009C9C0
    if (ctx->r16 == ctx->r1) {
        // 0x8009C9A8: nop
    
            goto L_8009C9C0;
    }
    // 0x8009C9A8: nop

    // 0x8009C9AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009C9B0: beq         $s0, $at, L_8009C9D0
    if (ctx->r16 == ctx->r1) {
        // 0x8009C9B4: nop
    
            goto L_8009C9D0;
    }
    // 0x8009C9B4: nop

    // 0x8009C9B8: b           L_8009C9E0
    // 0x8009C9BC: nop

        goto L_8009C9E0;
    // 0x8009C9BC: nop

L_8009C9C0:
    // 0x8009C9C0: jal         0x8009C7C4
    // 0x8009C9C4: nop

    func_8009C7C4(rdram, ctx);
        goto after_0;
    // 0x8009C9C4: nop

    after_0:
    // 0x8009C9C8: b           L_8009C9E0
    // 0x8009C9CC: nop

        goto L_8009C9E0;
    // 0x8009C9CC: nop

L_8009C9D0:
    // 0x8009C9D0: jal         0x8009C85C
    // 0x8009C9D4: nop

    func_8009C85C(rdram, ctx);
        goto after_1;
    // 0x8009C9D4: nop

    after_1:
    // 0x8009C9D8: b           L_8009C9E0
    // 0x8009C9DC: nop

        goto L_8009C9E0;
    // 0x8009C9DC: nop

L_8009C9E0:
    // 0x8009C9E0: b           L_8009C9E8
    // 0x8009C9E4: nop

        goto L_8009C9E8;
    // 0x8009C9E4: nop

L_8009C9E8:
    // 0x8009C9E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C9EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009C9F0: jr          $ra
    // 0x8009C9F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009C9F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800B04FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B04FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B0500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B0504: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B0508: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B050C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B0510: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B0514: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0518: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B051C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0520: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B0524: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B0528: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800B052C: nop

    // 0x800B0530: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800B0534: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0538: nop

    // 0x800B053C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800B0540: sltiu       $at, $t0, 0x9
    ctx->r1 = ctx->r8 < 0X9 ? 1 : 0;
    // 0x800B0544: beq         $at, $zero, L_800B05F8
    if (ctx->r1 == 0) {
        // 0x800B0548: nop
    
            goto L_800B05F8;
    }
    // 0x800B0548: nop

    // 0x800B054C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B0550: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B0554: addu        $at, $at, $t0
    gpr jr_addend_800B0560 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B0558: lw          $t0, 0x4B28($at)
    ctx->r8 = ADD32(ctx->r1, 0X4B28);
    // 0x800B055C: nop

    // 0x800B0560: jr          $t0
    // 0x800B0564: nop

    switch (jr_addend_800B0560 >> 2) {
        case 0: goto L_800B0568; break;
        case 1: goto L_800B0588; break;
        case 2: goto L_800B0598; break;
        case 3: goto L_800B05A8; break;
        case 4: goto L_800B05B8; break;
        case 5: goto L_800B05D8; break;
        case 6: goto L_800B05C8; break;
        case 7: goto L_800B05E8; break;
        case 8: goto L_800B0578; break;
        default: switch_error(__func__, 0x800B0560, 0x80114B28);
    }
    // 0x800B0564: nop

L_800B0568:
    // 0x800B0568: jal         0x800AF8DC
    // 0x800B056C: nop

    func_800AF8DC(rdram, ctx);
        goto after_0;
    // 0x800B056C: nop

    after_0:
    // 0x800B0570: b           L_800B0600
    // 0x800B0574: nop

        goto L_800B0600;
    // 0x800B0574: nop

L_800B0578:
    // 0x800B0578: jal         0x800AFA3C
    // 0x800B057C: nop

    func_800AFA3C(rdram, ctx);
        goto after_1;
    // 0x800B057C: nop

    after_1:
    // 0x800B0580: b           L_800B0600
    // 0x800B0584: nop

        goto L_800B0600;
    // 0x800B0584: nop

L_800B0588:
    // 0x800B0588: jal         0x800AFB8C
    // 0x800B058C: nop

    func_800AFB8C(rdram, ctx);
        goto after_2;
    // 0x800B058C: nop

    after_2:
    // 0x800B0590: b           L_800B0600
    // 0x800B0594: nop

        goto L_800B0600;
    // 0x800B0594: nop

L_800B0598:
    // 0x800B0598: jal         0x800B0008
    // 0x800B059C: nop

    func_800B0008(rdram, ctx);
        goto after_3;
    // 0x800B059C: nop

    after_3:
    // 0x800B05A0: b           L_800B0600
    // 0x800B05A4: nop

        goto L_800B0600;
    // 0x800B05A4: nop

L_800B05A8:
    // 0x800B05A8: jal         0x800AFCC0
    // 0x800B05AC: nop

    func_800AFCC0(rdram, ctx);
        goto after_4;
    // 0x800B05AC: nop

    after_4:
    // 0x800B05B0: b           L_800B0600
    // 0x800B05B4: nop

        goto L_800B0600;
    // 0x800B05B4: nop

L_800B05B8:
    // 0x800B05B8: jal         0x800AFEB8
    // 0x800B05BC: nop

    func_800AFEB8(rdram, ctx);
        goto after_5;
    // 0x800B05BC: nop

    after_5:
    // 0x800B05C0: b           L_800B0600
    // 0x800B05C4: nop

        goto L_800B0600;
    // 0x800B05C4: nop

L_800B05C8:
    // 0x800B05C8: jal         0x800B0298
    // 0x800B05CC: nop

    func_800B0298(rdram, ctx);
        goto after_6;
    // 0x800B05CC: nop

    after_6:
    // 0x800B05D0: b           L_800B0600
    // 0x800B05D4: nop

        goto L_800B0600;
    // 0x800B05D4: nop

L_800B05D8:
    // 0x800B05D8: jal         0x800B0110
    // 0x800B05DC: nop

    func_800B0110(rdram, ctx);
        goto after_7;
    // 0x800B05DC: nop

    after_7:
    // 0x800B05E0: b           L_800B0600
    // 0x800B05E4: nop

        goto L_800B0600;
    // 0x800B05E4: nop

L_800B05E8:
    // 0x800B05E8: jal         0x800B03E0
    // 0x800B05EC: nop

    func_800B03E0(rdram, ctx);
        goto after_8;
    // 0x800B05EC: nop

    after_8:
    // 0x800B05F0: b           L_800B0600
    // 0x800B05F4: nop

        goto L_800B0600;
    // 0x800B05F4: nop

L_800B05F8:
    // 0x800B05F8: b           L_800B0600
    // 0x800B05FC: nop

        goto L_800B0600;
    // 0x800B05FC: nop

L_800B0600:
    // 0x800B0600: b           L_800B0608
    // 0x800B0604: nop

        goto L_800B0608;
    // 0x800B0604: nop

L_800B0608:
    // 0x800B0608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B060C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B0610: jr          $ra
    // 0x800B0614: nop

    return;
    // 0x800B0614: nop

;}
RECOMP_FUNC void func_80097E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097E6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80097E70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097E74: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80097E78: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80097E7C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80097E80: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80097E84: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80097E88: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80097E8C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80097E90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80097E94: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80097E98: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80097E9C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80097EA0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80097EA4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80097EA8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80097EAC: addiu       $a1, $a1, 0x3634
    ctx->r5 = ADD32(ctx->r5, 0X3634);
    // 0x80097EB0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80097EB4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80097EB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80097EBC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80097EC0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80097EC4: jal         0x80027464
    // 0x80097EC8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80097EC8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80097ECC: b           L_80097ED4
    // 0x80097ED0: nop

        goto L_80097ED4;
    // 0x80097ED0: nop

L_80097ED4:
    // 0x80097ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097ED8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80097EDC: jr          $ra
    // 0x80097EE0: nop

    return;
    // 0x80097EE0: nop

;}
RECOMP_FUNC void func_80082500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082500: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80082504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80082508: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008250C: lh          $t6, -0x1BD0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1BD0);
    // 0x80082510: nop

    // 0x80082514: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80082518: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008251C: lh          $t7, -0x1BCE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCE);
    // 0x80082520: nop

    // 0x80082524: sh          $t7, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r15;
    // 0x80082528: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008252C: lh          $t8, -0x1BCC($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1BCC);
    // 0x80082530: nop

    // 0x80082534: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x80082538: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008253C: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x80082540: nop

    // 0x80082544: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80082548: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008254C: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x80082550: nop

    // 0x80082554: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80082558: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008255C: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x80082560: nop

    // 0x80082564: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80082568: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008256C: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x80082570: nop

    // 0x80082574: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80082578: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008257C: lb          $t9, 0x4801($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4801);
    // 0x80082580: nop

    // 0x80082584: bne         $t9, $zero, L_8008259C
    if (ctx->r25 != 0) {
        // 0x80082588: nop
    
            goto L_8008259C;
    }
    // 0x80082588: nop

    // 0x8008258C: addiu       $t0, $zero, 0x61
    ctx->r8 = ADD32(0, 0X61);
    // 0x80082590: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082594: b           L_800825F0
    // 0x80082598: sw          $t0, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r8;
        goto L_800825F0;
    // 0x80082598: sw          $t0, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r8;
L_8008259C:
    // 0x8008259C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800825A0: lb          $t1, 0x4801($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4801);
    // 0x800825A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800825A8: bne         $t1, $at, L_800825C0
    if (ctx->r9 != ctx->r1) {
        // 0x800825AC: nop
    
            goto L_800825C0;
    }
    // 0x800825AC: nop

    // 0x800825B0: addiu       $t2, $zero, 0x62
    ctx->r10 = ADD32(0, 0X62);
    // 0x800825B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800825B8: b           L_800825F0
    // 0x800825BC: sw          $t2, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r10;
        goto L_800825F0;
    // 0x800825BC: sw          $t2, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r10;
L_800825C0:
    // 0x800825C0: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800825C4: lb          $t3, 0x4801($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4801);
    // 0x800825C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800825CC: bne         $t3, $at, L_800825E4
    if (ctx->r11 != ctx->r1) {
        // 0x800825D0: nop
    
            goto L_800825E4;
    }
    // 0x800825D0: nop

    // 0x800825D4: addiu       $t4, $zero, 0x63
    ctx->r12 = ADD32(0, 0X63);
    // 0x800825D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800825DC: b           L_800825F0
    // 0x800825E0: sw          $t4, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r12;
        goto L_800825F0;
    // 0x800825E0: sw          $t4, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r12;
L_800825E4:
    // 0x800825E4: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x800825E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800825EC: sw          $t5, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r13;
L_800825F0:
    // 0x800825F0: jal         0x80081C50
    // 0x800825F4: nop

    func_80081C50(rdram, ctx);
        goto after_0;
    // 0x800825F4: nop

    after_0:
    // 0x800825F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800825FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082600: sb          $t6, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = ctx->r14;
    // 0x80082604: jal         0x800824A8
    // 0x80082608: nop

    func_800824A8(rdram, ctx);
        goto after_1;
    // 0x80082608: nop

    after_1:
    // 0x8008260C: lh          $t7, 0x18($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X18);
    // 0x80082610: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082614: sh          $t7, -0x1BD0($at)
    MEM_H(-0X1BD0, ctx->r1) = ctx->r15;
    // 0x80082618: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x8008261C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082620: sh          $t8, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r24;
    // 0x80082624: lh          $t9, 0x1C($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1C);
    // 0x80082628: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008262C: sh          $t9, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r25;
    // 0x80082630: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80082634: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082638: swc1        $f16, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f16.u32l;
    // 0x8008263C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80082640: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082644: swc1        $f18, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f18.u32l;
    // 0x80082648: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8008264C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082650: swc1        $f4, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f4.u32l;
    // 0x80082654: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80082658: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008265C: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x80082660: b           L_80082668
    // 0x80082664: nop

        goto L_80082668;
    // 0x80082664: nop

L_80082668:
    // 0x80082668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008266C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80082670: jr          $ra
    // 0x80082674: nop

    return;
    // 0x80082674: nop

;}
RECOMP_FUNC void func_80065AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065AEC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80065AF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80065AF4: lh          $t6, 0x7788($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7788);
    // 0x80065AF8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80065AFC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80065B00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80065B04: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80065B08: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80065B0C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80065B10: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x80065B14: nop

    // 0x80065B18: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80065B1C: nop

    // 0x80065B20: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80065B24: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80065B28: nop

    // 0x80065B2C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80065B30: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80065B34: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80065B38: nop

    // 0x80065B3C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80065B40: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80065B44: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80065B48: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80065B4C: nop

    // 0x80065B50: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80065B54: lh          $t9, 0x7798($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7798);
    // 0x80065B58: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80065B5C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80065B60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80065B64: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80065B68: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80065B6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80065B70: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80065B74: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x80065B78: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80065B7C: nop

    // 0x80065B80: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80065B84: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80065B88: nop

    // 0x80065B8C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80065B90: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80065B94: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80065B98: nop

    // 0x80065B9C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80065BA0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80065BA4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80065BA8: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80065BAC: nop

    // 0x80065BB0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80065BB4: lh          $t3, 0x77A8($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X77A8);
    // 0x80065BB8: lwc1        $f16, 0x8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80065BBC: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80065BC0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80065BC4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80065BC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80065BCC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80065BD0: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80065BD4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80065BD8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80065BDC: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80065BE0: div.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80065BE4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80065BE8: nop

    // 0x80065BEC: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80065BF0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80065BF4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80065BF8: nop

    // 0x80065BFC: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80065C00: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x80065C04: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80065C08: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80065C0C: nop

    // 0x80065C10: b           L_80065C18
    // 0x80065C14: nop

        goto L_80065C18;
    // 0x80065C14: nop

L_80065C18:
    // 0x80065C18: jr          $ra
    // 0x80065C1C: nop

    return;
    // 0x80065C1C: nop

;}
RECOMP_FUNC void func_80098370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098370: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80098374: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098378: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8009837C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80098380: nop

    // 0x80098384: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80098388: nop

    // 0x8009838C: bne         $t7, $zero, L_800983E0
    if (ctx->r15 != 0) {
        // 0x80098390: nop
    
            goto L_800983E0;
    }
    // 0x80098390: nop

    // 0x80098394: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80098398: nop

    // 0x8009839C: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800983A0: nop

    // 0x800983A4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800983A8: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800983AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800983B0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800983B4: addiu       $t1, $t1, 0x6938
    ctx->r9 = ADD32(ctx->r9, 0X6938);
    // 0x800983B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800983BC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800983C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800983C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800983C8: jal         0x8001C0EC
    // 0x800983CC: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800983CC: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    after_0:
    // 0x800983D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800983D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800983D8: jal         0x8001BBDC
    // 0x800983DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800983DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800983E0:
    // 0x800983E0: b           L_800983E8
    // 0x800983E4: nop

        goto L_800983E8;
    // 0x800983E4: nop

L_800983E8:
    // 0x800983E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800983EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800983F0: jr          $ra
    // 0x800983F4: nop

    return;
    // 0x800983F4: nop

;}
RECOMP_FUNC void func_800D4064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4064: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D4068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D406C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D4070: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D4074: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D4078: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D407C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D4080: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4084: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D4088: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D408C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D4090: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D4094: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D4098: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D409C: beq         $s0, $at, L_800D40C4
    if (ctx->r16 == ctx->r1) {
        // 0x800D40A0: nop
    
            goto L_800D40C4;
    }
    // 0x800D40A0: nop

    // 0x800D40A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D40A8: beq         $s0, $at, L_800D40D4
    if (ctx->r16 == ctx->r1) {
        // 0x800D40AC: nop
    
            goto L_800D40D4;
    }
    // 0x800D40AC: nop

    // 0x800D40B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D40B4: beq         $s0, $at, L_800D40E4
    if (ctx->r16 == ctx->r1) {
        // 0x800D40B8: nop
    
            goto L_800D40E4;
    }
    // 0x800D40B8: nop

    // 0x800D40BC: b           L_800D40F4
    // 0x800D40C0: nop

        goto L_800D40F4;
    // 0x800D40C0: nop

L_800D40C4:
    // 0x800D40C4: jal         0x800D3824
    // 0x800D40C8: nop

    func_800D3824(rdram, ctx);
        goto after_0;
    // 0x800D40C8: nop

    after_0:
    // 0x800D40CC: b           L_800D40FC
    // 0x800D40D0: nop

        goto L_800D40FC;
    // 0x800D40D0: nop

L_800D40D4:
    // 0x800D40D4: jal         0x800D3974
    // 0x800D40D8: nop

    func_800D3974(rdram, ctx);
        goto after_1;
    // 0x800D40D8: nop

    after_1:
    // 0x800D40DC: b           L_800D40FC
    // 0x800D40E0: nop

        goto L_800D40FC;
    // 0x800D40E0: nop

L_800D40E4:
    // 0x800D40E4: jal         0x800D3E54
    // 0x800D40E8: nop

    func_800D3E54(rdram, ctx);
        goto after_2;
    // 0x800D40E8: nop

    after_2:
    // 0x800D40EC: b           L_800D40FC
    // 0x800D40F0: nop

        goto L_800D40FC;
    // 0x800D40F0: nop

L_800D40F4:
    // 0x800D40F4: b           L_800D40FC
    // 0x800D40F8: nop

        goto L_800D40FC;
    // 0x800D40F8: nop

L_800D40FC:
    // 0x800D40FC: b           L_800D4104
    // 0x800D4100: nop

        goto L_800D4104;
    // 0x800D4100: nop

L_800D4104:
    // 0x800D4104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4108: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D410C: jr          $ra
    // 0x800D4110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D4110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800F3EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F3EE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F3EEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F3EF0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F3EF4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F3EF8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F3EFC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F3F00: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F3F04: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F3F08: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F3F0C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F3F10: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F3F14: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F3F18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F3F1C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F3F20: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F3F24: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F3F28: addiu       $a1, $a1, 0x451C
    ctx->r5 = ADD32(ctx->r5, 0X451C);
    // 0x800F3F2C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F3F30: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F3F34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F3F38: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F3F3C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F3F40: jal         0x80027464
    // 0x800F3F44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F3F44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F3F48: b           L_800F3F50
    // 0x800F3F4C: nop

        goto L_800F3F50;
    // 0x800F3F4C: nop

L_800F3F50:
    // 0x800F3F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F3F54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F3F58: jr          $ra
    // 0x800F3F5C: nop

    return;
    // 0x800F3F5C: nop

;}
RECOMP_FUNC void func_800E904C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E904C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E9050: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E9054: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800E9058: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800E905C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E9060: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800E9064: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800E9068: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800E906C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800E9070: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E9074: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800E9078: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800E907C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E9080: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800E9084: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E9088: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800E908C: addiu       $a1, $a1, 0x4480
    ctx->r5 = ADD32(ctx->r5, 0X4480);
    // 0x800E9090: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E9094: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800E9098: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E909C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E90A0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800E90A4: jal         0x80027464
    // 0x800E90A8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E90A8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800E90AC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800E90B0: b           L_800E90B8
    // 0x800E90B4: nop

        goto L_800E90B8;
    // 0x800E90B4: nop

L_800E90B8:
    // 0x800E90B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E90BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E90C0: jr          $ra
    // 0x800E90C4: nop

    return;
    // 0x800E90C4: nop

;}
RECOMP_FUNC void func_800941C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800941C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800941C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800941CC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800941D0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800941D4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800941D8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800941DC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800941E0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800941E4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800941E8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800941EC: bne         $t6, $at, L_800941FC
    if (ctx->r14 != ctx->r1) {
        // 0x800941F0: nop
    
            goto L_800941FC;
    }
    // 0x800941F0: nop

    // 0x800941F4: b           L_8009435C
    // 0x800941F8: nop

        goto L_8009435C;
    // 0x800941F8: nop

L_800941FC:
    // 0x800941FC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80094200: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80094204: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80094208: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8009420C: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x80094210: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80094214: lw          $t9, 0x59B4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X59B4);
    // 0x80094218: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8009421C: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80094220: nop

    // 0x80094224: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80094228: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009422C: lw          $t2, -0x3560($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3560);
    // 0x80094230: nop

    // 0x80094234: beq         $t2, $zero, L_80094354
    if (ctx->r10 == 0) {
        // 0x80094238: nop
    
            goto L_80094354;
    }
    // 0x80094238: nop

    // 0x8009423C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80094240: jal         0x80093940
    // 0x80094244: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80093940(rdram, ctx);
        goto after_0;
    // 0x80094244: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x80094248: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8009424C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80094250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80094254: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80094258: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8009425C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80094260: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80094264: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80094268: jal         0x80027464
    // 0x8009426C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x8009426C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80094270: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80094274: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80094278: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009427C: beq         $t3, $at, L_80094354
    if (ctx->r11 == ctx->r1) {
        // 0x80094280: nop
    
            goto L_80094354;
    }
    // 0x80094280: nop

    // 0x80094284: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80094288: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009428C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80094290: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80094294: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80094298: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009429C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800942A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800942A4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800942A8: swc1        $f8, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f8.u32l;
    // 0x800942AC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800942B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800942B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800942B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800942BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800942C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800942C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800942C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800942CC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800942D0: swc1        $f10, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f10.u32l;
    // 0x800942D4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800942D8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800942DC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800942E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800942E4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800942E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800942EC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800942F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800942F4: lwc1        $f16, 0x33E8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X33E8);
    // 0x800942F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800942FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80094300: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80094304: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80094308: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8009430C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80094310: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80094314: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80094318: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8009431C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80094320: swc1        $f16, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f16.u32l;
    // 0x80094324: lwc1        $f20, 0x14($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X14);
    // 0x80094328: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009432C: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x80094330: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80094334: nop

    // 0x80094338: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8009433C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80094340: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80094344: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80094348: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8009434C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80094350: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_80094354:
    // 0x80094354: b           L_8009435C
    // 0x80094358: nop

        goto L_8009435C;
    // 0x80094358: nop

L_8009435C:
    // 0x8009435C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80094360: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80094364: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80094368: jr          $ra
    // 0x8009436C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8009436C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800FFF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FFF40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FFF44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FFF48: jal         0x800FDF98
    // 0x800FFF4C: nop

    func_800FDF98(rdram, ctx);
        goto after_0;
    // 0x800FFF4C: nop

    after_0:
    // 0x800FFF50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800FFF54: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFF58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FFF5C: bne         $t6, $at, L_800FFF98
    if (ctx->r14 != ctx->r1) {
        // 0x800FFF60: nop
    
            goto L_800FFF98;
    }
    // 0x800FFF60: nop

    // 0x800FFF64: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FFF68: lh          $t7, -0x1C0C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1C0C);
    // 0x800FFF6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFF70: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800FFF74: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800FFF78: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800FFF7C: bgez        $t0, L_800FFF90
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800FFF80: sh          $t8, -0x1C0C($at)
        MEM_H(-0X1C0C, ctx->r1) = ctx->r24;
            goto L_800FFF90;
    }
    // 0x800FFF80: sh          $t8, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = ctx->r24;
    // 0x800FFF84: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800FFF88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFF8C: sh          $t1, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = ctx->r9;
L_800FFF90:
    // 0x800FFF90: b           L_800FFFD8
    // 0x800FFF94: nop

        goto L_800FFFD8;
    // 0x800FFF94: nop

L_800FFF98:
    // 0x800FFF98: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFF9C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800FFFA0: bne         $t2, $at, L_800FFFD8
    if (ctx->r10 != ctx->r1) {
        // 0x800FFFA4: nop
    
            goto L_800FFFD8;
    }
    // 0x800FFFA4: nop

    // 0x800FFFA8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800FFFAC: lh          $t3, -0x1C0C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1C0C);
    // 0x800FFFB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFFB4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FFFB8: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x800FFFBC: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800FFFC0: sh          $t4, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = ctx->r12;
    // 0x800FFFC4: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x800FFFC8: bne         $at, $zero, L_800FFFD8
    if (ctx->r1 != 0) {
        // 0x800FFFCC: nop
    
            goto L_800FFFD8;
    }
    // 0x800FFFCC: nop

    // 0x800FFFD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FFFD4: sh          $zero, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = 0;
L_800FFFD8:
    // 0x800FFFD8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FFFDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FFFE0: beq         $t7, $at, L_800FFFF4
    if (ctx->r15 == ctx->r1) {
        // 0x800FFFE4: nop
    
            goto L_800FFFF4;
    }
    // 0x800FFFE4: nop

    // 0x800FFFE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FFFEC: bne         $t7, $at, L_80100130
    if (ctx->r15 != ctx->r1) {
        // 0x800FFFF0: nop
    
            goto L_80100130;
    }
    // 0x800FFFF0: nop

L_800FFFF4:
    // 0x800FFFF4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800FFFF8: lhu         $t8, -0x1C0C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C0C);
    // 0x800FFFFC: nop

    // 0x80100000: sltiu       $at, $t8, 0x6
    ctx->r1 = ctx->r24 < 0X6 ? 1 : 0;
    // 0x80100004: beq         $at, $zero, L_80100130
    if (ctx->r1 == 0) {
        // 0x80100008: nop
    
            goto L_80100130;
    }
    // 0x80100008: nop

    // 0x8010000C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80100010: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80100014: addu        $at, $at, $t8
    gpr jr_addend_80100020 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80100018: lw          $t8, 0x4718($at)
    ctx->r24 = ADD32(ctx->r1, 0X4718);
    // 0x8010001C: nop

    // 0x80100020: jr          $t8
    // 0x80100024: nop

    switch (jr_addend_80100020 >> 2) {
        case 0: goto L_80100028; break;
        case 1: goto L_80100058; break;
        case 2: goto L_80100088; break;
        case 3: goto L_801000B8; break;
        case 4: goto L_801000D8; break;
        case 5: goto L_801000F8; break;
        default: switch_error(__func__, 0x80100020, 0x80134718);
    }
    // 0x80100024: nop

L_80100028:
    // 0x80100028: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8010002C: lbu         $t9, 0x793A($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X793A);
    // 0x80100030: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80100034: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80100038: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8010003C: sb          $t1, 0x793A($at)
    MEM_B(0X793A, ctx->r1) = ctx->r9;
    // 0x80100040: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80100044: lbu         $t2, 0x793A($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X793A);
    // 0x80100048: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8010004C: sb          $t2, 0x7932($at)
    MEM_B(0X7932, ctx->r1) = ctx->r10;
    // 0x80100050: b           L_80100130
    // 0x80100054: nop

        goto L_80100130;
    // 0x80100054: nop

L_80100058:
    // 0x80100058: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8010005C: lbu         $t3, 0x793E($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X793E);
    // 0x80100060: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80100064: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80100068: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8010006C: sb          $t5, 0x793E($at)
    MEM_B(0X793E, ctx->r1) = ctx->r13;
    // 0x80100070: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80100074: lbu         $t6, 0x793E($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X793E);
    // 0x80100078: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8010007C: sb          $t6, 0x7934($at)
    MEM_B(0X7934, ctx->r1) = ctx->r14;
    // 0x80100080: b           L_80100130
    // 0x80100084: nop

        goto L_80100130;
    // 0x80100084: nop

L_80100088:
    // 0x80100088: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8010008C: lbu         $t7, 0x7940($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7940);
    // 0x80100090: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80100094: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80100098: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8010009C: sb          $t9, 0x7940($at)
    MEM_B(0X7940, ctx->r1) = ctx->r25;
    // 0x801000A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x801000A4: lbu         $t0, 0x7940($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7940);
    // 0x801000A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801000AC: sb          $t0, 0x7938($at)
    MEM_B(0X7938, ctx->r1) = ctx->r8;
    // 0x801000B0: b           L_80100130
    // 0x801000B4: nop

        goto L_80100130;
    // 0x801000B4: nop

L_801000B8:
    // 0x801000B8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x801000BC: lh          $t1, 0x7944($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7944);
    // 0x801000C0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x801000C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801000C8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x801000CC: sh          $t3, 0x7944($at)
    MEM_H(0X7944, ctx->r1) = ctx->r11;
    // 0x801000D0: b           L_80100130
    // 0x801000D4: nop

        goto L_80100130;
    // 0x801000D4: nop

L_801000D8:
    // 0x801000D8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x801000DC: lh          $t4, 0x7948($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X7948);
    // 0x801000E0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x801000E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801000E8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x801000EC: sh          $t6, 0x7948($at)
    MEM_H(0X7948, ctx->r1) = ctx->r14;
    // 0x801000F0: b           L_80100130
    // 0x801000F4: nop

        goto L_80100130;
    // 0x801000F4: nop

L_801000F8:
    // 0x801000F8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x801000FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80100100: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80100104: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80100108: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8010010C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80100110: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80100114: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80100118: lwc1        $f8, 0x79C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X79C8);
    // 0x8010011C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80100120: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80100124: swc1        $f10, 0x79C8($at)
    MEM_W(0X79C8, ctx->r1) = ctx->f10.u32l;
    // 0x80100128: b           L_80100130
    // 0x8010012C: nop

        goto L_80100130;
    // 0x8010012C: nop

L_80100130:
    // 0x80100130: b           L_80100138
    // 0x80100134: nop

        goto L_80100138;
    // 0x80100134: nop

L_80100138:
    // 0x80100138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010013C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80100140: jr          $ra
    // 0x80100144: nop

    return;
    // 0x80100144: nop

;}
RECOMP_FUNC void func_800908C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800908C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800908C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800908CC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800908D0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800908D4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800908D8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800908DC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800908E0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800908E4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800908E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800908EC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800908F0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800908F4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800908F8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800908FC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090900: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090904: addiu       $a1, $a1, 0x1450
    ctx->r5 = ADD32(ctx->r5, 0X1450);
    // 0x80090908: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009090C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090910: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090914: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090918: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009091C: jal         0x80027464
    // 0x80090920: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090920: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090924: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090928: b           L_80090930
    // 0x8009092C: nop

        goto L_80090930;
    // 0x8009092C: nop

L_80090930:
    // 0x80090930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090934: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090938: jr          $ra
    // 0x8009093C: nop

    return;
    // 0x8009093C: nop

;}
RECOMP_FUNC void func_800E71C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E71C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E71C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E71C8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E71CC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E71D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E71D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E71D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E71DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E71E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E71E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E71E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E71EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E71F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E71F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E71F8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E71FC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7200: nop

    // 0x800E7204: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E7208: nop

    // 0x800E720C: bne         $t1, $zero, L_800E7300
    if (ctx->r9 != 0) {
        // 0x800E7210: nop
    
            goto L_800E7300;
    }
    // 0x800E7210: nop

    // 0x800E7214: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7218: nop

    // 0x800E721C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E7220: nop

    // 0x800E7224: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E7228: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E722C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7230: nop

    // 0x800E7234: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x800E7238: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E723C: nop

    // 0x800E7240: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x800E7244: nop

    // 0x800E7248: sh          $t7, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r15;
    // 0x800E724C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E7250: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7254: nop

    // 0x800E7258: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x800E725C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7260: nop

    // 0x800E7264: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800E7268: nop

    // 0x800E726C: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x800E7270: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E7274: nop

    // 0x800E7278: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x800E727C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7280: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800E7284: addiu       $t1, $t1, -0x6878
    ctx->r9 = ADD32(ctx->r9, -0X6878);
    // 0x800E7288: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E728C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800E7290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7294: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800E7298: jal         0x8001C0EC
    // 0x800E729C: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E729C: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
    // 0x800E72A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E72A4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E72A8: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E72AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E72B0: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800E72B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E72B8: jal         0x8001ABF4
    // 0x800E72BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E72BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E72C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E72C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E72C8: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E72CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E72D0: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x800E72D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E72D8: jal         0x8001ABF4
    // 0x800E72DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E72DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E72E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E72E4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E72E8: addiu       $a3, $a3, -0x67D8
    ctx->r7 = ADD32(ctx->r7, -0X67D8);
    // 0x800E72EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E72F0: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x800E72F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800E72F8: jal         0x8001ABF4
    // 0x800E72FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800E72FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_800E7300:
    // 0x800E7300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7308: jal         0x8001B4AC
    // 0x800E730C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x800E730C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800E7310: beq         $v0, $zero, L_800E7328
    if (ctx->r2 == 0) {
        // 0x800E7314: nop
    
            goto L_800E7328;
    }
    // 0x800E7314: nop

    // 0x800E7318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E731C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7320: jal         0x8002B0E4
    // 0x800E7324: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x800E7324: nop

    after_5:
L_800E7328:
    // 0x800E7328: b           L_800E7330
    // 0x800E732C: nop

        goto L_800E7330;
    // 0x800E732C: nop

L_800E7330:
    // 0x800E7330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E7334: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E7338: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E733C: jr          $ra
    // 0x800E7340: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E7340: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800B3BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B3BC0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800B3BC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B3BC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B3BCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B3BD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B3BD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3BD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B3BDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3BE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B3BE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B3BE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B3BEC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800B3BF0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800B3BF4: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800B3BF8: nop

    // 0x800B3BFC: bne         $t0, $zero, L_800B3C14
    if (ctx->r8 != 0) {
        // 0x800B3C00: nop
    
            goto L_800B3C14;
    }
    // 0x800B3C00: nop

    // 0x800B3C04: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800B3C08: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x800B3C0C: b           L_800B3C40
    // 0x800B3C10: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
        goto L_800B3C40;
    // 0x800B3C10: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
L_800B3C14:
    // 0x800B3C14: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800B3C18: lw          $t3, 0x7A64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A64);
    // 0x800B3C1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B3C20: bne         $t3, $at, L_800B3C38
    if (ctx->r11 != ctx->r1) {
        // 0x800B3C24: nop
    
            goto L_800B3C38;
    }
    // 0x800B3C24: nop

    // 0x800B3C28: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800B3C2C: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x800B3C30: b           L_800B3C40
    // 0x800B3C34: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
        goto L_800B3C40;
    // 0x800B3C34: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800B3C38:
    // 0x800B3C38: b           L_800B3C54
    // 0x800B3C3C: nop

        goto L_800B3C54;
    // 0x800B3C3C: nop

L_800B3C40:
    // 0x800B3C40: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800B3C44: nop

    // 0x800B3C48: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800B3C4C: b           L_800B3C54
    // 0x800B3C50: nop

        goto L_800B3C54;
    // 0x800B3C50: nop

L_800B3C54:
    // 0x800B3C54: jr          $ra
    // 0x800B3C58: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800B3C58: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800A2C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2C44: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800A2C48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800A2C4C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800A2C50: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A2C54: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800A2C58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A2C5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A2C60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A2C64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A2C68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A2C6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A2C70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A2C74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A2C78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A2C7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A2C80: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800A2C84: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2C88: nop

    // 0x800A2C8C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A2C90: nop

    // 0x800A2C94: bne         $t1, $zero, L_800A2CE8
    if (ctx->r9 != 0) {
        // 0x800A2C98: nop
    
            goto L_800A2CE8;
    }
    // 0x800A2C98: nop

    // 0x800A2C9C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2CA0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A2CA4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A2CA8: jal         0x80014E80
    // 0x800A2CAC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800A2CAC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x800A2CB0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800A2CB4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2CB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A2CBC: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
    // 0x800A2CC0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800A2CC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A2CC8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2CCC: nop

    // 0x800A2CD0: swc1        $f8, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f8.u32l;
    // 0x800A2CD4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A2CD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A2CDC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2CE0: nop

    // 0x800A2CE4: swc1        $f10, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f10.u32l;
L_800A2CE8:
    // 0x800A2CE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2CEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2CF0: jal         0x80029C40
    // 0x800A2CF4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800A2CF4: nop

    after_1:
    // 0x800A2CF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2CFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2D00: jal         0x80028FA0
    // 0x800A2D04: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800A2D04: nop

    after_2:
    // 0x800A2D08: beq         $v0, $zero, L_800A2D20
    if (ctx->r2 == 0) {
        // 0x800A2D0C: nop
    
            goto L_800A2D20;
    }
    // 0x800A2D0C: nop

    // 0x800A2D10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2D14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2D18: jal         0x80029B60
    // 0x800A2D1C: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800A2D1C: nop

    after_3:
L_800A2D20:
    // 0x800A2D20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A2D24: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A2D28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2D2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2D30: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x800A2D34: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x800A2D38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A2D3C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800A2D40: jal         0x800294F0
    // 0x800A2D44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800294F0(rdram, ctx);
        goto after_4;
    // 0x800A2D44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x800A2D48: sh          $v0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r2;
    // 0x800A2D4C: lh          $t7, 0x3E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3E);
    // 0x800A2D50: nop

    // 0x800A2D54: beq         $t7, $zero, L_800A2D68
    if (ctx->r15 == 0) {
        // 0x800A2D58: nop
    
            goto L_800A2D68;
    }
    // 0x800A2D58: nop

    // 0x800A2D5C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800A2D60: nop

    // 0x800A2D64: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
L_800A2D68:
    // 0x800A2D68: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2D6C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800A2D70: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A2D74: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A2D78: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800A2D7C: jal         0x80015538
    // 0x800A2D80: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800A2D80: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x800A2D84: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A2D88: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2D8C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A2D90: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A2D94: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A2D98: nop

    // 0x800A2D9C: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A2DA0: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x800A2DA4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A2DA8: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x800A2DAC: nop

    // 0x800A2DB0: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2DB4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A2DB8: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800A2DBC: lwc1        $f19, 0x4950($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4950);
    // 0x800A2DC0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800A2DC4: lwc1        $f18, 0x4954($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4954);
    // 0x800A2DC8: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x800A2DCC: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x800A2DD0: jal         0x80034970
    // 0x800A2DD4: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x800A2DD4: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_6:
    // 0x800A2DD8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800A2DDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A2DE0: nop

    // 0x800A2DE4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800A2DE8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x800A2DEC: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800A2DF0: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A2DF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A2DF8: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2DFC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800A2E00: lwc1        $f7, 0x4958($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4958);
    // 0x800A2E04: lwc1        $f6, 0x495C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X495C);
    // 0x800A2E08: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800A2E0C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800A2E10: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800A2E14: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800A2E18: sub.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d - ctx->f16.d;
    // 0x800A2E1C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800A2E20: swc1        $f4, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f4.u32l;
    // 0x800A2E24: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2E28: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x800A2E2C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800A2E30: nop

    // 0x800A2E34: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x800A2E38: mfhi        $t8
    ctx->r24 = hi;
    // 0x800A2E3C: bne         $t8, $zero, L_800A2E60
    if (ctx->r24 != 0) {
        // 0x800A2E40: nop
    
            goto L_800A2E60;
    }
    // 0x800A2E40: nop

    // 0x800A2E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2E48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2E4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A2E50: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x800A2E54: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A2E58: jal         0x800175F0
    // 0x800A2E5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x800A2E5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_800A2E60:
    // 0x800A2E60: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A2E64: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A2E68: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2E6C: lwc1        $f9, 0x4960($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4960);
    // 0x800A2E70: lwc1        $f8, 0x4964($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4964);
    // 0x800A2E74: lwc1        $f18, 0x4($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800A2E78: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800A2E7C: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x800A2E80: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800A2E84: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x800A2E88: nop

    // 0x800A2E8C: bc1f        L_800A2ED0
    if (!c1cs) {
        // 0x800A2E90: nop
    
            goto L_800A2ED0;
    }
    // 0x800A2E90: nop

    // 0x800A2E94: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x800A2E98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A2E9C: lwc1        $f6, 0x48($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X48);
    // 0x800A2EA0: nop

    // 0x800A2EA4: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x800A2EA8: nop

    // 0x800A2EAC: bc1f        L_800A2ED0
    if (!c1cs) {
        // 0x800A2EB0: nop
    
            goto L_800A2ED0;
    }
    // 0x800A2EB0: nop

    // 0x800A2EB4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2EB8: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800A2EBC: lwc1        $f8, 0x54($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X54);
    // 0x800A2EC0: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800A2EC4: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800A2EC8: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x800A2ECC: swc1        $f6, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f6.u32l;
L_800A2ED0:
    // 0x800A2ED0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2ED4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2ED8: jal         0x80029D04
    // 0x800A2EDC: nop

    func_80029D04(rdram, ctx);
        goto after_8;
    // 0x800A2EDC: nop

    after_8:
    // 0x800A2EE0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A2EE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A2EE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2EEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2EF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A2EF4: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x800A2EF8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A2EFC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A2F00: jal         0x80029018
    // 0x800A2F04: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x800A2F04: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x800A2F08: beq         $v0, $zero, L_800A2F74
    if (ctx->r2 == 0) {
        // 0x800A2F0C: nop
    
            goto L_800A2F74;
    }
    // 0x800A2F0C: nop

    // 0x800A2F10: jal         0x800297DC
    // 0x800A2F14: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800A2F14: nop

    after_10:
    // 0x800A2F18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2F1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A2F20: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A2F24: jal         0x80029824
    // 0x800A2F28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800A2F28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x800A2F2C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2F30: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x800A2F34: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A2F38: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A2F3C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800A2F40: jal         0x80015538
    // 0x800A2F44: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x800A2F44: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_12:
    // 0x800A2F48: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800A2F4C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2F50: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800A2F54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A2F58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A2F5C: nop

    // 0x800A2F60: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A2F64: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x800A2F68: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800A2F6C: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800A2F70: nop

L_800A2F74:
    // 0x800A2F74: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2F78: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800A2F7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A2F80: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800A2F84: nop

    // 0x800A2F88: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x800A2F8C: nop

    // 0x800A2F90: bc1f        L_800A2FA8
    if (!c1cs) {
        // 0x800A2F94: nop
    
            goto L_800A2FA8;
    }
    // 0x800A2F94: nop

    // 0x800A2F98: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800A2F9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A2FA0: b           L_800A2FF8
    // 0x800A2FA4: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
        goto L_800A2FF8;
    // 0x800A2FA4: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
L_800A2FA8:
    // 0x800A2FA8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2FAC: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800A2FB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800A2FB4: lwc1        $f8, 0x28($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800A2FB8: nop

    // 0x800A2FBC: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x800A2FC0: nop

    // 0x800A2FC4: bc1f        L_800A2FDC
    if (!c1cs) {
        // 0x800A2FC8: nop
    
            goto L_800A2FDC;
    }
    // 0x800A2FC8: nop

    // 0x800A2FCC: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800A2FD0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800A2FD4: b           L_800A2FEC
    // 0x800A2FD8: nop

        goto L_800A2FEC;
    // 0x800A2FD8: nop

L_800A2FDC:
    // 0x800A2FDC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2FE0: nop

    // 0x800A2FE4: lwc1        $f20, 0x28($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800A2FE8: nop

L_800A2FEC:
    // 0x800A2FEC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2FF0: nop

    // 0x800A2FF4: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
L_800A2FF8:
    // 0x800A2FF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A2FFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3000: jal         0x8002A46C
    // 0x800A3004: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_13;
    // 0x800A3004: nop

    after_13:
    // 0x800A3008: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800A300C: nop

    // 0x800A3010: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x800A3014: b           L_800A301C
    // 0x800A3018: nop

        goto L_800A301C;
    // 0x800A3018: nop

L_800A301C:
    // 0x800A301C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800A3020: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800A3024: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A3028: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800A302C: jr          $ra
    // 0x800A3030: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800A3030: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800797FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800797FC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80079800: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80079804: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80079808: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8007980C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80079810: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80079814: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80079818: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8007981C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80079820: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x80079824: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80079828: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8007982C: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80079830: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80079834: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80079838: nop

    // 0x8007983C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80079840: nop

    // 0x80079844: div.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80079848: swc1        $f14, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f14.u32l;
    // 0x8007984C: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x80079850: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x80079854: swc1        $f12, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f12.u32l;
    // 0x80079858: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8007985C: nop

    // 0x80079860: swc1        $f12, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f12.u32l;
    // 0x80079864: b           L_8007986C
    // 0x80079868: nop

        goto L_8007986C;
    // 0x80079868: nop

L_8007986C:
    // 0x8007986C: jr          $ra
    // 0x80079870: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80079870: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800ADB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ADB1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800ADB20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800ADB24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ADB28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ADB2C: jal         0x8002B0E4
    // 0x800ADB30: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800ADB30: nop

    after_0:
    // 0x800ADB34: b           L_800ADB3C
    // 0x800ADB38: nop

        goto L_800ADB3C;
    // 0x800ADB38: nop

L_800ADB3C:
    // 0x800ADB3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800ADB40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800ADB44: jr          $ra
    // 0x800ADB48: nop

    return;
    // 0x800ADB48: nop

;}
RECOMP_FUNC void func_80084430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084430: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80084434: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80084438: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x8008443C: swc1        $f12, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f12.u32l;
    // 0x80084440: swc1        $f14, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f14.u32l;
    // 0x80084444: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80084448: lwc1        $f14, 0xB4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8008444C: lw          $a2, 0xB8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB8);
    // 0x80084450: jal         0x800843CC
    // 0x80084454: nop

    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x80084454: nop

    after_0:
    // 0x80084458: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008445C: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x80084460: nop

    // 0x80084464: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80084468: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x8008446C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80084470: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x80084474: nop

    // 0x80084478: sb          $t8, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r24;
    // 0x8008447C: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x80084480: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80084484: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80084488: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008448C: lw          $t1, 0x76F0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X76F0);
    // 0x80084490: nop

    // 0x80084494: sw          $t1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r9;
    // 0x80084498: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x8008449C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800844A0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800844A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800844A8: lw          $t4, 0x7700($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7700);
    // 0x800844AC: nop

    // 0x800844B0: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x800844B4: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x800844B8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800844BC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800844C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800844C4: lw          $t7, 0x7710($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7710);
    // 0x800844C8: nop

    // 0x800844CC: sw          $t7, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r15;
    // 0x800844D0: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x800844D4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800844D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800844DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800844E0: lw          $t0, 0x7720($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7720);
    // 0x800844E4: nop

    // 0x800844E8: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x800844EC: lw          $t1, 0xAC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XAC);
    // 0x800844F0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800844F4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800844F8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800844FC: lw          $t3, 0x7730($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7730);
    // 0x80084500: nop

    // 0x80084504: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
    // 0x80084508: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x8008450C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084510: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80084514: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80084518: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8008451C: nop

    // 0x80084520: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x80084524: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80084528: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8008452C: lw          $t7, 0x51B0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51B0);
    // 0x80084530: lw          $t6, 0x51AC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51AC);
    // 0x80084534: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80084538: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8008453C: lw          $t9, 0x51B8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51B8);
    // 0x80084540: lw          $t8, 0x51B4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51B4);
    // 0x80084544: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80084548: sra         $a2, $t7, 31
    ctx->r6 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8008454C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80084550: sra         $a0, $t6, 31
    ctx->r4 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80084554: addiu       $t6, $sp, 0x84
    ctx->r14 = ADD32(ctx->r29, 0X84);
    // 0x80084558: addiu       $t7, $sp, 0x80
    ctx->r15 = ADD32(ctx->r29, 0X80);
    // 0x8008455C: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x80084560: addiu       $t5, $sp, 0x88
    ctx->r13 = ADD32(ctx->r29, 0X88);
    // 0x80084564: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x80084568: sra         $t2, $t9, 31
    ctx->r10 = S32(SIGNED(ctx->r25) >> 31);
    // 0x8008456C: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x80084570: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80084574: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80084578: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8008457C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80084580: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80084584: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80084588: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8008458C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80084590: jal         0x80016A80
    // 0x80084594: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_80016A80(rdram, ctx);
        goto after_1;
    // 0x80084594: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_1:
    // 0x80084598: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x8008459C: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x800845A0: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x800845A4: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x800845A8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x800845AC: sra         $a0, $t8, 31
    ctx->r4 = S32(SIGNED(ctx->r24) >> 31);
    // 0x800845B0: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x800845B4: sra         $a2, $t0, 31
    ctx->r6 = S32(SIGNED(ctx->r8) >> 31);
    // 0x800845B8: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x800845BC: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x800845C0: addiu       $t6, $sp, 0x7C
    ctx->r14 = ADD32(ctx->r29, 0X7C);
    // 0x800845C4: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x800845C8: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x800845CC: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x800845D0: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x800845D4: sra         $t4, $t9, 31
    ctx->r12 = S32(SIGNED(ctx->r25) >> 31);
    // 0x800845D8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800845DC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x800845E0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800845E4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800845E8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800845EC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800845F0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800845F4: jal         0x80016A80
    // 0x800845F8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_80016A80(rdram, ctx);
        goto after_2;
    // 0x800845F8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_2:
    // 0x800845FC: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80084600: lw          $t1, 0x51AC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51AC);
    // 0x80084604: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80084608: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8008460C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80084610: sra         $a0, $t1, 31
    ctx->r4 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80084614: lw          $t3, 0x51B4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X51B4);
    // 0x80084618: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008461C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80084620: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80084624: lw          $t2, 0x51B0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51B0);
    // 0x80084628: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008462C: lw          $t1, 0x76F0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X76F0);
    // 0x80084630: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x80084634: sra         $t4, $t3, 31
    ctx->r12 = S32(SIGNED(ctx->r11) >> 31);
    // 0x80084638: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8008463C: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80084640: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80084644: lw          $t9, 0x51B8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51B8);
    // 0x80084648: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8008464C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80084650: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80084654: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x80084658: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008465C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80084660: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80084664: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80084668: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x8008466C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80084670: lw          $t1, 0x7720($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7720);
    // 0x80084674: lw          $t5, 0x7710($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7710);
    // 0x80084678: lw          $t4, 0x7700($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7700);
    // 0x8008467C: or          $t7, $t9, $zero
    ctx->r15 = ctx->r25 | 0;
    // 0x80084680: sra         $t6, $t9, 31
    ctx->r14 = S32(SIGNED(ctx->r25) >> 31);
    // 0x80084684: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80084688: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8008468C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80084690: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80084694: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80084698: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x8008469C: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x800846A0: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x800846A4: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x800846A8: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x800846AC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x800846B0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x800846B4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x800846B8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800846BC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x800846C0: jal         0x8001608C
    // 0x800846C4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    Math_ComparePlanes(rdram, ctx);
        goto after_3;
    // 0x800846C4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_3:
    // 0x800846C8: beq         $v0, $zero, L_800846F8
    if (ctx->r2 == 0) {
        // 0x800846CC: nop
    
            goto L_800846F8;
    }
    // 0x800846CC: nop

    // 0x800846D0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800846D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800846D8: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x800846DC: nop

    // 0x800846E0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800846E4: nop

    // 0x800846E8: bc1f        L_800846F8
    if (!c1cs) {
        // 0x800846EC: nop
    
            goto L_800846F8;
    }
    // 0x800846EC: nop

    // 0x800846F0: b           L_80084BC8
    // 0x800846F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80084BC8;
    // 0x800846F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800846F8:
    // 0x800846F8: lbu         $t4, 0x93($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X93);
    // 0x800846FC: nop

    // 0x80084700: bne         $t4, $zero, L_80084968
    if (ctx->r12 != 0) {
        // 0x80084704: nop
    
            goto L_80084968;
    }
    // 0x80084704: nop

    // 0x80084708: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8008470C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80084710: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80084714: nop

    // 0x80084718: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8008471C: nop

    // 0x80084720: bc1f        L_80084958
    if (!c1cs) {
        // 0x80084724: nop
    
            goto L_80084958;
    }
    // 0x80084724: nop

    // 0x80084728: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8008472C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80084730: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80084734: nop

    // 0x80084738: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8008473C: nop

    // 0x80084740: bc1f        L_80084958
    if (!c1cs) {
        // 0x80084744: nop
    
            goto L_80084958;
    }
    // 0x80084744: nop

    // 0x80084748: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8008474C: lwc1        $f6, 0x51C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51C0);
    // 0x80084750: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80084754: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80084758: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008475C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80084760: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80084764: nop

    // 0x80084768: bc1f        L_80084778
    if (!c1cs) {
        // 0x8008476C: nop
    
            goto L_80084778;
    }
    // 0x8008476C: nop

    // 0x80084770: b           L_80084BC8
    // 0x80084774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80084BC8;
    // 0x80084774: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80084778:
    // 0x80084778: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8008477C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80084780: nop

    // 0x80084784: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80084788: nop

    // 0x8008478C: bc1f        L_800847B0
    if (!c1cs) {
        // 0x80084790: nop
    
            goto L_800847B0;
    }
    // 0x80084790: nop

    // 0x80084794: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80084798: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008479C: nop

    // 0x800847A0: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800847A4: nop

    // 0x800847A8: bc1t        L_80084958
    if (c1cs) {
        // 0x800847AC: nop
    
            goto L_80084958;
    }
    // 0x800847AC: nop

L_800847B0:
    // 0x800847B0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800847B4: lw          $t6, 0x51AC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51AC);
    // 0x800847B8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800847BC: lw          $t5, 0x51B4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X51B4);
    // 0x800847C0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800847C4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800847C8: lw          $t0, 0x51B8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51B8);
    // 0x800847CC: lw          $t7, 0x51B0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51B0);
    // 0x800847D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800847D4: sra         $a0, $t6, 31
    ctx->r4 = S32(SIGNED(ctx->r14) >> 31);
    // 0x800847D8: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x800847DC: lw          $t1, 0xA8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA8);
    // 0x800847E0: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x800847E4: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x800847E8: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x800847EC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x800847F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800847F4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x800847F8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800847FC: sra         $a2, $t7, 31
    ctx->r6 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80084800: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x80084804: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x80084808: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x8008480C: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x80084810: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80084814: or          $t5, $t1, $zero
    ctx->r13 = ctx->r9 | 0;
    // 0x80084818: sra         $t4, $t1, 31
    ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
    // 0x8008481C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80084820: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80084824: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80084828: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8008482C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80084830: addiu       $t3, $sp, 0x64
    ctx->r11 = ADD32(ctx->r29, 0X64);
    // 0x80084834: addiu       $t9, $sp, 0x58
    ctx->r25 = ADD32(ctx->r29, 0X58);
    // 0x80084838: addiu       $t8, $sp, 0x5C
    ctx->r24 = ADD32(ctx->r29, 0X5C);
    // 0x8008483C: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x80084840: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x80084844: sra         $t0, $t7, 31
    ctx->r8 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80084848: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x8008484C: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80084850: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80084854: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x80084858: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8008485C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80084860: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80084864: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80084868: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x8008486C: jal         0x80016714
    // 0x80084870: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    func_80016714(rdram, ctx);
        goto after_4;
    // 0x80084870: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    after_4:
    // 0x80084874: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80084878: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008487C: nop

    // 0x80084880: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80084884: nop

    // 0x80084888: bc1f        L_800848E4
    if (!c1cs) {
        // 0x8008488C: nop
    
            goto L_800848E4;
    }
    // 0x8008488C: nop

    // 0x80084890: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80084894: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80084898: nop

    // 0x8008489C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x800848A0: nop

    // 0x800848A4: bc1f        L_800848E4
    if (!c1cs) {
        // 0x800848A8: nop
    
            goto L_800848E4;
    }
    // 0x800848A8: nop

    // 0x800848AC: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800848B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800848B4: nop

    // 0x800848B8: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800848BC: nop

    // 0x800848C0: bc1f        L_800848E4
    if (!c1cs) {
        // 0x800848C4: nop
    
            goto L_800848E4;
    }
    // 0x800848C4: nop

    // 0x800848C8: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800848CC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800848D0: nop

    // 0x800848D4: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800848D8: nop

    // 0x800848DC: bc1t        L_80084958
    if (c1cs) {
        // 0x800848E0: nop
    
            goto L_80084958;
    }
    // 0x800848E0: nop

L_800848E4:
    // 0x800848E4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800848E8: lwc1        $f12, 0x51C4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X51C4);
    // 0x800848EC: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800848F0: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800848F4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800848F8: lwc1        $f14, 0x51CC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X51CC);
    // 0x800848FC: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80084900: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x80084904: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80084908: jal         0x800162F0
    // 0x8008490C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800162F0(rdram, ctx);
        goto after_5;
    // 0x8008490C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80084910: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x80084914: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80084918: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8008491C: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80084920: lwc1        $f14, 0xB8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80084924: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80084928: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x8008492C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80084930: jal         0x800162F0
    // 0x80084934: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800162F0(rdram, ctx);
        goto after_6;
    // 0x80084934: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80084938: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x8008493C: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x80084940: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x80084944: nop

    // 0x80084948: beq         $t7, $t0, L_80084958
    if (ctx->r15 == ctx->r8) {
        // 0x8008494C: nop
    
            goto L_80084958;
    }
    // 0x8008494C: nop

    // 0x80084950: b           L_80084BC8
    // 0x80084954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80084BC8;
    // 0x80084954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80084958:
    // 0x80084958: b           L_80084BC8
    // 0x8008495C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80084BC8;
    // 0x8008495C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80084960: b           L_80084BC0
    // 0x80084964: nop

        goto L_80084BC0;
    // 0x80084964: nop

L_80084968:
    // 0x80084968: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8008496C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80084970: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80084974: nop

    // 0x80084978: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8008497C: nop

    // 0x80084980: bc1f        L_80084BB8
    if (!c1cs) {
        // 0x80084984: nop
    
            goto L_80084BB8;
    }
    // 0x80084984: nop

    // 0x80084988: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8008498C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80084990: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80084994: nop

    // 0x80084998: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8008499C: nop

    // 0x800849A0: bc1f        L_80084BB8
    if (!c1cs) {
        // 0x800849A4: nop
    
            goto L_80084BB8;
    }
    // 0x800849A4: nop

    // 0x800849A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800849AC: lwc1        $f8, 0x51C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X51C0);
    // 0x800849B0: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x800849B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800849B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800849BC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800849C0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800849C4: nop

    // 0x800849C8: bc1f        L_800849D8
    if (!c1cs) {
        // 0x800849CC: nop
    
            goto L_800849D8;
    }
    // 0x800849CC: nop

    // 0x800849D0: b           L_80084BC8
    // 0x800849D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80084BC8;
    // 0x800849D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800849D8:
    // 0x800849D8: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x800849DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800849E0: nop

    // 0x800849E4: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x800849E8: nop

    // 0x800849EC: bc1f        L_80084A10
    if (!c1cs) {
        // 0x800849F0: nop
    
            goto L_80084A10;
    }
    // 0x800849F0: nop

    // 0x800849F4: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800849F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800849FC: nop

    // 0x80084A00: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80084A04: nop

    // 0x80084A08: bc1t        L_80084BB8
    if (c1cs) {
        // 0x80084A0C: nop
    
            goto L_80084BB8;
    }
    // 0x80084A0C: nop

L_80084A10:
    // 0x80084A10: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80084A14: lw          $t2, 0x51B0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51B0);
    // 0x80084A18: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80084A1C: lw          $t4, 0x51B4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X51B4);
    // 0x80084A20: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80084A24: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80084A28: lw          $t5, 0x51B8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X51B8);
    // 0x80084A2C: lw          $t1, 0x51AC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51AC);
    // 0x80084A30: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80084A34: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80084A38: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x80084A3C: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x80084A40: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x80084A44: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80084A48: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80084A4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80084A50: or          $t9, $t5, $zero
    ctx->r25 = ctx->r13 | 0;
    // 0x80084A54: sra         $t8, $t5, 31
    ctx->r24 = S32(SIGNED(ctx->r13) >> 31);
    // 0x80084A58: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80084A5C: sra         $a0, $t1, 31
    ctx->r4 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80084A60: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80084A64: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x80084A68: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x80084A6C: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80084A70: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x80084A74: sra         $t0, $t3, 31
    ctx->r8 = S32(SIGNED(ctx->r11) >> 31);
    // 0x80084A78: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80084A7C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80084A80: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80084A84: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80084A88: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80084A8C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80084A90: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x80084A94: addiu       $t4, $sp, 0x5C
    ctx->r12 = ADD32(ctx->r29, 0X5C);
    // 0x80084A98: addiu       $t3, $sp, 0x64
    ctx->r11 = ADD32(ctx->r29, 0X64);
    // 0x80084A9C: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x80084AA0: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x80084AA4: sra         $t0, $t7, 31
    ctx->r8 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80084AA8: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x80084AAC: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80084AB0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80084AB4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80084AB8: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80084ABC: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80084AC0: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x80084AC4: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x80084AC8: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x80084ACC: jal         0x80016714
    // 0x80084AD0: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    func_80016714(rdram, ctx);
        goto after_7;
    // 0x80084AD0: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    after_7:
    // 0x80084AD4: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80084AD8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80084ADC: nop

    // 0x80084AE0: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80084AE4: nop

    // 0x80084AE8: bc1f        L_80084B44
    if (!c1cs) {
        // 0x80084AEC: nop
    
            goto L_80084B44;
    }
    // 0x80084AEC: nop

    // 0x80084AF0: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80084AF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80084AF8: nop

    // 0x80084AFC: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80084B00: nop

    // 0x80084B04: bc1f        L_80084B44
    if (!c1cs) {
        // 0x80084B08: nop
    
            goto L_80084B44;
    }
    // 0x80084B08: nop

    // 0x80084B0C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80084B10: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80084B14: nop

    // 0x80084B18: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80084B1C: nop

    // 0x80084B20: bc1f        L_80084B44
    if (!c1cs) {
        // 0x80084B24: nop
    
            goto L_80084B44;
    }
    // 0x80084B24: nop

    // 0x80084B28: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80084B2C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80084B30: nop

    // 0x80084B34: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80084B38: nop

    // 0x80084B3C: bc1t        L_80084BB8
    if (c1cs) {
        // 0x80084B40: nop
    
            goto L_80084BB8;
    }
    // 0x80084B40: nop

L_80084B44:
    // 0x80084B44: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80084B48: lwc1        $f12, 0x51C4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X51C4);
    // 0x80084B4C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80084B50: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80084B54: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80084B58: lwc1        $f14, 0x51CC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X51CC);
    // 0x80084B5C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80084B60: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x80084B64: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80084B68: jal         0x800162F0
    // 0x80084B6C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800162F0(rdram, ctx);
        goto after_8;
    // 0x80084B6C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80084B70: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x80084B74: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80084B78: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80084B7C: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80084B80: lwc1        $f14, 0xB8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80084B84: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80084B88: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x80084B8C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80084B90: jal         0x800162F0
    // 0x80084B94: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800162F0(rdram, ctx);
        goto after_9;
    // 0x80084B94: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x80084B98: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x80084B9C: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x80084BA0: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x80084BA4: nop

    // 0x80084BA8: beq         $t6, $t8, L_80084BB8
    if (ctx->r14 == ctx->r24) {
        // 0x80084BAC: nop
    
            goto L_80084BB8;
    }
    // 0x80084BAC: nop

    // 0x80084BB0: b           L_80084BC8
    // 0x80084BB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80084BC8;
    // 0x80084BB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80084BB8:
    // 0x80084BB8: b           L_80084BC8
    // 0x80084BBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80084BC8;
    // 0x80084BBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80084BC0:
    // 0x80084BC0: b           L_80084BC8
    // 0x80084BC4: nop

        goto L_80084BC8;
    // 0x80084BC4: nop

L_80084BC8:
    // 0x80084BC8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80084BCC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x80084BD0: jr          $ra
    // 0x80084BD4: nop

    return;
    // 0x80084BD4: nop

;}
RECOMP_FUNC void func_800723EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800723EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800723F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800723F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800723F8: lw          $t6, 0x65EC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X65EC);
    // 0x800723FC: nop

    // 0x80072400: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x80072404: beq         $at, $zero, L_80072414
    if (ctx->r1 == 0) {
        // 0x80072408: nop
    
            goto L_80072414;
    }
    // 0x80072408: nop

    // 0x8007240C: b           L_80072844
    // 0x80072410: nop

        goto L_80072844;
    // 0x80072410: nop

L_80072414:
    // 0x80072414: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80072418: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8007241C: lb          $t7, 0x523E($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X523E);
    // 0x80072420: nop

    // 0x80072424: bne         $t7, $zero, L_80072498
    if (ctx->r15 != 0) {
        // 0x80072428: nop
    
            goto L_80072498;
    }
    // 0x80072428: nop

    // 0x8007242C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80072430: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80072434: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80072438: lwc1        $f4, 0x24($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X24);
    // 0x8007243C: nop

    // 0x80072440: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80072444: nop

    // 0x80072448: bc1f        L_80072490
    if (!c1cs) {
        // 0x8007244C: nop
    
            goto L_80072490;
    }
    // 0x8007244C: nop

    // 0x80072450: lwc1        $f8, 0x28($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80072454: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80072458: nop

    // 0x8007245C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80072460: nop

    // 0x80072464: bc1f        L_80072490
    if (!c1cs) {
        // 0x80072468: nop
    
            goto L_80072490;
    }
    // 0x80072468: nop

    // 0x8007246C: lwc1        $f16, 0x2C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80072470: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80072474: nop

    // 0x80072478: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8007247C: nop

    // 0x80072480: bc1f        L_80072490
    if (!c1cs) {
        // 0x80072484: nop
    
            goto L_80072490;
    }
    // 0x80072484: nop

    // 0x80072488: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8007248C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_80072490:
    // 0x80072490: b           L_80072534
    // 0x80072494: nop

        goto L_80072534;
    // 0x80072494: nop

L_80072498:
    // 0x80072498: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8007249C: lb          $t0, 0x523E($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X523E);
    // 0x800724A0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800724A4: bne         $t0, $at, L_80072518
    if (ctx->r8 != ctx->r1) {
        // 0x800724A8: nop
    
            goto L_80072518;
    }
    // 0x800724A8: nop

    // 0x800724AC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800724B0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x800724B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800724B8: lwc1        $f4, 0x24($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X24);
    // 0x800724BC: nop

    // 0x800724C0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800724C4: nop

    // 0x800724C8: bc1f        L_80072510
    if (!c1cs) {
        // 0x800724CC: nop
    
            goto L_80072510;
    }
    // 0x800724CC: nop

    // 0x800724D0: lwc1        $f8, 0x28($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800724D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800724D8: nop

    // 0x800724DC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800724E0: nop

    // 0x800724E4: bc1f        L_80072510
    if (!c1cs) {
        // 0x800724E8: nop
    
            goto L_80072510;
    }
    // 0x800724E8: nop

    // 0x800724EC: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800724F0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800724F4: nop

    // 0x800724F8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x800724FC: nop

    // 0x80072500: bc1f        L_80072510
    if (!c1cs) {
        // 0x80072504: nop
    
            goto L_80072510;
    }
    // 0x80072504: nop

    // 0x80072508: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8007250C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_80072510:
    // 0x80072510: b           L_80072534
    // 0x80072514: nop

        goto L_80072534;
    // 0x80072514: nop

L_80072518:
    // 0x80072518: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8007251C: lb          $t3, 0x523E($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X523E);
    // 0x80072520: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80072524: bne         $t3, $at, L_80072534
    if (ctx->r11 != ctx->r1) {
        // 0x80072528: nop
    
            goto L_80072534;
    }
    // 0x80072528: nop

    // 0x8007252C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80072530: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_80072534:
    // 0x80072534: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80072538: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8007253C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80072540: nop

    // 0x80072544: beq         $t5, $zero, L_80072674
    if (ctx->r13 == 0) {
        // 0x80072548: nop
    
            goto L_80072674;
    }
    // 0x80072548: nop

    // 0x8007254C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80072550: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x80072554: nop

    // 0x80072558: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8007255C: beq         $t7, $zero, L_800725B4
    if (ctx->r15 == 0) {
        // 0x80072560: nop
    
            goto L_800725B4;
    }
    // 0x80072560: nop

    // 0x80072564: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80072568: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8007256C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072570: lwc1        $f4, 0x7680($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x80072574: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80072578: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007257C: nop

    // 0x80072580: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80072584: nop

    // 0x80072588: bc1f        L_800725AC
    if (!c1cs) {
        // 0x8007258C: nop
    
            goto L_800725AC;
    }
    // 0x8007258C: nop

    // 0x80072590: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072594: lwc1        $f8, 0x7680($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x80072598: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007259C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800725A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800725A4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800725A8: swc1        $f16, 0x7680($at)
    MEM_W(0X7680, ctx->r1) = ctx->f16.u32l;
L_800725AC:
    // 0x800725AC: b           L_80072614
    // 0x800725B0: nop

        goto L_80072614;
    // 0x800725B0: nop

L_800725B4:
    // 0x800725B4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800725B8: lhu         $t9, -0x1C82($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C82);
    // 0x800725BC: nop

    // 0x800725C0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800725C4: beq         $t0, $zero, L_80072614
    if (ctx->r8 == 0) {
        // 0x800725C8: nop
    
            goto L_80072614;
    }
    // 0x800725C8: nop

    // 0x800725CC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800725D0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800725D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800725D8: lwc1        $f18, 0x7680($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x800725DC: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x800725E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800725E4: nop

    // 0x800725E8: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800725EC: nop

    // 0x800725F0: bc1f        L_80072614
    if (!c1cs) {
        // 0x800725F4: nop
    
            goto L_80072614;
    }
    // 0x800725F4: nop

    // 0x800725F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800725FC: lwc1        $f6, 0x7680($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x80072600: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80072604: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80072608: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007260C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80072610: swc1        $f10, 0x7680($at)
    MEM_W(0X7680, ctx->r1) = ctx->f10.u32l;
L_80072614:
    // 0x80072614: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80072618: lhu         $t2, -0x1C82($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C82);
    // 0x8007261C: nop

    // 0x80072620: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x80072624: beq         $t3, $zero, L_80072674
    if (ctx->r11 == 0) {
        // 0x80072628: nop
    
            goto L_80072674;
    }
    // 0x80072628: nop

    // 0x8007262C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80072630: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80072634: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072638: lwc1        $f16, 0x76A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X76A8);
    // 0x8007263C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80072640: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80072644: nop

    // 0x80072648: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8007264C: nop

    // 0x80072650: bc1f        L_80072674
    if (!c1cs) {
        // 0x80072654: nop
    
            goto L_80072674;
    }
    // 0x80072654: nop

    // 0x80072658: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007265C: lwc1        $f4, 0x76A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X76A8);
    // 0x80072660: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80072664: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80072668: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007266C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80072670: swc1        $f8, 0x76A8($at)
    MEM_W(0X76A8, ctx->r1) = ctx->f8.u32l;
L_80072674:
    // 0x80072674: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80072678: nop

    // 0x8007267C: bne         $t5, $zero, L_80072700
    if (ctx->r13 != 0) {
        // 0x80072680: nop
    
            goto L_80072700;
    }
    // 0x80072680: nop

    // 0x80072684: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072688: lwc1        $f10, 0x7680($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x8007268C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80072690: nop

    // 0x80072694: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80072698: nop

    // 0x8007269C: bc1f        L_800726C4
    if (!c1cs) {
        // 0x800726A0: nop
    
            goto L_800726C4;
    }
    // 0x800726A0: nop

    // 0x800726A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800726A8: lwc1        $f18, 0x7680($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x800726AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800726B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800726B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800726B8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800726BC: b           L_80072700
    // 0x800726C0: swc1        $f6, 0x7680($at)
    MEM_W(0X7680, ctx->r1) = ctx->f6.u32l;
        goto L_80072700;
    // 0x800726C0: swc1        $f6, 0x7680($at)
    MEM_W(0X7680, ctx->r1) = ctx->f6.u32l;
L_800726C4:
    // 0x800726C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800726C8: lwc1        $f8, 0x7680($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x800726CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800726D0: nop

    // 0x800726D4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800726D8: nop

    // 0x800726DC: bc1f        L_80072700
    if (!c1cs) {
        // 0x800726E0: nop
    
            goto L_80072700;
    }
    // 0x800726E0: nop

    // 0x800726E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800726E8: lwc1        $f16, 0x7680($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x800726EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800726F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800726F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800726F8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800726FC: swc1        $f4, 0x7680($at)
    MEM_W(0X7680, ctx->r1) = ctx->f4.u32l;
L_80072700:
    // 0x80072700: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80072704: nop

    // 0x80072708: bne         $t6, $zero, L_8007278C
    if (ctx->r14 != 0) {
        // 0x8007270C: nop
    
            goto L_8007278C;
    }
    // 0x8007270C: nop

    // 0x80072710: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072714: lwc1        $f6, 0x76A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X76A8);
    // 0x80072718: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007271C: nop

    // 0x80072720: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80072724: nop

    // 0x80072728: bc1f        L_80072750
    if (!c1cs) {
        // 0x8007272C: nop
    
            goto L_80072750;
    }
    // 0x8007272C: nop

    // 0x80072730: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072734: lwc1        $f10, 0x76A8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X76A8);
    // 0x80072738: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007273C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80072740: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072744: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80072748: b           L_8007278C
    // 0x8007274C: swc1        $f18, 0x76A8($at)
    MEM_W(0X76A8, ctx->r1) = ctx->f18.u32l;
        goto L_8007278C;
    // 0x8007274C: swc1        $f18, 0x76A8($at)
    MEM_W(0X76A8, ctx->r1) = ctx->f18.u32l;
L_80072750:
    // 0x80072750: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072754: lwc1        $f4, 0x76A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X76A8);
    // 0x80072758: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007275C: nop

    // 0x80072760: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80072764: nop

    // 0x80072768: bc1f        L_8007278C
    if (!c1cs) {
        // 0x8007276C: nop
    
            goto L_8007278C;
    }
    // 0x8007276C: nop

    // 0x80072770: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072774: lwc1        $f8, 0x76A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X76A8);
    // 0x80072778: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007277C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80072780: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072784: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80072788: swc1        $f16, 0x76A8($at)
    MEM_W(0X76A8, ctx->r1) = ctx->f16.u32l;
L_8007278C:
    // 0x8007278C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072790: lwc1        $f18, 0x76A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X76A8);
    // 0x80072794: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80072798: nop

    // 0x8007279C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x800727A0: nop

    // 0x800727A4: bc1f        L_800727CC
    if (!c1cs) {
        // 0x800727A8: nop
    
            goto L_800727CC;
    }
    // 0x800727A8: nop

    // 0x800727AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800727B0: lwc1        $f6, 0x7680($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x800727B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800727B8: nop

    // 0x800727BC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800727C0: nop

    // 0x800727C4: bc1t        L_8007283C
    if (c1cs) {
        // 0x800727C8: nop
    
            goto L_8007283C;
    }
    // 0x800727C8: nop

L_800727CC:
    // 0x800727CC: jal         0x80072358
    // 0x800727D0: nop

    func_80072358(rdram, ctx);
        goto after_0;
    // 0x800727D0: nop

    after_0:
    // 0x800727D4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800727D8: lw          $t7, -0x1BD8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1BD8);
    // 0x800727DC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800727E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800727E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800727E8: lw          $t9, -0x4C04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4C04);
    // 0x800727EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800727F0: lbu         $t0, 0x5($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X5);
    // 0x800727F4: nop

    // 0x800727F8: sb          $t0, 0x7974($at)
    MEM_B(0X7974, ctx->r1) = ctx->r8;
    // 0x800727FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072800: lwc1        $f12, -0x1EA8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x80072804: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072808: lwc1        $f14, 0x76A8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X76A8);
    // 0x8007280C: jal         0x80015538
    // 0x80072810: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80072810: nop

    after_1:
    // 0x80072814: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072818: swc1        $f0, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f0.u32l;
    // 0x8007281C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072820: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80072824: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072828: lwc1        $f14, 0x7680($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7680);
    // 0x8007282C: jal         0x80015538
    // 0x80072830: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80072830: nop

    after_2:
    // 0x80072834: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072838: swc1        $f0, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f0.u32l;
L_8007283C:
    // 0x8007283C: b           L_80072844
    // 0x80072840: nop

        goto L_80072844;
    // 0x80072840: nop

L_80072844:
    // 0x80072844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80072848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007284C: jr          $ra
    // 0x80072850: nop

    return;
    // 0x80072850: nop

;}
RECOMP_FUNC void func_800D8A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D8A30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D8A34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D8A38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D8A3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D8A40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D8A44: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D8A48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D8A4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D8A50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D8A54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D8A58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D8A5C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D8A60: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D8A64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D8A68: beq         $s0, $at, L_800D8A84
    if (ctx->r16 == ctx->r1) {
        // 0x800D8A6C: nop
    
            goto L_800D8A84;
    }
    // 0x800D8A6C: nop

    // 0x800D8A70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D8A74: beq         $s0, $at, L_800D8A94
    if (ctx->r16 == ctx->r1) {
        // 0x800D8A78: nop
    
            goto L_800D8A94;
    }
    // 0x800D8A78: nop

    // 0x800D8A7C: b           L_800D8AA4
    // 0x800D8A80: nop

        goto L_800D8AA4;
    // 0x800D8A80: nop

L_800D8A84:
    // 0x800D8A84: jal         0x800D88F4
    // 0x800D8A88: nop

    func_800D88F4(rdram, ctx);
        goto after_0;
    // 0x800D8A88: nop

    after_0:
    // 0x800D8A8C: b           L_800D8AAC
    // 0x800D8A90: nop

        goto L_800D8AAC;
    // 0x800D8A90: nop

L_800D8A94:
    // 0x800D8A94: jal         0x800D8958
    // 0x800D8A98: nop

    func_800D8958(rdram, ctx);
        goto after_1;
    // 0x800D8A98: nop

    after_1:
    // 0x800D8A9C: b           L_800D8AAC
    // 0x800D8AA0: nop

        goto L_800D8AAC;
    // 0x800D8AA0: nop

L_800D8AA4:
    // 0x800D8AA4: b           L_800D8AAC
    // 0x800D8AA8: nop

        goto L_800D8AAC;
    // 0x800D8AA8: nop

L_800D8AAC:
    // 0x800D8AAC: b           L_800D8AB4
    // 0x800D8AB0: nop

        goto L_800D8AB4;
    // 0x800D8AB0: nop

L_800D8AB4:
    // 0x800D8AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D8AB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D8ABC: jr          $ra
    // 0x800D8AC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D8AC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800F5E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5E14: jr          $ra
    // 0x800F5E18: nop

    return;
    // 0x800F5E18: nop

    // 0x800F5E1C: jr          $ra
    // 0x800F5E20: nop

    return;
    // 0x800F5E20: nop

    // 0x800F5E24: jr          $ra
    // 0x800F5E28: nop

    return;
    // 0x800F5E28: nop

    // 0x800F5E2C: jr          $ra
    // 0x800F5E30: nop

    return;
    // 0x800F5E30: nop

;}
RECOMP_FUNC void func_800FB344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB344: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FB348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB34C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FB350: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FB354: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FB358: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FB35C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB360: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FB364: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB368: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FB36C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FB370: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FB374: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800FB378: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB37C: nop

    // 0x800FB380: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FB384: nop

    // 0x800FB388: bne         $t1, $zero, L_800FB3F0
    if (ctx->r9 != 0) {
        // 0x800FB38C: nop
    
            goto L_800FB3F0;
    }
    // 0x800FB38C: nop

    // 0x800FB390: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB394: nop

    // 0x800FB398: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800FB39C: nop

    // 0x800FB3A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FB3A4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800FB3A8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB3AC: addiu       $t5, $zero, 0x1C
    ctx->r13 = ADD32(0, 0X1C);
    // 0x800FB3B0: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800FB3B4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB3B8: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x800FB3BC: sh          $t7, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r15;
    // 0x800FB3C0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800FB3C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB3C8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800FB3CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FB3D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FB3D4: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800FB3D8: nop

    // 0x800FB3DC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800FB3E0: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x800FB3E4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800FB3E8: sh          $t1, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = ctx->r9;
    // 0x800FB3EC: nop

L_800FB3F0:
    // 0x800FB3F0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB3F4: nop

    // 0x800FB3F8: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x800FB3FC: nop

    // 0x800FB400: slti        $at, $t4, 0xE
    ctx->r1 = SIGNED(ctx->r12) < 0XE ? 1 : 0;
    // 0x800FB404: beq         $at, $zero, L_800FB434
    if (ctx->r1 == 0) {
        // 0x800FB408: nop
    
            goto L_800FB434;
    }
    // 0x800FB408: nop

    // 0x800FB40C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB410: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x800FB414: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800FB418: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800FB41C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800FB420: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800FB424: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800FB428: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800FB42C: b           L_800FB458
    // 0x800FB430: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
        goto L_800FB458;
    // 0x800FB430: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
L_800FB434:
    // 0x800FB434: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB438: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x800FB43C: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800FB440: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800FB444: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800FB448: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800FB44C: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x800FB450: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800FB454: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
L_800FB458:
    // 0x800FB458: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB45C: nop

    // 0x800FB460: lh          $t7, 0xB6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB6);
    // 0x800FB464: nop

    // 0x800FB468: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800FB46C: sh          $t8, 0xB6($t6)
    MEM_H(0XB6, ctx->r14) = ctx->r24;
    // 0x800FB470: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB474: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x800FB478: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x800FB47C: nop

    // 0x800FB480: bne         $t1, $at, L_800FB494
    if (ctx->r9 != ctx->r1) {
        // 0x800FB484: nop
    
            goto L_800FB494;
    }
    // 0x800FB484: nop

    // 0x800FB488: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB48C: nop

    // 0x800FB490: sh          $zero, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = 0;
L_800FB494:
    // 0x800FB494: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB498: nop

    // 0x800FB49C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800FB4A0: nop

    // 0x800FB4A4: bne         $t4, $zero, L_800FB4E8
    if (ctx->r12 != 0) {
        // 0x800FB4A8: nop
    
            goto L_800FB4E8;
    }
    // 0x800FB4A8: nop

    // 0x800FB4AC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB4B0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800FB4B4: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800FB4B8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB4BC: nop

    // 0x800FB4C0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800FB4C4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB4C8: nop

    // 0x800FB4CC: lh          $t6, 0xB8($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XB8);
    // 0x800FB4D0: nop

    // 0x800FB4D4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800FB4D8: nop

    // 0x800FB4DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FB4E0: b           L_800FB500
    // 0x800FB4E4: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
        goto L_800FB500;
    // 0x800FB4E4: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
L_800FB4E8:
    // 0x800FB4E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB4EC: nop

    // 0x800FB4F0: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800FB4F4: nop

    // 0x800FB4F8: addiu       $t9, $t1, -0x1
    ctx->r25 = ADD32(ctx->r9, -0X1);
    // 0x800FB4FC: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_800FB500:
    // 0x800FB500: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB508: jal         0x8002A1FC
    // 0x800FB50C: lui         $a1, 0x442F
    ctx->r5 = S32(0X442F << 16);
    func_8002A1FC(rdram, ctx);
        goto after_0;
    // 0x800FB50C: lui         $a1, 0x442F
    ctx->r5 = S32(0X442F << 16);
    after_0:
    // 0x800FB510: bne         $v0, $zero, L_800FB530
    if (ctx->r2 != 0) {
        // 0x800FB514: nop
    
            goto L_800FB530;
    }
    // 0x800FB514: nop

    // 0x800FB518: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB51C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800FB520: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800FB524: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB528: nop

    // 0x800FB52C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800FB530:
    // 0x800FB530: b           L_800FB538
    // 0x800FB534: nop

        goto L_800FB538;
    // 0x800FB534: nop

L_800FB538:
    // 0x800FB538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB53C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FB540: jr          $ra
    // 0x800FB544: nop

    return;
    // 0x800FB544: nop

;}
RECOMP_FUNC void func_80090C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090C8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090C90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090C94: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090C98: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090C9C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090CA0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090CA4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090CA8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090CAC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090CB0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090CB4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090CB8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090CBC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090CC0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090CC4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090CC8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090CCC: addiu       $a1, $a1, 0x14A4
    ctx->r5 = ADD32(ctx->r5, 0X14A4);
    // 0x80090CD0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090CD4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090CD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090CDC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090CE0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090CE4: jal         0x80027464
    // 0x80090CE8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090CE8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090CEC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090CF0: b           L_80090CF8
    // 0x80090CF4: nop

        goto L_80090CF8;
    // 0x80090CF4: nop

L_80090CF8:
    // 0x80090CF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090CFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090D00: jr          $ra
    // 0x80090D04: nop

    return;
    // 0x80090D04: nop

;}
RECOMP_FUNC void func_800904DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800904DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800904E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800904E4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800904E8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800904EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800904F0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800904F4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800904F8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800904FC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090500: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090504: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090508: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009050C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090510: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090514: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090518: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009051C: addiu       $a1, $a1, 0x13FC
    ctx->r5 = ADD32(ctx->r5, 0X13FC);
    // 0x80090520: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090524: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090528: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009052C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090530: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090534: jal         0x80027464
    // 0x80090538: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090538: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009053C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090540: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090544: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x80090548: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009054C: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80090550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80090554: jal         0x8001ABF4
    // 0x80090558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80090558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009055C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090560: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x80090564: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090568: addiu       $a3, $a3, 0xE0
    ctx->r7 = ADD32(ctx->r7, 0XE0);
    // 0x8009056C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80090570: jal         0x8001ABF4
    // 0x80090574: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80090574: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80090578: b           L_80090580
    // 0x8009057C: nop

        goto L_80090580;
    // 0x8009057C: nop

L_80090580:
    // 0x80090580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090584: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090588: jr          $ra
    // 0x8009058C: nop

    return;
    // 0x8009058C: nop

;}
RECOMP_FUNC void func_80070664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070664: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80070668: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007066C: sb          $a0, 0x7A18($at)
    MEM_B(0X7A18, ctx->r1) = ctx->r4;
    // 0x80070670: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80070674: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80070678: beq         $a1, $at, L_800706AC
    if (ctx->r5 == ctx->r1) {
        // 0x8007067C: nop
    
            goto L_800706AC;
    }
    // 0x8007067C: nop

    // 0x80070680: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80070684: beq         $a1, $at, L_800706C0
    if (ctx->r5 == ctx->r1) {
        // 0x80070688: nop
    
            goto L_800706C0;
    }
    // 0x80070688: nop

    // 0x8007068C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80070690: beq         $a1, $at, L_800706D4
    if (ctx->r5 == ctx->r1) {
        // 0x80070694: nop
    
            goto L_800706D4;
    }
    // 0x80070694: nop

    // 0x80070698: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8007069C: beq         $a1, $at, L_800706E8
    if (ctx->r5 == ctx->r1) {
        // 0x800706A0: nop
    
            goto L_800706E8;
    }
    // 0x800706A0: nop

    // 0x800706A4: b           L_800706FC
    // 0x800706A8: nop

        goto L_800706FC;
    // 0x800706A8: nop

L_800706AC:
    // 0x800706AC: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800706B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800706B4: sb          $t6, 0x7A1C($at)
    MEM_B(0X7A1C, ctx->r1) = ctx->r14;
    // 0x800706B8: b           L_800706FC
    // 0x800706BC: nop

        goto L_800706FC;
    // 0x800706BC: nop

L_800706C0:
    // 0x800706C0: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x800706C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800706C8: sb          $t7, 0x7A1C($at)
    MEM_B(0X7A1C, ctx->r1) = ctx->r15;
    // 0x800706CC: b           L_800706FC
    // 0x800706D0: nop

        goto L_800706FC;
    // 0x800706D0: nop

L_800706D4:
    // 0x800706D4: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x800706D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800706DC: sb          $t8, 0x7A1C($at)
    MEM_B(0X7A1C, ctx->r1) = ctx->r24;
    // 0x800706E0: b           L_800706FC
    // 0x800706E4: nop

        goto L_800706FC;
    // 0x800706E4: nop

L_800706E8:
    // 0x800706E8: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x800706EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800706F0: sb          $t9, 0x7A1C($at)
    MEM_B(0X7A1C, ctx->r1) = ctx->r25;
    // 0x800706F4: b           L_800706FC
    // 0x800706F8: nop

        goto L_800706FC;
    // 0x800706F8: nop

L_800706FC:
    // 0x800706FC: b           L_80070704
    // 0x80070700: nop

        goto L_80070704;
    // 0x80070700: nop

L_80070704:
    // 0x80070704: jr          $ra
    // 0x80070708: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80070708: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800C04B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C04B4: jr          $ra
    // 0x800C04B8: nop

    return;
    // 0x800C04B8: nop

    // 0x800C04BC: jr          $ra
    // 0x800C04C0: nop

    return;
    // 0x800C04C0: nop

;}
RECOMP_FUNC void func_800D2E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2E2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D2E30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D2E34: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D2E38: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D2E3C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D2E40: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D2E44: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D2E48: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D2E4C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D2E50: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D2E54: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D2E58: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D2E5C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D2E60: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D2E64: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D2E68: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D2E6C: addiu       $a1, $a1, 0x4108
    ctx->r5 = ADD32(ctx->r5, 0X4108);
    // 0x800D2E70: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D2E74: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D2E78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D2E7C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D2E80: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D2E84: jal         0x80027464
    // 0x800D2E88: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D2E88: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D2E8C: b           L_800D2E94
    // 0x800D2E90: nop

        goto L_800D2E94;
    // 0x800D2E90: nop

L_800D2E94:
    // 0x800D2E94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D2E9C: jr          $ra
    // 0x800D2EA0: nop

    return;
    // 0x800D2EA0: nop

;}
RECOMP_FUNC void func_80079D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079D20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80079D24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80079D28: jal         0x800795C8
    // 0x80079D2C: nop

    func_800795C8(rdram, ctx);
        goto after_0;
    // 0x80079D2C: nop

    after_0:
    // 0x80079D30: b           L_80079D38
    // 0x80079D34: nop

        goto L_80079D38;
    // 0x80079D34: nop

L_80079D38:
    // 0x80079D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079D40: jr          $ra
    // 0x80079D44: nop

    return;
    // 0x80079D44: nop

;}
RECOMP_FUNC void func_800A0418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0418: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A041C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A0420: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A0424: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A0428: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A042C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A0430: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A0434: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A0438: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A043C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A0440: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A0444: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A0448: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A044C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A0450: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A0454: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A0458: addiu       $a1, $a1, 0x343C
    ctx->r5 = ADD32(ctx->r5, 0X343C);
    // 0x800A045C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A0460: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A0464: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A0468: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A046C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A0470: jal         0x80027464
    // 0x800A0474: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A0474: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A0478: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800A047C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A0480: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A0484: beq         $t1, $at, L_800A04BC
    if (ctx->r9 == ctx->r1) {
        // 0x800A0488: nop
    
            goto L_800A04BC;
    }
    // 0x800A0488: nop

    // 0x800A048C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A0490: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800A0494: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800A0498: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A049C: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x800A04A0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A04A4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A04A8: lh          $t3, 0xE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE);
    // 0x800A04AC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800A04B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A04B4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800A04B8: sh          $t3, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r11;
L_800A04BC:
    // 0x800A04BC: b           L_800A04C4
    // 0x800A04C0: nop

        goto L_800A04C4;
    // 0x800A04C0: nop

L_800A04C4:
    // 0x800A04C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A04C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A04CC: jr          $ra
    // 0x800A04D0: nop

    return;
    // 0x800A04D0: nop

;}
