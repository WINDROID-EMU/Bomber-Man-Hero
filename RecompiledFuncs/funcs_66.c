#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8033499C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033499C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803349A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803349A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803349A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803349AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803349B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803349B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803349B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803349BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803349C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803349C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803349C8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803349CC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803349D0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x803349D4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803349D8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803349DC: nop

    // 0x803349E0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803349E4: b           L_803349EC
    // 0x803349E8: nop

        goto L_803349EC;
    // 0x803349E8: nop

L_803349EC:
    // 0x803349EC: jr          $ra
    // 0x803349F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803349F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033044C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033044C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330450: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330454: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330458: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033045C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330460: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330464: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330468: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033046C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330470: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330474: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330478: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033047C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330480: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330484: nop

    // 0x80330488: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033048C: nop

    // 0x80330490: bne         $t1, $zero, L_80330528
    if (ctx->r9 != 0) {
        // 0x80330494: nop
    
            goto L_80330528;
    }
    // 0x80330494: nop

    // 0x80330498: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033049C: nop

    // 0x803304A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803304A4: nop

    // 0x803304A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803304AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803304B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803304B4: nop

    // 0x803304B8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803304BC: nop

    // 0x803304C0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803304C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803304C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803304CC: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803304D0: nop

    // 0x803304D4: bne         $t8, $at, L_803304E8
    if (ctx->r24 != ctx->r1) {
        // 0x803304D8: nop
    
            goto L_803304E8;
    }
    // 0x803304D8: nop

    // 0x803304DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803304E0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803304E4: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_803304E8:
    // 0x803304E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304EC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803304F0: addiu       $t1, $t1, -0x6020
    ctx->r9 = ADD32(ctx->r9, -0X6020);
    // 0x803304F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304F8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803304FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330500: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80330504: jal         0x8001C0EC
    // 0x80330508: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330508: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x8033050C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330510: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330518: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x8033051C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330520: jal         0x800175F0
    // 0x80330524: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80330524: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80330528:
    // 0x80330528: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033052C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330530: jal         0x8002A8B4
    // 0x80330534: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80330534: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x80330538: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033053C: nop

    // 0x80330540: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80330544: nop

    // 0x80330548: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x8033054C: jal         0x80334770
    // 0x80330550: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_3;
    // 0x80330550: nop

    after_3:
    // 0x80330554: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330558: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033055C: lwc1        $f8, 0x5BD4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BD4);
    // 0x80330560: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330564: nop

    // 0x80330568: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8033056C: nop

    // 0x80330570: bc1f        L_80330584
    if (!c1cs) {
        // 0x80330574: nop
    
            goto L_80330584;
    }
    // 0x80330574: nop

    // 0x80330578: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033057C: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x80330580: sh          $t2, 0xB8($t6)
    MEM_H(0XB8, ctx->r14) = ctx->r10;
L_80330584:
    // 0x80330584: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330588: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033058C: jal         0x8001B4AC
    // 0x80330590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80330590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80330594: beq         $v0, $zero, L_80330738
    if (ctx->r2 == 0) {
        // 0x80330598: nop
    
            goto L_80330738;
    }
    // 0x80330598: nop

    // 0x8033059C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803305A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803305A4: lh          $t7, 0xB0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB0);
    // 0x803305A8: nop

    // 0x803305AC: bne         $t7, $at, L_803305DC
    if (ctx->r15 != ctx->r1) {
        // 0x803305B0: nop
    
            goto L_803305DC;
    }
    // 0x803305B0: nop

    // 0x803305B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803305B8: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x803305BC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803305C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803305C4: nop

    // 0x803305C8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x803305CC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803305D0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x803305D4: b           L_80330738
    // 0x803305D8: sh          $t1, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r9;
        goto L_80330738;
    // 0x803305D8: sh          $t1, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r9;
L_803305DC:
    // 0x803305DC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803305E0: nop

    // 0x803305E4: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x803305E8: nop

    // 0x803305EC: bne         $t2, $zero, L_80330708
    if (ctx->r10 != 0) {
        // 0x803305F0: nop
    
            goto L_80330708;
    }
    // 0x803305F0: nop

    // 0x803305F4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803305F8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x803305FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330600: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80330604: nop

    // 0x80330608: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x8033060C: nop

    // 0x80330610: bc1f        L_80330630
    if (!c1cs) {
        // 0x80330614: nop
    
            goto L_80330630;
    }
    // 0x80330614: nop

    // 0x80330618: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033061C: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x80330620: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80330624: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330628: b           L_803306F8
    // 0x8033062C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_803306F8;
    // 0x8033062C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80330630:
    // 0x80330630: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330634: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80330638: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8033063C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330640: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330644: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80330648: lwc1        $f18, 0x4($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033064C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330650: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x80330654: nop

    // 0x80330658: bc1f        L_80330678
    if (!c1cs) {
        // 0x8033065C: nop
    
            goto L_80330678;
    }
    // 0x8033065C: nop

    // 0x80330660: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330664: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80330668: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033066C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330670: b           L_803306F8
    // 0x80330674: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_803306F8;
    // 0x80330674: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80330678:
    // 0x80330678: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033067C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80330680: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80330684: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330688: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033068C: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80330690: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80330694: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80330698: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x8033069C: nop

    // 0x803306A0: bc1f        L_803306E0
    if (!c1cs) {
        // 0x803306A4: nop
    
            goto L_803306E0;
    }
    // 0x803306A4: nop

    // 0x803306A8: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x803306AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803306B0: nop

    // 0x803306B4: sub.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803306B8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803306BC: nop

    // 0x803306C0: bc1f        L_803306E0
    if (!c1cs) {
        // 0x803306C4: nop
    
            goto L_803306E0;
    }
    // 0x803306C4: nop

    // 0x803306C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803306CC: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x803306D0: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x803306D4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803306D8: b           L_803306F8
    // 0x803306DC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_803306F8;
    // 0x803306DC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803306E0:
    // 0x803306E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803306E4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803306E8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803306EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803306F0: nop

    // 0x803306F4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803306F8:
    // 0x803306F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803306FC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80330700: b           L_80330738
    // 0x80330704: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
        goto L_80330738;
    // 0x80330704: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_80330708:
    // 0x80330708: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033070C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330710: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80330714: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330718: nop

    // 0x8033071C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80330720: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330724: nop

    // 0x80330728: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033072C: nop

    // 0x80330730: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80330734: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_80330738:
    // 0x80330738: b           L_80330740
    // 0x8033073C: nop

        goto L_80330740;
    // 0x8033073C: nop

L_80330740:
    // 0x80330740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330748: jr          $ra
    // 0x8033074C: nop

    return;
    // 0x8033074C: nop

;}
RECOMP_FUNC void func_803340EC_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803340EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803340F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803340F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803340F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803340FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334100: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334104: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334108: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033410C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334110: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334114: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334118: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033411C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334120: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334124: nop

    // 0x80334128: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033412C: nop

    // 0x80334130: bne         $t1, $zero, L_80334214
    if (ctx->r9 != 0) {
        // 0x80334134: nop
    
            goto L_80334214;
    }
    // 0x80334134: nop

    // 0x80334138: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033413C: nop

    // 0x80334140: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334144: nop

    // 0x80334148: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033414C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334150: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80334154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334158: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033415C: nop

    // 0x80334160: swc1        $f4, 0x34($t5)
    MEM_W(0X34, ctx->r13) = ctx->f4.u32l;
    // 0x80334164: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334168: nop

    // 0x8033416C: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80334170: nop

    // 0x80334174: sh          $t7, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r15;
    // 0x80334178: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033417C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80334180: addiu       $t8, $t8, -0x6020
    ctx->r24 = ADD32(ctx->r24, -0X6020);
    // 0x80334184: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334188: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033418C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334190: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x80334194: jal         0x8001C0EC
    // 0x80334198: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334198: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x8033419C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803341A0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803341A4: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803341A8: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x803341AC: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x803341B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803341B4: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803341B8: addiu       $a1, $a1, 0x5B20
    ctx->r5 = ADD32(ctx->r5, 0X5B20);
    // 0x803341BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803341C0: jal         0x80027464
    // 0x803341C4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x803341C4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x803341C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803341CC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803341D0: addiu       $t0, $zero, 0x23
    ctx->r8 = ADD32(0, 0X23);
    // 0x803341D4: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x803341D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803341DC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803341E0: nop

    // 0x803341E4: swc1        $f10, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f10.u32l;
    // 0x803341E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803341EC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803341F0: nop

    // 0x803341F4: swc1        $f16, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->f16.u32l;
    // 0x803341F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803341FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334204: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x80334208: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033420C: jal         0x800175F0
    // 0x80334210: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x80334210: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_80334214:
    // 0x80334214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033421C: jal         0x8001B62C
    // 0x80334220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80334220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80334224: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80334228: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033422C: nop

    // 0x80334230: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80334234: nop

    // 0x80334238: bc1f        L_80334258
    if (!c1cs) {
        // 0x8033423C: nop
    
            goto L_80334258;
    }
    // 0x8033423C: nop

    // 0x80334240: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334248: jal         0x8001BBDC
    // 0x8033424C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x8033424C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80334250: b           L_803342E4
    // 0x80334254: nop

        goto L_803342E4;
    // 0x80334254: nop

L_80334258:
    // 0x80334258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033425C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334260: jal         0x8001B62C
    // 0x80334264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x80334264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80334268: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8033426C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334270: nop

    // 0x80334274: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80334278: nop

    // 0x8033427C: bc1f        L_803342E4
    if (!c1cs) {
        // 0x80334280: nop
    
            goto L_803342E4;
    }
    // 0x80334280: nop

    // 0x80334284: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334288: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033428C: lbu         $t5, 0x132($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X132);
    // 0x80334290: nop

    // 0x80334294: bne         $t5, $at, L_803342E4
    if (ctx->r13 != ctx->r1) {
        // 0x80334298: nop
    
            goto L_803342E4;
    }
    // 0x80334298: nop

    // 0x8033429C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803342A0: nop

    // 0x803342A4: lbu         $t6, 0x132($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X132);
    // 0x803342A8: nop

    // 0x803342AC: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x803342B0: sb          $t8, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r24;
    // 0x803342B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803342B8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803342BC: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803342C0: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x803342C4: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x803342C8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803342CC: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803342D0: addiu       $a1, $a1, 0x5B20
    ctx->r5 = ADD32(ctx->r5, 0X5B20);
    // 0x803342D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803342D8: jal         0x80027464
    // 0x803342DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x803342DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x803342E0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_803342E4:
    // 0x803342E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803342E8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x803342EC: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x803342F0: nop

    // 0x803342F4: bne         $t1, $at, L_80334340
    if (ctx->r9 != ctx->r1) {
        // 0x803342F8: nop
    
            goto L_80334340;
    }
    // 0x803342F8: nop

    // 0x803342FC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334300: nop

    // 0x80334304: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x80334308: nop

    // 0x8033430C: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80334310: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
    // 0x80334314: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334318: lui         $at, 0x430E
    ctx->r1 = S32(0X430E << 16);
    // 0x8033431C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334320: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80334324: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80334328: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x8033432C: lui         $a3, 0x40E0
    ctx->r7 = S32(0X40E0 << 16);
    // 0x80334330: jal         0x8007F070
    // 0x80334334: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    func_8007F070(rdram, ctx);
        goto after_7;
    // 0x80334334: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    after_7:
    // 0x80334338: b           L_803343C4
    // 0x8033433C: nop

        goto L_803343C4;
    // 0x8033433C: nop

L_80334340:
    // 0x80334340: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334344: nop

    // 0x80334348: lh          $t8, 0xB6($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XB6);
    // 0x8033434C: nop

    // 0x80334350: bne         $t8, $zero, L_803343AC
    if (ctx->r24 != 0) {
        // 0x80334354: nop
    
            goto L_803343AC;
    }
    // 0x80334354: nop

    // 0x80334358: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033435C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334360: lbu         $t9, 0x132($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X132);
    // 0x80334364: nop

    // 0x80334368: bne         $t9, $at, L_803343A4
    if (ctx->r25 != ctx->r1) {
        // 0x8033436C: nop
    
            goto L_803343A4;
    }
    // 0x8033436C: nop

    // 0x80334370: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334374: nop

    // 0x80334378: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033437C: nop

    // 0x80334380: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x80334384: sb          $t4, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r12;
    // 0x80334388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033438C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334390: jal         0x8001BB34
    // 0x80334394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_8;
    // 0x80334394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80334398: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033439C: addiu       $t2, $zero, 0x5C
    ctx->r10 = ADD32(0, 0X5C);
    // 0x803343A0: sh          $t2, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r10;
L_803343A4:
    // 0x803343A4: b           L_803343C4
    // 0x803343A8: nop

        goto L_803343C4;
    // 0x803343A8: nop

L_803343AC:
    // 0x803343AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803343B0: nop

    // 0x803343B4: lh          $t6, 0xB6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB6);
    // 0x803343B8: nop

    // 0x803343BC: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x803343C0: sh          $t8, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r24;
L_803343C4:
    // 0x803343C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803343C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803343CC: lbu         $t9, 0x132($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X132);
    // 0x803343D0: nop

    // 0x803343D4: bne         $t9, $at, L_80334424
    if (ctx->r25 != ctx->r1) {
        // 0x803343D8: nop
    
            goto L_80334424;
    }
    // 0x803343D8: nop

    // 0x803343DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803343E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803343E4: lh          $t4, 0xC2($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XC2);
    // 0x803343E8: nop

    // 0x803343EC: bne         $t4, $at, L_8033440C
    if (ctx->r12 != ctx->r1) {
        // 0x803343F0: nop
    
            goto L_8033440C;
    }
    // 0x803343F0: nop

    // 0x803343F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343FC: jal         0x8002B114
    // 0x80334400: nop

    func_8002B114(rdram, ctx);
        goto after_9;
    // 0x80334400: nop

    after_9:
    // 0x80334404: b           L_80334424
    // 0x80334408: nop

        goto L_80334424;
    // 0x80334408: nop

L_8033440C:
    // 0x8033440C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334410: nop

    // 0x80334414: lh          $t2, 0xC2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XC2);
    // 0x80334418: nop

    // 0x8033441C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80334420: sh          $t3, 0xC2($t0)
    MEM_H(0XC2, ctx->r8) = ctx->r11;
L_80334424:
    // 0x80334424: b           L_8033442C
    // 0x80334428: nop

        goto L_8033442C;
    // 0x80334428: nop

L_8033442C:
    // 0x8033442C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334430: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334434: jr          $ra
    // 0x80334438: nop

    return;
    // 0x80334438: nop

;}
RECOMP_FUNC void func_80330C7C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330C80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330C84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330C88: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330C8C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330C90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330CA0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330CA4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330CA8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330CAC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330CB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330CB4: nop

    // 0x80330CB8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330CBC: nop

    // 0x80330CC0: bne         $t1, $zero, L_80330D18
    if (ctx->r9 != 0) {
        // 0x80330CC4: nop
    
            goto L_80330D18;
    }
    // 0x80330CC4: nop

    // 0x80330CC8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330CCC: nop

    // 0x80330CD0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330CD4: nop

    // 0x80330CD8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330CDC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330CE0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330CE4: nop

    // 0x80330CE8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330CEC: nop

    // 0x80330CF0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330CF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CF8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330CFC: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330D00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330D08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80330D10: jal         0x8001C0EC
    // 0x80330D14: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330D14: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80330D18:
    // 0x80330D18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D20: jal         0x8002A8B4
    // 0x80330D24: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330D24: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80330D28: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330D2C: nop

    // 0x80330D30: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330D34: nop

    // 0x80330D38: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330D3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D44: jal         0x8001B4AC
    // 0x80330D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330D4C: beq         $v0, $zero, L_80330D6C
    if (ctx->r2 == 0) {
        // 0x80330D50: nop
    
            goto L_80330D6C;
    }
    // 0x80330D50: nop

    // 0x80330D54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330D58: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80330D5C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330D60: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330D64: nop

    // 0x80330D68: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330D6C:
    // 0x80330D6C: b           L_80330D74
    // 0x80330D70: nop

        goto L_80330D74;
    // 0x80330D70: nop

L_80330D74:
    // 0x80330D74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330D7C: jr          $ra
    // 0x80330D80: nop

    return;
    // 0x80330D80: nop

;}
RECOMP_FUNC void func_8033030C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033030C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330310: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330314: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330318: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033031C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330320: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330324: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330328: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033032C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330330: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330334: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330338: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033033C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330340: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330344: nop

    // 0x80330348: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033034C: nop

    // 0x80330350: bne         $t1, $zero, L_803303A8
    if (ctx->r9 != 0) {
        // 0x80330354: nop
    
            goto L_803303A8;
    }
    // 0x80330354: nop

    // 0x80330358: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033035C: nop

    // 0x80330360: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330364: nop

    // 0x80330368: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033036C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330370: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330374: nop

    // 0x80330378: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033037C: nop

    // 0x80330380: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330384: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330388: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033038C: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330390: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330394: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803303A0: jal         0x8001C0EC
    // 0x803303A4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803303A4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_803303A8:
    // 0x803303A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803303AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803303B0: jal         0x8002A8B4
    // 0x803303B4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x803303B4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x803303B8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803303BC: nop

    // 0x803303C0: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803303C4: nop

    // 0x803303C8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803303CC: jal         0x80334770
    // 0x803303D0: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x803303D0: nop

    after_2:
    // 0x803303D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803303D8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803303DC: lwc1        $f8, 0x5BD0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BD0);
    // 0x803303E0: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803303E4: nop

    // 0x803303E8: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x803303EC: nop

    // 0x803303F0: bc1f        L_80330404
    if (!c1cs) {
        // 0x803303F4: nop
    
            goto L_80330404;
    }
    // 0x803303F4: nop

    // 0x803303F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803303FC: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x80330400: sh          $t0, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r8;
L_80330404:
    // 0x80330404: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330408: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033040C: jal         0x8001B4AC
    // 0x80330410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80330410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80330414: beq         $v0, $zero, L_80330434
    if (ctx->r2 == 0) {
        // 0x80330418: nop
    
            goto L_80330434;
    }
    // 0x80330418: nop

    // 0x8033041C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330420: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80330424: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80330428: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033042C: nop

    // 0x80330430: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80330434:
    // 0x80330434: b           L_8033043C
    // 0x80330438: nop

        goto L_8033043C;
    // 0x80330438: nop

L_8033043C:
    // 0x8033043C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330444: jr          $ra
    // 0x80330448: nop

    return;
    // 0x80330448: nop

;}
RECOMP_FUNC void func_80333C40_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333C40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333C44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333C48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333C4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333C50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333C54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333C58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333C60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333C68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333C6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333C70: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333C74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333C78: nop

    // 0x80333C7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333C80: nop

    // 0x80333C84: bne         $t1, $zero, L_80333CDC
    if (ctx->r9 != 0) {
        // 0x80333C88: nop
    
            goto L_80333CDC;
    }
    // 0x80333C88: nop

    // 0x80333C8C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333C90: nop

    // 0x80333C94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333C98: nop

    // 0x80333C9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333CA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333CA4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333CA8: nop

    // 0x80333CAC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333CB0: nop

    // 0x80333CB4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333CB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333CBC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333CC0: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80333CC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333CC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333CCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333CD0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80333CD4: jal         0x8001C0EC
    // 0x80333CD8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333CD8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80333CDC:
    // 0x80333CDC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333CE0: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80333CE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333CE8: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80333CEC: nop

    // 0x80333CF0: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80333CF4: nop

    // 0x80333CF8: bc1f        L_80333D24
    if (!c1cs) {
        // 0x80333CFC: nop
    
            goto L_80333D24;
    }
    // 0x80333CFC: nop

    // 0x80333D00: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80333D04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333D08: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333D0C: nop

    // 0x80333D10: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
    // 0x80333D14: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80333D18: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333D1C: b           L_80333D38
    // 0x80333D20: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
        goto L_80333D38;
    // 0x80333D20: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
L_80333D24:
    // 0x80333D24: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80333D28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333D2C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333D30: nop

    // 0x80333D34: swc1        $f16, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f16.u32l;
L_80333D38:
    // 0x80333D38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D40: jal         0x8001B4AC
    // 0x80333D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80333D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333D48: beq         $v0, $zero, L_80333D94
    if (ctx->r2 == 0) {
        // 0x80333D4C: nop
    
            goto L_80333D94;
    }
    // 0x80333D4C: nop

    // 0x80333D50: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333D54: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x80333D58: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80333D5C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333D60: nop

    // 0x80333D64: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80333D68: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333D6C: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x80333D70: sh          $t6, 0xB8($t5)
    MEM_H(0XB8, ctx->r13) = ctx->r14;
    // 0x80333D74: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333D78: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333D7C: nop

    // 0x80333D80: swc1        $f18, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f18.u32l;
    // 0x80333D84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333D88: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333D8C: nop

    // 0x80333D90: swc1        $f4, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f4.u32l;
L_80333D94:
    // 0x80333D94: b           L_80333D9C
    // 0x80333D98: nop

        goto L_80333D9C;
    // 0x80333D98: nop

L_80333D9C:
    // 0x80333D9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333DA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333DA4: jr          $ra
    // 0x80333DA8: nop

    return;
    // 0x80333DA8: nop

;}
RECOMP_FUNC void func_80333DAC_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333DAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333DB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333DB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333DB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333DBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333DC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333DC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333DC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333DCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333DD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333DD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333DD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333DDC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333DE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333DE4: nop

    // 0x80333DE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333DEC: nop

    // 0x80333DF0: bne         $t1, $zero, L_80333E48
    if (ctx->r9 != 0) {
        // 0x80333DF4: nop
    
            goto L_80333E48;
    }
    // 0x80333DF4: nop

    // 0x80333DF8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333DFC: nop

    // 0x80333E00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333E04: nop

    // 0x80333E08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333E0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333E10: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333E14: nop

    // 0x80333E18: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333E1C: nop

    // 0x80333E20: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333E24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E28: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333E2C: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80333E30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E34: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333E38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333E3C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80333E40: jal         0x8001C0EC
    // 0x80333E44: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333E44: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80333E48:
    // 0x80333E48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E50: jal         0x8002A8B4
    // 0x80333E54: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80333E54: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80333E58: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333E5C: nop

    // 0x80333E60: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80333E64: nop

    // 0x80333E68: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80333E6C: jal         0x80334770
    // 0x80333E70: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x80333E70: nop

    after_2:
    // 0x80333E74: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333E78: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333E7C: lwc1        $f8, 0x5C4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C4C);
    // 0x80333E80: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80333E84: nop

    // 0x80333E88: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80333E8C: nop

    // 0x80333E90: bc1f        L_80333EA4
    if (!c1cs) {
        // 0x80333E94: nop
    
            goto L_80333EA4;
    }
    // 0x80333E94: nop

    // 0x80333E98: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333E9C: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x80333EA0: sh          $t0, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r8;
L_80333EA4:
    // 0x80333EA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333EA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333EAC: jal         0x8001B4AC
    // 0x80333EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80333EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80333EB4: beq         $v0, $zero, L_80333EE4
    if (ctx->r2 == 0) {
        // 0x80333EB8: nop
    
            goto L_80333EE4;
    }
    // 0x80333EB8: nop

    // 0x80333EBC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333EC0: addiu       $t3, $zero, 0x22
    ctx->r11 = ADD32(0, 0X22);
    // 0x80333EC4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80333EC8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333ECC: nop

    // 0x80333ED0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80333ED4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80333ED8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333EDC: nop

    // 0x80333EE0: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
L_80333EE4:
    // 0x80333EE4: b           L_80333EEC
    // 0x80333EE8: nop

        goto L_80333EEC;
    // 0x80333EE8: nop

L_80333EEC:
    // 0x80333EEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333EF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333EF4: jr          $ra
    // 0x80333EF8: nop

    return;
    // 0x80333EF8: nop

;}
RECOMP_FUNC void func_80333EFC_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333EFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333F00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333F04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333F08: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333F0C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333F10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333F14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333F18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333F1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333F20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333F24: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333F28: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333F2C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333F30: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333F34: nop

    // 0x80333F38: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333F3C: nop

    // 0x80333F40: bne         $t1, $zero, L_80333FD8
    if (ctx->r9 != 0) {
        // 0x80333F44: nop
    
            goto L_80333FD8;
    }
    // 0x80333F44: nop

    // 0x80333F48: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333F4C: nop

    // 0x80333F50: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333F54: nop

    // 0x80333F58: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333F5C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333F60: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333F64: nop

    // 0x80333F68: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333F6C: nop

    // 0x80333F70: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333F74: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333F78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333F7C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80333F80: nop

    // 0x80333F84: bne         $t8, $at, L_80333F98
    if (ctx->r24 != ctx->r1) {
        // 0x80333F88: nop
    
            goto L_80333F98;
    }
    // 0x80333F88: nop

    // 0x80333F8C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333F90: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80333F94: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80333F98:
    // 0x80333F98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333F9C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80333FA0: addiu       $t1, $t1, -0x6020
    ctx->r9 = ADD32(ctx->r9, -0X6020);
    // 0x80333FA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FA8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80333FAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333FB0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80333FB4: jal         0x8001C0EC
    // 0x80333FB8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333FB8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80333FBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333FC8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80333FCC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333FD0: jal         0x800175F0
    // 0x80333FD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80333FD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80333FD8:
    // 0x80333FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FE0: jal         0x8002A8B4
    // 0x80333FE4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80333FE4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x80333FE8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333FEC: nop

    // 0x80333FF0: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80333FF4: nop

    // 0x80333FF8: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x80333FFC: jal         0x80334770
    // 0x80334000: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_3;
    // 0x80334000: nop

    after_3:
    // 0x80334004: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334008: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033400C: lwc1        $f8, 0x5C50($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C50);
    // 0x80334010: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80334014: nop

    // 0x80334018: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8033401C: nop

    // 0x80334020: bc1f        L_80334038
    if (!c1cs) {
        // 0x80334024: nop
    
            goto L_80334038;
    }
    // 0x80334024: nop

    // 0x80334028: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033402C: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x80334030: b           L_8033404C
    // 0x80334034: sh          $t2, 0xB8($t6)
    MEM_H(0XB8, ctx->r14) = ctx->r10;
        goto L_8033404C;
    // 0x80334034: sh          $t2, 0xB8($t6)
    MEM_H(0XB8, ctx->r14) = ctx->r10;
L_80334038:
    // 0x80334038: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x8033403C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334040: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334044: nop

    // 0x80334048: swc1        $f10, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f10.u32l;
L_8033404C:
    // 0x8033404C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334050: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334054: jal         0x8001B4AC
    // 0x80334058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80334058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033405C: beq         $v0, $zero, L_803340D4
    if (ctx->r2 == 0) {
        // 0x80334060: nop
    
            goto L_803340D4;
    }
    // 0x80334060: nop

    // 0x80334064: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334068: nop

    // 0x8033406C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80334070: nop

    // 0x80334074: bne         $t8, $zero, L_803340A4
    if (ctx->r24 != 0) {
        // 0x80334078: nop
    
            goto L_803340A4;
    }
    // 0x80334078: nop

    // 0x8033407C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334080: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x80334084: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80334088: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033408C: nop

    // 0x80334090: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80334094: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334098: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8033409C: b           L_803340D4
    // 0x803340A0: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
        goto L_803340D4;
    // 0x803340A0: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_803340A4:
    // 0x803340A4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803340A8: addiu       $t2, $zero, 0x21
    ctx->r10 = ADD32(0, 0X21);
    // 0x803340AC: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803340B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803340B4: nop

    // 0x803340B8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x803340BC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803340C0: nop

    // 0x803340C4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803340C8: nop

    // 0x803340CC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803340D0: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_803340D4:
    // 0x803340D4: b           L_803340DC
    // 0x803340D8: nop

        goto L_803340DC;
    // 0x803340D8: nop

L_803340DC:
    // 0x803340DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803340E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803340E4: jr          $ra
    // 0x803340E8: nop

    return;
    // 0x803340E8: nop

;}
RECOMP_FUNC void func_80335848_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335848: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033584C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335850: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80335854: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80335858: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033585C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80335860: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80335864: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80335868: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033586C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80335870: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80335874: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80335878: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033587C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80335880: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80335884: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80335888: addiu       $a1, $a1, 0x5B48
    ctx->r5 = ADD32(ctx->r5, 0X5B48);
    // 0x8033588C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80335890: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80335894: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335898: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033589C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803358A0: jal         0x80027464
    // 0x803358A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803358A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803358A8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803358AC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803358B0: addiu       $t1, $t1, -0x5E04
    ctx->r9 = ADD32(ctx->r9, -0X5E04);
    // 0x803358B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803358B8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803358BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803358C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803358C4: jal         0x8001C0EC
    // 0x803358C8: addiu       $a3, $zero, 0xFD
    ctx->r7 = ADD32(0, 0XFD);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803358C8: addiu       $a3, $zero, 0xFD
    ctx->r7 = ADD32(0, 0XFD);
    after_1:
    // 0x803358CC: b           L_803358D4
    // 0x803358D0: nop

        goto L_803358D4;
    // 0x803358D0: nop

L_803358D4:
    // 0x803358D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803358D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803358DC: jr          $ra
    // 0x803358E0: nop

    return;
    // 0x803358E0: nop

;}
RECOMP_FUNC void func_8033443C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033443C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334440: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334444: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
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
    // 0x80334470: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334474: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334478: nop

    // 0x8033447C: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80334480: nop

    // 0x80334484: bne         $t1, $zero, L_803344BC
    if (ctx->r9 != 0) {
        // 0x80334488: nop
    
            goto L_803344BC;
    }
    // 0x80334488: nop

    // 0x8033448C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334490: nop

    // 0x80334494: lh          $t3, 0xC2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC2);
    // 0x80334498: nop

    // 0x8033449C: bne         $t3, $zero, L_803344B4
    if (ctx->r11 != 0) {
        // 0x803344A0: nop
    
            goto L_803344B4;
    }
    // 0x803344A0: nop

    // 0x803344A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803344A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803344AC: jal         0x8001BB34
    // 0x803344B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803344B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_803344B4:
    // 0x803344B4: b           L_803344E4
    // 0x803344B8: nop

        goto L_803344E4;
    // 0x803344B8: nop

L_803344BC:
    // 0x803344BC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803344C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803344C4: lh          $s0, 0x108($t4)
    ctx->r16 = MEM_H(ctx->r12, 0X108);
    // 0x803344C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803344CC: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x803344D0: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x803344D4: sltiu       $t6, $s0, 0x1
    ctx->r14 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803344D8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803344DC: jal         0x8001BB34
    // 0x803344E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803344E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_803344E4:
    // 0x803344E4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803344E8: nop

    // 0x803344EC: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x803344F0: nop

    // 0x803344F4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803344F8: sltiu       $at, $t9, 0x23
    ctx->r1 = ctx->r25 < 0X23 ? 1 : 0;
    // 0x803344FC: beq         $at, $zero, L_80334750
    if (ctx->r1 == 0) {
        // 0x80334500: nop
    
            goto L_80334750;
    }
    // 0x80334500: nop

    // 0x80334504: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334508: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033450C: addu        $at, $at, $t9
    gpr jr_addend_80334518 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80334510: lw          $t9, 0x5C54($at)
    ctx->r25 = ADD32(ctx->r1, 0X5C54);
    // 0x80334514: nop

    // 0x80334518: jr          $t9
    // 0x8033451C: nop

    switch (jr_addend_80334518 >> 2) {
        case 0: goto L_80334520; break;
        case 1: goto L_80334530; break;
        case 2: goto L_80334540; break;
        case 3: goto L_80334550; break;
        case 4: goto L_80334560; break;
        case 5: goto L_80334570; break;
        case 6: goto L_80334580; break;
        case 7: goto L_80334590; break;
        case 8: goto L_803345A0; break;
        case 9: goto L_803345B0; break;
        case 10: goto L_803345C0; break;
        case 11: goto L_803345D0; break;
        case 12: goto L_803345E0; break;
        case 13: goto L_803345F0; break;
        case 14: goto L_80334600; break;
        case 15: goto L_80334610; break;
        case 16: goto L_80334620; break;
        case 17: goto L_80334630; break;
        case 18: goto L_80334640; break;
        case 19: goto L_80334650; break;
        case 20: goto L_80334660; break;
        case 21: goto L_80334670; break;
        case 22: goto L_80334680; break;
        case 23: goto L_80334690; break;
        case 24: goto L_803346A0; break;
        case 25: goto L_803346B0; break;
        case 26: goto L_803346C0; break;
        case 27: goto L_803346D0; break;
        case 28: goto L_803346E0; break;
        case 29: goto L_803346F0; break;
        case 30: goto L_80334700; break;
        case 31: goto L_80334710; break;
        case 32: goto L_80334720; break;
        case 33: goto L_80334730; break;
        case 34: goto L_80334740; break;
        default: switch_error(__func__, 0x80334518, 0x80335C54);
    }
    // 0x8033451C: nop

L_80334520:
    // 0x80334520: jal         0x8033030C
    // 0x80334524: nop

    func_8033030C_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x80334524: nop

    after_2:
    // 0x80334528: b           L_80334758
    // 0x8033452C: nop

        goto L_80334758;
    // 0x8033452C: nop

L_80334530:
    // 0x80334530: jal         0x8033044C
    // 0x80334534: nop

    func_8033044C_unk_bin_12(rdram, ctx);
        goto after_3;
    // 0x80334534: nop

    after_3:
    // 0x80334538: b           L_80334758
    // 0x8033453C: nop

        goto L_80334758;
    // 0x8033453C: nop

L_80334540:
    // 0x80334540: jal         0x80330750
    // 0x80334544: nop

    func_80330750_unk_bin_12(rdram, ctx);
        goto after_4;
    // 0x80334544: nop

    after_4:
    // 0x80334548: b           L_80334758
    // 0x8033454C: nop

        goto L_80334758;
    // 0x8033454C: nop

L_80334550:
    // 0x80334550: jal         0x803308DC
    // 0x80334554: nop

    func_803308DC_unk_bin_12(rdram, ctx);
        goto after_5;
    // 0x80334554: nop

    after_5:
    // 0x80334558: b           L_80334758
    // 0x8033455C: nop

        goto L_80334758;
    // 0x8033455C: nop

L_80334560:
    // 0x80334560: jal         0x80330B50
    // 0x80334564: nop

    func_80330B50_unk_bin_12(rdram, ctx);
        goto after_6;
    // 0x80334564: nop

    after_6:
    // 0x80334568: b           L_80334758
    // 0x8033456C: nop

        goto L_80334758;
    // 0x8033456C: nop

L_80334570:
    // 0x80334570: jal         0x80330C7C
    // 0x80334574: nop

    func_80330C7C_unk_bin_12(rdram, ctx);
        goto after_7;
    // 0x80334574: nop

    after_7:
    // 0x80334578: b           L_80334758
    // 0x8033457C: nop

        goto L_80334758;
    // 0x8033457C: nop

L_80334580:
    // 0x80334580: jal         0x80330D84
    // 0x80334584: nop

    func_80330D84_unk_bin_12(rdram, ctx);
        goto after_8;
    // 0x80334584: nop

    after_8:
    // 0x80334588: b           L_80334758
    // 0x8033458C: nop

        goto L_80334758;
    // 0x8033458C: nop

L_80334590:
    // 0x80334590: jal         0x80330E8C
    // 0x80334594: nop

    func_80330E8C_unk_bin_12(rdram, ctx);
        goto after_9;
    // 0x80334594: nop

    after_9:
    // 0x80334598: b           L_80334758
    // 0x8033459C: nop

        goto L_80334758;
    // 0x8033459C: nop

L_803345A0:
    // 0x803345A0: jal         0x80330F94
    // 0x803345A4: nop

    func_80330F94_unk_bin_12(rdram, ctx);
        goto after_10;
    // 0x803345A4: nop

    after_10:
    // 0x803345A8: b           L_80334758
    // 0x803345AC: nop

        goto L_80334758;
    // 0x803345AC: nop

L_803345B0:
    // 0x803345B0: jal         0x8033109C
    // 0x803345B4: nop

    func_8033109C_unk_bin_12(rdram, ctx);
        goto after_11;
    // 0x803345B4: nop

    after_11:
    // 0x803345B8: b           L_80334758
    // 0x803345BC: nop

        goto L_80334758;
    // 0x803345BC: nop

L_803345C0:
    // 0x803345C0: jal         0x803312C8
    // 0x803345C4: nop

    func_803312C8_unk_bin_12(rdram, ctx);
        goto after_12;
    // 0x803345C4: nop

    after_12:
    // 0x803345C8: b           L_80334758
    // 0x803345CC: nop

        goto L_80334758;
    // 0x803345CC: nop

L_803345D0:
    // 0x803345D0: jal         0x803314A4
    // 0x803345D4: nop

    func_803314A4_unk_bin_12(rdram, ctx);
        goto after_13;
    // 0x803345D4: nop

    after_13:
    // 0x803345D8: b           L_80334758
    // 0x803345DC: nop

        goto L_80334758;
    // 0x803345DC: nop

L_803345E0:
    // 0x803345E0: jal         0x80331680
    // 0x803345E4: nop

    func_80331680_unk_bin_12(rdram, ctx);
        goto after_14;
    // 0x803345E4: nop

    after_14:
    // 0x803345E8: b           L_80334758
    // 0x803345EC: nop

        goto L_80334758;
    // 0x803345EC: nop

L_803345F0:
    // 0x803345F0: jal         0x80331844
    // 0x803345F4: nop

    func_80331844_unk_bin_12(rdram, ctx);
        goto after_15;
    // 0x803345F4: nop

    after_15:
    // 0x803345F8: b           L_80334758
    // 0x803345FC: nop

        goto L_80334758;
    // 0x803345FC: nop

L_80334600:
    // 0x80334600: jal         0x80331970
    // 0x80334604: nop

    func_80331970_unk_bin_12(rdram, ctx);
        goto after_16;
    // 0x80334604: nop

    after_16:
    // 0x80334608: b           L_80334758
    // 0x8033460C: nop

        goto L_80334758;
    // 0x8033460C: nop

L_80334610:
    // 0x80334610: jal         0x80331A78
    // 0x80334614: nop

    func_80331A78_unk_bin_12(rdram, ctx);
        goto after_17;
    // 0x80334614: nop

    after_17:
    // 0x80334618: b           L_80334758
    // 0x8033461C: nop

        goto L_80334758;
    // 0x8033461C: nop

L_80334620:
    // 0x80334620: jal         0x80331C98
    // 0x80334624: nop

    func_80331C98_unk_bin_12(rdram, ctx);
        goto after_18;
    // 0x80334624: nop

    after_18:
    // 0x80334628: b           L_80334758
    // 0x8033462C: nop

        goto L_80334758;
    // 0x8033462C: nop

L_80334630:
    // 0x80334630: jal         0x80331F38
    // 0x80334634: nop

    func_80331F38_unk_bin_12(rdram, ctx);
        goto after_19;
    // 0x80334634: nop

    after_19:
    // 0x80334638: b           L_80334758
    // 0x8033463C: nop

        goto L_80334758;
    // 0x8033463C: nop

L_80334640:
    // 0x80334640: jal         0x803324D8
    // 0x80334644: nop

    func_803324D8_unk_bin_12(rdram, ctx);
        goto after_20;
    // 0x80334644: nop

    after_20:
    // 0x80334648: b           L_80334758
    // 0x8033464C: nop

        goto L_80334758;
    // 0x8033464C: nop

L_80334650:
    // 0x80334650: jal         0x8033268C
    // 0x80334654: nop

    func_8033268C_unk_bin_12(rdram, ctx);
        goto after_21;
    // 0x80334654: nop

    after_21:
    // 0x80334658: b           L_80334758
    // 0x8033465C: nop

        goto L_80334758;
    // 0x8033465C: nop

L_80334660:
    // 0x80334660: jal         0x803328BC
    // 0x80334664: nop

    func_803328BC_unk_bin_12(rdram, ctx);
        goto after_22;
    // 0x80334664: nop

    after_22:
    // 0x80334668: b           L_80334758
    // 0x8033466C: nop

        goto L_80334758;
    // 0x8033466C: nop

L_80334670:
    // 0x80334670: jal         0x80332CB8
    // 0x80334674: nop

    func_80332CB8_unk_bin_12(rdram, ctx);
        goto after_23;
    // 0x80334674: nop

    after_23:
    // 0x80334678: b           L_80334758
    // 0x8033467C: nop

        goto L_80334758;
    // 0x8033467C: nop

L_80334680:
    // 0x80334680: jal         0x80332E2C
    // 0x80334684: nop

    func_80332E2C_unk_bin_12(rdram, ctx);
        goto after_24;
    // 0x80334684: nop

    after_24:
    // 0x80334688: b           L_80334758
    // 0x8033468C: nop

        goto L_80334758;
    // 0x8033468C: nop

L_80334690:
    // 0x80334690: jal         0x80332F7C
    // 0x80334694: nop

    func_80332F7C_unk_bin_12(rdram, ctx);
        goto after_25;
    // 0x80334694: nop

    after_25:
    // 0x80334698: b           L_80334758
    // 0x8033469C: nop

        goto L_80334758;
    // 0x8033469C: nop

L_803346A0:
    // 0x803346A0: jal         0x803330CC
    // 0x803346A4: nop

    func_803330CC_unk_bin_12(rdram, ctx);
        goto after_26;
    // 0x803346A4: nop

    after_26:
    // 0x803346A8: b           L_80334758
    // 0x803346AC: nop

        goto L_80334758;
    // 0x803346AC: nop

L_803346B0:
    // 0x803346B0: jal         0x803331E4
    // 0x803346B4: nop

    func_803331E4_unk_bin_12(rdram, ctx);
        goto after_27;
    // 0x803346B4: nop

    after_27:
    // 0x803346B8: b           L_80334758
    // 0x803346BC: nop

        goto L_80334758;
    // 0x803346BC: nop

L_803346C0:
    // 0x803346C0: jal         0x803332D8
    // 0x803346C4: nop

    func_803332D8_unk_bin_12(rdram, ctx);
        goto after_28;
    // 0x803346C4: nop

    after_28:
    // 0x803346C8: b           L_80334758
    // 0x803346CC: nop

        goto L_80334758;
    // 0x803346CC: nop

L_803346D0:
    // 0x803346D0: jal         0x80333458
    // 0x803346D4: nop

    func_80333458_unk_bin_12(rdram, ctx);
        goto after_29;
    // 0x803346D4: nop

    after_29:
    // 0x803346D8: b           L_80334758
    // 0x803346DC: nop

        goto L_80334758;
    // 0x803346DC: nop

L_803346E0:
    // 0x803346E0: jal         0x80333644
    // 0x803346E4: nop

    func_80333644_unk_bin_12(rdram, ctx);
        goto after_30;
    // 0x803346E4: nop

    after_30:
    // 0x803346E8: b           L_80334758
    // 0x803346EC: nop

        goto L_80334758;
    // 0x803346EC: nop

L_803346F0:
    // 0x803346F0: jal         0x803338E0
    // 0x803346F4: nop

    func_803338E0_unk_bin_12(rdram, ctx);
        goto after_31;
    // 0x803346F4: nop

    after_31:
    // 0x803346F8: b           L_80334758
    // 0x803346FC: nop

        goto L_80334758;
    // 0x803346FC: nop

L_80334700:
    // 0x80334700: jal         0x80333AF0
    // 0x80334704: nop

    func_80333AF0_unk_bin_12(rdram, ctx);
        goto after_32;
    // 0x80334704: nop

    after_32:
    // 0x80334708: b           L_80334758
    // 0x8033470C: nop

        goto L_80334758;
    // 0x8033470C: nop

L_80334710:
    // 0x80334710: jal         0x80333C40
    // 0x80334714: nop

    func_80333C40_unk_bin_12(rdram, ctx);
        goto after_33;
    // 0x80334714: nop

    after_33:
    // 0x80334718: b           L_80334758
    // 0x8033471C: nop

        goto L_80334758;
    // 0x8033471C: nop

L_80334720:
    // 0x80334720: jal         0x80333DAC
    // 0x80334724: nop

    func_80333DAC_unk_bin_12(rdram, ctx);
        goto after_34;
    // 0x80334724: nop

    after_34:
    // 0x80334728: b           L_80334758
    // 0x8033472C: nop

        goto L_80334758;
    // 0x8033472C: nop

L_80334730:
    // 0x80334730: jal         0x80333EFC
    // 0x80334734: nop

    func_80333EFC_unk_bin_12(rdram, ctx);
        goto after_35;
    // 0x80334734: nop

    after_35:
    // 0x80334738: b           L_80334758
    // 0x8033473C: nop

        goto L_80334758;
    // 0x8033473C: nop

L_80334740:
    // 0x80334740: jal         0x803340EC
    // 0x80334744: nop

    func_803340EC_unk_bin_12(rdram, ctx);
        goto after_36;
    // 0x80334744: nop

    after_36:
    // 0x80334748: b           L_80334758
    // 0x8033474C: nop

        goto L_80334758;
    // 0x8033474C: nop

L_80334750:
    // 0x80334750: b           L_80334758
    // 0x80334754: nop

        goto L_80334758;
    // 0x80334754: nop

L_80334758:
    // 0x80334758: b           L_80334760
    // 0x8033475C: nop

        goto L_80334760;
    // 0x8033475C: nop

L_80334760:
    // 0x80334760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334764: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334768: jr          $ra
    // 0x8033476C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033476C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331C98_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331C98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331C9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331CA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331CA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331CA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331CAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331CB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331CB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331CB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331CBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331CC0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331CC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331CC8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331CCC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331CD0: nop

    // 0x80331CD4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331CD8: nop

    // 0x80331CDC: bne         $t1, $zero, L_80331E10
    if (ctx->r9 != 0) {
        // 0x80331CE0: nop
    
            goto L_80331E10;
    }
    // 0x80331CE0: nop

    // 0x80331CE4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331CE8: nop

    // 0x80331CEC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331CF0: nop

    // 0x80331CF4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331CF8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331CFC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331D00: nop

    // 0x80331D04: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331D08: nop

    // 0x80331D0C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331D10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D18: jal         0x8002A46C
    // 0x80331D1C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x80331D1C: nop

    after_0:
    // 0x80331D20: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331D24: nop

    // 0x80331D28: swc1        $f0, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f0.u32l;
    // 0x80331D2C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331D30: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80331D34: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331D38: lwc1        $f12, 0xD4($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x80331D3C: jal         0x80015538
    // 0x80331D40: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80331D40: nop

    after_1:
    // 0x80331D44: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331D48: nop

    // 0x80331D4C: swc1        $f0, 0xD4($t9)
    MEM_W(0XD4, ctx->r25) = ctx->f0.u32l;
    // 0x80331D50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331D54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80331D58: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80331D5C: lwc1        $f14, 0xD4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x80331D60: jal         0x8002A800
    // 0x80331D64: nop

    func_8002A800(rdram, ctx);
        goto after_2;
    // 0x80331D64: nop

    after_2:
    // 0x80331D68: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331D6C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80331D70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331D74: bne         $t1, $at, L_80331DA4
    if (ctx->r9 != ctx->r1) {
        // 0x80331D78: nop
    
            goto L_80331DA4;
    }
    // 0x80331D78: nop

    // 0x80331D7C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331D80: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80331D84: lwc1        $f4, 0xD4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x80331D88: lwc1        $f6, 0x1C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80331D8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331D90: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331D94: nop

    // 0x80331D98: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80331D9C: b           L_80331DEC
    // 0x80331DA0: swc1        $f16, 0x34($t3)
    MEM_W(0X34, ctx->r11) = ctx->f16.u32l;
        goto L_80331DEC;
    // 0x80331DA0: swc1        $f16, 0x34($t3)
    MEM_W(0X34, ctx->r11) = ctx->f16.u32l;
L_80331DA4:
    // 0x80331DA4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80331DA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331DAC: bne         $t4, $at, L_80331DDC
    if (ctx->r12 != ctx->r1) {
        // 0x80331DB0: nop
    
            goto L_80331DDC;
    }
    // 0x80331DB0: nop

    // 0x80331DB4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331DB8: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80331DBC: lwc1        $f18, 0x1C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331DC0: lwc1        $f4, 0xD4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x80331DC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331DC8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80331DCC: nop

    // 0x80331DD0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80331DD4: b           L_80331DEC
    // 0x80331DD8: swc1        $f10, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->f10.u32l;
        goto L_80331DEC;
    // 0x80331DD8: swc1        $f10, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->f10.u32l;
L_80331DDC:
    // 0x80331DDC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331DE0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331DE4: nop

    // 0x80331DE8: swc1        $f16, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f16.u32l;
L_80331DEC:
    // 0x80331DEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DF0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80331DF4: addiu       $t5, $t5, -0x6020
    ctx->r13 = ADD32(ctx->r13, -0X6020);
    // 0x80331DF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DFC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80331E00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E04: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x80331E08: jal         0x8001C0EC
    // 0x80331E0C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80331E0C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_3:
L_80331E10:
    // 0x80331E10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E18: jal         0x8002A8B4
    // 0x80331E1C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x80331E1C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x80331E20: jal         0x80334770
    // 0x80331E24: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_5;
    // 0x80331E24: nop

    after_5:
    // 0x80331E28: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331E2C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E30: lwc1        $f4, 0x5BF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BF0);
    // 0x80331E34: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80331E38: nop

    // 0x80331E3C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80331E40: nop

    // 0x80331E44: bc1f        L_80331E5C
    if (!c1cs) {
        // 0x80331E48: nop
    
            goto L_80331E5C;
    }
    // 0x80331E48: nop

    // 0x80331E4C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331E50: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x80331E54: b           L_80331EA4
    // 0x80331E58: sh          $t8, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = ctx->r24;
        goto L_80331EA4;
    // 0x80331E58: sh          $t8, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = ctx->r24;
L_80331E5C:
    // 0x80331E5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331E60: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80331E64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331E68: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80331E6C: nop

    // 0x80331E70: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80331E74: nop

    // 0x80331E78: bc1f        L_80331E90
    if (!c1cs) {
        // 0x80331E7C: nop
    
            goto L_80331E90;
    }
    // 0x80331E7C: nop

    // 0x80331E80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331E84: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331E88: b           L_80331EA4
    // 0x80331E8C: swc1        $f10, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f10.u32l;
        goto L_80331EA4;
    // 0x80331E8C: swc1        $f10, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f10.u32l;
L_80331E90:
    // 0x80331E90: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80331E94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331E98: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331E9C: nop

    // 0x80331EA0: swc1        $f16, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f16.u32l;
L_80331EA4:
    // 0x80331EA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EAC: jal         0x8001B62C
    // 0x80331EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_6;
    // 0x80331EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80331EB4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331EB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331EBC: nop

    // 0x80331EC0: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x80331EC4: nop

    // 0x80331EC8: bc1f        L_80331EF0
    if (!c1cs) {
        // 0x80331ECC: nop
    
            goto L_80331EF0;
    }
    // 0x80331ECC: nop

    // 0x80331ED0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ED4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331ED8: addiu       $a3, $a3, -0x5F64
    ctx->r7 = ADD32(ctx->r7, -0X5F64);
    // 0x80331EDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EE0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80331EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331EE8: jal         0x8001ABF4
    // 0x80331EEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x80331EEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_80331EF0:
    // 0x80331EF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EF8: jal         0x8001B4AC
    // 0x80331EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x80331EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80331F00: beq         $v0, $zero, L_80331F20
    if (ctx->r2 == 0) {
        // 0x80331F04: nop
    
            goto L_80331F20;
    }
    // 0x80331F04: nop

    // 0x80331F08: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331F0C: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x80331F10: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80331F14: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331F18: nop

    // 0x80331F1C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80331F20:
    // 0x80331F20: b           L_80331F28
    // 0x80331F24: nop

        goto L_80331F28;
    // 0x80331F24: nop

L_80331F28:
    // 0x80331F28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331F30: jr          $ra
    // 0x80331F34: nop

    return;
    // 0x80331F34: nop

;}
RECOMP_FUNC void func_803328BC_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803328BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803328C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803328C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803328C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803328CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803328D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803328D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803328D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803328DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803328E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803328E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803328E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803328EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803328F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803328F4: nop

    // 0x803328F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803328FC: nop

    // 0x80332900: bne         $t1, $zero, L_80332998
    if (ctx->r9 != 0) {
        // 0x80332904: nop
    
            goto L_80332998;
    }
    // 0x80332904: nop

    // 0x80332908: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033290C: nop

    // 0x80332910: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332914: nop

    // 0x80332918: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033291C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332920: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332924: nop

    // 0x80332928: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033292C: nop

    // 0x80332930: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332934: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332938: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033293C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80332940: nop

    // 0x80332944: bne         $t8, $at, L_80332958
    if (ctx->r24 != ctx->r1) {
        // 0x80332948: nop
    
            goto L_80332958;
    }
    // 0x80332948: nop

    // 0x8033294C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332950: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80332954: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80332958:
    // 0x80332958: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033295C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80332960: addiu       $t1, $t1, -0x6020
    ctx->r9 = ADD32(ctx->r9, -0X6020);
    // 0x80332964: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332968: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033296C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332970: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80332974: jal         0x8001C0EC
    // 0x80332978: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332978: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x8033297C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332980: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332988: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x8033298C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332990: jal         0x800175F0
    // 0x80332994: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80332994: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80332998:
    // 0x80332998: jal         0x80334770
    // 0x8033299C: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x8033299C: nop

    after_2:
    // 0x803329A0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803329A4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803329A8: lwc1        $f6, 0x5C34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5C34);
    // 0x803329AC: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x803329B0: nop

    // 0x803329B4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x803329B8: nop

    // 0x803329BC: bc1f        L_803329D0
    if (!c1cs) {
        // 0x803329C0: nop
    
            goto L_803329D0;
    }
    // 0x803329C0: nop

    // 0x803329C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803329C8: addiu       $t4, $zero, 0x5A
    ctx->r12 = ADD32(0, 0X5A);
    // 0x803329CC: sh          $t4, 0xB8($t2)
    MEM_H(0XB8, ctx->r10) = ctx->r12;
L_803329D0:
    // 0x803329D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329D8: jal         0x8001B4AC
    // 0x803329DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803329DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803329E0: beq         $v0, $zero, L_80332CA0
    if (ctx->r2 == 0) {
        // 0x803329E4: nop
    
            goto L_80332CA0;
    }
    // 0x803329E4: nop

    // 0x803329E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803329EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803329F0: lh          $t5, 0xB0($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XB0);
    // 0x803329F4: nop

    // 0x803329F8: bne         $t5, $at, L_80332BA0
    if (ctx->r13 != ctx->r1) {
        // 0x803329FC: nop
    
            goto L_80332BA0;
    }
    // 0x803329FC: nop

    // 0x80332A00: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332A04: nop

    // 0x80332A08: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80332A0C: nop

    // 0x80332A10: bne         $t8, $zero, L_80332B68
    if (ctx->r24 != 0) {
        // 0x80332A14: nop
    
            goto L_80332B68;
    }
    // 0x80332A14: nop

    // 0x80332A18: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80332A1C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80332A20: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80332A24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332A28: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332A2C: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332A30: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80332A34: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80332A38: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x80332A3C: nop

    // 0x80332A40: bc1f        L_80332AF8
    if (!c1cs) {
        // 0x80332A44: nop
    
            goto L_80332AF8;
    }
    // 0x80332A44: nop

    // 0x80332A48: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80332A4C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80332A50: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80332A54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332A58: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332A5C: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80332A60: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80332A64: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80332A68: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80332A6C: nop

    // 0x80332A70: bc1f        L_80332A90
    if (!c1cs) {
        // 0x80332A74: nop
    
            goto L_80332A90;
    }
    // 0x80332A74: nop

    // 0x80332A78: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332A7C: addiu       $t4, $zero, 0x1B
    ctx->r12 = ADD32(0, 0X1B);
    // 0x80332A80: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80332A84: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332A88: b           L_80332AF0
    // 0x80332A8C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_80332AF0;
    // 0x80332A8C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332A90:
    // 0x80332A90: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80332A94: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80332A98: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80332A9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332AA0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332AA4: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80332AA8: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80332AAC: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80332AB0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80332AB4: nop

    // 0x80332AB8: bc1f        L_80332AD8
    if (!c1cs) {
        // 0x80332ABC: nop
    
            goto L_80332AD8;
    }
    // 0x80332ABC: nop

    // 0x80332AC0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332AC4: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x80332AC8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80332ACC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332AD0: b           L_80332AF0
    // 0x80332AD4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_80332AF0;
    // 0x80332AD4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80332AD8:
    // 0x80332AD8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332ADC: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80332AE0: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80332AE4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332AE8: nop

    // 0x80332AEC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80332AF0:
    // 0x80332AF0: b           L_80332B58
    // 0x80332AF4: nop

        goto L_80332B58;
    // 0x80332AF4: nop

L_80332AF8:
    // 0x80332AF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332AFC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80332B00: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80332B04: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332B08: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332B0C: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80332B10: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80332B14: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80332B18: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80332B1C: nop

    // 0x80332B20: bc1f        L_80332B40
    if (!c1cs) {
        // 0x80332B24: nop
    
            goto L_80332B40;
    }
    // 0x80332B24: nop

    // 0x80332B28: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332B2C: addiu       $t5, $zero, 0x21
    ctx->r13 = ADD32(0, 0X21);
    // 0x80332B30: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80332B34: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332B38: b           L_80332B58
    // 0x80332B3C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_80332B58;
    // 0x80332B3C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80332B40:
    // 0x80332B40: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332B44: addiu       $t9, $zero, 0x1D
    ctx->r25 = ADD32(0, 0X1D);
    // 0x80332B48: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80332B4C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332B50: nop

    // 0x80332B54: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80332B58:
    // 0x80332B58: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332B5C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80332B60: b           L_80332B98
    // 0x80332B64: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
        goto L_80332B98;
    // 0x80332B64: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_80332B68:
    // 0x80332B68: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332B6C: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x80332B70: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80332B74: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332B78: nop

    // 0x80332B7C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80332B80: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332B84: nop

    // 0x80332B88: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80332B8C: nop

    // 0x80332B90: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80332B94: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_80332B98:
    // 0x80332B98: b           L_80332CA0
    // 0x80332B9C: nop

        goto L_80332CA0;
    // 0x80332B9C: nop

L_80332BA0:
    // 0x80332BA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332BA4: nop

    // 0x80332BA8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332BAC: nop

    // 0x80332BB0: bne         $t1, $zero, L_80332C70
    if (ctx->r9 != 0) {
        // 0x80332BB4: nop
    
            goto L_80332C70;
    }
    // 0x80332BB4: nop

    // 0x80332BB8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80332BBC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80332BC0: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80332BC4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332BC8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332BCC: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80332BD0: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80332BD4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80332BD8: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x80332BDC: nop

    // 0x80332BE0: bc1f        L_80332C00
    if (!c1cs) {
        // 0x80332BE4: nop
    
            goto L_80332C00;
    }
    // 0x80332BE4: nop

    // 0x80332BE8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332BEC: addiu       $t2, $zero, 0x16
    ctx->r10 = ADD32(0, 0X16);
    // 0x80332BF0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80332BF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332BF8: b           L_80332C60
    // 0x80332BFC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80332C60;
    // 0x80332BFC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80332C00:
    // 0x80332C00: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80332C04: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80332C08: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332C0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332C10: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332C14: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80332C18: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80332C1C: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80332C20: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80332C24: nop

    // 0x80332C28: bc1f        L_80332C48
    if (!c1cs) {
        // 0x80332C2C: nop
    
            goto L_80332C48;
    }
    // 0x80332C2C: nop

    // 0x80332C30: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332C34: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x80332C38: sh          $t7, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r15;
    // 0x80332C3C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332C40: b           L_80332C60
    // 0x80332C44: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_80332C60;
    // 0x80332C44: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80332C48:
    // 0x80332C48: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332C4C: addiu       $t3, $zero, 0x16
    ctx->r11 = ADD32(0, 0X16);
    // 0x80332C50: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332C54: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332C58: nop

    // 0x80332C5C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80332C60:
    // 0x80332C60: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332C64: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80332C68: b           L_80332CA0
    // 0x80332C6C: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
        goto L_80332CA0;
    // 0x80332C6C: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
L_80332C70:
    // 0x80332C70: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332C74: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80332C78: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80332C7C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332C80: nop

    // 0x80332C84: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80332C88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332C8C: nop

    // 0x80332C90: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332C94: nop

    // 0x80332C98: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80332C9C: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_80332CA0:
    // 0x80332CA0: b           L_80332CA8
    // 0x80332CA4: nop

        goto L_80332CA8;
    // 0x80332CA4: nop

L_80332CA8:
    // 0x80332CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332CAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332CB0: jr          $ra
    // 0x80332CB4: nop

    return;
    // 0x80332CB4: nop

;}
RECOMP_FUNC void func_8033530C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033530C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335310: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335314: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335318: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033531C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335320: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335324: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335328: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033532C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335330: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335334: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335338: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033533C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335340: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335344: nop

    // 0x80335348: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033534C: nop

    // 0x80335350: bne         $t1, $zero, L_803353A8
    if (ctx->r9 != 0) {
        // 0x80335354: nop
    
            goto L_803353A8;
    }
    // 0x80335354: nop

    // 0x80335358: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033535C: nop

    // 0x80335360: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335364: nop

    // 0x80335368: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033536C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335370: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335374: nop

    // 0x80335378: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033537C: nop

    // 0x80335380: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335384: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335388: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033538C: addiu       $t7, $t7, -0x5E88
    ctx->r15 = ADD32(ctx->r15, -0X5E88);
    // 0x80335390: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335394: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033539C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803353A0: jal         0x8001C0EC
    // 0x803353A4: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803353A4: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
L_803353A8:
    // 0x803353A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803353AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803353B0: jal         0x8001B4AC
    // 0x803353B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803353B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803353B8: beq         $v0, $zero, L_803353D8
    if (ctx->r2 == 0) {
        // 0x803353BC: nop
    
            goto L_803353D8;
    }
    // 0x803353BC: nop

    // 0x803353C0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803353C4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x803353C8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803353CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803353D0: nop

    // 0x803353D4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803353D8:
    // 0x803353D8: b           L_803353E0
    // 0x803353DC: nop

        goto L_803353E0;
    // 0x803353DC: nop

L_803353E0:
    // 0x803353E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803353E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803353E8: jr          $ra
    // 0x803353EC: nop

    return;
    // 0x803353EC: nop

;}
RECOMP_FUNC void func_80335620_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80335624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335628: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033562C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335630: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335634: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033563C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335640: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335644: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335648: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033564C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335650: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80335654: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80335658: nop

    // 0x8033565C: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80335660: nop

    // 0x80335664: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80335668: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x8033566C: beq         $at, $zero, L_803356F0
    if (ctx->r1 == 0) {
        // 0x80335670: nop
    
            goto L_803356F0;
    }
    // 0x80335670: nop

    // 0x80335674: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80335678: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033567C: addu        $at, $at, $t2
    gpr jr_addend_80335688 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80335680: lw          $t2, 0x5CE0($at)
    ctx->r10 = ADD32(ctx->r1, 0X5CE0);
    // 0x80335684: nop

    // 0x80335688: jr          $t2
    // 0x8033568C: nop

    switch (jr_addend_80335688 >> 2) {
        case 0: goto L_80335690; break;
        case 1: goto L_803356A0; break;
        case 2: goto L_803356B0; break;
        case 3: goto L_803356C0; break;
        case 4: goto L_803356D0; break;
        case 5: goto L_803356E0; break;
        default: switch_error(__func__, 0x80335688, 0x80335CE0);
    }
    // 0x8033568C: nop

L_80335690:
    // 0x80335690: jal         0x80335008
    // 0x80335694: nop

    func_80335008_unk_bin_12(rdram, ctx);
        goto after_0;
    // 0x80335694: nop

    after_0:
    // 0x80335698: b           L_803356F8
    // 0x8033569C: nop

        goto L_803356F8;
    // 0x8033569C: nop

L_803356A0:
    // 0x803356A0: jal         0x80335128
    // 0x803356A4: nop

    func_80335128_unk_bin_12(rdram, ctx);
        goto after_1;
    // 0x803356A4: nop

    after_1:
    // 0x803356A8: b           L_803356F8
    // 0x803356AC: nop

        goto L_803356F8;
    // 0x803356AC: nop

L_803356B0:
    // 0x803356B0: jal         0x8033520C
    // 0x803356B4: nop

    func_8033520C_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x803356B4: nop

    after_2:
    // 0x803356B8: b           L_803356F8
    // 0x803356BC: nop

        goto L_803356F8;
    // 0x803356BC: nop

L_803356C0:
    // 0x803356C0: jal         0x8033530C
    // 0x803356C4: nop

    func_8033530C_unk_bin_12(rdram, ctx);
        goto after_3;
    // 0x803356C4: nop

    after_3:
    // 0x803356C8: b           L_803356F8
    // 0x803356CC: nop

        goto L_803356F8;
    // 0x803356CC: nop

L_803356D0:
    // 0x803356D0: jal         0x803353F0
    // 0x803356D4: nop

    func_803353F0_unk_bin_12(rdram, ctx);
        goto after_4;
    // 0x803356D4: nop

    after_4:
    // 0x803356D8: b           L_803356F8
    // 0x803356DC: nop

        goto L_803356F8;
    // 0x803356DC: nop

L_803356E0:
    // 0x803356E0: jal         0x80335534
    // 0x803356E4: nop

    func_80335534_unk_bin_12(rdram, ctx);
        goto after_5;
    // 0x803356E4: nop

    after_5:
    // 0x803356E8: b           L_803356F8
    // 0x803356EC: nop

        goto L_803356F8;
    // 0x803356EC: nop

L_803356F0:
    // 0x803356F0: b           L_803356F8
    // 0x803356F4: nop

        goto L_803356F8;
    // 0x803356F4: nop

L_803356F8:
    // 0x803356F8: b           L_80335700
    // 0x803356FC: nop

        goto L_80335700;
    // 0x803356FC: nop

L_80335700:
    // 0x80335700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335704: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80335708: jr          $ra
    // 0x8033570C: nop

    return;
    // 0x8033570C: nop

;}
RECOMP_FUNC void func_803308DC_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803308DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803308E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803308E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803308E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803308EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803308F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803308F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803308F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803308FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330900: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330904: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330908: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033090C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330910: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330914: nop

    // 0x80330918: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033091C: nop

    // 0x80330920: bne         $t1, $zero, L_803309B8
    if (ctx->r9 != 0) {
        // 0x80330924: nop
    
            goto L_803309B8;
    }
    // 0x80330924: nop

    // 0x80330928: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033092C: nop

    // 0x80330930: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330934: nop

    // 0x80330938: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033093C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330940: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330944: nop

    // 0x80330948: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033094C: nop

    // 0x80330950: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330954: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330958: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033095C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80330960: nop

    // 0x80330964: bne         $t8, $at, L_80330978
    if (ctx->r24 != ctx->r1) {
        // 0x80330968: nop
    
            goto L_80330978;
    }
    // 0x80330968: nop

    // 0x8033096C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330970: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80330974: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80330978:
    // 0x80330978: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033097C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80330980: addiu       $t1, $t1, -0x6020
    ctx->r9 = ADD32(ctx->r9, -0X6020);
    // 0x80330984: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330988: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033098C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330990: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80330994: jal         0x8001C0EC
    // 0x80330998: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330998: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x8033099C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803309A8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x803309AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803309B0: jal         0x800175F0
    // 0x803309B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803309B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_803309B8:
    // 0x803309B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309C0: jal         0x8002A8B4
    // 0x803309C4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x803309C4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x803309C8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803309CC: nop

    // 0x803309D0: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x803309D4: nop

    // 0x803309D8: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x803309DC: jal         0x80334770
    // 0x803309E0: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_3;
    // 0x803309E0: nop

    after_3:
    // 0x803309E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803309E8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803309EC: lwc1        $f8, 0x5BE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BE4);
    // 0x803309F0: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x803309F4: nop

    // 0x803309F8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803309FC: nop

    // 0x80330A00: bc1f        L_80330A1C
    if (!c1cs) {
        // 0x80330A04: nop
    
            goto L_80330A1C;
    }
    // 0x80330A04: nop

    // 0x80330A08: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80330A0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330A10: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330A14: b           L_80330A30
    // 0x80330A18: swc1        $f10, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f10.u32l;
        goto L_80330A30;
    // 0x80330A18: swc1        $f10, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f10.u32l;
L_80330A1C:
    // 0x80330A1C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330A20: lwc1        $f16, 0x5BE8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5BE8);
    // 0x80330A24: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330A28: nop

    // 0x80330A2C: swc1        $f16, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f16.u32l;
L_80330A30:
    // 0x80330A30: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330A34: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330A38: lwc1        $f4, 0x5BEC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BEC);
    // 0x80330A3C: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80330A40: nop

    // 0x80330A44: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80330A48: nop

    // 0x80330A4C: bc1f        L_80330A60
    if (!c1cs) {
        // 0x80330A50: nop
    
            goto L_80330A60;
    }
    // 0x80330A50: nop

    // 0x80330A54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330A58: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x80330A5C: sh          $t7, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r15;
L_80330A60:
    // 0x80330A60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A68: jal         0x8001B4AC
    // 0x80330A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80330A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80330A70: beq         $v0, $zero, L_80330B38
    if (ctx->r2 == 0) {
        // 0x80330A74: nop
    
            goto L_80330B38;
    }
    // 0x80330A74: nop

    // 0x80330A78: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330A7C: nop

    // 0x80330A80: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80330A84: nop

    // 0x80330A88: bne         $t0, $zero, L_80330B08
    if (ctx->r8 != 0) {
        // 0x80330A8C: nop
    
            goto L_80330B08;
    }
    // 0x80330A8C: nop

    // 0x80330A90: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80330A94: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80330A98: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330A9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330AA0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330AA4: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80330AA8: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80330AAC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330AB0: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x80330AB4: nop

    // 0x80330AB8: bc1f        L_80330AD0
    if (!c1cs) {
        // 0x80330ABC: nop
    
            goto L_80330AD0;
    }
    // 0x80330ABC: nop

    // 0x80330AC0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330AC4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x80330AC8: b           L_80330ADC
    // 0x80330ACC: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
        goto L_80330ADC;
    // 0x80330ACC: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
L_80330AD0:
    // 0x80330AD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330AD4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330AD8: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
L_80330ADC:
    // 0x80330ADC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330AE0: nop

    // 0x80330AE4: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80330AE8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330AEC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330AF0: nop

    // 0x80330AF4: swc1        $f18, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f18.u32l;
    // 0x80330AF8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330AFC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80330B00: b           L_80330B38
    // 0x80330B04: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
        goto L_80330B38;
    // 0x80330B04: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80330B08:
    // 0x80330B08: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330B0C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80330B10: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80330B14: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330B18: nop

    // 0x80330B1C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80330B20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330B24: nop

    // 0x80330B28: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80330B2C: nop

    // 0x80330B30: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80330B34: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
L_80330B38:
    // 0x80330B38: b           L_80330B40
    // 0x80330B3C: nop

        goto L_80330B40;
    // 0x80330B3C: nop

L_80330B40:
    // 0x80330B40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330B48: jr          $ra
    // 0x80330B4C: nop

    return;
    // 0x80330B4C: nop

;}
RECOMP_FUNC void func_803332D8_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803332D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803332DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803332E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803332E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803332E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803332EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803332F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803332F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803332F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803332FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333300: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333304: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333308: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033330C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333310: nop

    // 0x80333314: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333318: nop

    // 0x8033331C: bne         $t1, $zero, L_80333374
    if (ctx->r9 != 0) {
        // 0x80333320: nop
    
            goto L_80333374;
    }
    // 0x80333320: nop

    // 0x80333324: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333328: nop

    // 0x8033332C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333330: nop

    // 0x80333334: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333338: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033333C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333340: nop

    // 0x80333344: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333348: nop

    // 0x8033334C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333354: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333358: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x8033335C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333360: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333368: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x8033336C: jal         0x8001C0EC
    // 0x80333370: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333370: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80333374:
    // 0x80333374: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333378: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033337C: jal         0x8002A8B4
    // 0x80333380: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80333380: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80333384: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333388: nop

    // 0x8033338C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80333390: nop

    // 0x80333394: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80333398: jal         0x80334770
    // 0x8033339C: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x8033339C: nop

    after_2:
    // 0x803333A0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803333A4: nop

    // 0x803333A8: lh          $t0, 0xB8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB8);
    // 0x803333AC: nop

    // 0x803333B0: bne         $t0, $zero, L_80333400
    if (ctx->r8 != 0) {
        // 0x803333B4: nop
    
            goto L_80333400;
    }
    // 0x803333B4: nop

    // 0x803333B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803333BC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803333C0: lwc1        $f8, 0x5C44($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C44);
    // 0x803333C4: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x803333C8: nop

    // 0x803333CC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x803333D0: nop

    // 0x803333D4: bc1f        L_803333EC
    if (!c1cs) {
        // 0x803333D8: nop
    
            goto L_803333EC;
    }
    // 0x803333D8: nop

    // 0x803333DC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803333E0: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x803333E4: b           L_80333400
    // 0x803333E8: sh          $t3, 0xB8($t4)
    MEM_H(0XB8, ctx->r12) = ctx->r11;
        goto L_80333400;
    // 0x803333E8: sh          $t3, 0xB8($t4)
    MEM_H(0XB8, ctx->r12) = ctx->r11;
L_803333EC:
    // 0x803333EC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803333F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803333F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803333F8: nop

    // 0x803333FC: swc1        $f10, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f10.u32l;
L_80333400:
    // 0x80333400: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333404: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333408: jal         0x8001B4AC
    // 0x8033340C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8033340C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80333410: beq         $v0, $zero, L_80333440
    if (ctx->r2 == 0) {
        // 0x80333414: nop
    
            goto L_80333440;
    }
    // 0x80333414: nop

    // 0x80333418: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033341C: addiu       $t6, $zero, 0x1C
    ctx->r14 = ADD32(0, 0X1C);
    // 0x80333420: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80333424: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333428: nop

    // 0x8033342C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80333430: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333434: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333438: nop

    // 0x8033343C: swc1        $f16, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f16.u32l;
L_80333440:
    // 0x80333440: b           L_80333448
    // 0x80333444: nop

        goto L_80333448;
    // 0x80333444: nop

L_80333448:
    // 0x80333448: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033344C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333450: jr          $ra
    // 0x80333454: nop

    return;
    // 0x80333454: nop

;}
RECOMP_FUNC void func_8033109C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033109C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803310A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803310A4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803310A8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803310AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803310B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803310B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803310B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803310BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803310C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803310C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803310C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803310CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803310D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803310D4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803310D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803310DC: nop

    // 0x803310E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803310E4: nop

    // 0x803310E8: bne         $t1, $zero, L_80331184
    if (ctx->r9 != 0) {
        // 0x803310EC: nop
    
            goto L_80331184;
    }
    // 0x803310EC: nop

    // 0x803310F0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803310F4: nop

    // 0x803310F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803310FC: nop

    // 0x80331100: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331104: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331108: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033110C: nop

    // 0x80331110: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331114: nop

    // 0x80331118: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033111C: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80331120: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331124: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331128: nop

    // 0x8033112C: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
    // 0x80331130: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80331134: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331138: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033113C: nop

    // 0x80331140: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x80331144: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331148: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8033114C: addiu       $t9, $t9, -0x6020
    ctx->r25 = ADD32(ctx->r25, -0X6020);
    // 0x80331150: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331154: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80331158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033115C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80331160: jal         0x8001C0EC
    // 0x80331164: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331164: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80331168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033116C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331174: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    // 0x80331178: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033117C: jal         0x800175F0
    // 0x80331180: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80331180: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80331184:
    // 0x80331184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033118C: jal         0x8002A8B4
    // 0x80331190: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80331190: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x80331194: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331198: nop

    // 0x8033119C: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x803311A0: nop

    // 0x803311A4: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x803311A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803311AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803311B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803311B4: lwc1        $f10, 0x28($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X28);
    // 0x803311B8: nop

    // 0x803311BC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803311C0: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x803311C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311CC: jal         0x80029C40
    // 0x803311D0: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x803311D0: nop

    after_3:
    // 0x803311D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803311D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803311DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803311E8: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    // 0x803311EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803311F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803311F4: jal         0x80029018
    // 0x803311F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x803311F8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x803311FC: beq         $v0, $zero, L_80331234
    if (ctx->r2 == 0) {
        // 0x80331200: nop
    
            goto L_80331234;
    }
    // 0x80331200: nop

    // 0x80331204: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331208: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033120C: nop

    // 0x80331210: swc1        $f8, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f8.u32l;
    // 0x80331214: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331218: nop

    // 0x8033121C: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80331220: nop

    // 0x80331224: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x80331228: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033122C: nop

    // 0x80331230: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
L_80331234:
    // 0x80331234: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331238: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x8033123C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331240: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80331244: nop

    // 0x80331248: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x8033124C: nop

    // 0x80331250: bc1f        L_8033127C
    if (!c1cs) {
        // 0x80331254: nop
    
            goto L_8033127C;
    }
    // 0x80331254: nop

    // 0x80331258: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033125C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331260: nop

    // 0x80331264: swc1        $f18, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f18.u32l;
    // 0x80331268: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x8033126C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331270: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331274: nop

    // 0x80331278: swc1        $f4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f4.u32l;
L_8033127C:
    // 0x8033127C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331284: jal         0x8001B4AC
    // 0x80331288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80331288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8033128C: beq         $v0, $zero, L_803312AC
    if (ctx->r2 == 0) {
        // 0x80331290: nop
    
            goto L_803312AC;
    }
    // 0x80331290: nop

    // 0x80331294: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331298: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8033129C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803312A0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803312A4: nop

    // 0x803312A8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803312AC:
    // 0x803312AC: b           L_803312B4
    // 0x803312B0: nop

        goto L_803312B4;
    // 0x803312B0: nop

L_803312B4:
    // 0x803312B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803312B8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803312BC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803312C0: jr          $ra
    // 0x803312C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803312C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803300D0_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803300D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803300D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803300DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803300E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803300E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803300E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803300F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803300FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330100: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330104: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330108: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8033010C: nop

    // 0x80330110: bne         $t0, $zero, L_803301A0
    if (ctx->r8 != 0) {
        // 0x80330114: nop
    
            goto L_803301A0;
    }
    // 0x80330114: nop

    // 0x80330118: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033011C: nop

    // 0x80330120: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x80330124: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80330128: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033012C: jal         0x80069E60
    // 0x80330130: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80330130: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    after_0:
    // 0x80330134: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330138: addiu       $t2, $zero, 0x23
    ctx->r10 = ADD32(0, 0X23);
    // 0x8033013C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80330140: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330144: nop

    // 0x80330148: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x8033014C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330150: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330154: nop

    // 0x80330158: swc1        $f4, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f4.u32l;
    // 0x8033015C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330160: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330164: nop

    // 0x80330168: swc1        $f6, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f6.u32l;
    // 0x8033016C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330170: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330174: nop

    // 0x80330178: swc1        $f8, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f8.u32l;
    // 0x8033017C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330180: nop

    // 0x80330184: lwc1        $f10, 0x2C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80330188: nop

    // 0x8033018C: swc1        $f10, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f10.u32l;
    // 0x80330190: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330194: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330198: b           L_803302F4
    // 0x8033019C: swc1        $f16, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f16.u32l;
        goto L_803302F4;
    // 0x8033019C: swc1        $f16, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f16.u32l;
L_803301A0:
    // 0x803301A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803301A4: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x803301A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803301AC: bne         $t0, $at, L_803302F4
    if (ctx->r8 != ctx->r1) {
        // 0x803301B0: nop
    
            goto L_803302F4;
    }
    // 0x803301B0: nop

    // 0x803301B4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803301B8: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x803301BC: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x803301C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803301C4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803301C8: lh          $t4, 0x100($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X100);
    // 0x803301CC: nop

    // 0x803301D0: bne         $t4, $at, L_803301E4
    if (ctx->r12 != ctx->r1) {
        // 0x803301D4: nop
    
            goto L_803301E4;
    }
    // 0x803301D4: nop

    // 0x803301D8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803301DC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803301E0: sh          $t5, 0xB0($t6)
    MEM_H(0XB0, ctx->r14) = ctx->r13;
L_803301E4:
    // 0x803301E4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803301E8: nop

    // 0x803301EC: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x803301F0: nop

    // 0x803301F4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803301F8: sltiu       $at, $t9, 0x1C
    ctx->r1 = ctx->r25 < 0X1C ? 1 : 0;
    // 0x803301FC: beq         $at, $zero, L_803302D8
    if (ctx->r1 == 0) {
        // 0x80330200: nop
    
            goto L_803302D8;
    }
    // 0x80330200: nop

    // 0x80330204: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330208: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033020C: addu        $at, $at, $t9
    gpr jr_addend_80330218 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330210: lw          $t9, 0x5B60($at)
    ctx->r25 = ADD32(ctx->r1, 0X5B60);
    // 0x80330214: nop

    // 0x80330218: jr          $t9
    // 0x8033021C: nop

    switch (jr_addend_80330218 >> 2) {
        case 0: goto L_80330220; break;
        case 1: goto L_80330220; break;
        case 2: goto L_80330220; break;
        case 3: goto L_80330220; break;
        case 4: goto L_803302D8; break;
        case 5: goto L_803302D8; break;
        case 6: goto L_803302D8; break;
        case 7: goto L_803302D8; break;
        case 8: goto L_803302D8; break;
        case 9: goto L_803302D8; break;
        case 10: goto L_803302D8; break;
        case 11: goto L_803302D8; break;
        case 12: goto L_803302D8; break;
        case 13: goto L_803302D8; break;
        case 14: goto L_803302D8; break;
        case 15: goto L_803302D8; break;
        case 16: goto L_803302D8; break;
        case 17: goto L_803302D8; break;
        case 18: goto L_803302D8; break;
        case 19: goto L_80330274; break;
        case 20: goto L_80330274; break;
        case 21: goto L_803302D8; break;
        case 22: goto L_803302D8; break;
        case 23: goto L_803302D8; break;
        case 24: goto L_803302D8; break;
        case 25: goto L_803302D8; break;
        case 26: goto L_80330274; break;
        case 27: goto L_80330274; break;
        default: switch_error(__func__, 0x80330218, 0x80335B60);
    }
    // 0x8033021C: nop

L_80330220:
    // 0x80330220: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330224: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x80330228: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033022C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330230: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330234: nop

    // 0x80330238: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
    // 0x8033023C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330240: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330244: nop

    // 0x80330248: swc1        $f4, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f4.u32l;
    // 0x8033024C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330250: nop

    // 0x80330254: lwc1        $f6, 0x2C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80330258: nop

    // 0x8033025C: swc1        $f6, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f6.u32l;
    // 0x80330260: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330264: nop

    // 0x80330268: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x8033026C: b           L_803302F4
    // 0x80330270: nop

        goto L_803302F4;
    // 0x80330270: nop

L_80330274:
    // 0x80330274: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330278: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x8033027C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80330280: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330284: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330288: nop

    // 0x8033028C: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x80330290: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330294: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330298: nop

    // 0x8033029C: swc1        $f10, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f10.u32l;
    // 0x803302A0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803302A4: nop

    // 0x803302A8: lwc1        $f16, 0x2C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x803302AC: nop

    // 0x803302B0: swc1        $f16, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f16.u32l;
    // 0x803302B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803302B8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803302BC: nop

    // 0x803302C0: swc1        $f18, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f18.u32l;
    // 0x803302C4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803302C8: nop

    // 0x803302CC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803302D0: b           L_803302F4
    // 0x803302D4: nop

        goto L_803302F4;
    // 0x803302D4: nop

L_803302D8:
    // 0x803302D8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803302DC: nop

    // 0x803302E0: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x803302E4: nop

    // 0x803302E8: sh          $t4, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r12;
    // 0x803302EC: b           L_803302F4
    // 0x803302F0: nop

        goto L_803302F4;
    // 0x803302F0: nop

L_803302F4:
    // 0x803302F4: b           L_803302FC
    // 0x803302F8: nop

        goto L_803302FC;
    // 0x803302F8: nop

L_803302FC:
    // 0x803302FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330304: jr          $ra
    // 0x80330308: nop

    return;
    // 0x80330308: nop

;}
RECOMP_FUNC void func_80330750_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330750: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330758: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033075C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330760: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330764: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033076C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330774: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330778: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033077C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330780: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330784: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330788: nop

    // 0x8033078C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330790: nop

    // 0x80330794: bne         $t1, $zero, L_803307EC
    if (ctx->r9 != 0) {
        // 0x80330798: nop
    
            goto L_803307EC;
    }
    // 0x80330798: nop

    // 0x8033079C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803307A0: nop

    // 0x803307A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803307A8: nop

    // 0x803307AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803307B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803307B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803307B8: nop

    // 0x803307BC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803307C0: nop

    // 0x803307C4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803307C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803307D0: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x803307D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307D8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803307DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803307E4: jal         0x8001C0EC
    // 0x803307E8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803307E8: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_803307EC:
    // 0x803307EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307F4: jal         0x8002A8B4
    // 0x803307F8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x803307F8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x803307FC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330800: nop

    // 0x80330804: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330808: nop

    // 0x8033080C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330810: jal         0x80334770
    // 0x80330814: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x80330814: nop

    after_2:
    // 0x80330818: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033081C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330820: lwc1        $f8, 0x5BD8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BD8);
    // 0x80330824: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80330828: nop

    // 0x8033082C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80330830: nop

    // 0x80330834: bc1f        L_80330850
    if (!c1cs) {
        // 0x80330838: nop
    
            goto L_80330850;
    }
    // 0x80330838: nop

    // 0x8033083C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80330840: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330844: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330848: b           L_80330864
    // 0x8033084C: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
        goto L_80330864;
    // 0x8033084C: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
L_80330850:
    // 0x80330850: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330854: lwc1        $f16, 0x5BDC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5BDC);
    // 0x80330858: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033085C: nop

    // 0x80330860: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
L_80330864:
    // 0x80330864: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330868: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033086C: lwc1        $f4, 0x5BE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BE0);
    // 0x80330870: lwc1        $f18, 0x4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80330874: nop

    // 0x80330878: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8033087C: nop

    // 0x80330880: bc1f        L_80330894
    if (!c1cs) {
        // 0x80330884: nop
    
            goto L_80330894;
    }
    // 0x80330884: nop

    // 0x80330888: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033088C: addiu       $t4, $zero, 0x5A
    ctx->r12 = ADD32(0, 0X5A);
    // 0x80330890: sh          $t4, 0xB8($t2)
    MEM_H(0XB8, ctx->r10) = ctx->r12;
L_80330894:
    // 0x80330894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033089C: jal         0x8001B4AC
    // 0x803308A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803308A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803308A4: beq         $v0, $zero, L_803308C4
    if (ctx->r2 == 0) {
        // 0x803308A8: nop
    
            goto L_803308C4;
    }
    // 0x803308A8: nop

    // 0x803308AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803308B0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x803308B4: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x803308B8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803308BC: nop

    // 0x803308C0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803308C4:
    // 0x803308C4: b           L_803308CC
    // 0x803308C8: nop

        goto L_803308CC;
    // 0x803308C8: nop

L_803308CC:
    // 0x803308CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803308D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803308D4: jr          $ra
    // 0x803308D8: nop

    return;
    // 0x803308D8: nop

;}
RECOMP_FUNC void func_80331844_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331844: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331848: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033184C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331850: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331854: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331858: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033185C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331860: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331864: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331868: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033186C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331870: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331874: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331878: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033187C: nop

    // 0x80331880: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331884: nop

    // 0x80331888: bne         $t1, $zero, L_80331904
    if (ctx->r9 != 0) {
        // 0x8033188C: nop
    
            goto L_80331904;
    }
    // 0x8033188C: nop

    // 0x80331890: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331894: nop

    // 0x80331898: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033189C: nop

    // 0x803318A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803318A4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803318A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803318AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803318B0: nop

    // 0x803318B4: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x803318B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803318BC: nop

    // 0x803318C0: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803318C4: nop

    // 0x803318C8: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x803318CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803318D0: nop

    // 0x803318D4: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x803318D8: nop

    // 0x803318DC: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x803318E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803318E4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803318E8: addiu       $t9, $t9, -0x6020
    ctx->r25 = ADD32(ctx->r25, -0X6020);
    // 0x803318EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803318F0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803318F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803318F8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x803318FC: jal         0x8001C0EC
    // 0x80331900: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331900: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331904:
    // 0x80331904: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331908: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033190C: jal         0x8002A8B4
    // 0x80331910: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331910: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331914: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331918: nop

    // 0x8033191C: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80331920: nop

    // 0x80331924: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x80331928: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033192C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331930: jal         0x8001B4AC
    // 0x80331934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331938: beq         $v0, $zero, L_80331958
    if (ctx->r2 == 0) {
        // 0x8033193C: nop
    
            goto L_80331958;
    }
    // 0x8033193C: nop

    // 0x80331940: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331944: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x80331948: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033194C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331950: nop

    // 0x80331954: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80331958:
    // 0x80331958: b           L_80331960
    // 0x8033195C: nop

        goto L_80331960;
    // 0x8033195C: nop

L_80331960:
    // 0x80331960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331964: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331968: jr          $ra
    // 0x8033196C: nop

    return;
    // 0x8033196C: nop

;}
RECOMP_FUNC void func_80332CB8_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332CB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332CBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332CC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332CC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332CC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332CCC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332CD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332CD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332CE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332CE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332CE8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332CEC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332CF0: nop

    // 0x80332CF4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332CF8: nop

    // 0x80332CFC: bne         $t1, $zero, L_80332D78
    if (ctx->r9 != 0) {
        // 0x80332D00: nop
    
            goto L_80332D78;
    }
    // 0x80332D00: nop

    // 0x80332D04: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332D08: nop

    // 0x80332D0C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332D10: nop

    // 0x80332D14: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332D18: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332D1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332D20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332D24: nop

    // 0x80332D28: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80332D2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332D30: nop

    // 0x80332D34: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80332D38: nop

    // 0x80332D3C: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80332D40: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332D44: nop

    // 0x80332D48: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80332D4C: nop

    // 0x80332D50: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x80332D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D58: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80332D5C: addiu       $t9, $t9, -0x6020
    ctx->r25 = ADD32(ctx->r25, -0X6020);
    // 0x80332D60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D64: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80332D68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D6C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80332D70: jal         0x8001C0EC
    // 0x80332D74: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332D74: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80332D78:
    // 0x80332D78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D80: jal         0x8002A8B4
    // 0x80332D84: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80332D84: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80332D88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332D8C: nop

    // 0x80332D90: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80332D94: nop

    // 0x80332D98: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x80332D9C: jal         0x80334770
    // 0x80332DA0: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x80332DA0: nop

    after_2:
    // 0x80332DA4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332DA8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332DAC: lwc1        $f16, 0x5C38($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5C38);
    // 0x80332DB0: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80332DB4: nop

    // 0x80332DB8: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80332DBC: nop

    // 0x80332DC0: bc1f        L_80332DD4
    if (!c1cs) {
        // 0x80332DC4: nop
    
            goto L_80332DD4;
    }
    // 0x80332DC4: nop

    // 0x80332DC8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332DCC: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x80332DD0: sh          $t3, 0xB8($t4)
    MEM_H(0XB8, ctx->r12) = ctx->r11;
L_80332DD4:
    // 0x80332DD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DDC: jal         0x8001B4AC
    // 0x80332DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80332DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80332DE4: beq         $v0, $zero, L_80332E14
    if (ctx->r2 == 0) {
        // 0x80332DE8: nop
    
            goto L_80332E14;
    }
    // 0x80332DE8: nop

    // 0x80332DEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332DF0: addiu       $t2, $zero, 0x17
    ctx->r10 = ADD32(0, 0X17);
    // 0x80332DF4: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x80332DF8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332DFC: nop

    // 0x80332E00: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80332E04: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332E08: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332E0C: nop

    // 0x80332E10: swc1        $f18, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f18.u32l;
L_80332E14:
    // 0x80332E14: b           L_80332E1C
    // 0x80332E18: nop

        goto L_80332E1C;
    // 0x80332E18: nop

L_80332E1C:
    // 0x80332E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332E20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332E24: jr          $ra
    // 0x80332E28: nop

    return;
    // 0x80332E28: nop

;}
RECOMP_FUNC void func_80335710_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335710: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335714: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335718: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033571C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335720: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335724: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033572C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335730: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335734: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335738: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033573C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335740: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335744: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335748: nop

    // 0x8033574C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335750: nop

    // 0x80335754: bne         $t1, $zero, L_803357AC
    if (ctx->r9 != 0) {
        // 0x80335758: nop
    
            goto L_803357AC;
    }
    // 0x80335758: nop

    // 0x8033575C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335760: nop

    // 0x80335764: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335768: nop

    // 0x8033576C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335770: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335774: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80335778: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033577C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335780: nop

    // 0x80335784: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
    // 0x80335788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033578C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80335790: addiu       $t6, $t6, -0x5E08
    ctx->r14 = ADD32(ctx->r14, -0X5E08);
    // 0x80335794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335798: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8033579C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803357A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803357A4: jal         0x8001C0EC
    // 0x803357A8: addiu       $a3, $zero, 0xD1
    ctx->r7 = ADD32(0, 0XD1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803357A8: addiu       $a3, $zero, 0xD1
    ctx->r7 = ADD32(0, 0XD1);
    after_0:
L_803357AC:
    // 0x803357AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803357B0: lwc1        $f6, -0x1EA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x803357B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803357B8: nop

    // 0x803357BC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x803357C0: nop

    // 0x803357C4: bc1t        L_803357EC
    if (c1cs) {
        // 0x803357C8: nop
    
            goto L_803357EC;
    }
    // 0x803357C8: nop

    // 0x803357CC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803357D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803357D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x803357D8: lwc1        $f16, -0x1EA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x803357DC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803357E0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803357E4: b           L_803357FC
    // 0x803357E8: swc1        $f18, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f18.u32l;
        goto L_803357FC;
    // 0x803357E8: swc1        $f18, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f18.u32l;
L_803357EC:
    // 0x803357EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803357F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803357F4: nop

    // 0x803357F8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
L_803357FC:
    // 0x803357FC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335800: lui         $at, 0x44F0
    ctx->r1 = S32(0X44F0 << 16);
    // 0x80335804: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335808: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033580C: nop

    // 0x80335810: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80335814: nop

    // 0x80335818: bc1f        L_80335830
    if (!c1cs) {
        // 0x8033581C: nop
    
            goto L_80335830;
    }
    // 0x8033581C: nop

    // 0x80335820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335824: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335828: jal         0x8002B114
    // 0x8033582C: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x8033582C: nop

    after_1:
L_80335830:
    // 0x80335830: b           L_80335838
    // 0x80335834: nop

        goto L_80335838;
    // 0x80335834: nop

L_80335838:
    // 0x80335838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033583C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335840: jr          $ra
    // 0x80335844: nop

    return;
    // 0x80335844: nop

;}
RECOMP_FUNC void func_80335A3C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335A3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335A40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335A44: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80335A48: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80335A4C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80335A50: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80335A54: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80335A58: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80335A5C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80335A60: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80335A64: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80335A68: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80335A6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335A70: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80335A74: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80335A78: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80335A7C: addiu       $a1, $a1, 0x5B2C
    ctx->r5 = ADD32(ctx->r5, 0X5B2C);
    // 0x80335A80: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80335A84: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80335A88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335A8C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80335A90: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80335A94: jal         0x80027464
    // 0x80335A98: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80335A98: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80335A9C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80335AA0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335AA4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80335AA8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80335AAC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335AB0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80335AB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335AB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80335ABC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80335AC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335AC4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80335AC8: swc1        $f4, 0x4184($at)
    MEM_W(0X4184, ctx->r1) = ctx->f4.u32l;
    // 0x80335ACC: b           L_80335AD4
    // 0x80335AD0: nop

        goto L_80335AD4;
    // 0x80335AD0: nop

L_80335AD4:
    // 0x80335AD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335AD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335ADC: jr          $ra
    // 0x80335AE0: nop

    return;
    // 0x80335AE0: nop

    // 0x80335AE4: nop

    // 0x80335AE8: nop

    // 0x80335AEC: nop

;}
RECOMP_FUNC void func_80334F84_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334F84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334F88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334F8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334F90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334F94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334F98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334F9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334FA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334FA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334FA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334FAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334FB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334FB4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334FB8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334FBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334FC0: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80334FC4: nop

    // 0x80334FC8: bne         $t1, $at, L_80334FE8
    if (ctx->r9 != ctx->r1) {
        // 0x80334FCC: nop
    
            goto L_80334FE8;
    }
    // 0x80334FCC: nop

    // 0x80334FD0: b           L_80334FD8
    // 0x80334FD4: nop

        goto L_80334FD8;
    // 0x80334FD4: nop

L_80334FD8:
    // 0x80334FD8: jal         0x80334EB4
    // 0x80334FDC: nop

    func_80334EB4_unk_bin_12(rdram, ctx);
        goto after_0;
    // 0x80334FDC: nop

    after_0:
    // 0x80334FE0: b           L_80334FF0
    // 0x80334FE4: nop

        goto L_80334FF0;
    // 0x80334FE4: nop

L_80334FE8:
    // 0x80334FE8: b           L_80334FF0
    // 0x80334FEC: nop

        goto L_80334FF0;
    // 0x80334FEC: nop

L_80334FF0:
    // 0x80334FF0: b           L_80334FF8
    // 0x80334FF4: nop

        goto L_80334FF8;
    // 0x80334FF4: nop

L_80334FF8:
    // 0x80334FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334FFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80335000: jr          $ra
    // 0x80335004: nop

    return;
    // 0x80335004: nop

;}
RECOMP_FUNC void func_803312C8_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803312C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803312CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803312D0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803312D4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803312D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803312DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803312E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803312E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803312E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803312F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803312F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803312FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331300: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331304: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331308: nop

    // 0x8033130C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331310: nop

    // 0x80331314: bne         $t1, $zero, L_8033136C
    if (ctx->r9 != 0) {
        // 0x80331318: nop
    
            goto L_8033136C;
    }
    // 0x80331318: nop

    // 0x8033131C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331320: nop

    // 0x80331324: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331328: nop

    // 0x8033132C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331330: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331334: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331338: nop

    // 0x8033133C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331340: nop

    // 0x80331344: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331348: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033134C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331350: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331354: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331358: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033135C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331360: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80331364: jal         0x8001C0EC
    // 0x80331368: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331368: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_8033136C:
    // 0x8033136C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331370: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331374: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331378: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x8033137C: nop

    // 0x80331380: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331384: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x80331388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033138C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331390: jal         0x80029C40
    // 0x80331394: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80331394: nop

    after_1:
    // 0x80331398: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033139C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803313A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803313AC: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    // 0x803313B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803313B4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803313B8: jal         0x80029018
    // 0x803313BC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x803313BC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x803313C0: beq         $v0, $zero, L_803313F8
    if (ctx->r2 == 0) {
        // 0x803313C4: nop
    
            goto L_803313F8;
    }
    // 0x803313C4: nop

    // 0x803313C8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803313CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803313D0: nop

    // 0x803313D4: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x803313D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803313DC: nop

    // 0x803313E0: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x803313E4: nop

    // 0x803313E8: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x803313EC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803313F0: nop

    // 0x803313F4: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
L_803313F8:
    // 0x803313F8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803313FC: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80331400: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331404: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80331408: nop

    // 0x8033140C: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80331410: nop

    // 0x80331414: bc1f        L_80331440
    if (!c1cs) {
        // 0x80331418: nop
    
            goto L_80331440;
    }
    // 0x80331418: nop

    // 0x8033141C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331420: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331424: nop

    // 0x80331428: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
    // 0x8033142C: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80331430: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331434: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331438: nop

    // 0x8033143C: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
L_80331440:
    // 0x80331440: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331444: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331448: lwc1        $f16, 0x28($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X28);
    // 0x8033144C: nop

    // 0x80331450: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80331454: nop

    // 0x80331458: bc1f        L_80331488
    if (!c1cs) {
        // 0x8033145C: nop
    
            goto L_80331488;
    }
    // 0x8033145C: nop

    // 0x80331460: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331464: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x80331468: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x8033146C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331470: nop

    // 0x80331474: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80331478: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033147C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331480: nop

    // 0x80331484: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
L_80331488:
    // 0x80331488: b           L_80331490
    // 0x8033148C: nop

        goto L_80331490;
    // 0x8033148C: nop

L_80331490:
    // 0x80331490: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331494: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331498: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033149C: jr          $ra
    // 0x803314A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803314A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330B50_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330B50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330B54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330B58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330B5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330B60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330B68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330B7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330B80: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330B84: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330B88: nop

    // 0x80330B8C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330B90: nop

    // 0x80330B94: bne         $t1, $zero, L_80330C10
    if (ctx->r9 != 0) {
        // 0x80330B98: nop
    
            goto L_80330C10;
    }
    // 0x80330B98: nop

    // 0x80330B9C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330BA0: nop

    // 0x80330BA4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330BA8: nop

    // 0x80330BAC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330BB0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330BB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330BB8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330BBC: nop

    // 0x80330BC0: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80330BC4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330BC8: nop

    // 0x80330BCC: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80330BD0: nop

    // 0x80330BD4: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80330BD8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330BDC: nop

    // 0x80330BE0: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80330BE4: nop

    // 0x80330BE8: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x80330BEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BF0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80330BF4: addiu       $t9, $t9, -0x6020
    ctx->r25 = ADD32(ctx->r25, -0X6020);
    // 0x80330BF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BFC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80330C00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330C04: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80330C08: jal         0x8001C0EC
    // 0x80330C0C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330C0C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80330C10:
    // 0x80330C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C18: jal         0x8002A8B4
    // 0x80330C1C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330C1C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80330C20: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330C24: nop

    // 0x80330C28: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80330C2C: nop

    // 0x80330C30: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x80330C34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C3C: jal         0x8001B4AC
    // 0x80330C40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330C40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330C44: beq         $v0, $zero, L_80330C64
    if (ctx->r2 == 0) {
        // 0x80330C48: nop
    
            goto L_80330C64;
    }
    // 0x80330C48: nop

    // 0x80330C4C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330C50: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80330C54: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80330C58: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330C5C: nop

    // 0x80330C60: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80330C64:
    // 0x80330C64: b           L_80330C6C
    // 0x80330C68: nop

        goto L_80330C6C;
    // 0x80330C68: nop

L_80330C6C:
    // 0x80330C6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330C74: jr          $ra
    // 0x80330C78: nop

    return;
    // 0x80330C78: nop

;}
RECOMP_FUNC void func_80337A00_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337A00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337A04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337A08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337A0C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337A10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337A14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337A18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337A1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337A20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337A24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337A28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337A2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337A30: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337A34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337A38: nop

    // 0x80337A3C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337A40: nop

    // 0x80337A44: bne         $t1, $zero, L_80337A9C
    if (ctx->r9 != 0) {
        // 0x80337A48: nop
    
            goto L_80337A9C;
    }
    // 0x80337A48: nop

    // 0x80337A4C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337A50: nop

    // 0x80337A54: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337A58: nop

    // 0x80337A5C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337A60: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337A64: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337A68: nop

    // 0x80337A6C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337A70: nop

    // 0x80337A74: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337A78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337A7C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337A80: addiu       $t7, $t7, -0x5ACC
    ctx->r15 = ADD32(ctx->r15, -0X5ACC);
    // 0x80337A84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337A88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337A8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337A90: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80337A94: jal         0x8001C0EC
    // 0x80337A98: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337A98: addiu       $a3, $zero, 0xDD
    ctx->r7 = ADD32(0, 0XDD);
    after_0:
L_80337A9C:
    // 0x80337A9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337AA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337AA4: jal         0x8001B4AC
    // 0x80337AA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337AA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337AAC: beq         $v0, $zero, L_80337ACC
    if (ctx->r2 == 0) {
        // 0x80337AB0: nop
    
            goto L_80337ACC;
    }
    // 0x80337AB0: nop

    // 0x80337AB4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80337AB8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80337ABC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80337AC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337AC4: nop

    // 0x80337AC8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80337ACC:
    // 0x80337ACC: b           L_80337AD4
    // 0x80337AD0: nop

        goto L_80337AD4;
    // 0x80337AD0: nop

L_80337AD4:
    // 0x80337AD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337AD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337ADC: jr          $ra
    // 0x80337AE0: nop

    return;
    // 0x80337AE0: nop

;}
RECOMP_FUNC void func_80334480_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334480: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334484: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334488: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033448C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334490: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334494: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334498: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033449C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803344A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803344AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803344B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803344B4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803344B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803344BC: nop

    // 0x803344C0: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x803344C4: nop

    // 0x803344C8: bne         $t1, $zero, L_80334500
    if (ctx->r9 != 0) {
        // 0x803344CC: nop
    
            goto L_80334500;
    }
    // 0x803344CC: nop

    // 0x803344D0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803344D4: nop

    // 0x803344D8: lh          $t3, 0xC2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC2);
    // 0x803344DC: nop

    // 0x803344E0: bne         $t3, $zero, L_803344F8
    if (ctx->r11 != 0) {
        // 0x803344E4: nop
    
            goto L_803344F8;
    }
    // 0x803344E4: nop

    // 0x803344E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803344EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803344F0: jal         0x8001BB34
    // 0x803344F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803344F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_803344F8:
    // 0x803344F8: b           L_8033455C
    // 0x803344FC: nop

        goto L_8033455C;
    // 0x803344FC: nop

L_80334500:
    // 0x80334500: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334504: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334508: lh          $s0, 0x108($t4)
    ctx->r16 = MEM_H(ctx->r12, 0X108);
    // 0x8033450C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334510: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x80334514: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80334518: sltiu       $t6, $s0, 0x1
    ctx->r14 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033451C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80334520: jal         0x8001BB34
    // 0x80334524: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80334524: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80334528: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033452C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334530: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x80334534: nop

    // 0x80334538: bne         $t8, $at, L_8033455C
    if (ctx->r24 != ctx->r1) {
        // 0x8033453C: nop
    
            goto L_8033455C;
    }
    // 0x8033453C: nop

    // 0x80334540: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334544: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334548: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033454C: addiu       $a3, $a3, -0x5D68
    ctx->r7 = ADD32(ctx->r7, -0X5D68);
    // 0x80334550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334554: jal         0x8001ABF4
    // 0x80334558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80334558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033455C:
    // 0x8033455C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334560: nop

    // 0x80334564: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80334568: nop

    // 0x8033456C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80334570: sltiu       $at, $t1, 0x19
    ctx->r1 = ctx->r9 < 0X19 ? 1 : 0;
    // 0x80334574: beq         $at, $zero, L_80334728
    if (ctx->r1 == 0) {
        // 0x80334578: nop
    
            goto L_80334728;
    }
    // 0x80334578: nop

    // 0x8033457C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334580: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334584: addu        $at, $at, $t1
    gpr jr_addend_80334590 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334588: lw          $t1, 0x7D28($at)
    ctx->r9 = ADD32(ctx->r1, 0X7D28);
    // 0x8033458C: nop

    // 0x80334590: jr          $t1
    // 0x80334594: nop

    switch (jr_addend_80334590 >> 2) {
        case 0: goto L_80334598; break;
        case 1: goto L_803345A8; break;
        case 2: goto L_803345B8; break;
        case 3: goto L_803345C8; break;
        case 4: goto L_803345D8; break;
        case 5: goto L_803345E8; break;
        case 6: goto L_803345F8; break;
        case 7: goto L_80334608; break;
        case 8: goto L_80334618; break;
        case 9: goto L_80334628; break;
        case 10: goto L_80334638; break;
        case 11: goto L_80334648; break;
        case 12: goto L_80334658; break;
        case 13: goto L_80334668; break;
        case 14: goto L_80334678; break;
        case 15: goto L_80334688; break;
        case 16: goto L_80334698; break;
        case 17: goto L_803346A8; break;
        case 18: goto L_803346B8; break;
        case 19: goto L_803346C8; break;
        case 20: goto L_803346D8; break;
        case 21: goto L_803346E8; break;
        case 22: goto L_803346F8; break;
        case 23: goto L_80334708; break;
        case 24: goto L_80334718; break;
        default: switch_error(__func__, 0x80334590, 0x80337D28);
    }
    // 0x80334594: nop

L_80334598:
    // 0x80334598: jal         0x803304E0
    // 0x8033459C: nop

    func_803304E0_unk_bin_13(rdram, ctx);
        goto after_3;
    // 0x8033459C: nop

    after_3:
    // 0x803345A0: b           L_80334730
    // 0x803345A4: nop

        goto L_80334730;
    // 0x803345A4: nop

L_803345A8:
    // 0x803345A8: jal         0x803306A4
    // 0x803345AC: nop

    func_803306A4_unk_bin_13(rdram, ctx);
        goto after_4;
    // 0x803345AC: nop

    after_4:
    // 0x803345B0: b           L_80334730
    // 0x803345B4: nop

        goto L_80334730;
    // 0x803345B4: nop

L_803345B8:
    // 0x803345B8: jal         0x80330788
    // 0x803345BC: nop

    func_80330788_unk_bin_13(rdram, ctx);
        goto after_5;
    // 0x803345BC: nop

    after_5:
    // 0x803345C0: b           L_80334730
    // 0x803345C4: nop

        goto L_80334730;
    // 0x803345C4: nop

L_803345C8:
    // 0x803345C8: jal         0x803309A0
    // 0x803345CC: nop

    func_803309A0_unk_bin_13(rdram, ctx);
        goto after_6;
    // 0x803345CC: nop

    after_6:
    // 0x803345D0: b           L_80334730
    // 0x803345D4: nop

        goto L_80334730;
    // 0x803345D4: nop

L_803345D8:
    // 0x803345D8: jal         0x80330A90
    // 0x803345DC: nop

    func_80330A90_unk_bin_13(rdram, ctx);
        goto after_7;
    // 0x803345DC: nop

    after_7:
    // 0x803345E0: b           L_80334730
    // 0x803345E4: nop

        goto L_80334730;
    // 0x803345E4: nop

L_803345E8:
    // 0x803345E8: jal         0x80330B98
    // 0x803345EC: nop

    func_80330B98_unk_bin_13(rdram, ctx);
        goto after_8;
    // 0x803345EC: nop

    after_8:
    // 0x803345F0: b           L_80334730
    // 0x803345F4: nop

        goto L_80334730;
    // 0x803345F4: nop

L_803345F8:
    // 0x803345F8: jal         0x80330ED4
    // 0x803345FC: nop

    func_80330ED4_unk_bin_13(rdram, ctx);
        goto after_9;
    // 0x803345FC: nop

    after_9:
    // 0x80334600: b           L_80334730
    // 0x80334604: nop

        goto L_80334730;
    // 0x80334604: nop

L_80334608:
    // 0x80334608: jal         0x80330FE8
    // 0x8033460C: nop

    func_80330FE8_unk_bin_13(rdram, ctx);
        goto after_10;
    // 0x8033460C: nop

    after_10:
    // 0x80334610: b           L_80334730
    // 0x80334614: nop

        goto L_80334730;
    // 0x80334614: nop

L_80334618:
    // 0x80334618: jal         0x80331184
    // 0x8033461C: nop

    func_80331184_unk_bin_13(rdram, ctx);
        goto after_11;
    // 0x8033461C: nop

    after_11:
    // 0x80334620: b           L_80334730
    // 0x80334624: nop

        goto L_80334730;
    // 0x80334624: nop

L_80334628:
    // 0x80334628: jal         0x8033128C
    // 0x8033462C: nop

    func_8033128C_unk_bin_13(rdram, ctx);
        goto after_12;
    // 0x8033462C: nop

    after_12:
    // 0x80334630: b           L_80334730
    // 0x80334634: nop

        goto L_80334730;
    // 0x80334634: nop

L_80334638:
    // 0x80334638: jal         0x803315E0
    // 0x8033463C: nop

    func_803315E0_unk_bin_13(rdram, ctx);
        goto after_13;
    // 0x8033463C: nop

    after_13:
    // 0x80334640: b           L_80334730
    // 0x80334644: nop

        goto L_80334730;
    // 0x80334644: nop

L_80334648:
    // 0x80334648: jal         0x80331744
    // 0x8033464C: nop

    func_80331744_unk_bin_13(rdram, ctx);
        goto after_14;
    // 0x8033464C: nop

    after_14:
    // 0x80334650: b           L_80334730
    // 0x80334654: nop

        goto L_80334730;
    // 0x80334654: nop

L_80334658:
    // 0x80334658: jal         0x80331828
    // 0x8033465C: nop

    func_80331828_unk_bin_13(rdram, ctx);
        goto after_15;
    // 0x8033465C: nop

    after_15:
    // 0x80334660: b           L_80334730
    // 0x80334664: nop

        goto L_80334730;
    // 0x80334664: nop

L_80334668:
    // 0x80334668: jal         0x803319D0
    // 0x8033466C: nop

    func_803319D0_unk_bin_13(rdram, ctx);
        goto after_16;
    // 0x8033466C: nop

    after_16:
    // 0x80334670: b           L_80334730
    // 0x80334674: nop

        goto L_80334730;
    // 0x80334674: nop

L_80334678:
    // 0x80334678: jal         0x80331AC0
    // 0x8033467C: nop

    func_80331AC0_unk_bin_13(rdram, ctx);
        goto after_17;
    // 0x8033467C: nop

    after_17:
    // 0x80334680: b           L_80334730
    // 0x80334684: nop

        goto L_80334730;
    // 0x80334684: nop

L_80334688:
    // 0x80334688: jal         0x80331C68
    // 0x8033468C: nop

    func_80331C68_unk_bin_13(rdram, ctx);
        goto after_18;
    // 0x8033468C: nop

    after_18:
    // 0x80334690: b           L_80334730
    // 0x80334694: nop

        goto L_80334730;
    // 0x80334694: nop

L_80334698:
    // 0x80334698: jal         0x80332038
    // 0x8033469C: nop

    func_80332038_unk_bin_13(rdram, ctx);
        goto after_19;
    // 0x8033469C: nop

    after_19:
    // 0x803346A0: b           L_80334730
    // 0x803346A4: nop

        goto L_80334730;
    // 0x803346A4: nop

L_803346A8:
    // 0x803346A8: jal         0x8033253C
    // 0x803346AC: nop

    func_8033253C_unk_bin_13(rdram, ctx);
        goto after_20;
    // 0x803346AC: nop

    after_20:
    // 0x803346B0: b           L_80334730
    // 0x803346B4: nop

        goto L_80334730;
    // 0x803346B4: nop

L_803346B8:
    // 0x803346B8: jal         0x80332918
    // 0x803346BC: nop

    func_80332918_unk_bin_13(rdram, ctx);
        goto after_21;
    // 0x803346BC: nop

    after_21:
    // 0x803346C0: b           L_80334730
    // 0x803346C4: nop

        goto L_80334730;
    // 0x803346C4: nop

L_803346C8:
    // 0x803346C8: jal         0x80332D0C
    // 0x803346CC: nop

    func_80332D0C_unk_bin_13(rdram, ctx);
        goto after_22;
    // 0x803346CC: nop

    after_22:
    // 0x803346D0: b           L_80334730
    // 0x803346D4: nop

        goto L_80334730;
    // 0x803346D4: nop

L_803346D8:
    // 0x803346D8: jal         0x80333338
    // 0x803346DC: nop

    func_80333338_unk_bin_13(rdram, ctx);
        goto after_23;
    // 0x803346DC: nop

    after_23:
    // 0x803346E0: b           L_80334730
    // 0x803346E4: nop

        goto L_80334730;
    // 0x803346E4: nop

L_803346E8:
    // 0x803346E8: jal         0x80333738
    // 0x803346EC: nop

    func_80333738_unk_bin_13(rdram, ctx);
        goto after_24;
    // 0x803346EC: nop

    after_24:
    // 0x803346F0: b           L_80334730
    // 0x803346F4: nop

        goto L_80334730;
    // 0x803346F4: nop

L_803346F8:
    // 0x803346F8: jal         0x80333BF4
    // 0x803346FC: nop

    func_80333BF4_unk_bin_13(rdram, ctx);
        goto after_25;
    // 0x803346FC: nop

    after_25:
    // 0x80334700: b           L_80334730
    // 0x80334704: nop

        goto L_80334730;
    // 0x80334704: nop

L_80334708:
    // 0x80334708: jal         0x80334060
    // 0x8033470C: nop

    func_80334060_unk_bin_13(rdram, ctx);
        goto after_26;
    // 0x8033470C: nop

    after_26:
    // 0x80334710: b           L_80334730
    // 0x80334714: nop

        goto L_80334730;
    // 0x80334714: nop

L_80334718:
    // 0x80334718: jal         0x8033420C
    // 0x8033471C: nop

    func_8033420C_unk_bin_13(rdram, ctx);
        goto after_27;
    // 0x8033471C: nop

    after_27:
    // 0x80334720: b           L_80334730
    // 0x80334724: nop

        goto L_80334730;
    // 0x80334724: nop

L_80334728:
    // 0x80334728: b           L_80334730
    // 0x8033472C: nop

        goto L_80334730;
    // 0x8033472C: nop

L_80334730:
    // 0x80334730: b           L_80334738
    // 0x80334734: nop

        goto L_80334738;
    // 0x80334734: nop

L_80334738:
    // 0x80334738: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033473C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334740: jr          $ra
    // 0x80334744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803304E0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803304E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803304E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803304E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803304EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803304F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803304F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803304F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803304FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330500: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330504: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330508: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033050C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330510: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330514: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330518: nop

    // 0x8033051C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330520: nop

    // 0x80330524: bne         $t1, $zero, L_8033057C
    if (ctx->r9 != 0) {
        // 0x80330528: nop
    
            goto L_8033057C;
    }
    // 0x80330528: nop

    // 0x8033052C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330530: nop

    // 0x80330534: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330538: nop

    // 0x8033053C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330540: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330544: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330548: nop

    // 0x8033054C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330550: nop

    // 0x80330554: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330558: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033055C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330560: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80330564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330568: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033056C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330570: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330574: jal         0x8001C0EC
    // 0x80330578: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330578: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_8033057C:
    // 0x8033057C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330584: jal         0x8001B4AC
    // 0x80330588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80330588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033058C: beq         $v0, $zero, L_8033068C
    if (ctx->r2 == 0) {
        // 0x80330590: nop
    
            goto L_8033068C;
    }
    // 0x80330590: nop

    // 0x80330594: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330598: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033059C: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x803305A0: nop

    // 0x803305A4: bne         $t9, $at, L_80330674
    if (ctx->r25 != ctx->r1) {
        // 0x803305A8: nop
    
            goto L_80330674;
    }
    // 0x803305A8: nop

    // 0x803305AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803305B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803305B4: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x803305B8: nop

    // 0x803305BC: bne         $t1, $at, L_80330618
    if (ctx->r9 != ctx->r1) {
        // 0x803305C0: nop
    
            goto L_80330618;
    }
    // 0x803305C0: nop

    // 0x803305C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803305CC: jal         0x8002A1FC
    // 0x803305D0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x803305D0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_2:
    // 0x803305D4: beq         $v0, $zero, L_803305F4
    if (ctx->r2 == 0) {
        // 0x803305D8: nop
    
            goto L_803305F4;
    }
    // 0x803305D8: nop

    // 0x803305DC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803305E0: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x803305E4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803305E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803305EC: b           L_8033060C
    // 0x803305F0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_8033060C;
    // 0x803305F0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803305F4:
    // 0x803305F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803305F8: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x803305FC: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80330600: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330604: nop

    // 0x80330608: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033060C:
    // 0x8033060C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330610: b           L_8033066C
    // 0x80330614: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
        goto L_8033066C;
    // 0x80330614: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
L_80330618:
    // 0x80330618: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033061C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330620: jal         0x8002A1FC
    // 0x80330624: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x80330624: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_3:
    // 0x80330628: beq         $v0, $zero, L_80330648
    if (ctx->r2 == 0) {
        // 0x8033062C: nop
    
            goto L_80330648;
    }
    // 0x8033062C: nop

    // 0x80330630: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330634: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80330638: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033063C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330640: b           L_80330660
    // 0x80330644: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_80330660;
    // 0x80330644: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330648:
    // 0x80330648: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033064C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80330650: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80330654: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330658: nop

    // 0x8033065C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80330660:
    // 0x80330660: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330664: nop

    // 0x80330668: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
L_8033066C:
    // 0x8033066C: b           L_8033068C
    // 0x80330670: nop

        goto L_8033068C;
    // 0x80330670: nop

L_80330674:
    // 0x80330674: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330678: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8033067C: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80330680: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330684: nop

    // 0x80330688: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_8033068C:
    // 0x8033068C: b           L_80330694
    // 0x80330690: nop

        goto L_80330694;
    // 0x80330690: nop

L_80330694:
    // 0x80330694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330698: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033069C: jr          $ra
    // 0x803306A0: nop

    return;
    // 0x803306A0: nop

;}
RECOMP_FUNC void func_80332918_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332918: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033291C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332920: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332924: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332928: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033292C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332930: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332934: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332938: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033293C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332940: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332944: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332948: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033294C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332950: nop

    // 0x80332954: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332958: nop

    // 0x8033295C: bne         $t1, $zero, L_80332A0C
    if (ctx->r9 != 0) {
        // 0x80332960: nop
    
            goto L_80332A0C;
    }
    // 0x80332960: nop

    // 0x80332964: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332968: nop

    // 0x8033296C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332970: nop

    // 0x80332974: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332978: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033297C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332980: nop

    // 0x80332984: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332988: nop

    // 0x8033298C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332990: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332994: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332998: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x8033299C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329A0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803329A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329A8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x803329AC: jal         0x8001C0EC
    // 0x803329B0: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803329B0: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x803329B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803329B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803329BC: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x803329C0: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x803329C4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803329C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803329CC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803329D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803329D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803329D8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803329DC: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x803329E0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803329E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803329E8: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x803329EC: nop

    // 0x803329F0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803329F4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803329F8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803329FC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332A00: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332A04: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332A08: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80332A0C:
    // 0x80332A0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A14: jal         0x8002A8B4
    // 0x80332A18: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80332A18: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x80332A1C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332A20: nop

    // 0x80332A24: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80332A28: nop

    // 0x80332A2C: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80332A30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A38: jal         0x8001B4AC
    // 0x80332A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332A40: beq         $v0, $zero, L_80332A60
    if (ctx->r2 == 0) {
        // 0x80332A44: nop
    
            goto L_80332A60;
    }
    // 0x80332A44: nop

    // 0x80332A48: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332A4C: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x80332A50: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80332A54: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332A58: nop

    // 0x80332A5C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80332A60:
    // 0x80332A60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332A64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A68: lh          $t8, 0xAC($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XAC);
    // 0x80332A6C: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80332A70: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80332A74: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332A78: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332A7C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332A80: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332A84: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332A88: swc1        $f6, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f6.u32l;
    // 0x80332A8C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332A90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A94: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80332A98: lwc1        $f8, 0x2C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80332A9C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332AA0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332AA4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332AA8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332AAC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332AB0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332AB4: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x80332AB8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332ABC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332AC0: lh          $t5, 0xAC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAC);
    // 0x80332AC4: lwc1        $f10, 0x1C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332AC8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332ACC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332AD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332AD4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332AD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332ADC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332AE0: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x80332AE4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332AE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332AEC: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x80332AF0: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80332AF4: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80332AF8: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80332AFC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332B00: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80332B04: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332B08: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332B0C: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
    // 0x80332B10: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332B14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B18: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x80332B1C: lwc1        $f18, 0x44($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80332B20: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332B24: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332B28: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332B2C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332B30: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332B34: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332B38: swc1        $f18, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f18.u32l;
    // 0x80332B3C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332B40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B44: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x80332B48: lwc1        $f4, 0x24($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80332B4C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80332B50: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332B54: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332B58: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332B5C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332B60: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332B64: swc1        $f4, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f4.u32l;
    // 0x80332B68: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332B6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B70: lh          $t9, 0xAA($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAA);
    // 0x80332B74: lwc1        $f6, 0x2C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80332B78: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332B7C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332B80: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332B84: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332B88: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332B8C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332B90: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80332B94: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332B98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B9C: lh          $t1, 0xAA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAA);
    // 0x80332BA0: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332BA4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332BA8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332BAC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332BB0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332BB4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332BB8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332BBC: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80332BC0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332BC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332BC8: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x80332BCC: lwc1        $f10, 0x3C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80332BD0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332BD4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332BD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332BDC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332BE0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332BE4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332BE8: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80332BEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332BF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332BF4: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x80332BF8: lwc1        $f16, 0x44($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80332BFC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332C00: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332C04: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332C08: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332C0C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332C10: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332C14: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80332C18: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332C1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C20: lh          $t8, 0xBC($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XBC);
    // 0x80332C24: lwc1        $f18, 0x24($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80332C28: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80332C2C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332C30: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332C34: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332C38: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332C3C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332C40: swc1        $f18, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f18.u32l;
    // 0x80332C44: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332C48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C4C: lh          $t4, 0xBC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBC);
    // 0x80332C50: lwc1        $f4, 0x2C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80332C54: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332C58: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332C5C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332C60: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332C64: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332C68: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332C6C: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x80332C70: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332C74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C78: lh          $t5, 0xBC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XBC);
    // 0x80332C7C: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332C80: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332C84: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332C88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332C8C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332C90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332C94: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332C98: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80332C9C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332CA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332CA4: lh          $t0, 0xBC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBC);
    // 0x80332CA8: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80332CAC: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80332CB0: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80332CB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332CB8: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80332CBC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332CC0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332CC4: swc1        $f8, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f8.u32l;
    // 0x80332CC8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332CCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332CD0: lh          $t3, 0xBC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBC);
    // 0x80332CD4: lwc1        $f10, 0x44($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80332CD8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332CDC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332CE0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332CE4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332CE8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332CEC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332CF0: swc1        $f10, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f10.u32l;
    // 0x80332CF4: b           L_80332CFC
    // 0x80332CF8: nop

        goto L_80332CFC;
    // 0x80332CF8: nop

L_80332CFC:
    // 0x80332CFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332D04: jr          $ra
    // 0x80332D08: nop

    return;
    // 0x80332D08: nop

;}
RECOMP_FUNC void func_80334910_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334910: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334914: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334918: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033491C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334920: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334924: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334928: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033492C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334930: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334934: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334938: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033493C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334940: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334944: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334948: nop

    // 0x8033494C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334950: nop

    // 0x80334954: bne         $t1, $zero, L_80334A10
    if (ctx->r9 != 0) {
        // 0x80334958: nop
    
            goto L_80334A10;
    }
    // 0x80334958: nop

    // 0x8033495C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334960: nop

    // 0x80334964: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334968: nop

    // 0x8033496C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334970: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334974: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334978: nop

    // 0x8033497C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334980: nop

    // 0x80334984: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334988: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033498C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334990: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x80334994: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334998: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033499C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803349A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803349A4: jal         0x8001C0EC
    // 0x803349A8: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803349A8: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
    // 0x803349AC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803349B0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803349B4: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803349B8: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x803349BC: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x803349C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803349C4: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803349C8: addiu       $a1, $a1, 0x7BCC
    ctx->r5 = ADD32(ctx->r5, 0X7BCC);
    // 0x803349CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803349D0: jal         0x80027464
    // 0x803349D4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x803349D4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x803349D8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803349DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803349E0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803349E4: addiu       $a3, $a3, -0x5A94
    ctx->r7 = ADD32(ctx->r7, -0X5A94);
    // 0x803349E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803349EC: jal         0x8001ABF4
    // 0x803349F0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803349F0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x803349F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803349F8: jal         0x80026F10
    // 0x803349FC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_3;
    // 0x803349FC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_3:
    // 0x80334A00: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80334A04: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80334A08: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80334A0C: sh          $t9, 0x131C($t0)
    MEM_H(0X131C, ctx->r8) = ctx->r25;
L_80334A10:
    // 0x80334A10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A18: jal         0x8001B4AC
    // 0x80334A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80334A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80334A20: beq         $v0, $zero, L_80334AA4
    if (ctx->r2 == 0) {
        // 0x80334A24: nop
    
            goto L_80334AA4;
    }
    // 0x80334A24: nop

    // 0x80334A28: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334A2C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80334A30: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80334A34: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334A38: nop

    // 0x80334A3C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80334A40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334A44: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80334A48: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80334A4C: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x80334A50: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x80334A54: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334A58: lwc1        $f10, 0x1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80334A5C: addiu       $a1, $a1, 0x7BF0
    ctx->r5 = ADD32(ctx->r5, 0X7BF0);
    // 0x80334A60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334A64: jal         0x80027464
    // 0x80334A68: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80334A68: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x80334A6C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80334A70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80334A74: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334A78: addiu       $a3, $a3, -0x5B60
    ctx->r7 = ADD32(ctx->r7, -0X5B60);
    // 0x80334A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334A80: jal         0x8001ABF4
    // 0x80334A84: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x80334A84: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x80334A88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80334A8C: jal         0x80026F10
    // 0x80334A90: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_7;
    // 0x80334A90: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_7:
    // 0x80334A94: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80334A98: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80334A9C: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80334AA0: sh          $t6, 0x130A($t5)
    MEM_H(0X130A, ctx->r13) = ctx->r14;
L_80334AA4:
    // 0x80334AA4: b           L_80334AAC
    // 0x80334AA8: nop

        goto L_80334AAC;
    // 0x80334AA8: nop

L_80334AAC:
    // 0x80334AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334AB4: jr          $ra
    // 0x80334AB8: nop

    return;
    // 0x80334AB8: nop

;}
RECOMP_FUNC void func_80336068_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336068: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033606C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336070: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336074: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336078: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033607C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336080: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336084: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336088: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033608C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336090: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336094: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336098: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033609C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803360A0: nop

    // 0x803360A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803360A8: nop

    // 0x803360AC: bne         $t1, $zero, L_8033611C
    if (ctx->r9 != 0) {
        // 0x803360B0: nop
    
            goto L_8033611C;
    }
    // 0x803360B0: nop

    // 0x803360B4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803360B8: nop

    // 0x803360BC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803360C0: nop

    // 0x803360C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803360C8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803360CC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803360D0: nop

    // 0x803360D4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803360D8: nop

    // 0x803360DC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803360E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803360E4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803360E8: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x803360EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803360F0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803360F4: addiu       $t9, $t9, -0x5BCC
    ctx->r25 = ADD32(ctx->r25, -0X5BCC);
    // 0x803360F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803360FC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80336100: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336104: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80336108: jal         0x8001C0EC
    // 0x8033610C: addiu       $a3, $zero, 0xD7
    ctx->r7 = ADD32(0, 0XD7);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033610C: addiu       $a3, $zero, 0xD7
    ctx->r7 = ADD32(0, 0XD7);
    after_0:
    // 0x80336110: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336114: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80336118: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
L_8033611C:
    // 0x8033611C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80336120: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80336124: lwc1        $f4, 0x129C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X129C);
    // 0x80336128: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033612C: nop

    // 0x80336130: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x80336134: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336138: nop

    // 0x8033613C: lwc1        $f6, 0x3C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80336140: nop

    // 0x80336144: swc1        $f6, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f6.u32l;
    // 0x80336148: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033614C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336150: jal         0x8001B4AC
    // 0x80336154: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80336154: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80336158: beq         $v0, $zero, L_803361A8
    if (ctx->r2 == 0) {
        // 0x8033615C: nop
    
            goto L_803361A8;
    }
    // 0x8033615C: nop

    // 0x80336160: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336164: nop

    // 0x80336168: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x8033616C: nop

    // 0x80336170: bne         $t5, $zero, L_80336190
    if (ctx->r13 != 0) {
        // 0x80336174: nop
    
            goto L_80336190;
    }
    // 0x80336174: nop

    // 0x80336178: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033617C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80336180: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80336184: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336188: b           L_803361A8
    // 0x8033618C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_803361A8;
    // 0x8033618C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80336190:
    // 0x80336190: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336194: nop

    // 0x80336198: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033619C: nop

    // 0x803361A0: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x803361A4: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_803361A8:
    // 0x803361A8: b           L_803361B0
    // 0x803361AC: nop

        goto L_803361B0;
    // 0x803361AC: nop

L_803361B0:
    // 0x803361B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803361B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803361B8: jr          $ra
    // 0x803361BC: nop

    return;
    // 0x803361BC: nop

;}
RECOMP_FUNC void func_803362A8_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803362A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803362AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803362B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803362B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803362B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803362BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803362C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803362C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803362C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803362CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803362D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803362D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803362D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803362DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803362E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803362E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803362E8: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x803362EC: nop

    // 0x803362F0: beq         $s0, $at, L_80336324
    if (ctx->r16 == ctx->r1) {
        // 0x803362F4: nop
    
            goto L_80336324;
    }
    // 0x803362F4: nop

    // 0x803362F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803362FC: beq         $s0, $at, L_80336334
    if (ctx->r16 == ctx->r1) {
        // 0x80336300: nop
    
            goto L_80336334;
    }
    // 0x80336300: nop

    // 0x80336304: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80336308: beq         $s0, $at, L_80336344
    if (ctx->r16 == ctx->r1) {
        // 0x8033630C: nop
    
            goto L_80336344;
    }
    // 0x8033630C: nop

    // 0x80336310: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80336314: beq         $s0, $at, L_80336354
    if (ctx->r16 == ctx->r1) {
        // 0x80336318: nop
    
            goto L_80336354;
    }
    // 0x80336318: nop

    // 0x8033631C: b           L_80336364
    // 0x80336320: nop

        goto L_80336364;
    // 0x80336320: nop

L_80336324:
    // 0x80336324: jal         0x80335E88
    // 0x80336328: nop

    func_80335E88_unk_bin_13(rdram, ctx);
        goto after_0;
    // 0x80336328: nop

    after_0:
    // 0x8033632C: b           L_8033636C
    // 0x80336330: nop

        goto L_8033636C;
    // 0x80336330: nop

L_80336334:
    // 0x80336334: jal         0x80335F78
    // 0x80336338: nop

    func_80335F78_unk_bin_13(rdram, ctx);
        goto after_1;
    // 0x80336338: nop

    after_1:
    // 0x8033633C: b           L_8033636C
    // 0x80336340: nop

        goto L_8033636C;
    // 0x80336340: nop

L_80336344:
    // 0x80336344: jal         0x80336068
    // 0x80336348: nop

    func_80336068_unk_bin_13(rdram, ctx);
        goto after_2;
    // 0x80336348: nop

    after_2:
    // 0x8033634C: b           L_8033636C
    // 0x80336350: nop

        goto L_8033636C;
    // 0x80336350: nop

L_80336354:
    // 0x80336354: jal         0x803361C0
    // 0x80336358: nop

    func_803361C0_unk_bin_13(rdram, ctx);
        goto after_3;
    // 0x80336358: nop

    after_3:
    // 0x8033635C: b           L_8033636C
    // 0x80336360: nop

        goto L_8033636C;
    // 0x80336360: nop

L_80336364:
    // 0x80336364: b           L_8033636C
    // 0x80336368: nop

        goto L_8033636C;
    // 0x80336368: nop

L_8033636C:
    // 0x8033636C: b           L_80336374
    // 0x80336370: nop

        goto L_80336374;
    // 0x80336370: nop

L_80336374:
    // 0x80336374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336378: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033637C: jr          $ra
    // 0x80336380: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80336380: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80337AE4_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337AE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337AE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337AEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80337AF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337AF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337AF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337AFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337B00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337B04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337B08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337B0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337B10: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337B14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337B18: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337B1C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337B20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80337B24: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80337B28: nop

    // 0x80337B2C: beq         $s0, $at, L_80337B60
    if (ctx->r16 == ctx->r1) {
        // 0x80337B30: nop
    
            goto L_80337B60;
    }
    // 0x80337B30: nop

    // 0x80337B34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80337B38: beq         $s0, $at, L_80337B70
    if (ctx->r16 == ctx->r1) {
        // 0x80337B3C: nop
    
            goto L_80337B70;
    }
    // 0x80337B3C: nop

    // 0x80337B40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80337B44: beq         $s0, $at, L_80337B80
    if (ctx->r16 == ctx->r1) {
        // 0x80337B48: nop
    
            goto L_80337B80;
    }
    // 0x80337B48: nop

    // 0x80337B4C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80337B50: beq         $s0, $at, L_80337B90
    if (ctx->r16 == ctx->r1) {
        // 0x80337B54: nop
    
            goto L_80337B90;
    }
    // 0x80337B54: nop

    // 0x80337B58: b           L_80337BA0
    // 0x80337B5C: nop

        goto L_80337BA0;
    // 0x80337B5C: nop

L_80337B60:
    // 0x80337B60: jal         0x80337838
    // 0x80337B64: nop

    func_80337838_unk_bin_13(rdram, ctx);
        goto after_0;
    // 0x80337B64: nop

    after_0:
    // 0x80337B68: b           L_80337BA8
    // 0x80337B6C: nop

        goto L_80337BA8;
    // 0x80337B6C: nop

L_80337B70:
    // 0x80337B70: jal         0x8033791C
    // 0x80337B74: nop

    func_8033791C_unk_bin_13(rdram, ctx);
        goto after_1;
    // 0x80337B74: nop

    after_1:
    // 0x80337B78: b           L_80337BA8
    // 0x80337B7C: nop

        goto L_80337BA8;
    // 0x80337B7C: nop

L_80337B80:
    // 0x80337B80: jal         0x803379D0
    // 0x80337B84: nop

    func_803379D0_unk_bin_13(rdram, ctx);
        goto after_2;
    // 0x80337B84: nop

    after_2:
    // 0x80337B88: b           L_80337BA8
    // 0x80337B8C: nop

        goto L_80337BA8;
    // 0x80337B8C: nop

L_80337B90:
    // 0x80337B90: jal         0x80337A00
    // 0x80337B94: nop

    func_80337A00_unk_bin_13(rdram, ctx);
        goto after_3;
    // 0x80337B94: nop

    after_3:
    // 0x80337B98: b           L_80337BA8
    // 0x80337B9C: nop

        goto L_80337BA8;
    // 0x80337B9C: nop

L_80337BA0:
    // 0x80337BA0: b           L_80337BA8
    // 0x80337BA4: nop

        goto L_80337BA8;
    // 0x80337BA4: nop

L_80337BA8:
    // 0x80337BA8: b           L_80337BB0
    // 0x80337BAC: nop

        goto L_80337BB0;
    // 0x80337BAC: nop

L_80337BB0:
    // 0x80337BB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337BB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80337BB8: jr          $ra
    // 0x80337BBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80337BBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80334060_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334060: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334064: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334068: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033406C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334070: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334074: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033407C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334080: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334084: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334088: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033408C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334090: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334094: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334098: nop

    // 0x8033409C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803340A0: nop

    // 0x803340A4: bne         $t1, $zero, L_80334108
    if (ctx->r9 != 0) {
        // 0x803340A8: nop
    
            goto L_80334108;
    }
    // 0x803340A8: nop

    // 0x803340AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803340B0: nop

    // 0x803340B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803340B8: nop

    // 0x803340BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803340C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803340C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803340C8: nop

    // 0x803340CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803340D0: nop

    // 0x803340D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803340D8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803340DC: nop

    // 0x803340E0: sh          $zero, 0xBA($t7)
    MEM_H(0XBA, ctx->r15) = 0;
    // 0x803340E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803340E8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803340EC: addiu       $t8, $t8, -0x5DF0
    ctx->r24 = ADD32(ctx->r24, -0X5DF0);
    // 0x803340F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803340F4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803340F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803340FC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80334100: jal         0x8001C0EC
    // 0x80334104: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334104: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_80334108:
    // 0x80334108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033410C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334110: jal         0x8001B62C
    // 0x80334114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80334114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334118: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x8033411C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334120: nop

    // 0x80334124: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80334128: nop

    // 0x8033412C: bc1f        L_80334150
    if (!c1cs) {
        // 0x80334130: nop
    
            goto L_80334150;
    }
    // 0x80334130: nop

    // 0x80334134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033413C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334140: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x80334144: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80334148: jal         0x800175F0
    // 0x8033414C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x8033414C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_80334150:
    // 0x80334150: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334154: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334158: jal         0x8001B4AC
    // 0x8033415C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8033415C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80334160: beq         $v0, $zero, L_803341F4
    if (ctx->r2 == 0) {
        // 0x80334164: nop
    
            goto L_803341F4;
    }
    // 0x80334164: nop

    // 0x80334168: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033416C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334170: lh          $t0, 0xB8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB8);
    // 0x80334174: nop

    // 0x80334178: bne         $t0, $at, L_803341A4
    if (ctx->r8 != ctx->r1) {
        // 0x8033417C: nop
    
            goto L_803341A4;
    }
    // 0x8033417C: nop

    // 0x80334180: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334184: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x80334188: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033418C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334190: nop

    // 0x80334194: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80334198: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033419C: b           L_803341F4
    // 0x803341A0: sh          $zero, 0xB8($t2)
    MEM_H(0XB8, ctx->r10) = 0;
        goto L_803341F4;
    // 0x803341A0: sh          $zero, 0xB8($t2)
    MEM_H(0XB8, ctx->r10) = 0;
L_803341A4:
    // 0x803341A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803341A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803341AC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803341B0: addiu       $a1, $a1, 0x7C20
    ctx->r5 = ADD32(ctx->r5, 0X7C20);
    // 0x803341B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803341B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803341BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803341C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803341C4: jal         0x80027464
    // 0x803341C8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x803341C8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x803341CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803341D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803341D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803341D8: sh          $t6, 0xBA($t5)
    MEM_H(0XBA, ctx->r13) = ctx->r14;
    // 0x803341DC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803341E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803341E4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803341E8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803341EC: nop

    // 0x803341F0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803341F4:
    // 0x803341F4: b           L_803341FC
    // 0x803341F8: nop

        goto L_803341FC;
    // 0x803341F8: nop

L_803341FC:
    // 0x803341FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334200: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334204: jr          $ra
    // 0x80334208: nop

    return;
    // 0x80334208: nop

;}
RECOMP_FUNC void func_803367D0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803367D0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803367D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803367D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803367DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803367E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803367E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803367E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803367EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803367F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803367F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803367F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803367FC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80336800: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80336804: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80336808: nop

    // 0x8033680C: bne         $t0, $zero, L_8033681C
    if (ctx->r8 != 0) {
        // 0x80336810: nop
    
            goto L_8033681C;
    }
    // 0x80336810: nop

    // 0x80336814: b           L_8033681C
    // 0x80336818: nop

        goto L_8033681C;
    // 0x80336818: nop

L_8033681C:
    // 0x8033681C: b           L_80336824
    // 0x80336820: nop

        goto L_80336824;
    // 0x80336820: nop

L_80336824:
    // 0x80336824: jr          $ra
    // 0x80336828: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80336828: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80331184_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331184: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331188: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033118C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331190: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331194: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331198: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033119C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803311A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803311AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803311B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803311B4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803311B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803311BC: nop

    // 0x803311C0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803311C4: nop

    // 0x803311C8: bne         $t1, $zero, L_80331220
    if (ctx->r9 != 0) {
        // 0x803311CC: nop
    
            goto L_80331220;
    }
    // 0x803311CC: nop

    // 0x803311D0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803311D4: nop

    // 0x803311D8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803311DC: nop

    // 0x803311E0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803311E4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803311E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803311EC: nop

    // 0x803311F0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803311F4: nop

    // 0x803311F8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803311FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331200: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331204: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80331208: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033120C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331214: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80331218: jal         0x8001C0EC
    // 0x8033121C: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033121C: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_80331220:
    // 0x80331220: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331224: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331228: jal         0x8002A8B4
    // 0x8033122C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x8033122C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x80331230: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331234: nop

    // 0x80331238: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033123C: nop

    // 0x80331240: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331244: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331248: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033124C: jal         0x8001B4AC
    // 0x80331250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331254: beq         $v0, $zero, L_80331274
    if (ctx->r2 == 0) {
        // 0x80331258: nop
    
            goto L_80331274;
    }
    // 0x80331258: nop

    // 0x8033125C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331260: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80331264: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331268: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033126C: nop

    // 0x80331270: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331274:
    // 0x80331274: b           L_8033127C
    // 0x80331278: nop

        goto L_8033127C;
    // 0x80331278: nop

L_8033127C:
    // 0x8033127C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331280: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331284: jr          $ra
    // 0x80331288: nop

    return;
    // 0x80331288: nop

;}
RECOMP_FUNC void func_80337228_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337228: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033722C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337230: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80337234: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337238: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033723C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337240: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337244: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337248: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033724C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337250: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337254: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337258: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033725C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337260: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337264: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80337268: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8033726C: nop

    // 0x80337270: beq         $s0, $at, L_80337298
    if (ctx->r16 == ctx->r1) {
        // 0x80337274: nop
    
            goto L_80337298;
    }
    // 0x80337274: nop

    // 0x80337278: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033727C: beq         $s0, $at, L_803372A8
    if (ctx->r16 == ctx->r1) {
        // 0x80337280: nop
    
            goto L_803372A8;
    }
    // 0x80337280: nop

    // 0x80337284: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80337288: beq         $s0, $at, L_803372B8
    if (ctx->r16 == ctx->r1) {
        // 0x8033728C: nop
    
            goto L_803372B8;
    }
    // 0x8033728C: nop

    // 0x80337290: b           L_803372C8
    // 0x80337294: nop

        goto L_803372C8;
    // 0x80337294: nop

L_80337298:
    // 0x80337298: jal         0x80336D74
    // 0x8033729C: nop

    func_80336D74_unk_bin_13(rdram, ctx);
        goto after_0;
    // 0x8033729C: nop

    after_0:
    // 0x803372A0: b           L_803372D0
    // 0x803372A4: nop

        goto L_803372D0;
    // 0x803372A4: nop

L_803372A8:
    // 0x803372A8: jal         0x80336F90
    // 0x803372AC: nop

    func_80336F90_unk_bin_13(rdram, ctx);
        goto after_1;
    // 0x803372AC: nop

    after_1:
    // 0x803372B0: b           L_803372D0
    // 0x803372B4: nop

        goto L_803372D0;
    // 0x803372B4: nop

L_803372B8:
    // 0x803372B8: jal         0x80337160
    // 0x803372BC: nop

    func_80337160_unk_bin_13(rdram, ctx);
        goto after_2;
    // 0x803372BC: nop

    after_2:
    // 0x803372C0: b           L_803372D0
    // 0x803372C4: nop

        goto L_803372D0;
    // 0x803372C4: nop

L_803372C8:
    // 0x803372C8: b           L_803372D0
    // 0x803372CC: nop

        goto L_803372D0;
    // 0x803372CC: nop

L_803372D0:
    // 0x803372D0: b           L_803372D8
    // 0x803372D4: nop

        goto L_803372D8;
    // 0x803372D4: nop

L_803372D8:
    // 0x803372D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803372DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803372E0: jr          $ra
    // 0x803372E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803372E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80331828_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331828: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033182C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331830: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331834: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331838: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033183C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331840: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331844: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331848: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033184C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331850: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331854: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331858: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033185C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331860: nop

    // 0x80331864: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331868: nop

    // 0x8033186C: bne         $t1, $zero, L_803318E4
    if (ctx->r9 != 0) {
        // 0x80331870: nop
    
            goto L_803318E4;
    }
    // 0x80331870: nop

    // 0x80331874: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331878: nop

    // 0x8033187C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331880: nop

    // 0x80331884: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331888: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033188C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331890: nop

    // 0x80331894: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331898: nop

    // 0x8033189C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803318A0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803318A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803318A8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803318AC: nop

    // 0x803318B0: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x803318B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803318B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803318BC: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x803318C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803318C4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803318C8: addiu       $t0, $t0, -0x5DF0
    ctx->r8 = ADD32(ctx->r8, -0X5DF0);
    // 0x803318CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803318D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803318D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803318D8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803318DC: jal         0x8001C0EC
    // 0x803318E0: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803318E0: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_803318E4:
    // 0x803318E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803318E8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803318EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803318F0: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803318F4: jal         0x80015538
    // 0x803318F8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803318F8: nop

    after_1:
    // 0x803318FC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331900: nop

    // 0x80331904: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x80331908: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033190C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331910: jal         0x80029C40
    // 0x80331914: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80331914: nop

    after_2:
    // 0x80331918: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033191C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331920: jal         0x8001B4AC
    // 0x80331924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80331924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331928: beq         $v0, $zero, L_803319B8
    if (ctx->r2 == 0) {
        // 0x8033192C: nop
    
            goto L_803319B8;
    }
    // 0x8033192C: nop

    // 0x80331930: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331934: nop

    // 0x80331938: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x8033193C: nop

    // 0x80331940: bne         $t2, $zero, L_80331994
    if (ctx->r10 != 0) {
        // 0x80331944: nop
    
            goto L_80331994;
    }
    // 0x80331944: nop

    // 0x80331948: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033194C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80331950: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80331954: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331958: nop

    // 0x8033195C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80331960: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331964: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331968: nop

    // 0x8033196C: swc1        $f6, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f6.u32l;
    // 0x80331970: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331974: nop

    // 0x80331978: lwc1        $f8, 0x2C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8033197C: nop

    // 0x80331980: swc1        $f8, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f8.u32l;
    // 0x80331984: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331988: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033198C: b           L_803319B8
    // 0x80331990: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
        goto L_803319B8;
    // 0x80331990: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
L_80331994:
    // 0x80331994: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331998: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x8033199C: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803319A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803319A4: nop

    // 0x803319A8: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x803319AC: nop

    // 0x803319B0: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x803319B4: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_803319B8:
    // 0x803319B8: b           L_803319C0
    // 0x803319BC: nop

        goto L_803319C0;
    // 0x803319BC: nop

L_803319C0:
    // 0x803319C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803319C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803319C8: jr          $ra
    // 0x803319CC: nop

    return;
    // 0x803319CC: nop

;}
RECOMP_FUNC void func_80334B94_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334B94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334B98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334B9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334BA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334BA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334BA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334BAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334BB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334BB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334BB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334BBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334BC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334BC4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334BC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334BCC: nop

    // 0x80334BD0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334BD4: nop

    // 0x80334BD8: bne         $t1, $zero, L_80334C30
    if (ctx->r9 != 0) {
        // 0x80334BDC: nop
    
            goto L_80334C30;
    }
    // 0x80334BDC: nop

    // 0x80334BE0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334BE4: nop

    // 0x80334BE8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334BEC: nop

    // 0x80334BF0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334BF4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334BF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334BFC: nop

    // 0x80334C00: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334C04: nop

    // 0x80334C08: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334C0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334C10: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334C14: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x80334C18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334C1C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334C20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334C24: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80334C28: jal         0x8001C0EC
    // 0x80334C2C: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334C2C: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_80334C30:
    // 0x80334C30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334C34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334C38: jal         0x8001B4AC
    // 0x80334C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334C40: beq         $v0, $zero, L_80334CAC
    if (ctx->r2 == 0) {
        // 0x80334C44: nop
    
            goto L_80334CAC;
    }
    // 0x80334C44: nop

    // 0x80334C48: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80334C4C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80334C50: lh          $t0, 0x131C($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X131C);
    // 0x80334C54: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80334C58: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334C5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334C60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334C64: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334C68: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334C6C: addu        $t3, $t1, $t9
    ctx->r11 = ADD32(ctx->r9, ctx->r25);
    // 0x80334C70: sh          $t8, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r24;
    // 0x80334C74: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80334C78: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80334C7C: lh          $t2, 0x131C($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X131C);
    // 0x80334C80: nop

    // 0x80334C84: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80334C88: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334C8C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334C90: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334C94: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334C98: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x80334C9C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80334CA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334CA4: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80334CA8: sh          $t7, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r15;
L_80334CAC:
    // 0x80334CAC: b           L_80334CB4
    // 0x80334CB0: nop

        goto L_80334CB4;
    // 0x80334CB0: nop

L_80334CB4:
    // 0x80334CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334CB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334CBC: jr          $ra
    // 0x80334CC0: nop

    return;
    // 0x80334CC0: nop

;}
RECOMP_FUNC void func_803361C0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803361C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803361C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803361C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803361CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803361D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803361D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803361D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803361DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803361E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803361E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803361E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803361EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803361F0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803361F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803361F8: nop

    // 0x803361FC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336200: nop

    // 0x80336204: bne         $t1, $zero, L_80336268
    if (ctx->r9 != 0) {
        // 0x80336208: nop
    
            goto L_80336268;
    }
    // 0x80336208: nop

    // 0x8033620C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336210: nop

    // 0x80336214: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336218: nop

    // 0x8033621C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336220: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336224: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336228: nop

    // 0x8033622C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336230: nop

    // 0x80336234: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336238: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033623C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336240: addiu       $t7, $t7, -0x5BCC
    ctx->r15 = ADD32(ctx->r15, -0X5BCC);
    // 0x80336244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336248: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033624C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336250: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80336254: jal         0x8001C0EC
    // 0x80336258: addiu       $a3, $zero, 0xD7
    ctx->r7 = ADD32(0, 0XD7);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336258: addiu       $a3, $zero, 0xD7
    ctx->r7 = ADD32(0, 0XD7);
    after_0:
    // 0x8033625C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336260: nop

    // 0x80336264: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
L_80336268:
    // 0x80336268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033626C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336270: jal         0x8001B4AC
    // 0x80336274: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80336274: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80336278: beq         $v0, $zero, L_80336290
    if (ctx->r2 == 0) {
        // 0x8033627C: nop
    
            goto L_80336290;
    }
    // 0x8033627C: nop

    // 0x80336280: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336284: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336288: jal         0x8002B114
    // 0x8033628C: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033628C: nop

    after_2:
L_80336290:
    // 0x80336290: b           L_80336298
    // 0x80336294: nop

        goto L_80336298;
    // 0x80336294: nop

L_80336298:
    // 0x80336298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033629C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803362A0: jr          $ra
    // 0x803362A4: nop

    return;
    // 0x803362A4: nop

;}
RECOMP_FUNC void func_803375B0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803375B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803375B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803375B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803375BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803375C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803375C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803375C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803375CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803375D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803375D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803375D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803375DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803375E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803375E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803375E8: nop

    // 0x803375EC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803375F0: nop

    // 0x803375F4: bne         $t1, $zero, L_8033764C
    if (ctx->r9 != 0) {
        // 0x803375F8: nop
    
            goto L_8033764C;
    }
    // 0x803375F8: nop

    // 0x803375FC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337600: nop

    // 0x80337604: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337608: nop

    // 0x8033760C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337610: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337614: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337618: nop

    // 0x8033761C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337620: nop

    // 0x80337624: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033762C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337630: addiu       $t7, $t7, -0x5B9C
    ctx->r15 = ADD32(ctx->r15, -0X5B9C);
    // 0x80337634: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337638: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033763C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80337640: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80337644: jal         0x8001C0EC
    // 0x80337648: addiu       $a3, $zero, 0xD9
    ctx->r7 = ADD32(0, 0XD9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337648: addiu       $a3, $zero, 0xD9
    ctx->r7 = ADD32(0, 0XD9);
    after_0:
L_8033764C:
    // 0x8033764C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337650: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337654: jal         0x8001B4AC
    // 0x80337658: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337658: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033765C: beq         $v0, $zero, L_80337674
    if (ctx->r2 == 0) {
        // 0x80337660: nop
    
            goto L_80337674;
    }
    // 0x80337660: nop

    // 0x80337664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033766C: jal         0x8002B114
    // 0x80337670: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80337670: nop

    after_2:
L_80337674:
    // 0x80337674: b           L_8033767C
    // 0x80337678: nop

        goto L_8033767C;
    // 0x80337678: nop

L_8033767C:
    // 0x8033767C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337680: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337684: jr          $ra
    // 0x80337688: nop

    return;
    // 0x80337688: nop

;}
RECOMP_FUNC void func_80335484_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335484: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80335488: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033548C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335490: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335494: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335498: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033549C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803354A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803354A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803354A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803354AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803354B0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803354B4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803354B8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803354BC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803354C0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803354C4: nop

    // 0x803354C8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803354CC: b           L_803354D4
    // 0x803354D0: nop

        goto L_803354D4;
    // 0x803354D0: nop

L_803354D4:
    // 0x803354D4: jr          $ra
    // 0x803354D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803354D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80330FE8_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330FE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330FEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330FF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330FF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330FF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330FFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331000: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331004: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331008: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033100C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331010: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331014: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331018: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033101C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331020: nop

    // 0x80331024: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331028: nop

    // 0x8033102C: bne         $t1, $zero, L_8033110C
    if (ctx->r9 != 0) {
        // 0x80331030: nop
    
            goto L_8033110C;
    }
    // 0x80331030: nop

    // 0x80331034: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331038: nop

    // 0x8033103C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331040: nop

    // 0x80331044: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331048: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033104C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331050: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331054: nop

    // 0x80331058: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x8033105C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331060: nop

    // 0x80331064: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80331068: nop

    // 0x8033106C: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80331070: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331074: nop

    // 0x80331078: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x8033107C: nop

    // 0x80331080: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x80331084: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331088: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033108C: sh          $t9, 0xAE($t0)
    MEM_H(0XAE, ctx->r8) = ctx->r25;
    // 0x80331090: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331094: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80331098: sh          $t1, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r9;
    // 0x8033109C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310A0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803310A4: addiu       $t4, $t4, -0x5DF0
    ctx->r12 = ADD32(ctx->r12, -0X5DF0);
    // 0x803310A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310AC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803310B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803310B4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803310B8: jal         0x8001C0EC
    // 0x803310BC: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803310BC: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x803310C0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803310C4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803310C8: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803310CC: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x803310D0: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x803310D4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803310D8: lwc1        $f10, 0x1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803310DC: addiu       $a1, $a1, 0x7BC0
    ctx->r5 = ADD32(ctx->r5, 0X7BC0);
    // 0x803310E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803310E4: jal         0x80027464
    // 0x803310E8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x803310E8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x803310EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803310F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803310F4: jal         0x80026F10
    // 0x803310F8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_2;
    // 0x803310F8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_2:
    // 0x803310FC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80331100: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331104: nop

    // 0x80331108: sh          $t5, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r13;
L_8033110C:
    // 0x8033110C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331110: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331114: jal         0x8001B4AC
    // 0x80331118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80331118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033111C: beq         $v0, $zero, L_8033116C
    if (ctx->r2 == 0) {
        // 0x80331120: nop
    
            goto L_8033116C;
    }
    // 0x80331120: nop

    // 0x80331124: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331128: nop

    // 0x8033112C: lh          $t7, 0xA6($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XA6);
    // 0x80331130: nop

    // 0x80331134: bne         $t7, $zero, L_80331154
    if (ctx->r15 != 0) {
        // 0x80331138: nop
    
            goto L_80331154;
    }
    // 0x80331138: nop

    // 0x8033113C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331140: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80331144: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331148: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033114C: b           L_8033116C
    // 0x80331150: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_8033116C;
    // 0x80331150: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331154:
    // 0x80331154: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331158: nop

    // 0x8033115C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80331160: nop

    // 0x80331164: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80331168: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_8033116C:
    // 0x8033116C: b           L_80331174
    // 0x80331170: nop

        goto L_80331174;
    // 0x80331170: nop

L_80331174:
    // 0x80331174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331178: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033117C: jr          $ra
    // 0x80331180: nop

    return;
    // 0x80331180: nop

;}
RECOMP_FUNC void func_803363E0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803363E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803363E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803363E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803363EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803363F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803363F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803363F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336404: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336408: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033640C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336410: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336414: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336418: nop

    // 0x8033641C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336420: nop

    // 0x80336424: bne         $t1, $zero, L_80336488
    if (ctx->r9 != 0) {
        // 0x80336428: nop
    
            goto L_80336488;
    }
    // 0x80336428: nop

    // 0x8033642C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336430: nop

    // 0x80336434: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336438: nop

    // 0x8033643C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336440: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336444: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336448: nop

    // 0x8033644C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336450: nop

    // 0x80336454: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336458: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033645C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336460: addiu       $t7, $t7, -0x5BBC
    ctx->r15 = ADD32(ctx->r15, -0X5BBC);
    // 0x80336464: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336468: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033646C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80336474: jal         0x8001C0EC
    // 0x80336478: addiu       $a3, $zero, 0xDA
    ctx->r7 = ADD32(0, 0XDA);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336478: addiu       $a3, $zero, 0xDA
    ctx->r7 = ADD32(0, 0XDA);
    after_0:
    // 0x8033647C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336480: nop

    // 0x80336484: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
L_80336488:
    // 0x80336488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033648C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336490: jal         0x8001B4AC
    // 0x80336494: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80336494: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80336498: beq         $v0, $zero, L_803364B8
    if (ctx->r2 == 0) {
        // 0x8033649C: nop
    
            goto L_803364B8;
    }
    // 0x8033649C: nop

    // 0x803364A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803364A4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803364A8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803364AC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803364B0: nop

    // 0x803364B4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803364B8:
    // 0x803364B8: b           L_803364C0
    // 0x803364BC: nop

        goto L_803364C0;
    // 0x803364BC: nop

L_803364C0:
    // 0x803364C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803364C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803364C8: jr          $ra
    // 0x803364CC: nop

    return;
    // 0x803364CC: nop

;}
RECOMP_FUNC void func_80333338_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333338: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033333C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333340: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333344: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333348: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033334C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333350: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333354: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333358: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033335C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333360: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333364: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333368: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033336C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333370: nop

    // 0x80333374: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333378: nop

    // 0x8033337C: bne         $t1, $zero, L_80333450
    if (ctx->r9 != 0) {
        // 0x80333380: nop
    
            goto L_80333450;
    }
    // 0x80333380: nop

    // 0x80333384: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333388: nop

    // 0x8033338C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333390: nop

    // 0x80333394: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333398: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033339C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803333A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803333A4: nop

    // 0x803333A8: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x803333AC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803333B0: nop

    // 0x803333B4: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803333B8: nop

    // 0x803333BC: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x803333C0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803333C4: nop

    // 0x803333C8: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x803333CC: nop

    // 0x803333D0: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x803333D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333D8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803333DC: addiu       $t9, $t9, -0x5DF0
    ctx->r25 = ADD32(ctx->r25, -0X5DF0);
    // 0x803333E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803333E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803333EC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x803333F0: jal         0x8001C0EC
    // 0x803333F4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803333F4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x803333F8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803333FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333400: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x80333404: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x80333408: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033340C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333410: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333414: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333418: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033341C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333420: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80333424: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333428: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033342C: lh          $t5, 0xAC($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAC);
    // 0x80333430: nop

    // 0x80333434: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80333438: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033343C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333440: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80333444: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333448: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033344C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80333450:
    // 0x80333450: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333454: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333458: jal         0x8001B4AC
    // 0x8033345C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033345C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333460: beq         $v0, $zero, L_8033348C
    if (ctx->r2 == 0) {
        // 0x80333464: nop
    
            goto L_8033348C;
    }
    // 0x80333464: nop

    // 0x80333468: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033346C: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80333470: sh          $t8, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r24;
    // 0x80333474: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333478: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033347C: sh          $t9, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r25;
    // 0x80333480: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333484: nop

    // 0x80333488: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033348C:
    // 0x8033348C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333490: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333494: lh          $t4, 0xAC($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XAC);
    // 0x80333498: lwc1        $f8, 0x24($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8033349C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803334A0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803334A4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803334A8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803334AC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803334B0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803334B4: swc1        $f8, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f8.u32l;
    // 0x803334B8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803334BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803334C0: lh          $t6, 0xAC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAC);
    // 0x803334C4: lwc1        $f10, 0x2C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x803334C8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803334CC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803334D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803334D4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803334D8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803334DC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803334E0: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x803334E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803334E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803334EC: lh          $t9, 0xAC($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAC);
    // 0x803334F0: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803334F4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x803334F8: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803334FC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333500: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80333504: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333508: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033350C: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x80333510: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333514: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333518: lh          $t0, 0xAC($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XAC);
    // 0x8033351C: lwc1        $f18, 0x3C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80333520: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x80333524: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80333528: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033352C: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80333530: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333534: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333538: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
    // 0x8033353C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333540: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333544: lh          $t5, 0xAC($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAC);
    // 0x80333548: lwc1        $f4, 0x44($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8033354C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80333550: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80333554: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333558: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033355C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333560: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333564: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x80333568: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033356C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333570: lh          $t7, 0xAA($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XAA);
    // 0x80333574: lwc1        $f6, 0x24($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X24);
    // 0x80333578: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8033357C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333580: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333584: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333588: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033358C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333590: swc1        $f6, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f6.u32l;
    // 0x80333594: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333598: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033359C: lh          $t3, 0xAA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAA);
    // 0x803335A0: lwc1        $f8, 0x2C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x803335A4: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x803335A8: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x803335AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803335B0: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x803335B4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803335B8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803335BC: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x803335C0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803335C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803335C8: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x803335CC: lwc1        $f10, 0x1C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803335D0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x803335D4: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x803335D8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803335DC: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x803335E0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803335E4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803335E8: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x803335EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803335F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803335F4: lh          $t8, 0xAA($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XAA);
    // 0x803335F8: lwc1        $f16, 0x3C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803335FC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80333600: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333604: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333608: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8033360C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333610: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333614: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
    // 0x80333618: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033361C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333620: lh          $t1, 0xAA($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XAA);
    // 0x80333624: lwc1        $f18, 0x44($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80333628: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033362C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333630: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333634: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333638: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033363C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333640: swc1        $f18, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f18.u32l;
    // 0x80333644: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333648: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033364C: lh          $t4, 0xBC($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XBC);
    // 0x80333650: lwc1        $f4, 0x24($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80333654: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333658: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033365C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333660: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333664: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333668: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033366C: swc1        $f4, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f4.u32l;
    // 0x80333670: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333674: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333678: lh          $t6, 0xBC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XBC);
    // 0x8033367C: lwc1        $f6, 0x2C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80333680: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80333684: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333688: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033368C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333690: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333694: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333698: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x8033369C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803336A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803336A4: lh          $t9, 0xBC($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XBC);
    // 0x803336A8: lwc1        $f8, 0x1C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803336AC: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x803336B0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803336B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803336B8: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803336BC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803336C0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803336C4: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x803336C8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803336CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803336D0: lh          $t0, 0xBC($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XBC);
    // 0x803336D4: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x803336D8: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x803336DC: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x803336E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803336E4: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x803336E8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803336EC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803336F0: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x803336F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803336F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803336FC: lh          $t5, 0xBC($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XBC);
    // 0x80333700: lwc1        $f16, 0x44($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80333704: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80333708: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033370C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333710: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80333714: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333718: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033371C: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80333720: b           L_80333728
    // 0x80333724: nop

        goto L_80333728;
    // 0x80333724: nop

L_80333728:
    // 0x80333728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033372C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333730: jr          $ra
    // 0x80333734: nop

    return;
    // 0x80333734: nop

;}
RECOMP_FUNC void func_80335034_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335034: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033503C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335040: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335044: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335048: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033504C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335050: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335054: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335058: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033505C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335060: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335064: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335068: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033506C: nop

    // 0x80335070: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335074: nop

    // 0x80335078: bne         $t1, $zero, L_803350D0
    if (ctx->r9 != 0) {
        // 0x8033507C: nop
    
            goto L_803350D0;
    }
    // 0x8033507C: nop

    // 0x80335080: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335084: nop

    // 0x80335088: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033508C: nop

    // 0x80335090: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335094: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335098: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033509C: nop

    // 0x803350A0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803350A4: nop

    // 0x803350A8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803350AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803350B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803350B4: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x803350B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803350BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803350C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803350C4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x803350C8: jal         0x8001C0EC
    // 0x803350CC: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803350CC: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_803350D0:
    // 0x803350D0: b           L_803350D8
    // 0x803350D4: nop

        goto L_803350D8;
    // 0x803350D4: nop

L_803350D8:
    // 0x803350D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803350DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803350E0: jr          $ra
    // 0x803350E4: nop

    return;
    // 0x803350E4: nop

;}
RECOMP_FUNC void func_80335D88_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335D88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335D8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335D90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335D94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335D98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335D9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335DA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335DA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335DA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335DAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335DB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335DB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335DB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335DBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335DC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335DC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335DC8: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80335DCC: nop

    // 0x80335DD0: beq         $s0, $at, L_80335DEC
    if (ctx->r16 == ctx->r1) {
        // 0x80335DD4: nop
    
            goto L_80335DEC;
    }
    // 0x80335DD4: nop

    // 0x80335DD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335DDC: beq         $s0, $at, L_80335DFC
    if (ctx->r16 == ctx->r1) {
        // 0x80335DE0: nop
    
            goto L_80335DFC;
    }
    // 0x80335DE0: nop

    // 0x80335DE4: b           L_80335E0C
    // 0x80335DE8: nop

        goto L_80335E0C;
    // 0x80335DE8: nop

L_80335DEC:
    // 0x80335DEC: jal         0x80335AF0
    // 0x80335DF0: nop

    func_80335AF0_unk_bin_13(rdram, ctx);
        goto after_0;
    // 0x80335DF0: nop

    after_0:
    // 0x80335DF4: b           L_80335E14
    // 0x80335DF8: nop

        goto L_80335E14;
    // 0x80335DF8: nop

L_80335DFC:
    // 0x80335DFC: jal         0x80335D58
    // 0x80335E00: nop

    func_80335D58_unk_bin_13(rdram, ctx);
        goto after_1;
    // 0x80335E00: nop

    after_1:
    // 0x80335E04: b           L_80335E14
    // 0x80335E08: nop

        goto L_80335E14;
    // 0x80335E08: nop

L_80335E0C:
    // 0x80335E0C: b           L_80335E14
    // 0x80335E10: nop

        goto L_80335E14;
    // 0x80335E10: nop

L_80335E14:
    // 0x80335E14: b           L_80335E1C
    // 0x80335E18: nop

        goto L_80335E1C;
    // 0x80335E18: nop

L_80335E1C:
    // 0x80335E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335E20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80335E24: jr          $ra
    // 0x80335E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80335E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80334ECC_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334ECC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334ED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334ED4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334ED8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334EDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334EE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334EE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334EE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334EEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334EF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334EF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334EF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334EFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334F00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334F04: nop

    // 0x80334F08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334F0C: nop

    // 0x80334F10: bne         $t1, $zero, L_80334F68
    if (ctx->r9 != 0) {
        // 0x80334F14: nop
    
            goto L_80334F68;
    }
    // 0x80334F14: nop

    // 0x80334F18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334F1C: nop

    // 0x80334F20: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334F24: nop

    // 0x80334F28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334F2C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334F30: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334F34: nop

    // 0x80334F38: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334F3C: nop

    // 0x80334F40: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334F44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F48: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334F4C: addiu       $t7, $t7, -0x5D14
    ctx->r15 = ADD32(ctx->r15, -0X5D14);
    // 0x80334F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F54: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334F5C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80334F60: jal         0x8001C0EC
    // 0x80334F64: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334F64: addiu       $a3, $zero, 0xD4
    ctx->r7 = ADD32(0, 0XD4);
    after_0:
L_80334F68:
    // 0x80334F68: b           L_80334F70
    // 0x80334F6C: nop

        goto L_80334F70;
    // 0x80334F6C: nop

L_80334F70:
    // 0x80334F70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334F74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334F78: jr          $ra
    // 0x80334F7C: nop

    return;
    // 0x80334F7C: nop

;}
RECOMP_FUNC void func_803319D0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803319D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803319D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803319D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803319DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803319E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803319E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803319E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803319EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803319F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803319F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803319F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803319FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A00: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331A04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A08: nop

    // 0x80331A0C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331A10: nop

    // 0x80331A14: bne         $t1, $zero, L_80331A6C
    if (ctx->r9 != 0) {
        // 0x80331A18: nop
    
            goto L_80331A6C;
    }
    // 0x80331A18: nop

    // 0x80331A1C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331A20: nop

    // 0x80331A24: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331A28: nop

    // 0x80331A2C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331A30: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331A34: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331A38: nop

    // 0x80331A3C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331A40: nop

    // 0x80331A44: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331A48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A4C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331A50: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80331A54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A58: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331A5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331A60: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80331A64: jal         0x8001C0EC
    // 0x80331A68: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331A68: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_80331A6C:
    // 0x80331A6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A74: jal         0x8001B4AC
    // 0x80331A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331A7C: beq         $v0, $zero, L_80331AA8
    if (ctx->r2 == 0) {
        // 0x80331A80: nop
    
            goto L_80331AA8;
    }
    // 0x80331A80: nop

    // 0x80331A84: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331A88: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80331A8C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331A90: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A94: nop

    // 0x80331A98: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80331A9C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331AA0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80331AA4: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
L_80331AA8:
    // 0x80331AA8: b           L_80331AB0
    // 0x80331AAC: nop

        goto L_80331AB0;
    // 0x80331AAC: nop

L_80331AB0:
    // 0x80331AB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331AB8: jr          $ra
    // 0x80331ABC: nop

    return;
    // 0x80331ABC: nop

;}
