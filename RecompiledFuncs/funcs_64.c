#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_endol_80334258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334258: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033425C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334260: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334264: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334268: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033426C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334270: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334274: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334278: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033427C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334280: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334284: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334288: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033428C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334290: nop

    // 0x80334294: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334298: nop

    // 0x8033429C: bne         $t1, $zero, L_80334310
    if (ctx->r9 != 0) {
        // 0x803342A0: nop
    
            goto L_80334310;
    }
    // 0x803342A0: nop

    // 0x803342A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803342A8: nop

    // 0x803342AC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803342B0: nop

    // 0x803342B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803342B8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803342BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803342C0: nop

    // 0x803342C4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803342C8: nop

    // 0x803342CC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803342D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342D4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803342D8: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803342DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803342E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803342E8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x803342EC: jal         0x8001C0EC
    // 0x803342F0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803342F0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x803342F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334300: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x80334304: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80334308: jal         0x800175F0
    // 0x8033430C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033430C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80334310:
    // 0x80334310: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334314: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334318: jal         0x8001B62C
    // 0x8033431C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x8033431C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334320: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80334324: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334328: nop

    // 0x8033432C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80334330: nop

    // 0x80334334: bc1f        L_80334364
    if (!c1cs) {
        // 0x80334338: nop
    
            goto L_80334364;
    }
    // 0x80334338: nop

    // 0x8033433C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334340: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334344: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80334348: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033434C: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80334350: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334354: jal         0x8001ABF4
    // 0x80334358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80334358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8033435C: b           L_803343B0
    // 0x80334360: nop

        goto L_803343B0;
    // 0x80334360: nop

L_80334364:
    // 0x80334364: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033436C: jal         0x8001B62C
    // 0x80334370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x80334370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80334374: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80334378: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033437C: nop

    // 0x80334380: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80334384: nop

    // 0x80334388: bc1f        L_803343B0
    if (!c1cs) {
        // 0x8033438C: nop
    
            goto L_803343B0;
    }
    // 0x8033438C: nop

    // 0x80334390: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334394: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334398: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x8033439C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343A0: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x803343A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803343A8: jal         0x8001ABF4
    // 0x803343AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x803343AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_803343B0:
    // 0x803343B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343B8: jal         0x8001B4AC
    // 0x803343BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x803343BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x803343C0: beq         $v0, $zero, L_803343E0
    if (ctx->r2 == 0) {
        // 0x803343C4: nop
    
            goto L_803343E0;
    }
    // 0x803343C4: nop

    // 0x803343C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803343CC: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x803343D0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803343D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803343D8: nop

    // 0x803343DC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803343E0:
    // 0x803343E0: b           L_803343E8
    // 0x803343E4: nop

        goto L_803343E8;
    // 0x803343E4: nop

L_803343E8:
    // 0x803343E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803343EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803343F0: jr          $ra
    // 0x803343F4: nop

    return;
    // 0x803343F4: nop

;}
RECOMP_FUNC void func_endol_803305CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803305CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803305D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803305D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803305D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803305DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803305E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803305E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803305EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803305F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803305F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803305FC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330600: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330604: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330608: nop

    // 0x8033060C: bne         $t0, $zero, L_80330650
    if (ctx->r8 != 0) {
        // 0x80330610: nop
    
            goto L_80330650;
    }
    // 0x80330610: nop

    // 0x80330614: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330618: nop

    // 0x8033061C: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x80330620: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330624: addiu       $t2, $zero, 0x31
    ctx->r10 = ADD32(0, 0X31);
    // 0x80330628: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8033062C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330630: nop

    // 0x80330634: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80330638: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033063C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330640: jal         0x80069E60
    // 0x80330644: addiu       $a2, $zero, 0x89
    ctx->r6 = ADD32(0, 0X89);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80330644: addiu       $a2, $zero, 0x89
    ctx->r6 = ADD32(0, 0X89);
    after_0:
    // 0x80330648: b           L_80330B44
    // 0x8033064C: nop

        goto L_80330B44;
    // 0x8033064C: nop

L_80330650:
    // 0x80330650: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80330654: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x80330658: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033065C: bne         $t5, $at, L_80330AB0
    if (ctx->r13 != ctx->r1) {
        // 0x80330660: nop
    
            goto L_80330AB0;
    }
    // 0x80330660: nop

    // 0x80330664: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330668: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x8033066C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80330670: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330674: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80330678: lh          $t9, 0x100($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X100);
    // 0x8033067C: nop

    // 0x80330680: bne         $t9, $at, L_80330A2C
    if (ctx->r25 != ctx->r1) {
        // 0x80330684: nop
    
            goto L_80330A2C;
    }
    // 0x80330684: nop

    // 0x80330688: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033068C: nop

    // 0x80330690: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80330694: nop

    // 0x80330698: addiu       $t2, $t1, 0x1E
    ctx->r10 = ADD32(ctx->r9, 0X1E);
    // 0x8033069C: sh          $t2, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r10;
    // 0x803306A0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803306A4: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x803306A8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803306AC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803306B0: nop

    // 0x803306B4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x803306B8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803306BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306C0: lh          $t7, 0xBA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XBA);
    // 0x803306C4: nop

    // 0x803306C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803306CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803306D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803306D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803306D8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803306DC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803306E0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803306E4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803306E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306EC: lh          $t2, 0xBA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XBA);
    // 0x803306F0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803306F4: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x803306F8: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x803306FC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330700: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80330704: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330708: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033070C: sh          $t9, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r25;
    // 0x80330710: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330714: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330718: lh          $t5, 0xBA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBA);
    // 0x8033071C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80330720: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330724: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330728: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033072C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330730: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330734: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330738: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x8033073C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330740: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330744: lh          $t8, 0xBA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XBA);
    // 0x80330748: nop

    // 0x8033074C: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80330750: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80330754: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330758: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8033075C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330760: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330764: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330768: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033076C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330770: lh          $t9, 0xBC($t2)
    ctx->r25 = MEM_H(ctx->r10, 0XBC);
    // 0x80330774: nop

    // 0x80330778: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033077C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330780: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330784: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330788: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033078C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330790: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80330794: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330798: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033079C: lh          $t3, 0xBC($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XBC);
    // 0x803307A0: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x803307A4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x803307A8: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x803307AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803307B0: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x803307B4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803307B8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803307BC: sh          $t4, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r12;
    // 0x803307C0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803307C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307C8: lh          $t1, 0xBC($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XBC);
    // 0x803307CC: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x803307D0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803307D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803307D8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803307DC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803307E0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803307E4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803307E8: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x803307EC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803307F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307F4: lh          $t0, 0xBC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBC);
    // 0x803307F8: nop

    // 0x803307FC: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80330800: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x80330804: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330808: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x8033080C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330810: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330814: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330818: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033081C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330820: lh          $t4, 0xBE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBE);
    // 0x80330824: nop

    // 0x80330828: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8033082C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330830: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330834: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80330838: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033083C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330840: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80330844: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330848: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033084C: lh          $t7, 0xBE($t1)
    ctx->r15 = MEM_H(ctx->r9, 0XBE);
    // 0x80330850: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80330854: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x80330858: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x8033085C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330860: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80330864: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330868: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033086C: sh          $t8, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r24;
    // 0x80330870: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330874: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330878: lh          $t5, 0xBE($t0)
    ctx->r13 = MEM_H(ctx->r8, 0XBE);
    // 0x8033087C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80330880: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x80330884: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80330888: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033088C: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80330890: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330894: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330898: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x8033089C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803308A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308A4: lh          $t6, 0xBE($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XBE);
    // 0x803308A8: nop

    // 0x803308AC: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x803308B0: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803308B4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803308B8: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x803308BC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803308C0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803308C4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803308C8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803308CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308D0: lh          $t8, 0xC0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC0);
    // 0x803308D4: nop

    // 0x803308D8: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x803308DC: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x803308E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803308E4: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x803308E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803308EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803308F0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803308F4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803308F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308FC: lh          $t9, 0xC0($t5)
    ctx->r25 = MEM_H(ctx->r13, 0XC0);
    // 0x80330900: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80330904: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80330908: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x8033090C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330910: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x80330914: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330918: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033091C: sh          $t0, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r8;
    // 0x80330920: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330924: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330928: lh          $t1, 0xC0($t6)
    ctx->r9 = MEM_H(ctx->r14, 0XC0);
    // 0x8033092C: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x80330930: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80330934: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80330938: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033093C: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80330940: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330944: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330948: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
    // 0x8033094C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330950: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330954: lh          $t2, 0xC0($t8)
    ctx->r10 = MEM_H(ctx->r24, 0XC0);
    // 0x80330958: nop

    // 0x8033095C: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80330960: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80330964: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330968: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8033096C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330970: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330974: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330978: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033097C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330980: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80330984: nop

    // 0x80330988: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x8033098C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80330990: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330994: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80330998: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033099C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803309A0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803309A4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803309A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309AC: lh          $t4, 0xC2($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XC2);
    // 0x803309B0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x803309B4: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x803309B8: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x803309BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803309C0: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x803309C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803309C8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803309CC: sh          $t6, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r14;
    // 0x803309D0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803309D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309D8: lh          $t5, 0xC2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XC2);
    // 0x803309DC: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x803309E0: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x803309E4: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x803309E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803309EC: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x803309F0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803309F4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803309F8: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x803309FC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A04: lh          $t3, 0xC2($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XC2);
    // 0x80330A08: nop

    // 0x80330A0C: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80330A10: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80330A14: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330A18: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80330A1C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330A20: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330A24: b           L_80330AA8
    // 0x80330A28: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
        goto L_80330AA8;
    // 0x80330A28: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330A2C:
    // 0x80330A2C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A30: nop

    // 0x80330A34: lh          $t6, 0xB2($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XB2);
    // 0x80330A38: nop

    // 0x80330A3C: addiu       $t7, $t6, -0xD
    ctx->r15 = ADD32(ctx->r14, -0XD);
    // 0x80330A40: sltiu       $at, $t7, 0x13
    ctx->r1 = ctx->r15 < 0X13 ? 1 : 0;
    // 0x80330A44: beq         $at, $zero, L_80330AA8
    if (ctx->r1 == 0) {
        // 0x80330A48: nop
    
            goto L_80330AA8;
    }
    // 0x80330A48: nop

    // 0x80330A4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330A50: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330A54: addu        $at, $at, $t7
    gpr jr_addend_80330A60 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330A58: lw          $t7, 0x71F0($at)
    ctx->r15 = ADD32(ctx->r1, 0X71F0);
    // 0x80330A5C: nop

    // 0x80330A60: jr          $t7
    // 0x80330A64: nop

    switch (jr_addend_80330A60 >> 2) {
        case 0: goto L_80330A68; break;
        case 1: goto L_80330A68; break;
        case 2: goto L_80330A68; break;
        case 3: goto L_80330A68; break;
        case 4: goto L_80330AA8; break;
        case 5: goto L_80330AA8; break;
        case 6: goto L_80330AA8; break;
        case 7: goto L_80330AA8; break;
        case 8: goto L_80330AA8; break;
        case 9: goto L_80330AA8; break;
        case 10: goto L_80330AA8; break;
        case 11: goto L_80330AA8; break;
        case 12: goto L_80330AA8; break;
        case 13: goto L_80330AA8; break;
        case 14: goto L_80330AA8; break;
        case 15: goto L_80330AA8; break;
        case 16: goto L_80330AA8; break;
        case 17: goto L_80330A88; break;
        case 18: goto L_80330A88; break;
        default: switch_error(__func__, 0x80330A60, 0x803371F0);
    }
    // 0x80330A64: nop

L_80330A68:
    // 0x80330A68: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A6C: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x80330A70: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x80330A74: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A78: nop

    // 0x80330A7C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80330A80: b           L_80330AA8
    // 0x80330A84: nop

        goto L_80330AA8;
    // 0x80330A84: nop

L_80330A88:
    // 0x80330A88: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A8C: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x80330A90: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330A94: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A98: nop

    // 0x80330A9C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80330AA0: b           L_80330AA8
    // 0x80330AA4: nop

        goto L_80330AA8;
    // 0x80330AA4: nop

L_80330AA8:
    // 0x80330AA8: b           L_80330B44
    // 0x80330AAC: nop

        goto L_80330B44;
    // 0x80330AAC: nop

L_80330AB0:
    // 0x80330AB0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AB4: nop

    // 0x80330AB8: lh          $t4, 0xAA($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XAA);
    // 0x80330ABC: nop

    // 0x80330AC0: bne         $t4, $zero, L_80330B44
    if (ctx->r12 != 0) {
        // 0x80330AC4: nop
    
            goto L_80330B44;
    }
    // 0x80330AC4: nop

    // 0x80330AC8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330ACC: nop

    // 0x80330AD0: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x80330AD4: nop

    // 0x80330AD8: addiu       $t2, $t7, -0xD
    ctx->r10 = ADD32(ctx->r15, -0XD);
    // 0x80330ADC: sltiu       $at, $t2, 0x21
    ctx->r1 = ctx->r10 < 0X21 ? 1 : 0;
    // 0x80330AE0: beq         $at, $zero, L_80330B44
    if (ctx->r1 == 0) {
        // 0x80330AE4: nop
    
            goto L_80330B44;
    }
    // 0x80330AE4: nop

    // 0x80330AE8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330AEC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330AF0: addu        $at, $at, $t2
    gpr jr_addend_80330AFC = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330AF4: lw          $t2, 0x723C($at)
    ctx->r10 = ADD32(ctx->r1, 0X723C);
    // 0x80330AF8: nop

    // 0x80330AFC: jr          $t2
    // 0x80330B00: nop

    switch (jr_addend_80330AFC >> 2) {
        case 0: goto L_80330B04; break;
        case 1: goto L_80330B04; break;
        case 2: goto L_80330B04; break;
        case 3: goto L_80330B04; break;
        case 4: goto L_80330B44; break;
        case 5: goto L_80330B44; break;
        case 6: goto L_80330B44; break;
        case 7: goto L_80330B44; break;
        case 8: goto L_80330B44; break;
        case 9: goto L_80330B44; break;
        case 10: goto L_80330B44; break;
        case 11: goto L_80330B44; break;
        case 12: goto L_80330B44; break;
        case 13: goto L_80330B44; break;
        case 14: goto L_80330B44; break;
        case 15: goto L_80330B44; break;
        case 16: goto L_80330B44; break;
        case 17: goto L_80330B24; break;
        case 18: goto L_80330B24; break;
        case 19: goto L_80330B24; break;
        case 20: goto L_80330B44; break;
        case 21: goto L_80330B44; break;
        case 22: goto L_80330B44; break;
        case 23: goto L_80330B44; break;
        case 24: goto L_80330B44; break;
        case 25: goto L_80330B24; break;
        case 26: goto L_80330B24; break;
        case 27: goto L_80330B24; break;
        case 28: goto L_80330B24; break;
        case 29: goto L_80330B24; break;
        case 30: goto L_80330B24; break;
        case 31: goto L_80330B24; break;
        case 32: goto L_80330B24; break;
        default: switch_error(__func__, 0x80330AFC, 0x8033723C);
    }
    // 0x80330B00: nop

L_80330B04:
    // 0x80330B04: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B08: addiu       $t5, $zero, 0x16
    ctx->r13 = ADD32(0, 0X16);
    // 0x80330B0C: sh          $t5, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r13;
    // 0x80330B10: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B14: nop

    // 0x80330B18: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80330B1C: b           L_80330B44
    // 0x80330B20: nop

        goto L_80330B44;
    // 0x80330B20: nop

L_80330B24:
    // 0x80330B24: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B28: addiu       $t0, $zero, 0x2E
    ctx->r8 = ADD32(0, 0X2E);
    // 0x80330B2C: sh          $t0, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r8;
    // 0x80330B30: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B34: nop

    // 0x80330B38: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80330B3C: b           L_80330B44
    // 0x80330B40: nop

        goto L_80330B44;
    // 0x80330B40: nop

L_80330B44:
    // 0x80330B44: b           L_80330B4C
    // 0x80330B48: nop

        goto L_80330B4C;
    // 0x80330B48: nop

L_80330B4C:
    // 0x80330B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330B50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330B54: jr          $ra
    // 0x80330B58: nop

    return;
    // 0x80330B58: nop

;}
RECOMP_FUNC void func_endol_80330DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330DA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330DA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330DAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330DB0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330DB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330DB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330DBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330DC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330DC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330DC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330DCC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330DD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330DD4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330DD8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330DDC: nop

    // 0x80330DE0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330DE4: nop

    // 0x80330DE8: bne         $t1, $zero, L_80330E40
    if (ctx->r9 != 0) {
        // 0x80330DEC: nop
    
            goto L_80330E40;
    }
    // 0x80330DEC: nop

    // 0x80330DF0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330DF4: nop

    // 0x80330DF8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330DFC: nop

    // 0x80330E00: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330E04: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330E08: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330E0C: nop

    // 0x80330E10: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330E14: nop

    // 0x80330E18: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330E1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E20: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330E24: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330E28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E2C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80330E38: jal         0x8001C0EC
    // 0x80330E3C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330E3C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80330E40:
    // 0x80330E40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E48: jal         0x8001B4AC
    // 0x80330E4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80330E4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330E50: beq         $v0, $zero, L_80330E70
    if (ctx->r2 == 0) {
        // 0x80330E54: nop
    
            goto L_80330E70;
    }
    // 0x80330E54: nop

    // 0x80330E58: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330E5C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80330E60: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330E64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330E68: nop

    // 0x80330E6C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330E70:
    // 0x80330E70: b           L_80330E78
    // 0x80330E74: nop

        goto L_80330E78;
    // 0x80330E74: nop

L_80330E78:
    // 0x80330E78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330E80: jr          $ra
    // 0x80330E84: nop

    return;
    // 0x80330E84: nop

;}
RECOMP_FUNC void func_endol_80335C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335C1C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80335C20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335C24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335C28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335C2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335C30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335C34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335C38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335C3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335C40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335C44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335C48: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80335C4C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80335C50: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80335C54: nop

    // 0x80335C58: beq         $t0, $zero, L_80335C6C
    if (ctx->r8 == 0) {
        // 0x80335C5C: nop
    
            goto L_80335C6C;
    }
    // 0x80335C5C: nop

    // 0x80335C60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335C64: bne         $t0, $at, L_80335C74
    if (ctx->r8 != ctx->r1) {
        // 0x80335C68: nop
    
            goto L_80335C74;
    }
    // 0x80335C68: nop

L_80335C6C:
    // 0x80335C6C: b           L_80335D1C
    // 0x80335C70: nop

        goto L_80335D1C;
    // 0x80335C70: nop

L_80335C74:
    // 0x80335C74: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80335C78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335C7C: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x80335C80: nop

    // 0x80335C84: bne         $t2, $at, L_80335D1C
    if (ctx->r10 != ctx->r1) {
        // 0x80335C88: nop
    
            goto L_80335D1C;
    }
    // 0x80335C88: nop

    // 0x80335C8C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80335C90: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80335C94: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80335C98: nop

    // 0x80335C9C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80335CA0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335CA4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335CA8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335CAC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335CB0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80335CB4: lh          $t6, 0x41FA($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X41FA);
    // 0x80335CB8: nop

    // 0x80335CBC: bne         $t6, $zero, L_80335D1C
    if (ctx->r14 != 0) {
        // 0x80335CC0: nop
    
            goto L_80335D1C;
    }
    // 0x80335CC0: nop

    // 0x80335CC4: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80335CC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335CCC: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335CD0: addiu       $t7, $zero, 0x16
    ctx->r15 = ADD32(0, 0X16);
    // 0x80335CD4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335CD8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335CDC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335CE0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335CE4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335CE8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335CEC: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80335CF0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80335CF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335CF8: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x80335CFC: nop

    // 0x80335D00: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80335D04: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335D08: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335D0C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335D10: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80335D14: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335D18: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80335D1C:
    // 0x80335D1C: b           L_80335D24
    // 0x80335D20: nop

        goto L_80335D24;
    // 0x80335D20: nop

L_80335D24:
    // 0x80335D24: jr          $ra
    // 0x80335D28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80335D28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_endol_80336D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336D14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336D18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336D1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336D20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336D24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336D28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336D2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336D30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336D34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336D38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336D3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336D40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336D44: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336D48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336D4C: nop

    // 0x80336D50: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336D54: nop

    // 0x80336D58: bne         $t1, $zero, L_80336DAC
    if (ctx->r9 != 0) {
        // 0x80336D5C: nop
    
            goto L_80336DAC;
    }
    // 0x80336D5C: nop

    // 0x80336D60: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336D64: nop

    // 0x80336D68: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336D6C: nop

    // 0x80336D70: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336D74: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336D78: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x80336D7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336D80: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336D84: nop

    // 0x80336D88: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80336D8C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336D90: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80336D94: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80336D98: lui         $at, 0xC140
    ctx->r1 = S32(0XC140 << 16);
    // 0x80336D9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336DA0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336DA4: nop

    // 0x80336DA8: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
L_80336DAC:
    // 0x80336DAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336DB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336DB4: jal         0x8002A8B4
    // 0x80336DB8: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x80336DB8: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    after_0:
    // 0x80336DBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336DC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336DC4: jal         0x80029C40
    // 0x80336DC8: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80336DC8: nop

    after_1:
    // 0x80336DCC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80336DD0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80336DD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336DD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336DDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336DE0: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x80336DE4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80336DE8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80336DEC: jal         0x80029018
    // 0x80336DF0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x80336DF0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80336DF4: beq         $v0, $zero, L_80336E0C
    if (ctx->r2 == 0) {
        // 0x80336DF8: nop
    
            goto L_80336E0C;
    }
    // 0x80336DF8: nop

    // 0x80336DFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336E00: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80336E04: b           L_80336E7C
    // 0x80336E08: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
        goto L_80336E7C;
    // 0x80336E08: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
L_80336E0C:
    // 0x80336E0C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80336E10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80336E14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336E18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336E1C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80336E20: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80336E24: lui         $a3, 0xC234
    ctx->r7 = S32(0XC234 << 16);
    // 0x80336E28: jal         0x80029F58
    // 0x80336E2C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_3;
    // 0x80336E2C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80336E30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336E34: bne         $v0, $at, L_80336E4C
    if (ctx->r2 != ctx->r1) {
        // 0x80336E38: nop
    
            goto L_80336E4C;
    }
    // 0x80336E38: nop

    // 0x80336E3C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80336E40: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80336E44: b           L_80336E7C
    // 0x80336E48: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
        goto L_80336E7C;
    // 0x80336E48: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
L_80336E4C:
    // 0x80336E4C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336E50: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80336E54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336E58: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80336E5C: nop

    // 0x80336E60: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80336E64: nop

    // 0x80336E68: bc1f        L_80336E7C
    if (!c1cs) {
        // 0x80336E6C: nop
    
            goto L_80336E7C;
    }
    // 0x80336E6C: nop

    // 0x80336E70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336E74: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80336E78: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
L_80336E7C:
    // 0x80336E7C: b           L_80336E84
    // 0x80336E80: nop

        goto L_80336E84;
    // 0x80336E80: nop

L_80336E84:
    // 0x80336E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336E88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336E8C: jr          $ra
    // 0x80336E90: nop

    return;
    // 0x80336E90: nop

;}
RECOMP_FUNC void func_endol_80336600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336600: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336604: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336608: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033660C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336610: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336614: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336618: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033661C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336620: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336624: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336628: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033662C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336630: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336634: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336638: nop

    // 0x8033663C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336640: nop

    // 0x80336644: bne         $t1, $zero, L_8033669C
    if (ctx->r9 != 0) {
        // 0x80336648: nop
    
            goto L_8033669C;
    }
    // 0x80336648: nop

    // 0x8033664C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336650: nop

    // 0x80336654: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336658: nop

    // 0x8033665C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336660: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336664: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336668: nop

    // 0x8033666C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336670: nop

    // 0x80336674: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336678: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033667C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336680: addiu       $t7, $t7, -0x6040
    ctx->r15 = ADD32(ctx->r15, -0X6040);
    // 0x80336684: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336688: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033668C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336690: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80336694: jal         0x8001C0EC
    // 0x80336698: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336698: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    after_0:
L_8033669C:
    // 0x8033669C: b           L_803366A4
    // 0x803366A0: nop

        goto L_803366A4;
    // 0x803366A0: nop

L_803366A4:
    // 0x803366A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803366A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803366AC: jr          $ra
    // 0x803366B0: nop

    return;
    // 0x803366B0: nop

;}
RECOMP_FUNC void func_endol_80332F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332F80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332F84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332F88: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332F8C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332F90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332F94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332F9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332FA0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332FA4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332FA8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332FAC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332FB0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FB4: nop

    // 0x80332FB8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332FBC: nop

    // 0x80332FC0: bne         $t1, $zero, L_80333098
    if (ctx->r9 != 0) {
        // 0x80332FC4: nop
    
            goto L_80333098;
    }
    // 0x80332FC4: nop

    // 0x80332FC8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FCC: nop

    // 0x80332FD0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332FD4: nop

    // 0x80332FD8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332FDC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332FE0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FE4: nop

    // 0x80332FE8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332FEC: nop

    // 0x80332FF0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332FF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332FF8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332FFC: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80333000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333004: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033300C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80333010: jal         0x8001C0EC
    // 0x80333014: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333014: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80333018: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033301C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333020: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80333024: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333028: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033302C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333030: jal         0x8001ABF4
    // 0x80333034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80333034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80333038: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033303C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333040: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80333044: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333048: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x8033304C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333050: jal         0x8001ABF4
    // 0x80333054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80333054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80333058: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033305C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333060: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80333064: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333068: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x8033306C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80333070: jal         0x8001ABF4
    // 0x80333074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80333074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80333078: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033307C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333080: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80333084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333088: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x8033308C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333090: jal         0x8001ABF4
    // 0x80333094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80333094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80333098:
    // 0x80333098: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033309C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803330A0: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x803330A4: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803330A8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803330AC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803330B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803330B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803330B8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803330BC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803330C0: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x803330C4: jal         0x80015538
    // 0x803330C8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803330C8: nop

    after_5:
    // 0x803330CC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803330D0: nop

    // 0x803330D4: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x803330D8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803330DC: nop

    // 0x803330E0: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803330E4: nop

    // 0x803330E8: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x803330EC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803330F0: nop

    // 0x803330F4: lh          $t2, 0xBA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBA);
    // 0x803330F8: nop

    // 0x803330FC: beq         $t2, $zero, L_80333160
    if (ctx->r10 == 0) {
        // 0x80333100: nop
    
            goto L_80333160;
    }
    // 0x80333100: nop

    // 0x80333104: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333108: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033310C: lh          $t5, 0xBA($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XBA);
    // 0x80333110: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80333114: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333118: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033311C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333120: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333124: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333128: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033312C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80333130: nop

    // 0x80333134: bne         $t8, $at, L_80333158
    if (ctx->r24 != ctx->r1) {
        // 0x80333138: nop
    
            goto L_80333158;
    }
    // 0x80333138: nop

    // 0x8033313C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333140: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80333144: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333148: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033314C: nop

    // 0x80333150: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80333154: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_80333158:
    // 0x80333158: b           L_803331B0
    // 0x8033315C: nop

        goto L_803331B0;
    // 0x8033315C: nop

L_80333160:
    // 0x80333160: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333164: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033316C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333170: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80333174: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80333178: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033317C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80333180: jal         0x800295C0
    // 0x80333184: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x80333184: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x80333188: beq         $v0, $zero, L_803331A0
    if (ctx->r2 == 0) {
        // 0x8033318C: nop
    
            goto L_803331A0;
    }
    // 0x8033318C: nop

    // 0x80333190: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333194: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333198: b           L_803331B0
    // 0x8033319C: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
        goto L_803331B0;
    // 0x8033319C: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
L_803331A0:
    // 0x803331A0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803331A4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803331A8: nop

    // 0x803331AC: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
L_803331B0:
    // 0x803331B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331B8: jal         0x8001B4AC
    // 0x803331BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x803331BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x803331C0: beq         $v0, $zero, L_803331E0
    if (ctx->r2 == 0) {
        // 0x803331C4: nop
    
            goto L_803331E0;
    }
    // 0x803331C4: nop

    // 0x803331C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803331CC: addiu       $t3, $zero, 0x1B
    ctx->r11 = ADD32(0, 0X1B);
    // 0x803331D0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803331D4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803331D8: nop

    // 0x803331DC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803331E0:
    // 0x803331E0: b           L_803331E8
    // 0x803331E4: nop

        goto L_803331E8;
    // 0x803331E4: nop

L_803331E8:
    // 0x803331E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803331EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803331F0: jr          $ra
    // 0x803331F4: nop

    return;
    // 0x803331F4: nop

;}
RECOMP_FUNC void func_endol_80334CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334CB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334CBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334CC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334CC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334CC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334CCC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334CD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334CD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334CD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334CDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334CE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334CE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334CE8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334CEC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334CF0: nop

    // 0x80334CF4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334CF8: nop

    // 0x80334CFC: bne         $t1, $zero, L_80334D54
    if (ctx->r9 != 0) {
        // 0x80334D00: nop
    
            goto L_80334D54;
    }
    // 0x80334D00: nop

    // 0x80334D04: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334D08: nop

    // 0x80334D0C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334D10: nop

    // 0x80334D14: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334D18: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334D1C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334D20: nop

    // 0x80334D24: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334D28: nop

    // 0x80334D2C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334D30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334D34: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334D38: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80334D3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334D40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334D48: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x80334D4C: jal         0x8001C0EC
    // 0x80334D50: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334D50: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80334D54:
    // 0x80334D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334D58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334D5C: jal         0x8001B62C
    // 0x80334D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80334D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334D64: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80334D68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334D6C: nop

    // 0x80334D70: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80334D74: nop

    // 0x80334D78: bc1f        L_80334DA0
    if (!c1cs) {
        // 0x80334D7C: nop
    
            goto L_80334DA0;
    }
    // 0x80334D7C: nop

    // 0x80334D80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334D84: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334D88: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80334D8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334D90: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80334D94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80334D98: jal         0x8001ABF4
    // 0x80334D9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80334D9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80334DA0:
    // 0x80334DA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334DA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334DA8: jal         0x8001B4AC
    // 0x80334DAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80334DAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80334DB0: beq         $v0, $zero, L_80334DD0
    if (ctx->r2 == 0) {
        // 0x80334DB4: nop
    
            goto L_80334DD0;
    }
    // 0x80334DB4: nop

    // 0x80334DB8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334DBC: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x80334DC0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334DC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334DC8: nop

    // 0x80334DCC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80334DD0:
    // 0x80334DD0: b           L_80334DD8
    // 0x80334DD4: nop

        goto L_80334DD8;
    // 0x80334DD4: nop

L_80334DD8:
    // 0x80334DD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334DDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334DE0: jr          $ra
    // 0x80334DE4: nop

    return;
    // 0x80334DE4: nop

;}
RECOMP_FUNC void func_endol_8033509C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033509C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803350A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803350A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803350A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803350AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803350B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803350B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803350BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803350C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803350C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803350CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803350D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803350D4: nop

    // 0x803350D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803350DC: nop

    // 0x803350E0: bne         $t1, $zero, L_80335138
    if (ctx->r9 != 0) {
        // 0x803350E4: nop
    
            goto L_80335138;
    }
    // 0x803350E4: nop

    // 0x803350E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803350EC: nop

    // 0x803350F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803350F4: nop

    // 0x803350F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803350FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335100: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335104: nop

    // 0x80335108: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033510C: nop

    // 0x80335110: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335114: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335118: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033511C: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80335120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335124: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033512C: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80335130: jal         0x8001C0EC
    // 0x80335134: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335134: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80335138:
    // 0x80335138: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033513C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80335140: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80335144: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335148: nop

    // 0x8033514C: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80335150: nop

    // 0x80335154: beq         $t1, $zero, L_80335168
    if (ctx->r9 == 0) {
        // 0x80335158: nop
    
            goto L_80335168;
    }
    // 0x80335158: nop

    // 0x8033515C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335160: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80335164: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_80335168:
    // 0x80335168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033516C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335170: jal         0x8001B4AC
    // 0x80335174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335178: beq         $v0, $zero, L_80335198
    if (ctx->r2 == 0) {
        // 0x8033517C: nop
    
            goto L_80335198;
    }
    // 0x8033517C: nop

    // 0x80335180: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335184: addiu       $t2, $zero, 0x30
    ctx->r10 = ADD32(0, 0X30);
    // 0x80335188: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033518C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335190: nop

    // 0x80335194: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80335198:
    // 0x80335198: b           L_803351A0
    // 0x8033519C: nop

        goto L_803351A0;
    // 0x8033519C: nop

L_803351A0:
    // 0x803351A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803351A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803351A8: jr          $ra
    // 0x803351AC: nop

    return;
    // 0x803351AC: nop

;}
RECOMP_FUNC void func_endol_80330000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80330004: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330008: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033000C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330010: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330014: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330018: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033001C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330020: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330024: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330028: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033002C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80330030: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80330034: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330038: lwc1        $f4, 0xD4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x8033003C: nop

    // 0x80330040: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80330044: nop

    // 0x80330048: bc1f        L_80330064
    if (!c1cs) {
        // 0x8033004C: nop
    
            goto L_80330064;
    }
    // 0x8033004C: nop

    // 0x80330050: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80330054: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330058: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8033005C: b           L_80330080
    // 0x80330060: swc1        $f8, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f8.u32l;
        goto L_80330080;
    // 0x80330060: swc1        $f8, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f8.u32l;
L_80330064:
    // 0x80330064: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80330068: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8033006C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330070: lwc1        $f10, 0xD4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x80330074: nop

    // 0x80330078: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8033007C: swc1        $f18, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f18.u32l;
L_80330080:
    // 0x80330080: b           L_80330088
    // 0x80330084: nop

        goto L_80330088;
    // 0x80330084: nop

L_80330088:
    // 0x80330088: jr          $ra
    // 0x8033008C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033008C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_endol_80336EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336EC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336EC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336ECC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80336ED0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336ED4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336ED8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336EDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336EE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336EE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336EE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336EEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336EF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336EF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336EF8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336EFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336F00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336F04: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80336F08: nop

    // 0x80336F0C: beq         $s0, $at, L_80336F34
    if (ctx->r16 == ctx->r1) {
        // 0x80336F10: nop
    
            goto L_80336F34;
    }
    // 0x80336F10: nop

    // 0x80336F14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80336F18: beq         $s0, $at, L_80336F44
    if (ctx->r16 == ctx->r1) {
        // 0x80336F1C: nop
    
            goto L_80336F44;
    }
    // 0x80336F1C: nop

    // 0x80336F20: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80336F24: beq         $s0, $at, L_80336F54
    if (ctx->r16 == ctx->r1) {
        // 0x80336F28: nop
    
            goto L_80336F54;
    }
    // 0x80336F28: nop

    // 0x80336F2C: b           L_80336F64
    // 0x80336F30: nop

        goto L_80336F64;
    // 0x80336F30: nop

L_80336F34:
    // 0x80336F34: jal         0x80336B8C
    // 0x80336F38: nop

    func_endol_80336B8C(rdram, ctx);
        goto after_0;
    // 0x80336F38: nop

    after_0:
    // 0x80336F3C: b           L_80336F6C
    // 0x80336F40: nop

        goto L_80336F6C;
    // 0x80336F40: nop

L_80336F44:
    // 0x80336F44: jal         0x80336D14
    // 0x80336F48: nop

    func_endol_80336D14(rdram, ctx);
        goto after_1;
    // 0x80336F48: nop

    after_1:
    // 0x80336F4C: b           L_80336F6C
    // 0x80336F50: nop

        goto L_80336F6C;
    // 0x80336F50: nop

L_80336F54:
    // 0x80336F54: jal         0x80336E94
    // 0x80336F58: nop

    func_endol_80336E94(rdram, ctx);
        goto after_2;
    // 0x80336F58: nop

    after_2:
    // 0x80336F5C: b           L_80336F6C
    // 0x80336F60: nop

        goto L_80336F6C;
    // 0x80336F60: nop

L_80336F64:
    // 0x80336F64: b           L_80336F6C
    // 0x80336F68: nop

        goto L_80336F6C;
    // 0x80336F68: nop

L_80336F6C:
    // 0x80336F6C: b           L_80336F74
    // 0x80336F70: nop

        goto L_80336F74;
    // 0x80336F70: nop

L_80336F74:
    // 0x80336F74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336F78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80336F7C: jr          $ra
    // 0x80336F80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80336F80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_endol_80332584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332584: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332588: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033258C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332590: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332594: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332598: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033259C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803325A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803325AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803325B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803325B4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803325B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803325BC: nop

    // 0x803325C0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803325C4: nop

    // 0x803325C8: bne         $t1, $zero, L_80332620
    if (ctx->r9 != 0) {
        // 0x803325CC: nop
    
            goto L_80332620;
    }
    // 0x803325CC: nop

    // 0x803325D0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803325D4: nop

    // 0x803325D8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803325DC: nop

    // 0x803325E0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803325E4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803325E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803325EC: nop

    // 0x803325F0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803325F4: nop

    // 0x803325F8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803325FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332600: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332604: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80332608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033260C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332614: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80332618: jal         0x8001C0EC
    // 0x8033261C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033261C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80332620:
    // 0x80332620: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332624: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332628: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x8033262C: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332630: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332634: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332638: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033263C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332640: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332644: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332648: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x8033264C: jal         0x80015538
    // 0x80332650: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80332650: nop

    after_1:
    // 0x80332654: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332658: nop

    // 0x8033265C: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80332660: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332664: nop

    // 0x80332668: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8033266C: nop

    // 0x80332670: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x80332674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033267C: jal         0x8001B4AC
    // 0x80332680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332684: beq         $v0, $zero, L_803326A4
    if (ctx->r2 == 0) {
        // 0x80332688: nop
    
            goto L_803326A4;
    }
    // 0x80332688: nop

    // 0x8033268C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332690: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x80332694: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80332698: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033269C: nop

    // 0x803326A0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803326A4:
    // 0x803326A4: b           L_803326AC
    // 0x803326A8: nop

        goto L_803326AC;
    // 0x803326A8: nop

L_803326AC:
    // 0x803326AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803326B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803326B4: jr          $ra
    // 0x803326B8: nop

    return;
    // 0x803326B8: nop

;}
RECOMP_FUNC void func_endol_803329C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803329C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803329C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803329CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803329D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803329D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803329D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803329DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803329E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803329E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803329E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803329EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803329F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803329F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803329F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803329FC: nop

    // 0x80332A00: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332A04: nop

    // 0x80332A08: bne         $t1, $zero, L_80332A60
    if (ctx->r9 != 0) {
        // 0x80332A0C: nop
    
            goto L_80332A60;
    }
    // 0x80332A0C: nop

    // 0x80332A10: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332A14: nop

    // 0x80332A18: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332A1C: nop

    // 0x80332A20: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332A24: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332A28: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332A2C: nop

    // 0x80332A30: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332A34: nop

    // 0x80332A38: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332A3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A40: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332A44: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80332A48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332A54: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80332A58: jal         0x8001C0EC
    // 0x80332A5C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332A5C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80332A60:
    // 0x80332A60: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332A64: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80332A68: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80332A6C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332A70: nop

    // 0x80332A74: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80332A78: nop

    // 0x80332A7C: beq         $t1, $zero, L_80332A90
    if (ctx->r9 == 0) {
        // 0x80332A80: nop
    
            goto L_80332A90;
    }
    // 0x80332A80: nop

    // 0x80332A84: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332A88: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80332A8C: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_80332A90:
    // 0x80332A90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332A94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A98: lh          $t6, 0xBA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XBA);
    // 0x80332A9C: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332AA0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80332AA4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332AA8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332AAC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332AB0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332AB4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332AB8: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x80332ABC: jal         0x80015538
    // 0x80332AC0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80332AC0: nop

    after_1:
    // 0x80332AC4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332AC8: nop

    // 0x80332ACC: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80332AD0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332AD4: nop

    // 0x80332AD8: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332ADC: nop

    // 0x80332AE0: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x80332AE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AEC: jal         0x8001B4AC
    // 0x80332AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332AF4: beq         $v0, $zero, L_80332B14
    if (ctx->r2 == 0) {
        // 0x80332AF8: nop
    
            goto L_80332B14;
    }
    // 0x80332AF8: nop

    // 0x80332AFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332B00: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80332B04: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80332B08: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332B0C: nop

    // 0x80332B10: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80332B14:
    // 0x80332B14: b           L_80332B1C
    // 0x80332B18: nop

        goto L_80332B1C;
    // 0x80332B18: nop

L_80332B1C:
    // 0x80332B1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332B24: jr          $ra
    // 0x80332B28: nop

    return;
    // 0x80332B28: nop

;}
RECOMP_FUNC void func_endol_80334738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334738: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033473C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334740: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334744: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334748: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033474C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334750: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334754: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334758: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033475C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334760: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334764: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334768: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033476C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334770: nop

    // 0x80334774: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334778: nop

    // 0x8033477C: bne         $t1, $zero, L_803347D4
    if (ctx->r9 != 0) {
        // 0x80334780: nop
    
            goto L_803347D4;
    }
    // 0x80334780: nop

    // 0x80334784: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334788: nop

    // 0x8033478C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334790: nop

    // 0x80334794: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334798: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033479C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803347A0: nop

    // 0x803347A4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803347A8: nop

    // 0x803347AC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803347B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347B4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803347B8: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803347BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803347C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803347C8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x803347CC: jal         0x8001C0EC
    // 0x803347D0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803347D0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_803347D4:
    // 0x803347D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347DC: jal         0x8001B62C
    // 0x803347E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x803347E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803347E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803347E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803347EC: nop

    // 0x803347F0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x803347F4: nop

    // 0x803347F8: bc1f        L_80334838
    if (!c1cs) {
        // 0x803347FC: nop
    
            goto L_80334838;
    }
    // 0x803347FC: nop

    // 0x80334800: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334804: nop

    // 0x80334808: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033480C: lwc1        $f14, 0xDC($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0XDC);
    // 0x80334810: jal         0x80015538
    // 0x80334814: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80334814: nop

    after_2:
    // 0x80334818: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033481C: nop

    // 0x80334820: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80334824: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334828: nop

    // 0x8033482C: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80334830: nop

    // 0x80334834: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
L_80334838:
    // 0x80334838: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033483C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334840: jal         0x8001B4AC
    // 0x80334844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80334844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80334848: beq         $v0, $zero, L_80334868
    if (ctx->r2 == 0) {
        // 0x8033484C: nop
    
            goto L_80334868;
    }
    // 0x8033484C: nop

    // 0x80334850: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334854: addiu       $t1, $zero, 0x29
    ctx->r9 = ADD32(0, 0X29);
    // 0x80334858: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033485C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334860: nop

    // 0x80334864: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80334868:
    // 0x80334868: b           L_80334870
    // 0x8033486C: nop

        goto L_80334870;
    // 0x8033486C: nop

L_80334870:
    // 0x80334870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334874: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334878: jr          $ra
    // 0x8033487C: nop

    return;
    // 0x8033487C: nop

;}
RECOMP_FUNC void func_endol_80334EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334EEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334EF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334EF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334EF8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334EFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334F00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334F04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334F08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334F0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334F10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334F14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334F18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334F1C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334F20: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334F24: nop

    // 0x80334F28: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334F2C: nop

    // 0x80334F30: bne         $t1, $zero, L_80335024
    if (ctx->r9 != 0) {
        // 0x80334F34: nop
    
            goto L_80335024;
    }
    // 0x80334F34: nop

    // 0x80334F38: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334F3C: nop

    // 0x80334F40: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334F44: nop

    // 0x80334F48: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334F4C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334F50: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334F54: nop

    // 0x80334F58: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334F5C: nop

    // 0x80334F60: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334F64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F68: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334F6C: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80334F70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334F78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334F7C: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x80334F80: jal         0x8001C0EC
    // 0x80334F84: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334F84: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80334F88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F8C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334F90: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80334F94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F98: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80334F9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334FA0: jal         0x8001ABF4
    // 0x80334FA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80334FA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80334FA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334FAC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334FB0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80334FB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334FB8: addiu       $a3, $a3, 0xE0
    ctx->r7 = ADD32(ctx->r7, 0XE0);
    // 0x80334FBC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80334FC0: jal         0x8001ABF4
    // 0x80334FC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80334FC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80334FC8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334FCC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80334FD0: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
    // 0x80334FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334FD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334FE0: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x80334FE4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80334FE8: jal         0x800175F0
    // 0x80334FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x80334FEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80334FF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334FF4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334FF8: nop

    // 0x80334FFC: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x80335000: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335004: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335008: nop

    // 0x8033500C: swc1        $f6, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f6.u32l;
    // 0x80335010: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335014: nop

    // 0x80335018: lwc1        $f8, 0x2C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8033501C: nop

    // 0x80335020: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
L_80335024:
    // 0x80335024: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335028: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033502C: sh          $t4, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r12;
    // 0x80335030: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335034: nop

    // 0x80335038: lh          $t5, 0x108($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X108);
    // 0x8033503C: nop

    // 0x80335040: beq         $t5, $zero, L_80335054
    if (ctx->r13 == 0) {
        // 0x80335044: nop
    
            goto L_80335054;
    }
    // 0x80335044: nop

    // 0x80335048: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033504C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80335050: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
L_80335054:
    // 0x80335054: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335058: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033505C: jal         0x8001B4AC
    // 0x80335060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80335060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80335064: beq         $v0, $zero, L_80335084
    if (ctx->r2 == 0) {
        // 0x80335068: nop
    
            goto L_80335084;
    }
    // 0x80335068: nop

    // 0x8033506C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335070: addiu       $t9, $zero, 0x2F
    ctx->r25 = ADD32(0, 0X2F);
    // 0x80335074: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80335078: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033507C: nop

    // 0x80335080: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80335084:
    // 0x80335084: b           L_8033508C
    // 0x80335088: nop

        goto L_8033508C;
    // 0x80335088: nop

L_8033508C:
    // 0x8033508C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335094: jr          $ra
    // 0x80335098: nop

    return;
    // 0x80335098: nop

;}
RECOMP_FUNC void func_endol_803339AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803339AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803339B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803339B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803339B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803339BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803339C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803339C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803339C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803339CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803339D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803339D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803339D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803339DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803339E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803339E4: nop

    // 0x803339E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803339EC: nop

    // 0x803339F0: bne         $t1, $zero, L_80333A48
    if (ctx->r9 != 0) {
        // 0x803339F4: nop
    
            goto L_80333A48;
    }
    // 0x803339F4: nop

    // 0x803339F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803339FC: nop

    // 0x80333A00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333A04: nop

    // 0x80333A08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333A0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333A10: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333A14: nop

    // 0x80333A18: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333A1C: nop

    // 0x80333A20: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333A24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A28: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333A2C: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80333A30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A34: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333A38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333A3C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80333A40: jal         0x8001C0EC
    // 0x80333A44: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333A44: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80333A48:
    // 0x80333A48: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80333A4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333A50: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333A54: nop

    // 0x80333A58: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x80333A5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A64: jal         0x8002A8B4
    // 0x80333A68: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80333A68: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80333A6C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333A70: nop

    // 0x80333A74: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80333A78: nop

    // 0x80333A7C: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x80333A80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A88: jal         0x80029C40
    // 0x80333A8C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80333A8C: nop

    after_2:
    // 0x80333A90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333A94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80333A98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333AA4: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x80333AA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333AAC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80333AB0: jal         0x80029018
    // 0x80333AB4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80333AB4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80333AB8: beq         $v0, $zero, L_80333AF4
    if (ctx->r2 == 0) {
        // 0x80333ABC: nop
    
            goto L_80333AF4;
    }
    // 0x80333ABC: nop

    // 0x80333AC0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333AC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333AC8: nop

    // 0x80333ACC: swc1        $f16, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f16.u32l;
    // 0x80333AD0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333AD4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333AD8: nop

    // 0x80333ADC: swc1        $f18, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f18.u32l;
    // 0x80333AE0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333AE4: nop

    // 0x80333AE8: lwc1        $f4, 0x2C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80333AEC: nop

    // 0x80333AF0: swc1        $f4, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f4.u32l;
L_80333AF4:
    // 0x80333AF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333AF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333AFC: jal         0x8001B4AC
    // 0x80333B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80333B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333B04: beq         $v0, $zero, L_80333B88
    if (ctx->r2 == 0) {
        // 0x80333B08: nop
    
            goto L_80333B88;
    }
    // 0x80333B08: nop

    // 0x80333B0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B14: jal         0x8002A1FC
    // 0x80333B18: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x80333B18: lui         $a1, 0x4407
    ctx->r5 = S32(0X4407 << 16);
    after_5:
    // 0x80333B1C: beq         $v0, $zero, L_80333B70
    if (ctx->r2 == 0) {
        // 0x80333B20: nop
    
            goto L_80333B70;
    }
    // 0x80333B20: nop

    // 0x80333B24: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80333B28: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333B2C: nop

    // 0x80333B30: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
    // 0x80333B34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333B38: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333B3C: nop

    // 0x80333B40: swc1        $f8, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f8.u32l;
    // 0x80333B44: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333B48: nop

    // 0x80333B4C: lwc1        $f10, 0x2C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80333B50: nop

    // 0x80333B54: swc1        $f10, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f10.u32l;
    // 0x80333B58: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333B5C: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x80333B60: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80333B64: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333B68: b           L_80333B88
    // 0x80333B6C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_80333B88;
    // 0x80333B6C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80333B70:
    // 0x80333B70: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333B74: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x80333B78: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80333B7C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333B80: nop

    // 0x80333B84: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80333B88:
    // 0x80333B88: b           L_80333B90
    // 0x80333B8C: nop

        goto L_80333B90;
    // 0x80333B8C: nop

L_80333B90:
    // 0x80333B90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333B98: jr          $ra
    // 0x80333B9C: nop

    return;
    // 0x80333B9C: nop

;}
RECOMP_FUNC void func_endol_8033651C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033651C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336520: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336524: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336528: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033652C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336530: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336534: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336538: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033653C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336540: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336544: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336548: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033654C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336550: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336554: nop

    // 0x80336558: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033655C: nop

    // 0x80336560: bne         $t1, $zero, L_803365B8
    if (ctx->r9 != 0) {
        // 0x80336564: nop
    
            goto L_803365B8;
    }
    // 0x80336564: nop

    // 0x80336568: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033656C: nop

    // 0x80336570: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336574: nop

    // 0x80336578: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033657C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336580: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336584: nop

    // 0x80336588: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033658C: nop

    // 0x80336590: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336594: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336598: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033659C: addiu       $t7, $t7, -0x6040
    ctx->r15 = ADD32(ctx->r15, -0X6040);
    // 0x803365A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803365A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803365A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803365AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803365B0: jal         0x8001C0EC
    // 0x803365B4: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803365B4: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    after_0:
L_803365B8:
    // 0x803365B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803365BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803365C0: jal         0x8001B4AC
    // 0x803365C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803365C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803365C8: beq         $v0, $zero, L_803365E8
    if (ctx->r2 == 0) {
        // 0x803365CC: nop
    
            goto L_803365E8;
    }
    // 0x803365CC: nop

    // 0x803365D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803365D4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803365D8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803365DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803365E0: nop

    // 0x803365E4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803365E8:
    // 0x803365E8: b           L_803365F0
    // 0x803365EC: nop

        goto L_803365F0;
    // 0x803365EC: nop

L_803365F0:
    // 0x803365F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803365F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803365F8: jr          $ra
    // 0x803365FC: nop

    return;
    // 0x803365FC: nop

;}
RECOMP_FUNC void func_endol_80331130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331130: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331138: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033113C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331140: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331144: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331148: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033114C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331150: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331154: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331158: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033115C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331160: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331164: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331168: nop

    // 0x8033116C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331170: nop

    // 0x80331174: bne         $t1, $zero, L_803311D8
    if (ctx->r9 != 0) {
        // 0x80331178: nop
    
            goto L_803311D8;
    }
    // 0x80331178: nop

    // 0x8033117C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331180: nop

    // 0x80331184: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331188: nop

    // 0x8033118C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331190: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331194: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331198: nop

    // 0x8033119C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803311A0: nop

    // 0x803311A4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803311A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311AC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803311B0: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803311B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803311BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803311C0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x803311C4: jal         0x8001C0EC
    // 0x803311C8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803311C8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x803311CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803311D0: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x803311D4: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_803311D8:
    // 0x803311D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803311DC: nop

    // 0x803311E0: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803311E4: nop

    // 0x803311E8: beq         $t1, $zero, L_80331240
    if (ctx->r9 == 0) {
        // 0x803311EC: nop
    
            goto L_80331240;
    }
    // 0x803311EC: nop

    // 0x803311F0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803311F4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x803311F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803311FC: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80331200: jal         0x80015538
    // 0x80331204: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80331204: nop

    after_1:
    // 0x80331208: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033120C: nop

    // 0x80331210: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x80331214: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331218: nop

    // 0x8033121C: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331220: nop

    // 0x80331224: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
    // 0x80331228: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033122C: nop

    // 0x80331230: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80331234: nop

    // 0x80331238: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x8033123C: sh          $t7, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r15;
L_80331240:
    // 0x80331240: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331248: jal         0x8001B4AC
    // 0x8033124C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033124C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331250: beq         $v0, $zero, L_80331270
    if (ctx->r2 == 0) {
        // 0x80331254: nop
    
            goto L_80331270;
    }
    // 0x80331254: nop

    // 0x80331258: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033125C: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80331260: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331264: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331268: nop

    // 0x8033126C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331270:
    // 0x80331270: b           L_80331278
    // 0x80331274: nop

        goto L_80331278;
    // 0x80331274: nop

L_80331278:
    // 0x80331278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033127C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331280: jr          $ra
    // 0x80331284: nop

    return;
    // 0x80331284: nop

;}
RECOMP_FUNC void func_endol_80334880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334880: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334884: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334888: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033488C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334890: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334894: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334898: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033489C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803348A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803348A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803348A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803348AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803348B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803348B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803348B8: nop

    // 0x803348BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803348C0: nop

    // 0x803348C4: bne         $t1, $zero, L_8033491C
    if (ctx->r9 != 0) {
        // 0x803348C8: nop
    
            goto L_8033491C;
    }
    // 0x803348C8: nop

    // 0x803348CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803348D0: nop

    // 0x803348D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803348D8: nop

    // 0x803348DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803348E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803348E4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803348E8: nop

    // 0x803348EC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803348F0: nop

    // 0x803348F4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803348F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803348FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334900: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80334904: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334908: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033490C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334910: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80334914: jal         0x8001C0EC
    // 0x80334918: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334918: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_8033491C:
    // 0x8033491C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334920: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334924: jal         0x8001B4AC
    // 0x80334928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033492C: beq         $v0, $zero, L_8033494C
    if (ctx->r2 == 0) {
        // 0x80334930: nop
    
            goto L_8033494C;
    }
    // 0x80334930: nop

    // 0x80334934: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334938: addiu       $t8, $zero, 0x2A
    ctx->r24 = ADD32(0, 0X2A);
    // 0x8033493C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334940: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334944: nop

    // 0x80334948: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033494C:
    // 0x8033494C: b           L_80334954
    // 0x80334950: nop

        goto L_80334954;
    // 0x80334950: nop

L_80334954:
    // 0x80334954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334958: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033495C: jr          $ra
    // 0x80334960: nop

    return;
    // 0x80334960: nop

;}
RECOMP_FUNC void func_endol_80334090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334090: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334094: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334098: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033409C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803340A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803340A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803340A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803340B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803340B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803340B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803340BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803340C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803340C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803340C8: nop

    // 0x803340CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803340D0: nop

    // 0x803340D4: bne         $t1, $zero, L_8033412C
    if (ctx->r9 != 0) {
        // 0x803340D8: nop
    
            goto L_8033412C;
    }
    // 0x803340D8: nop

    // 0x803340DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803340E0: nop

    // 0x803340E4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803340E8: nop

    // 0x803340EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803340F0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803340F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803340F8: nop

    // 0x803340FC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334100: nop

    // 0x80334104: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033410C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334110: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80334114: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334118: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033411C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334120: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80334124: jal         0x8001C0EC
    // 0x80334128: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334128: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_8033412C:
    // 0x8033412C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334130: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334134: jal         0x8001B4AC
    // 0x80334138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033413C: beq         $v0, $zero, L_8033415C
    if (ctx->r2 == 0) {
        // 0x80334140: nop
    
            goto L_8033415C;
    }
    // 0x80334140: nop

    // 0x80334144: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334148: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x8033414C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334150: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334154: nop

    // 0x80334158: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033415C:
    // 0x8033415C: b           L_80334164
    // 0x80334160: nop

        goto L_80334164;
    // 0x80334160: nop

L_80334164:
    // 0x80334164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334168: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033416C: jr          $ra
    // 0x80334170: nop

    return;
    // 0x80334170: nop

;}
RECOMP_FUNC void func_endol_80331288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331288: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033128C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331290: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331294: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331298: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033129C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803312A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803312A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803312B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803312B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803312B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803312BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803312C0: nop

    // 0x803312C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803312C8: nop

    // 0x803312CC: bne         $t1, $zero, L_80331324
    if (ctx->r9 != 0) {
        // 0x803312D0: nop
    
            goto L_80331324;
    }
    // 0x803312D0: nop

    // 0x803312D4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803312D8: nop

    // 0x803312DC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803312E0: nop

    // 0x803312E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803312E8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803312EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803312F0: nop

    // 0x803312F4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803312F8: nop

    // 0x803312FC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331304: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331308: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x8033130C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331310: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331318: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8033131C: jal         0x8001C0EC
    // 0x80331320: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331320: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80331324:
    // 0x80331324: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331328: nop

    // 0x8033132C: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80331330: nop

    // 0x80331334: beq         $t9, $zero, L_8033138C
    if (ctx->r25 == 0) {
        // 0x80331338: nop
    
            goto L_8033138C;
    }
    // 0x80331338: nop

    // 0x8033133C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331340: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80331344: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331348: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033134C: jal         0x80015538
    // 0x80331350: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80331350: nop

    after_1:
    // 0x80331354: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331358: nop

    // 0x8033135C: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80331360: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331364: nop

    // 0x80331368: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8033136C: nop

    // 0x80331370: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x80331374: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331378: nop

    // 0x8033137C: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80331380: nop

    // 0x80331384: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x80331388: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_8033138C:
    // 0x8033138C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331390: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331394: jal         0x8001B4AC
    // 0x80331398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033139C: beq         $v0, $zero, L_803313BC
    if (ctx->r2 == 0) {
        // 0x803313A0: nop
    
            goto L_803313BC;
    }
    // 0x803313A0: nop

    // 0x803313A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803313A8: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x803313AC: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x803313B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803313B4: nop

    // 0x803313B8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803313BC:
    // 0x803313BC: b           L_803313C4
    // 0x803313C0: nop

        goto L_803313C4;
    // 0x803313C0: nop

L_803313C4:
    // 0x803313C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803313C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803313CC: jr          $ra
    // 0x803313D0: nop

    return;
    // 0x803313D0: nop

;}
RECOMP_FUNC void func_endol_80335D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335D2C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80335D30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335D34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335D38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335D3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335D40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335D48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335D50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335D54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335D58: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80335D5C: b           L_80335D64
    // 0x80335D60: nop

        goto L_80335D64;
    // 0x80335D60: nop

L_80335D64:
    // 0x80335D64: jr          $ra
    // 0x80335D68: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80335D68: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_endol_80331C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331C58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331C5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331C60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331C64: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331C68: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331C6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331C70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331C80: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331C84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331C88: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331C8C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331C90: nop

    // 0x80331C94: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331C98: nop

    // 0x80331C9C: bne         $t1, $zero, L_80331D24
    if (ctx->r9 != 0) {
        // 0x80331CA0: nop
    
            goto L_80331D24;
    }
    // 0x80331CA0: nop

    // 0x80331CA4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331CA8: nop

    // 0x80331CAC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331CB0: nop

    // 0x80331CB4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331CB8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331CBC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331CC0: nop

    // 0x80331CC4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331CC8: nop

    // 0x80331CCC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331CD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331CD4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331CD8: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331CDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CE0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331CE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331CE8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80331CEC: jal         0x8001C0EC
    // 0x80331CF0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331CF0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80331CF4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331CF8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80331CFC: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80331D00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331D04: nop

    // 0x80331D08: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80331D0C: nop

    // 0x80331D10: beq         $t1, $zero, L_80331D24
    if (ctx->r9 == 0) {
        // 0x80331D14: nop
    
            goto L_80331D24;
    }
    // 0x80331D14: nop

    // 0x80331D18: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331D1C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80331D20: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_80331D24:
    // 0x80331D24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D2C: jal         0x8001B4AC
    // 0x80331D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331D34: beq         $v0, $zero, L_80331D54
    if (ctx->r2 == 0) {
        // 0x80331D38: nop
    
            goto L_80331D54;
    }
    // 0x80331D38: nop

    // 0x80331D3C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331D40: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x80331D44: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80331D48: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331D4C: nop

    // 0x80331D50: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80331D54:
    // 0x80331D54: b           L_80331D5C
    // 0x80331D58: nop

        goto L_80331D5C;
    // 0x80331D58: nop

L_80331D5C:
    // 0x80331D5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331D64: jr          $ra
    // 0x80331D68: nop

    return;
    // 0x80331D68: nop

;}
RECOMP_FUNC void func_endol_80334BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334BD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334BD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334BDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334BE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334BE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334BE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334BEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334BF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334BF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334BF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334BFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334C00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334C04: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334C08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334C0C: nop

    // 0x80334C10: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334C14: nop

    // 0x80334C18: bne         $t1, $zero, L_80334C70
    if (ctx->r9 != 0) {
        // 0x80334C1C: nop
    
            goto L_80334C70;
    }
    // 0x80334C1C: nop

    // 0x80334C20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334C24: nop

    // 0x80334C28: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334C2C: nop

    // 0x80334C30: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334C34: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334C38: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334C3C: nop

    // 0x80334C40: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334C44: nop

    // 0x80334C48: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334C4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334C50: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334C54: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80334C58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334C5C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334C60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334C64: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80334C68: jal         0x8001C0EC
    // 0x80334C6C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334C6C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80334C70:
    // 0x80334C70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334C74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334C78: jal         0x8001B4AC
    // 0x80334C7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334C7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334C80: beq         $v0, $zero, L_80334CA0
    if (ctx->r2 == 0) {
        // 0x80334C84: nop
    
            goto L_80334CA0;
    }
    // 0x80334C84: nop

    // 0x80334C88: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334C8C: addiu       $t8, $zero, 0x2C
    ctx->r24 = ADD32(0, 0X2C);
    // 0x80334C90: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334C94: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334C98: nop

    // 0x80334C9C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80334CA0:
    // 0x80334CA0: b           L_80334CA8
    // 0x80334CA4: nop

        goto L_80334CA8;
    // 0x80334CA4: nop

L_80334CA8:
    // 0x80334CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334CAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334CB0: jr          $ra
    // 0x80334CB4: nop

    return;
    // 0x80334CB4: nop

;}
RECOMP_FUNC void func_endol_80336B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336B8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80336B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80336B94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336B98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336B9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336BA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336BA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336BA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336BAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336BB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336BB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336BB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336BBC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80336BC0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80336BC4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80336BC8: lh          $t1, 0x1304($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X1304);
    // 0x80336BCC: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x80336BD0: bne         $t1, $at, L_80336CFC
    if (ctx->r9 != ctx->r1) {
        // 0x80336BD4: nop
    
            goto L_80336CFC;
    }
    // 0x80336BD4: nop

    // 0x80336BD8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80336BDC: nop

    // 0x80336BE0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336BE4: nop

    // 0x80336BE8: bne         $t3, $zero, L_80336C54
    if (ctx->r11 != 0) {
        // 0x80336BEC: nop
    
            goto L_80336C54;
    }
    // 0x80336BEC: nop

    // 0x80336BF0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80336BF4: nop

    // 0x80336BF8: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80336BFC: nop

    // 0x80336C00: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80336C04: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x80336C08: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80336C0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336C10: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C14: nop

    // 0x80336C18: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80336C1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336C20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336C24: lwc1        $f6, 0x129C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X129C);
    // 0x80336C28: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C2C: nop

    // 0x80336C30: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
    // 0x80336C34: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C38: nop

    // 0x80336C3C: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80336C40: nop

    // 0x80336C44: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x80336C48: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C4C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80336C50: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
L_80336C54:
    // 0x80336C54: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C58: nop

    // 0x80336C5C: lh          $t5, 0xA6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA6);
    // 0x80336C60: nop

    // 0x80336C64: bne         $t5, $zero, L_80336CB8
    if (ctx->r13 != 0) {
        // 0x80336C68: nop
    
            goto L_80336CB8;
    }
    // 0x80336C68: nop

    // 0x80336C6C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C70: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80336C74: sh          $t6, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r14;
    // 0x80336C78: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C7C: nop

    // 0x80336C80: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80336C84: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80336C88: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C8C: nop

    // 0x80336C90: swc1        $f10, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f10.u32l;
    // 0x80336C94: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80336C98: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C9C: nop

    // 0x80336CA0: swc1        $f16, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f16.u32l;
    // 0x80336CA4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80336CA8: nop

    // 0x80336CAC: lwc1        $f18, 0x2C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80336CB0: b           L_80336CFC
    // 0x80336CB4: swc1        $f18, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f18.u32l;
        goto L_80336CFC;
    // 0x80336CB4: swc1        $f18, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f18.u32l;
L_80336CB8:
    // 0x80336CB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336CBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336CC0: jal         0x80029C40
    // 0x80336CC4: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80336CC4: nop

    after_0:
    // 0x80336CC8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80336CCC: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80336CD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336CD4: lwc1        $f4, 0x44($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80336CD8: nop

    // 0x80336CDC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80336CE0: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x80336CE4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80336CE8: nop

    // 0x80336CEC: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80336CF0: nop

    // 0x80336CF4: addiu       $t5, $t3, -0x1
    ctx->r13 = ADD32(ctx->r11, -0X1);
    // 0x80336CF8: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
L_80336CFC:
    // 0x80336CFC: b           L_80336D04
    // 0x80336D00: nop

        goto L_80336D04;
    // 0x80336D00: nop

L_80336D04:
    // 0x80336D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80336D08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80336D0C: jr          $ra
    // 0x80336D10: nop

    return;
    // 0x80336D10: nop

;}
RECOMP_FUNC void func_endol_803320E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803320E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803320E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803320E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803320EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803320F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803320F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803320F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803320FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332104: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332108: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033210C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332110: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332114: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332118: nop

    // 0x8033211C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332120: nop

    // 0x80332124: bne         $t1, $zero, L_803321F8
    if (ctx->r9 != 0) {
        // 0x80332128: nop
    
            goto L_803321F8;
    }
    // 0x80332128: nop

    // 0x8033212C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332130: nop

    // 0x80332134: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332138: nop

    // 0x8033213C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332140: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332144: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332148: nop

    // 0x8033214C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332150: nop

    // 0x80332154: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332158: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033215C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332160: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80332164: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332168: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033216C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332170: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80332174: jal         0x8001C0EC
    // 0x80332178: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332178: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x8033217C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332184: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332188: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x8033218C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332190: jal         0x8001ABF4
    // 0x80332194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332198: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033219C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803321A0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803321A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321A8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x803321AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803321B0: jal         0x8001ABF4
    // 0x803321B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803321B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803321B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321BC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803321C0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803321C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321C8: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    // 0x803321CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803321D0: jal         0x8001ABF4
    // 0x803321D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803321D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803321D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321DC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803321E0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803321E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321E8: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x803321EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803321F0: jal         0x8001ABF4
    // 0x803321F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803321F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803321F8:
    // 0x803321F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803321FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332200: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x80332204: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332208: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033220C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332210: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332214: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332218: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033221C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332220: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x80332224: jal         0x80015538
    // 0x80332228: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80332228: nop

    after_5:
    // 0x8033222C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332230: nop

    // 0x80332234: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80332238: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033223C: nop

    // 0x80332240: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332244: nop

    // 0x80332248: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x8033224C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332250: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332254: jal         0x8001B4AC
    // 0x80332258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80332258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033225C: beq         $v0, $zero, L_8033227C
    if (ctx->r2 == 0) {
        // 0x80332260: nop
    
            goto L_8033227C;
    }
    // 0x80332260: nop

    // 0x80332264: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332268: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x8033226C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80332270: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332274: nop

    // 0x80332278: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033227C:
    // 0x8033227C: b           L_80332284
    // 0x80332280: nop

        goto L_80332284;
    // 0x80332280: nop

L_80332284:
    // 0x80332284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332288: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033228C: jr          $ra
    // 0x80332290: nop

    return;
    // 0x80332290: nop

;}
RECOMP_FUNC void func_endol_80335300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335300: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80335304: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335308: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033530C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335310: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335314: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335318: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033531C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335320: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335324: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335328: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033532C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335330: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80335334: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80335338: nop

    // 0x8033533C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335340: nop

    // 0x80335344: bne         $t1, $zero, L_80335464
    if (ctx->r9 != 0) {
        // 0x80335348: nop
    
            goto L_80335464;
    }
    // 0x80335348: nop

    // 0x8033534C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80335350: nop

    // 0x80335354: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335358: nop

    // 0x8033535C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335360: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335364: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335368: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033536C: nop

    // 0x80335370: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80335374: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80335378: nop

    // 0x8033537C: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80335380: nop

    // 0x80335384: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80335388: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033538C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80335390: nop

    // 0x80335394: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
    // 0x80335398: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033539C: nop

    // 0x803353A0: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x803353A4: nop

    // 0x803353A8: sh          $t9, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r25;
    // 0x803353AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803353B0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803353B4: addiu       $t0, $t0, -0x6380
    ctx->r8 = ADD32(ctx->r8, -0X6380);
    // 0x803353B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803353BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803353C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803353C4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x803353C8: jal         0x8001C0EC
    // 0x803353CC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803353CC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x803353D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803353D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803353D8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803353DC: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803353E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803353E4: jal         0x8001ABF4
    // 0x803353E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803353E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803353EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803353F0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803353F4: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803353F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803353FC: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80335400: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80335404: jal         0x8001ABF4
    // 0x80335408: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80335408: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033540C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335410: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335414: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80335418: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033541C: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80335420: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80335424: jal         0x8001ABF4
    // 0x80335428: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80335428: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8033542C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335430: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335434: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80335438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033543C: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x80335440: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335444: jal         0x8001ABF4
    // 0x80335448: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80335448: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8033544C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80335450: addiu       $t1, $zero, 0x2D
    ctx->r9 = ADD32(0, 0X2D);
    // 0x80335454: sh          $t1, 0xC0($t3)
    MEM_H(0XC0, ctx->r11) = ctx->r9;
    // 0x80335458: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033545C: nop

    // 0x80335460: sh          $zero, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = 0;
L_80335464:
    // 0x80335464: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80335468: nop

    // 0x8033546C: lh          $t5, 0xB6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XB6);
    // 0x80335470: nop

    // 0x80335474: bne         $t5, $zero, L_80335530
    if (ctx->r13 != 0) {
        // 0x80335478: nop
    
            goto L_80335530;
    }
    // 0x80335478: nop

    // 0x8033547C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335480: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335484: jal         0x8001B62C
    // 0x80335488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x80335488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8033548C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80335490: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335494: nop

    // 0x80335498: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x8033549C: nop

    // 0x803354A0: bc1f        L_80335530
    if (!c1cs) {
        // 0x803354A4: nop
    
            goto L_80335530;
    }
    // 0x803354A4: nop

    // 0x803354A8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803354AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803354B0: sh          $t6, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = ctx->r14;
    // 0x803354B4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803354B8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803354BC: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803354C0: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x803354C4: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x803354C8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803354CC: lwc1        $f18, 0x1C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803354D0: addiu       $a1, $a1, 0x71B4
    ctx->r5 = ADD32(ctx->r5, 0X71B4);
    // 0x803354D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803354D8: jal         0x80027464
    // 0x803354DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x803354DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x803354E0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803354E4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803354E8: jal         0x80026F10
    // 0x803354EC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_7;
    // 0x803354EC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_7:
    // 0x803354F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803354F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803354F8: jal         0x8001BBDC
    // 0x803354FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x803354FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80335500: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80335504: addiu       $t8, $t8, -0x6030
    ctx->r24 = ADD32(ctx->r24, -0X6030);
    // 0x80335508: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033550C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80335510: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335514: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335518: jal         0x8001C0EC
    // 0x8033551C: addiu       $a3, $zero, 0xCC
    ctx->r7 = ADD32(0, 0XCC);
    func_8001C0EC(rdram, ctx);
        goto after_9;
    // 0x8033551C: addiu       $a3, $zero, 0xCC
    ctx->r7 = ADD32(0, 0XCC);
    after_9:
    // 0x80335520: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80335524: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80335528: nop

    // 0x8033552C: sh          $t0, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r8;
L_80335530:
    // 0x80335530: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80335534: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335538: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x8033553C: nop

    // 0x80335540: bne         $t4, $at, L_803355E0
    if (ctx->r12 != ctx->r1) {
        // 0x80335544: nop
    
            goto L_803355E0;
    }
    // 0x80335544: nop

    // 0x80335548: lh          $t2, 0xB6($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XB6);
    // 0x8033554C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335550: bne         $t2, $at, L_803355E0
    if (ctx->r10 != ctx->r1) {
        // 0x80335554: nop
    
            goto L_803355E0;
    }
    // 0x80335554: nop

    // 0x80335558: jal         0x80014E80
    // 0x8033555C: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    Math_Random(rdram, ctx);
        goto after_10;
    // 0x8033555C: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    after_10:
    // 0x80335560: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80335564: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80335568: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033556C: swc1        $f6, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f6.u32l;
    // 0x80335570: jal         0x80014E80
    // 0x80335574: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    Math_Random(rdram, ctx);
        goto after_11;
    // 0x80335574: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    after_11:
    // 0x80335578: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8033557C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80335580: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80335584: swc1        $f10, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f10.u32l;
    // 0x80335588: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8033558C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335590: lh          $t9, 0xB8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XB8);
    // 0x80335594: lwc1        $f16, 0x18($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X18);
    // 0x80335598: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8033559C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x803355A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803355A4: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x803355A8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803355AC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803355B0: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x803355B4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803355B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803355BC: lh          $t1, 0xB8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB8);
    // 0x803355C0: lwc1        $f18, 0x20($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X20);
    // 0x803355C4: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x803355C8: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803355CC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803355D0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803355D4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803355D8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803355DC: swc1        $f18, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f18.u32l;
L_803355E0:
    // 0x803355E0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803355E4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x803355E8: lh          $t2, 0xC0($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XC0);
    // 0x803355EC: nop

    // 0x803355F0: bne         $t2, $at, L_80335634
    if (ctx->r10 != ctx->r1) {
        // 0x803355F4: nop
    
            goto L_80335634;
    }
    // 0x803355F4: nop

    // 0x803355F8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803355FC: nop

    // 0x80335600: lh          $t6, 0xC0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC0);
    // 0x80335604: nop

    // 0x80335608: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8033560C: sh          $t7, 0xC0($t5)
    MEM_H(0XC0, ctx->r13) = ctx->r15;
    // 0x80335610: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80335614: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x80335618: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033561C: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80335620: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x80335624: jal         0x8007F070
    // 0x80335628: nop

    func_8007F070(rdram, ctx);
        goto after_12;
    // 0x80335628: nop

    after_12:
    // 0x8033562C: b           L_80335790
    // 0x80335630: nop

        goto L_80335790;
    // 0x80335630: nop

L_80335634:
    // 0x80335634: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80335638: nop

    // 0x8033563C: lh          $t0, 0xC0($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XC0);
    // 0x80335640: nop

    // 0x80335644: bne         $t0, $zero, L_80335778
    if (ctx->r8 != 0) {
        // 0x80335648: nop
    
            goto L_80335778;
    }
    // 0x80335648: nop

    // 0x8033564C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80335650: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335654: lbu         $t4, 0x132($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X132);
    // 0x80335658: nop

    // 0x8033565C: bne         $t4, $at, L_80335770
    if (ctx->r12 != ctx->r1) {
        // 0x80335660: nop
    
            goto L_80335770;
    }
    // 0x80335660: nop

    // 0x80335664: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80335668: nop

    // 0x8033566C: lbu         $t2, 0x132($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X132);
    // 0x80335670: nop

    // 0x80335674: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x80335678: sb          $t6, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r14;
    // 0x8033567C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80335680: nop

    // 0x80335684: lh          $a0, 0xB8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XB8);
    // 0x80335688: jal         0x8002B114
    // 0x8033568C: nop

    func_8002B114(rdram, ctx);
        goto after_13;
    // 0x8033568C: nop

    after_13:
    // 0x80335690: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335694: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335698: jal         0x8001BB34
    // 0x8033569C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_14;
    // 0x8033569C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x803356A0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803356A4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803356A8: sh          $t5, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r13;
    // 0x803356AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803356B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803356B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803356B8: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x803356BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803356C0: jal         0x800175F0
    // 0x803356C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_15;
    // 0x803356C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x803356C8: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_803356CC:
    // 0x803356CC: jal         0x80014E80
    // 0x803356D0: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    Math_Random(rdram, ctx);
        goto after_16;
    // 0x803356D0: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    after_16:
    // 0x803356D4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x803356D8: jal         0x80014E80
    // 0x803356DC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    Math_Random(rdram, ctx);
        goto after_17;
    // 0x803356DC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_17:
    // 0x803356E0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803356E4: jal         0x80014E80
    // 0x803356E8: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    Math_Random(rdram, ctx);
        goto after_18;
    // 0x803356E8: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    after_18:
    // 0x803356EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803356F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803356F4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x803356F8: addiu       $t1, $zero, 0x4B0
    ctx->r9 = ADD32(0, 0X4B0);
    // 0x803356FC: subu        $t4, $t1, $t0
    ctx->r12 = SUB32(ctx->r9, ctx->r8);
    // 0x80335700: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80335704: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80335708: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8033570C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80335710: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80335714: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80335718: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033571C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80335720: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80335724: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80335728: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033572C: addiu       $a1, $a1, 0x71C0
    ctx->r5 = ADD32(ctx->r5, 0X71C0);
    // 0x80335730: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335734: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335738: jal         0x80027464
    // 0x8033573C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_19;
    // 0x8033573C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_19:
    // 0x80335740: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80335744: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x80335748: nop

    // 0x8033574C: addiu       $t3, $t6, 0x1
    ctx->r11 = ADD32(ctx->r14, 0X1);
    // 0x80335750: sll         $t7, $t3, 16
    ctx->r15 = S32(ctx->r11 << 16);
    // 0x80335754: sra         $t5, $t7, 16
    ctx->r13 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80335758: slti        $at, $t5, 0xA
    ctx->r1 = SIGNED(ctx->r13) < 0XA ? 1 : 0;
    // 0x8033575C: bne         $at, $zero, L_803356CC
    if (ctx->r1 != 0) {
        // 0x80335760: sh          $t3, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r11;
            goto L_803356CC;
    }
    // 0x80335760: sh          $t3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r11;
    // 0x80335764: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80335768: addiu       $t9, $zero, 0x5C
    ctx->r25 = ADD32(0, 0X5C);
    // 0x8033576C: sh          $t9, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r25;
L_80335770:
    // 0x80335770: b           L_80335790
    // 0x80335774: nop

        goto L_80335790;
    // 0x80335774: nop

L_80335778:
    // 0x80335778: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033577C: nop

    // 0x80335780: lh          $t0, 0xC0($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XC0);
    // 0x80335784: nop

    // 0x80335788: addiu       $t4, $t0, -0x1
    ctx->r12 = ADD32(ctx->r8, -0X1);
    // 0x8033578C: sh          $t4, 0xC0($t1)
    MEM_H(0XC0, ctx->r9) = ctx->r12;
L_80335790:
    // 0x80335790: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80335794: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335798: lbu         $t6, 0x132($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X132);
    // 0x8033579C: nop

    // 0x803357A0: bne         $t6, $at, L_803357F0
    if (ctx->r14 != ctx->r1) {
        // 0x803357A4: nop
    
            goto L_803357F0;
    }
    // 0x803357A4: nop

    // 0x803357A8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803357AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803357B0: lh          $t7, 0xC2($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XC2);
    // 0x803357B4: nop

    // 0x803357B8: bne         $t7, $at, L_803357D8
    if (ctx->r15 != ctx->r1) {
        // 0x803357BC: nop
    
            goto L_803357D8;
    }
    // 0x803357BC: nop

    // 0x803357C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803357C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803357C8: jal         0x8002B114
    // 0x803357CC: nop

    func_8002B114(rdram, ctx);
        goto after_20;
    // 0x803357CC: nop

    after_20:
    // 0x803357D0: b           L_803357F0
    // 0x803357D4: nop

        goto L_803357F0;
    // 0x803357D4: nop

L_803357D8:
    // 0x803357D8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803357DC: nop

    // 0x803357E0: lh          $t9, 0xC2($t5)
    ctx->r25 = MEM_H(ctx->r13, 0XC2);
    // 0x803357E4: nop

    // 0x803357E8: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x803357EC: sh          $t8, 0xC2($t5)
    MEM_H(0XC2, ctx->r13) = ctx->r24;
L_803357F0:
    // 0x803357F0: b           L_803357F8
    // 0x803357F4: nop

        goto L_803357F8;
    // 0x803357F4: nop

L_803357F8:
    // 0x803357F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803357FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80335800: jr          $ra
    // 0x80335804: nop

    return;
    // 0x80335804: nop

;}
RECOMP_FUNC void func_endol_80331E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331E54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331E58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331E5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331E60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331E64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331E68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331E70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331E78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331E7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331E80: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331E84: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331E88: nop

    // 0x80331E8C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331E90: nop

    // 0x80331E94: bne         $t1, $zero, L_80331F6C
    if (ctx->r9 != 0) {
        // 0x80331E98: nop
    
            goto L_80331F6C;
    }
    // 0x80331E98: nop

    // 0x80331E9C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331EA0: nop

    // 0x80331EA4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331EA8: nop

    // 0x80331EAC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331EB0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331EB4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331EB8: nop

    // 0x80331EBC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331EC0: nop

    // 0x80331EC4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331EC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ECC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331ED0: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331ED4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331ED8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331EDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331EE0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80331EE4: jal         0x8001C0EC
    // 0x80331EE8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331EE8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80331EEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EF0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331EF4: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80331EF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EFC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80331F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F04: jal         0x8001ABF4
    // 0x80331F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331F0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F10: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331F14: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80331F18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F1C: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80331F20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331F24: jal         0x8001ABF4
    // 0x80331F28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331F28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80331F2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F30: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331F34: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80331F38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F3C: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80331F40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331F44: jal         0x8001ABF4
    // 0x80331F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80331F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80331F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F50: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331F54: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80331F58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F5C: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x80331F60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331F64: jal         0x8001ABF4
    // 0x80331F68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80331F68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80331F6C:
    // 0x80331F6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F74: jal         0x8002A8B4
    // 0x80331F78: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x80331F78: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_5:
    // 0x80331F7C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331F80: nop

    // 0x80331F84: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331F88: nop

    // 0x80331F8C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331F90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F98: jal         0x8001B4AC
    // 0x80331F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80331F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80331FA0: beq         $v0, $zero, L_80331FC0
    if (ctx->r2 == 0) {
        // 0x80331FA4: nop
    
            goto L_80331FC0;
    }
    // 0x80331FA4: nop

    // 0x80331FA8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331FAC: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80331FB0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331FB4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331FB8: nop

    // 0x80331FBC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331FC0:
    // 0x80331FC0: b           L_80331FC8
    // 0x80331FC4: nop

        goto L_80331FC8;
    // 0x80331FC4: nop

L_80331FC8:
    // 0x80331FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331FCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331FD0: jr          $ra
    // 0x80331FD4: nop

    return;
    // 0x80331FD4: nop

;}
RECOMP_FUNC void func_endol_803366B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803366B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803366B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803366BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803366C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803366C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803366C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803366CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803366D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803366D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803366D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803366DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803366E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803366E4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803366E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803366EC: nop

    // 0x803366F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803366F4: nop

    // 0x803366F8: bne         $t1, $zero, L_8033674C
    if (ctx->r9 != 0) {
        // 0x803366FC: nop
    
            goto L_8033674C;
    }
    // 0x803366FC: nop

    // 0x80336700: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80336704: nop

    // 0x80336708: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033670C: nop

    // 0x80336710: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336714: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336718: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033671C: nop

    // 0x80336720: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336724: nop

    // 0x80336728: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033672C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80336730: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336734: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80336738: nop

    // 0x8033673C: swc1        $f4, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f4.u32l;
    // 0x80336740: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80336744: addiu       $t8, $zero, 0xB3
    ctx->r24 = ADD32(0, 0XB3);
    // 0x80336748: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_8033674C:
    // 0x8033674C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80336750: nop

    // 0x80336754: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80336758: lwc1        $f14, 0xD4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x8033675C: jal         0x80015538
    // 0x80336760: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80336760: nop

    after_0:
    // 0x80336764: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80336768: nop

    // 0x8033676C: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80336770: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80336774: nop

    // 0x80336778: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x8033677C: nop

    // 0x80336780: bne         $t4, $zero, L_803367A0
    if (ctx->r12 != 0) {
        // 0x80336784: nop
    
            goto L_803367A0;
    }
    // 0x80336784: nop

    // 0x80336788: jal         0x80330000
    // 0x8033678C: nop

    func_endol_80330000(rdram, ctx);
        goto after_1;
    // 0x8033678C: nop

    after_1:
    // 0x80336790: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80336794: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x80336798: b           L_803367B8
    // 0x8033679C: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
        goto L_803367B8;
    // 0x8033679C: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
L_803367A0:
    // 0x803367A0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803367A4: nop

    // 0x803367A8: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x803367AC: nop

    // 0x803367B0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x803367B4: sh          $t8, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r24;
L_803367B8:
    // 0x803367B8: b           L_803367C0
    // 0x803367BC: nop

        goto L_803367C0;
    // 0x803367BC: nop

L_803367C0:
    // 0x803367C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803367C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803367C8: jr          $ra
    // 0x803367CC: nop

    return;
    // 0x803367CC: nop

;}
RECOMP_FUNC void func_endol_80336368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336368: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033636C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336370: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336374: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336378: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033637C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336380: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336384: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336388: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033638C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336390: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336394: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80336398: b           L_803363A0
    // 0x8033639C: nop

        goto L_803363A0;
    // 0x8033639C: nop

L_803363A0:
    // 0x803363A0: jr          $ra
    // 0x803363A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803363A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_endol_80330B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330B5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330B60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330B64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330B68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330B6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330B74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330B88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330B8C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330B90: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330B94: nop

    // 0x80330B98: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330B9C: nop

    // 0x80330BA0: bne         $t1, $zero, L_80330C78
    if (ctx->r9 != 0) {
        // 0x80330BA4: nop
    
            goto L_80330C78;
    }
    // 0x80330BA4: nop

    // 0x80330BA8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330BAC: nop

    // 0x80330BB0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330BB4: nop

    // 0x80330BB8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330BBC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330BC0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330BC4: nop

    // 0x80330BC8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330BCC: nop

    // 0x80330BD0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330BD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BD8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330BDC: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330BE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BE4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330BE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330BEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80330BF0: jal         0x8001C0EC
    // 0x80330BF4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330BF4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80330BF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BFC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330C00: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330C04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C08: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80330C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330C10: jal         0x8001ABF4
    // 0x80330C14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330C14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80330C18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C1C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330C20: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330C24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C28: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80330C2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330C30: jal         0x8001ABF4
    // 0x80330C34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330C34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330C38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C3C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330C40: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330C44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C48: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80330C4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330C50: jal         0x8001ABF4
    // 0x80330C54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80330C54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80330C58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C5C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330C60: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330C64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C68: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x80330C6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330C70: jal         0x8001ABF4
    // 0x80330C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80330C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80330C78:
    // 0x80330C78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C80: jal         0x8001B4AC
    // 0x80330C84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80330C84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80330C88: beq         $v0, $zero, L_80330CA8
    if (ctx->r2 == 0) {
        // 0x80330C8C: nop
    
            goto L_80330CA8;
    }
    // 0x80330C8C: nop

    // 0x80330C90: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330C94: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80330C98: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330C9C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330CA0: nop

    // 0x80330CA4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330CA8:
    // 0x80330CA8: b           L_80330CB0
    // 0x80330CAC: nop

        goto L_80330CB0;
    // 0x80330CAC: nop

L_80330CB0:
    // 0x80330CB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330CB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330CB8: jr          $ra
    // 0x80330CBC: nop

    return;
    // 0x80330CBC: nop

;}
RECOMP_FUNC void func_endol_80336E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80336E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80336E9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336EA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336EA4: jal         0x8002B0E4
    // 0x80336EA8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80336EA8: nop

    after_0:
    // 0x80336EAC: b           L_80336EB4
    // 0x80336EB0: nop

        goto L_80336EB4;
    // 0x80336EB0: nop

L_80336EB4:
    // 0x80336EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80336EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80336EBC: jr          $ra
    // 0x80336EC0: nop

    return;
    // 0x80336EC0: nop

;}
RECOMP_FUNC void func_endol_803326BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803326BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803326C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803326C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803326C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803326CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803326D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803326D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803326DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803326E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803326E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803326EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803326F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803326F4: nop

    // 0x803326F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803326FC: nop

    // 0x80332700: bne         $t1, $zero, L_80332758
    if (ctx->r9 != 0) {
        // 0x80332704: nop
    
            goto L_80332758;
    }
    // 0x80332704: nop

    // 0x80332708: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033270C: nop

    // 0x80332710: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332714: nop

    // 0x80332718: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033271C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332720: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332724: nop

    // 0x80332728: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033272C: nop

    // 0x80332730: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332738: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033273C: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80332740: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332744: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033274C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80332750: jal         0x8001C0EC
    // 0x80332754: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332754: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80332758:
    // 0x80332758: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033275C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332760: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x80332764: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332768: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033276C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332770: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332774: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332778: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033277C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332780: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x80332784: jal         0x80015538
    // 0x80332788: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80332788: nop

    after_1:
    // 0x8033278C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332790: nop

    // 0x80332794: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80332798: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033279C: nop

    // 0x803327A0: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803327A4: nop

    // 0x803327A8: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x803327AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803327B4: jal         0x8001B4AC
    // 0x803327B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803327B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803327BC: beq         $v0, $zero, L_803327DC
    if (ctx->r2 == 0) {
        // 0x803327C0: nop
    
            goto L_803327DC;
    }
    // 0x803327C0: nop

    // 0x803327C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803327C8: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x803327CC: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x803327D0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803327D4: nop

    // 0x803327D8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803327DC:
    // 0x803327DC: b           L_803327E4
    // 0x803327E0: nop

        goto L_803327E4;
    // 0x803327E0: nop

L_803327E4:
    // 0x803327E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803327E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803327EC: jr          $ra
    // 0x803327F0: nop

    return;
    // 0x803327F0: nop

;}
RECOMP_FUNC void func_endol_80335808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335808: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033580C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335810: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335814: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335818: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033581C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335820: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335828: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033582C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335830: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335834: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335838: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033583C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335840: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335844: nop

    // 0x80335848: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x8033584C: nop

    // 0x80335850: bne         $t1, $zero, L_80335888
    if (ctx->r9 != 0) {
        // 0x80335854: nop
    
            goto L_80335888;
    }
    // 0x80335854: nop

    // 0x80335858: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033585C: nop

    // 0x80335860: lh          $t3, 0xB4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB4);
    // 0x80335864: nop

    // 0x80335868: bne         $t3, $zero, L_80335880
    if (ctx->r11 != 0) {
        // 0x8033586C: nop
    
            goto L_80335880;
    }
    // 0x8033586C: nop

    // 0x80335870: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335874: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335878: jal         0x8001BB34
    // 0x8033587C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033587C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80335880:
    // 0x80335880: b           L_803358B0
    // 0x80335884: nop

        goto L_803358B0;
    // 0x80335884: nop

L_80335888:
    // 0x80335888: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033588C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335890: lh          $s0, 0x108($t4)
    ctx->r16 = MEM_H(ctx->r12, 0X108);
    // 0x80335894: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335898: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x8033589C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x803358A0: sltiu       $t6, $s0, 0x1
    ctx->r14 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803358A4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803358A8: jal         0x8001BB34
    // 0x803358AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803358AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_803358B0:
    // 0x803358B0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803358B4: nop

    // 0x803358B8: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x803358BC: nop

    // 0x803358C0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803358C4: sltiu       $at, $t9, 0x31
    ctx->r1 = ctx->r25 < 0X31 ? 1 : 0;
    // 0x803358C8: beq         $at, $zero, L_80335BFC
    if (ctx->r1 == 0) {
        // 0x803358CC: nop
    
            goto L_80335BFC;
    }
    // 0x803358CC: nop

    // 0x803358D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803358D4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803358D8: addu        $at, $at, $t9
    gpr jr_addend_803358E4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803358DC: lw          $t9, 0x72D0($at)
    ctx->r25 = ADD32(ctx->r1, 0X72D0);
    // 0x803358E0: nop

    // 0x803358E4: jr          $t9
    // 0x803358E8: nop

    switch (jr_addend_803358E4 >> 2) {
        case 0: goto L_803358EC; break;
        case 1: goto L_803358FC; break;
        case 2: goto L_8033590C; break;
        case 3: goto L_8033591C; break;
        case 4: goto L_8033592C; break;
        case 5: goto L_8033593C; break;
        case 6: goto L_8033594C; break;
        case 7: goto L_8033595C; break;
        case 8: goto L_8033596C; break;
        case 9: goto L_8033597C; break;
        case 10: goto L_8033598C; break;
        case 11: goto L_8033599C; break;
        case 12: goto L_803359AC; break;
        case 13: goto L_803359BC; break;
        case 14: goto L_803359CC; break;
        case 15: goto L_803359DC; break;
        case 16: goto L_803359EC; break;
        case 17: goto L_803359FC; break;
        case 18: goto L_80335A0C; break;
        case 19: goto L_80335A1C; break;
        case 20: goto L_80335A2C; break;
        case 21: goto L_80335A3C; break;
        case 22: goto L_80335A4C; break;
        case 23: goto L_80335A5C; break;
        case 24: goto L_80335A6C; break;
        case 25: goto L_80335A7C; break;
        case 26: goto L_80335A8C; break;
        case 27: goto L_80335A9C; break;
        case 28: goto L_80335AAC; break;
        case 29: goto L_80335ABC; break;
        case 30: goto L_80335ACC; break;
        case 31: goto L_80335ADC; break;
        case 32: goto L_80335AEC; break;
        case 33: goto L_80335AFC; break;
        case 34: goto L_80335B0C; break;
        case 35: goto L_80335B1C; break;
        case 36: goto L_80335B2C; break;
        case 37: goto L_80335B3C; break;
        case 38: goto L_80335B4C; break;
        case 39: goto L_80335B5C; break;
        case 40: goto L_80335B6C; break;
        case 41: goto L_80335B7C; break;
        case 42: goto L_80335B8C; break;
        case 43: goto L_80335B9C; break;
        case 44: goto L_80335BAC; break;
        case 45: goto L_80335BBC; break;
        case 46: goto L_80335BCC; break;
        case 47: goto L_80335BDC; break;
        case 48: goto L_80335BEC; break;
        default: switch_error(__func__, 0x803358E4, 0x803372D0);
    }
    // 0x803358E8: nop

L_803358EC:
    // 0x803358EC: jal         0x80330B5C
    // 0x803358F0: nop

    func_endol_80330B5C(rdram, ctx);
        goto after_2;
    // 0x803358F0: nop

    after_2:
    // 0x803358F4: b           L_80335C04
    // 0x803358F8: nop

        goto L_80335C04;
    // 0x803358F8: nop

L_803358FC:
    // 0x803358FC: jal         0x80330CC0
    // 0x80335900: nop

    func_endol_80330CC0(rdram, ctx);
        goto after_3;
    // 0x80335900: nop

    after_3:
    // 0x80335904: b           L_80335C04
    // 0x80335908: nop

        goto L_80335C04;
    // 0x80335908: nop

L_8033590C:
    // 0x8033590C: jal         0x80330DA4
    // 0x80335910: nop

    func_endol_80330DA4(rdram, ctx);
        goto after_4;
    // 0x80335910: nop

    after_4:
    // 0x80335914: b           L_80335C04
    // 0x80335918: nop

        goto L_80335C04;
    // 0x80335918: nop

L_8033591C:
    // 0x8033591C: jal         0x80330E88
    // 0x80335920: nop

    func_endol_80330E88(rdram, ctx);
        goto after_5;
    // 0x80335920: nop

    after_5:
    // 0x80335924: b           L_80335C04
    // 0x80335928: nop

        goto L_80335C04;
    // 0x80335928: nop

L_8033592C:
    // 0x8033592C: jal         0x80331130
    // 0x80335930: nop

    func_endol_80331130(rdram, ctx);
        goto after_6;
    // 0x80335930: nop

    after_6:
    // 0x80335934: b           L_80335C04
    // 0x80335938: nop

        goto L_80335C04;
    // 0x80335938: nop

L_8033593C:
    // 0x8033593C: jal         0x80331288
    // 0x80335940: nop

    func_endol_80331288(rdram, ctx);
        goto after_7;
    // 0x80335940: nop

    after_7:
    // 0x80335944: b           L_80335C04
    // 0x80335948: nop

        goto L_80335C04;
    // 0x80335948: nop

L_8033594C:
    // 0x8033594C: jal         0x803313D4
    // 0x80335950: nop

    func_endol_803313D4(rdram, ctx);
        goto after_8;
    // 0x80335950: nop

    after_8:
    // 0x80335954: b           L_80335C04
    // 0x80335958: nop

        goto L_80335C04;
    // 0x80335958: nop

L_8033595C:
    // 0x8033595C: jal         0x803314D4
    // 0x80335960: nop

    func_endol_803314D4(rdram, ctx);
        goto after_9;
    // 0x80335960: nop

    after_9:
    // 0x80335964: b           L_80335C04
    // 0x80335968: nop

        goto L_80335C04;
    // 0x80335968: nop

L_8033596C:
    // 0x8033596C: jal         0x803315B8
    // 0x80335970: nop

    func_endol_803315B8(rdram, ctx);
        goto after_10;
    // 0x80335970: nop

    after_10:
    // 0x80335974: b           L_80335C04
    // 0x80335978: nop

        goto L_80335C04;
    // 0x80335978: nop

L_8033597C:
    // 0x8033597C: jal         0x80331708
    // 0x80335980: nop

    func_endol_80331708(rdram, ctx);
        goto after_11;
    // 0x80335980: nop

    after_11:
    // 0x80335984: b           L_80335C04
    // 0x80335988: nop

        goto L_80335C04;
    // 0x80335988: nop

L_8033598C:
    // 0x8033598C: jal         0x803317EC
    // 0x80335990: nop

    func_endol_803317EC(rdram, ctx);
        goto after_12;
    // 0x80335990: nop

    after_12:
    // 0x80335994: b           L_80335C04
    // 0x80335998: nop

        goto L_80335C04;
    // 0x80335998: nop

L_8033599C:
    // 0x8033599C: jal         0x803318D0
    // 0x803359A0: nop

    func_endol_803318D0(rdram, ctx);
        goto after_13;
    // 0x803359A0: nop

    after_13:
    // 0x803359A4: b           L_80335C04
    // 0x803359A8: nop

        goto L_80335C04;
    // 0x803359A8: nop

L_803359AC:
    // 0x803359AC: jal         0x80331C58
    // 0x803359B0: nop

    func_endol_80331C58(rdram, ctx);
        goto after_14;
    // 0x803359B0: nop

    after_14:
    // 0x803359B4: b           L_80335C04
    // 0x803359B8: nop

        goto L_80335C04;
    // 0x803359B8: nop

L_803359BC:
    // 0x803359BC: jal         0x80331D6C
    // 0x803359C0: nop

    func_endol_80331D6C(rdram, ctx);
        goto after_15;
    // 0x803359C0: nop

    after_15:
    // 0x803359C4: b           L_80335C04
    // 0x803359C8: nop

        goto L_80335C04;
    // 0x803359C8: nop

L_803359CC:
    // 0x803359CC: jal         0x80331E50
    // 0x803359D0: nop

    func_endol_80331E50(rdram, ctx);
        goto after_16;
    // 0x803359D0: nop

    after_16:
    // 0x803359D4: b           L_80335C04
    // 0x803359D8: nop

        goto L_80335C04;
    // 0x803359D8: nop

L_803359DC:
    // 0x803359DC: jal         0x80331FD8
    // 0x803359E0: nop

    func_endol_80331FD8(rdram, ctx);
        goto after_17;
    // 0x803359E0: nop

    after_17:
    // 0x803359E4: b           L_80335C04
    // 0x803359E8: nop

        goto L_80335C04;
    // 0x803359E8: nop

L_803359EC:
    // 0x803359EC: jal         0x803320E0
    // 0x803359F0: nop

    func_endol_803320E0(rdram, ctx);
        goto after_18;
    // 0x803359F0: nop

    after_18:
    // 0x803359F4: b           L_80335C04
    // 0x803359F8: nop

        goto L_80335C04;
    // 0x803359F8: nop

L_803359FC:
    // 0x803359FC: jal         0x80332294
    // 0x80335A00: nop

    func_endol_80332294(rdram, ctx);
        goto after_19;
    // 0x80335A00: nop

    after_19:
    // 0x80335A04: b           L_80335C04
    // 0x80335A08: nop

        goto L_80335C04;
    // 0x80335A08: nop

L_80335A0C:
    // 0x80335A0C: jal         0x8033244C
    // 0x80335A10: nop

    func_endol_8033244C(rdram, ctx);
        goto after_20;
    // 0x80335A10: nop

    after_20:
    // 0x80335A14: b           L_80335C04
    // 0x80335A18: nop

        goto L_80335C04;
    // 0x80335A18: nop

L_80335A1C:
    // 0x80335A1C: jal         0x80332584
    // 0x80335A20: nop

    func_endol_80332584(rdram, ctx);
        goto after_21;
    // 0x80335A20: nop

    after_21:
    // 0x80335A24: b           L_80335C04
    // 0x80335A28: nop

        goto L_80335C04;
    // 0x80335A28: nop

L_80335A2C:
    // 0x80335A2C: jal         0x803326BC
    // 0x80335A30: nop

    func_endol_803326BC(rdram, ctx);
        goto after_22;
    // 0x80335A30: nop

    after_22:
    // 0x80335A34: b           L_80335C04
    // 0x80335A38: nop

        goto L_80335C04;
    // 0x80335A38: nop

L_80335A3C:
    // 0x80335A3C: jal         0x803327F4
    // 0x80335A40: nop

    func_endol_803327F4(rdram, ctx);
        goto after_23;
    // 0x80335A40: nop

    after_23:
    // 0x80335A44: b           L_80335C04
    // 0x80335A48: nop

        goto L_80335C04;
    // 0x80335A48: nop

L_80335A4C:
    // 0x80335A4C: jal         0x803329C4
    // 0x80335A50: nop

    func_endol_803329C4(rdram, ctx);
        goto after_24;
    // 0x80335A50: nop

    after_24:
    // 0x80335A54: b           L_80335C04
    // 0x80335A58: nop

        goto L_80335C04;
    // 0x80335A58: nop

L_80335A5C:
    // 0x80335A5C: jal         0x80332B2C
    // 0x80335A60: nop

    func_endol_80332B2C(rdram, ctx);
        goto after_25;
    // 0x80335A60: nop

    after_25:
    // 0x80335A64: b           L_80335C04
    // 0x80335A68: nop

        goto L_80335C04;
    // 0x80335A68: nop

L_80335A6C:
    // 0x80335A6C: jal         0x80332CD0
    // 0x80335A70: nop

    func_endol_80332CD0(rdram, ctx);
        goto after_26;
    // 0x80335A70: nop

    after_26:
    // 0x80335A74: b           L_80335C04
    // 0x80335A78: nop

        goto L_80335C04;
    // 0x80335A78: nop

L_80335A7C:
    // 0x80335A7C: jal         0x80332F7C
    // 0x80335A80: nop

    func_endol_80332F7C(rdram, ctx);
        goto after_27;
    // 0x80335A80: nop

    after_27:
    // 0x80335A84: b           L_80335C04
    // 0x80335A88: nop

        goto L_80335C04;
    // 0x80335A88: nop

L_80335A8C:
    // 0x80335A8C: jal         0x803331F8
    // 0x80335A90: nop

    func_endol_803331F8(rdram, ctx);
        goto after_28;
    // 0x80335A90: nop

    after_28:
    // 0x80335A94: b           L_80335C04
    // 0x80335A98: nop

        goto L_80335C04;
    // 0x80335A98: nop

L_80335A9C:
    // 0x80335A9C: jal         0x803333F4
    // 0x80335AA0: nop

    func_endol_803333F4(rdram, ctx);
        goto after_29;
    // 0x80335AA0: nop

    after_29:
    // 0x80335AA4: b           L_80335C04
    // 0x80335AA8: nop

        goto L_80335C04;
    // 0x80335AA8: nop

L_80335AAC:
    // 0x80335AAC: jal         0x803335F0
    // 0x80335AB0: nop

    func_endol_803335F0(rdram, ctx);
        goto after_30;
    // 0x80335AB0: nop

    after_30:
    // 0x80335AB4: b           L_80335C04
    // 0x80335AB8: nop

        goto L_80335C04;
    // 0x80335AB8: nop

L_80335ABC:
    // 0x80335ABC: jal         0x8033381C
    // 0x80335AC0: nop

    func_endol_8033381C(rdram, ctx);
        goto after_31;
    // 0x80335AC0: nop

    after_31:
    // 0x80335AC4: b           L_80335C04
    // 0x80335AC8: nop

        goto L_80335C04;
    // 0x80335AC8: nop

L_80335ACC:
    // 0x80335ACC: jal         0x803339AC
    // 0x80335AD0: nop

    func_endol_803339AC(rdram, ctx);
        goto after_32;
    // 0x80335AD0: nop

    after_32:
    // 0x80335AD4: b           L_80335C04
    // 0x80335AD8: nop

        goto L_80335C04;
    // 0x80335AD8: nop

L_80335ADC:
    // 0x80335ADC: jal         0x80333BA0
    // 0x80335AE0: nop

    func_endol_80333BA0(rdram, ctx);
        goto after_33;
    // 0x80335AE0: nop

    after_33:
    // 0x80335AE4: b           L_80335C04
    // 0x80335AE8: nop

        goto L_80335C04;
    // 0x80335AE8: nop

L_80335AEC:
    // 0x80335AEC: jal         0x80333CD4
    // 0x80335AF0: nop

    func_endol_80333CD4(rdram, ctx);
        goto after_34;
    // 0x80335AF0: nop

    after_34:
    // 0x80335AF4: b           L_80335C04
    // 0x80335AF8: nop

        goto L_80335C04;
    // 0x80335AF8: nop

L_80335AFC:
    // 0x80335AFC: jal         0x80333EC4
    // 0x80335B00: nop

    func_endol_80333EC4(rdram, ctx);
        goto after_35;
    // 0x80335B00: nop

    after_35:
    // 0x80335B04: b           L_80335C04
    // 0x80335B08: nop

        goto L_80335C04;
    // 0x80335B08: nop

L_80335B0C:
    // 0x80335B0C: jal         0x80334090
    // 0x80335B10: nop

    func_endol_80334090(rdram, ctx);
        goto after_36;
    // 0x80335B10: nop

    after_36:
    // 0x80335B14: b           L_80335C04
    // 0x80335B18: nop

        goto L_80335C04;
    // 0x80335B18: nop

L_80335B1C:
    // 0x80335B1C: jal         0x80334174
    // 0x80335B20: nop

    func_endol_80334174(rdram, ctx);
        goto after_37;
    // 0x80335B20: nop

    after_37:
    // 0x80335B24: b           L_80335C04
    // 0x80335B28: nop

        goto L_80335C04;
    // 0x80335B28: nop

L_80335B2C:
    // 0x80335B2C: jal         0x80334258
    // 0x80335B30: nop

    func_endol_80334258(rdram, ctx);
        goto after_38;
    // 0x80335B30: nop

    after_38:
    // 0x80335B34: b           L_80335C04
    // 0x80335B38: nop

        goto L_80335C04;
    // 0x80335B38: nop

L_80335B3C:
    // 0x80335B3C: jal         0x803343F8
    // 0x80335B40: nop

    func_endol_803343F8(rdram, ctx);
        goto after_39;
    // 0x80335B40: nop

    after_39:
    // 0x80335B44: b           L_80335C04
    // 0x80335B48: nop

        goto L_80335C04;
    // 0x80335B48: nop

L_80335B4C:
    // 0x80335B4C: jal         0x8033461C
    // 0x80335B50: nop

    func_endol_8033461C(rdram, ctx);
        goto after_40;
    // 0x80335B50: nop

    after_40:
    // 0x80335B54: b           L_80335C04
    // 0x80335B58: nop

        goto L_80335C04;
    // 0x80335B58: nop

L_80335B5C:
    // 0x80335B5C: jal         0x80334738
    // 0x80335B60: nop

    func_endol_80334738(rdram, ctx);
        goto after_41;
    // 0x80335B60: nop

    after_41:
    // 0x80335B64: b           L_80335C04
    // 0x80335B68: nop

        goto L_80335C04;
    // 0x80335B68: nop

L_80335B6C:
    // 0x80335B6C: jal         0x80334880
    // 0x80335B70: nop

    func_endol_80334880(rdram, ctx);
        goto after_42;
    // 0x80335B70: nop

    after_42:
    // 0x80335B74: b           L_80335C04
    // 0x80335B78: nop

        goto L_80335C04;
    // 0x80335B78: nop

L_80335B7C:
    // 0x80335B7C: jal         0x80334964
    // 0x80335B80: nop

    func_endol_80334964(rdram, ctx);
        goto after_43;
    // 0x80335B80: nop

    after_43:
    // 0x80335B84: b           L_80335C04
    // 0x80335B88: nop

        goto L_80335C04;
    // 0x80335B88: nop

L_80335B8C:
    // 0x80335B8C: jal         0x80334BD4
    // 0x80335B90: nop

    func_endol_80334BD4(rdram, ctx);
        goto after_44;
    // 0x80335B90: nop

    after_44:
    // 0x80335B94: b           L_80335C04
    // 0x80335B98: nop

        goto L_80335C04;
    // 0x80335B98: nop

L_80335B9C:
    // 0x80335B9C: jal         0x80334CB8
    // 0x80335BA0: nop

    func_endol_80334CB8(rdram, ctx);
        goto after_45;
    // 0x80335BA0: nop

    after_45:
    // 0x80335BA4: b           L_80335C04
    // 0x80335BA8: nop

        goto L_80335C04;
    // 0x80335BA8: nop

L_80335BAC:
    // 0x80335BAC: jal         0x80334DE8
    // 0x80335BB0: nop

    func_endol_80334DE8(rdram, ctx);
        goto after_46;
    // 0x80335BB0: nop

    after_46:
    // 0x80335BB4: b           L_80335C04
    // 0x80335BB8: nop

        goto L_80335C04;
    // 0x80335BB8: nop

L_80335BBC:
    // 0x80335BBC: jal         0x80334EEC
    // 0x80335BC0: nop

    func_endol_80334EEC(rdram, ctx);
        goto after_47;
    // 0x80335BC0: nop

    after_47:
    // 0x80335BC4: b           L_80335C04
    // 0x80335BC8: nop

        goto L_80335C04;
    // 0x80335BC8: nop

L_80335BCC:
    // 0x80335BCC: jal         0x8033509C
    // 0x80335BD0: nop

    func_endol_8033509C(rdram, ctx);
        goto after_48;
    // 0x80335BD0: nop

    after_48:
    // 0x80335BD4: b           L_80335C04
    // 0x80335BD8: nop

        goto L_80335C04;
    // 0x80335BD8: nop

L_80335BDC:
    // 0x80335BDC: jal         0x803351B0
    // 0x80335BE0: nop

    func_endol_803351B0(rdram, ctx);
        goto after_49;
    // 0x80335BE0: nop

    after_49:
    // 0x80335BE4: b           L_80335C04
    // 0x80335BE8: nop

        goto L_80335C04;
    // 0x80335BE8: nop

L_80335BEC:
    // 0x80335BEC: jal         0x80335300
    // 0x80335BF0: nop

    func_endol_80335300(rdram, ctx);
        goto after_50;
    // 0x80335BF0: nop

    after_50:
    // 0x80335BF4: b           L_80335C04
    // 0x80335BF8: nop

        goto L_80335C04;
    // 0x80335BF8: nop

L_80335BFC:
    // 0x80335BFC: b           L_80335C04
    // 0x80335C00: nop

        goto L_80335C04;
    // 0x80335C00: nop

L_80335C04:
    // 0x80335C04: b           L_80335C0C
    // 0x80335C08: nop

        goto L_80335C0C;
    // 0x80335C08: nop

L_80335C0C:
    // 0x80335C0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335C10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80335C14: jr          $ra
    // 0x80335C18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80335C18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_endol_80331708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331708: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033170C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331710: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331714: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331718: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033171C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331720: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331724: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033172C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331730: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331734: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331738: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033173C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331740: nop

    // 0x80331744: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331748: nop

    // 0x8033174C: bne         $t1, $zero, L_803317A4
    if (ctx->r9 != 0) {
        // 0x80331750: nop
    
            goto L_803317A4;
    }
    // 0x80331750: nop

    // 0x80331754: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331758: nop

    // 0x8033175C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331760: nop

    // 0x80331764: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331768: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033176C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331770: nop

    // 0x80331774: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331778: nop

    // 0x8033177C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331780: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331784: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331788: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x8033178C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331790: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331794: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331798: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8033179C: jal         0x8001C0EC
    // 0x803317A0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803317A0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_803317A4:
    // 0x803317A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317AC: jal         0x8001B4AC
    // 0x803317B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803317B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803317B4: beq         $v0, $zero, L_803317D4
    if (ctx->r2 == 0) {
        // 0x803317B8: nop
    
            goto L_803317D4;
    }
    // 0x803317B8: nop

    // 0x803317BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803317C0: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x803317C4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803317C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803317CC: nop

    // 0x803317D0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803317D4:
    // 0x803317D4: b           L_803317DC
    // 0x803317D8: nop

        goto L_803317DC;
    // 0x803317D8: nop

L_803317DC:
    // 0x803317DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803317E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803317E4: jr          $ra
    // 0x803317E8: nop

    return;
    // 0x803317E8: nop

;}
RECOMP_FUNC void func_endol_80336010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336010: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336014: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336018: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033601C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336020: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336024: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336028: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033602C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336030: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336034: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336038: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033603C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336040: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336044: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336048: nop

    // 0x8033604C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336050: nop

    // 0x80336054: bne         $t1, $zero, L_80336080
    if (ctx->r9 != 0) {
        // 0x80336058: nop
    
            goto L_80336080;
    }
    // 0x80336058: nop

    // 0x8033605C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336060: nop

    // 0x80336064: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336068: nop

    // 0x8033606C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336070: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336074: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336078: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x8033607C: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
L_80336080:
    // 0x80336080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033608C: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x80336090: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80336094: jal         0x800175F0
    // 0x80336098: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80336098: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8033609C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803360A0: nop

    // 0x803360A4: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x803360A8: nop

    // 0x803360AC: bne         $t8, $zero, L_80336100
    if (ctx->r24 != 0) {
        // 0x803360B0: nop
    
            goto L_80336100;
    }
    // 0x803360B0: nop

    // 0x803360B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803360B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803360BC: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x803360C0: nop

    // 0x803360C4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803360C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803360CC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803360D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803360D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803360D8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803360DC: sh          $zero, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = 0;
    // 0x803360E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803360E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803360E8: jal         0x8002B114
    // 0x803360EC: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x803360EC: nop

    after_1:
    // 0x803360F0: b           L_8033616C
    // 0x803360F4: nop

        goto L_8033616C;
    // 0x803360F4: nop

    // 0x803360F8: b           L_80336164
    // 0x803360FC: nop

        goto L_80336164;
    // 0x803360FC: nop

L_80336100:
    // 0x80336100: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x80336104: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336108: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033610C: nop

    // 0x80336110: swc1        $f4, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f4.u32l;
    // 0x80336114: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80336118: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033611C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336120: nop

    // 0x80336124: swc1        $f6, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f6.u32l;
    // 0x80336128: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033612C: nop

    // 0x80336130: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80336134: lwc1        $f14, 0xD4($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x80336138: jal         0x80015538
    // 0x8033613C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8033613C: nop

    after_2:
    // 0x80336140: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336144: nop

    // 0x80336148: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x8033614C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336150: nop

    // 0x80336154: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x80336158: nop

    // 0x8033615C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80336160: sh          $t8, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r24;
L_80336164:
    // 0x80336164: b           L_8033616C
    // 0x80336168: nop

        goto L_8033616C;
    // 0x80336168: nop

L_8033616C:
    // 0x8033616C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336174: jr          $ra
    // 0x80336178: nop

    return;
    // 0x80336178: nop

;}
RECOMP_FUNC void func_endol_80333EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333EC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333EC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333ECC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333ED0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333ED4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333ED8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333EDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333EE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333EE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333EE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333EEC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333EF0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333EF4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333EF8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333EFC: nop

    // 0x80333F00: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333F04: nop

    // 0x80333F08: bne         $t1, $zero, L_80333F80
    if (ctx->r9 != 0) {
        // 0x80333F0C: nop
    
            goto L_80333F80;
    }
    // 0x80333F0C: nop

    // 0x80333F10: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333F14: nop

    // 0x80333F18: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333F1C: nop

    // 0x80333F20: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333F24: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333F28: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333F2C: nop

    // 0x80333F30: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333F34: nop

    // 0x80333F38: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333F3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333F40: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333F44: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80333F48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333F4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333F54: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80333F58: jal         0x8001C0EC
    // 0x80333F5C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333F5C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80333F60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333F64: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333F68: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80333F6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333F70: addiu       $a3, $a3, 0x118
    ctx->r7 = ADD32(ctx->r7, 0X118);
    // 0x80333F74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333F78: jal         0x8001ABF4
    // 0x80333F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80333F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80333F80:
    // 0x80333F80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333F84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333F88: jal         0x8001B62C
    // 0x80333F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80333F8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80333F90: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80333F94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333F98: nop

    // 0x80333F9C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80333FA0: nop

    // 0x80333FA4: bc1f        L_80333FD4
    if (!c1cs) {
        // 0x80333FA8: nop
    
            goto L_80333FD4;
    }
    // 0x80333FA8: nop

    // 0x80333FAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FB0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333FB4: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80333FB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FBC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80333FC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333FC4: jal         0x8001ABF4
    // 0x80333FC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80333FC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80333FCC: b           L_80334038
    // 0x80333FD0: nop

        goto L_80334038;
    // 0x80333FD0: nop

L_80333FD4:
    // 0x80333FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FDC: jal         0x8001B62C
    // 0x80333FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x80333FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333FE4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80333FE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333FEC: nop

    // 0x80333FF0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80333FF4: nop

    // 0x80333FF8: bc1f        L_80334038
    if (!c1cs) {
        // 0x80333FFC: nop
    
            goto L_80334038;
    }
    // 0x80333FFC: nop

    // 0x80334000: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334004: nop

    // 0x80334008: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033400C: lwc1        $f14, 0xDC($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0XDC);
    // 0x80334010: jal         0x80015538
    // 0x80334014: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80334014: nop

    after_5:
    // 0x80334018: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033401C: nop

    // 0x80334020: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80334024: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334028: nop

    // 0x8033402C: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80334030: nop

    // 0x80334034: swc1        $f8, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f8.u32l;
L_80334038:
    // 0x80334038: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033403C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334040: jal         0x8001B4AC
    // 0x80334044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80334044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80334048: beq         $v0, $zero, L_80334078
    if (ctx->r2 == 0) {
        // 0x8033404C: nop
    
            goto L_80334078;
    }
    // 0x8033404C: nop

    // 0x80334050: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334054: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334058: nop

    // 0x8033405C: swc1        $f10, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f10.u32l;
    // 0x80334060: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334064: addiu       $t3, $zero, 0x23
    ctx->r11 = ADD32(0, 0X23);
    // 0x80334068: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033406C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334070: nop

    // 0x80334074: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80334078:
    // 0x80334078: b           L_80334080
    // 0x8033407C: nop

        goto L_80334080;
    // 0x8033407C: nop

L_80334080:
    // 0x80334080: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334084: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334088: jr          $ra
    // 0x8033408C: nop

    return;
    // 0x8033408C: nop

;}
RECOMP_FUNC void func_endol_803315B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803315B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803315BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803315C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803315C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803315C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803315CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803315D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803315D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803315D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803315DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803315E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803315E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803315E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803315EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803315F0: nop

    // 0x803315F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803315F8: nop

    // 0x803315FC: bne         $t1, $zero, L_80331674
    if (ctx->r9 != 0) {
        // 0x80331600: nop
    
            goto L_80331674;
    }
    // 0x80331600: nop

    // 0x80331604: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331608: nop

    // 0x8033160C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331610: nop

    // 0x80331614: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331618: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033161C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331620: nop

    // 0x80331624: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331628: nop

    // 0x8033162C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331630: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331634: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331638: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x8033163C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331640: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331644: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331648: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8033164C: jal         0x8001C0EC
    // 0x80331650: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331650: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80331654: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331658: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033165C: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80331660: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331664: addiu       $a3, $a3, 0x118
    ctx->r7 = ADD32(ctx->r7, 0X118);
    // 0x80331668: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033166C: jal         0x8001ABF4
    // 0x80331670: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331670: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80331674:
    // 0x80331674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033167C: jal         0x8001B62C
    // 0x80331680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80331680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331684: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80331688: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033168C: nop

    // 0x80331690: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80331694: nop

    // 0x80331698: bc1f        L_803316C0
    if (!c1cs) {
        // 0x8033169C: nop
    
            goto L_803316C0;
    }
    // 0x8033169C: nop

    // 0x803316A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316A4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803316A8: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803316AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316B0: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803316B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803316B8: jal         0x8001ABF4
    // 0x803316BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803316BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_803316C0:
    // 0x803316C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316C8: jal         0x8001B4AC
    // 0x803316CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803316CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803316D0: beq         $v0, $zero, L_803316F0
    if (ctx->r2 == 0) {
        // 0x803316D4: nop
    
            goto L_803316F0;
    }
    // 0x803316D4: nop

    // 0x803316D8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803316DC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803316E0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803316E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803316E8: nop

    // 0x803316EC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803316F0:
    // 0x803316F0: b           L_803316F8
    // 0x803316F4: nop

        goto L_803316F8;
    // 0x803316F4: nop

L_803316F8:
    // 0x803316F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803316FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331700: jr          $ra
    // 0x80331704: nop

    return;
    // 0x80331704: nop

;}
RECOMP_FUNC void func_endol_80333BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333BA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333BA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333BA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333BAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333BB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333BB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333BB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333BBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333BC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333BC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333BC8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333BCC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333BD0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333BD4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333BD8: nop

    // 0x80333BDC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333BE0: nop

    // 0x80333BE4: bne         $t1, $zero, L_80333C5C
    if (ctx->r9 != 0) {
        // 0x80333BE8: nop
    
            goto L_80333C5C;
    }
    // 0x80333BE8: nop

    // 0x80333BEC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333BF0: nop

    // 0x80333BF4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333BF8: nop

    // 0x80333BFC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333C00: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333C04: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333C08: nop

    // 0x80333C0C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333C10: nop

    // 0x80333C14: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333C18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C1C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333C20: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80333C24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333C2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333C30: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80333C34: jal         0x8001C0EC
    // 0x80333C38: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333C38: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80333C3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C40: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333C44: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80333C48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C4C: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80333C50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333C54: jal         0x8001ABF4
    // 0x80333C58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80333C58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80333C5C:
    // 0x80333C5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C64: jal         0x8001B4AC
    // 0x80333C68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80333C68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80333C6C: beq         $v0, $zero, L_80333CBC
    if (ctx->r2 == 0) {
        // 0x80333C70: nop
    
            goto L_80333CBC;
    }
    // 0x80333C70: nop

    // 0x80333C74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C7C: jal         0x8002A1FC
    // 0x80333C80: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x80333C80: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_3:
    // 0x80333C84: beq         $v0, $zero, L_80333CA4
    if (ctx->r2 == 0) {
        // 0x80333C88: nop
    
            goto L_80333CA4;
    }
    // 0x80333C88: nop

    // 0x80333C8C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333C90: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x80333C94: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80333C98: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333C9C: b           L_80333CBC
    // 0x80333CA0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_80333CBC;
    // 0x80333CA0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80333CA4:
    // 0x80333CA4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333CA8: addiu       $t1, $zero, 0x26
    ctx->r9 = ADD32(0, 0X26);
    // 0x80333CAC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80333CB0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333CB4: nop

    // 0x80333CB8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80333CBC:
    // 0x80333CBC: b           L_80333CC4
    // 0x80333CC0: nop

        goto L_80333CC4;
    // 0x80333CC0: nop

L_80333CC4:
    // 0x80333CC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333CC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333CCC: jr          $ra
    // 0x80333CD0: nop

    return;
    // 0x80333CD0: nop

;}
RECOMP_FUNC void func_endol_80334964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334964: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80334968: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033496C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334970: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334974: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334978: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033497C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334980: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334984: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334988: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033498C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334990: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334994: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80334998: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033499C: nop

    // 0x803349A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803349A4: nop

    // 0x803349A8: bne         $t1, $zero, L_80334A20
    if (ctx->r9 != 0) {
        // 0x803349AC: nop
    
            goto L_80334A20;
    }
    // 0x803349AC: nop

    // 0x803349B0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803349B4: nop

    // 0x803349B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803349BC: nop

    // 0x803349C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803349C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803349C8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803349CC: nop

    // 0x803349D0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803349D4: nop

    // 0x803349D8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803349DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803349E0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803349E4: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803349E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803349EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803349F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803349F4: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x803349F8: jal         0x8001C0EC
    // 0x803349FC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803349FC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80334A00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A04: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334A08: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80334A0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A10: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x80334A14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80334A18: jal         0x8001ABF4
    // 0x80334A1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80334A1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80334A20:
    // 0x80334A20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A28: jal         0x8001B62C
    // 0x80334A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80334A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334A30: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80334A34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334A38: nop

    // 0x80334A3C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80334A40: nop

    // 0x80334A44: bc1f        L_80334B8C
    if (!c1cs) {
        // 0x80334A48: nop
    
            goto L_80334B8C;
    }
    // 0x80334A48: nop

    // 0x80334A4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334A58: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x80334A5C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80334A60: jal         0x800175F0
    // 0x80334A64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x80334A64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80334A68: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80334A6C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334A70: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80334A74: lwc1        $f11, 0x72C0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X72C0);
    // 0x80334A78: lwc1        $f10, 0x72C4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X72C4);
    // 0x80334A7C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80334A80: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80334A84: jal         0x80034970
    // 0x80334A88: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x80334A88: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_4:
    // 0x80334A8C: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80334A90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334A94: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80334A98: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80334A9C: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80334AA0: nop

    // 0x80334AA4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334AA8: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80334AAC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334AB0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334AB4: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80334AB8: lwc1        $f19, 0x72C8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X72C8);
    // 0x80334ABC: lwc1        $f18, 0x72CC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X72CC);
    // 0x80334AC0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80334AC4: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80334AC8: jal         0x80036570
    // 0x80334ACC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x80334ACC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_5:
    // 0x80334AD0: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80334AD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334AD8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80334ADC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80334AE0: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80334AE4: nop

    // 0x80334AE8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80334AEC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x80334AF0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80334AF4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80334AF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334AFC: lwc1        $f18, 0x4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80334B00: nop

    // 0x80334B04: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80334B08: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80334B0C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80334B10: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80334B14: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334B18: lwc1        $f10, 0x1C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80334B1C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80334B20: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80334B24: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80334B28: addiu       $a1, $a1, 0x71A8
    ctx->r5 = ADD32(ctx->r5, 0X71A8);
    // 0x80334B2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334B30: jal         0x80027464
    // 0x80334B34: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80334B34: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x80334B38: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80334B3C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80334B40: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80334B44: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80334B48: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80334B4C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334B50: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80334B54: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80334B58: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334B5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334B60: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334B64: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x80334B68: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80334B6C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334B70: addiu       $a3, $a3, -0x605C
    ctx->r7 = ADD32(ctx->r7, -0X605C);
    // 0x80334B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334B78: jal         0x8001ABF4
    // 0x80334B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x80334B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80334B80: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80334B84: jal         0x80026F10
    // 0x80334B88: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_8;
    // 0x80334B88: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_8:
L_80334B8C:
    // 0x80334B8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B94: jal         0x8001B4AC
    // 0x80334B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_9;
    // 0x80334B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80334B9C: beq         $v0, $zero, L_80334BBC
    if (ctx->r2 == 0) {
        // 0x80334BA0: nop
    
            goto L_80334BBC;
    }
    // 0x80334BA0: nop

    // 0x80334BA4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80334BA8: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x80334BAC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80334BB0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80334BB4: nop

    // 0x80334BB8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80334BBC:
    // 0x80334BBC: b           L_80334BC4
    // 0x80334BC0: nop

        goto L_80334BC4;
    // 0x80334BC0: nop

L_80334BC4:
    // 0x80334BC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334BC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80334BCC: jr          $ra
    // 0x80334BD0: nop

    return;
    // 0x80334BD0: nop

;}
RECOMP_FUNC void func_endol_80330CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330CC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330CC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330CC8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330CCC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330CD0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330CD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330CD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330CDC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330CE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330CE4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330CE8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330CEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330CF0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330CF4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330CF8: nop

    // 0x80330CFC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330D00: nop

    // 0x80330D04: bne         $t1, $zero, L_80330D5C
    if (ctx->r9 != 0) {
        // 0x80330D08: nop
    
            goto L_80330D5C;
    }
    // 0x80330D08: nop

    // 0x80330D0C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330D10: nop

    // 0x80330D14: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330D18: nop

    // 0x80330D1C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330D20: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330D24: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330D28: nop

    // 0x80330D2C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330D30: nop

    // 0x80330D34: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330D38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D3C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330D40: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330D44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D48: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330D54: jal         0x8001C0EC
    // 0x80330D58: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330D58: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80330D5C:
    // 0x80330D5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D64: jal         0x8001B4AC
    // 0x80330D68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80330D68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330D6C: beq         $v0, $zero, L_80330D8C
    if (ctx->r2 == 0) {
        // 0x80330D70: nop
    
            goto L_80330D8C;
    }
    // 0x80330D70: nop

    // 0x80330D74: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330D78: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80330D7C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330D80: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330D84: nop

    // 0x80330D88: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330D8C:
    // 0x80330D8C: b           L_80330D94
    // 0x80330D90: nop

        goto L_80330D94;
    // 0x80330D90: nop

L_80330D94:
    // 0x80330D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330D9C: jr          $ra
    // 0x80330DA0: nop

    return;
    // 0x80330DA0: nop

;}
RECOMP_FUNC void func_endol_80336A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336A18: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80336A1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336A20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336A24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336A28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336A34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336A3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336A40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336A44: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80336A48: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80336A4C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80336A50: nop

    // 0x80336A54: beq         $t0, $zero, L_80336A68
    if (ctx->r8 == 0) {
        // 0x80336A58: nop
    
            goto L_80336A68;
    }
    // 0x80336A58: nop

    // 0x80336A5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336A60: bne         $t0, $at, L_80336A70
    if (ctx->r8 != ctx->r1) {
        // 0x80336A64: nop
    
            goto L_80336A70;
    }
    // 0x80336A64: nop

L_80336A68:
    // 0x80336A68: b           L_80336B64
    // 0x80336A6C: nop

        goto L_80336B64;
    // 0x80336A6C: nop

L_80336A70:
    // 0x80336A70: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80336A74: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80336A78: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x80336A7C: nop

    // 0x80336A80: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80336A84: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80336A88: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80336A8C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80336A90: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80336A94: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336A98: lh          $t4, 0x41F4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F4);
    // 0x80336A9C: nop

    // 0x80336AA0: addiu       $t5, $t4, -0x1E
    ctx->r13 = ADD32(ctx->r12, -0X1E);
    // 0x80336AA4: sltiu       $at, $t5, 0x10
    ctx->r1 = ctx->r13 < 0X10 ? 1 : 0;
    // 0x80336AA8: beq         $at, $zero, L_80336B64
    if (ctx->r1 == 0) {
        // 0x80336AAC: nop
    
            goto L_80336B64;
    }
    // 0x80336AAC: nop

    // 0x80336AB0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80336AB4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336AB8: addu        $at, $at, $t5
    gpr jr_addend_80336AC4 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80336ABC: lw          $t5, 0x73AC($at)
    ctx->r13 = ADD32(ctx->r1, 0X73AC);
    // 0x80336AC0: nop

    // 0x80336AC4: jr          $t5
    // 0x80336AC8: nop

    switch (jr_addend_80336AC4 >> 2) {
        case 0: goto L_80336ACC; break;
        case 1: goto L_80336ACC; break;
        case 2: goto L_80336ACC; break;
        case 3: goto L_80336B64; break;
        case 4: goto L_80336B64; break;
        case 5: goto L_80336B64; break;
        case 6: goto L_80336B64; break;
        case 7: goto L_80336B64; break;
        case 8: goto L_80336ACC; break;
        case 9: goto L_80336ACC; break;
        case 10: goto L_80336ACC; break;
        case 11: goto L_80336ACC; break;
        case 12: goto L_80336ACC; break;
        case 13: goto L_80336ACC; break;
        case 14: goto L_80336ACC; break;
        case 15: goto L_80336ACC; break;
        default: switch_error(__func__, 0x80336AC4, 0x803373AC);
    }
    // 0x80336AC8: nop

L_80336ACC:
    // 0x80336ACC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80336AD0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80336AD4: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x80336AD8: nop

    // 0x80336ADC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80336AE0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80336AE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80336AE8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80336AEC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80336AF0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336AF4: lh          $t9, 0x4258($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4258);
    // 0x80336AF8: nop

    // 0x80336AFC: beq         $t9, $zero, L_80336B5C
    if (ctx->r25 == 0) {
        // 0x80336B00: nop
    
            goto L_80336B5C;
    }
    // 0x80336B00: nop

    // 0x80336B04: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80336B08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336B0C: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x80336B10: addiu       $t0, $zero, 0x2E
    ctx->r8 = ADD32(0, 0X2E);
    // 0x80336B14: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80336B18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80336B1C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80336B20: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80336B24: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80336B28: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80336B2C: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80336B30: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80336B34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336B38: lh          $t5, 0xC2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XC2);
    // 0x80336B3C: nop

    // 0x80336B40: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80336B44: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80336B48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80336B4C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80336B50: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80336B54: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80336B58: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80336B5C:
    // 0x80336B5C: b           L_80336B64
    // 0x80336B60: nop

        goto L_80336B64;
    // 0x80336B60: nop

L_80336B64:
    // 0x80336B64: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80336B68: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80336B6C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80336B70: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80336B74: nop

    // 0x80336B78: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80336B7C: b           L_80336B84
    // 0x80336B80: nop

        goto L_80336B84;
    // 0x80336B80: nop

L_80336B84:
    // 0x80336B84: jr          $ra
    // 0x80336B88: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80336B88: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_endol_8033244C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033244C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332450: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332454: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332458: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033245C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332460: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332464: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332468: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033246C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332470: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332474: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332478: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033247C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332480: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332484: nop

    // 0x80332488: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033248C: nop

    // 0x80332490: bne         $t1, $zero, L_803324E8
    if (ctx->r9 != 0) {
        // 0x80332494: nop
    
            goto L_803324E8;
    }
    // 0x80332494: nop

    // 0x80332498: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033249C: nop

    // 0x803324A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803324A4: nop

    // 0x803324A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803324AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803324B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803324B4: nop

    // 0x803324B8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803324BC: nop

    // 0x803324C0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803324C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803324C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803324CC: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803324D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803324D4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803324D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803324E0: jal         0x8001C0EC
    // 0x803324E4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803324E4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_803324E8:
    // 0x803324E8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803324EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803324F0: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x803324F4: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803324F8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803324FC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332500: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332504: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332508: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033250C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332510: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x80332514: jal         0x80015538
    // 0x80332518: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80332518: nop

    after_1:
    // 0x8033251C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332520: nop

    // 0x80332524: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80332528: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033252C: nop

    // 0x80332530: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332534: nop

    // 0x80332538: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x8033253C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332540: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332544: jal         0x8001B4AC
    // 0x80332548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033254C: beq         $v0, $zero, L_8033256C
    if (ctx->r2 == 0) {
        // 0x80332550: nop
    
            goto L_8033256C;
    }
    // 0x80332550: nop

    // 0x80332554: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332558: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x8033255C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80332560: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332564: nop

    // 0x80332568: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033256C:
    // 0x8033256C: b           L_80332574
    // 0x80332570: nop

        goto L_80332574;
    // 0x80332570: nop

L_80332574:
    // 0x80332574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033257C: jr          $ra
    // 0x80332580: nop

    return;
    // 0x80332580: nop

;}
RECOMP_FUNC void func_endol_80332B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332B2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332B30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332B34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332B38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332B3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332B40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332B44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B5C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332B60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332B64: nop

    // 0x80332B68: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332B6C: nop

    // 0x80332B70: bne         $t1, $zero, L_80332BC8
    if (ctx->r9 != 0) {
        // 0x80332B74: nop
    
            goto L_80332BC8;
    }
    // 0x80332B74: nop

    // 0x80332B78: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332B7C: nop

    // 0x80332B80: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332B84: nop

    // 0x80332B88: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332B8C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332B90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332B94: nop

    // 0x80332B98: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332B9C: nop

    // 0x80332BA0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332BA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332BA8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332BAC: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80332BB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332BB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332BBC: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x80332BC0: jal         0x8001C0EC
    // 0x80332BC4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332BC4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80332BC8:
    // 0x80332BC8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332BCC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80332BD0: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80332BD4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332BD8: nop

    // 0x80332BDC: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80332BE0: nop

    // 0x80332BE4: beq         $t1, $zero, L_80332BF8
    if (ctx->r9 == 0) {
        // 0x80332BE8: nop
    
            goto L_80332BF8;
    }
    // 0x80332BE8: nop

    // 0x80332BEC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332BF0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80332BF4: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_80332BF8:
    // 0x80332BF8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332BFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C00: lh          $t6, 0xBA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XBA);
    // 0x80332C04: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332C08: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80332C0C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332C10: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332C14: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332C18: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332C1C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332C20: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x80332C24: jal         0x80015538
    // 0x80332C28: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80332C28: nop

    after_1:
    // 0x80332C2C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332C30: nop

    // 0x80332C34: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80332C38: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332C3C: nop

    // 0x80332C40: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332C44: nop

    // 0x80332C48: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x80332C4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C54: jal         0x8001B4AC
    // 0x80332C58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332C58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332C5C: beq         $v0, $zero, L_80332CB8
    if (ctx->r2 == 0) {
        // 0x80332C60: nop
    
            goto L_80332CB8;
    }
    // 0x80332C60: nop

    // 0x80332C64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332C68: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80332C6C: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x80332C70: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332C74: nop

    // 0x80332C78: lh          $t3, 0x108($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X108);
    // 0x80332C7C: nop

    // 0x80332C80: beq         $t3, $zero, L_80332C94
    if (ctx->r11 == 0) {
        // 0x80332C84: nop
    
            goto L_80332C94;
    }
    // 0x80332C84: nop

    // 0x80332C88: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332C8C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80332C90: sh          $t4, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r12;
L_80332C94:
    // 0x80332C94: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332C98: nop

    // 0x80332C9C: sh          $zero, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = 0;
    // 0x80332CA0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332CA4: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80332CA8: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80332CAC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332CB0: nop

    // 0x80332CB4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80332CB8:
    // 0x80332CB8: b           L_80332CC0
    // 0x80332CBC: nop

        goto L_80332CC0;
    // 0x80332CBC: nop

L_80332CC0:
    // 0x80332CC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332CC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332CC8: jr          $ra
    // 0x80332CCC: nop

    return;
    // 0x80332CCC: nop

;}
RECOMP_FUNC void func_endol_803370C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803370C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803370C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803370C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803370CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803370D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803370D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803370D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803370DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803370E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803370E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803370E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803370EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803370F0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803370F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803370F8: nop

    // 0x803370FC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337100: nop

    // 0x80337104: bne         $t1, $zero, L_80337148
    if (ctx->r9 != 0) {
        // 0x80337108: nop
    
            goto L_80337148;
    }
    // 0x80337108: nop

    // 0x8033710C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337110: nop

    // 0x80337114: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337118: nop

    // 0x8033711C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337120: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337124: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337128: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8033712C: addiu       $t5, $t5, -0x6028
    ctx->r13 = ADD32(ctx->r13, -0X6028);
    // 0x80337130: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337134: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80337138: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033713C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80337140: jal         0x8001C0EC
    // 0x80337144: addiu       $a3, $zero, 0x197
    ctx->r7 = ADD32(0, 0X197);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337144: addiu       $a3, $zero, 0x197
    ctx->r7 = ADD32(0, 0X197);
    after_0:
L_80337148:
    // 0x80337148: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033714C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337150: jal         0x8001B4AC
    // 0x80337154: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337154: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80337158: beq         $v0, $zero, L_80337170
    if (ctx->r2 == 0) {
        // 0x8033715C: nop
    
            goto L_80337170;
    }
    // 0x8033715C: nop

    // 0x80337160: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337164: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337168: jal         0x8002B114
    // 0x8033716C: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033716C: nop

    after_2:
L_80337170:
    // 0x80337170: b           L_80337178
    // 0x80337174: nop

        goto L_80337178;
    // 0x80337174: nop

L_80337178:
    // 0x80337178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033717C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337180: jr          $ra
    // 0x80337184: nop

    return;
    // 0x80337184: nop

;}
RECOMP_FUNC void func_endol_80336928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033692C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80336930: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336934: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336938: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033693C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336940: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336944: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336948: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033694C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336950: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336954: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336958: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033695C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80336960: nop

    // 0x80336964: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80336968: nop

    // 0x8033696C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80336970: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x80336974: beq         $at, $zero, L_803369F8
    if (ctx->r1 == 0) {
        // 0x80336978: nop
    
            goto L_803369F8;
    }
    // 0x80336978: nop

    // 0x8033697C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80336980: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80336984: addu        $at, $at, $t2
    gpr jr_addend_80336990 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80336988: lw          $t2, 0x7394($at)
    ctx->r10 = ADD32(ctx->r1, 0X7394);
    // 0x8033698C: nop

    // 0x80336990: jr          $t2
    // 0x80336994: nop

    switch (jr_addend_80336990 >> 2) {
        case 0: goto L_80336998; break;
        case 1: goto L_803369A8; break;
        case 2: goto L_803369B8; break;
        case 3: goto L_803369C8; break;
        case 4: goto L_803369D8; break;
        case 5: goto L_803369E8; break;
        default: switch_error(__func__, 0x80336990, 0x80337394);
    }
    // 0x80336994: nop

L_80336998:
    // 0x80336998: jal         0x80336368
    // 0x8033699C: nop

    func_endol_80336368(rdram, ctx);
        goto after_0;
    // 0x8033699C: nop

    after_0:
    // 0x803369A0: b           L_80336A00
    // 0x803369A4: nop

        goto L_80336A00;
    // 0x803369A4: nop

L_803369A8:
    // 0x803369A8: jal         0x803363A8
    // 0x803369AC: nop

    func_endol_803363A8(rdram, ctx);
        goto after_1;
    // 0x803369AC: nop

    after_1:
    // 0x803369B0: b           L_80336A00
    // 0x803369B4: nop

        goto L_80336A00;
    // 0x803369B4: nop

L_803369B8:
    // 0x803369B8: jal         0x8033651C
    // 0x803369BC: nop

    func_endol_8033651C(rdram, ctx);
        goto after_2;
    // 0x803369BC: nop

    after_2:
    // 0x803369C0: b           L_80336A00
    // 0x803369C4: nop

        goto L_80336A00;
    // 0x803369C4: nop

L_803369C8:
    // 0x803369C8: jal         0x80336600
    // 0x803369CC: nop

    func_endol_80336600(rdram, ctx);
        goto after_3;
    // 0x803369CC: nop

    after_3:
    // 0x803369D0: b           L_80336A00
    // 0x803369D4: nop

        goto L_80336A00;
    // 0x803369D4: nop

L_803369D8:
    // 0x803369D8: jal         0x803366B4
    // 0x803369DC: nop

    func_endol_803366B4(rdram, ctx);
        goto after_4;
    // 0x803369DC: nop

    after_4:
    // 0x803369E0: b           L_80336A00
    // 0x803369E4: nop

        goto L_80336A00;
    // 0x803369E4: nop

L_803369E8:
    // 0x803369E8: jal         0x803367D0
    // 0x803369EC: nop

    func_endol_803367D0(rdram, ctx);
        goto after_5;
    // 0x803369EC: nop

    after_5:
    // 0x803369F0: b           L_80336A00
    // 0x803369F4: nop

        goto L_80336A00;
    // 0x803369F4: nop

L_803369F8:
    // 0x803369F8: b           L_80336A00
    // 0x803369FC: nop

        goto L_80336A00;
    // 0x803369FC: nop

L_80336A00:
    // 0x80336A00: b           L_80336A08
    // 0x80336A04: nop

        goto L_80336A08;
    // 0x80336A04: nop

L_80336A08:
    // 0x80336A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80336A0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80336A10: jr          $ra
    // 0x80336A14: nop

    return;
    // 0x80336A14: nop

;}
RECOMP_FUNC void func_endol_8033617C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033617C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336184: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80336188: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033618C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336190: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336194: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033619C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803361A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803361A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803361A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803361AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803361B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803361B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803361B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803361BC: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x803361C0: nop

    // 0x803361C4: beq         $s0, $at, L_803361F8
    if (ctx->r16 == ctx->r1) {
        // 0x803361C8: nop
    
            goto L_803361F8;
    }
    // 0x803361C8: nop

    // 0x803361CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803361D0: beq         $s0, $at, L_80336208
    if (ctx->r16 == ctx->r1) {
        // 0x803361D4: nop
    
            goto L_80336208;
    }
    // 0x803361D4: nop

    // 0x803361D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803361DC: beq         $s0, $at, L_80336218
    if (ctx->r16 == ctx->r1) {
        // 0x803361E0: nop
    
            goto L_80336218;
    }
    // 0x803361E0: nop

    // 0x803361E4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803361E8: beq         $s0, $at, L_80336228
    if (ctx->r16 == ctx->r1) {
        // 0x803361EC: nop
    
            goto L_80336228;
    }
    // 0x803361EC: nop

    // 0x803361F0: b           L_80336238
    // 0x803361F4: nop

        goto L_80336238;
    // 0x803361F4: nop

L_803361F8:
    // 0x803361F8: jal         0x80335D2C
    // 0x803361FC: nop

    func_endol_80335D2C(rdram, ctx);
        goto after_0;
    // 0x803361FC: nop

    after_0:
    // 0x80336200: b           L_80336240
    // 0x80336204: nop

        goto L_80336240;
    // 0x80336204: nop

L_80336208:
    // 0x80336208: jal         0x80335D6C
    // 0x8033620C: nop

    func_endol_80335D6C(rdram, ctx);
        goto after_1;
    // 0x8033620C: nop

    after_1:
    // 0x80336210: b           L_80336240
    // 0x80336214: nop

        goto L_80336240;
    // 0x80336214: nop

L_80336218:
    // 0x80336218: jal         0x80335E88
    // 0x8033621C: nop

    func_endol_80335E88(rdram, ctx);
        goto after_2;
    // 0x8033621C: nop

    after_2:
    // 0x80336220: b           L_80336240
    // 0x80336224: nop

        goto L_80336240;
    // 0x80336224: nop

L_80336228:
    // 0x80336228: jal         0x80336010
    // 0x8033622C: nop

    func_endol_80336010(rdram, ctx);
        goto after_3;
    // 0x8033622C: nop

    after_3:
    // 0x80336230: b           L_80336240
    // 0x80336234: nop

        goto L_80336240;
    // 0x80336234: nop

L_80336238:
    // 0x80336238: b           L_80336240
    // 0x8033623C: nop

        goto L_80336240;
    // 0x8033623C: nop

L_80336240:
    // 0x80336240: b           L_80336248
    // 0x80336244: nop

        goto L_80336248;
    // 0x80336244: nop

L_80336248:
    // 0x80336248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033624C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80336250: jr          $ra
    // 0x80336254: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80336254: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_endol_803313D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803313D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803313D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803313DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803313E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803313E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803313E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803313EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803313F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803313F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803313F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803313FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331400: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331404: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331408: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033140C: nop

    // 0x80331410: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331414: nop

    // 0x80331418: bne         $t1, $zero, L_8033148C
    if (ctx->r9 != 0) {
        // 0x8033141C: nop
    
            goto L_8033148C;
    }
    // 0x8033141C: nop

    // 0x80331420: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331424: nop

    // 0x80331428: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033142C: nop

    // 0x80331430: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331434: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331438: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033143C: nop

    // 0x80331440: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331444: nop

    // 0x80331448: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033144C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331450: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331454: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331458: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033145C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331464: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80331468: jal         0x8001C0EC
    // 0x8033146C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033146C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80331470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331474: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033147C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80331480: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331484: jal         0x800175F0
    // 0x80331488: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80331488: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8033148C:
    // 0x8033148C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331490: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331494: jal         0x8001B4AC
    // 0x80331498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033149C: beq         $v0, $zero, L_803314BC
    if (ctx->r2 == 0) {
        // 0x803314A0: nop
    
            goto L_803314BC;
    }
    // 0x803314A0: nop

    // 0x803314A4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803314A8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x803314AC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803314B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803314B4: nop

    // 0x803314B8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803314BC:
    // 0x803314BC: b           L_803314C4
    // 0x803314C0: nop

        goto L_803314C4;
    // 0x803314C0: nop

L_803314C4:
    // 0x803314C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803314C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803314CC: jr          $ra
    // 0x803314D0: nop

    return;
    // 0x803314D0: nop

;}
RECOMP_FUNC void func_endol_80330090(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x803300A0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
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
    // 0x803300D0: addiu       $a1, $a1, 0x71D8
    ctx->r5 = ADD32(ctx->r5, 0X71D8);
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
    // 0x803300F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803300F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803300FC: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330104: jal         0x8001ABF4
    // 0x80330108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033010C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330110: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330114: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330118: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8033011C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330120: jal         0x8001ABF4
    // 0x80330124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330128: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033012C: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330130: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330134: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80330138: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033013C: jal         0x8001ABF4
    // 0x80330140: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80330140: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80330144: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330148: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x8033014C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330150: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x80330154: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330158: jal         0x8001ABF4
    // 0x8033015C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x8033015C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80330160: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330164: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330168: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033016C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330170: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330174: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330178: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033017C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330180: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80330184: sh          $t1, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r9;
    // 0x80330188: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033018C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330190: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330194: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330198: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033019C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803301A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803301A4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803301A8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x803301AC: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
    // 0x803301B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803301B4: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803301B8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803301BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803301C0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803301C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803301C8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803301CC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803301D0: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x803301D4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803301D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803301DC: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x803301E0: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803301E4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803301E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803301EC: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x803301F0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803301F4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803301F8: addiu       $a1, $a1, 0x7190
    ctx->r5 = ADD32(ctx->r5, 0X7190);
    // 0x803301FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330200: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330204: jal         0x80027464
    // 0x80330208: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80330208: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x8033020C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80330210: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330214: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330218: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033021C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330220: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330224: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330228: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033022C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330230: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330234: sh          $t2, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r10;
    // 0x80330238: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8033023C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330240: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80330244: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80330248: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033024C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80330250: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330254: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330258: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033025C: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x80330260: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330264: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330268: jal         0x80026F10
    // 0x8033026C: nop

    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x8033026C: nop

    after_6:
    // 0x80330270: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330274: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330278: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033027C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330280: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330284: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330288: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033028C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330290: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80330294: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330298: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033029C: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x803302A0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803302A4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803302A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803302AC: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803302B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803302B4: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x803302B8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x803302BC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803302C0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803302C4: addiu       $a1, $a1, 0x719C
    ctx->r5 = ADD32(ctx->r5, 0X719C);
    // 0x803302C8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803302CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803302D0: jal         0x80027464
    // 0x803302D4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x803302D4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x803302D8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803302DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803302E0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x803302E4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803302E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803302EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803302F0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803302F4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803302F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302FC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330300: sh          $t1, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r9;
    // 0x80330304: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330308: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033030C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330310: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330314: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330318: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033031C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330320: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330324: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330328: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x8033032C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330330: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330334: jal         0x80026F10
    // 0x80330338: nop

    func_80026F10(rdram, ctx);
        goto after_8;
    // 0x80330338: nop

    after_8:
    // 0x8033033C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330340: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330344: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330348: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033034C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330350: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330354: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330358: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033035C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80330360: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330364: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80330368: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033036C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330370: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330374: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80330378: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033037C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80330380: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330384: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330388: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033038C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80330390: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80330394: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330398: addiu       $a1, $a1, 0x719C
    ctx->r5 = ADD32(ctx->r5, 0X719C);
    // 0x8033039C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803303A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x803303A4: jal         0x80027464
    // 0x803303A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x803303A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x803303AC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803303B0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803303B4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x803303B8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803303BC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803303C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803303C4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803303C8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803303CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303D0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803303D4: sh          $t2, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r10;
    // 0x803303D8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803303DC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803303E0: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x803303E4: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x803303E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803303EC: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x803303F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803303F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303F8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803303FC: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x80330400: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330404: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330408: jal         0x80026F10
    // 0x8033040C: nop

    func_80026F10(rdram, ctx);
        goto after_10;
    // 0x8033040C: nop

    after_10:
    // 0x80330410: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330414: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330418: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033041C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330420: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330424: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330428: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033042C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330430: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330434: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330438: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x8033043C: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80330440: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80330444: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330448: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8033044C: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80330450: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330454: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330458: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8033045C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330460: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80330464: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330468: addiu       $a1, $a1, 0x719C
    ctx->r5 = ADD32(ctx->r5, 0X719C);
    // 0x8033046C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330470: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330474: jal         0x80027464
    // 0x80330478: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x80330478: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x8033047C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80330480: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330484: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330488: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033048C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330490: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330494: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330498: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033049C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803304A0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803304A4: sh          $t1, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r9;
    // 0x803304A8: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x803304AC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803304B0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803304B4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803304B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803304BC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803304C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803304C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803304C8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803304CC: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x803304D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803304D4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803304D8: jal         0x80026F10
    // 0x803304DC: nop

    func_80026F10(rdram, ctx);
        goto after_12;
    // 0x803304DC: nop

    after_12:
    // 0x803304E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803304E4: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803304E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803304EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803304F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803304F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803304F8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803304FC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330500: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80330504: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330508: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x8033050C: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330510: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330514: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330518: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033051C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330520: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330524: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330528: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033052C: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80330530: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80330534: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80330538: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033053C: addiu       $a1, $a1, 0x719C
    ctx->r5 = ADD32(ctx->r5, 0X719C);
    // 0x80330540: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330544: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80330548: jal         0x80027464
    // 0x8033054C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_13;
    // 0x8033054C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x80330550: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80330554: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330558: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8033055C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80330560: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330564: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330568: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033056C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330570: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330574: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330578: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x8033057C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80330580: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330584: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80330588: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8033058C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330590: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80330594: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330598: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033059C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803305A0: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x803305A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803305A8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803305AC: jal         0x80026F10
    // 0x803305B0: nop

    func_80026F10(rdram, ctx);
        goto after_14;
    // 0x803305B0: nop

    after_14:
    // 0x803305B4: b           L_803305BC
    // 0x803305B8: nop

        goto L_803305BC;
    // 0x803305B8: nop

L_803305BC:
    // 0x803305BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803305C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803305C4: jr          $ra
    // 0x803305C8: nop

    return;
    // 0x803305C8: nop

;}
RECOMP_FUNC void func_endol_80336258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336258: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033625C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336260: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336264: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336268: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033626C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336270: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336274: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336278: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033627C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336280: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336284: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80336288: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033628C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80336290: nop

    // 0x80336294: beq         $t0, $zero, L_803362A8
    if (ctx->r8 == 0) {
        // 0x80336298: nop
    
            goto L_803362A8;
    }
    // 0x80336298: nop

    // 0x8033629C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803362A0: bne         $t0, $at, L_803362B0
    if (ctx->r8 != ctx->r1) {
        // 0x803362A4: nop
    
            goto L_803362B0;
    }
    // 0x803362A4: nop

L_803362A8:
    // 0x803362A8: b           L_80336358
    // 0x803362AC: nop

        goto L_80336358;
    // 0x803362AC: nop

L_803362B0:
    // 0x803362B0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803362B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803362B8: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x803362BC: nop

    // 0x803362C0: bne         $t2, $at, L_80336358
    if (ctx->r10 != ctx->r1) {
        // 0x803362C4: nop
    
            goto L_80336358;
    }
    // 0x803362C4: nop

    // 0x803362C8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x803362CC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803362D0: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x803362D4: nop

    // 0x803362D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803362DC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803362E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803362E4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803362E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803362EC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803362F0: lh          $t6, 0x41FA($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X41FA);
    // 0x803362F4: nop

    // 0x803362F8: bne         $t6, $zero, L_80336358
    if (ctx->r14 != 0) {
        // 0x803362FC: nop
    
            goto L_80336358;
    }
    // 0x803362FC: nop

    // 0x80336300: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80336304: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336308: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033630C: addiu       $t7, $zero, 0x16
    ctx->r15 = ADD32(0, 0X16);
    // 0x80336310: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80336314: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336318: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033631C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336320: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80336324: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336328: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8033632C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80336330: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336334: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x80336338: nop

    // 0x8033633C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80336340: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80336344: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80336348: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033634C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80336350: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80336354: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80336358:
    // 0x80336358: b           L_80336360
    // 0x8033635C: nop

        goto L_80336360;
    // 0x8033635C: nop

L_80336360:
    // 0x80336360: jr          $ra
    // 0x80336364: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80336364: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
