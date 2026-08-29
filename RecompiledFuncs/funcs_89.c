#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8033554C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033554C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80335550: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335554: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335558: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033555C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335560: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335564: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335568: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033556C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335570: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335574: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335578: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033557C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80335580: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335584: nop

    // 0x80335588: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033558C: nop

    // 0x80335590: bne         $t1, $zero, L_8033587C
    if (ctx->r9 != 0) {
        // 0x80335594: nop
    
            goto L_8033587C;
    }
    // 0x80335594: nop

    // 0x80335598: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033559C: nop

    // 0x803355A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803355A4: nop

    // 0x803355A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803355AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803355B0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803355B4: nop

    // 0x803355B8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803355BC: nop

    // 0x803355C0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803355C4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803355C8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x803355CC: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x803355D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803355D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803355D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803355DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803355E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803355E4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803355E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803355EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803355F0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803355F4: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x803355F8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803355FC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80335600: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80335604: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80335608: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033560C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80335610: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80335614: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80335618: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x8033561C: lwc1        $f6, 0x44($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80335620: nop

    // 0x80335624: swc1        $f6, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f6.u32l;
    // 0x80335628: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033562C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80335630: lh          $t5, 0xEA($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XEA);
    // 0x80335634: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335638: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033563C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335640: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335644: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335648: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033564C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335650: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335654: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80335658: swc1        $f8, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f8.u32l;
    // 0x8033565C: lh          $t9, 0xEA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XEA);
    // 0x80335660: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80335664: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335668: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033566C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335670: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335674: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335678: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033567C: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80335680: lwc1        $f10, 0x44($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80335684: nop

    // 0x80335688: swc1        $f10, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f10.u32l;
    // 0x8033568C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80335690: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80335694: lh          $t2, 0xEC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XEC);
    // 0x80335698: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033569C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803356A0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803356A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803356A8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803356AC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803356B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803356B4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803356B8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803356BC: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x803356C0: lh          $t7, 0xEC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEC);
    // 0x803356C4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803356C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803356CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803356D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803356D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803356D8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803356DC: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803356E0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x803356E4: lwc1        $f18, 0x44($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X44);
    // 0x803356E8: nop

    // 0x803356EC: swc1        $f18, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f18.u32l;
    // 0x803356F0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803356F4: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x803356F8: lh          $t3, 0xEE($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XEE);
    // 0x803356FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335700: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335704: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335708: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033570C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335710: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335714: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335718: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033571C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335720: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x80335724: lh          $t6, 0xEE($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XEE);
    // 0x80335728: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033572C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80335730: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80335734: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335738: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033573C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335740: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80335744: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80335748: lwc1        $f6, 0x44($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X44);
    // 0x8033574C: nop

    // 0x80335750: swc1        $f6, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f6.u32l;
    // 0x80335754: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80335758:
    // 0x80335758: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8033575C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335760: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80335764: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80335768: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x8033576C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80335770: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80335774: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80335778: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033577C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80335780: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80335784: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80335788: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x8033578C: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80335790: nop

    // 0x80335794: swc1        $f8, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f8.u32l;
    // 0x80335798: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033579C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803357A0: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x803357A4: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x803357A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803357AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803357B0: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x803357B4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x803357B8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x803357BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803357C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803357C4: jal         0x800295C0
    // 0x803357C8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x803357C8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x803357CC: beq         $v0, $zero, L_80335810
    if (ctx->r2 == 0) {
        // 0x803357D0: nop
    
            goto L_80335810;
    }
    // 0x803357D0: nop

    // 0x803357D4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x803357D8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803357DC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x803357E0: addu        $t2, $t1, $t4
    ctx->r10 = ADD32(ctx->r9, ctx->r12);
    // 0x803357E4: lh          $t6, 0xE8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XE8);
    // 0x803357E8: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803357EC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803357F0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803357F4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803357F8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803357FC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335800: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335804: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335808: b           L_80335848
    // 0x8033580C: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
        goto L_80335848;
    // 0x8033580C: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
L_80335810:
    // 0x80335810: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80335814: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335818: sll         $t0, $t7, 1
    ctx->r8 = S32(ctx->r15 << 1);
    // 0x8033581C: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80335820: lh          $t3, 0xE8($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XE8);
    // 0x80335824: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80335828: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x8033582C: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80335830: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80335834: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80335838: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033583C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335840: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80335844: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
L_80335848:
    // 0x80335848: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8033584C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80335850: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x80335854: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x80335858: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x8033585C: jal         0x80334AB8
    // 0x80335860: nop

    func_80334AB8_unk_bin_40(rdram, ctx);
        goto after_1;
    // 0x80335860: nop

    after_1:
    // 0x80335864: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80335868: nop

    // 0x8033586C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80335870: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80335874: bne         $at, $zero, L_80335758
    if (ctx->r1 != 0) {
        // 0x80335878: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_80335758;
    }
    // 0x80335878: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_8033587C:
    // 0x8033587C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335880: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80335884: sh          $t0, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r8;
    // 0x80335888: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033588C: nop

    // 0x80335890: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80335894: b           L_8033589C
    // 0x80335898: nop

        goto L_8033589C;
    // 0x80335898: nop

L_8033589C:
    // 0x8033589C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803358A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803358A4: jr          $ra
    // 0x803358A8: nop

    return;
    // 0x803358A8: nop

;}
RECOMP_FUNC void func_80332554_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332554: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332558: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033255C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332560: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332564: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332568: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033256C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332570: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332578: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033257C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332580: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332584: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332588: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033258C: nop

    // 0x80332590: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332594: nop

    // 0x80332598: bne         $t1, $zero, L_8033260C
    if (ctx->r9 != 0) {
        // 0x8033259C: nop
    
            goto L_8033260C;
    }
    // 0x8033259C: nop

    // 0x803325A0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803325A4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803325A8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803325AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803325B0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803325B4: nop

    // 0x803325B8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803325BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803325C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803325C4: nop

    // 0x803325C8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803325CC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803325D0: nop

    // 0x803325D4: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x803325D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803325DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803325E0: jal         0x800272E8
    // 0x803325E4: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x803325E4: nop

    after_0:
    // 0x803325E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803325EC: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x803325F0: addiu       $t7, $t7, 0x7084
    ctx->r15 = ADD32(ctx->r15, 0X7084);
    // 0x803325F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803325F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803325FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332604: jal         0x8001C0EC
    // 0x80332608: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80332608: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    after_1:
L_8033260C:
    // 0x8033260C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332610: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332614: jal         0x80029C40
    // 0x80332618: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80332618: nop

    after_2:
    // 0x8033261C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332620: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332624: jal         0x80029D04
    // 0x80332628: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80332628: nop

    after_3:
    // 0x8033262C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332630: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332634: jal         0x8002B0E4
    // 0x80332638: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x80332638: nop

    after_4:
    // 0x8033263C: b           L_80332644
    // 0x80332640: nop

        goto L_80332644;
    // 0x80332640: nop

L_80332644:
    // 0x80332644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332648: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033264C: jr          $ra
    // 0x80332650: nop

    return;
    // 0x80332650: nop

;}
RECOMP_FUNC void func_8033235C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033235C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332364: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332368: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033236C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332370: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332374: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332378: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033237C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332380: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332384: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332388: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033238C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332390: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332394: nop

    // 0x80332398: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033239C: nop

    // 0x803323A0: bne         $t1, $zero, L_80332464
    if (ctx->r9 != 0) {
        // 0x803323A4: nop
    
            goto L_80332464;
    }
    // 0x803323A4: nop

    // 0x803323A8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803323AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803323B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803323B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803323B8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803323BC: nop

    // 0x803323C0: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x803323C4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803323C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803323CC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803323D0: nop

    // 0x803323D4: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x803323D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803323DC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803323E0: nop

    // 0x803323E4: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x803323E8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803323EC: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x803323F0: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x803323F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323FC: jal         0x800272E8
    // 0x80332400: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x80332400: nop

    after_0:
    // 0x80332404: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332408: nop

    // 0x8033240C: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x80332410: nop

    // 0x80332414: slti        $at, $t0, 0x4B0
    ctx->r1 = SIGNED(ctx->r8) < 0X4B0 ? 1 : 0;
    // 0x80332418: beq         $at, $zero, L_8033242C
    if (ctx->r1 == 0) {
        // 0x8033241C: nop
    
            goto L_8033242C;
    }
    // 0x8033241C: nop

    // 0x80332420: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332424: nop

    // 0x80332428: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
L_8033242C:
    // 0x8033242C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332430: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80332434: addiu       $t2, $t2, 0x7084
    ctx->r10 = ADD32(ctx->r10, 0X7084);
    // 0x80332438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033243C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80332440: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332448: jal         0x8001C0EC
    // 0x8033244C: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033244C: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    after_1:
    // 0x80332450: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332454: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332458: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x8033245C: jal         0x80029EF8
    // 0x80332460: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x80332460: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    after_2:
L_80332464:
    // 0x80332464: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332468: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033246C: jal         0x80029C40
    // 0x80332470: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x80332470: nop

    after_3:
    // 0x80332474: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332478: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033247C: jal         0x80029D04
    // 0x80332480: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x80332480: nop

    after_4:
    // 0x80332484: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80332488: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x8033248C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332490: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80332494: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332498: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033249C: lw          $t6, 0x7740($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7740);
    // 0x803324A0: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x803324A4: bne         $t6, $at, L_803324C4
    if (ctx->r14 != ctx->r1) {
        // 0x803324A8: nop
    
            goto L_803324C4;
    }
    // 0x803324A8: nop

    // 0x803324AC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803324B0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803324B4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803324B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803324BC: nop

    // 0x803324C0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803324C4:
    // 0x803324C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803324C8: nop

    // 0x803324CC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803324D0: nop

    // 0x803324D4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803324D8: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x803324DC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803324E0: nop

    // 0x803324E4: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x803324E8: nop

    // 0x803324EC: bgtz        $t4, L_8033253C
    if (SIGNED(ctx->r12) > 0) {
        // 0x803324F0: nop
    
            goto L_8033253C;
    }
    // 0x803324F0: nop

    // 0x803324F4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803324F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803324FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332500: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332504: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80332508: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033250C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332510: jal         0x80029F58
    // 0x80332514: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x80332514: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x80332518: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033251C: bne         $v0, $at, L_8033253C
    if (ctx->r2 != ctx->r1) {
        // 0x80332520: nop
    
            goto L_8033253C;
    }
    // 0x80332520: nop

    // 0x80332524: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332528: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8033252C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80332530: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332534: nop

    // 0x80332538: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033253C:
    // 0x8033253C: b           L_80332544
    // 0x80332540: nop

        goto L_80332544;
    // 0x80332540: nop

L_80332544:
    // 0x80332544: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332548: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033254C: jr          $ra
    // 0x80332550: nop

    return;
    // 0x80332550: nop

;}
RECOMP_FUNC void func_80331A10_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331A14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331A18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80331A1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A44: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331A48: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331A4C: nop

    // 0x80331A50: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331A54: nop

    // 0x80331A58: bne         $t1, $zero, L_80331AC8
    if (ctx->r9 != 0) {
        // 0x80331A5C: nop
    
            goto L_80331AC8;
    }
    // 0x80331A5C: nop

    // 0x80331A60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331A64: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331A68: nop

    // 0x80331A6C: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x80331A70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331A74: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331A78: nop

    // 0x80331A7C: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x80331A80: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331A84: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80331A88: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x80331A8C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331A90: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x80331A94: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80331A98: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331A9C: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80331AA0: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
    // 0x80331AA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AA8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80331AAC: addiu       $t0, $t0, 0x7030
    ctx->r8 = ADD32(ctx->r8, 0X7030);
    // 0x80331AB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AB4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80331AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331ABC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80331AC0: jal         0x8001C0EC
    // 0x80331AC4: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331AC4: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_0:
L_80331AC8:
    // 0x80331AC8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331ACC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AD0: lh          $s0, 0x108($t1)
    ctx->r16 = MEM_H(ctx->r9, 0X108);
    // 0x80331AD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AD8: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x80331ADC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80331AE0: sltiu       $t3, $s0, 0x1
    ctx->r11 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80331AE4: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80331AE8: jal         0x8001BB34
    // 0x80331AEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80331AEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80331AF0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331AF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331AF8: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80331AFC: nop

    // 0x80331B00: bne         $t5, $at, L_80331B50
    if (ctx->r13 != ctx->r1) {
        // 0x80331B04: nop
    
            goto L_80331B50;
    }
    // 0x80331B04: nop

    // 0x80331B08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B10: jal         0x8001B44C
    // 0x80331B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80331B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331B18: beq         $v0, $zero, L_80331B50
    if (ctx->r2 == 0) {
        // 0x80331B1C: nop
    
            goto L_80331B50;
    }
    // 0x80331B1C: nop

    // 0x80331B20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B24: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80331B28: addiu       $t6, $t6, 0x7030
    ctx->r14 = ADD32(ctx->r14, 0X7030);
    // 0x80331B2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80331B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B38: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80331B3C: jal         0x8001C0EC
    // 0x80331B40: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80331B40: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_3:
    // 0x80331B44: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B48: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80331B4C: sb          $t7, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r15;
L_80331B50:
    // 0x80331B50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B58: jal         0x80029C40
    // 0x80331B5C: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80331B5C: nop

    after_4:
    // 0x80331B60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B68: jal         0x80029D04
    // 0x80331B6C: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x80331B6C: nop

    after_5:
    // 0x80331B70: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331B78: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x80331B7C: nop

    // 0x80331B80: bne         $t0, $at, L_80331BB0
    if (ctx->r8 != ctx->r1) {
        // 0x80331B84: nop
    
            goto L_80331BB0;
    }
    // 0x80331B84: nop

    // 0x80331B88: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B8C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80331B90: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80331B94: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B98: nop

    // 0x80331B9C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80331BA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BA8: jal         0x8001BB34
    // 0x80331BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x80331BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_80331BB0:
    // 0x80331BB0: b           L_80331BB8
    // 0x80331BB4: nop

        goto L_80331BB8;
    // 0x80331BB4: nop

L_80331BB8:
    // 0x80331BB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331BBC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80331BC0: jr          $ra
    // 0x80331BC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331BC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330C78_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C78: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80330C7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330C80: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330C84: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330C88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C9C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330CA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330CA4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80330CA8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80330CAC: nop

    // 0x80330CB0: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80330CB4: nop

    // 0x80330CB8: sh          $t1, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r9;
    // 0x80330CBC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80330CC0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80330CC4: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
    // 0x80330CC8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80330CCC: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x80330CD0: nop

    // 0x80330CD4: bne         $t4, $zero, L_80330CEC
    if (ctx->r12 != 0) {
        // 0x80330CD8: nop
    
            goto L_80330CEC;
    }
    // 0x80330CD8: nop

    // 0x80330CDC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80330CE0: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80330CE4: b           L_80330D98
    // 0x80330CE8: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
        goto L_80330D98;
    // 0x80330CE8: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_80330CEC:
    // 0x80330CEC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80330CF0: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x80330CF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330CF8: bne         $t7, $at, L_80330D10
    if (ctx->r15 != ctx->r1) {
        // 0x80330CFC: nop
    
            goto L_80330D10;
    }
    // 0x80330CFC: nop

    // 0x80330D00: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80330D04: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80330D08: b           L_80330D98
    // 0x80330D0C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
        goto L_80330D98;
    // 0x80330D0C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_80330D10:
    // 0x80330D10: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80330D14: nop

    // 0x80330D18: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80330D1C: nop

    // 0x80330D20: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x80330D24: beq         $at, $zero, L_80330D48
    if (ctx->r1 == 0) {
        // 0x80330D28: nop
    
            goto L_80330D48;
    }
    // 0x80330D28: nop

    // 0x80330D2C: slti        $at, $t1, 0x13
    ctx->r1 = SIGNED(ctx->r9) < 0X13 ? 1 : 0;
    // 0x80330D30: bne         $at, $zero, L_80330D48
    if (ctx->r1 != 0) {
        // 0x80330D34: nop
    
            goto L_80330D48;
    }
    // 0x80330D34: nop

    // 0x80330D38: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80330D3C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80330D40: b           L_80330D98
    // 0x80330D44: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_80330D98;
    // 0x80330D44: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_80330D48:
    // 0x80330D48: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80330D4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330D50: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x80330D54: nop

    // 0x80330D58: beq         $t5, $at, L_80330D80
    if (ctx->r13 == ctx->r1) {
        // 0x80330D5C: nop
    
            goto L_80330D80;
    }
    // 0x80330D5C: nop

    // 0x80330D60: lh          $t6, 0xEA($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XEA);
    // 0x80330D64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330D68: beq         $t6, $at, L_80330D80
    if (ctx->r14 == ctx->r1) {
        // 0x80330D6C: nop
    
            goto L_80330D80;
    }
    // 0x80330D6C: nop

    // 0x80330D70: b           L_80330DAC
    // 0x80330D74: nop

        goto L_80330DAC;
    // 0x80330D74: nop

    // 0x80330D78: b           L_80330D98
    // 0x80330D7C: nop

        goto L_80330D98;
    // 0x80330D7C: nop

L_80330D80:
    // 0x80330D80: lh          $t7, 0x2($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2);
    // 0x80330D84: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80330D88: nop

    // 0x80330D8C: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x80330D90: b           L_80330DAC
    // 0x80330D94: nop

        goto L_80330DAC;
    // 0x80330D94: nop

L_80330D98:
    // 0x80330D98: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80330D9C: nop

    // 0x80330DA0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80330DA4: b           L_80330DAC
    // 0x80330DA8: nop

        goto L_80330DAC;
    // 0x80330DA8: nop

L_80330DAC:
    // 0x80330DAC: jr          $ra
    // 0x80330DB0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80330DB0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_803349FC_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803349FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334A00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334A04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334A08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334A0C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334A10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334A14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334A18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334A20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334A28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334A2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334A30: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334A34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334A38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334A3C: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80334A40: nop

    // 0x80334A44: bne         $t1, $at, L_80334AA0
    if (ctx->r9 != ctx->r1) {
        // 0x80334A48: nop
    
            goto L_80334AA0;
    }
    // 0x80334A48: nop

    // 0x80334A4C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334A50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334A54: lh          $s0, 0xA4($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XA4);
    // 0x80334A58: nop

    // 0x80334A5C: beq         $s0, $at, L_80334A78
    if (ctx->r16 == ctx->r1) {
        // 0x80334A60: nop
    
            goto L_80334A78;
    }
    // 0x80334A60: nop

    // 0x80334A64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334A68: beq         $s0, $at, L_80334A88
    if (ctx->r16 == ctx->r1) {
        // 0x80334A6C: nop
    
            goto L_80334A88;
    }
    // 0x80334A6C: nop

    // 0x80334A70: b           L_80334A98
    // 0x80334A74: nop

        goto L_80334A98;
    // 0x80334A74: nop

L_80334A78:
    // 0x80334A78: jal         0x8033471C
    // 0x80334A7C: nop

    func_8033471C_unk_bin_40(rdram, ctx);
        goto after_0;
    // 0x80334A7C: nop

    after_0:
    // 0x80334A80: b           L_80334AA0
    // 0x80334A84: nop

        goto L_80334AA0;
    // 0x80334A84: nop

L_80334A88:
    // 0x80334A88: jal         0x80334968
    // 0x80334A8C: nop

    func_80334968_unk_bin_40(rdram, ctx);
        goto after_1;
    // 0x80334A8C: nop

    after_1:
    // 0x80334A90: b           L_80334AA0
    // 0x80334A94: nop

        goto L_80334AA0;
    // 0x80334A94: nop

L_80334A98:
    // 0x80334A98: b           L_80334AA0
    // 0x80334A9C: nop

        goto L_80334AA0;
    // 0x80334A9C: nop

L_80334AA0:
    // 0x80334AA0: b           L_80334AA8
    // 0x80334AA4: nop

        goto L_80334AA8;
    // 0x80334AA4: nop

L_80334AA8:
    // 0x80334AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334AB0: jr          $ra
    // 0x80334AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033117C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033117C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331180: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331184: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80331188: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033118C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331190: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331194: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033119C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803311A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803311A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803311AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803311B0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803311B4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803311B8: nop

    // 0x803311BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803311C0: nop

    // 0x803311C4: bne         $t1, $zero, L_80331244
    if (ctx->r9 != 0) {
        // 0x803311C8: nop
    
            goto L_80331244;
    }
    // 0x803311C8: nop

    // 0x803311CC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803311D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803311D4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803311D8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803311DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803311E0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803311E4: nop

    // 0x803311E8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803311EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803311F0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803311F4: nop

    // 0x803311F8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803311FC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331200: addiu       $t6, $zero, 0x294
    ctx->r14 = ADD32(0, 0X294);
    // 0x80331204: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80331208: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033120C: nop

    // 0x80331210: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x80331214: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331218: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8033121C: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
    // 0x80331220: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331224: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80331228: addiu       $t1, $t1, 0x7030
    ctx->r9 = ADD32(ctx->r9, 0X7030);
    // 0x8033122C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331230: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331238: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8033123C: jal         0x8001C0EC
    // 0x80331240: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331240: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_0:
L_80331244:
    // 0x80331244: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331248: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033124C: jal         0x80029C40
    // 0x80331250: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80331250: nop

    after_1:
    // 0x80331254: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033125C: jal         0x80029D04
    // 0x80331260: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x80331260: nop

    after_2:
    // 0x80331264: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331268: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033126C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331270: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331274: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80331278: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8033127C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331280: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331284: jal         0x80029018
    // 0x80331288: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80331288: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x8033128C: beq         $v0, $zero, L_803312C4
    if (ctx->r2 == 0) {
        // 0x80331290: nop
    
            goto L_803312C4;
    }
    // 0x80331290: nop

    // 0x80331294: jal         0x800297DC
    // 0x80331298: nop

    func_800297DC(rdram, ctx);
        goto after_4;
    // 0x80331298: nop

    after_4:
    // 0x8033129C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803312A8: jal         0x80029824
    // 0x803312AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_5;
    // 0x803312AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x803312B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803312B4: nop

    // 0x803312B8: lwc1        $f16, 0x3C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x803312BC: nop

    // 0x803312C0: swc1        $f16, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f16.u32l;
L_803312C4:
    // 0x803312C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312CC: jal         0x80028FA0
    // 0x803312D0: nop

    func_80028FA0(rdram, ctx);
        goto after_6;
    // 0x803312D0: nop

    after_6:
    // 0x803312D4: beq         $v0, $zero, L_80331300
    if (ctx->r2 == 0) {
        // 0x803312D8: nop
    
            goto L_80331300;
    }
    // 0x803312D8: nop

    // 0x803312DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312E4: jal         0x80029B60
    // 0x803312E8: nop

    func_80029B60(rdram, ctx);
        goto after_7;
    // 0x803312E8: nop

    after_7:
    // 0x803312EC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803312F0: nop

    // 0x803312F4: lwc1        $f18, 0x3C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x803312F8: nop

    // 0x803312FC: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
L_80331300:
    // 0x80331300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331308: jal         0x8001B44C
    // 0x8033130C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_8;
    // 0x8033130C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80331310: beq         $v0, $zero, L_80331380
    if (ctx->r2 == 0) {
        // 0x80331314: nop
    
            goto L_80331380;
    }
    // 0x80331314: nop

    // 0x80331318: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033131C: nop

    // 0x80331320: lh          $t5, 0xAA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAA);
    // 0x80331324: nop

    // 0x80331328: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8033132C: sh          $t6, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r14;
    // 0x80331330: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331334: nop

    // 0x80331338: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x8033133C: nop

    // 0x80331340: slti        $at, $t8, 0xC
    ctx->r1 = SIGNED(ctx->r24) < 0XC ? 1 : 0;
    // 0x80331344: bne         $at, $zero, L_80331358
    if (ctx->r1 != 0) {
        // 0x80331348: nop
    
            goto L_80331358;
    }
    // 0x80331348: nop

    // 0x8033134C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331350: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80331354: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
L_80331358:
    // 0x80331358: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033135C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331360: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80331364: addiu       $t2, $t2, 0x7030
    ctx->r10 = ADD32(ctx->r10, 0X7030);
    // 0x80331368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033136C: lh          $a2, 0xAA($t1)
    ctx->r6 = MEM_H(ctx->r9, 0XAA);
    // 0x80331370: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80331374: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331378: jal         0x8001C0EC
    // 0x8033137C: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_9;
    // 0x8033137C: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_9:
L_80331380:
    // 0x80331380: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331384: nop

    // 0x80331388: lh          $t5, 0xA6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA6);
    // 0x8033138C: nop

    // 0x80331390: addiu       $t6, $t5, -0x8
    ctx->r14 = ADD32(ctx->r13, -0X8);
    // 0x80331394: sh          $t6, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r14;
    // 0x80331398: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033139C: nop

    // 0x803313A0: lh          $t7, 0xA6($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XA6);
    // 0x803313A4: nop

    // 0x803313A8: bgez        $t7, L_803313D4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x803313AC: nop
    
            goto L_803313D4;
    }
    // 0x803313AC: nop

    // 0x803313B0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803313B4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803313B8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803313BC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803313C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803313C4: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x803313C8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803313CC: nop

    // 0x803313D0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803313D4:
    // 0x803313D4: b           L_803313DC
    // 0x803313D8: nop

        goto L_803313DC;
    // 0x803313D8: nop

L_803313DC:
    // 0x803313DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803313E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803313E4: jr          $ra
    // 0x803313E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803313E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803328F0_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803328F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803328F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803328F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803328FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332900: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332904: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332908: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033290C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332910: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332914: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332918: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033291C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332920: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332924: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80332928: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8033292C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332930: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x80332934: nop

    // 0x80332938: beq         $t1, $at, L_80332A34
    if (ctx->r9 == ctx->r1) {
        // 0x8033293C: nop
    
            goto L_80332A34;
    }
    // 0x8033293C: nop

    // 0x80332940: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80332944: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80332948: lh          $t3, 0xE6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE6);
    // 0x8033294C: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80332950: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332954: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332958: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033295C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332960: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332964: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80332968: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8033296C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332970: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80332974: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80332978: nop

    // 0x8033297C: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x80332980: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332984: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x80332988: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033298C: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80332990: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80332994: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80332998: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
    // 0x8033299C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803329A0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x803329A4: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803329A8: nop

    // 0x803329AC: swc1        $f16, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f16.u32l;
    // 0x803329B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803329B4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x803329B8: nop

    // 0x803329BC: swc1        $f18, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f18.u32l;
    // 0x803329C0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803329C4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x803329C8: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x803329CC: nop

    // 0x803329D0: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x803329D4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803329D8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803329DC: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x803329E0: nop

    // 0x803329E4: bne         $t7, $at, L_80332A00
    if (ctx->r15 != ctx->r1) {
        // 0x803329E8: nop
    
            goto L_80332A00;
    }
    // 0x803329E8: nop

    // 0x803329EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803329F0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x803329F4: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803329F8: nop

    // 0x803329FC: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
L_80332A00:
    // 0x80332A00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A08: jal         0x80029C40
    // 0x80332A0C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80332A0C: nop

    after_0:
    // 0x80332A10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A18: jal         0x80029D04
    // 0x80332A1C: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80332A1C: nop

    after_1:
    // 0x80332A20: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A24: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80332A28: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332A2C: b           L_80332AC0
    // 0x80332A30: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
        goto L_80332AC0;
    // 0x80332A30: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
L_80332A34:
    // 0x80332A34: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80332A38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332A3C: lh          $s0, 0xA4($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XA4);
    // 0x80332A40: nop

    // 0x80332A44: beq         $s0, $at, L_80332A78
    if (ctx->r16 == ctx->r1) {
        // 0x80332A48: nop
    
            goto L_80332A78;
    }
    // 0x80332A48: nop

    // 0x80332A4C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80332A50: beq         $s0, $at, L_80332A98
    if (ctx->r16 == ctx->r1) {
        // 0x80332A54: nop
    
            goto L_80332A98;
    }
    // 0x80332A54: nop

    // 0x80332A58: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80332A5C: beq         $s0, $at, L_80332AA8
    if (ctx->r16 == ctx->r1) {
        // 0x80332A60: nop
    
            goto L_80332AA8;
    }
    // 0x80332A60: nop

    // 0x80332A64: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80332A68: beq         $s0, $at, L_80332A88
    if (ctx->r16 == ctx->r1) {
        // 0x80332A6C: nop
    
            goto L_80332A88;
    }
    // 0x80332A6C: nop

    // 0x80332A70: b           L_80332AB8
    // 0x80332A74: nop

        goto L_80332AB8;
    // 0x80332A74: nop

L_80332A78:
    // 0x80332A78: jal         0x8033235C
    // 0x80332A7C: nop

    func_8033235C_unk_bin_40(rdram, ctx);
        goto after_2;
    // 0x80332A7C: nop

    after_2:
    // 0x80332A80: b           L_80332AC0
    // 0x80332A84: nop

        goto L_80332AC0;
    // 0x80332A84: nop

L_80332A88:
    // 0x80332A88: jal         0x80332654
    // 0x80332A8C: nop

    func_80332654_unk_bin_40(rdram, ctx);
        goto after_3;
    // 0x80332A8C: nop

    after_3:
    // 0x80332A90: b           L_80332AC0
    // 0x80332A94: nop

        goto L_80332AC0;
    // 0x80332A94: nop

L_80332A98:
    // 0x80332A98: jal         0x80332554
    // 0x80332A9C: nop

    func_80332554_unk_bin_40(rdram, ctx);
        goto after_4;
    // 0x80332A9C: nop

    after_4:
    // 0x80332AA0: b           L_80332AC0
    // 0x80332AA4: nop

        goto L_80332AC0;
    // 0x80332AA4: nop

L_80332AA8:
    // 0x80332AA8: jal         0x80332554
    // 0x80332AAC: nop

    func_80332554_unk_bin_40(rdram, ctx);
        goto after_5;
    // 0x80332AAC: nop

    after_5:
    // 0x80332AB0: b           L_80332AC0
    // 0x80332AB4: nop

        goto L_80332AC0;
    // 0x80332AB4: nop

L_80332AB8:
    // 0x80332AB8: b           L_80332AC0
    // 0x80332ABC: nop

        goto L_80332AC0;
    // 0x80332ABC: nop

L_80332AC0:
    // 0x80332AC0: b           L_80332AC8
    // 0x80332AC4: nop

        goto L_80332AC8;
    // 0x80332AC4: nop

L_80332AC8:
    // 0x80332AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332ACC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80332AD0: jr          $ra
    // 0x80332AD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80332AD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033069C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033069C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803306A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803306A4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803306A8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803306AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803306B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803306B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803306B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803306BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803306C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803306C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803306C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803306CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803306D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803306D4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803306D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803306DC: nop

    // 0x803306E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803306E4: nop

    // 0x803306E8: bne         $t1, $zero, L_80330730
    if (ctx->r9 != 0) {
        // 0x803306EC: nop
    
            goto L_80330730;
    }
    // 0x803306EC: nop

    // 0x803306F0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803306F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803306F8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803306FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330700: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330704: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033070C: jal         0x80019448
    // 0x80330710: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x80330710: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80330714: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330718: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033071C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330720: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80330724: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330728: jal         0x800175F0
    // 0x8033072C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033072C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80330730:
    // 0x80330730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330738: jal         0x80028FA0
    // 0x8033073C: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x8033073C: nop

    after_2:
    // 0x80330740: beq         $v0, $zero, L_80330760
    if (ctx->r2 == 0) {
        // 0x80330744: nop
    
            goto L_80330760;
    }
    // 0x80330744: nop

    // 0x80330748: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033074C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330750: jal         0x8002B0E4
    // 0x80330754: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x80330754: nop

    after_3:
    // 0x80330758: b           L_80330968
    // 0x8033075C: nop

        goto L_80330968;
    // 0x8033075C: nop

L_80330760:
    // 0x80330760: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330764: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80330768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033076C: lwc1        $f4, 0x44($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X44);
    // 0x80330770: nop

    // 0x80330774: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80330778: nop

    // 0x8033077C: bc1f        L_803307A0
    if (!c1cs) {
        // 0x80330780: nop
    
            goto L_803307A0;
    }
    // 0x80330780: nop

    // 0x80330784: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330788: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033078C: lwc1        $f10, 0x6370($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6370);
    // 0x80330790: lwc1        $f8, 0x44($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80330794: nop

    // 0x80330798: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033079C: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
L_803307A0:
    // 0x803307A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307A8: jal         0x80029C40
    // 0x803307AC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x803307AC: nop

    after_4:
    // 0x803307B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307B8: jal         0x80029D04
    // 0x803307BC: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x803307BC: nop

    after_5:
    // 0x803307C0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803307C4: nop

    // 0x803307C8: lw          $a1, 0xD4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XD4);
    // 0x803307CC: jal         0x800C0194
    // 0x803307D0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800C0194(rdram, ctx);
        goto after_6;
    // 0x803307D0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_6:
    // 0x803307D4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803307D8: nop

    // 0x803307DC: sh          $v0, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r2;
    // 0x803307E0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803307E4: nop

    // 0x803307E8: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x803307EC: nop

    // 0x803307F0: slti        $at, $t9, -0xA
    ctx->r1 = SIGNED(ctx->r25) < -0XA ? 1 : 0;
    // 0x803307F4: beq         $at, $zero, L_8033081C
    if (ctx->r1 == 0) {
        // 0x803307F8: nop
    
            goto L_8033081C;
    }
    // 0x803307F8: nop

    // 0x803307FC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330800: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80330804: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80330808: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033080C: nop

    // 0x80330810: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80330814: b           L_80330968
    // 0x80330818: nop

        goto L_80330968;
    // 0x80330818: nop

L_8033081C:
    // 0x8033081C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330820: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80330824: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330828: lwc1        $f18, 0xD4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x8033082C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330830: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80330834: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330838: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033083C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330840: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80330844: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330848: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033084C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80330850: jal         0x80029018
    // 0x80330854: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x80330854: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x80330858: beq         $v0, $zero, L_80330894
    if (ctx->r2 == 0) {
        // 0x8033085C: nop
    
            goto L_80330894;
    }
    // 0x8033085C: nop

    // 0x80330860: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330864: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330868: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033086C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80330870: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330874: jal         0x800175F0
    // 0x80330878: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_8;
    // 0x80330878: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x8033087C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330880: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330884: jal         0x8002B0E4
    // 0x80330888: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x80330888: nop

    after_9:
    // 0x8033088C: b           L_80330968
    // 0x80330890: nop

        goto L_80330968;
    // 0x80330890: nop

L_80330894:
    // 0x80330894: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330898: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8033089C: lwc1        $f16, 0xC($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XC);
    // 0x803308A0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x803308A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803308A8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x803308AC: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x803308B0: nop

    // 0x803308B4: bc1f        L_80330914
    if (!c1cs) {
        // 0x803308B8: nop
    
            goto L_80330914;
    }
    // 0x803308B8: nop

    // 0x803308BC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803308C0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803308C4: lwc1        $f8, 0x6374($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6374);
    // 0x803308C8: lwc1        $f6, 0xC($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0XC);
    // 0x803308CC: nop

    // 0x803308D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803308D4: swc1        $f10, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f10.u32l;
    // 0x803308D8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803308DC: nop

    // 0x803308E0: lwc1        $f20, 0xC($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0XC);
    // 0x803308E4: nop

    // 0x803308E8: swc1        $f20, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f20.u32l;
    // 0x803308EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803308F0: nop

    // 0x803308F4: swc1        $f20, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f20.u32l;
    // 0x803308F8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803308FC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330900: lwc1        $f18, 0x6378($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6378);
    // 0x80330904: lwc1        $f16, 0xD4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x80330908: nop

    // 0x8033090C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330910: swc1        $f4, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f4.u32l;
L_80330914:
    // 0x80330914: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330918: nop

    // 0x8033091C: lw          $a1, 0xD4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XD4);
    // 0x80330920: jal         0x800C00F4
    // 0x80330924: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800C00F4(rdram, ctx);
        goto after_10;
    // 0x80330924: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_10:
    // 0x80330928: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033092C: nop

    // 0x80330930: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80330934: nop

    // 0x80330938: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
    // 0x8033093C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330940: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80330944: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330948: lwc1        $f12, 0x18($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X18);
    // 0x8033094C: jal         0x80015538
    // 0x80330950: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80330950: nop

    after_11:
    // 0x80330954: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330958: nop

    // 0x8033095C: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
    // 0x80330960: b           L_80330968
    // 0x80330964: nop

        goto L_80330968;
    // 0x80330964: nop

L_80330968:
    // 0x80330968: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033096C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330970: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330974: jr          $ra
    // 0x80330978: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330978: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80333410_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333410: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80333414: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80333418: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8033341C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80333420: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80333424: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333428: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033342C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333430: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333434: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333438: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033343C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333440: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333444: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333448: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033344C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80333450: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80333454: nop

    // 0x80333458: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033345C: nop

    // 0x80333460: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x80333464: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80333468: nop

    // 0x8033346C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333470: nop

    // 0x80333474: bne         $t3, $zero, L_80333528
    if (ctx->r11 != 0) {
        // 0x80333478: nop
    
            goto L_80333528;
    }
    // 0x80333478: nop

    // 0x8033347C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80333480: nop

    // 0x80333484: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80333488: nop

    // 0x8033348C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80333490: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x80333494: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80333498: nop

    // 0x8033349C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x803334A0: nop

    // 0x803334A4: sh          $t8, 0xB4($t7)
    MEM_H(0XB4, ctx->r15) = ctx->r24;
    // 0x803334A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334AC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803334B0: addiu       $t9, $t9, -0x7250
    ctx->r25 = ADD32(ctx->r25, -0X7250);
    // 0x803334B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803334B8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803334BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803334C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803334C4: jal         0x8001C0EC
    // 0x803334C8: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803334C8: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    after_0:
    // 0x803334CC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803334D0: addiu       $t0, $t0, -0x723C
    ctx->r8 = ADD32(ctx->r8, -0X723C);
    // 0x803334D4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803334D8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803334DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803334E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803334E4: jal         0x8001C0EC
    // 0x803334E8: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803334E8: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    after_1:
    // 0x803334EC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x803334F0: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x803334F4: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x803334F8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803334FC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333500: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333504: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333508: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033350C: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80333510: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x80333514: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333518: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x8033351C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333520: jal         0x8001ABF4
    // 0x80333524: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80333524: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80333528:
    // 0x80333528: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033352C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333530: jal         0x8002A46C
    // 0x80333534: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x80333534: nop

    after_3:
    // 0x80333538: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033353C: nop

    // 0x80333540: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x80333544: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333548: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033354C: jal         0x8001B62C
    // 0x80333550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x80333550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333554: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80333558: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033355C: nop

    // 0x80333560: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80333564: nop

    // 0x80333568: bc1f        L_80333794
    if (!c1cs) {
        // 0x8033356C: nop
    
            goto L_80333794;
    }
    // 0x8033356C: nop

    // 0x80333570: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80333574: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333578: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033357C: nop

    // 0x80333580: bne         $t6, $at, L_803335D0
    if (ctx->r14 != ctx->r1) {
        // 0x80333584: nop
    
            goto L_803335D0;
    }
    // 0x80333584: nop

    // 0x80333588: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033358C: nop

    // 0x80333590: lbu         $t8, 0x132($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X132);
    // 0x80333594: nop

    // 0x80333598: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8033359C: sb          $t7, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r15;
    // 0x803335A0: jal         0x80332AD8
    // 0x803335A4: nop

    func_80332AD8_unk_bin_40(rdram, ctx);
        goto after_5;
    // 0x803335A4: nop

    after_5:
    // 0x803335A8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x803335AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803335B0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803335B4: nop

    // 0x803335B8: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x803335BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335C4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x803335C8: jal         0x80029EF8
    // 0x803335CC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_6;
    // 0x803335CC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_6:
L_803335D0:
    // 0x803335D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335D8: jal         0x80029C40
    // 0x803335DC: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x803335DC: nop

    after_7:
    // 0x803335E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803335E4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803335E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803335F4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x803335F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803335FC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80333600: jal         0x80029018
    // 0x80333604: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x80333604: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x80333608: beq         $v0, $zero, L_8033362C
    if (ctx->r2 == 0) {
        // 0x8033360C: nop
    
            goto L_8033362C;
    }
    // 0x8033360C: nop

    // 0x80333610: jal         0x800297DC
    // 0x80333614: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x80333614: nop

    after_9:
    // 0x80333618: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033361C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333620: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80333624: jal         0x80029824
    // 0x80333628: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x80333628: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
L_8033362C:
    // 0x8033362C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333630: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333634: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333638: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033363C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80333640: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333644: jal         0x80029F58
    // 0x80333648: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_11;
    // 0x80333648: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x8033364C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333650: bne         $v0, $at, L_803336CC
    if (ctx->r2 != ctx->r1) {
        // 0x80333654: nop
    
            goto L_803336CC;
    }
    // 0x80333654: nop

    // 0x80333658: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033365C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80333660: nop

    // 0x80333664: swc1        $f18, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f18.u32l;
    // 0x80333668: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033366C: nop

    // 0x80333670: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80333674: nop

    // 0x80333678: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x8033367C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80333680: nop

    // 0x80333684: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x80333688: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033368C: nop

    // 0x80333690: lh          $t5, 0xA6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA6);
    // 0x80333694: nop

    // 0x80333698: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x8033369C: bne         $at, $zero, L_803336B4
    if (ctx->r1 != 0) {
        // 0x803336A0: nop
    
            goto L_803336B4;
    }
    // 0x803336A0: nop

    // 0x803336A4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803336A8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x803336AC: b           L_803336C0
    // 0x803336B0: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
        goto L_803336C0;
    // 0x803336B0: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
L_803336B4:
    // 0x803336B4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803336B8: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x803336BC: sh          $t7, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r15;
L_803336C0:
    // 0x803336C0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803336C4: nop

    // 0x803336C8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803336CC:
    // 0x803336CC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x803336D0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803336D4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803336D8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803336DC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803336E0: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x803336E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803336E8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803336EC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803336F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803336F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803336F8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803336FC: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80333700: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80333704: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80333708: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033370C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80333710: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80333714: lwc1        $f16, 0x28($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80333718: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033371C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80333720: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80333724: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333728: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033372C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333730: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80333734: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80333738: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033373C: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80333740: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80333744: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80333748: lwc1        $f6, 0x2C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8033374C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333750: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80333754: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80333758: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033375C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333760: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333764: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80333768: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8033376C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80333770: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333774: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333778: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033377C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333780: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80333784: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333788: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033378C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333790: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
L_80333794:
    // 0x80333794: b           L_8033379C
    // 0x80333798: nop

        goto L_8033379C;
    // 0x80333798: nop

L_8033379C:
    // 0x8033379C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803337A0: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x803337A4: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803337A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803337AC: jr          $ra
    // 0x803337B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803337B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80336040_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336040: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336048: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033604C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336050: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336054: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336058: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033605C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336060: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336064: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336068: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033606C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336070: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336074: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336078: nop

    // 0x8033607C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336080: nop

    // 0x80336084: bne         $t1, $zero, L_803360D8
    if (ctx->r9 != 0) {
        // 0x80336088: nop
    
            goto L_803360D8;
    }
    // 0x80336088: nop

    // 0x8033608C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336090: nop

    // 0x80336094: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336098: nop

    // 0x8033609C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803360A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803360A4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x803360A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803360AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803360B0: nop

    // 0x803360B4: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x803360B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803360BC: nop

    // 0x803360C0: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803360C4: nop

    // 0x803360C8: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x803360CC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803360D0: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x803360D4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_803360D8:
    // 0x803360D8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803360DC: nop

    // 0x803360E0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803360E4: nop

    // 0x803360E8: bne         $t0, $zero, L_80336160
    if (ctx->r8 != 0) {
        // 0x803360EC: nop
    
            goto L_80336160;
    }
    // 0x803360EC: nop

    // 0x803360F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803360F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803360F8: nop

    // 0x803360FC: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x80336100: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80336104: nop

    // 0x80336108: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x8033610C: nop

    // 0x80336110: bne         $t4, $zero, L_80336148
    if (ctx->r12 != 0) {
        // 0x80336114: nop
    
            goto L_80336148;
    }
    // 0x80336114: nop

    // 0x80336118: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033611C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336120: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336124: nop

    // 0x80336128: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
    // 0x8033612C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336130: nop

    // 0x80336134: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x80336138: nop

    // 0x8033613C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80336140: b           L_80336158
    // 0x80336144: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
        goto L_80336158;
    // 0x80336144: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
L_80336148:
    // 0x80336148: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033614C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336150: nop

    // 0x80336154: swc1        $f16, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f16.u32l;
L_80336158:
    // 0x80336158: b           L_80336228
    // 0x8033615C: nop

        goto L_80336228;
    // 0x8033615C: nop

L_80336160:
    // 0x80336160: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336164: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80336168: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8033616C: nop

    // 0x80336170: bne         $t0, $at, L_80336210
    if (ctx->r8 != ctx->r1) {
        // 0x80336174: nop
    
            goto L_80336210;
    }
    // 0x80336174: nop

    // 0x80336178: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033617C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80336180: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336184: lwc1        $f18, 0x3C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80336188: nop

    // 0x8033618C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80336190: nop

    // 0x80336194: bc1f        L_803361CC
    if (!c1cs) {
        // 0x80336198: nop
    
            goto L_803361CC;
    }
    // 0x80336198: nop

    // 0x8033619C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803361A0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x803361A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803361A8: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803361AC: lwc1        $f14, 0x4($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X4);
    // 0x803361B0: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    // 0x803361B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x803361B8: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x803361BC: jal         0x8002AE38
    // 0x803361C0: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8002AE38(rdram, ctx);
        goto after_0;
    // 0x803361C0: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x803361C4: b           L_803361F4
    // 0x803361C8: nop

        goto L_803361F4;
    // 0x803361C8: nop

L_803361CC:
    // 0x803361CC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803361D0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x803361D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803361D8: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803361DC: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x803361E0: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x803361E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x803361E8: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x803361EC: jal         0x8002AE38
    // 0x803361F0: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    func_8002AE38(rdram, ctx);
        goto after_1;
    // 0x803361F0: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    after_1:
L_803361F4:
    // 0x803361F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803361F8: nop

    // 0x803361FC: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80336200: nop

    // 0x80336204: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80336208: b           L_80336228
    // 0x8033620C: sh          $t7, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r15;
        goto L_80336228;
    // 0x8033620C: sh          $t7, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r15;
L_80336210:
    // 0x80336210: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336214: nop

    // 0x80336218: lh          $t8, 0xA6($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XA6);
    // 0x8033621C: nop

    // 0x80336220: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80336224: sh          $t9, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r25;
L_80336228:
    // 0x80336228: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033622C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336230: jal         0x80029C40
    // 0x80336234: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80336234: nop

    after_2:
    // 0x80336238: b           L_80336240
    // 0x8033623C: nop

        goto L_80336240;
    // 0x8033623C: nop

L_80336240:
    // 0x80336240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336248: jr          $ra
    // 0x8033624C: nop

    return;
    // 0x8033624C: nop

;}
RECOMP_FUNC void func_8033448C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033448C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334490: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334494: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334498: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033449C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803344A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803344A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803344AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803344B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803344B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803344BC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803344C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803344C4: nop

    // 0x803344C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803344CC: nop

    // 0x803344D0: bne         $t1, $zero, L_803344F0
    if (ctx->r9 != 0) {
        // 0x803344D4: nop
    
            goto L_803344F0;
    }
    // 0x803344D4: nop

    // 0x803344D8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803344DC: nop

    // 0x803344E0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803344E4: nop

    // 0x803344E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803344EC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
L_803344F0:
    // 0x803344F0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803344F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803344F8: lh          $t6, 0xAA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAA);
    // 0x803344FC: nop

    // 0x80334500: bne         $t6, $at, L_80334630
    if (ctx->r14 != ctx->r1) {
        // 0x80334504: nop
    
            goto L_80334630;
    }
    // 0x80334504: nop

    // 0x80334508: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033450C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334510: jal         0x80028FA0
    // 0x80334514: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x80334514: nop

    after_0:
    // 0x80334518: beq         $v0, $zero, L_80334534
    if (ctx->r2 == 0) {
        // 0x8033451C: nop
    
            goto L_80334534;
    }
    // 0x8033451C: nop

    // 0x80334520: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334524: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80334528: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8033452C: b           L_80334638
    // 0x80334530: nop

        goto L_80334638;
    // 0x80334530: nop

L_80334534:
    // 0x80334534: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334538: nop

    // 0x8033453C: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x80334540: nop

    // 0x80334544: slti        $at, $t0, 0x3C
    ctx->r1 = SIGNED(ctx->r8) < 0X3C ? 1 : 0;
    // 0x80334548: beq         $at, $zero, L_80334624
    if (ctx->r1 == 0) {
        // 0x8033454C: nop
    
            goto L_80334624;
    }
    // 0x8033454C: nop

    // 0x80334550: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334554: nop

    // 0x80334558: lh          $t3, 0xB2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB2);
    // 0x8033455C: nop

    // 0x80334560: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334564: sh          $t4, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r12;
    // 0x80334568: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033456C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334570: jal         0x80029C40
    // 0x80334574: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80334574: nop

    after_1:
    // 0x80334578: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033457C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334580: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334584: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334588: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033458C: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x80334590: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334594: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334598: jal         0x80029018
    // 0x8033459C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x8033459C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x803345A0: beq         $v0, $zero, L_803345BC
    if (ctx->r2 == 0) {
        // 0x803345A4: nop
    
            goto L_803345BC;
    }
    // 0x803345A4: nop

    // 0x803345A8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803345AC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803345B0: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x803345B4: b           L_80334638
    // 0x803345B8: nop

        goto L_80334638;
    // 0x803345B8: nop

L_803345BC:
    // 0x803345BC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803345C0: nop

    // 0x803345C4: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x803345C8: nop

    // 0x803345CC: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x803345D0: bne         $at, $zero, L_8033461C
    if (ctx->r1 != 0) {
        // 0x803345D4: nop
    
            goto L_8033461C;
    }
    // 0x803345D4: nop

    // 0x803345D8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803345DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803345E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803345E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803345E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803345EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803345F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803345F4: jal         0x80029F58
    // 0x803345F8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_3;
    // 0x803345F8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x803345FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334600: bne         $v0, $at, L_8033461C
    if (ctx->r2 != ctx->r1) {
        // 0x80334604: nop
    
            goto L_8033461C;
    }
    // 0x80334604: nop

    // 0x80334608: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033460C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80334610: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334614: b           L_80334638
    // 0x80334618: nop

        goto L_80334638;
    // 0x80334618: nop

L_8033461C:
    // 0x8033461C: b           L_80334630
    // 0x80334620: nop

        goto L_80334630;
    // 0x80334620: nop

L_80334624:
    // 0x80334624: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334628: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8033462C: sh          $t0, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r8;
L_80334630:
    // 0x80334630: b           L_80334638
    // 0x80334634: nop

        goto L_80334638;
    // 0x80334634: nop

L_80334638:
    // 0x80334638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033463C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80334640: jr          $ra
    // 0x80334644: nop

    return;
    // 0x80334644: nop

;}
RECOMP_FUNC void func_8033170C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033170C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331710: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331714: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331718: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033171C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331720: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331724: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331728: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033172C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331730: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331734: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331738: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033173C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331740: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331744: nop

    // 0x80331748: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033174C: nop

    // 0x80331750: bne         $t1, $zero, L_80331794
    if (ctx->r9 != 0) {
        // 0x80331754: nop
    
            goto L_80331794;
    }
    // 0x80331754: nop

    // 0x80331758: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033175C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80331760: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
    // 0x80331764: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331768: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033176C: nop

    // 0x80331770: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80331774: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331778: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033177C: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x80331780: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331784: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331788: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    // 0x8033178C: jal         0x80029EF8
    // 0x80331790: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80331790: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
L_80331794:
    // 0x80331794: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331798: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033179C: jal         0x8001B44C
    // 0x803317A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x803317A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803317A4: beq         $v0, $zero, L_803317D0
    if (ctx->r2 == 0) {
        // 0x803317A8: nop
    
            goto L_803317D0;
    }
    // 0x803317A8: nop

    // 0x803317AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317B0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x803317B4: addiu       $t7, $t7, 0x7030
    ctx->r15 = ADD32(ctx->r15, 0X7030);
    // 0x803317B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803317C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803317C8: jal         0x8001C0EC
    // 0x803317CC: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803317CC: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_2:
L_803317D0:
    // 0x803317D0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803317D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803317D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803317E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803317E8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803317EC: jal         0x80029F58
    // 0x803317F0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_3;
    // 0x803317F0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x803317F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803317F8: bne         $v0, $at, L_80331854
    if (ctx->r2 != ctx->r1) {
        // 0x803317FC: nop
    
            goto L_80331854;
    }
    // 0x803317FC: nop

    // 0x80331800: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331804: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80331808: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x8033180C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331810: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331814: nop

    // 0x80331818: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
    // 0x8033181C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331820: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331824: nop

    // 0x80331828: swc1        $f10, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f10.u32l;
    // 0x8033182C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331830: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331834: nop

    // 0x80331838: swc1        $f16, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f16.u32l;
    // 0x8033183C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331840: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80331844: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80331848: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033184C: nop

    // 0x80331850: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80331854:
    // 0x80331854: b           L_8033185C
    // 0x80331858: nop

        goto L_8033185C;
    // 0x80331858: nop

L_8033185C:
    // 0x8033185C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331860: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331864: jr          $ra
    // 0x80331868: nop

    return;
    // 0x80331868: nop

;}
RECOMP_FUNC void func_80334290_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334290: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334294: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334298: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033429C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803342A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803342A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803342A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803342AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803342B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803342B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803342B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803342BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803342C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803342C4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803342C8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803342CC: nop

    // 0x803342D0: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803342D4: nop

    // 0x803342D8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x803342DC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803342E0: nop

    // 0x803342E4: lh          $t3, 0x108($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X108);
    // 0x803342E8: nop

    // 0x803342EC: bne         $t3, $zero, L_80334318
    if (ctx->r11 != 0) {
        // 0x803342F0: nop
    
            goto L_80334318;
    }
    // 0x803342F0: nop

    // 0x803342F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342FC: jal         0x8001BB34
    // 0x80334300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80334300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80334304: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80334308: jal         0x8001BB34
    // 0x8033430C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033430C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334310: b           L_80334368
    // 0x80334314: nop

        goto L_80334368;
    // 0x80334314: nop

L_80334318:
    // 0x80334318: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033431C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334320: lh          $s0, 0x108($t4)
    ctx->r16 = MEM_H(ctx->r12, 0X108);
    // 0x80334324: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334328: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x8033432C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80334330: sltiu       $t6, $s0, 0x1
    ctx->r14 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80334334: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80334338: jal         0x8001BB34
    // 0x8033433C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x8033433C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80334340: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334344: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80334348: lh          $s0, 0x108($t7)
    ctx->r16 = MEM_H(ctx->r15, 0X108);
    // 0x8033434C: nop

    // 0x80334350: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x80334354: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80334358: sltiu       $t9, $s0, 0x1
    ctx->r25 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033435C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80334360: jal         0x8001BB34
    // 0x80334364: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80334364: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
L_80334368:
    // 0x80334368: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033436C: nop

    // 0x80334370: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80334374: nop

    // 0x80334378: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8033437C: sltiu       $at, $t2, 0x7
    ctx->r1 = ctx->r10 < 0X7 ? 1 : 0;
    // 0x80334380: beq         $at, $zero, L_80334414
    if (ctx->r1 == 0) {
        // 0x80334384: nop
    
            goto L_80334414;
    }
    // 0x80334384: nop

    // 0x80334388: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033438C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334390: addu        $at, $at, $t2
    gpr jr_addend_8033439C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334394: lw          $t2, 0x63A8($at)
    ctx->r10 = ADD32(ctx->r1, 0X63A8);
    // 0x80334398: nop

    // 0x8033439C: jr          $t2
    // 0x803343A0: nop

    switch (jr_addend_8033439C >> 2) {
        case 0: goto L_803343A4; break;
        case 1: goto L_803343B4; break;
        case 2: goto L_803343C4; break;
        case 3: goto L_803343D4; break;
        case 4: goto L_803343E4; break;
        case 5: goto L_803343F4; break;
        case 6: goto L_80334404; break;
        default: switch_error(__func__, 0x8033439C, 0x803363A8);
    }
    // 0x803343A0: nop

L_803343A4:
    // 0x803343A4: jal         0x80333020
    // 0x803343A8: nop

    func_80333020_unk_bin_40(rdram, ctx);
        goto after_4;
    // 0x803343A8: nop

    after_4:
    // 0x803343AC: b           L_8033441C
    // 0x803343B0: nop

        goto L_8033441C;
    // 0x803343B0: nop

L_803343B4:
    // 0x803343B4: jal         0x803330EC
    // 0x803343B8: nop

    func_803330EC_unk_bin_40(rdram, ctx);
        goto after_5;
    // 0x803343B8: nop

    after_5:
    // 0x803343BC: b           L_8033441C
    // 0x803343C0: nop

        goto L_8033441C;
    // 0x803343C0: nop

L_803343C4:
    // 0x803343C4: jal         0x803332C4
    // 0x803343C8: nop

    func_803332C4_unk_bin_40(rdram, ctx);
        goto after_6;
    // 0x803343C8: nop

    after_6:
    // 0x803343CC: b           L_8033441C
    // 0x803343D0: nop

        goto L_8033441C;
    // 0x803343D0: nop

L_803343D4:
    // 0x803343D4: jal         0x80333410
    // 0x803343D8: nop

    func_80333410_unk_bin_40(rdram, ctx);
        goto after_7;
    // 0x803343D8: nop

    after_7:
    // 0x803343DC: b           L_8033441C
    // 0x803343E0: nop

        goto L_8033441C;
    // 0x803343E0: nop

L_803343E4:
    // 0x803343E4: jal         0x803337B4
    // 0x803343E8: nop

    func_803337B4_unk_bin_40(rdram, ctx);
        goto after_8;
    // 0x803343E8: nop

    after_8:
    // 0x803343EC: b           L_8033441C
    // 0x803343F0: nop

        goto L_8033441C;
    // 0x803343F0: nop

L_803343F4:
    // 0x803343F4: jal         0x80333D8C
    // 0x803343F8: nop

    func_80333D8C_unk_bin_40(rdram, ctx);
        goto after_9;
    // 0x803343F8: nop

    after_9:
    // 0x803343FC: b           L_8033441C
    // 0x80334400: nop

        goto L_8033441C;
    // 0x80334400: nop

L_80334404:
    // 0x80334404: jal         0x803341C4
    // 0x80334408: nop

    func_803341C4_unk_bin_40(rdram, ctx);
        goto after_10;
    // 0x80334408: nop

    after_10:
    // 0x8033440C: b           L_8033441C
    // 0x80334410: nop

        goto L_8033441C;
    // 0x80334410: nop

L_80334414:
    // 0x80334414: b           L_8033441C
    // 0x80334418: nop

        goto L_8033441C;
    // 0x80334418: nop

L_8033441C:
    // 0x8033441C: b           L_80334424
    // 0x80334420: nop

        goto L_80334424;
    // 0x80334420: nop

L_80334424:
    // 0x80334424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334428: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033442C: jr          $ra
    // 0x80334430: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80334430: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80330000_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330008: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033000C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330010: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330014: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330018: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033001C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330020: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330024: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330028: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033002C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330030: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330034: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330038: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033003C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80330040: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330044: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330048: addiu       $a1, $a1, 0x3A54
    ctx->r5 = ADD32(ctx->r5, 0X3A54);
    // 0x8033004C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330050: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80330054: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330058: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033005C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330060: jal         0x80027464
    // 0x80330064: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80330064: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330068: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x8033006C: lb          $t1, 0x2F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2F);
    // 0x80330070: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330074: beq         $t1, $at, L_80330204
    if (ctx->r9 == ctx->r1) {
        // 0x80330078: nop
    
            goto L_80330204;
    }
    // 0x80330078: nop

    // 0x8033007C: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x80330080: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330084: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330088: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033008C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330090: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330094: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330098: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033009C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803300A0: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x803300A4: lb          $t5, 0x2F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2F);
    // 0x803300A8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x803300AC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803300B0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803300BC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803300C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300C8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803300CC: swc1        $f4, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f4.u32l;
    // 0x803300D0: lb          $t8, 0x2F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2F);
    // 0x803300D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803300D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803300DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803300E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803300E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803300E8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803300EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300F0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803300F4: swc1        $f6, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f6.u32l;
    // 0x803300F8: lb          $t6, 0x2F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2F);
    // 0x803300FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330100: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80330104: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330108: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033010C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330110: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330114: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330118: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033011C: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x80330120: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330124: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80330128: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033012C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330130: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330134: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330138: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033013C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80330140: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
    // 0x80330144: lb          $t5, 0x2F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2F);
    // 0x80330148: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033014C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330150: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330154: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330158: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033015C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330160: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330164: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80330168: sh          $t4, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r12;
    // 0x8033016C: lb          $t8, 0x2F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2F);
    // 0x80330170: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80330174: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330178: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033017C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330180: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330184: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330188: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033018C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330190: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330194: swc1        $f8, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f8.u32l;
    // 0x80330198: lb          $t6, 0x2F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2F);
    // 0x8033019C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803301A0: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x803301A4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803301A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803301AC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803301B0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803301B4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803301B8: addu        $t1, $t0, $t3
    ctx->r9 = ADD32(ctx->r8, ctx->r11);
    // 0x803301BC: lwc1        $f20, 0xC($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0XC);
    // 0x803301C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301C4: swc1        $f20, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f20.u32l;
    // 0x803301C8: lb          $t2, 0x2F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2F);
    // 0x803301CC: nop

    // 0x803301D0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x803301D4: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x803301D8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803301DC: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x803301E0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803301E4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803301E8: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x803301EC: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x803301F0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x803301F4: addiu       $a3, $a3, 0x7C94
    ctx->r7 = ADD32(ctx->r7, 0X7C94);
    // 0x803301F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803301FC: jal         0x8001ABF4
    // 0x80330200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80330204:
    // 0x80330204: b           L_8033020C
    // 0x80330208: nop

        goto L_8033020C;
    // 0x80330208: nop

L_8033020C:
    // 0x8033020C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330210: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330214: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330218: jr          $ra
    // 0x8033021C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033021C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331F44_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331F48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331F4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331F50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331F54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331F58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331F5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331F64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331F6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331F70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331F74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331F78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331F7C: nop

    // 0x80331F80: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F84: nop

    // 0x80331F88: bne         $t1, $zero, L_80332124
    if (ctx->r9 != 0) {
        // 0x80331F8C: nop
    
            goto L_80332124;
    }
    // 0x80331F8C: nop

    // 0x80331F90: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331F94: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331F98: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331F9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331FA0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331FA4: nop

    // 0x80331FA8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80331FAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331FB0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331FB4: nop

    // 0x80331FB8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80331FBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331FC0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331FC4: nop

    // 0x80331FC8: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x80331FCC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331FD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331FD4: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
    // 0x80331FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FDC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80331FE0: addiu       $t9, $t9, 0x7030
    ctx->r25 = ADD32(ctx->r25, 0X7030);
    // 0x80331FE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FE8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80331FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331FF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80331FF4: jal         0x8001C0EC
    // 0x80331FF8: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331FF8: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_0:
    // 0x80331FFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332000: nop

    // 0x80332004: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332008: nop

    // 0x8033200C: sh          $t1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r9;
    // 0x80332010: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x80332014: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332018: beq         $t2, $at, L_803320A4
    if (ctx->r10 == ctx->r1) {
        // 0x8033201C: nop
    
            goto L_803320A4;
    }
    // 0x8033201C: nop

    // 0x80332020: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332024: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332028: jal         0x800281A4
    // 0x8033202C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_1;
    // 0x8033202C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332030: lh          $t4, 0x22($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X22);
    // 0x80332034: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332038: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033203C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332040: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332044: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332048: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033204C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332050: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80332054: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80332058: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x8033205C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332060: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332064: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332068: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033206C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332070: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332074: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332078: addiu       $t6, $zero, 0x4B0
    ctx->r14 = ADD32(0, 0X4B0);
    // 0x8033207C: sh          $t6, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r14;
    // 0x80332080: lh          $t9, 0x22($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X22);
    // 0x80332084: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332088: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033208C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332090: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332094: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332098: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033209C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803320A0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803320A4:
    // 0x803320A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803320A8: nop

    // 0x803320AC: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x803320B0: nop

    // 0x803320B4: sh          $t2, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r10;
    // 0x803320B8: lh          $t4, 0x22($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X22);
    // 0x803320BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803320C0: beq         $t4, $at, L_80332124
    if (ctx->r12 == ctx->r1) {
        // 0x803320C4: nop
    
            goto L_80332124;
    }
    // 0x803320C4: nop

    // 0x803320C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320D0: jal         0x800281A4
    // 0x803320D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x803320D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803320D8: lh          $t5, 0x22($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X22);
    // 0x803320DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803320E0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803320E4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803320E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803320EC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803320F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803320F4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803320F8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x803320FC: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80332100: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x80332104: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332108: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8033210C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80332110: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332114: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80332118: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033211C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332120: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80332124:
    // 0x80332124: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332128: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033212C: jal         0x80029C40
    // 0x80332130: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x80332130: nop

    after_3:
    // 0x80332134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033213C: jal         0x80029D04
    // 0x80332140: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x80332140: nop

    after_4:
    // 0x80332144: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332148: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033214C: jal         0x8001B44C
    // 0x80332150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x80332150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80332154: beq         $v0, $zero, L_803321E8
    if (ctx->r2 == 0) {
        // 0x80332158: nop
    
            goto L_803321E8;
    }
    // 0x80332158: nop

    // 0x8033215C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332160: nop

    // 0x80332164: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x80332168: nop

    // 0x8033216C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80332170: sh          $t1, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r9;
    // 0x80332174: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332178: nop

    // 0x8033217C: lh          $t4, 0xAA($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XAA);
    // 0x80332180: nop

    // 0x80332184: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x80332188: bne         $at, $zero, L_803321C0
    if (ctx->r1 != 0) {
        // 0x8033218C: nop
    
            goto L_803321C0;
    }
    // 0x8033218C: nop

    // 0x80332190: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332194: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80332198: sh          $t5, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r13;
    // 0x8033219C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803321A0: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803321A4: sh          $t7, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r15;
    // 0x803321A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803321AC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803321B0: sh          $t8, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r24;
    // 0x803321B4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803321B8: nop

    // 0x803321BC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803321C0:
    // 0x803321C0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803321C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321C8: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x803321CC: addiu       $t2, $t2, 0x7030
    ctx->r10 = ADD32(ctx->r10, 0X7030);
    // 0x803321D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321D4: lh          $a2, 0xAA($t9)
    ctx->r6 = MEM_H(ctx->r25, 0XAA);
    // 0x803321D8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803321DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803321E0: jal         0x8001C0EC
    // 0x803321E4: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x803321E4: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_6:
L_803321E8:
    // 0x803321E8: b           L_803321F0
    // 0x803321EC: nop

        goto L_803321F0;
    // 0x803321EC: nop

L_803321F0:
    // 0x803321F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803321F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803321F8: jr          $ra
    // 0x803321FC: nop

    return;
    // 0x803321FC: nop

;}
RECOMP_FUNC void func_80332AD8_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332AD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332ADC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332AE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332AE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332AE8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332AEC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332AF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332AF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332AFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B04: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B0C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332B10: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B14: nop

    // 0x80332B18: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332B1C: nop

    // 0x80332B20: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80332B24: bne         $at, $zero, L_80332B40
    if (ctx->r1 != 0) {
        // 0x80332B28: nop
    
            goto L_80332B40;
    }
    // 0x80332B28: nop

    // 0x80332B2C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B30: nop

    // 0x80332B34: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332B38: b           L_80332CC4
    // 0x80332B3C: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
        goto L_80332CC4;
    // 0x80332B3C: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
L_80332B40:
    // 0x80332B40: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B44: nop

    // 0x80332B48: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80332B4C: nop

    // 0x80332B50: bne         $t4, $zero, L_80332C14
    if (ctx->r12 != 0) {
        // 0x80332B54: nop
    
            goto L_80332C14;
    }
    // 0x80332B54: nop

    // 0x80332B58: jal         0x80014E80
    // 0x80332B5C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80332B5C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80332B60: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80332B64: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80332B68: nop

    // 0x80332B6C: beq         $s0, $zero, L_80332B94
    if (ctx->r16 == 0) {
        // 0x80332B70: nop
    
            goto L_80332B94;
    }
    // 0x80332B70: nop

    // 0x80332B74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332B78: beq         $s0, $at, L_80332BAC
    if (ctx->r16 == ctx->r1) {
        // 0x80332B7C: nop
    
            goto L_80332BAC;
    }
    // 0x80332B7C: nop

    // 0x80332B80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332B84: beq         $s0, $at, L_80332BC8
    if (ctx->r16 == ctx->r1) {
        // 0x80332B88: nop
    
            goto L_80332BC8;
    }
    // 0x80332B88: nop

    // 0x80332B8C: b           L_80332BE4
    // 0x80332B90: nop

        goto L_80332BE4;
    // 0x80332B90: nop

L_80332B94:
    // 0x80332B94: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332B98: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B9C: nop

    // 0x80332BA0: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80332BA4: b           L_80332C00
    // 0x80332BA8: nop

        goto L_80332C00;
    // 0x80332BA8: nop

L_80332BAC:
    // 0x80332BAC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80332BB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332BB4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332BB8: nop

    // 0x80332BBC: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x80332BC0: b           L_80332C00
    // 0x80332BC4: nop

        goto L_80332C00;
    // 0x80332BC4: nop

L_80332BC8:
    // 0x80332BC8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332BCC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332BD0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332BD4: nop

    // 0x80332BD8: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
    // 0x80332BDC: b           L_80332C00
    // 0x80332BE0: nop

        goto L_80332C00;
    // 0x80332BE0: nop

L_80332BE4:
    // 0x80332BE4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80332BE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332BEC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332BF0: nop

    // 0x80332BF4: swc1        $f16, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f16.u32l;
    // 0x80332BF8: b           L_80332C00
    // 0x80332BFC: nop

        goto L_80332C00;
    // 0x80332BFC: nop

L_80332C00:
    // 0x80332C00: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80332C04: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C08: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80332C0C: b           L_80332CC4
    // 0x80332C10: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
        goto L_80332CC4;
    // 0x80332C10: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_80332C14:
    // 0x80332C14: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332C1C: lh          $s0, 0xA8($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XA8);
    // 0x80332C20: nop

    // 0x80332C24: beq         $s0, $at, L_80332C4C
    if (ctx->r16 == ctx->r1) {
        // 0x80332C28: nop
    
            goto L_80332C4C;
    }
    // 0x80332C28: nop

    // 0x80332C2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332C30: beq         $s0, $at, L_80332C68
    if (ctx->r16 == ctx->r1) {
        // 0x80332C34: nop
    
            goto L_80332C68;
    }
    // 0x80332C34: nop

    // 0x80332C38: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80332C3C: beq         $s0, $at, L_80332C84
    if (ctx->r16 == ctx->r1) {
        // 0x80332C40: nop
    
            goto L_80332C84;
    }
    // 0x80332C40: nop

    // 0x80332C44: b           L_80332C9C
    // 0x80332C48: nop

        goto L_80332C9C;
    // 0x80332C48: nop

L_80332C4C:
    // 0x80332C4C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332C50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332C54: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C58: nop

    // 0x80332C5C: swc1        $f18, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f18.u32l;
    // 0x80332C60: b           L_80332CB8
    // 0x80332C64: nop

        goto L_80332CB8;
    // 0x80332C64: nop

L_80332C68:
    // 0x80332C68: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80332C6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332C70: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C74: nop

    // 0x80332C78: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x80332C7C: b           L_80332CB8
    // 0x80332C80: nop

        goto L_80332CB8;
    // 0x80332C80: nop

L_80332C84:
    // 0x80332C84: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332C88: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C8C: nop

    // 0x80332C90: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80332C94: b           L_80332CB8
    // 0x80332C98: nop

        goto L_80332CB8;
    // 0x80332C98: nop

L_80332C9C:
    // 0x80332C9C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80332CA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332CA4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CA8: nop

    // 0x80332CAC: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x80332CB0: b           L_80332CB8
    // 0x80332CB4: nop

        goto L_80332CB8;
    // 0x80332CB4: nop

L_80332CB8:
    // 0x80332CB8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CBC: nop

    // 0x80332CC0: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
L_80332CC4:
    // 0x80332CC4: b           L_80332CCC
    // 0x80332CC8: nop

        goto L_80332CCC;
    // 0x80332CC8: nop

L_80332CCC:
    // 0x80332CCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332CD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80332CD4: jr          $ra
    // 0x80332CD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80332CD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80332EAC_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332EAC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80332EB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332EB4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332EB8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332EBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332EC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332EC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332EC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332ECC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332ED0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332ED4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332ED8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80332EDC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80332EE0: nop

    // 0x80332EE4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332EE8: nop

    // 0x80332EEC: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80332EF0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80332EF4: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x80332EF8: nop

    // 0x80332EFC: bne         $t2, $zero, L_80332FB0
    if (ctx->r10 != 0) {
        // 0x80332F00: nop
    
            goto L_80332FB0;
    }
    // 0x80332F00: nop

    // 0x80332F04: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80332F08: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x80332F0C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332F10: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80332F14: nop

    // 0x80332F18: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80332F1C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80332F20: nop

    // 0x80332F24: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x80332F28: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80332F2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332F30: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x80332F34: nop

    // 0x80332F38: beq         $t8, $at, L_80332F64
    if (ctx->r24 == ctx->r1) {
        // 0x80332F3C: nop
    
            goto L_80332F64;
    }
    // 0x80332F3C: nop

    // 0x80332F40: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x80332F44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F48: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332F4C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332F50: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332F54: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332F58: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332F5C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332F60: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80332F64:
    // 0x80332F64: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80332F68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332F6C: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x80332F70: nop

    // 0x80332F74: beq         $t2, $at, L_80332FA8
    if (ctx->r10 == ctx->r1) {
        // 0x80332F78: nop
    
            goto L_80332FA8;
    }
    // 0x80332F78: nop

    // 0x80332F7C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80332F80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F84: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x80332F88: nop

    // 0x80332F8C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332F90: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332F94: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332F98: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332F9C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332FA0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332FA4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80332FA8:
    // 0x80332FA8: b           L_80333010
    // 0x80332FAC: nop

        goto L_80333010;
    // 0x80332FAC: nop

L_80332FB0:
    // 0x80332FB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332FB4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80332FB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332FBC: bne         $t6, $at, L_80333010
    if (ctx->r14 != ctx->r1) {
        // 0x80332FC0: nop
    
            goto L_80333010;
    }
    // 0x80332FC0: nop

    // 0x80332FC4: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80332FC8: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80332FCC: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x80332FD0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80332FD4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332FD8: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x80332FDC: nop

    // 0x80332FE0: beq         $t0, $at, L_80333010
    if (ctx->r8 == ctx->r1) {
        // 0x80332FE4: nop
    
            goto L_80333010;
    }
    // 0x80332FE4: nop

    // 0x80332FE8: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x80332FEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332FF0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332FF4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332FF8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332FFC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333000: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333004: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333008: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x8033300C: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
L_80333010:
    // 0x80333010: b           L_80333018
    // 0x80333014: nop

        goto L_80333018;
    // 0x80333014: nop

L_80333018:
    // 0x80333018: jr          $ra
    // 0x8033301C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033301C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_803309D8_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803309D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803309DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803309E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803309E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803309E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803309EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803309F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803309F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803309F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803309FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330A04: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330A08: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80330A0C: nop

    // 0x80330A10: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80330A14: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80330A18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330A1C: beq         $s0, $at, L_80330A50
    if (ctx->r16 == ctx->r1) {
        // 0x80330A20: nop
    
            goto L_80330A50;
    }
    // 0x80330A20: nop

    // 0x80330A24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330A28: beq         $s0, $at, L_80330A60
    if (ctx->r16 == ctx->r1) {
        // 0x80330A2C: nop
    
            goto L_80330A60;
    }
    // 0x80330A2C: nop

    // 0x80330A30: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80330A34: beq         $s0, $at, L_80330A70
    if (ctx->r16 == ctx->r1) {
        // 0x80330A38: nop
    
            goto L_80330A70;
    }
    // 0x80330A38: nop

    // 0x80330A3C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80330A40: beq         $s0, $at, L_80330A80
    if (ctx->r16 == ctx->r1) {
        // 0x80330A44: nop
    
            goto L_80330A80;
    }
    // 0x80330A44: nop

    // 0x80330A48: b           L_80330A90
    // 0x80330A4C: nop

        goto L_80330A90;
    // 0x80330A4C: nop

L_80330A50:
    // 0x80330A50: jal         0x80330278
    // 0x80330A54: nop

    func_80330278_unk_bin_40(rdram, ctx);
        goto after_0;
    // 0x80330A54: nop

    after_0:
    // 0x80330A58: b           L_80330A98
    // 0x80330A5C: nop

        goto L_80330A98;
    // 0x80330A5C: nop

L_80330A60:
    // 0x80330A60: jal         0x8033069C
    // 0x80330A64: nop

    func_8033069C_unk_bin_40(rdram, ctx);
        goto after_1;
    // 0x80330A64: nop

    after_1:
    // 0x80330A68: b           L_80330A98
    // 0x80330A6C: nop

        goto L_80330A98;
    // 0x80330A6C: nop

L_80330A70:
    // 0x80330A70: jal         0x803303A0
    // 0x80330A74: nop

    func_803303A0_unk_bin_40(rdram, ctx);
        goto after_2;
    // 0x80330A74: nop

    after_2:
    // 0x80330A78: b           L_80330A98
    // 0x80330A7C: nop

        goto L_80330A98;
    // 0x80330A7C: nop

L_80330A80:
    // 0x80330A80: jal         0x8033097C
    // 0x80330A84: nop

    func_8033097C_unk_bin_40(rdram, ctx);
        goto after_3;
    // 0x80330A84: nop

    after_3:
    // 0x80330A88: b           L_80330A98
    // 0x80330A8C: nop

        goto L_80330A98;
    // 0x80330A8C: nop

L_80330A90:
    // 0x80330A90: b           L_80330A98
    // 0x80330A94: nop

        goto L_80330A98;
    // 0x80330A94: nop

L_80330A98:
    // 0x80330A98: b           L_80330AA0
    // 0x80330A9C: nop

        goto L_80330AA0;
    // 0x80330A9C: nop

L_80330AA0:
    // 0x80330AA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80330AA8: jr          $ra
    // 0x80330AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80330AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803332C4_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803332C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803332C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803332CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803332D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803332D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803332D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803332DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803332E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803332E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803332E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803332EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803332F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803332F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803332F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803332FC: nop

    // 0x80333300: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80333304: nop

    // 0x80333308: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8033330C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333310: nop

    // 0x80333314: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333318: nop

    // 0x8033331C: bne         $t3, $zero, L_80333380
    if (ctx->r11 != 0) {
        // 0x80333320: nop
    
            goto L_80333380;
    }
    // 0x80333320: nop

    // 0x80333324: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333328: nop

    // 0x8033332C: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80333330: nop

    // 0x80333334: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80333338: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x8033333C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333340: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80333344: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x80333348: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033334C: nop

    // 0x80333350: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80333354: nop

    // 0x80333358: sh          $t0, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r8;
    // 0x8033335C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333360: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80333364: addiu       $t1, $t1, -0x7250
    ctx->r9 = ADD32(ctx->r9, -0X7250);
    // 0x80333368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033336C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80333370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333374: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80333378: jal         0x8001C0EC
    // 0x8033337C: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033337C: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    after_0:
L_80333380:
    // 0x80333380: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333384: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333388: jal         0x8002A46C
    // 0x8033338C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x8033338C: nop

    after_1:
    // 0x80333390: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333394: nop

    // 0x80333398: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x8033339C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333A4: jal         0x8001B4AC
    // 0x803333A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803333A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803333AC: beq         $v0, $zero, L_803333CC
    if (ctx->r2 == 0) {
        // 0x803333B0: nop
    
            goto L_803333CC;
    }
    // 0x803333B0: nop

    // 0x803333B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803333B8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x803333BC: sh          $t3, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r11;
    // 0x803333C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803333C4: nop

    // 0x803333C8: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803333CC:
    // 0x803333CC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803333D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803333D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803333D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803333DC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803333E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803333E4: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803333E8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803333EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803333F0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803333F4: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x803333F8: b           L_80333400
    // 0x803333FC: nop

        goto L_80333400;
    // 0x803333FC: nop

L_80333400:
    // 0x80333400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333408: jr          $ra
    // 0x8033340C: nop

    return;
    // 0x8033340C: nop

;}
RECOMP_FUNC void func_80334678_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334678: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033467C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334680: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334684: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334688: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033468C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334690: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334694: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334698: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033469C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803346A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803346A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803346A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803346AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803346B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803346B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803346B8: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x803346BC: nop

    // 0x803346C0: beq         $s0, $at, L_803346DC
    if (ctx->r16 == ctx->r1) {
        // 0x803346C4: nop
    
            goto L_803346DC;
    }
    // 0x803346C4: nop

    // 0x803346C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803346CC: beq         $s0, $at, L_803346EC
    if (ctx->r16 == ctx->r1) {
        // 0x803346D0: nop
    
            goto L_803346EC;
    }
    // 0x803346D0: nop

    // 0x803346D4: b           L_803346FC
    // 0x803346D8: nop

        goto L_803346FC;
    // 0x803346D8: nop

L_803346DC:
    // 0x803346DC: jal         0x8033448C
    // 0x803346E0: nop

    func_8033448C_unk_bin_40(rdram, ctx);
        goto after_0;
    // 0x803346E0: nop

    after_0:
    // 0x803346E4: b           L_80334704
    // 0x803346E8: nop

        goto L_80334704;
    // 0x803346E8: nop

L_803346EC:
    // 0x803346EC: jal         0x80334648
    // 0x803346F0: nop

    func_80334648_unk_bin_40(rdram, ctx);
        goto after_1;
    // 0x803346F0: nop

    after_1:
    // 0x803346F4: b           L_80334704
    // 0x803346F8: nop

        goto L_80334704;
    // 0x803346F8: nop

L_803346FC:
    // 0x803346FC: b           L_80334704
    // 0x80334700: nop

        goto L_80334704;
    // 0x80334700: nop

L_80334704:
    // 0x80334704: b           L_8033470C
    // 0x80334708: nop

        goto L_8033470C;
    // 0x80334708: nop

L_8033470C:
    // 0x8033470C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334710: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334714: jr          $ra
    // 0x80334718: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334718: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033491C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033491C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80334920: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334924: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334928: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033492C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334930: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334934: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334938: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033493C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334940: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334944: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334948: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033494C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80334950: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80334954: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80334958: b           L_80334960
    // 0x8033495C: nop

        goto L_80334960;
    // 0x8033495C: nop

L_80334960:
    // 0x80334960: jr          $ra
    // 0x80334964: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80334964: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033097C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033097C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330980: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330984: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330988: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033098C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330990: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80330994: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330998: jal         0x800175F0
    // 0x8033099C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x8033099C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x803309A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309A8: jal         0x8001BB34
    // 0x803309AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803309AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803309B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309B8: jal         0x8002B0E4
    // 0x803309BC: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x803309BC: nop

    after_2:
    // 0x803309C0: b           L_803309C8
    // 0x803309C4: nop

        goto L_803309C8;
    // 0x803309C4: nop

L_803309C8:
    // 0x803309C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803309CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803309D0: jr          $ra
    // 0x803309D4: nop

    return;
    // 0x803309D4: nop

;}
RECOMP_FUNC void func_80335F80_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335F80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80335F84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335F88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335F8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335F90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335F94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335F98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335F9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335FA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335FA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335FA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335FAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335FB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335FB4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80335FB8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335FBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335FC0: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80335FC4: nop

    // 0x80335FC8: beq         $s0, $at, L_80335FF0
    if (ctx->r16 == ctx->r1) {
        // 0x80335FCC: nop
    
            goto L_80335FF0;
    }
    // 0x80335FCC: nop

    // 0x80335FD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335FD4: beq         $s0, $at, L_80336000
    if (ctx->r16 == ctx->r1) {
        // 0x80335FD8: nop
    
            goto L_80336000;
    }
    // 0x80335FD8: nop

    // 0x80335FDC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80335FE0: beq         $s0, $at, L_80336010
    if (ctx->r16 == ctx->r1) {
        // 0x80335FE4: nop
    
            goto L_80336010;
    }
    // 0x80335FE4: nop

    // 0x80335FE8: b           L_80336020
    // 0x80335FEC: nop

        goto L_80336020;
    // 0x80335FEC: nop

L_80335FF0:
    // 0x80335FF0: jal         0x8033554C
    // 0x80335FF4: nop

    func_8033554C_unk_bin_40(rdram, ctx);
        goto after_0;
    // 0x80335FF4: nop

    after_0:
    // 0x80335FF8: b           L_80336028
    // 0x80335FFC: nop

        goto L_80336028;
    // 0x80335FFC: nop

L_80336000:
    // 0x80336000: jal         0x803358AC
    // 0x80336004: nop

    func_803358AC_unk_bin_40(rdram, ctx);
        goto after_1;
    // 0x80336004: nop

    after_1:
    // 0x80336008: b           L_80336028
    // 0x8033600C: nop

        goto L_80336028;
    // 0x8033600C: nop

L_80336010:
    // 0x80336010: jal         0x80335E70
    // 0x80336014: nop

    func_80335E70_unk_bin_40(rdram, ctx);
        goto after_2;
    // 0x80336014: nop

    after_2:
    // 0x80336018: b           L_80336028
    // 0x8033601C: nop

        goto L_80336028;
    // 0x8033601C: nop

L_80336020:
    // 0x80336020: b           L_80336028
    // 0x80336024: nop

        goto L_80336028;
    // 0x80336024: nop

L_80336028:
    // 0x80336028: b           L_80336030
    // 0x8033602C: nop

        goto L_80336030;
    // 0x8033602C: nop

L_80336030:
    // 0x80336030: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336034: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80336038: jr          $ra
    // 0x8033603C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033603C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033186C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033186C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331870: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331874: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331878: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033187C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331880: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331884: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331888: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033188C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331890: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331894: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331898: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033189C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803318A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803318A4: nop

    // 0x803318A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803318AC: nop

    // 0x803318B0: bne         $t1, $zero, L_80331930
    if (ctx->r9 != 0) {
        // 0x803318B4: nop
    
            goto L_80331930;
    }
    // 0x803318B4: nop

    // 0x803318B8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803318BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803318C0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803318C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803318C8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803318CC: nop

    // 0x803318D0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803318D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803318D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803318DC: nop

    // 0x803318E0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803318E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803318E8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x803318EC: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
    // 0x803318F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803318F4: nop

    // 0x803318F8: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x803318FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331900: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331904: jal         0x8001BB34
    // 0x80331908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80331908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033190C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331910: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80331914: addiu       $t9, $t9, 0x7030
    ctx->r25 = ADD32(ctx->r25, 0X7030);
    // 0x80331918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033191C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80331920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331924: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80331928: jal         0x8001C0EC
    // 0x8033192C: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033192C: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_1:
L_80331930:
    // 0x80331930: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331934: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331938: jal         0x80029C40
    // 0x8033193C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x8033193C: nop

    after_2:
    // 0x80331940: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331944: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331948: jal         0x80029D04
    // 0x8033194C: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x8033194C: nop

    after_3:
    // 0x80331950: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331954: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331958: jal         0x8001B44C
    // 0x8033195C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x8033195C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80331960: beq         $v0, $zero, L_803319F8
    if (ctx->r2 == 0) {
        // 0x80331964: nop
    
            goto L_803319F8;
    }
    // 0x80331964: nop

    // 0x80331968: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033196C: nop

    // 0x80331970: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80331974: nop

    // 0x80331978: sh          $t1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r9;
    // 0x8033197C: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x80331980: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331984: beq         $t2, $at, L_803319A8
    if (ctx->r10 == ctx->r1) {
        // 0x80331988: nop
    
            goto L_803319A8;
    }
    // 0x80331988: nop

    // 0x8033198C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331990: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331994: jal         0x800281A4
    // 0x80331998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_5;
    // 0x80331998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8033199C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x803319A0: jal         0x8002B0E4
    // 0x803319A4: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x803319A4: nop

    after_6:
L_803319A8:
    // 0x803319A8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803319AC: nop

    // 0x803319B0: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x803319B4: nop

    // 0x803319B8: sh          $t4, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r12;
    // 0x803319BC: lh          $t5, 0x22($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X22);
    // 0x803319C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803319C4: beq         $t5, $at, L_803319E8
    if (ctx->r13 == ctx->r1) {
        // 0x803319C8: nop
    
            goto L_803319E8;
    }
    // 0x803319C8: nop

    // 0x803319CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319D4: jal         0x800281A4
    // 0x803319D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_7;
    // 0x803319D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x803319DC: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x803319E0: jal         0x8002B0E4
    // 0x803319E4: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x803319E4: nop

    after_8:
L_803319E8:
    // 0x803319E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319F0: jal         0x8002B0E4
    // 0x803319F4: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x803319F4: nop

    after_9:
L_803319F8:
    // 0x803319F8: b           L_80331A00
    // 0x803319FC: nop

        goto L_80331A00;
    // 0x803319FC: nop

L_80331A00:
    // 0x80331A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331A08: jr          $ra
    // 0x80331A0C: nop

    return;
    // 0x80331A0C: nop

;}
RECOMP_FUNC void func_80330AB0_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330AB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330AB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330AB8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330ABC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330AC0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80330AC4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330AC8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330ACC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330AD0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80330AD4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330AD8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330ADC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330AE0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330AE4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80330AE8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330AEC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330AF0: addiu       $a1, $a1, 0x38D4
    ctx->r5 = ADD32(ctx->r5, 0X38D4);
    // 0x80330AF4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330AF8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80330AFC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80330B00: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330B04: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330B08: jal         0x80027464
    // 0x80330B0C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80330B0C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330B10: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80330B14: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80330B18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330B1C: beq         $t1, $at, L_80330C60
    if (ctx->r9 == ctx->r1) {
        // 0x80330B20: nop
    
            goto L_80330C60;
    }
    // 0x80330B20: nop

    // 0x80330B24: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x80330B28: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330B2C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330B30: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330B34: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330B38: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330B3C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330B40: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330B44: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x80330B48: nop

    // 0x80330B4C: sh          $t4, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r12;
    // 0x80330B50: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80330B54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B58: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330B5C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330B60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B64: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330B68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B6C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330B70: lh          $t8, 0x423A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423A);
    // 0x80330B74: nop

    // 0x80330B78: sh          $t8, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r24;
    // 0x80330B7C: lh          $t6, 0x24($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X24);
    // 0x80330B80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B84: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80330B88: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330B8C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330B90: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330B94: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330B98: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330B9C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330BA0: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80330BA4: lh          $t1, 0x24($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X24);
    // 0x80330BA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BAC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330BB0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330BB4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330BB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330BBC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330BC0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330BC4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330BC8: lh          $t4, 0x22($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X22);
    // 0x80330BCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BD0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330BD4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330BD8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330BDC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330BE0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330BE4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330BE8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80330BEC: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80330BF0: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x80330BF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BF8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330BFC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330C00: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330C04: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330C08: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330C0C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330C10: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330C14: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80330C18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C1C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330C20: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330C24: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330C28: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330C2C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330C30: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330C34: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80330C38: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x80330C3C: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80330C40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C44: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330C48: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330C4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330C50: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330C54: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330C58: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330C5C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330C60:
    // 0x80330C60: b           L_80330C68
    // 0x80330C64: nop

        goto L_80330C68;
    // 0x80330C64: nop

L_80330C68:
    // 0x80330C68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330C70: jr          $ra
    // 0x80330C74: nop

    return;
    // 0x80330C74: nop

;}
RECOMP_FUNC void func_80333D8C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333D8C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80333D90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333D94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333D98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333D9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333DA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333DA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333DA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333DAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333DB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333DB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333DB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333DBC: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x80333DC0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80333DC4: nop

    // 0x80333DC8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80333DCC: nop

    // 0x80333DD0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x80333DD4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80333DD8: nop

    // 0x80333DDC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333DE0: nop

    // 0x80333DE4: bne         $t3, $zero, L_80333EC4
    if (ctx->r11 != 0) {
        // 0x80333DE8: nop
    
            goto L_80333EC4;
    }
    // 0x80333DE8: nop

    // 0x80333DEC: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80333DF0: nop

    // 0x80333DF4: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80333DF8: nop

    // 0x80333DFC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80333E00: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x80333E04: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80333E08: nop

    // 0x80333E0C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80333E10: nop

    // 0x80333E14: sh          $t8, 0xB4($t7)
    MEM_H(0XB4, ctx->r15) = ctx->r24;
    // 0x80333E18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E1C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80333E20: addiu       $t9, $t9, -0x7250
    ctx->r25 = ADD32(ctx->r25, -0X7250);
    // 0x80333E24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E28: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80333E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333E30: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80333E34: jal         0x8001C0EC
    // 0x80333E38: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333E38: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    after_0:
    // 0x80333E3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E44: jal         0x8001B754
    // 0x80333E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80333E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333E4C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80333E50: addiu       $t0, $t0, -0x723C
    ctx->r8 = ADD32(ctx->r8, -0X723C);
    // 0x80333E54: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80333E58: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80333E5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333E60: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80333E64: jal         0x8001C0EC
    // 0x80333E68: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80333E68: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    after_2:
    // 0x80333E6C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80333E70: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80333E74: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80333E78: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333E7C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333E80: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333E84: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333E88: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333E8C: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80333E90: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333E94: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x80333E98: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x80333E9C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80333EA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333EA4: jal         0x8001ABF4
    // 0x80333EA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80333EA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80333EAC: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80333EB0: nop

    // 0x80333EB4: sh          $zero, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = 0;
    // 0x80333EB8: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80333EBC: nop

    // 0x80333EC0: sh          $zero, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = 0;
L_80333EC4:
    // 0x80333EC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333EC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333ECC: jal         0x8002A46C
    // 0x80333ED0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x80333ED0: nop

    after_4:
    // 0x80333ED4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80333ED8: nop

    // 0x80333EDC: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x80333EE0: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80333EE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333EE8: beq         $t4, $at, L_80333F1C
    if (ctx->r12 == ctx->r1) {
        // 0x80333EEC: nop
    
            goto L_80333F1C;
    }
    // 0x80333EEC: nop

    // 0x80333EF0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80333EF4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80333EF8: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80333EFC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333F00: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333F04: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333F08: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80333F0C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333F10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F14: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333F18: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
L_80333F1C:
    // 0x80333F1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333F20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333F24: jal         0x8001B62C
    // 0x80333F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x80333F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80333F2C: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x80333F30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333F34: nop

    // 0x80333F38: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80333F3C: nop

    // 0x80333F40: bc1f        L_80334090
    if (!c1cs) {
        // 0x80333F44: nop
    
            goto L_80334090;
    }
    // 0x80333F44: nop

    // 0x80333F48: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80333F4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333F50: beq         $t0, $at, L_80334090
    if (ctx->r8 == ctx->r1) {
        // 0x80333F54: nop
    
            goto L_80334090;
    }
    // 0x80333F54: nop

    // 0x80333F58: jal         0x80014E80
    // 0x80333F5C: addiu       $a0, $zero, -0x15
    ctx->r4 = ADD32(0, -0X15);
    Math_Random(rdram, ctx);
        goto after_6;
    // 0x80333F5C: addiu       $a0, $zero, -0x15
    ctx->r4 = ADD32(0, -0X15);
    after_6:
    // 0x80333F60: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80333F64: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80333F68: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80333F6C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333F70: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333F74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333F78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333F7C: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80333F80: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333F84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F88: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333F8C: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80333F90: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80333F94: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80333F98: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80333F9C: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80333FA0: jal         0x80015538
    // 0x80333FA4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80333FA4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_7:
    // 0x80333FA8: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80333FAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333FB0: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80333FB4: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80333FB8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333FBC: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80333FC0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333FC4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333FC8: swc1        $f0, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f0.u32l;
    // 0x80333FCC: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80333FD0: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80333FD4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80333FD8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333FDC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333FE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333FE4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333FE8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333FEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333FF0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333FF4: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80333FF8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80333FFC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80334000: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334004: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334008: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033400C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334010: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334014: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334018: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033401C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334020: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x80334024: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80334028: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033402C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80334030: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80334034: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334038: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033403C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334040: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334044: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80334048: sh          $t2, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r10;
    // 0x8033404C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80334050: jal         0x8001BB34
    // 0x80334054: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_8;
    // 0x80334054: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80334058: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8033405C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334060: lh          $a0, 0xE8($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XE8);
    // 0x80334064: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80334068: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x8033406C: jal         0x800175F0
    // 0x80334070: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x80334070: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_9:
    // 0x80334074: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033407C: jal         0x800281A4
    // 0x80334080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_10;
    // 0x80334080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80334084: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80334088: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8033408C: sh          $t4, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r12;
L_80334090:
    // 0x80334090: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334094: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334098: jal         0x8001B4AC
    // 0x8033409C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_11;
    // 0x8033409C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x803340A0: beq         $v0, $zero, L_803341AC
    if (ctx->r2 == 0) {
        // 0x803340A4: nop
    
            goto L_803341AC;
    }
    // 0x803340A4: nop

    // 0x803340A8: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x803340AC: nop

    // 0x803340B0: lh          $t9, 0xB0($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XB0);
    // 0x803340B4: nop

    // 0x803340B8: bne         $t9, $zero, L_803340D0
    if (ctx->r25 != 0) {
        // 0x803340BC: nop
    
            goto L_803340D0;
    }
    // 0x803340BC: nop

    // 0x803340C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803340C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803340C8: jal         0x8001BBDC
    // 0x803340CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_12;
    // 0x803340CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_803340D0:
    // 0x803340D0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x803340D4: nop

    // 0x803340D8: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x803340DC: nop

    // 0x803340E0: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x803340E4: sh          $t3, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r11;
    // 0x803340E8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x803340EC: nop

    // 0x803340F0: lh          $t5, 0xB0($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XB0);
    // 0x803340F4: nop

    // 0x803340F8: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x803340FC: bne         $at, $zero, L_803341AC
    if (ctx->r1 != 0) {
        // 0x80334100: nop
    
            goto L_803341AC;
    }
    // 0x80334100: nop

    // 0x80334104: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80334108: nop

    // 0x8033410C: lh          $t4, 0xAE($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XAE);
    // 0x80334110: nop

    // 0x80334114: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x80334118: sh          $t8, 0xAE($t6)
    MEM_H(0XAE, ctx->r14) = ctx->r24;
    // 0x8033411C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x80334120: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80334124: lh          $t9, 0xAE($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAE);
    // 0x80334128: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033412C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80334130: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334134: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334138: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8033413C: nop

    // 0x80334140: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80334144: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80334148: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033414C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80334150: nop

    // 0x80334154: swc1        $f6, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f6.u32l;
    // 0x80334158: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033415C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80334160: nop

    // 0x80334164: swc1        $f4, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f4.u32l;
    // 0x80334168: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033416C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80334170: nop

    // 0x80334174: swc1        $f8, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f8.u32l;
    // 0x80334178: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8033417C: nop

    // 0x80334180: lh          $t5, 0xAE($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XAE);
    // 0x80334184: nop

    // 0x80334188: slti        $at, $t5, 0x1D
    ctx->r1 = SIGNED(ctx->r13) < 0X1D ? 1 : 0;
    // 0x8033418C: bne         $at, $zero, L_803341AC
    if (ctx->r1 != 0) {
        // 0x80334190: nop
    
            goto L_803341AC;
    }
    // 0x80334190: nop

    // 0x80334194: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334198: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033419C: jal         0x8002B114
    // 0x803341A0: nop

    func_8002B114(rdram, ctx);
        goto after_13;
    // 0x803341A0: nop

    after_13:
    // 0x803341A4: b           L_803341B4
    // 0x803341A8: nop

        goto L_803341B4;
    // 0x803341A8: nop

L_803341AC:
    // 0x803341AC: b           L_803341B4
    // 0x803341B0: nop

        goto L_803341B4;
    // 0x803341B0: nop

L_803341B4:
    // 0x803341B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803341B8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x803341BC: jr          $ra
    // 0x803341C0: nop

    return;
    // 0x803341C0: nop

;}
RECOMP_FUNC void func_80331BC8_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331BC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331BCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331BD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331BD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331BD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331BDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331BE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331BE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331BE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331BEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331BF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331BF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331BF8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331BFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331C00: nop

    // 0x80331C04: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331C08: nop

    // 0x80331C0C: bne         $t1, $zero, L_80331C88
    if (ctx->r9 != 0) {
        // 0x80331C10: nop
    
            goto L_80331C88;
    }
    // 0x80331C10: nop

    // 0x80331C14: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331C18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331C1C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331C20: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331C24: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331C28: nop

    // 0x80331C2C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80331C30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331C34: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331C38: nop

    // 0x80331C3C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80331C40: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331C44: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x80331C48: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
    // 0x80331C4C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331C50: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80331C54: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x80331C58: nop

    // 0x80331C5C: bne         $t9, $at, L_80331C88
    if (ctx->r25 != ctx->r1) {
        // 0x80331C60: nop
    
            goto L_80331C88;
    }
    // 0x80331C60: nop

    // 0x80331C64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C68: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80331C6C: addiu       $t0, $t0, 0x7030
    ctx->r8 = ADD32(ctx->r8, 0X7030);
    // 0x80331C70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C74: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80331C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331C7C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80331C80: jal         0x8001C0EC
    // 0x80331C84: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331C84: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_0:
L_80331C88:
    // 0x80331C88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C90: jal         0x80029C40
    // 0x80331C94: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80331C94: nop

    after_1:
    // 0x80331C98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CA0: jal         0x80029D04
    // 0x80331CA4: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x80331CA4: nop

    after_2:
    // 0x80331CA8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331CAC: nop

    // 0x80331CB0: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x80331CB4: nop

    // 0x80331CB8: slti        $at, $t2, 0x10
    ctx->r1 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x80331CBC: bne         $at, $zero, L_80331CD0
    if (ctx->r1 != 0) {
        // 0x80331CC0: nop
    
            goto L_80331CD0;
    }
    // 0x80331CC0: nop

    // 0x80331CC4: slti        $at, $t2, 0x13
    ctx->r1 = SIGNED(ctx->r10) < 0X13 ? 1 : 0;
    // 0x80331CC8: bne         $at, $zero, L_80331D2C
    if (ctx->r1 != 0) {
        // 0x80331CCC: nop
    
            goto L_80331D2C;
    }
    // 0x80331CCC: nop

L_80331CD0:
    // 0x80331CD0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331CD4: nop

    // 0x80331CD8: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x80331CDC: nop

    // 0x80331CE0: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80331CE4: sh          $t5, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r13;
    // 0x80331CE8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331CEC: nop

    // 0x80331CF0: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x80331CF4: nop

    // 0x80331CF8: bgtz        $t7, L_80331D24
    if (SIGNED(ctx->r15) > 0) {
        // 0x80331CFC: nop
    
            goto L_80331D24;
    }
    // 0x80331CFC: nop

    // 0x80331D00: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331D04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80331D08: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331D0C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331D10: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80331D14: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x80331D18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331D1C: nop

    // 0x80331D20: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80331D24:
    // 0x80331D24: b           L_80331D68
    // 0x80331D28: nop

        goto L_80331D68;
    // 0x80331D28: nop

L_80331D2C:
    // 0x80331D2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D34: jal         0x8001B44C
    // 0x80331D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80331D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331D3C: beq         $v0, $zero, L_80331D68
    if (ctx->r2 == 0) {
        // 0x80331D40: nop
    
            goto L_80331D68;
    }
    // 0x80331D40: nop

    // 0x80331D44: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331D48: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x80331D4C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80331D50: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331D54: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80331D58: sh          $t3, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r11;
    // 0x80331D5C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331D60: nop

    // 0x80331D64: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80331D68:
    // 0x80331D68: b           L_80331D70
    // 0x80331D6C: nop

        goto L_80331D70;
    // 0x80331D6C: nop

L_80331D70:
    // 0x80331D70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331D78: jr          $ra
    // 0x80331D7C: nop

    return;
    // 0x80331D7C: nop

;}
RECOMP_FUNC void func_80330278_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330278: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033027C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330280: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330284: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330288: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033028C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330290: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330294: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330298: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033029C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803302A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803302A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803302A8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803302AC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803302B0: nop

    // 0x803302B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803302B8: nop

    // 0x803302BC: bne         $t1, $zero, L_8033031C
    if (ctx->r9 != 0) {
        // 0x803302C0: nop
    
            goto L_8033031C;
    }
    // 0x803302C0: nop

    // 0x803302C4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803302C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803302CC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803302D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803302D4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803302D8: nop

    // 0x803302DC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803302E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803302E4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803302E8: nop

    // 0x803302EC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803302F0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803302F4: nop

    // 0x803302F8: lw          $a1, 0xD4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XD4);
    // 0x803302FC: jal         0x800C00F4
    // 0x80330300: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800C00F4(rdram, ctx);
        goto after_0;
    // 0x80330300: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80330304: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330308: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033030C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330310: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330314: jal         0x80019448
    // 0x80330318: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80330318: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_8033031C:
    // 0x8033031C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330320: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330324: jal         0x80029C40
    // 0x80330328: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80330328: nop

    after_2:
    // 0x8033032C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330330: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330334: jal         0x80029D04
    // 0x80330338: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80330338: nop

    after_3:
    // 0x8033033C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330340: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330344: jal         0x8002A1FC
    // 0x80330348: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x80330348: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_4:
    // 0x8033034C: beq         $v0, $zero, L_80330388
    if (ctx->r2 == 0) {
        // 0x80330350: nop
    
            goto L_80330388;
    }
    // 0x80330350: nop

    // 0x80330354: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330358: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8033035C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80330360: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330364: nop

    // 0x80330368: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x8033036C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330370: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330374: jal         0x8002A46C
    // 0x80330378: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_5;
    // 0x80330378: nop

    after_5:
    // 0x8033037C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330380: nop

    // 0x80330384: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
L_80330388:
    // 0x80330388: b           L_80330390
    // 0x8033038C: nop

        goto L_80330390;
    // 0x8033038C: nop

L_80330390:
    // 0x80330390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330394: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330398: jr          $ra
    // 0x8033039C: nop

    return;
    // 0x8033039C: nop

;}
RECOMP_FUNC void func_80333020_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333020: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333028: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033302C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333030: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333034: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333038: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033303C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333040: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333044: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333048: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033304C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333050: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80333054: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80333058: nop

    // 0x8033305C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333060: nop

    // 0x80333064: bne         $t1, $zero, L_803330A4
    if (ctx->r9 != 0) {
        // 0x80333068: nop
    
            goto L_803330A4;
    }
    // 0x80333068: nop

    // 0x8033306C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80333070: nop

    // 0x80333074: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333078: nop

    // 0x8033307C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333080: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333084: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80333088: nop

    // 0x8033308C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333090: nop

    // 0x80333094: sh          $t6, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r14;
    // 0x80333098: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033309C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x803330A0: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
L_803330A4:
    // 0x803330A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330AC: jal         0x8002A1FC
    // 0x803330B0: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_0;
    // 0x803330B0: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_0:
    // 0x803330B4: beq         $v0, $zero, L_803330D4
    if (ctx->r2 == 0) {
        // 0x803330B8: nop
    
            goto L_803330D4;
    }
    // 0x803330B8: nop

    // 0x803330BC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803330C0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803330C4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803330C8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803330CC: nop

    // 0x803330D0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803330D4:
    // 0x803330D4: b           L_803330DC
    // 0x803330D8: nop

        goto L_803330DC;
    // 0x803330D8: nop

L_803330DC:
    // 0x803330DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803330E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803330E4: jr          $ra
    // 0x803330E8: nop

    return;
    // 0x803330E8: nop

;}
RECOMP_FUNC void func_80330F30_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330F34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330F38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330F3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330F40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330F44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330F48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330F50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330F58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330F5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330F60: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330F64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330F68: nop

    // 0x80330F6C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330F70: nop

    // 0x80330F74: bne         $t1, $zero, L_80330FD8
    if (ctx->r9 != 0) {
        // 0x80330F78: nop
    
            goto L_80330FD8;
    }
    // 0x80330F78: nop

    // 0x80330F7C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330F80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80330F84: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80330F88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330F8C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330F90: nop

    // 0x80330F94: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80330F98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330F9C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330FA0: nop

    // 0x80330FA4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80330FA8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330FAC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80330FB0: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
    // 0x80330FB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FB8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80330FBC: addiu       $t8, $t8, 0x7030
    ctx->r24 = ADD32(ctx->r24, 0X7030);
    // 0x80330FC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80330FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330FCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80330FD0: jal         0x8001C0EC
    // 0x80330FD4: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330FD4: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_0:
L_80330FD8:
    // 0x80330FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FE0: jal         0x80029C40
    // 0x80330FE4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80330FE4: nop

    after_1:
    // 0x80330FE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FF0: jal         0x80029D04
    // 0x80330FF4: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x80330FF4: nop

    after_2:
    // 0x80330FF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331000: jal         0x8002A8B4
    // 0x80331004: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80331004: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_3:
    // 0x80331008: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033100C: nop

    // 0x80331010: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80331014: nop

    // 0x80331018: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x8033101C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331020: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331024: jal         0x8001B44C
    // 0x80331028: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80331028: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033102C: beq         $v0, $zero, L_8033109C
    if (ctx->r2 == 0) {
        // 0x80331030: nop
    
            goto L_8033109C;
    }
    // 0x80331030: nop

    // 0x80331034: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331038: nop

    // 0x8033103C: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80331040: nop

    // 0x80331044: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80331048: sh          $t2, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r10;
    // 0x8033104C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331050: nop

    // 0x80331054: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x80331058: nop

    // 0x8033105C: slti        $at, $t4, 0xC
    ctx->r1 = SIGNED(ctx->r12) < 0XC ? 1 : 0;
    // 0x80331060: bne         $at, $zero, L_80331074
    if (ctx->r1 != 0) {
        // 0x80331064: nop
    
            goto L_80331074;
    }
    // 0x80331064: nop

    // 0x80331068: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033106C: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x80331070: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
L_80331074:
    // 0x80331074: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331078: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033107C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80331080: addiu       $t8, $t8, 0x7030
    ctx->r24 = ADD32(ctx->r24, 0X7030);
    // 0x80331084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331088: lh          $a2, 0xAA($t7)
    ctx->r6 = MEM_H(ctx->r15, 0XAA);
    // 0x8033108C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80331090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331094: jal         0x8001C0EC
    // 0x80331098: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80331098: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_5:
L_8033109C:
    // 0x8033109C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310A4: jal         0x8002A560
    // 0x803310A8: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    func_8002A560(rdram, ctx);
        goto after_6;
    // 0x803310A8: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_6:
    // 0x803310AC: bne         $v0, $zero, L_80331134
    if (ctx->r2 != 0) {
        // 0x803310B0: nop
    
            goto L_80331134;
    }
    // 0x803310B0: nop

    // 0x803310B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310BC: jal         0x8002A1FC
    // 0x803310C0: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x803310C0: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_7:
    // 0x803310C4: beq         $v0, $zero, L_8033112C
    if (ctx->r2 == 0) {
        // 0x803310C8: nop
    
            goto L_8033112C;
    }
    // 0x803310C8: nop

    // 0x803310CC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803310D0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803310D4: sh          $t9, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r25;
    // 0x803310D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803310DC: nop

    // 0x803310E0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803310E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803310E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803310EC: lh          $t3, 0xA8($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA8);
    // 0x803310F0: nop

    // 0x803310F4: bne         $t3, $at, L_8033112C
    if (ctx->r11 != ctx->r1) {
        // 0x803310F8: nop
    
            goto L_8033112C;
    }
    // 0x803310F8: nop

    // 0x803310FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331104: jal         0x8002A1FC
    // 0x80331108: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_8;
    // 0x80331108: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_8:
    // 0x8033110C: beq         $v0, $zero, L_8033112C
    if (ctx->r2 == 0) {
        // 0x80331110: nop
    
            goto L_8033112C;
    }
    // 0x80331110: nop

    // 0x80331114: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331118: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8033111C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80331120: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331124: nop

    // 0x80331128: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033112C:
    // 0x8033112C: b           L_80331164
    // 0x80331130: nop

        goto L_80331164;
    // 0x80331130: nop

L_80331134:
    // 0x80331134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033113C: jal         0x8002A1FC
    // 0x80331140: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x80331140: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_9:
    // 0x80331144: bne         $v0, $zero, L_80331164
    if (ctx->r2 != 0) {
        // 0x80331148: nop
    
            goto L_80331164;
    }
    // 0x80331148: nop

    // 0x8033114C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331150: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331154: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80331158: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033115C: nop

    // 0x80331160: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80331164:
    // 0x80331164: b           L_8033116C
    // 0x80331168: nop

        goto L_8033116C;
    // 0x80331168: nop

L_8033116C:
    // 0x8033116C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331174: jr          $ra
    // 0x80331178: nop

    return;
    // 0x80331178: nop

;}
RECOMP_FUNC void func_80334648_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033464C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334650: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334654: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334658: jal         0x8002B0E4
    // 0x8033465C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033465C: nop

    after_0:
    // 0x80334660: b           L_80334668
    // 0x80334664: nop

        goto L_80334668;
    // 0x80334664: nop

L_80334668:
    // 0x80334668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033466C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80334670: jr          $ra
    // 0x80334674: nop

    return;
    // 0x80334674: nop

;}
RECOMP_FUNC void func_80334B54_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334B54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334B58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334B5C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80334B60: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80334B64: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80334B68: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80334B6C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80334B70: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80334B74: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80334B78: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80334B7C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80334B80: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80334B84: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80334B88: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80334B8C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334B90: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80334B94: addiu       $a1, $a1, 0x46B4
    ctx->r5 = ADD32(ctx->r5, 0X46B4);
    // 0x80334B98: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334B9C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80334BA0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80334BA4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80334BA8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80334BAC: jal         0x80027464
    // 0x80334BB0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80334BB0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80334BB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80334BB8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334BBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334BC0: beq         $t1, $at, L_80335130
    if (ctx->r9 == ctx->r1) {
        // 0x80334BC4: nop
    
            goto L_80335130;
    }
    // 0x80334BC4: nop

    // 0x80334BC8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334BCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334BD0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334BD4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334BD8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334BDC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334BE0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80334BE4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80334BE8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80334BEC: sb          $t2, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r10;
    // 0x80334BF0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80334BF4:
    // 0x80334BF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334BF8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80334BFC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80334C00: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80334C04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334C08: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80334C0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334C10: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80334C14: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80334C18: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80334C1C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80334C20: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x80334C24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334C28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80334C2C: jal         0x80019448
    // 0x80334C30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80334C30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80334C34: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80334C38: nop

    // 0x80334C3C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80334C40: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x80334C44: bne         $at, $zero, L_80334BF4
    if (ctx->r1 != 0) {
        // 0x80334C48: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_80334BF4;
    }
    // 0x80334C48: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80334C4C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334C50: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80334C54: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80334C58: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80334C5C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334C60: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80334C64: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334C68: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80334C6C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80334C70: lh          $t8, 0xE8($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XE8);
    // 0x80334C74: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x80334C78: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80334C7C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80334C80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334C84: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80334C88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334C8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334C90: addu        $t9, $t7, $t4
    ctx->r25 = ADD32(ctx->r15, ctx->r12);
    // 0x80334C94: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    // 0x80334C98: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334C9C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80334CA0: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80334CA4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80334CA8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334CAC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80334CB0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334CB4: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80334CB8: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80334CBC: lh          $t2, 0xE8($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XE8);
    // 0x80334CC0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80334CC4: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80334CC8: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80334CCC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334CD0: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80334CD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334CD8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334CDC: addu        $t8, $t5, $t1
    ctx->r24 = ADD32(ctx->r13, ctx->r9);
    // 0x80334CE0: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
    // 0x80334CE4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334CE8: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80334CEC: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80334CF0: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80334CF4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334CF8: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80334CFC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80334D00: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80334D04: addu        $t6, $t4, $t9
    ctx->r14 = ADD32(ctx->r12, ctx->r25);
    // 0x80334D08: lh          $t0, 0xE8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XE8);
    // 0x80334D0C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80334D10: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80334D14: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80334D18: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334D1C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80334D20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334D24: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334D28: addu        $t2, $t3, $t9
    ctx->r10 = ADD32(ctx->r11, ctx->r25);
    // 0x80334D2C: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x80334D30: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334D34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334D38: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x80334D3C: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80334D40: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334D44: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x80334D48: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334D4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334D50: addu        $t7, $t1, $t8
    ctx->r15 = ADD32(ctx->r9, ctx->r24);
    // 0x80334D54: lh          $t4, 0xE8($t7)
    ctx->r12 = MEM_H(ctx->r15, 0XE8);
    // 0x80334D58: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80334D5C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80334D60: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80334D64: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334D68: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80334D6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334D70: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334D74: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x80334D78: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x80334D7C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334D80: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80334D84: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80334D88: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80334D8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334D90: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80334D94: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334D98: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80334D9C: addu        $t5, $t9, $t2
    ctx->r13 = ADD32(ctx->r25, ctx->r10);
    // 0x80334DA0: lh          $t1, 0xEA($t5)
    ctx->r9 = MEM_H(ctx->r13, 0XEA);
    // 0x80334DA4: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x80334DA8: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80334DAC: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80334DB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334DB4: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80334DB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334DBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334DC0: addu        $t4, $t7, $t2
    ctx->r12 = ADD32(ctx->r15, ctx->r10);
    // 0x80334DC4: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
    // 0x80334DC8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334DCC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80334DD0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80334DD4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80334DD8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334DDC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80334DE0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334DE4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80334DE8: addu        $t3, $t8, $t0
    ctx->r11 = ADD32(ctx->r24, ctx->r8);
    // 0x80334DEC: lh          $t9, 0xEA($t3)
    ctx->r25 = MEM_H(ctx->r11, 0XEA);
    // 0x80334DF0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80334DF4: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80334DF8: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80334DFC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334E00: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80334E04: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334E08: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334E0C: addu        $t1, $t5, $t0
    ctx->r9 = ADD32(ctx->r13, ctx->r8);
    // 0x80334E10: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
    // 0x80334E14: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334E18: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80334E1C: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x80334E20: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80334E24: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334E28: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80334E2C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334E30: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80334E34: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x80334E38: lh          $t8, 0xEA($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XEA);
    // 0x80334E3C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80334E40: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x80334E44: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80334E48: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334E4C: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80334E50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334E54: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334E58: addu        $t9, $t3, $t4
    ctx->r25 = ADD32(ctx->r11, ctx->r12);
    // 0x80334E5C: swc1        $f4, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f4.u32l;
    // 0x80334E60: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334E64: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80334E68: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80334E6C: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x80334E70: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334E74: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x80334E78: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334E7C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80334E80: addu        $t7, $t0, $t1
    ctx->r15 = ADD32(ctx->r8, ctx->r9);
    // 0x80334E84: lh          $t2, 0xEA($t7)
    ctx->r10 = MEM_H(ctx->r15, 0XEA);
    // 0x80334E88: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80334E8C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80334E90: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334E94: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334E98: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334E9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334EA0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334EA4: addu        $t8, $t6, $t1
    ctx->r24 = ADD32(ctx->r14, ctx->r9);
    // 0x80334EA8: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
    // 0x80334EAC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334EB0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80334EB4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334EB8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334EBC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334EC0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334EC4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80334EC8: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80334ECC: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x80334ED0: lh          $t0, 0xEC($t5)
    ctx->r8 = MEM_H(ctx->r13, 0XEC);
    // 0x80334ED4: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x80334ED8: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80334EDC: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80334EE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334EE4: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80334EE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334EEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334EF0: addu        $t2, $t7, $t9
    ctx->r10 = ADD32(ctx->r15, ctx->r25);
    // 0x80334EF4: swc1        $f8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f8.u32l;
    // 0x80334EF8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334EFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334F00: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80334F04: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80334F08: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334F0C: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80334F10: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334F14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334F18: addu        $t3, $t1, $t8
    ctx->r11 = ADD32(ctx->r9, ctx->r24);
    // 0x80334F1C: lh          $t4, 0xEC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEC);
    // 0x80334F20: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80334F24: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334F28: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334F2C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334F30: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334F34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334F38: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334F3C: addu        $t0, $t5, $t8
    ctx->r8 = ADD32(ctx->r13, ctx->r24);
    // 0x80334F40: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
    // 0x80334F44: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334F48: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80334F4C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80334F50: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334F54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334F58: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334F5C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334F60: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80334F64: addu        $t6, $t9, $t2
    ctx->r14 = ADD32(ctx->r25, ctx->r10);
    // 0x80334F68: lh          $t1, 0xEC($t6)
    ctx->r9 = MEM_H(ctx->r14, 0XEC);
    // 0x80334F6C: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x80334F70: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80334F74: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334F78: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334F7C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334F80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334F84: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334F88: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80334F8C: swc1        $f16, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f16.u32l;
    // 0x80334F90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334F94: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80334F98: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80334F9C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80334FA0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334FA4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80334FA8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334FAC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80334FB0: addu        $t7, $t8, $t0
    ctx->r15 = ADD32(ctx->r24, ctx->r8);
    // 0x80334FB4: lh          $t9, 0xEC($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XEC);
    // 0x80334FB8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80334FBC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80334FC0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80334FC4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334FC8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80334FCC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334FD0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334FD4: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80334FD8: swc1        $f18, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f18.u32l;
    // 0x80334FDC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334FE0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80334FE4: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80334FE8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80334FEC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334FF0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80334FF4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334FF8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80334FFC: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80335000: lh          $t8, 0xEE($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XEE);
    // 0x80335004: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x80335008: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8033500C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80335010: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335014: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80335018: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033501C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335020: addu        $t9, $t7, $t4
    ctx->r25 = ADD32(ctx->r15, ctx->r12);
    // 0x80335024: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    // 0x80335028: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033502C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80335030: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80335034: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80335038: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033503C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80335040: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335044: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80335048: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x8033504C: lh          $t2, 0xEE($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XEE);
    // 0x80335050: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80335054: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80335058: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8033505C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335060: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80335064: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335068: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033506C: addu        $t8, $t5, $t1
    ctx->r24 = ADD32(ctx->r13, ctx->r9);
    // 0x80335070: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
    // 0x80335074: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335078: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033507C: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80335080: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80335084: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335088: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x8033508C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335090: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80335094: addu        $t6, $t4, $t9
    ctx->r14 = ADD32(ctx->r12, ctx->r25);
    // 0x80335098: lh          $t0, 0xEE($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XEE);
    // 0x8033509C: lui         $at, 0xC452
    ctx->r1 = S32(0XC452 << 16);
    // 0x803350A0: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x803350A4: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x803350A8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803350AC: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x803350B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803350B4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803350B8: addu        $t2, $t3, $t9
    ctx->r10 = ADD32(ctx->r11, ctx->r25);
    // 0x803350BC: swc1        $f8, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f8.u32l;
    // 0x803350C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803350C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803350C8: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x803350CC: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x803350D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803350D4: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x803350D8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803350DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803350E0: addu        $t7, $t1, $t8
    ctx->r15 = ADD32(ctx->r9, ctx->r24);
    // 0x803350E4: lh          $t4, 0xEE($t7)
    ctx->r12 = MEM_H(ctx->r15, 0XEE);
    // 0x803350E8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803350EC: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x803350F0: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803350F4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803350F8: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803350FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335100: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80335104: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x80335108: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x8033510C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335110: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335114: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80335118: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x8033511C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335120: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80335124: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80335128: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033512C: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
L_80335130:
    // 0x80335130: b           L_80335138
    // 0x80335134: nop

        goto L_80335138;
    // 0x80335134: nop

L_80335138:
    // 0x80335138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033513C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335140: jr          $ra
    // 0x80335144: nop

    return;
    // 0x80335144: nop

;}
RECOMP_FUNC void func_80332200_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332200: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332208: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033220C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332210: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332214: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332218: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033221C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332220: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332224: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332228: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033222C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80332230: nop

    // 0x80332234: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80332238: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033223C: nop

    // 0x80332240: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80332244: sltiu       $at, $t0, 0xB
    ctx->r1 = ctx->r8 < 0XB ? 1 : 0;
    // 0x80332248: beq         $at, $zero, L_8033231C
    if (ctx->r1 == 0) {
        // 0x8033224C: nop
    
            goto L_8033231C;
    }
    // 0x8033224C: nop

    // 0x80332250: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332254: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332258: addu        $at, $at, $t0
    gpr jr_addend_80332264 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033225C: lw          $t0, 0x637C($at)
    ctx->r8 = ADD32(ctx->r1, 0X637C);
    // 0x80332260: nop

    // 0x80332264: jr          $t0
    // 0x80332268: nop

    switch (jr_addend_80332264 >> 2) {
        case 0: goto L_8033226C; break;
        case 1: goto L_8033227C; break;
        case 2: goto L_8033228C; break;
        case 3: goto L_8033229C; break;
        case 4: goto L_803322AC; break;
        case 5: goto L_803322BC; break;
        case 6: goto L_803322CC; break;
        case 7: goto L_803322DC; break;
        case 8: goto L_803322EC; break;
        case 9: goto L_803322FC; break;
        case 10: goto L_8033230C; break;
        default: switch_error(__func__, 0x80332264, 0x8033637C);
    }
    // 0x80332268: nop

L_8033226C:
    // 0x8033226C: jal         0x80330DB4
    // 0x80332270: nop

    func_80330DB4_unk_bin_40(rdram, ctx);
        goto after_0;
    // 0x80332270: nop

    after_0:
    // 0x80332274: b           L_80332324
    // 0x80332278: nop

        goto L_80332324;
    // 0x80332278: nop

L_8033227C:
    // 0x8033227C: jal         0x80330F30
    // 0x80332280: nop

    func_80330F30_unk_bin_40(rdram, ctx);
        goto after_1;
    // 0x80332280: nop

    after_1:
    // 0x80332284: b           L_80332324
    // 0x80332288: nop

        goto L_80332324;
    // 0x80332288: nop

L_8033228C:
    // 0x8033228C: jal         0x8033117C
    // 0x80332290: nop

    func_8033117C_unk_bin_40(rdram, ctx);
        goto after_2;
    // 0x80332290: nop

    after_2:
    // 0x80332294: b           L_80332324
    // 0x80332298: nop

        goto L_80332324;
    // 0x80332298: nop

L_8033229C:
    // 0x8033229C: jal         0x803313EC
    // 0x803322A0: nop

    func_803313EC_unk_bin_40(rdram, ctx);
        goto after_3;
    // 0x803322A0: nop

    after_3:
    // 0x803322A4: b           L_80332324
    // 0x803322A8: nop

        goto L_80332324;
    // 0x803322A8: nop

L_803322AC:
    // 0x803322AC: jal         0x8033186C
    // 0x803322B0: nop

    func_8033186C_unk_bin_40(rdram, ctx);
        goto after_4;
    // 0x803322B0: nop

    after_4:
    // 0x803322B4: b           L_80332324
    // 0x803322B8: nop

        goto L_80332324;
    // 0x803322B8: nop

L_803322BC:
    // 0x803322BC: jal         0x80331A10
    // 0x803322C0: nop

    func_80331A10_unk_bin_40(rdram, ctx);
        goto after_5;
    // 0x803322C0: nop

    after_5:
    // 0x803322C4: b           L_80332324
    // 0x803322C8: nop

        goto L_80332324;
    // 0x803322C8: nop

L_803322CC:
    // 0x803322CC: jal         0x80331BC8
    // 0x803322D0: nop

    func_80331BC8_unk_bin_40(rdram, ctx);
        goto after_6;
    // 0x803322D0: nop

    after_6:
    // 0x803322D4: b           L_80332324
    // 0x803322D8: nop

        goto L_80332324;
    // 0x803322D8: nop

L_803322DC:
    // 0x803322DC: jal         0x8033170C
    // 0x803322E0: nop

    func_8033170C_unk_bin_40(rdram, ctx);
        goto after_7;
    // 0x803322E0: nop

    after_7:
    // 0x803322E4: b           L_80332324
    // 0x803322E8: nop

        goto L_80332324;
    // 0x803322E8: nop

L_803322EC:
    // 0x803322EC: jal         0x80331D80
    // 0x803322F0: nop

    func_80331D80_unk_bin_40(rdram, ctx);
        goto after_8;
    // 0x803322F0: nop

    after_8:
    // 0x803322F4: b           L_80332324
    // 0x803322F8: nop

        goto L_80332324;
    // 0x803322F8: nop

L_803322FC:
    // 0x803322FC: jal         0x80331F44
    // 0x80332300: nop

    func_80331F44_unk_bin_40(rdram, ctx);
        goto after_9;
    // 0x80332300: nop

    after_9:
    // 0x80332304: b           L_80332324
    // 0x80332308: nop

        goto L_80332324;
    // 0x80332308: nop

L_8033230C:
    // 0x8033230C: jal         0x80330F30
    // 0x80332310: nop

    func_80330F30_unk_bin_40(rdram, ctx);
        goto after_10;
    // 0x80332310: nop

    after_10:
    // 0x80332314: b           L_80332324
    // 0x80332318: nop

        goto L_80332324;
    // 0x80332318: nop

L_8033231C:
    // 0x8033231C: b           L_80332324
    // 0x80332320: nop

        goto L_80332324;
    // 0x80332320: nop

L_80332324:
    // 0x80332324: b           L_8033232C
    // 0x80332328: nop

        goto L_8033232C;
    // 0x80332328: nop

L_8033232C:
    // 0x8033232C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332330: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332334: jr          $ra
    // 0x80332338: nop

    return;
    // 0x80332338: nop

;}
RECOMP_FUNC void func_8033233C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033233C: jr          $ra
    // 0x80332340: nop

    return;
    // 0x80332340: nop

    // 0x80332344: jr          $ra
    // 0x80332348: nop

    return;
    // 0x80332348: nop

;}
RECOMP_FUNC void func_8033234C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033234C: jr          $ra
    // 0x80332350: nop

    return;
    // 0x80332350: nop

    // 0x80332354: jr          $ra
    // 0x80332358: nop

    return;
    // 0x80332358: nop

;}
RECOMP_FUNC void func_803303A0_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803303A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803303A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803303A8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803303AC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803303B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803303B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803303B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803303BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803303C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803303C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803303D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803303D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803303D8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803303DC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803303E0: nop

    // 0x803303E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803303E8: nop

    // 0x803303EC: bne         $t1, $zero, L_80330484
    if (ctx->r9 != 0) {
        // 0x803303F0: nop
    
            goto L_80330484;
    }
    // 0x803303F0: nop

    // 0x803303F4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803303F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803303FC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80330400: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330404: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330408: nop

    // 0x8033040C: swc1        $f4, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f4.u32l;
    // 0x80330410: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330414: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330418: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033041C: nop

    // 0x80330420: swc1        $f6, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f6.u32l;
    // 0x80330424: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330428: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033042C: jal         0x8001BB04
    // 0x80330430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_0;
    // 0x80330430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80330434: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033043C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330440: lui         $a2, 0x3F7A
    ctx->r6 = S32(0X3F7A << 16);
    // 0x80330444: lw          $a1, 0x48($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X48);
    // 0x80330448: jal         0x80029EF8
    // 0x8033044C: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x8033044C: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    after_1:
    // 0x80330450: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330454: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330458: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033045C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330460: jal         0x80019448
    // 0x80330464: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x80330464: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80330468: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033046C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330470: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330474: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80330478: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033047C: jal         0x800175F0
    // 0x80330480: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x80330480: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_80330484:
    // 0x80330484: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330488: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033048C: jal         0x80029C40
    // 0x80330490: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80330490: nop

    after_4:
    // 0x80330494: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330498: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033049C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803304A0: lwc1        $f8, 0xD4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0XD4);
    // 0x803304A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803304A8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x803304AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803304B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304B8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x803304BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803304C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803304C4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803304C8: jal         0x80029018
    // 0x803304CC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x803304CC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x803304D0: beq         $v0, $zero, L_8033050C
    if (ctx->r2 == 0) {
        // 0x803304D4: nop
    
            goto L_8033050C;
    }
    // 0x803304D4: nop

    // 0x803304D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803304E4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x803304E8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803304EC: jal         0x800175F0
    // 0x803304F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x803304F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x803304F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304FC: jal         0x8002B0E4
    // 0x80330500: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x80330500: nop

    after_7:
    // 0x80330504: b           L_80330688
    // 0x80330508: nop

        goto L_80330688;
    // 0x80330508: nop

L_8033050C:
    // 0x8033050C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330510: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330514: lwc1        $f6, 0xD4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x80330518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033051C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80330520: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80330524: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330528: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033052C: jal         0x80029F58
    // 0x80330530: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_8;
    // 0x80330530: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80330534: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330538: bne         $v0, $at, L_803305C4
    if (ctx->r2 != ctx->r1) {
        // 0x8033053C: nop
    
            goto L_803305C4;
    }
    // 0x8033053C: nop

    // 0x80330540: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330544: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330548: nop

    // 0x8033054C: swc1        $f10, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f10.u32l;
    // 0x80330550: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330554: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80330558: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033055C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330560: nop

    // 0x80330564: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80330568: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033056C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330574: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80330578: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033057C: jal         0x800175F0
    // 0x80330580: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x80330580: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x80330584: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80330588: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x8033058C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330590: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80330594: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330598: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033059C: lw          $t6, 0x7740($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7740);
    // 0x803305A0: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x803305A4: bne         $t6, $at, L_803305C4
    if (ctx->r14 != ctx->r1) {
        // 0x803305A8: nop
    
            goto L_803305C4;
    }
    // 0x803305A8: nop

    // 0x803305AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803305B4: jal         0x8002B0E4
    // 0x803305B8: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x803305B8: nop

    after_10:
    // 0x803305BC: b           L_80330688
    // 0x803305C0: nop

        goto L_80330688;
    // 0x803305C0: nop

L_803305C4:
    // 0x803305C4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803305C8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x803305CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803305D0: lwc1        $f16, 0x28($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X28);
    // 0x803305D4: nop

    // 0x803305D8: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x803305DC: nop

    // 0x803305E0: bc1f        L_803305F8
    if (!c1cs) {
        // 0x803305E4: nop
    
            goto L_803305F8;
    }
    // 0x803305E4: nop

    // 0x803305E8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x803305EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803305F0: b           L_80330648
    // 0x803305F4: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
        goto L_80330648;
    // 0x803305F4: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
L_803305F8:
    // 0x803305F8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803305FC: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80330600: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330604: lwc1        $f8, 0x28($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80330608: nop

    // 0x8033060C: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80330610: nop

    // 0x80330614: bc1f        L_8033062C
    if (!c1cs) {
        // 0x80330618: nop
    
            goto L_8033062C;
    }
    // 0x80330618: nop

    // 0x8033061C: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80330620: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80330624: b           L_8033063C
    // 0x80330628: nop

        goto L_8033063C;
    // 0x80330628: nop

L_8033062C:
    // 0x8033062C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330630: nop

    // 0x80330634: lwc1        $f20, 0x28($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80330638: nop

L_8033063C:
    // 0x8033063C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330640: nop

    // 0x80330644: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
L_80330648:
    // 0x80330648: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033064C: nop

    // 0x80330650: lwc1        $f10, 0x3C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80330654: nop

    // 0x80330658: swc1        $f10, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f10.u32l;
    // 0x8033065C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330660: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80330664: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330668: lwc1        $f12, 0x18($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X18);
    // 0x8033066C: jal         0x80015538
    // 0x80330670: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80330670: nop

    after_11:
    // 0x80330674: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330678: nop

    // 0x8033067C: swc1        $f0, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f0.u32l;
    // 0x80330680: b           L_80330688
    // 0x80330684: nop

        goto L_80330688;
    // 0x80330684: nop

L_80330688:
    // 0x80330688: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033068C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330690: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330694: jr          $ra
    // 0x80330698: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330698: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033471C_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033471C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334720: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334724: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334728: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033472C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334730: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334734: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334738: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033473C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334740: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334744: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334748: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033474C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334750: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334754: nop

    // 0x80334758: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033475C: nop

    // 0x80334760: bne         $t1, $zero, L_80334794
    if (ctx->r9 != 0) {
        // 0x80334764: nop
    
            goto L_80334794;
    }
    // 0x80334764: nop

    // 0x80334768: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033476C: nop

    // 0x80334770: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334774: nop

    // 0x80334778: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033477C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334780: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334784: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334788: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033478C: jal         0x80029EF8
    // 0x80334790: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80334790: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
L_80334794:
    // 0x80334794: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334798: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033479C: jal         0x80028FA0
    // 0x803347A0: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x803347A0: nop

    after_1:
    // 0x803347A4: beq         $v0, $zero, L_803347C0
    if (ctx->r2 == 0) {
        // 0x803347A8: nop
    
            goto L_803347C0;
    }
    // 0x803347A8: nop

    // 0x803347AC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803347B0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803347B4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x803347B8: b           L_8033490C
    // 0x803347BC: nop

        goto L_8033490C;
    // 0x803347BC: nop

L_803347C0:
    // 0x803347C0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803347C4: nop

    // 0x803347C8: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x803347CC: nop

    // 0x803347D0: slti        $at, $t8, 0x3C
    ctx->r1 = SIGNED(ctx->r24) < 0X3C ? 1 : 0;
    // 0x803347D4: beq         $at, $zero, L_803348F8
    if (ctx->r1 == 0) {
        // 0x803347D8: nop
    
            goto L_803348F8;
    }
    // 0x803347D8: nop

    // 0x803347DC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803347E0: nop

    // 0x803347E4: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x803347E8: nop

    // 0x803347EC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803347F0: sh          $t1, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r9;
    // 0x803347F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347FC: jal         0x80029D8C
    // 0x80334800: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x80334800: nop

    after_2:
    // 0x80334804: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334808: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033480C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334810: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334814: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80334818: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033481C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334820: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334824: jal         0x80029018
    // 0x80334828: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80334828: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8033482C: beq         $v0, $zero, L_80334848
    if (ctx->r2 == 0) {
        // 0x80334830: nop
    
            goto L_80334848;
    }
    // 0x80334830: nop

    // 0x80334834: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334838: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8033483C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80334840: b           L_8033490C
    // 0x80334844: nop

        goto L_8033490C;
    // 0x80334844: nop

L_80334848:
    // 0x80334848: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033484C: nop

    // 0x80334850: lh          $t5, 0xB2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XB2);
    // 0x80334854: nop

    // 0x80334858: slti        $at, $t5, 0x7
    ctx->r1 = SIGNED(ctx->r13) < 0X7 ? 1 : 0;
    // 0x8033485C: bne         $at, $zero, L_803348A8
    if (ctx->r1 != 0) {
        // 0x80334860: nop
    
            goto L_803348A8;
    }
    // 0x80334860: nop

    // 0x80334864: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80334868: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033486C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334870: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334874: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80334878: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033487C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334880: jal         0x80029F58
    // 0x80334884: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x80334884: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80334888: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033488C: bne         $v0, $at, L_803348A8
    if (ctx->r2 != ctx->r1) {
        // 0x80334890: nop
    
            goto L_803348A8;
    }
    // 0x80334890: nop

    // 0x80334894: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334898: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8033489C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x803348A0: b           L_8033490C
    // 0x803348A4: nop

        goto L_8033490C;
    // 0x803348A4: nop

L_803348A8:
    // 0x803348A8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803348AC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803348B0: lwc1        $f10, 0x44($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X44);
    // 0x803348B4: lwc1        $f19, 0x63C8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X63C8);
    // 0x803348B8: lwc1        $f18, 0x63CC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X63CC);
    // 0x803348BC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803348C0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x803348C4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x803348C8: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x803348CC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803348D0: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x803348D4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803348D8: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x803348DC: jal         0x80015538
    // 0x803348E0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803348E0: nop

    after_5:
    // 0x803348E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803348E8: nop

    // 0x803348EC: swc1        $f0, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f0.u32l;
    // 0x803348F0: b           L_80334904
    // 0x803348F4: nop

        goto L_80334904;
    // 0x803348F4: nop

L_803348F8:
    // 0x803348F8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803348FC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80334900: sh          $t9, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r25;
L_80334904:
    // 0x80334904: b           L_8033490C
    // 0x80334908: nop

        goto L_8033490C;
    // 0x80334908: nop

L_8033490C:
    // 0x8033490C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334910: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80334914: jr          $ra
    // 0x80334918: nop

    return;
    // 0x80334918: nop

;}
RECOMP_FUNC void func_80331D80_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331D84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331D88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331DA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331DA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331DA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331DAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331DB0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331DB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331DB8: nop

    // 0x80331DBC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331DC0: nop

    // 0x80331DC4: bne         $t1, $zero, L_80331EC4
    if (ctx->r9 != 0) {
        // 0x80331DC8: nop
    
            goto L_80331EC4;
    }
    // 0x80331DC8: nop

    // 0x80331DCC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331DD0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331DD4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331DD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331DDC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331DE0: nop

    // 0x80331DE4: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x80331DE8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331DEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331DF0: nop

    // 0x80331DF4: swc1        $f6, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f6.u32l;
    // 0x80331DF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331DFC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331E00: nop

    // 0x80331E04: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x80331E08: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331E0C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331E10: nop

    // 0x80331E14: swc1        $f10, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f10.u32l;
    // 0x80331E18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E1C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80331E20: addiu       $t8, $t8, 0x7030
    ctx->r24 = ADD32(ctx->r24, 0X7030);
    // 0x80331E24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E28: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80331E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331E34: jal         0x8001C0EC
    // 0x80331E38: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331E38: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_0:
    // 0x80331E3C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331E40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331E44: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x80331E48: nop

    // 0x80331E4C: beq         $t0, $at, L_80331E80
    if (ctx->r8 == ctx->r1) {
        // 0x80331E50: sh          $t0, 0x22($sp)
        MEM_H(0X22, ctx->r29) = ctx->r8;
            goto L_80331E80;
    }
    // 0x80331E50: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
    // 0x80331E54: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80331E58: addiu       $t1, $t1, 0x7084
    ctx->r9 = ADD32(ctx->r9, 0X7084);
    // 0x80331E5C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331E60: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331E64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331E68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331E6C: jal         0x8001C0EC
    // 0x80331E70: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80331E70: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    after_1:
    // 0x80331E74: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331E78: jal         0x8001BB04
    // 0x80331E7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_2;
    // 0x80331E7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80331E80:
    // 0x80331E80: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331E84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331E88: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80331E8C: nop

    // 0x80331E90: beq         $t3, $at, L_80331EC4
    if (ctx->r11 == ctx->r1) {
        // 0x80331E94: sh          $t3, 0x22($sp)
        MEM_H(0X22, ctx->r29) = ctx->r11;
            goto L_80331EC4;
    }
    // 0x80331E94: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
    // 0x80331E98: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80331E9C: addiu       $t4, $t4, 0x7084
    ctx->r12 = ADD32(ctx->r12, 0X7084);
    // 0x80331EA0: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331EA4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80331EA8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331EB0: jal         0x8001C0EC
    // 0x80331EB4: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80331EB4: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    after_3:
    // 0x80331EB8: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80331EBC: jal         0x8001BB04
    // 0x80331EC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_4;
    // 0x80331EC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_80331EC4:
    // 0x80331EC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331ECC: jal         0x80029C40
    // 0x80331ED0: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80331ED0: nop

    after_5:
    // 0x80331ED4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ED8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EDC: jal         0x80029D04
    // 0x80331EE0: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x80331EE0: nop

    after_6:
    // 0x80331EE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EEC: jal         0x8002A1FC
    // 0x80331EF0: lui         $a1, 0x4425
    ctx->r5 = S32(0X4425 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x80331EF0: lui         $a1, 0x4425
    ctx->r5 = S32(0X4425 << 16);
    after_7:
    // 0x80331EF4: beq         $v0, $zero, L_80331F2C
    if (ctx->r2 == 0) {
        // 0x80331EF8: nop
    
            goto L_80331F2C;
    }
    // 0x80331EF8: nop

    // 0x80331EFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F04: jal         0x8002A560
    // 0x80331F08: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_8002A560(rdram, ctx);
        goto after_8;
    // 0x80331F08: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_8:
    // 0x80331F0C: bne         $v0, $zero, L_80331F2C
    if (ctx->r2 != 0) {
        // 0x80331F10: nop
    
            goto L_80331F2C;
    }
    // 0x80331F10: nop

    // 0x80331F14: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331F18: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80331F1C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80331F20: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331F24: nop

    // 0x80331F28: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80331F2C:
    // 0x80331F2C: b           L_80331F34
    // 0x80331F30: nop

        goto L_80331F34;
    // 0x80331F30: nop

L_80331F34:
    // 0x80331F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331F38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331F3C: jr          $ra
    // 0x80331F40: nop

    return;
    // 0x80331F40: nop

;}
RECOMP_FUNC void func_803313EC_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803313EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803313F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803313F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803313F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803313FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331400: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331404: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033140C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331410: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331414: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331418: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033141C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331420: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331424: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331428: nop

    // 0x8033142C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331430: nop

    // 0x80331434: bne         $t1, $zero, L_803314BC
    if (ctx->r9 != 0) {
        // 0x80331438: nop
    
            goto L_803314BC;
    }
    // 0x80331438: nop

    // 0x8033143C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331440: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331444: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80331448: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033144C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331450: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331454: nop

    // 0x80331458: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033145C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331460: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331464: nop

    // 0x80331468: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033146C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331470: nop

    // 0x80331474: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x80331478: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033147C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80331480: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
    // 0x80331484: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331488: nop

    // 0x8033148C: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80331490: nop

    // 0x80331494: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x80331498: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033149C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x803314A0: addiu       $t0, $t0, 0x7030
    ctx->r8 = ADD32(ctx->r8, 0X7030);
    // 0x803314A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803314AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803314B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x803314B4: jal         0x8001C0EC
    // 0x803314B8: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803314B8: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_0:
L_803314BC:
    // 0x803314BC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803314C0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803314C4: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x803314C8: nop

    // 0x803314CC: bne         $t2, $at, L_80331530
    if (ctx->r10 != ctx->r1) {
        // 0x803314D0: nop
    
            goto L_80331530;
    }
    // 0x803314D0: nop

    // 0x803314D4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803314D8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x803314DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803314E0: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803314E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803314E8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803314EC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x803314F0: nop

    // 0x803314F4: bc1f        L_80331514
    if (!c1cs) {
        // 0x803314F8: nop
    
            goto L_80331514;
    }
    // 0x803314F8: nop

    // 0x803314FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331500: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331504: nop

    // 0x80331508: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8033150C: b           L_80331530
    // 0x80331510: swc1        $f8, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f8.u32l;
        goto L_80331530;
    // 0x80331510: swc1        $f8, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f8.u32l;
L_80331514:
    // 0x80331514: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331518: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033151C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331520: lwc1        $f10, 0x1C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80331524: nop

    // 0x80331528: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033152C: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
L_80331530:
    // 0x80331530: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331534: nop

    // 0x80331538: lh          $t6, 0xAA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAA);
    // 0x8033153C: nop

    // 0x80331540: slti        $at, $t6, 0x11
    ctx->r1 = SIGNED(ctx->r14) < 0X11 ? 1 : 0;
    // 0x80331544: bne         $at, $zero, L_803315AC
    if (ctx->r1 != 0) {
        // 0x80331548: nop
    
            goto L_803315AC;
    }
    // 0x80331548: nop

    // 0x8033154C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331550: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80331554: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331558: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8033155C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331560: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331564: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80331568: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8033156C: nop

    // 0x80331570: bc1f        L_80331590
    if (!c1cs) {
        // 0x80331574: nop
    
            goto L_80331590;
    }
    // 0x80331574: nop

    // 0x80331578: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033157C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331580: nop

    // 0x80331584: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80331588: b           L_803315AC
    // 0x8033158C: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
        goto L_803315AC;
    // 0x8033158C: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
L_80331590:
    // 0x80331590: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331594: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80331598: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033159C: lwc1        $f18, 0x1C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803315A0: nop

    // 0x803315A4: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x803315A8: swc1        $f10, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f10.u32l;
L_803315AC:
    // 0x803315AC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803315B0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x803315B4: lwc1        $f8, 0x40($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X40);
    // 0x803315B8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x803315BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803315C0: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x803315C4: add.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f16.d + ctx->f4.d;
    // 0x803315C8: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x803315CC: swc1        $f6, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f6.u32l;
    // 0x803315D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803315D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803315D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803315DC: lwc1        $f10, 0x48($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X48);
    // 0x803315E0: nop

    // 0x803315E4: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x803315E8: swc1        $f16, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f16.u32l;
    // 0x803315EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315F4: jal         0x80029C40
    // 0x803315F8: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x803315F8: nop

    after_1:
    // 0x803315FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331600: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331604: jal         0x80029D04
    // 0x80331608: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x80331608: nop

    after_2:
    // 0x8033160C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331610: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331614: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331618: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033161C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80331620: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80331624: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331628: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033162C: jal         0x80029018
    // 0x80331630: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80331630: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80331634: beq         $v0, $zero, L_80331668
    if (ctx->r2 == 0) {
        // 0x80331638: nop
    
            goto L_80331668;
    }
    // 0x80331638: nop

    // 0x8033163C: jal         0x800297DC
    // 0x80331640: nop

    func_800297DC(rdram, ctx);
        goto after_4;
    // 0x80331640: nop

    after_4:
    // 0x80331644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033164C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80331650: jal         0x80029824
    // 0x80331654: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_5;
    // 0x80331654: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80331658: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033165C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331660: jal         0x80029C40
    // 0x80331664: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x80331664: nop

    after_6:
L_80331668:
    // 0x80331668: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033166C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331670: jal         0x8001B44C
    // 0x80331674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x80331674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80331678: beq         $v0, $zero, L_803316F4
    if (ctx->r2 == 0) {
        // 0x8033167C: nop
    
            goto L_803316F4;
    }
    // 0x8033167C: nop

    // 0x80331680: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331684: nop

    // 0x80331688: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x8033168C: nop

    // 0x80331690: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80331694: sh          $t3, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r11;
    // 0x80331698: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033169C: nop

    // 0x803316A0: lh          $t5, 0xAA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAA);
    // 0x803316A4: nop

    // 0x803316A8: slti        $at, $t5, 0x14
    ctx->r1 = SIGNED(ctx->r13) < 0X14 ? 1 : 0;
    // 0x803316AC: bne         $at, $zero, L_803316CC
    if (ctx->r1 != 0) {
        // 0x803316B0: nop
    
            goto L_803316CC;
    }
    // 0x803316B0: nop

    // 0x803316B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803316B8: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x803316BC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x803316C0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803316C4: nop

    // 0x803316C8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803316CC:
    // 0x803316CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803316D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316D4: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x803316D8: addiu       $t0, $t0, 0x7030
    ctx->r8 = ADD32(ctx->r8, 0X7030);
    // 0x803316DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316E0: lh          $a2, 0xAA($t9)
    ctx->r6 = MEM_H(ctx->r25, 0XAA);
    // 0x803316E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803316E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803316EC: jal         0x8001C0EC
    // 0x803316F0: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x803316F0: addiu       $a3, $zero, 0x73
    ctx->r7 = ADD32(0, 0X73);
    after_8:
L_803316F4:
    // 0x803316F4: b           L_803316FC
    // 0x803316F8: nop

        goto L_803316FC;
    // 0x803316F8: nop

L_803316FC:
    // 0x803316FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331700: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80331704: jr          $ra
    // 0x80331708: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331708: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80334434_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334434: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80334438: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033443C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334440: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334444: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033444C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334450: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334454: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334458: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033445C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334460: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80334464: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80334468: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8033446C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80334470: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80334474: nop

    // 0x80334478: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x8033447C: b           L_80334484
    // 0x80334480: nop

        goto L_80334484;
    // 0x80334480: nop

L_80334484:
    // 0x80334484: jr          $ra
    // 0x80334488: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80334488: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_803341C4_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803341C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803341C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803341CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803341D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803341D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803341D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803341DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803341E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803341EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803341F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803341F4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803341F8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803341FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334200: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x80334204: nop

    // 0x80334208: beq         $t1, $at, L_80334230
    if (ctx->r9 == ctx->r1) {
        // 0x8033420C: nop
    
            goto L_80334230;
    }
    // 0x8033420C: nop

    // 0x80334210: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334214: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334218: jal         0x800281A4
    // 0x8033421C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x8033421C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80334220: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80334224: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80334228: jal         0x8002B114
    // 0x8033422C: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x8033422C: nop

    after_1:
L_80334230:
    // 0x80334230: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80334234: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334238: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x8033423C: nop

    // 0x80334240: beq         $t3, $at, L_80334268
    if (ctx->r11 == ctx->r1) {
        // 0x80334244: nop
    
            goto L_80334268;
    }
    // 0x80334244: nop

    // 0x80334248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033424C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334250: jal         0x800281A4
    // 0x80334254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x80334254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334258: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8033425C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80334260: jal         0x8002B114
    // 0x80334264: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80334264: nop

    after_3:
L_80334268:
    // 0x80334268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033426C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334270: jal         0x8002B0E4
    // 0x80334274: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x80334274: nop

    after_4:
    // 0x80334278: b           L_80334280
    // 0x8033427C: nop

        goto L_80334280;
    // 0x8033427C: nop

L_80334280:
    // 0x80334280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334288: jr          $ra
    // 0x8033428C: nop

    return;
    // 0x8033428C: nop

;}
RECOMP_FUNC void func_80334AB8_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334AB8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80334ABC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334AC0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80334AC4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80334AC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334ACC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334AD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334AD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334AD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334ADC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334AE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334AE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334AE8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80334AEC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80334AF0: addiu       $t1, $sp, 0x34
    ctx->r9 = ADD32(ctx->r29, 0X34);
    // 0x80334AF4: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80334AF8: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80334AFC: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80334B00: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x80334B04: addiu       $t3, $sp, 0x2C
    ctx->r11 = ADD32(ctx->r29, 0X2C);
    // 0x80334B08: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80334B0C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80334B10: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80334B14: jal         0x80016C54
    // 0x80334B18: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_80016C54(rdram, ctx);
        goto after_0;
    // 0x80334B18: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80334B1C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334B20: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80334B24: nop

    // 0x80334B28: swc1        $f4, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f4.u32l;
    // 0x80334B2C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334B30: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80334B34: nop

    // 0x80334B38: swc1        $f6, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f6.u32l;
    // 0x80334B3C: b           L_80334B44
    // 0x80334B40: nop

        goto L_80334B44;
    // 0x80334B40: nop

L_80334B44:
    // 0x80334B44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80334B48: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80334B4C: jr          $ra
    // 0x80334B50: nop

    return;
    // 0x80334B50: nop

;}
RECOMP_FUNC void func_803330EC_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803330EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803330F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803330F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803330F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803330FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333100: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333104: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333108: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033310C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333110: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333114: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333118: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033311C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80333120: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80333124: nop

    // 0x80333128: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033312C: nop

    // 0x80333130: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80333134: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80333138: nop

    // 0x8033313C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333140: nop

    // 0x80333144: bne         $t3, $zero, L_8033318C
    if (ctx->r11 != 0) {
        // 0x80333148: nop
    
            goto L_8033318C;
    }
    // 0x80333148: nop

    // 0x8033314C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80333150: nop

    // 0x80333154: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80333158: nop

    // 0x8033315C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80333160: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x80333164: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80333168: nop

    // 0x8033316C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80333170: nop

    // 0x80333174: sh          $t8, 0xB4($t7)
    MEM_H(0XB4, ctx->r15) = ctx->r24;
    // 0x80333178: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033317C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333180: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x80333184: jal         0x80029EF8
    // 0x80333188: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80333188: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
L_8033318C:
    // 0x8033318C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80333190: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80333194: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80333198: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033319C: jal         0x80015538
    // 0x803331A0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803331A0: nop

    after_1:
    // 0x803331A4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803331A8: nop

    // 0x803331AC: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x803331B0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803331B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803331B8: lwc1        $f4, 0x28($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X28);
    // 0x803331BC: nop

    // 0x803331C0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803331C4: nop

    // 0x803331C8: bc1f        L_80333200
    if (!c1cs) {
        // 0x803331CC: nop
    
            goto L_80333200;
    }
    // 0x803331CC: nop

    // 0x803331D0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803331D4: nop

    // 0x803331D8: sb          $zero, 0x13A($t2)
    MEM_B(0X13A, ctx->r10) = 0;
    // 0x803331DC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x803331E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803331E4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x803331E8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803331EC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803331F0: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803331F4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803331F8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803331FC: sb          $zero, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = 0;
L_80333200:
    // 0x80333200: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333208: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033320C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80333210: jal         0x8002A0D0
    // 0x80333214: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_2;
    // 0x80333214: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_2:
    // 0x80333218: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033321C: bne         $v0, $at, L_8033324C
    if (ctx->r2 != ctx->r1) {
        // 0x80333220: nop
    
            goto L_8033324C;
    }
    // 0x80333220: nop

    // 0x80333224: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80333228: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8033322C: sh          $t6, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r14;
    // 0x80333230: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80333234: nop

    // 0x80333238: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x8033323C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333240: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80333244: nop

    // 0x80333248: swc1        $f8, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f8.u32l;
L_8033324C:
    // 0x8033324C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80333250: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80333254: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333258: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033325C: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80333260: lwc1        $f16, 0x28($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80333264: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333268: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033326C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80333270: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333274: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333278: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033327C: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80333280: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80333284: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80333288: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8033328C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80333290: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333294: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80333298: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8033329C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803332A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332A4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803332A8: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x803332AC: b           L_803332B4
    // 0x803332B0: nop

        goto L_803332B4;
    // 0x803332B0: nop

L_803332B4:
    // 0x803332B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803332B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803332BC: jr          $ra
    // 0x803332C0: nop

    return;
    // 0x803332C0: nop

;}
RECOMP_FUNC void func_803337B4_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803337B4: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x803337B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803337BC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803337C0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x803337C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803337C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803337CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803337D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803337D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803337D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803337DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803337E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803337E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803337E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803337EC: sw          $t9, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r25;
    // 0x803337F0: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x803337F4: nop

    // 0x803337F8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803337FC: nop

    // 0x80333800: sw          $t1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r9;
    // 0x80333804: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x80333808: nop

    // 0x8033380C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333810: nop

    // 0x80333814: bne         $t3, $zero, L_80333904
    if (ctx->r11 != 0) {
        // 0x80333818: nop
    
            goto L_80333904;
    }
    // 0x80333818: nop

    // 0x8033381C: lw          $t4, 0xEC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XEC);
    // 0x80333820: nop

    // 0x80333824: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80333828: nop

    // 0x8033382C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80333830: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x80333834: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x80333838: nop

    // 0x8033383C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80333840: nop

    // 0x80333844: sh          $t8, 0xB4($t7)
    MEM_H(0XB4, ctx->r15) = ctx->r24;
    // 0x80333848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033384C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80333850: addiu       $t9, $t9, -0x7250
    ctx->r25 = ADD32(ctx->r25, -0X7250);
    // 0x80333854: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333858: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8033385C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333860: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80333864: jal         0x8001C0EC
    // 0x80333868: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333868: addiu       $a3, $zero, 0x4B
    ctx->r7 = ADD32(0, 0X4B);
    after_0:
    // 0x8033386C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80333870: addiu       $t0, $t0, -0x723C
    ctx->r8 = ADD32(ctx->r8, -0X723C);
    // 0x80333874: lw          $a0, 0xE8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE8);
    // 0x80333878: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033387C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333880: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80333884: jal         0x8001C0EC
    // 0x80333888: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80333888: addiu       $a3, $zero, 0x4A
    ctx->r7 = ADD32(0, 0X4A);
    after_1:
    // 0x8033388C: lw          $t1, 0xEC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XEC);
    // 0x80333890: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333894: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80333898: lw          $a3, 0x0($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X0);
    // 0x8033389C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803338A0: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803338A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803338A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803338AC: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x803338B0: addiu       $a2, $a2, 0x46A8
    ctx->r6 = ADD32(ctx->r6, 0X46A8);
    // 0x803338B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803338B8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x803338BC: jal         0x80027C00
    // 0x803338C0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027C00(rdram, ctx);
        goto after_2;
    // 0x803338C0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x803338C4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803338C8: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x803338CC: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x803338D0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803338D4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803338D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803338DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803338E0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803338E4: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x803338E8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803338EC: addiu       $a3, $a3, -0x71DC
    ctx->r7 = ADD32(ctx->r7, -0X71DC);
    // 0x803338F0: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x803338F4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x803338F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803338FC: jal         0x8001ABF4
    // 0x80333900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80333900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80333904:
    // 0x80333904: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333908: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033390C: jal         0x8002A46C
    // 0x80333910: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x80333910: nop

    after_4:
    // 0x80333914: lw          $t5, 0xEC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XEC);
    // 0x80333918: nop

    // 0x8033391C: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x80333920: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x80333924: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x80333928: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8033392C: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80333930: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333934: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80333938: lwc1        $f10, 0x1C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8033393C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333940: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333944: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333948: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x8033394C: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x80333950: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x80333954: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333958: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033395C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333960: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333964: lwc1        $f20, 0x1C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80333968: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033396C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333970: lw          $t1, 0xEC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XEC);
    // 0x80333974: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333978: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
    // 0x8033397C: swc1        $f20, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f20.u32l;
    // 0x80333980: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x80333984: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333988: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x8033398C: nop

    // 0x80333990: beq         $t3, $at, L_80333D40
    if (ctx->r11 == ctx->r1) {
        // 0x80333994: nop
    
            goto L_80333D40;
    }
    // 0x80333994: nop

    // 0x80333998: lw          $t5, 0xEC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XEC);
    // 0x8033399C: nop

    // 0x803339A0: lh          $t6, 0xEA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XEA);
    // 0x803339A4: nop

    // 0x803339A8: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x803339AC: lw          $t4, 0xEC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XEC);
    // 0x803339B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803339B4: lbu         $t8, 0x132($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X132);
    // 0x803339B8: nop

    // 0x803339BC: bne         $t8, $at, L_80333A20
    if (ctx->r24 != ctx->r1) {
        // 0x803339C0: nop
    
            goto L_80333A20;
    }
    // 0x803339C0: nop

    // 0x803339C4: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x803339C8: nop

    // 0x803339CC: lbu         $t9, 0x132($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X132);
    // 0x803339D0: nop

    // 0x803339D4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803339D8: sb          $t0, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r8;
    // 0x803339DC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803339E0: addiu       $t1, $t1, -0x716C
    ctx->r9 = ADD32(ctx->r9, -0X716C);
    // 0x803339E4: lw          $a0, 0xE4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE4);
    // 0x803339E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803339EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803339F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803339F4: jal         0x8001C0EC
    // 0x803339F8: addiu       $a3, $zero, 0x4C
    ctx->r7 = ADD32(0, 0X4C);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x803339F8: addiu       $a3, $zero, 0x4C
    ctx->r7 = ADD32(0, 0X4C);
    after_5:
    // 0x803339FC: lw          $t2, 0xE4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE4);
    // 0x80333A00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A04: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333A08: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333A0C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333A10: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333A14: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333A18: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333A1C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80333A20:
    // 0x80333A20: lw          $t5, 0xEC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XEC);
    // 0x80333A24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333A28: lw          $a1, 0x3C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X3C);
    // 0x80333A2C: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x80333A30: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80333A34: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80333A38: jal         0x800372A0
    // 0x80333A3C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    guRotateF(rdram, ctx);
        goto after_6;
    // 0x80333A3C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x80333A40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A48: jal         0x8001B62C
    // 0x80333A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_7;
    // 0x80333A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80333A50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80333A54: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333A58: nop

    // 0x80333A5C: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80333A60: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80333A64: nop

    // 0x80333A68: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80333A6C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80333A70: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80333A74: nop

    // 0x80333A78: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80333A7C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80333A80: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80333A84: sh          $t4, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r12;
    // 0x80333A88: nop

    // 0x80333A8C: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x80333A90: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80333A94: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x80333A98: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x80333A9C: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x80333AA0: jal         0x80037200
    // 0x80333AA4: nop

    guTranslateF(rdram, ctx);
        goto after_8;
    // 0x80333AA4: nop

    after_8:
    // 0x80333AA8: addiu       $t9, $sp, 0xA0
    ctx->r25 = ADD32(ctx->r29, 0XA0);
    // 0x80333AAC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80333AB0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80333AB4: jal         0x80036400
    // 0x80333AB8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    guMtxCatF(rdram, ctx);
        goto after_9;
    // 0x80333AB8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_9:
    // 0x80333ABC: lh          $t0, 0x52($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X52);
    // 0x80333AC0: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80333AC4: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80333AC8: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x80333ACC: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80333AD0: addiu       $t1, $t1, 0x62E0
    ctx->r9 = ADD32(ctx->r9, 0X62E0);
    // 0x80333AD4: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x80333AD8: lh          $t6, 0x4($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X4);
    // 0x80333ADC: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80333AE0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80333AE4: lh          $t5, 0x2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X2);
    // 0x80333AE8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80333AEC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80333AF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333AF4: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80333AF8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80333AFC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80333B00: addiu       $t4, $sp, 0x5C
    ctx->r12 = ADD32(ctx->r29, 0X5C);
    // 0x80333B04: addiu       $t8, $sp, 0x58
    ctx->r24 = ADD32(ctx->r29, 0X58);
    // 0x80333B08: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x80333B0C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80333B10: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80333B14: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80333B18: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80333B1C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80333B20: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80333B24: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80333B28: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80333B2C: jal         0x80036360
    // 0x80333B30: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    guMtxXFMF(rdram, ctx);
        goto after_10;
    // 0x80333B30: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    after_10:
    // 0x80333B34: lw          $t0, 0xE4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE4);
    // 0x80333B38: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80333B3C: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80333B40: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80333B44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333B48: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80333B4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333B50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B54: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333B58: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80333B5C: lw          $t1, 0xE4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE4);
    // 0x80333B60: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80333B64: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80333B68: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333B6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333B70: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80333B74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333B78: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333B7C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80333B80: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333B84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B88: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333B8C: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80333B90: lw          $t5, 0xE4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE4);
    // 0x80333B94: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80333B98: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x80333B9C: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80333BA0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333BA4: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80333BA8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333BAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333BB0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333BB4: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x80333BB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333BBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333BC0: jal         0x8001B62C
    // 0x80333BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_11;
    // 0x80333BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80333BC8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80333BCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333BD0: nop

    // 0x80333BD4: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80333BD8: nop

    // 0x80333BDC: bc1f        L_80333D40
    if (!c1cs) {
        // 0x80333BE0: nop
    
            goto L_80333D40;
    }
    // 0x80333BE0: nop

    // 0x80333BE4: jal         0x80014E80
    // 0x80333BE8: addiu       $a0, $zero, -0x15
    ctx->r4 = ADD32(0, -0X15);
    Math_Random(rdram, ctx);
        goto after_12;
    // 0x80333BE8: addiu       $a0, $zero, -0x15
    ctx->r4 = ADD32(0, -0X15);
    after_12:
    // 0x80333BEC: sw          $v0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r2;
    // 0x80333BF0: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x80333BF4: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x80333BF8: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80333BFC: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80333C00: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333C04: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x80333C08: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80333C0C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333C10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333C14: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333C18: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80333C1C: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x80333C20: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80333C24: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333C28: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333C2C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333C30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333C34: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333C38: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333C3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333C40: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333C44: swc1        $f10, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f10.u32l;
    // 0x80333C48: lw          $t1, 0xE0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE0);
    // 0x80333C4C: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x80333C50: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80333C54: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80333C58: jal         0x80015538
    // 0x80333C5C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_13;
    // 0x80333C5C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_13:
    // 0x80333C60: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x80333C64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333C68: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80333C6C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80333C70: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333C74: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80333C78: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333C7C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333C80: swc1        $f0, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f0.u32l;
    // 0x80333C84: lw          $a0, 0xE4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE4);
    // 0x80333C88: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80333C8C: jal         0x80029EF8
    // 0x80333C90: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_14;
    // 0x80333C90: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_14:
    // 0x80333C94: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x80333C98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333C9C: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80333CA0: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80333CA4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333CA8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80333CAC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333CB0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333CB4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80333CB8: sh          $t2, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r10;
    // 0x80333CBC: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x80333CC0: nop

    // 0x80333CC4: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80333CC8: nop

    // 0x80333CCC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80333CD0: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x80333CD4: lw          $t1, 0xEC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XEC);
    // 0x80333CD8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80333CDC: sh          $t7, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r15;
    // 0x80333CE0: lw          $t3, 0xEC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XEC);
    // 0x80333CE4: nop

    // 0x80333CE8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80333CEC: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x80333CF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333CF4: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80333CF8: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80333CFC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333D00: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80333D04: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333D08: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333D0C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80333D10: sh          $t5, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r13;
    // 0x80333D14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333D20: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x80333D24: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333D28: jal         0x800175F0
    // 0x80333D2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_15;
    // 0x80333D2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x80333D30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D38: jal         0x800281A4
    // 0x80333D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_16;
    // 0x80333D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
L_80333D40:
    // 0x80333D40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D48: jal         0x8001B4AC
    // 0x80333D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_17;
    // 0x80333D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x80333D50: beq         $v0, $zero, L_80333D70
    if (ctx->r2 == 0) {
        // 0x80333D54: nop
    
            goto L_80333D70;
    }
    // 0x80333D54: nop

    // 0x80333D58: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x80333D5C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80333D60: sh          $t4, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r12;
    // 0x80333D64: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x80333D68: nop

    // 0x80333D6C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80333D70:
    // 0x80333D70: b           L_80333D78
    // 0x80333D74: nop

        goto L_80333D78;
    // 0x80333D74: nop

L_80333D78:
    // 0x80333D78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D7C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80333D80: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333D84: jr          $ra
    // 0x80333D88: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x80333D88: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_80330220_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330228: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033022C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80330230: nop

    // 0x80330234: beq         $t6, $zero, L_80330250
    if (ctx->r14 == 0) {
        // 0x80330238: nop
    
            goto L_80330250;
    }
    // 0x80330238: nop

    // 0x8033023C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330240: beq         $t6, $at, L_80330250
    if (ctx->r14 == ctx->r1) {
        // 0x80330244: nop
    
            goto L_80330250;
    }
    // 0x80330244: nop

    // 0x80330248: b           L_80330268
    // 0x8033024C: nop

        goto L_80330268;
    // 0x8033024C: nop

L_80330250:
    // 0x80330250: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330254: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330258: jal         0x8002B0E4
    // 0x8033025C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033025C: nop

    after_0:
    // 0x80330260: b           L_80330268
    // 0x80330264: nop

        goto L_80330268;
    // 0x80330264: nop

L_80330268:
    // 0x80330268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033026C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80330270: jr          $ra
    // 0x80330274: nop

    return;
    // 0x80330274: nop

;}
RECOMP_FUNC void func_80335E70_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335E70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335E74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335E78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335E7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335E80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335E84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335E88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335E8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335E90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335E94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335E98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335E9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335EA0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335EA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335EA8: nop

    // 0x80335EAC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335EB0: nop

    // 0x80335EB4: bne         $t1, $zero, L_80335F58
    if (ctx->r9 != 0) {
        // 0x80335EB8: nop
    
            goto L_80335F58;
    }
    // 0x80335EB8: nop

    // 0x80335EBC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335EC0: nop

    // 0x80335EC4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335EC8: nop

    // 0x80335ECC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335ED0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335ED4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335ED8: nop

    // 0x80335EDC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335EE0: nop

    // 0x80335EE4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335EE8: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x80335EEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335EF0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80335EF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335EF8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80335EFC: lui         $a2, 0xC445
    ctx->r6 = S32(0XC445 << 16);
    // 0x80335F00: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80335F04: addiu       $a1, $a1, 0x46F0
    ctx->r5 = ADD32(ctx->r5, 0X46F0);
    // 0x80335F08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335F0C: lui         $a3, 0x43B4
    ctx->r7 = S32(0X43B4 << 16);
    // 0x80335F10: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80335F14: jal         0x80027464
    // 0x80335F18: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80335F18: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80335F1C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80335F20: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x80335F24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335F28: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80335F2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335F30: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80335F34: lui         $a2, 0x4445
    ctx->r6 = S32(0X4445 << 16);
    // 0x80335F38: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80335F3C: addiu       $a1, $a1, 0x46F0
    ctx->r5 = ADD32(ctx->r5, 0X46F0);
    // 0x80335F40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335F44: lui         $a3, 0x43B4
    ctx->r7 = S32(0X43B4 << 16);
    // 0x80335F48: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80335F4C: jal         0x80027464
    // 0x80335F50: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80335F50: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80335F54: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80335F58:
    // 0x80335F58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335F5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335F60: jal         0x8002B114
    // 0x80335F64: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80335F64: nop

    after_2:
    // 0x80335F68: b           L_80335F70
    // 0x80335F6C: nop

        goto L_80335F70;
    // 0x80335F6C: nop

L_80335F70:
    // 0x80335F70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335F74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335F78: jr          $ra
    // 0x80335F7C: nop

    return;
    // 0x80335F7C: nop

;}
RECOMP_FUNC void func_80332654_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332654: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332658: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033265C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332660: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332664: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332668: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033266C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332670: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332674: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332678: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033267C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332680: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332684: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332688: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033268C: nop

    // 0x80332690: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332694: nop

    // 0x80332698: bne         $t1, $zero, L_80332718
    if (ctx->r9 != 0) {
        // 0x8033269C: nop
    
            goto L_80332718;
    }
    // 0x8033269C: nop

    // 0x803326A0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803326A4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803326A8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803326AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803326B0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803326B4: nop

    // 0x803326B8: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x803326BC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803326C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803326C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803326C8: nop

    // 0x803326CC: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x803326D0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803326D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803326D8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803326DC: nop

    // 0x803326E0: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x803326E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326E8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x803326EC: addiu       $t7, $t7, 0x7084
    ctx->r15 = ADD32(ctx->r15, 0X7084);
    // 0x803326F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803326F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803326FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332700: jal         0x8001C0EC
    // 0x80332704: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332704: addiu       $a3, $zero, 0x74
    ctx->r7 = ADD32(0, 0X74);
    after_0:
    // 0x80332708: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033270C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332710: jal         0x8001BB04
    // 0x80332714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x80332714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80332718:
    // 0x80332718: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033271C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332720: jal         0x80029C40
    // 0x80332724: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80332724: nop

    after_2:
    // 0x80332728: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033272C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332730: jal         0x80029D04
    // 0x80332734: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80332734: nop

    after_3:
    // 0x80332738: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033273C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332740: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332744: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332748: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033274C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80332750: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332754: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332758: jal         0x800294F0
    // 0x8033275C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800294F0(rdram, ctx);
        goto after_4;
    // 0x8033275C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x80332760: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80332764: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x80332768: nop

    // 0x8033276C: beq         $t8, $zero, L_80332780
    if (ctx->r24 == 0) {
        // 0x80332770: nop
    
            goto L_80332780;
    }
    // 0x80332770: nop

    // 0x80332774: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332778: nop

    // 0x8033277C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
L_80332780:
    // 0x80332780: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80332784: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332788: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033278C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332790: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80332794: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80332798: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8033279C: nop

    // 0x803327A0: bc1f        L_803327C8
    if (!c1cs) {
        // 0x803327A4: nop
    
            goto L_803327C8;
    }
    // 0x803327A4: nop

    // 0x803327A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803327AC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803327B0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803327B4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803327B8: nop

    // 0x803327BC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803327C0: b           L_803328E0
    // 0x803327C4: nop

        goto L_803328E0;
    // 0x803327C4: nop

L_803327C8:
    // 0x803327C8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803327CC: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x803327D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803327D4: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x803327D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803327DC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803327E0: lw          $t6, 0x7740($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7740);
    // 0x803327E4: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x803327E8: bne         $t6, $at, L_80332808
    if (ctx->r14 != ctx->r1) {
        // 0x803327EC: nop
    
            goto L_80332808;
    }
    // 0x803327EC: nop

    // 0x803327F0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803327F4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803327F8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803327FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332800: nop

    // 0x80332804: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80332808:
    // 0x80332808: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033280C: nop

    // 0x80332810: lwc1        $f16, 0x40($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80332814: nop

    // 0x80332818: swc1        $f16, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f16.u32l;
    // 0x8033281C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332820: nop

    // 0x80332824: lwc1        $f18, 0x3C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80332828: nop

    // 0x8033282C: swc1        $f18, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f18.u32l;
    // 0x80332830: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332834: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80332838: lwc1        $f6, 0x44($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8033283C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80332840: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332844: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80332848: add.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f8.d + ctx->f4.d;
    // 0x8033284C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80332850: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
    // 0x80332854: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332858: nop

    // 0x8033285C: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x80332860: nop

    // 0x80332864: addiu       $t5, $t4, -0x10
    ctx->r13 = ADD32(ctx->r12, -0X10);
    // 0x80332868: sh          $t5, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r13;
    // 0x8033286C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332870: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332874: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332878: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033287C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332880: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80332884: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332888: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033288C: jal         0x80029018
    // 0x80332890: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80332890: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80332894: beq         $v0, $zero, L_803328A8
    if (ctx->r2 == 0) {
        // 0x80332898: nop
    
            goto L_803328A8;
    }
    // 0x80332898: nop

    // 0x8033289C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803328A0: nop

    // 0x803328A4: sh          $zero, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = 0;
L_803328A8:
    // 0x803328A8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803328AC: nop

    // 0x803328B0: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x803328B4: nop

    // 0x803328B8: bgtz        $t8, L_803328D8
    if (SIGNED(ctx->r24) > 0) {
        // 0x803328BC: nop
    
            goto L_803328D8;
    }
    // 0x803328BC: nop

    // 0x803328C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803328C4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x803328C8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803328CC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803328D0: nop

    // 0x803328D4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803328D8:
    // 0x803328D8: b           L_803328E0
    // 0x803328DC: nop

        goto L_803328E0;
    // 0x803328DC: nop

L_803328E0:
    // 0x803328E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803328E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803328E8: jr          $ra
    // 0x803328EC: nop

    return;
    // 0x803328EC: nop

;}
RECOMP_FUNC void func_803358AC_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803358AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803358B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803358B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803358B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803358BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803358C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803358C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803358C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803358CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803358D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803358D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803358D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803358DC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803358E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803358E4: nop

    // 0x803358E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803358EC: nop

    // 0x803358F0: bne         $t1, $zero, L_80335924
    if (ctx->r9 != 0) {
        // 0x803358F4: nop
    
            goto L_80335924;
    }
    // 0x803358F4: nop

    // 0x803358F8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803358FC: nop

    // 0x80335900: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335904: nop

    // 0x80335908: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033590C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335910: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335914: nop

    // 0x80335918: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033591C: nop

    // 0x80335920: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80335924:
    // 0x80335924: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80335928:
    // 0x80335928: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033592C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335930: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80335934: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80335938: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033593C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80335940: beq         $t1, $at, L_80335E0C
    if (ctx->r9 == ctx->r1) {
        // 0x80335944: nop
    
            goto L_80335E0C;
    }
    // 0x80335944: nop

    // 0x80335948: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8033594C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80335950: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x80335954: addu        $t6, $t3, $t2
    ctx->r14 = ADD32(ctx->r11, ctx->r10);
    // 0x80335958: lh          $t5, 0xE8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XE8);
    // 0x8033595C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80335960: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80335964: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80335968: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033596C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80335970: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335974: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80335978: lh          $t7, 0x41F6($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F6);
    // 0x8033597C: nop

    // 0x80335980: bne         $t7, $zero, L_803359C8
    if (ctx->r15 != 0) {
        // 0x80335984: nop
    
            goto L_803359C8;
    }
    // 0x80335984: nop

    // 0x80335988: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8033598C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335990: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80335994: addu        $t4, $t9, $t1
    ctx->r12 = ADD32(ctx->r25, ctx->r9);
    // 0x80335998: lh          $t3, 0xE8($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XE8);
    // 0x8033599C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803359A0: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x803359A4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803359A8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803359AC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803359B0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803359B4: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803359B8: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x803359BC: lwc1        $f4, 0xD4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XD4);
    // 0x803359C0: b           L_80335AC4
    // 0x803359C4: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
        goto L_80335AC4;
    // 0x803359C4: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
L_803359C8:
    // 0x803359C8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x803359CC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803359D0: sll         $t0, $t7, 1
    ctx->r8 = S32(ctx->r15 << 1);
    // 0x803359D4: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x803359D8: lh          $t1, 0xE8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XE8);
    // 0x803359DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803359E0: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x803359E4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803359E8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803359EC: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803359F0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803359F4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803359F8: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803359FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80335A00: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80335A04: jal         0x80015538
    // 0x80335A08: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80335A08: nop

    after_0:
    // 0x80335A0C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80335A10: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80335A14: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x80335A18: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x80335A1C: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x80335A20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335A24: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80335A28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335A2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335A30: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335A34: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335A38: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80335A3C: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80335A40: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80335A44: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335A48: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x80335A4C: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x80335A50: lh          $t2, 0xE8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XE8);
    // 0x80335A54: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80335A58: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80335A5C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335A60: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335A64: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335A68: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80335A6C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80335A70: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x80335A74: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80335A78: nop

    // 0x80335A7C: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80335A80: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80335A84: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335A88: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80335A8C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80335A90: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80335A94: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80335A98: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80335A9C: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80335AA0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335AA4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80335AA8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335AAC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80335AB0: addu        $t3, $t4, $t2
    ctx->r11 = ADD32(ctx->r12, ctx->r10);
    // 0x80335AB4: lh          $t6, 0xA6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XA6);
    // 0x80335AB8: nop

    // 0x80335ABC: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80335AC0: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
L_80335AC4:
    // 0x80335AC4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80335AC8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335ACC: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80335AD0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80335AD4: lh          $a0, 0xE8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XE8);
    // 0x80335AD8: jal         0x80029C40
    // 0x80335ADC: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80335ADC: nop

    after_1:
    // 0x80335AE0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80335AE4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80335AE8: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x80335AEC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80335AF0: addu        $t6, $t1, $t2
    ctx->r14 = ADD32(ctx->r9, ctx->r10);
    // 0x80335AF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335AF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80335AFC: lh          $a0, 0xE8($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XE8);
    // 0x80335B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80335B04: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80335B08: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335B0C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80335B10: jal         0x80029018
    // 0x80335B14: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x80335B14: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80335B18: beq         $v0, $zero, L_80335D00
    if (ctx->r2 == 0) {
        // 0x80335B1C: nop
    
            goto L_80335D00;
    }
    // 0x80335B1C: nop

    // 0x80335B20: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80335B24: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335B28: sll         $t7, $t3, 1
    ctx->r15 = S32(ctx->r11 << 1);
    // 0x80335B2C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80335B30: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80335B34: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80335B38: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335B3C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335B40: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335B44: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335B48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80335B4C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80335B50: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335B54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335B58: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335B5C: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80335B60: swc1        $f16, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f16.u32l;
    // 0x80335B64: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x80335B68: lh          $t3, 0xE8($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XE8);
    // 0x80335B6C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80335B70: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80335B74: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80335B78: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335B7C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80335B80: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335B84: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80335B88: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80335B8C: lwc1        $f18, 0x2C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80335B90: nop

    // 0x80335B94: swc1        $f18, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f18.u32l;
    // 0x80335B98: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80335B9C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335BA0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80335BA4: addu        $t4, $t9, $t1
    ctx->r12 = ADD32(ctx->r25, ctx->r9);
    // 0x80335BA8: lh          $t2, 0xE8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XE8);
    // 0x80335BAC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80335BB0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80335BB4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80335BB8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80335BBC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80335BC0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80335BC4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80335BC8: addu        $t5, $t6, $t3
    ctx->r13 = ADD32(ctx->r14, ctx->r11);
    // 0x80335BCC: lwc1        $f4, 0x44($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80335BD0: nop

    // 0x80335BD4: swc1        $f4, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f4.u32l;
    // 0x80335BD8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80335BDC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80335BE0: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80335BE4: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80335BE8: lh          $t1, 0xE8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XE8);
    // 0x80335BEC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335BF0: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80335BF4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80335BF8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335BFC: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80335C00: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335C04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335C08: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335C0C: swc1        $f6, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f6.u32l;
    // 0x80335C10: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80335C14: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80335C18: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x80335C1C: addu        $t8, $t6, $t5
    ctx->r24 = ADD32(ctx->r14, ctx->r13);
    // 0x80335C20: lh          $t7, 0xE8($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XE8);
    // 0x80335C24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335C28: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80335C2C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80335C30: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335C34: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80335C38: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335C3C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335C40: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80335C44: sh          $t2, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r10;
    // 0x80335C48: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80335C4C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335C50: sll         $t4, $t1, 1
    ctx->r12 = S32(ctx->r9 << 1);
    // 0x80335C54: addu        $t3, $t9, $t4
    ctx->r11 = ADD32(ctx->r25, ctx->r12);
    // 0x80335C58: lh          $t6, 0xE8($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XE8);
    // 0x80335C5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335C60: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80335C64: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80335C68: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335C6C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80335C70: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335C74: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335C78: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335C7C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80335C80: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80335C84: jal         0x80015538
    // 0x80335C88: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80335C88: nop

    after_3:
    // 0x80335C8C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80335C90: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335C94: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x80335C98: addu        $t0, $t8, $t2
    ctx->r8 = ADD32(ctx->r24, ctx->r10);
    // 0x80335C9C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80335CA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335CA4: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80335CA8: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80335CAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335CB0: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80335CB4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80335CB8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80335CBC: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80335CC0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80335CC4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80335CC8: sll         $t6, $t3, 1
    ctx->r14 = S32(ctx->r11 << 1);
    // 0x80335CCC: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x80335CD0: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x80335CD4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
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
    // 0x80335CEC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80335CF0: addu        $t0, $t8, $t2
    ctx->r8 = ADD32(ctx->r24, ctx->r10);
    // 0x80335CF4: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80335CF8: nop

    // 0x80335CFC: swc1        $f8, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f8.u32l;
L_80335D00:
    // 0x80335D00: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80335D04: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80335D08: sll         $t3, $t9, 1
    ctx->r11 = S32(ctx->r25 << 1);
    // 0x80335D0C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80335D10: lh          $t6, 0xE8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XE8);
    // 0x80335D14: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80335D18: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80335D1C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80335D20: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335D24: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80335D28: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335D2C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80335D30: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80335D34: lwc1        $f10, 0x1C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80335D38: nop

    // 0x80335D3C: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
    // 0x80335D40: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80335D44: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335D48: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x80335D4C: addu        $t1, $t2, $t9
    ctx->r9 = ADD32(ctx->r10, ctx->r25);
    // 0x80335D50: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80335D54: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335D58: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x80335D5C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80335D60: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80335D64: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335D68: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80335D6C: jal         0x800295C0
    // 0x80335D70: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x80335D70: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x80335D74: beq         $v0, $zero, L_80335DB8
    if (ctx->r2 == 0) {
        // 0x80335D78: nop
    
            goto L_80335DB8;
    }
    // 0x80335D78: nop

    // 0x80335D7C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80335D80: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80335D84: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x80335D88: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x80335D8C: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x80335D90: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80335D94: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80335D98: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335D9C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80335DA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80335DA4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335DA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335DAC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80335DB0: b           L_80335DF0
    // 0x80335DB4: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
        goto L_80335DF0;
    // 0x80335DB4: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
L_80335DB8:
    // 0x80335DB8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80335DBC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335DC0: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x80335DC4: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x80335DC8: lh          $t4, 0xE8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XE8);
    // 0x80335DCC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80335DD0: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80335DD4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80335DD8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335DDC: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80335DE0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80335DE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335DE8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335DEC: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
L_80335DF0:
    // 0x80335DF0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80335DF4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80335DF8: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x80335DFC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80335E00: lh          $a0, 0xE8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XE8);
    // 0x80335E04: jal         0x80334AB8
    // 0x80335E08: nop

    func_80334AB8_unk_bin_40(rdram, ctx);
        goto after_5;
    // 0x80335E08: nop

    after_5:
L_80335E0C:
    // 0x80335E0C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80335E10: nop

    // 0x80335E14: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x80335E18: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x80335E1C: bne         $at, $zero, L_80335928
    if (ctx->r1 != 0) {
        // 0x80335E20: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_80335928;
    }
    // 0x80335E20: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80335E24: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80335E28: nop

    // 0x80335E2C: lh          $t1, 0xA6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA6);
    // 0x80335E30: nop

    // 0x80335E34: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x80335E38: bne         $at, $zero, L_80335E58
    if (ctx->r1 != 0) {
        // 0x80335E3C: nop
    
            goto L_80335E58;
    }
    // 0x80335E3C: nop

    // 0x80335E40: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80335E44: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80335E48: sh          $t4, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r12;
    // 0x80335E4C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335E50: nop

    // 0x80335E54: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80335E58:
    // 0x80335E58: b           L_80335E60
    // 0x80335E5C: nop

        goto L_80335E60;
    // 0x80335E5C: nop

L_80335E60:
    // 0x80335E60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335E64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80335E68: jr          $ra
    // 0x80335E6C: nop

    return;
    // 0x80335E6C: nop

;}
RECOMP_FUNC void func_80336250_unk_bin_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336250: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80336254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80336258: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033625C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336260: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336264: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033626C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336270: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336274: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336278: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033627C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336280: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80336284: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80336288: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033628C: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80336290: nop

    // 0x80336294: bne         $t1, $at, L_803362B4
    if (ctx->r9 != ctx->r1) {
        // 0x80336298: nop
    
            goto L_803362B4;
    }
    // 0x80336298: nop

    // 0x8033629C: b           L_803362A4
    // 0x803362A0: nop

        goto L_803362A4;
    // 0x803362A0: nop

L_803362A4:
    // 0x803362A4: jal         0x80336040
    // 0x803362A8: nop

    func_80336040_unk_bin_40(rdram, ctx);
        goto after_0;
    // 0x803362A8: nop

    after_0:
    // 0x803362AC: b           L_803362BC
    // 0x803362B0: nop

        goto L_803362BC;
    // 0x803362B0: nop

L_803362B4:
    // 0x803362B4: b           L_803362BC
    // 0x803362B8: nop

        goto L_803362BC;
    // 0x803362B8: nop

L_803362BC:
    // 0x803362BC: b           L_803362C4
    // 0x803362C0: nop

        goto L_803362C4;
    // 0x803362C0: nop

L_803362C4:
    // 0x803362C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803362C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803362CC: jr          $ra
    // 0x803362D0: nop

    return;
    // 0x803362D0: nop

    // 0x803362D4: nop

    // 0x803362D8: nop

    // 0x803362DC: nop

;}
