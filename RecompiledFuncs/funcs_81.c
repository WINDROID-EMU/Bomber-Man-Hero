#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803362A8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803362A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803362AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803362B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803362B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803362B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803362BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803362C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803362C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803362C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803362CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803362D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803362D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803362D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803362DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803362E0: nop

    // 0x803362E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803362E8: nop

    // 0x803362EC: bne         $t1, $zero, L_803363B0
    if (ctx->r9 != 0) {
        // 0x803362F0: nop
    
            goto L_803363B0;
    }
    // 0x803362F0: nop

    // 0x803362F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803362F8: nop

    // 0x803362FC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336300: nop

    // 0x80336304: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336308: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033630C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336310: nop

    // 0x80336314: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336318: nop

    // 0x8033631C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336320: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336324: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336328: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x8033632C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336330: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336338: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x8033633C: jal         0x8001C0EC
    // 0x80336340: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336340: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336344: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336348: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033634C: jal         0x8001BBDC
    // 0x80336350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80336354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033635C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336360: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336368: jal         0x8001ABF4
    // 0x8033636C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033636C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80336370: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336374: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336378: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x8033637C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336380: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80336384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80336388: jal         0x8001ABF4
    // 0x8033638C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8033638C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80336390: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336394: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336398: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x8033639C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803363A0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x803363A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803363A8: jal         0x8001ABF4
    // 0x803363AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803363AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803363B0:
    // 0x803363B0: jal         0x80334D5C
    // 0x803363B4: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x803363B4: nop

    after_5:
    // 0x803363B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803363BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803363C0: jal         0x8001B4AC
    // 0x803363C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x803363C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x803363C8: beq         $v0, $zero, L_803363E8
    if (ctx->r2 == 0) {
        // 0x803363CC: nop
    
            goto L_803363E8;
    }
    // 0x803363CC: nop

    // 0x803363D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803363D4: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x803363D8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803363DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803363E0: nop

    // 0x803363E4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803363E8:
    // 0x803363E8: b           L_803363F0
    // 0x803363EC: nop

        goto L_803363F0;
    // 0x803363EC: nop

L_803363F0:
    // 0x803363F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803363F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803363F8: jr          $ra
    // 0x803363FC: nop

    return;
    // 0x803363FC: nop

;}
RECOMP_FUNC void func_80335394_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335394: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033539C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803353A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803353A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803353A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803353AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803353B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803353B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803353B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803353BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803353C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803353C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803353C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803353CC: nop

    // 0x803353D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803353D4: nop

    // 0x803353D8: bne         $t1, $zero, L_80335440
    if (ctx->r9 != 0) {
        // 0x803353DC: nop
    
            goto L_80335440;
    }
    // 0x803353DC: nop

    // 0x803353E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803353E4: nop

    // 0x803353E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803353EC: nop

    // 0x803353F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803353F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803353F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803353FC: nop

    // 0x80335400: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335404: nop

    // 0x80335408: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033540C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335410: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335414: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335418: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033541C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335420: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335424: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80335428: jal         0x8001C0EC
    // 0x8033542C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033542C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335430: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335434: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335438: jal         0x8001BBDC
    // 0x8033543C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033543C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80335440:
    // 0x80335440: jal         0x80334D5C
    // 0x80335444: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80335444: nop

    after_2:
    // 0x80335448: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033544C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335450: jal         0x8001B4AC
    // 0x80335454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80335454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80335458: beq         $v0, $zero, L_80335478
    if (ctx->r2 == 0) {
        // 0x8033545C: nop
    
            goto L_80335478;
    }
    // 0x8033545C: nop

    // 0x80335460: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335464: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80335468: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033546C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335470: nop

    // 0x80335474: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80335478:
    // 0x80335478: b           L_80335480
    // 0x8033547C: nop

        goto L_80335480;
    // 0x8033547C: nop

L_80335480:
    // 0x80335480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335484: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335488: jr          $ra
    // 0x8033548C: nop

    return;
    // 0x8033548C: nop

;}
RECOMP_FUNC void func_80337628_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337628: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033762C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337630: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337634: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337638: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033763C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337640: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337644: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337648: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033764C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337650: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337654: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337658: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033765C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337660: nop

    // 0x80337664: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337668: nop

    // 0x8033766C: bne         $t1, $zero, L_803376D4
    if (ctx->r9 != 0) {
        // 0x80337670: nop
    
            goto L_803376D4;
    }
    // 0x80337670: nop

    // 0x80337674: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337678: nop

    // 0x8033767C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337680: nop

    // 0x80337684: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337688: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033768C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337690: nop

    // 0x80337694: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337698: nop

    // 0x8033769C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803376A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803376A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803376A8: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803376AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803376B0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803376B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803376B8: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x803376BC: jal         0x8001C0EC
    // 0x803376C0: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803376C0: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803376C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803376C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803376CC: jal         0x8001BBDC
    // 0x803376D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803376D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803376D4:
    // 0x803376D4: jal         0x80334D5C
    // 0x803376D8: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803376D8: nop

    after_2:
    // 0x803376DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803376E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803376E4: jal         0x8001B4AC
    // 0x803376E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803376E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803376EC: beq         $v0, $zero, L_8033770C
    if (ctx->r2 == 0) {
        // 0x803376F0: nop
    
            goto L_8033770C;
    }
    // 0x803376F0: nop

    // 0x803376F4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803376F8: addiu       $t8, $zero, 0x27
    ctx->r24 = ADD32(0, 0X27);
    // 0x803376FC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80337700: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337704: nop

    // 0x80337708: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033770C:
    // 0x8033770C: b           L_80337714
    // 0x80337710: nop

        goto L_80337714;
    // 0x80337710: nop

L_80337714:
    // 0x80337714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337718: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033771C: jr          $ra
    // 0x80337720: nop

    return;
    // 0x80337720: nop

;}
RECOMP_FUNC void func_80338118_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338118: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033811C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338120: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338124: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338128: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033812C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338130: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338134: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338138: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033813C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338140: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338144: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338148: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033814C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338150: nop

    // 0x80338154: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338158: nop

    // 0x8033815C: bne         $t1, $zero, L_803381D0
    if (ctx->r9 != 0) {
        // 0x80338160: nop
    
            goto L_803381D0;
    }
    // 0x80338160: nop

    // 0x80338164: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338168: nop

    // 0x8033816C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338170: nop

    // 0x80338174: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338178: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033817C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338180: nop

    // 0x80338184: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338188: nop

    // 0x8033818C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338190: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338194: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338198: addiu       $t7, $t7, -0x4288
    ctx->r15 = ADD32(ctx->r15, -0X4288);
    // 0x8033819C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803381A0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803381A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803381A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803381AC: jal         0x8001C0EC
    // 0x803381B0: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803381B0: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    after_0:
    // 0x803381B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803381B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803381BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803381C0: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x803381C4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803381C8: jal         0x800175F0
    // 0x803381CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803381CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_803381D0:
    // 0x803381D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803381D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803381D8: jal         0x8001B4AC
    // 0x803381DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803381DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803381E0: beq         $v0, $zero, L_80338200
    if (ctx->r2 == 0) {
        // 0x803381E4: nop
    
            goto L_80338200;
    }
    // 0x803381E4: nop

    // 0x803381E8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803381EC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x803381F0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803381F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803381F8: nop

    // 0x803381FC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80338200:
    // 0x80338200: b           L_80338208
    // 0x80338204: nop

        goto L_80338208;
    // 0x80338204: nop

L_80338208:
    // 0x80338208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033820C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338210: jr          $ra
    // 0x80338214: nop

    return;
    // 0x80338214: nop

;}
RECOMP_FUNC void func_8033079C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033079C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803307A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803307A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803307A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803307AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803307B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803307B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803307C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803307C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803307C8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803307CC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803307D0: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
L_803307D4:
    // 0x803307D4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803307D8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803307DC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803307E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803307E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803307E8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803307EC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803307F0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803307F4: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x803307F8: nop

    // 0x803307FC: beq         $t3, $zero, L_8033093C
    if (ctx->r11 == 0) {
        // 0x80330800: nop
    
            goto L_8033093C;
    }
    // 0x80330800: nop

    // 0x80330804: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80330808: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033080C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330810: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330814: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330818: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033081C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330820: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x80330824: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330828: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x8033082C: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330830: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330834: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330838: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033083C: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80330840: nop

    // 0x80330844: bc1f        L_80330854
    if (!c1cs) {
        // 0x80330848: nop
    
            goto L_80330854;
    }
    // 0x80330848: nop

    // 0x8033084C: b           L_80330964
    // 0x80330850: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80330964;
    // 0x80330850: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80330854:
    // 0x80330854: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80330858: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8033085C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330860: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330864: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330868: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033086C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330870: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330874: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330878: lwc1        $f16, 0x4150($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8033087C: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80330880: nop

    // 0x80330884: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80330888: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033088C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80330890: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80330894: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330898: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033089C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803308A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803308A4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803308A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308AC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803308B0: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x803308B4: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x803308B8: nop

    // 0x803308BC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803308C0: swc1        $f10, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f10.u32l;
    // 0x803308C4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x803308C8: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x803308CC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803308D0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803308D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803308D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803308DC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803308E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308E4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803308E8: lwc1        $f16, 0x4158($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x803308EC: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803308F0: nop

    // 0x803308F4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803308F8: swc1        $f4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f4.u32l;
    // 0x803308FC: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80330900: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80330904: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x80330908: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8033090C: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80330910: nop

    // 0x80330914: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80330918: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8033091C: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80330920: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80330924: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80330928: nop

    // 0x8033092C: bc1f        L_8033093C
    if (!c1cs) {
        // 0x80330930: nop
    
            goto L_8033093C;
    }
    // 0x80330930: nop

    // 0x80330934: b           L_80330964
    // 0x80330938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80330964;
    // 0x80330938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8033093C:
    // 0x8033093C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80330940: nop

    // 0x80330944: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80330948: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x8033094C: bne         $at, $zero, L_803307D4
    if (ctx->r1 != 0) {
        // 0x80330950: sw          $t7, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r15;
            goto L_803307D4;
    }
    // 0x80330950: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80330954: b           L_80330964
    // 0x80330958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80330964;
    // 0x80330958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8033095C: b           L_80330964
    // 0x80330960: nop

        goto L_80330964;
    // 0x80330960: nop

L_80330964:
    // 0x80330964: jr          $ra
    // 0x80330968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80330968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80339820_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80339824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80339828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033982C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339830: jal         0x8002B0E4
    // 0x80339834: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80339834: nop

    after_0:
    // 0x80339838: b           L_80339840
    // 0x8033983C: nop

        goto L_80339840;
    // 0x8033983C: nop

L_80339840:
    // 0x80339840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80339848: jr          $ra
    // 0x8033984C: nop

    return;
    // 0x8033984C: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330008: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033000C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330010: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330014: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330018: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033001C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330024: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330028: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033002C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330030: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330034: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330038: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033003C: jal         0x8001B62C
    // 0x80330040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80330040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80330044: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80330048: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033004C: nop

    // 0x80330050: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80330054: nop

    // 0x80330058: bc1f        L_80330198
    if (!c1cs) {
        // 0x8033005C: nop
    
            goto L_80330198;
    }
    // 0x8033005C: nop

    // 0x80330060: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330064: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330068: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033006C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80330070: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x80330074: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330078: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033007C: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x80330080: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330084: jal         0x80027464
    // 0x80330088: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80330088: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8033008C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80330090: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330094: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80330098: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033009C: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803300A0: jal         0x80015538
    // 0x803300A4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x803300A4: nop

    after_2:
    // 0x803300A8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803300AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803300B0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803300B4: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803300B8: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x803300BC: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x803300C0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803300C4: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x803300C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803300CC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803300D0: jal         0x80027464
    // 0x803300D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x803300D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x803300D8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x803300DC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803300E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803300E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803300E8: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803300EC: jal         0x80015538
    // 0x803300F0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803300F0: nop

    after_4:
    // 0x803300F4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803300F8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803300FC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330100: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80330104: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x80330108: lw          $a3, 0x4($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X4);
    // 0x8033010C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330110: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x80330114: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330118: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8033011C: jal         0x80027464
    // 0x80330120: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80330120: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80330124: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80330128: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033012C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330130: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330134: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80330138: jal         0x80015538
    // 0x8033013C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x8033013C: nop

    after_6:
    // 0x80330140: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80330144: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330148: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033014C: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80330150: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80330154: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80330158: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033015C: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x80330160: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330164: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80330168: jal         0x80027464
    // 0x8033016C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x8033016C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x80330170: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80330174: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033017C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330180: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80330184: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330188: jal         0x800175F0
    // 0x8033018C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_8;
    // 0x8033018C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x80330190: b           L_8033041C
    // 0x80330194: nop

        goto L_8033041C;
    // 0x80330194: nop

L_80330198:
    // 0x80330198: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033019C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803301A0: jal         0x8001B62C
    // 0x803301A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_9;
    // 0x803301A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x803301A8: lui         $at, 0x4258
    ctx->r1 = S32(0X4258 << 16);
    // 0x803301AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803301B0: nop

    // 0x803301B4: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x803301B8: nop

    // 0x803301BC: bc1f        L_803302DC
    if (!c1cs) {
        // 0x803301C0: nop
    
            goto L_803302DC;
    }
    // 0x803301C0: nop

    // 0x803301C4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803301C8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803301CC: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x803301D0: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x803301D4: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x803301D8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803301DC: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803301E0: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x803301E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803301E8: jal         0x80027464
    // 0x803301EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x803301EC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x803301F0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x803301F4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803301F8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803301FC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330200: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80330204: jal         0x80015538
    // 0x80330208: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80330208: nop

    after_11:
    // 0x8033020C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80330210: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330214: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330218: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033021C: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x80330220: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x80330224: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330228: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x8033022C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330230: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80330234: jal         0x80027464
    // 0x80330238: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_12;
    // 0x80330238: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x8033023C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80330240: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330244: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330248: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033024C: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80330250: jal         0x80015538
    // 0x80330254: nop

    Math_WrapAngle(rdram, ctx);
        goto after_13;
    // 0x80330254: nop

    after_13:
    // 0x80330258: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8033025C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330260: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330264: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330268: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x8033026C: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x80330270: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330274: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x80330278: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033027C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80330280: jal         0x80027464
    // 0x80330284: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_14;
    // 0x80330284: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x80330288: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8033028C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330290: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330294: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330298: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8033029C: jal         0x80015538
    // 0x803302A0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_15;
    // 0x803302A0: nop

    after_15:
    // 0x803302A4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803302A8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803302AC: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803302B0: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803302B4: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x803302B8: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x803302BC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803302C0: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x803302C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803302C8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x803302CC: jal         0x80027464
    // 0x803302D0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_16;
    // 0x803302D0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_16:
    // 0x803302D4: b           L_8033041C
    // 0x803302D8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
        goto L_8033041C;
    // 0x803302D8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_803302DC:
    // 0x803302DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803302E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803302E4: jal         0x8001B62C
    // 0x803302E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_17;
    // 0x803302E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x803302EC: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
    // 0x803302F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803302F4: nop

    // 0x803302F8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x803302FC: nop

    // 0x80330300: bc1f        L_8033041C
    if (!c1cs) {
        // 0x80330304: nop
    
            goto L_8033041C;
    }
    // 0x80330304: nop

    // 0x80330308: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033030C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330310: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80330314: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x80330318: lw          $a3, 0x4($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X4);
    // 0x8033031C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330320: lwc1        $f8, 0x1C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80330324: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x80330328: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033032C: jal         0x80027464
    // 0x80330330: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_18;
    // 0x80330330: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_18:
    // 0x80330334: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80330338: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033033C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80330340: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330344: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80330348: jal         0x80015538
    // 0x8033034C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_19;
    // 0x8033034C: nop

    after_19:
    // 0x80330350: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80330354: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330358: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033035C: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80330360: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80330364: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80330368: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033036C: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x80330370: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330374: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80330378: jal         0x80027464
    // 0x8033037C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_20;
    // 0x8033037C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_20:
    // 0x80330380: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80330384: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330388: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033038C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330390: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80330394: jal         0x80015538
    // 0x80330398: nop

    Math_WrapAngle(rdram, ctx);
        goto after_21;
    // 0x80330398: nop

    after_21:
    // 0x8033039C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803303A0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803303A4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803303A8: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803303AC: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x803303B0: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x803303B4: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803303B8: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x803303BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803303C0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x803303C4: jal         0x80027464
    // 0x803303C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_22;
    // 0x803303C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_22:
    // 0x803303CC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x803303D0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803303D4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803303D8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803303DC: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803303E0: jal         0x80015538
    // 0x803303E4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_23;
    // 0x803303E4: nop

    after_23:
    // 0x803303E8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803303EC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803303F0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803303F4: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803303F8: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x803303FC: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x80330400: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330404: addiu       $a1, $a1, -0x5544
    ctx->r5 = ADD32(ctx->r5, -0X5544);
    // 0x80330408: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033040C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80330410: jal         0x80027464
    // 0x80330414: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_24;
    // 0x80330414: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_24:
    // 0x80330418: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_8033041C:
    // 0x8033041C: b           L_80330424
    // 0x80330420: nop

        goto L_80330424;
    // 0x80330420: nop

L_80330424:
    // 0x80330424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330428: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033042C: jr          $ra
    // 0x80330430: nop

    return;
    // 0x80330430: nop

;}
RECOMP_FUNC void func_80339254_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339254: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80339258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033925C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339260: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339264: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339268: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033926C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339270: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339274: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339278: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033927C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339280: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339284: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80339288: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033928C: nop

    // 0x80339290: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80339294: nop

    // 0x80339298: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8033929C: sltiu       $at, $t2, 0xA
    ctx->r1 = ctx->r10 < 0XA ? 1 : 0;
    // 0x803392A0: beq         $at, $zero, L_80339364
    if (ctx->r1 == 0) {
        // 0x803392A4: nop
    
            goto L_80339364;
    }
    // 0x803392A4: nop

    // 0x803392A8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803392AC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803392B0: addu        $at, $at, $t2
    gpr jr_addend_803392BC = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803392B4: lw          $t2, -0x515C($at)
    ctx->r10 = ADD32(ctx->r1, -0X515C);
    // 0x803392B8: nop

    // 0x803392BC: jr          $t2
    // 0x803392C0: nop

    switch (jr_addend_803392BC >> 2) {
        case 0: goto L_803392C4; break;
        case 1: goto L_803392D4; break;
        case 2: goto L_803392E4; break;
        case 3: goto L_803392F4; break;
        case 4: goto L_80339304; break;
        case 5: goto L_80339314; break;
        case 6: goto L_80339324; break;
        case 7: goto L_80339334; break;
        case 8: goto L_80339344; break;
        case 9: goto L_80339354; break;
        default: switch_error(__func__, 0x803392BC, 0x8033AEA4);
    }
    // 0x803392C0: nop

L_803392C4:
    // 0x803392C4: jal         0x8033880C
    // 0x803392C8: nop

    func_8033880C_unk_bin_25(rdram, ctx);
        goto after_0;
    // 0x803392C8: nop

    after_0:
    // 0x803392CC: b           L_8033936C
    // 0x803392D0: nop

        goto L_8033936C;
    // 0x803392D0: nop

L_803392D4:
    // 0x803392D4: jal         0x80338914
    // 0x803392D8: nop

    func_80338914_unk_bin_25(rdram, ctx);
        goto after_1;
    // 0x803392D8: nop

    after_1:
    // 0x803392DC: b           L_8033936C
    // 0x803392E0: nop

        goto L_8033936C;
    // 0x803392E0: nop

L_803392E4:
    // 0x803392E4: jal         0x80338A1C
    // 0x803392E8: nop

    func_80338A1C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803392E8: nop

    after_2:
    // 0x803392EC: b           L_8033936C
    // 0x803392F0: nop

        goto L_8033936C;
    // 0x803392F0: nop

L_803392F4:
    // 0x803392F4: jal         0x80338B24
    // 0x803392F8: nop

    func_80338B24_unk_bin_25(rdram, ctx);
        goto after_3;
    // 0x803392F8: nop

    after_3:
    // 0x803392FC: b           L_8033936C
    // 0x80339300: nop

        goto L_8033936C;
    // 0x80339300: nop

L_80339304:
    // 0x80339304: jal         0x80338C2C
    // 0x80339308: nop

    func_80338C2C_unk_bin_25(rdram, ctx);
        goto after_4;
    // 0x80339308: nop

    after_4:
    // 0x8033930C: b           L_8033936C
    // 0x80339310: nop

        goto L_8033936C;
    // 0x80339310: nop

L_80339314:
    // 0x80339314: jal         0x80338D34
    // 0x80339318: nop

    func_80338D34_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80339318: nop

    after_5:
    // 0x8033931C: b           L_8033936C
    // 0x80339320: nop

        goto L_8033936C;
    // 0x80339320: nop

L_80339324:
    // 0x80339324: jal         0x80338E3C
    // 0x80339328: nop

    func_80338E3C_unk_bin_25(rdram, ctx);
        goto after_6;
    // 0x80339328: nop

    after_6:
    // 0x8033932C: b           L_8033936C
    // 0x80339330: nop

        goto L_8033936C;
    // 0x80339330: nop

L_80339334:
    // 0x80339334: jal         0x80338F44
    // 0x80339338: nop

    func_80338F44_unk_bin_25(rdram, ctx);
        goto after_7;
    // 0x80339338: nop

    after_7:
    // 0x8033933C: b           L_8033936C
    // 0x80339340: nop

        goto L_8033936C;
    // 0x80339340: nop

L_80339344:
    // 0x80339344: jal         0x8033904C
    // 0x80339348: nop

    func_8033904C_unk_bin_25(rdram, ctx);
        goto after_8;
    // 0x80339348: nop

    after_8:
    // 0x8033934C: b           L_8033936C
    // 0x80339350: nop

        goto L_8033936C;
    // 0x80339350: nop

L_80339354:
    // 0x80339354: jal         0x80339154
    // 0x80339358: nop

    func_80339154_unk_bin_25(rdram, ctx);
        goto after_9;
    // 0x80339358: nop

    after_9:
    // 0x8033935C: b           L_8033936C
    // 0x80339360: nop

        goto L_8033936C;
    // 0x80339360: nop

L_80339364:
    // 0x80339364: b           L_8033936C
    // 0x80339368: nop

        goto L_8033936C;
    // 0x80339368: nop

L_8033936C:
    // 0x8033936C: b           L_80339374
    // 0x80339370: nop

        goto L_80339374;
    // 0x80339370: nop

L_80339374:
    // 0x80339374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339378: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033937C: jr          $ra
    // 0x80339380: nop

    return;
    // 0x80339380: nop

;}
RECOMP_FUNC void func_803393B4_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803393B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803393B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803393BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803393C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803393C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803393C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803393CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803393D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803393D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803393D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803393DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803393E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803393E4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803393E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803393EC: nop

    // 0x803393F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803393F4: nop

    // 0x803393F8: bne         $t1, $zero, L_803394B4
    if (ctx->r9 != 0) {
        // 0x803393FC: nop
    
            goto L_803394B4;
    }
    // 0x803393FC: nop

    // 0x80339400: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80339404: nop

    // 0x80339408: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033940C: nop

    // 0x80339410: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339414: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339418: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033941C: nop

    // 0x80339420: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339424: nop

    // 0x80339428: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033942C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80339430: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339434: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80339438: nop

    // 0x8033943C: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80339440: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80339444: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339448: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033944C: nop

    // 0x80339450: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339454: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339458: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033945C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339460: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339464: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80339468: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033946C: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x80339470: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80339474: jal         0x80015538
    // 0x80339478: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80339478: nop

    after_0:
    // 0x8033947C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80339480: nop

    // 0x80339484: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x80339488: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8033948C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80339490: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80339494: nop

    // 0x80339498: swc1        $f6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f6.u32l;
    // 0x8033949C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803394A0: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x803394A4: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x803394A8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803394AC: nop

    // 0x803394B0: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
L_803394B4:
    // 0x803394B4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803394B8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x803394BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803394C0: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803394C4: jal         0x80015538
    // 0x803394C8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803394C8: nop

    after_1:
    // 0x803394CC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803394D0: nop

    // 0x803394D4: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x803394D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803394DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803394E0: jal         0x80029D8C
    // 0x803394E4: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x803394E4: nop

    after_2:
    // 0x803394E8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803394EC: nop

    // 0x803394F0: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x803394F4: nop

    // 0x803394F8: bne         $t9, $zero, L_80339518
    if (ctx->r25 != 0) {
        // 0x803394FC: nop
    
            goto L_80339518;
    }
    // 0x803394FC: nop

    // 0x80339500: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80339504: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80339508: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033950C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80339510: b           L_80339530
    // 0x80339514: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_80339530;
    // 0x80339514: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80339518:
    // 0x80339518: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033951C: nop

    // 0x80339520: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80339524: nop

    // 0x80339528: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8033952C: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_80339530:
    // 0x80339530: b           L_80339538
    // 0x80339534: nop

        goto L_80339538;
    // 0x80339534: nop

L_80339538:
    // 0x80339538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033953C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80339540: jr          $ra
    // 0x80339544: nop

    return;
    // 0x80339544: nop

;}
RECOMP_FUNC void func_80331CB0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331CB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331CB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331CB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331CBC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331CC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331CC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331CC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331CCC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331CD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331CD4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331CD8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331CDC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331CE0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331CE4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331CE8: nop

    // 0x80331CEC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331CF0: nop

    // 0x80331CF4: bne         $t1, $zero, L_80331DA4
    if (ctx->r9 != 0) {
        // 0x80331CF8: nop
    
            goto L_80331DA4;
    }
    // 0x80331CF8: nop

    // 0x80331CFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331D00: nop

    // 0x80331D04: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331D08: nop

    // 0x80331D0C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331D10: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331D14: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331D18: nop

    // 0x80331D1C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331D20: nop

    // 0x80331D24: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331D28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D2C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331D30: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80331D34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D38: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331D40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80331D44: jal         0x8001C0EC
    // 0x80331D48: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331D48: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80331D4C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331D50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D54: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80331D58: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80331D5C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331D60: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331D64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331D68: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331D6C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331D70: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331D74: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80331D78: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331D7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D80: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80331D84: nop

    // 0x80331D88: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80331D8C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331D90: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331D94: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331D98: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331D9C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331DA0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331DA4:
    // 0x80331DA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DAC: jal         0x8002A8B4
    // 0x80331DB0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331DB0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x80331DB4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331DB8: nop

    // 0x80331DBC: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80331DC0: nop

    // 0x80331DC4: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80331DC8: jal         0x8033065C
    // 0x80331DCC: nop

    func_8033065C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80331DCC: nop

    after_2:
    // 0x80331DD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331DD4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331DD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331DDC: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80331DE0: nop

    // 0x80331DE4: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80331DE8: nop

    // 0x80331DEC: bc1f        L_80331E18
    if (!c1cs) {
        // 0x80331DF0: nop
    
            goto L_80331E18;
    }
    // 0x80331DF0: nop

    // 0x80331DF4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331DF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331DFC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331E00: nop

    // 0x80331E04: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x80331E08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331E0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331E10: b           L_80331E2C
    // 0x80331E14: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
        goto L_80331E2C;
    // 0x80331E14: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
L_80331E18:
    // 0x80331E18: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331E1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331E20: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331E24: nop

    // 0x80331E28: swc1        $f18, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f18.u32l;
L_80331E2C:
    // 0x80331E2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E34: jal         0x8001B62C
    // 0x80331E38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80331E38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331E3C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80331E40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331E44: nop

    // 0x80331E48: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80331E4C: nop

    // 0x80331E50: bc1f        L_80331E74
    if (!c1cs) {
        // 0x80331E54: nop
    
            goto L_80331E74;
    }
    // 0x80331E54: nop

    // 0x80331E58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E64: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80331E68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331E6C: jal         0x800175F0
    // 0x80331E70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x80331E70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_80331E74:
    // 0x80331E74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E7C: jal         0x8001B4AC
    // 0x80331E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80331E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80331E84: beq         $v0, $zero, L_80331EA8
    if (ctx->r2 == 0) {
        // 0x80331E88: nop
    
            goto L_80331EA8;
    }
    // 0x80331E88: nop

    // 0x80331E8C: jal         0x80330434
    // 0x80331E90: nop

    func_80330434_unk_bin_25(rdram, ctx);
        goto after_6;
    // 0x80331E90: nop

    after_6:
    // 0x80331E94: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80331E98: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80331E9C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331EA0: jal         0x80330B3C
    // 0x80331EA4: nop

    func_80330B3C_unk_bin_25(rdram, ctx);
        goto after_7;
    // 0x80331EA4: nop

    after_7:
L_80331EA8:
    // 0x80331EA8: b           L_80331EB0
    // 0x80331EAC: nop

        goto L_80331EB0;
    // 0x80331EAC: nop

L_80331EB0:
    // 0x80331EB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331EB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331EB8: jr          $ra
    // 0x80331EBC: nop

    return;
    // 0x80331EBC: nop

;}
RECOMP_FUNC void func_80335140_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335148: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033514C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335150: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335154: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335158: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033515C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335160: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335164: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335168: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033516C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335170: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335174: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335178: nop

    // 0x8033517C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335180: nop

    // 0x80335184: bne         $t1, $zero, L_803351EC
    if (ctx->r9 != 0) {
        // 0x80335188: nop
    
            goto L_803351EC;
    }
    // 0x80335188: nop

    // 0x8033518C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335190: nop

    // 0x80335194: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335198: nop

    // 0x8033519C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803351A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803351A4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803351A8: nop

    // 0x803351AC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803351B0: nop

    // 0x803351B4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803351B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351BC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803351C0: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803351C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803351CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803351D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803351D4: jal         0x8001C0EC
    // 0x803351D8: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803351D8: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803351DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351E4: jal         0x8001BBDC
    // 0x803351E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803351E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803351EC:
    // 0x803351EC: jal         0x80334D5C
    // 0x803351F0: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803351F0: nop

    after_2:
    // 0x803351F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351FC: jal         0x8001B4AC
    // 0x80335200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80335200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80335204: beq         $v0, $zero, L_80335224
    if (ctx->r2 == 0) {
        // 0x80335208: nop
    
            goto L_80335224;
    }
    // 0x80335208: nop

    // 0x8033520C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335210: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80335214: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335218: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033521C: nop

    // 0x80335220: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80335224:
    // 0x80335224: b           L_8033522C
    // 0x80335228: nop

        goto L_8033522C;
    // 0x80335228: nop

L_8033522C:
    // 0x8033522C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335230: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335234: jr          $ra
    // 0x80335238: nop

    return;
    // 0x80335238: nop

;}
RECOMP_FUNC void func_8033523C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033523C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335240: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335244: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335248: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033524C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335250: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335254: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335258: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033525C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335260: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335264: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335268: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033526C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335270: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335274: nop

    // 0x80335278: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033527C: nop

    // 0x80335280: bne         $t1, $zero, L_80335344
    if (ctx->r9 != 0) {
        // 0x80335284: nop
    
            goto L_80335344;
    }
    // 0x80335284: nop

    // 0x80335288: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033528C: nop

    // 0x80335290: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335294: nop

    // 0x80335298: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033529C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803352A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803352A4: nop

    // 0x803352A8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803352AC: nop

    // 0x803352B0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803352B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352B8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803352BC: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803352C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352C4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803352C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803352CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803352D0: jal         0x8001C0EC
    // 0x803352D4: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803352D4: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803352D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352E0: jal         0x8001BBDC
    // 0x803352E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803352E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803352E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352F0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803352F4: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x803352F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803352FC: jal         0x8001ABF4
    // 0x80335300: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80335300: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80335304: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335308: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033530C: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80335310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335314: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80335318: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033531C: jal         0x8001ABF4
    // 0x80335320: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80335320: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80335324: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335328: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033532C: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80335330: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335334: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80335338: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033533C: jal         0x8001ABF4
    // 0x80335340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80335340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80335344:
    // 0x80335344: jal         0x80334D5C
    // 0x80335348: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80335348: nop

    after_5:
    // 0x8033534C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335350: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335354: jal         0x8001B4AC
    // 0x80335358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80335358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033535C: beq         $v0, $zero, L_8033537C
    if (ctx->r2 == 0) {
        // 0x80335360: nop
    
            goto L_8033537C;
    }
    // 0x80335360: nop

    // 0x80335364: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335368: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8033536C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335370: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335374: nop

    // 0x80335378: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033537C:
    // 0x8033537C: b           L_80335384
    // 0x80335380: nop

        goto L_80335384;
    // 0x80335380: nop

L_80335384:
    // 0x80335384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033538C: jr          $ra
    // 0x80335390: nop

    return;
    // 0x80335390: nop

;}
RECOMP_FUNC void func_80330434_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330434: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033043C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330440: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330444: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330448: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033044C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330450: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330454: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330458: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033045C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330460: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330464: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330468: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033046C: nop

    // 0x80330470: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80330474: nop

    // 0x80330478: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
    // 0x8033047C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330480: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80330484: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330488: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8033048C: nop

    // 0x80330490: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80330494: nop

    // 0x80330498: bc1f        L_8033062C
    if (!c1cs) {
        // 0x8033049C: nop
    
            goto L_8033062C;
    }
    // 0x8033049C: nop

    // 0x803304A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803304A4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803304A8: nop

    // 0x803304AC: swc1        $f10, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f10.u32l;
    // 0x803304B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803304B4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803304B8: nop

    // 0x803304BC: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x803304C0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803304C4: nop

    // 0x803304C8: lwc1        $f18, 0x2C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x803304CC: nop

    // 0x803304D0: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
    // 0x803304D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803304D8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803304DC: nop

    // 0x803304E0: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x803304E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304EC: jal         0x8002A1FC
    // 0x803304F0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_0;
    // 0x803304F0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_0:
    // 0x803304F4: beq         $v0, $zero, L_80330514
    if (ctx->r2 == 0) {
        // 0x803304F8: nop
    
            goto L_80330514;
    }
    // 0x803304F8: nop

    // 0x803304FC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330500: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80330504: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80330508: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033050C: b           L_80330624
    // 0x80330510: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_80330624;
    // 0x80330510: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80330514:
    // 0x80330514: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330518: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x8033051C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330520: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80330524: nop

    // 0x80330528: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8033052C: nop

    // 0x80330530: bc1t        L_80330590
    if (c1cs) {
        // 0x80330534: nop
    
            goto L_80330590;
    }
    // 0x80330534: nop

    // 0x80330538: lui         $at, 0xC407
    ctx->r1 = S32(0XC407 << 16);
    // 0x8033053C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330540: nop

    // 0x80330544: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80330548: nop

    // 0x8033054C: bc1t        L_80330590
    if (c1cs) {
        // 0x80330550: nop
    
            goto L_80330590;
    }
    // 0x80330550: nop

    // 0x80330554: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80330558: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033055C: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80330560: nop

    // 0x80330564: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80330568: nop

    // 0x8033056C: bc1t        L_80330590
    if (c1cs) {
        // 0x80330570: nop
    
            goto L_80330590;
    }
    // 0x80330570: nop

    // 0x80330574: lui         $at, 0xC407
    ctx->r1 = S32(0XC407 << 16);
    // 0x80330578: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033057C: nop

    // 0x80330580: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80330584: nop

    // 0x80330588: bc1f        L_803305A8
    if (!c1cs) {
        // 0x8033058C: nop
    
            goto L_803305A8;
    }
    // 0x8033058C: nop

L_80330590:
    // 0x80330590: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330594: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80330598: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033059C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803305A0: b           L_80330624
    // 0x803305A4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_80330624;
    // 0x803305A4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803305A8:
    // 0x803305A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803305B0: jal         0x8002A1FC
    // 0x803305B4: lui         $a1, 0x4443
    ctx->r5 = S32(0X4443 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x803305B4: lui         $a1, 0x4443
    ctx->r5 = S32(0X4443 << 16);
    after_1:
    // 0x803305B8: beq         $v0, $zero, L_803305D8
    if (ctx->r2 == 0) {
        // 0x803305BC: nop
    
            goto L_803305D8;
    }
    // 0x803305BC: nop

    // 0x803305C0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803305C4: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x803305C8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803305CC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803305D0: b           L_80330624
    // 0x803305D4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80330624;
    // 0x803305D4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803305D8:
    // 0x803305D8: jal         0x80014E80
    // 0x803305DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x803305DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x803305E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x803305E4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803305E8: nop

    // 0x803305EC: bne         $t6, $zero, L_8033060C
    if (ctx->r14 != 0) {
        // 0x803305F0: nop
    
            goto L_8033060C;
    }
    // 0x803305F0: nop

    // 0x803305F4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803305F8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x803305FC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80330600: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330604: b           L_80330624
    // 0x80330608: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_80330624;
    // 0x80330608: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_8033060C:
    // 0x8033060C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330610: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80330614: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80330618: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033061C: nop

    // 0x80330620: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80330624:
    // 0x80330624: b           L_80330644
    // 0x80330628: nop

        goto L_80330644;
    // 0x80330628: nop

L_8033062C:
    // 0x8033062C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330630: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80330634: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80330638: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033063C: nop

    // 0x80330640: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80330644:
    // 0x80330644: b           L_8033064C
    // 0x80330648: nop

        goto L_8033064C;
    // 0x80330648: nop

L_8033064C:
    // 0x8033064C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330654: jr          $ra
    // 0x80330658: nop

    return;
    // 0x80330658: nop

;}
RECOMP_FUNC void func_80334D5C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334D5C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80334D60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334D64: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334D68: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334D6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334D70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334D74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334D78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334D7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334D80: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334D84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334D88: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80334D8C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80334D90: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80334D94: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80334D98: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80334D9C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80334DA0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334DA4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334DA8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334DAC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334DB0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80334DB4: lwc1        $f4, 0x24($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X24);
    // 0x80334DB8: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80334DBC: nop

    // 0x80334DC0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334DC4: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x80334DC8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80334DCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334DD0: lh          $t6, 0xC2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC2);
    // 0x80334DD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334DD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334DDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334DE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334DE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334DE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334DEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334DF0: lwc1        $f10, 0x28($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80334DF4: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80334DF8: nop

    // 0x80334DFC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80334E00: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
    // 0x80334E04: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80334E08: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80334E0C: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x80334E10: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80334E14: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334E18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334E1C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334E20: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334E24: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334E28: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x80334E2C: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80334E30: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80334E34: nop

    // 0x80334E38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334E3C: swc1        $f8, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f8.u32l;
    // 0x80334E40: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80334E44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334E48: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x80334E4C: nop

    // 0x80334E50: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80334E54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334E58: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334E5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334E60: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334E64: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334E68: lwc1        $f10, 0x4168($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80334E6C: nop

    // 0x80334E70: swc1        $f10, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f10.u32l;
    // 0x80334E74: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80334E78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334E7C: lh          $t5, 0xC2($t9)
    ctx->r13 = MEM_H(ctx->r25, 0XC2);
    // 0x80334E80: nop

    // 0x80334E84: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x80334E88: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80334E8C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334E90: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80334E94: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334E98: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334E9C: lwc1        $f16, 0x416C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80334EA0: nop

    // 0x80334EA4: swc1        $f16, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f16.u32l;
    // 0x80334EA8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80334EAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334EB0: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80334EB4: nop

    // 0x80334EB8: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x80334EBC: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80334EC0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334EC4: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80334EC8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334ECC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80334ED0: lwc1        $f18, 0x4170($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x80334ED4: nop

    // 0x80334ED8: swc1        $f18, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f18.u32l;
    // 0x80334EDC: b           L_80334EE4
    // 0x80334EE0: nop

        goto L_80334EE4;
    // 0x80334EE0: nop

L_80334EE4:
    // 0x80334EE4: jr          $ra
    // 0x80334EE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80334EE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033558C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033558C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335590: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335594: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335598: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033559C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803355A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803355A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803355A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803355AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803355B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803355B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803355B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803355BC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803355C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803355C4: nop

    // 0x803355C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803355CC: nop

    // 0x803355D0: bne         $t1, $zero, L_80335694
    if (ctx->r9 != 0) {
        // 0x803355D4: nop
    
            goto L_80335694;
    }
    // 0x803355D4: nop

    // 0x803355D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803355DC: nop

    // 0x803355E0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803355E4: nop

    // 0x803355E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803355EC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803355F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803355F4: nop

    // 0x803355F8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803355FC: nop

    // 0x80335600: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335608: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033560C: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335610: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335614: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033561C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80335620: jal         0x8001C0EC
    // 0x80335624: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335624: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033562C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335630: jal         0x8001BBDC
    // 0x80335634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335638: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033563C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335640: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335644: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80335648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033564C: jal         0x8001ABF4
    // 0x80335650: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80335650: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80335654: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335658: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033565C: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80335660: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335664: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80335668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033566C: jal         0x8001ABF4
    // 0x80335670: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80335670: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80335674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335678: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033567C: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80335680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335684: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80335688: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033568C: jal         0x8001ABF4
    // 0x80335690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80335690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80335694:
    // 0x80335694: jal         0x80334D5C
    // 0x80335698: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80335698: nop

    after_5:
    // 0x8033569C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803356A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803356A4: jal         0x8001B4AC
    // 0x803356A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x803356A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x803356AC: beq         $v0, $zero, L_803356CC
    if (ctx->r2 == 0) {
        // 0x803356B0: nop
    
            goto L_803356CC;
    }
    // 0x803356B0: nop

    // 0x803356B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803356B8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x803356BC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803356C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803356C4: nop

    // 0x803356C8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803356CC:
    // 0x803356CC: b           L_803356D4
    // 0x803356D0: nop

        goto L_803356D4;
    // 0x803356D0: nop

L_803356D4:
    // 0x803356D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803356D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803356DC: jr          $ra
    // 0x803356E0: nop

    return;
    // 0x803356E0: nop

;}
RECOMP_FUNC void func_80335BC8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335BC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335BCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335BD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335BD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335BD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335BDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335BE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335BE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335BE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335BEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335BF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335BF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335BF8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335BFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335C00: nop

    // 0x80335C04: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335C08: nop

    // 0x80335C0C: bne         $t1, $zero, L_80335C74
    if (ctx->r9 != 0) {
        // 0x80335C10: nop
    
            goto L_80335C74;
    }
    // 0x80335C10: nop

    // 0x80335C14: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335C18: nop

    // 0x80335C1C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335C20: nop

    // 0x80335C24: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335C28: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335C2C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335C30: nop

    // 0x80335C34: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335C38: nop

    // 0x80335C3C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335C40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335C44: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335C48: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335C4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335C50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335C54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335C58: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80335C5C: jal         0x8001C0EC
    // 0x80335C60: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335C60: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335C64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335C68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335C6C: jal         0x8001BBDC
    // 0x80335C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80335C74:
    // 0x80335C74: jal         0x80334D5C
    // 0x80335C78: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80335C78: nop

    after_2:
    // 0x80335C7C: b           L_80335C84
    // 0x80335C80: nop

        goto L_80335C84;
    // 0x80335C80: nop

L_80335C84:
    // 0x80335C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335C88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335C8C: jr          $ra
    // 0x80335C90: nop

    return;
    // 0x80335C90: nop

;}
RECOMP_FUNC void func_80335044_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335044: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033504C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335050: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335054: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335058: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033505C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335060: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335064: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335068: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033506C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335070: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335074: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335078: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033507C: nop

    // 0x80335080: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335084: nop

    // 0x80335088: bne         $t1, $zero, L_803350F0
    if (ctx->r9 != 0) {
        // 0x8033508C: nop
    
            goto L_803350F0;
    }
    // 0x8033508C: nop

    // 0x80335090: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335094: nop

    // 0x80335098: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033509C: nop

    // 0x803350A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803350A4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803350A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803350AC: nop

    // 0x803350B0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803350B4: nop

    // 0x803350B8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803350BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803350C0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803350C4: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803350C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803350CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803350D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803350D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803350D8: jal         0x8001C0EC
    // 0x803350DC: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803350DC: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803350E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803350E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803350E8: jal         0x8001BBDC
    // 0x803350EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803350EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803350F0:
    // 0x803350F0: jal         0x80334D5C
    // 0x803350F4: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803350F4: nop

    after_2:
    // 0x803350F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803350FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335100: jal         0x8001B4AC
    // 0x80335104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80335104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80335108: beq         $v0, $zero, L_80335128
    if (ctx->r2 == 0) {
        // 0x8033510C: nop
    
            goto L_80335128;
    }
    // 0x8033510C: nop

    // 0x80335110: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335114: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80335118: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033511C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335120: nop

    // 0x80335124: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80335128:
    // 0x80335128: b           L_80335130
    // 0x8033512C: nop

        goto L_80335130;
    // 0x8033512C: nop

L_80335130:
    // 0x80335130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335138: jr          $ra
    // 0x8033513C: nop

    return;
    // 0x8033513C: nop

;}
RECOMP_FUNC void func_8033A1D4_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A1D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A1D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A1DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A1E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A1E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A1E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A1EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A1F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A1F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A1F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A1FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A200: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A204: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A208: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A20C: nop

    // 0x8033A210: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A214: nop

    // 0x8033A218: bne         $t1, $zero, L_8033A270
    if (ctx->r9 != 0) {
        // 0x8033A21C: nop
    
            goto L_8033A270;
    }
    // 0x8033A21C: nop

    // 0x8033A220: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A224: nop

    // 0x8033A228: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A22C: nop

    // 0x8033A230: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A234: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A238: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A23C: nop

    // 0x8033A240: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A244: nop

    // 0x8033A248: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A24C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A250: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A254: addiu       $t7, $t7, -0x3E2C
    ctx->r15 = ADD32(ctx->r15, -0X3E2C);
    // 0x8033A258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A25C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A260: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033A268: jal         0x8001C0EC
    // 0x8033A26C: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A26C: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    after_0:
L_8033A270:
    // 0x8033A270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A278: jal         0x8001B4AC
    // 0x8033A27C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A27C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A280: beq         $v0, $zero, L_8033A2A0
    if (ctx->r2 == 0) {
        // 0x8033A284: nop
    
            goto L_8033A2A0;
    }
    // 0x8033A284: nop

    // 0x8033A288: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033A28C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8033A290: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033A294: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A298: nop

    // 0x8033A29C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033A2A0:
    // 0x8033A2A0: b           L_8033A2A8
    // 0x8033A2A4: nop

        goto L_8033A2A8;
    // 0x8033A2A4: nop

L_8033A2A8:
    // 0x8033A2A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A2AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A2B0: jr          $ra
    // 0x8033A2B4: nop

    return;
    // 0x8033A2B4: nop

;}
RECOMP_FUNC void func_80336B64_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336B64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336B68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336B6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336B70: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336B74: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336B78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336B7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336B80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336B84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336B88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336B8C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336B90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336B94: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336B98: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336B9C: nop

    // 0x80336BA0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336BA4: nop

    // 0x80336BA8: bne         $t1, $zero, L_80336C70
    if (ctx->r9 != 0) {
        // 0x80336BAC: nop
    
            goto L_80336C70;
    }
    // 0x80336BAC: nop

    // 0x80336BB0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336BB4: nop

    // 0x80336BB8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336BBC: nop

    // 0x80336BC0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336BC4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336BC8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336BCC: nop

    // 0x80336BD0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336BD4: nop

    // 0x80336BD8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336BDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336BE0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336BE4: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336BE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336BEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336BF4: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x80336BF8: jal         0x8001C0EC
    // 0x80336BFC: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336BFC: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336C00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C08: jal         0x8001BBDC
    // 0x80336C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80336C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C14: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336C18: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336C1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C20: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80336C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336C28: jal         0x8001ABF4
    // 0x80336C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80336C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80336C30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C34: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336C38: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336C3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C40: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80336C44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80336C48: jal         0x8001ABF4
    // 0x80336C4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80336C4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80336C50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C54: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336C58: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336C5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C60: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80336C64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80336C68: jal         0x8001ABF4
    // 0x80336C6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80336C6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80336C70:
    // 0x80336C70: jal         0x80334D5C
    // 0x80336C74: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80336C74: nop

    after_5:
    // 0x80336C78: b           L_80336C80
    // 0x80336C7C: nop

        goto L_80336C80;
    // 0x80336C7C: nop

L_80336C80:
    // 0x80336C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336C84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336C88: jr          $ra
    // 0x80336C8C: nop

    return;
    // 0x80336C8C: nop

;}
RECOMP_FUNC void func_80338A1C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338A1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338A20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338A24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338A28: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338A2C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338A30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338A34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338A38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338A3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338A40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338A44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338A48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338A4C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338A50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338A54: nop

    // 0x80338A58: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338A5C: nop

    // 0x80338A60: bne         $t1, $zero, L_80338AB8
    if (ctx->r9 != 0) {
        // 0x80338A64: nop
    
            goto L_80338AB8;
    }
    // 0x80338A64: nop

    // 0x80338A68: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338A6C: nop

    // 0x80338A70: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338A74: nop

    // 0x80338A78: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338A7C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338A80: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338A84: nop

    // 0x80338A88: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338A8C: nop

    // 0x80338A90: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338A94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338A98: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338A9C: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x80338AA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338AA4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338AA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338AAC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80338AB0: jal         0x8001C0EC
    // 0x80338AB4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338AB4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_80338AB8:
    // 0x80338AB8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338ABC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338AC0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338AC4: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80338AC8: jal         0x80015538
    // 0x80338ACC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80338ACC: nop

    after_1:
    // 0x80338AD0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338AD4: nop

    // 0x80338AD8: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80338ADC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338AE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338AE4: jal         0x8001B4AC
    // 0x80338AE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80338AE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80338AEC: beq         $v0, $zero, L_80338B0C
    if (ctx->r2 == 0) {
        // 0x80338AF0: nop
    
            goto L_80338B0C;
    }
    // 0x80338AF0: nop

    // 0x80338AF4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338AF8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80338AFC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80338B00: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338B04: nop

    // 0x80338B08: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80338B0C:
    // 0x80338B0C: b           L_80338B14
    // 0x80338B10: nop

        goto L_80338B14;
    // 0x80338B10: nop

L_80338B14:
    // 0x80338B14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338B18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338B1C: jr          $ra
    // 0x80338B20: nop

    return;
    // 0x80338B20: nop

;}
RECOMP_FUNC void func_80339384_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80339388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033938C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339390: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339394: jal         0x8002B0E4
    // 0x80339398: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80339398: nop

    after_0:
    // 0x8033939C: b           L_803393A4
    // 0x803393A0: nop

        goto L_803393A4;
    // 0x803393A0: nop

L_803393A4:
    // 0x803393A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803393A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803393AC: jr          $ra
    // 0x803393B0: nop

    return;
    // 0x803393B0: nop

;}
RECOMP_FUNC void func_80338034_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338034: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033803C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338040: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338044: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338048: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033804C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338050: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338054: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338058: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033805C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338060: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338064: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338068: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033806C: nop

    // 0x80338070: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338074: nop

    // 0x80338078: bne         $t1, $zero, L_803380D0
    if (ctx->r9 != 0) {
        // 0x8033807C: nop
    
            goto L_803380D0;
    }
    // 0x8033807C: nop

    // 0x80338080: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338084: nop

    // 0x80338088: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033808C: nop

    // 0x80338090: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338094: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338098: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033809C: nop

    // 0x803380A0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803380A4: nop

    // 0x803380A8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803380AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803380B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803380B4: addiu       $t7, $t7, -0x4288
    ctx->r15 = ADD32(ctx->r15, -0X4288);
    // 0x803380B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803380BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803380C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803380C4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803380C8: jal         0x8001C0EC
    // 0x803380CC: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803380CC: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    after_0:
L_803380D0:
    // 0x803380D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803380D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803380D8: jal         0x8001B4AC
    // 0x803380DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803380DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803380E0: beq         $v0, $zero, L_80338100
    if (ctx->r2 == 0) {
        // 0x803380E4: nop
    
            goto L_80338100;
    }
    // 0x803380E4: nop

    // 0x803380E8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803380EC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803380F0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803380F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803380F8: nop

    // 0x803380FC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80338100:
    // 0x80338100: b           L_80338108
    // 0x80338104: nop

        goto L_80338108;
    // 0x80338104: nop

L_80338108:
    // 0x80338108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033810C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338110: jr          $ra
    // 0x80338114: nop

    return;
    // 0x80338114: nop

;}
RECOMP_FUNC void func_80336400_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336400: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336404: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336408: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033640C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336410: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336414: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336418: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033641C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336420: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336424: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336428: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033642C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336430: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336434: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336438: nop

    // 0x8033643C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336440: nop

    // 0x80336444: bne         $t1, $zero, L_803364AC
    if (ctx->r9 != 0) {
        // 0x80336448: nop
    
            goto L_803364AC;
    }
    // 0x80336448: nop

    // 0x8033644C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336450: nop

    // 0x80336454: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336458: nop

    // 0x8033645C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336460: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336464: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336468: nop

    // 0x8033646C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336470: nop

    // 0x80336474: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033647C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336480: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336488: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033648C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336490: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80336494: jal         0x8001C0EC
    // 0x80336498: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336498: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x8033649C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803364A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803364A4: jal         0x8001BBDC
    // 0x803364A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803364A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803364AC:
    // 0x803364AC: jal         0x80334D5C
    // 0x803364B0: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803364B0: nop

    after_2:
    // 0x803364B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803364B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803364BC: jal         0x8001B4AC
    // 0x803364C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803364C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803364C4: beq         $v0, $zero, L_803364E4
    if (ctx->r2 == 0) {
        // 0x803364C8: nop
    
            goto L_803364E4;
    }
    // 0x803364C8: nop

    // 0x803364CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803364D0: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x803364D4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803364D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803364DC: nop

    // 0x803364E0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803364E4:
    // 0x803364E4: b           L_803364EC
    // 0x803364E8: nop

        goto L_803364EC;
    // 0x803364E8: nop

L_803364EC:
    // 0x803364EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803364F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803364F4: jr          $ra
    // 0x803364F8: nop

    return;
    // 0x803364F8: nop

;}
RECOMP_FUNC void func_80332348_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332348: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033234C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332350: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332354: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332358: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033235C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332360: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332364: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332368: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033236C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332370: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332374: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332378: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033237C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332380: nop

    // 0x80332384: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332388: nop

    // 0x8033238C: bne         $t1, $zero, L_803323E4
    if (ctx->r9 != 0) {
        // 0x80332390: nop
    
            goto L_803323E4;
    }
    // 0x80332390: nop

    // 0x80332394: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332398: nop

    // 0x8033239C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803323A0: nop

    // 0x803323A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803323A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803323AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803323B0: nop

    // 0x803323B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803323B8: nop

    // 0x803323BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803323C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323C4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803323C8: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x803323CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803323D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803323D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803323DC: jal         0x8001C0EC
    // 0x803323E0: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803323E0: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
L_803323E4:
    // 0x803323E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323EC: jal         0x8002A8B4
    // 0x803323F0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x803323F0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x803323F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803323F8: nop

    // 0x803323FC: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332400: nop

    // 0x80332404: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80332408: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033240C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332410: jal         0x8001B4AC
    // 0x80332414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332418: beq         $v0, $zero, L_80332448
    if (ctx->r2 == 0) {
        // 0x8033241C: nop
    
            goto L_80332448;
    }
    // 0x8033241C: nop

    // 0x80332420: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332424: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332428: jal         0x8001BBDC
    // 0x8033242C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x8033242C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80332430: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332434: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80332438: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033243C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332440: nop

    // 0x80332444: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80332448:
    // 0x80332448: b           L_80332450
    // 0x8033244C: nop

        goto L_80332450;
    // 0x8033244C: nop

L_80332450:
    // 0x80332450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332454: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332458: jr          $ra
    // 0x8033245C: nop

    return;
    // 0x8033245C: nop

;}
RECOMP_FUNC void func_80333248_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333248: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033324C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333250: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333254: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333258: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033325C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333260: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333264: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033326C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333270: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333274: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333278: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033327C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333280: nop

    // 0x80333284: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333288: nop

    // 0x8033328C: bne         $t1, $zero, L_80333358
    if (ctx->r9 != 0) {
        // 0x80333290: nop
    
            goto L_80333358;
    }
    // 0x80333290: nop

    // 0x80333294: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333298: nop

    // 0x8033329C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803332A0: nop

    // 0x803332A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803332A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803332AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803332B0: nop

    // 0x803332B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803332B8: nop

    // 0x803332BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803332C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803332C4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803332C8: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x803332CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803332D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803332D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803332D8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x803332DC: jal         0x8001C0EC
    // 0x803332E0: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803332E0: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x803332E4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803332E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332EC: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x803332F0: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x803332F4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803332F8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803332FC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333300: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333304: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333308: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033330C: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80333310: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333314: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333318: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x8033331C: nop

    // 0x80333320: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333324: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333328: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033332C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333330: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333334: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333338: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033333C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333340: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333348: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x8033334C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333350: jal         0x800175F0
    // 0x80333354: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80333354: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80333358:
    // 0x80333358: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033335C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333360: lh          $t5, 0x108($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X108);
    // 0x80333364: nop

    // 0x80333368: bne         $t5, $at, L_8033337C
    if (ctx->r13 != ctx->r1) {
        // 0x8033336C: nop
    
            goto L_8033337C;
    }
    // 0x8033336C: nop

    // 0x80333370: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333374: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80333378: sh          $t7, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r15;
L_8033337C:
    // 0x8033337C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333380: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333384: jal         0x8002A8B4
    // 0x80333388: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80333388: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x8033338C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333390: nop

    // 0x80333394: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80333398: nop

    // 0x8033339C: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x803333A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803333A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803333A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333B0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x803333B4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x803333B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803333BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803333C0: jal         0x800295C0
    // 0x803333C4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x803333C4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x803333C8: beq         $v0, $zero, L_803333E0
    if (ctx->r2 == 0) {
        // 0x803333CC: nop
    
            goto L_803333E0;
    }
    // 0x803333CC: nop

    // 0x803333D0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803333D4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803333D8: b           L_803333F0
    // 0x803333DC: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
        goto L_803333F0;
    // 0x803333DC: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_803333E0:
    // 0x803333E0: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803333E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803333E8: nop

    // 0x803333EC: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
L_803333F0:
    // 0x803333F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333F8: jal         0x8001B4AC
    // 0x803333FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803333FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333400: beq         $v0, $zero, L_8033364C
    if (ctx->r2 == 0) {
        // 0x80333404: nop
    
            goto L_8033364C;
    }
    // 0x80333404: nop

    // 0x80333408: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033340C: nop

    // 0x80333410: sh          $zero, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = 0;
    // 0x80333414: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80333418: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033341C: jal         0x8033079C
    // 0x80333420: nop

    func_8033079C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80333420: nop

    after_5:
    // 0x80333424: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333428: beq         $v0, $at, L_8033344C
    if (ctx->r2 == ctx->r1) {
        // 0x8033342C: nop
    
            goto L_8033344C;
    }
    // 0x8033342C: nop

    // 0x80333430: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80333434: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80333438: jal         0x8033096C
    // 0x8033343C: nop

    func_8033096C_unk_bin_25(rdram, ctx);
        goto after_6;
    // 0x8033343C: nop

    after_6:
    // 0x80333440: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333444: bne         $v0, $at, L_80333464
    if (ctx->r2 != ctx->r1) {
        // 0x80333448: nop
    
            goto L_80333464;
    }
    // 0x80333448: nop

L_8033344C:
    // 0x8033344C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333450: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x80333454: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80333458: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033345C: b           L_8033364C
    // 0x80333460: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_8033364C;
    // 0x80333460: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80333464:
    // 0x80333464: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333468: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033346C: jal         0x8002A2EC
    // 0x80333470: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x80333470: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_7:
    // 0x80333474: beq         $v0, $zero, L_80333540
    if (ctx->r2 == 0) {
        // 0x80333478: nop
    
            goto L_80333540;
    }
    // 0x80333478: nop

    // 0x8033347C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333480: nop

    // 0x80333484: lh          $t7, 0xAE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAE);
    // 0x80333488: nop

    // 0x8033348C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80333490: beq         $at, $zero, L_803334AC
    if (ctx->r1 == 0) {
        // 0x80333494: nop
    
            goto L_803334AC;
    }
    // 0x80333494: nop

    // 0x80333498: lh          $t9, 0x108($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X108);
    // 0x8033349C: nop

    // 0x803334A0: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x803334A4: bne         $at, $zero, L_80333520
    if (ctx->r1 != 0) {
        // 0x803334A8: nop
    
            goto L_80333520;
    }
    // 0x803334A8: nop

L_803334AC:
    // 0x803334AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803334B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803334B4: lh          $t8, 0xB4($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XB4);
    // 0x803334B8: nop

    // 0x803334BC: bne         $t8, $at, L_803334E8
    if (ctx->r24 != ctx->r1) {
        // 0x803334C0: nop
    
            goto L_803334E8;
    }
    // 0x803334C0: nop

    // 0x803334C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803334C8: nop

    // 0x803334CC: sh          $zero, 0xB4($t1)
    MEM_H(0XB4, ctx->r9) = 0;
    // 0x803334D0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803334D4: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x803334D8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803334DC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803334E0: b           L_80333518
    // 0x803334E4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_80333518;
    // 0x803334E4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803334E8:
    // 0x803334E8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803334EC: nop

    // 0x803334F0: sh          $zero, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = 0;
    // 0x803334F4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803334F8: nop

    // 0x803334FC: sh          $zero, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = 0;
    // 0x80333500: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333504: addiu       $t5, $zero, 0x12
    ctx->r13 = ADD32(0, 0X12);
    // 0x80333508: sh          $t5, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r13;
    // 0x8033350C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333510: nop

    // 0x80333514: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80333518:
    // 0x80333518: b           L_80333538
    // 0x8033351C: nop

        goto L_80333538;
    // 0x8033351C: nop

L_80333520:
    // 0x80333520: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333524: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x80333528: sh          $t8, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r24;
    // 0x8033352C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333530: nop

    // 0x80333534: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80333538:
    // 0x80333538: b           L_8033364C
    // 0x8033353C: nop

        goto L_8033364C;
    // 0x8033353C: nop

L_80333540:
    // 0x80333540: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333544: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333548: jal         0x8002A2EC
    // 0x8033354C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_8;
    // 0x8033354C: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_8:
    // 0x80333550: beq         $v0, $zero, L_8033361C
    if (ctx->r2 == 0) {
        // 0x80333554: nop
    
            goto L_8033361C;
    }
    // 0x80333554: nop

    // 0x80333558: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033355C: nop

    // 0x80333560: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x80333564: nop

    // 0x80333568: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x8033356C: beq         $at, $zero, L_80333588
    if (ctx->r1 == 0) {
        // 0x80333570: nop
    
            goto L_80333588;
    }
    // 0x80333570: nop

    // 0x80333574: lh          $t6, 0x108($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X108);
    // 0x80333578: nop

    // 0x8033357C: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x80333580: bne         $at, $zero, L_803335FC
    if (ctx->r1 != 0) {
        // 0x80333584: nop
    
            goto L_803335FC;
    }
    // 0x80333584: nop

L_80333588:
    // 0x80333588: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033358C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333590: lh          $t5, 0xB4($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XB4);
    // 0x80333594: nop

    // 0x80333598: bne         $t5, $at, L_803335C4
    if (ctx->r13 != ctx->r1) {
        // 0x8033359C: nop
    
            goto L_803335C4;
    }
    // 0x8033359C: nop

    // 0x803335A0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803335A4: nop

    // 0x803335A8: sh          $zero, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = 0;
    // 0x803335AC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803335B0: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x803335B4: sh          $t0, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r8;
    // 0x803335B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803335BC: b           L_803335F4
    // 0x803335C0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_803335F4;
    // 0x803335C0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803335C4:
    // 0x803335C4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803335C8: nop

    // 0x803335CC: sh          $zero, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = 0;
    // 0x803335D0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803335D4: nop

    // 0x803335D8: sh          $zero, 0xAE($t2)
    MEM_H(0XAE, ctx->r10) = 0;
    // 0x803335DC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803335E0: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x803335E4: sh          $t4, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r12;
    // 0x803335E8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803335EC: nop

    // 0x803335F0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803335F4:
    // 0x803335F4: b           L_80333614
    // 0x803335F8: nop

        goto L_80333614;
    // 0x803335F8: nop

L_803335FC:
    // 0x803335FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333600: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x80333604: sh          $t5, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r13;
    // 0x80333608: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033360C: nop

    // 0x80333610: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80333614:
    // 0x80333614: b           L_8033364C
    // 0x80333618: nop

        goto L_8033364C;
    // 0x80333618: nop

L_8033361C:
    // 0x8033361C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333620: nop

    // 0x80333624: sh          $zero, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = 0;
    // 0x80333628: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033362C: nop

    // 0x80333630: sh          $zero, 0xAE($t1)
    MEM_H(0XAE, ctx->r9) = 0;
    // 0x80333634: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333638: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x8033363C: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
    // 0x80333640: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333644: nop

    // 0x80333648: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033364C:
    // 0x8033364C: b           L_80333654
    // 0x80333650: nop

        goto L_80333654;
    // 0x80333650: nop

L_80333654:
    // 0x80333654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333658: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033365C: jr          $ra
    // 0x80333660: nop

    return;
    // 0x80333660: nop

;}
RECOMP_FUNC void func_8033904C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033904C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339050: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339054: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339058: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033905C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339060: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339064: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339068: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033906C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339070: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339074: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339078: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033907C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339080: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339084: nop

    // 0x80339088: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033908C: nop

    // 0x80339090: bne         $t1, $zero, L_803390E8
    if (ctx->r9 != 0) {
        // 0x80339094: nop
    
            goto L_803390E8;
    }
    // 0x80339094: nop

    // 0x80339098: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033909C: nop

    // 0x803390A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803390A4: nop

    // 0x803390A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803390AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803390B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803390B4: nop

    // 0x803390B8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803390BC: nop

    // 0x803390C0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803390C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803390C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803390CC: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x803390D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803390D4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803390D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803390DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803390E0: jal         0x8001C0EC
    // 0x803390E4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803390E4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_803390E8:
    // 0x803390E8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803390EC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803390F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803390F4: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803390F8: jal         0x80015538
    // 0x803390FC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803390FC: nop

    after_1:
    // 0x80339100: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80339104: nop

    // 0x80339108: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x8033910C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339110: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339114: jal         0x8001B4AC
    // 0x80339118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80339118: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033911C: beq         $v0, $zero, L_8033913C
    if (ctx->r2 == 0) {
        // 0x80339120: nop
    
            goto L_8033913C;
    }
    // 0x80339120: nop

    // 0x80339124: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80339128: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x8033912C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80339130: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80339134: nop

    // 0x80339138: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033913C:
    // 0x8033913C: b           L_80339144
    // 0x80339140: nop

        goto L_80339144;
    // 0x80339140: nop

L_80339144:
    // 0x80339144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339148: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033914C: jr          $ra
    // 0x80339150: nop

    return;
    // 0x80339150: nop

;}
RECOMP_FUNC void func_80337430_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337438: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033743C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337440: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337444: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033744C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337450: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337454: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337458: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033745C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337460: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337464: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337468: nop

    // 0x8033746C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337470: nop

    // 0x80337474: bne         $t1, $zero, L_803374DC
    if (ctx->r9 != 0) {
        // 0x80337478: nop
    
            goto L_803374DC;
    }
    // 0x80337478: nop

    // 0x8033747C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337480: nop

    // 0x80337484: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337488: nop

    // 0x8033748C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337490: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337494: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337498: nop

    // 0x8033749C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803374A0: nop

    // 0x803374A4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803374A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374AC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803374B0: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803374B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803374BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803374C0: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x803374C4: jal         0x8001C0EC
    // 0x803374C8: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803374C8: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803374CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374D4: jal         0x8001BBDC
    // 0x803374D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803374D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803374DC:
    // 0x803374DC: jal         0x80334D5C
    // 0x803374E0: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803374E0: nop

    after_2:
    // 0x803374E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374EC: jal         0x8001B4AC
    // 0x803374F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803374F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803374F4: beq         $v0, $zero, L_80337514
    if (ctx->r2 == 0) {
        // 0x803374F8: nop
    
            goto L_80337514;
    }
    // 0x803374F8: nop

    // 0x803374FC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80337500: addiu       $t8, $zero, 0x25
    ctx->r24 = ADD32(0, 0X25);
    // 0x80337504: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80337508: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033750C: nop

    // 0x80337510: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80337514:
    // 0x80337514: b           L_8033751C
    // 0x80337518: nop

        goto L_8033751C;
    // 0x80337518: nop

L_8033751C:
    // 0x8033751C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337524: jr          $ra
    // 0x80337528: nop

    return;
    // 0x80337528: nop

;}
RECOMP_FUNC void func_8033065C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033065C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80330660: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330664: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330668: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033066C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330670: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330674: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330678: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033067C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330680: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330684: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330688: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033068C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80330690: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80330694: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330698: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033069C: nop

    // 0x803306A0: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x803306A4: nop

    // 0x803306A8: bc1f        L_803306C4
    if (!c1cs) {
        // 0x803306AC: nop
    
            goto L_803306C4;
    }
    // 0x803306AC: nop

    // 0x803306B0: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x803306B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803306B8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803306BC: b           L_8033070C
    // 0x803306C0: swc1        $f8, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f8.u32l;
        goto L_8033070C;
    // 0x803306C0: swc1        $f8, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f8.u32l;
L_803306C4:
    // 0x803306C4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803306C8: lui         $at, 0xC407
    ctx->r1 = S32(0XC407 << 16);
    // 0x803306CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803306D0: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x803306D4: nop

    // 0x803306D8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803306DC: nop

    // 0x803306E0: bc1f        L_803306FC
    if (!c1cs) {
        // 0x803306E4: nop
    
            goto L_803306FC;
    }
    // 0x803306E4: nop

    // 0x803306E8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803306EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803306F0: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x803306F4: b           L_8033070C
    // 0x803306F8: swc1        $f18, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f18.u32l;
        goto L_8033070C;
    // 0x803306F8: swc1        $f18, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f18.u32l;
L_803306FC:
    // 0x803306FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330700: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80330704: nop

    // 0x80330708: swc1        $f4, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f4.u32l;
L_8033070C:
    // 0x8033070C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80330710: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80330714: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330718: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033071C: nop

    // 0x80330720: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80330724: nop

    // 0x80330728: bc1f        L_80330744
    if (!c1cs) {
        // 0x8033072C: nop
    
            goto L_80330744;
    }
    // 0x8033072C: nop

    // 0x80330730: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x80330734: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330738: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8033073C: b           L_8033078C
    // 0x80330740: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
        goto L_8033078C;
    // 0x80330740: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
L_80330744:
    // 0x80330744: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80330748: lui         $at, 0xC407
    ctx->r1 = S32(0XC407 << 16);
    // 0x8033074C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330750: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80330754: nop

    // 0x80330758: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8033075C: nop

    // 0x80330760: bc1f        L_8033077C
    if (!c1cs) {
        // 0x80330764: nop
    
            goto L_8033077C;
    }
    // 0x80330764: nop

    // 0x80330768: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8033076C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330770: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80330774: b           L_8033078C
    // 0x80330778: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
        goto L_8033078C;
    // 0x80330778: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
L_8033077C:
    // 0x8033077C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330780: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80330784: nop

    // 0x80330788: swc1        $f6, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f6.u32l;
L_8033078C:
    // 0x8033078C: b           L_80330794
    // 0x80330790: nop

        goto L_80330794;
    // 0x80330790: nop

L_80330794:
    // 0x80330794: jr          $ra
    // 0x80330798: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80330798: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_803371AC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803371AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803371B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803371B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803371B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803371BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803371C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803371C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803371C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803371CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803371D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803371D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803371D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803371DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803371E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803371E4: nop

    // 0x803371E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803371EC: nop

    // 0x803371F0: bne         $t1, $zero, L_803372B8
    if (ctx->r9 != 0) {
        // 0x803371F4: nop
    
            goto L_803372B8;
    }
    // 0x803371F4: nop

    // 0x803371F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803371FC: nop

    // 0x80337200: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337204: nop

    // 0x80337208: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033720C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337210: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337214: nop

    // 0x80337218: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033721C: nop

    // 0x80337220: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337224: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337228: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033722C: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80337230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337234: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337238: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033723C: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80337240: jal         0x8001C0EC
    // 0x80337244: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337244: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80337248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033724C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337250: jal         0x8001BBDC
    // 0x80337254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80337254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033725C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80337260: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80337264: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337268: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8033726C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337270: jal         0x8001ABF4
    // 0x80337274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80337274: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80337278: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033727C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80337280: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80337284: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337288: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    // 0x8033728C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80337290: jal         0x8001ABF4
    // 0x80337294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80337294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80337298: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033729C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803372A0: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x803372A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803372A8: addiu       $a3, $a3, 0xE0
    ctx->r7 = ADD32(ctx->r7, 0XE0);
    // 0x803372AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803372B0: jal         0x8001ABF4
    // 0x803372B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803372B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803372B8:
    // 0x803372B8: jal         0x80334D5C
    // 0x803372BC: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x803372BC: nop

    after_5:
    // 0x803372C0: b           L_803372C8
    // 0x803372C4: nop

        goto L_803372C8;
    // 0x803372C4: nop

L_803372C8:
    // 0x803372C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803372CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803372D0: jr          $ra
    // 0x803372D4: nop

    return;
    // 0x803372D4: nop

;}
RECOMP_FUNC void func_80339548_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339548: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033954C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80339550: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339554: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339558: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033955C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339560: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339564: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339568: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033956C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339570: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339574: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339578: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033957C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339580: nop

    // 0x80339584: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339588: nop

    // 0x8033958C: bne         $t1, $zero, L_803395CC
    if (ctx->r9 != 0) {
        // 0x80339590: nop
    
            goto L_803395CC;
    }
    // 0x80339590: nop

    // 0x80339594: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339598: nop

    // 0x8033959C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803395A0: nop

    // 0x803395A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803395A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803395AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803395B0: nop

    // 0x803395B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803395B8: nop

    // 0x803395BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803395C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803395C4: addiu       $t7, $zero, 0xF0
    ctx->r15 = ADD32(0, 0XF0);
    // 0x803395C8: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_803395CC:
    // 0x803395CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803395D0: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x803395D4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803395D8: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803395DC: jal         0x80015538
    // 0x803395E0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803395E0: nop

    after_0:
    // 0x803395E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803395E8: nop

    // 0x803395EC: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x803395F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803395F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803395F8: jal         0x80028FA0
    // 0x803395FC: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x803395FC: nop

    after_1:
    // 0x80339600: beq         $v0, $zero, L_80339618
    if (ctx->r2 == 0) {
        // 0x80339604: nop
    
            goto L_80339618;
    }
    // 0x80339604: nop

    // 0x80339608: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033960C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339610: jal         0x80029B60
    // 0x80339614: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x80339614: nop

    after_2:
L_80339618:
    // 0x80339618: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033961C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339620: jal         0x8002A8B4
    // 0x80339624: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80339624: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80339628: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033962C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80339630: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80339634: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80339638: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8033963C: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80339640: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80339644: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80339648: jal         0x800156C4
    // 0x8033964C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_4;
    // 0x8033964C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_4:
    // 0x80339650: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80339654: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80339658: jal         0x80015744
    // 0x8033965C: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_5;
    // 0x8033965C: nop

    after_5:
    // 0x80339660: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80339664: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80339668: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033966C: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80339670: jal         0x8002A800
    // 0x80339674: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8002A800(rdram, ctx);
        goto after_6;
    // 0x80339674: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_6:
    // 0x80339678: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8033967C: nop

    // 0x80339680: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80339684: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80339688: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033968C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80339690: nop

    // 0x80339694: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80339698: nop

    // 0x8033969C: bc1t        L_803396D0
    if (c1cs) {
        // 0x803396A0: nop
    
            goto L_803396D0;
    }
    // 0x803396A0: nop

    // 0x803396A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803396A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803396AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803396B0: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803396B4: lwc1        $f12, 0x40($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X40);
    // 0x803396B8: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x803396BC: jal         0x80015538
    // 0x803396C0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x803396C0: nop

    after_7:
    // 0x803396C4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803396C8: nop

    // 0x803396CC: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
L_803396D0:
    // 0x803396D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803396D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803396D8: jal         0x80029D8C
    // 0x803396DC: nop

    func_80029D8C(rdram, ctx);
        goto after_8;
    // 0x803396DC: nop

    after_8:
    // 0x803396E0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803396E4: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x803396E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803396EC: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803396F0: nop

    // 0x803396F4: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x803396F8: nop

    // 0x803396FC: bc1f        L_8033971C
    if (!c1cs) {
        // 0x80339700: nop
    
            goto L_8033971C;
    }
    // 0x80339700: nop

    // 0x80339704: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339708: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033970C: jal         0x8002B0E4
    // 0x80339710: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x80339710: nop

    after_9:
    // 0x80339714: b           L_8033976C
    // 0x80339718: nop

        goto L_8033976C;
    // 0x80339718: nop

L_8033971C:
    // 0x8033971C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80339720: nop

    // 0x80339724: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80339728: nop

    // 0x8033972C: bne         $t8, $zero, L_8033974C
    if (ctx->r24 != 0) {
        // 0x80339730: nop
    
            goto L_8033974C;
    }
    // 0x80339730: nop

    // 0x80339734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339738: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033973C: jal         0x8002B0E4
    // 0x80339740: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x80339740: nop

    after_10:
    // 0x80339744: b           L_80339764
    // 0x80339748: nop

        goto L_80339764;
    // 0x80339748: nop

L_8033974C:
    // 0x8033974C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80339750: nop

    // 0x80339754: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80339758: nop

    // 0x8033975C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80339760: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_80339764:
    // 0x80339764: b           L_8033976C
    // 0x80339768: nop

        goto L_8033976C;
    // 0x80339768: nop

L_8033976C:
    // 0x8033976C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339770: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339774: jr          $ra
    // 0x80339778: nop

    return;
    // 0x80339778: nop

;}
RECOMP_FUNC void func_803385A8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803385A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803385AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803385B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803385B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803385B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803385BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803385C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803385C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803385C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803385CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803385D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803385D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803385D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803385DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803385E0: nop

    // 0x803385E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803385E8: nop

    // 0x803385EC: bne         $t1, $zero, L_80338644
    if (ctx->r9 != 0) {
        // 0x803385F0: nop
    
            goto L_80338644;
    }
    // 0x803385F0: nop

    // 0x803385F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803385F8: nop

    // 0x803385FC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338600: nop

    // 0x80338604: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338608: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033860C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338610: nop

    // 0x80338614: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338618: nop

    // 0x8033861C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338624: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338628: addiu       $t7, $t7, -0x4288
    ctx->r15 = ADD32(ctx->r15, -0X4288);
    // 0x8033862C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338630: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338638: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8033863C: jal         0x8001C0EC
    // 0x80338640: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338640: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    after_0:
L_80338644:
    // 0x80338644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033864C: jal         0x8001B4AC
    // 0x80338650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80338650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80338654: beq         $v0, $zero, L_80338698
    if (ctx->r2 == 0) {
        // 0x80338658: nop
    
            goto L_80338698;
    }
    // 0x80338658: nop

    // 0x8033865C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338660: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338664: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80338668: nop

    // 0x8033866C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80338670: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338674: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338678: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033867C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80338680: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80338684: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x80338688: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033868C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338690: jal         0x8002B114
    // 0x80338694: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80338694: nop

    after_2:
L_80338698:
    // 0x80338698: b           L_803386A0
    // 0x8033869C: nop

        goto L_803386A0;
    // 0x8033869C: nop

L_803386A0:
    // 0x803386A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803386A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803386A8: jr          $ra
    // 0x803386AC: nop

    return;
    // 0x803386AC: nop

;}
RECOMP_FUNC void func_803386B0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803386B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803386B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803386B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803386BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803386C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803386C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803386C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803386CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803386D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803386D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803386D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803386DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803386E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803386E4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803386E8: nop

    // 0x803386EC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803386F0: nop

    // 0x803386F4: slti        $at, $t1, 0x1D
    ctx->r1 = SIGNED(ctx->r9) < 0X1D ? 1 : 0;
    // 0x803386F8: beq         $at, $zero, L_80338720
    if (ctx->r1 == 0) {
        // 0x803386FC: nop
    
            goto L_80338720;
    }
    // 0x803386FC: nop

    // 0x80338700: jal         0x80337C40
    // 0x80338704: nop

    func_80337C40_unk_bin_25(rdram, ctx);
        goto after_0;
    // 0x80338704: nop

    after_0:
    // 0x80338708: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033870C: nop

    // 0x80338710: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80338714: nop

    // 0x80338718: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033871C: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_80338720:
    // 0x80338720: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80338724: nop

    // 0x80338728: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033872C: nop

    // 0x80338730: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80338734: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x80338738: beq         $at, $zero, L_803387EC
    if (ctx->r1 == 0) {
        // 0x8033873C: nop
    
            goto L_803387EC;
    }
    // 0x8033873C: nop

    // 0x80338740: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338744: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338748: addu        $at, $at, $t7
    gpr jr_addend_80338754 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033874C: lw          $t7, -0x5180($at)
    ctx->r15 = ADD32(ctx->r1, -0X5180);
    // 0x80338750: nop

    // 0x80338754: jr          $t7
    // 0x80338758: nop

    switch (jr_addend_80338754 >> 2) {
        case 0: goto L_8033875C; break;
        case 1: goto L_8033876C; break;
        case 2: goto L_8033877C; break;
        case 3: goto L_8033878C; break;
        case 4: goto L_8033879C; break;
        case 5: goto L_803387AC; break;
        case 6: goto L_803387BC; break;
        case 7: goto L_803387CC; break;
        case 8: goto L_803387DC; break;
        default: switch_error(__func__, 0x80338754, 0x8033AE80);
    }
    // 0x80338758: nop

L_8033875C:
    // 0x8033875C: jal         0x80337E30
    // 0x80338760: nop

    func_80337E30_unk_bin_25(rdram, ctx);
        goto after_1;
    // 0x80338760: nop

    after_1:
    // 0x80338764: b           L_803387F4
    // 0x80338768: nop

        goto L_803387F4;
    // 0x80338768: nop

L_8033876C:
    // 0x8033876C: jal         0x80337F50
    // 0x80338770: nop

    func_80337F50_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80338770: nop

    after_2:
    // 0x80338774: b           L_803387F4
    // 0x80338778: nop

        goto L_803387F4;
    // 0x80338778: nop

L_8033877C:
    // 0x8033877C: jal         0x80338034
    // 0x80338780: nop

    func_80338034_unk_bin_25(rdram, ctx);
        goto after_3;
    // 0x80338780: nop

    after_3:
    // 0x80338784: b           L_803387F4
    // 0x80338788: nop

        goto L_803387F4;
    // 0x80338788: nop

L_8033878C:
    // 0x8033878C: jal         0x80338118
    // 0x80338790: nop

    func_80338118_unk_bin_25(rdram, ctx);
        goto after_4;
    // 0x80338790: nop

    after_4:
    // 0x80338794: b           L_803387F4
    // 0x80338798: nop

        goto L_803387F4;
    // 0x80338798: nop

L_8033879C:
    // 0x8033879C: jal         0x80338218
    // 0x803387A0: nop

    func_80338218_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x803387A0: nop

    after_5:
    // 0x803387A4: b           L_803387F4
    // 0x803387A8: nop

        goto L_803387F4;
    // 0x803387A8: nop

L_803387AC:
    // 0x803387AC: jal         0x803382FC
    // 0x803387B0: nop

    func_803382FC_unk_bin_25(rdram, ctx);
        goto after_6;
    // 0x803387B0: nop

    after_6:
    // 0x803387B4: b           L_803387F4
    // 0x803387B8: nop

        goto L_803387F4;
    // 0x803387B8: nop

L_803387BC:
    // 0x803387BC: jal         0x803383E0
    // 0x803387C0: nop

    func_803383E0_unk_bin_25(rdram, ctx);
        goto after_7;
    // 0x803387C0: nop

    after_7:
    // 0x803387C4: b           L_803387F4
    // 0x803387C8: nop

        goto L_803387F4;
    // 0x803387C8: nop

L_803387CC:
    // 0x803387CC: jal         0x803384C4
    // 0x803387D0: nop

    func_803384C4_unk_bin_25(rdram, ctx);
        goto after_8;
    // 0x803387D0: nop

    after_8:
    // 0x803387D4: b           L_803387F4
    // 0x803387D8: nop

        goto L_803387F4;
    // 0x803387D8: nop

L_803387DC:
    // 0x803387DC: jal         0x803385A8
    // 0x803387E0: nop

    func_803385A8_unk_bin_25(rdram, ctx);
        goto after_9;
    // 0x803387E0: nop

    after_9:
    // 0x803387E4: b           L_803387F4
    // 0x803387E8: nop

        goto L_803387F4;
    // 0x803387E8: nop

L_803387EC:
    // 0x803387EC: b           L_803387F4
    // 0x803387F0: nop

        goto L_803387F4;
    // 0x803387F0: nop

L_803387F4:
    // 0x803387F4: b           L_803387FC
    // 0x803387F8: nop

        goto L_803387FC;
    // 0x803387F8: nop

L_803387FC:
    // 0x803387FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80338800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80338804: jr          $ra
    // 0x80338808: nop

    return;
    // 0x80338808: nop

;}
RECOMP_FUNC void func_803384C4_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803384C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803384C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803384CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803384D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803384D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803384D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803384DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803384E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803384E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803384E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803384EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803384F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803384F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803384F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803384FC: nop

    // 0x80338500: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338504: nop

    // 0x80338508: bne         $t1, $zero, L_80338560
    if (ctx->r9 != 0) {
        // 0x8033850C: nop
    
            goto L_80338560;
    }
    // 0x8033850C: nop

    // 0x80338510: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338514: nop

    // 0x80338518: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033851C: nop

    // 0x80338520: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338524: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338528: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033852C: nop

    // 0x80338530: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338534: nop

    // 0x80338538: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033853C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338540: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338544: addiu       $t7, $t7, -0x4288
    ctx->r15 = ADD32(ctx->r15, -0X4288);
    // 0x80338548: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033854C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338554: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80338558: jal         0x8001C0EC
    // 0x8033855C: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033855C: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    after_0:
L_80338560:
    // 0x80338560: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338568: jal         0x8001B4AC
    // 0x8033856C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033856C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80338570: beq         $v0, $zero, L_80338590
    if (ctx->r2 == 0) {
        // 0x80338574: nop
    
            goto L_80338590;
    }
    // 0x80338574: nop

    // 0x80338578: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033857C: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80338580: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80338584: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338588: nop

    // 0x8033858C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80338590:
    // 0x80338590: b           L_80338598
    // 0x80338594: nop

        goto L_80338598;
    // 0x80338594: nop

L_80338598:
    // 0x80338598: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033859C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803385A0: jr          $ra
    // 0x803385A4: nop

    return;
    // 0x803385A4: nop

;}
RECOMP_FUNC void func_80337F50_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337F50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337F54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337F58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337F5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337F60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337F64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337F68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337F6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337F70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337F74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337F78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337F7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337F80: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337F84: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337F88: nop

    // 0x80337F8C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337F90: nop

    // 0x80337F94: bne         $t1, $zero, L_80337FEC
    if (ctx->r9 != 0) {
        // 0x80337F98: nop
    
            goto L_80337FEC;
    }
    // 0x80337F98: nop

    // 0x80337F9C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337FA0: nop

    // 0x80337FA4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337FA8: nop

    // 0x80337FAC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337FB0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337FB4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337FB8: nop

    // 0x80337FBC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337FC0: nop

    // 0x80337FC4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337FC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337FCC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337FD0: addiu       $t7, $t7, -0x4288
    ctx->r15 = ADD32(ctx->r15, -0X4288);
    // 0x80337FD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337FD8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337FDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80337FE4: jal         0x8001C0EC
    // 0x80337FE8: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337FE8: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    after_0:
L_80337FEC:
    // 0x80337FEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337FF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337FF4: jal         0x8001B4AC
    // 0x80337FF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337FF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337FFC: beq         $v0, $zero, L_8033801C
    if (ctx->r2 == 0) {
        // 0x80338000: nop
    
            goto L_8033801C;
    }
    // 0x80338000: nop

    // 0x80338004: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338008: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8033800C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80338010: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338014: nop

    // 0x80338018: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033801C:
    // 0x8033801C: b           L_80338024
    // 0x80338020: nop

        goto L_80338024;
    // 0x80338020: nop

L_80338024:
    // 0x80338024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033802C: jr          $ra
    // 0x80338030: nop

    return;
    // 0x80338030: nop

;}
RECOMP_FUNC void func_80334750_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334750: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334758: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033475C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334760: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334764: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334768: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033476C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334774: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334778: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033477C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334780: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334784: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334788: nop

    // 0x8033478C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334790: nop

    // 0x80334794: bne         $t1, $zero, L_80334860
    if (ctx->r9 != 0) {
        // 0x80334798: nop
    
            goto L_80334860;
    }
    // 0x80334798: nop

    // 0x8033479C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803347A0: nop

    // 0x803347A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803347A8: nop

    // 0x803347AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803347B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803347B4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803347B8: nop

    // 0x803347BC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803347C0: nop

    // 0x803347C4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803347C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347CC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803347D0: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x803347D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347D8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803347DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803347E0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x803347E4: jal         0x8001C0EC
    // 0x803347E8: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803347E8: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x803347EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347F4: jal         0x8001BBDC
    // 0x803347F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803347F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803347FC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334800: nop

    // 0x80334804: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x80334808: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033480C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334810: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80334814: addiu       $t9, $zero, 0x23
    ctx->r25 = ADD32(0, 0X23);
    // 0x80334818: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033481C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334820: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334824: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334828: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033482C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334830: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80334834: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334838: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033483C: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x80334840: nop

    // 0x80334844: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80334848: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033484C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334850: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80334854: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334858: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033485C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80334860:
    // 0x80334860: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334864: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334868: lh          $t7, 0x108($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X108);
    // 0x8033486C: nop

    // 0x80334870: bne         $t7, $at, L_80334884
    if (ctx->r15 != ctx->r1) {
        // 0x80334874: nop
    
            goto L_80334884;
    }
    // 0x80334874: nop

    // 0x80334878: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033487C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80334880: sh          $t8, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r24;
L_80334884:
    // 0x80334884: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334888: nop

    // 0x8033488C: lh          $t9, 0xA6($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XA6);
    // 0x80334890: nop

    // 0x80334894: bne         $t9, $zero, L_803348E8
    if (ctx->r25 != 0) {
        // 0x80334898: nop
    
            goto L_803348E8;
    }
    // 0x80334898: nop

    // 0x8033489C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803348A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803348A4: jal         0x8001B62C
    // 0x803348A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x803348A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803348AC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x803348B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803348B4: nop

    // 0x803348B8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x803348BC: nop

    // 0x803348C0: bc1f        L_803348E8
    if (!c1cs) {
        // 0x803348C4: nop
    
            goto L_803348E8;
    }
    // 0x803348C4: nop

    // 0x803348C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803348CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803348D0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x803348D4: jal         0x80029EF8
    // 0x803348D8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x803348D8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
    // 0x803348DC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803348E0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803348E4: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_803348E8:
    // 0x803348E8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803348EC: lui         $at, 0xC140
    ctx->r1 = S32(0XC140 << 16);
    // 0x803348F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803348F4: lwc1        $f6, 0x28($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X28);
    // 0x803348F8: nop

    // 0x803348FC: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80334900: nop

    // 0x80334904: bc1f        L_80334920
    if (!c1cs) {
        // 0x80334908: nop
    
            goto L_80334920;
    }
    // 0x80334908: nop

    // 0x8033490C: lui         $at, 0xC140
    ctx->r1 = S32(0XC140 << 16);
    // 0x80334910: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334914: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80334918: nop

    // 0x8033491C: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
L_80334920:
    // 0x80334920: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334924: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334928: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x8033492C: nop

    // 0x80334930: bne         $t7, $at, L_80334978
    if (ctx->r15 != ctx->r1) {
        // 0x80334934: nop
    
            goto L_80334978;
    }
    // 0x80334934: nop

    // 0x80334938: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033493C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334940: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80334944: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80334948: jal         0x8002A0D0
    // 0x8033494C: lui         $a3, 0xC334
    ctx->r7 = S32(0XC334 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_4;
    // 0x8033494C: lui         $a3, 0xC334
    ctx->r7 = S32(0XC334 << 16);
    after_4:
    // 0x80334950: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334954: bne         $v0, $at, L_80334978
    if (ctx->r2 != ctx->r1) {
        // 0x80334958: nop
    
            goto L_80334978;
    }
    // 0x80334958: nop

    // 0x8033495C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334960: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334964: nop

    // 0x80334968: swc1        $f16, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f16.u32l;
    // 0x8033496C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334970: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80334974: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
L_80334978:
    // 0x80334978: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033497C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334980: jal         0x8001B4AC
    // 0x80334984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80334984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80334988: beq         $v0, $zero, L_803349C4
    if (ctx->r2 == 0) {
        // 0x8033498C: nop
    
            goto L_803349C4;
    }
    // 0x8033498C: nop

    // 0x80334990: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334994: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334998: nop

    // 0x8033499C: swc1        $f18, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f18.u32l;
    // 0x803349A0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803349A4: nop

    // 0x803349A8: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
    // 0x803349AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803349B0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803349B4: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x803349B8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803349BC: nop

    // 0x803349C0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803349C4:
    // 0x803349C4: b           L_803349CC
    // 0x803349C8: nop

        goto L_803349CC;
    // 0x803349C8: nop

L_803349CC:
    // 0x803349CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803349D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803349D4: jr          $ra
    // 0x803349D8: nop

    return;
    // 0x803349D8: nop

;}
RECOMP_FUNC void func_80335FE4_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335FE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335FE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335FEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335FF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335FF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335FF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335FFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336000: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336004: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336008: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033600C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336010: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336014: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336018: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033601C: nop

    // 0x80336020: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336024: nop

    // 0x80336028: bne         $t1, $zero, L_80336090
    if (ctx->r9 != 0) {
        // 0x8033602C: nop
    
            goto L_80336090;
    }
    // 0x8033602C: nop

    // 0x80336030: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336034: nop

    // 0x80336038: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033603C: nop

    // 0x80336040: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336044: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336048: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033604C: nop

    // 0x80336050: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336054: nop

    // 0x80336058: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033605C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336060: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336064: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336068: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033606C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336074: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80336078: jal         0x8001C0EC
    // 0x8033607C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033607C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336088: jal         0x8001BBDC
    // 0x8033608C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033608C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80336090:
    // 0x80336090: jal         0x80334D5C
    // 0x80336094: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80336094: nop

    after_2:
    // 0x80336098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033609C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803360A0: jal         0x8001B4AC
    // 0x803360A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803360A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803360A8: beq         $v0, $zero, L_803360C8
    if (ctx->r2 == 0) {
        // 0x803360AC: nop
    
            goto L_803360C8;
    }
    // 0x803360AC: nop

    // 0x803360B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803360B4: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x803360B8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803360BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803360C0: nop

    // 0x803360C4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803360C8:
    // 0x803360C8: b           L_803360D0
    // 0x803360CC: nop

        goto L_803360D0;
    // 0x803360CC: nop

L_803360D0:
    // 0x803360D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803360D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803360D8: jr          $ra
    // 0x803360DC: nop

    return;
    // 0x803360DC: nop

;}
RECOMP_FUNC void func_80333664_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333664: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333668: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033366C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333670: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333674: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333678: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033367C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333680: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333684: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333688: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033368C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333690: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333694: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333698: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033369C: nop

    // 0x803336A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803336A4: nop

    // 0x803336A8: bne         $t1, $zero, L_80333774
    if (ctx->r9 != 0) {
        // 0x803336AC: nop
    
            goto L_80333774;
    }
    // 0x803336AC: nop

    // 0x803336B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803336B4: nop

    // 0x803336B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803336BC: nop

    // 0x803336C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803336C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803336C8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803336CC: nop

    // 0x803336D0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803336D4: nop

    // 0x803336D8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803336DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803336E0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803336E4: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x803336E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803336F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803336F4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x803336F8: jal         0x8001C0EC
    // 0x803336FC: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803336FC: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80333700: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333704: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333708: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033370C: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x80333710: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333714: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333718: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033371C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333720: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333724: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333728: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x8033372C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333730: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333734: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80333738: nop

    // 0x8033373C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333740: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333744: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333748: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033374C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333750: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333754: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80333758: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033375C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333760: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333764: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x80333768: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033376C: jal         0x800175F0
    // 0x80333770: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80333770: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80333774:
    // 0x80333774: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333778: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033377C: jal         0x8002A8B4
    // 0x80333780: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80333780: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x80333784: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333788: nop

    // 0x8033378C: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80333790: nop

    // 0x80333794: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80333798: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033379C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803337A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803337A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803337A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x803337AC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x803337B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803337B4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803337B8: jal         0x800295C0
    // 0x803337BC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x803337BC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x803337C0: beq         $v0, $zero, L_803337D4
    if (ctx->r2 == 0) {
        // 0x803337C4: nop
    
            goto L_803337D4;
    }
    // 0x803337C4: nop

    // 0x803337C8: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803337CC: b           L_803337E0
    // 0x803337D0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
        goto L_803337E0;
    // 0x803337D0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_803337D4:
    // 0x803337D4: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803337D8: nop

    // 0x803337DC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_803337E0:
    // 0x803337E0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803337E4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803337E8: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803337EC: nop

    // 0x803337F0: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x803337F4: nop

    // 0x803337F8: bc1f        L_80333820
    if (!c1cs) {
        // 0x803337FC: nop
    
            goto L_80333820;
    }
    // 0x803337FC: nop

    // 0x80333800: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333804: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333808: nop

    // 0x8033380C: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x80333810: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333814: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333818: nop

    // 0x8033381C: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
L_80333820:
    // 0x80333820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333824: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333828: jal         0x8001B4AC
    // 0x8033382C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033382C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333830: beq         $v0, $zero, L_803338BC
    if (ctx->r2 == 0) {
        // 0x80333834: nop
    
            goto L_803338BC;
    }
    // 0x80333834: nop

    // 0x80333838: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033383C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333840: nop

    // 0x80333844: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
    // 0x80333848: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033384C: nop

    // 0x80333850: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x80333854: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80333858: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033385C: jal         0x8033079C
    // 0x80333860: nop

    func_8033079C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80333860: nop

    after_5:
    // 0x80333864: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333868: beq         $v0, $at, L_8033388C
    if (ctx->r2 == ctx->r1) {
        // 0x8033386C: nop
    
            goto L_8033388C;
    }
    // 0x8033386C: nop

    // 0x80333870: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80333874: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80333878: jal         0x8033096C
    // 0x8033387C: nop

    func_8033096C_unk_bin_25(rdram, ctx);
        goto after_6;
    // 0x8033387C: nop

    after_6:
    // 0x80333880: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333884: bne         $v0, $at, L_803338A4
    if (ctx->r2 != ctx->r1) {
        // 0x80333888: nop
    
            goto L_803338A4;
    }
    // 0x80333888: nop

L_8033388C:
    // 0x8033388C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333890: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x80333894: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80333898: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033389C: b           L_803338BC
    // 0x803338A0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_803338BC;
    // 0x803338A0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803338A4:
    // 0x803338A4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803338A8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803338AC: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803338B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803338B4: nop

    // 0x803338B8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803338BC:
    // 0x803338BC: b           L_803338C4
    // 0x803338C0: nop

        goto L_803338C4;
    // 0x803338C0: nop

L_803338C4:
    // 0x803338C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803338C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803338CC: jr          $ra
    // 0x803338D0: nop

    return;
    // 0x803338D0: nop

;}
RECOMP_FUNC void func_8033A39C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A39C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A3A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A3A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A3A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A3AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A3B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A3B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A3B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A3BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A3C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A3C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A3C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A3CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A3D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A3D4: nop

    // 0x8033A3D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A3DC: nop

    // 0x8033A3E0: bne         $t1, $zero, L_8033A438
    if (ctx->r9 != 0) {
        // 0x8033A3E4: nop
    
            goto L_8033A438;
    }
    // 0x8033A3E4: nop

    // 0x8033A3E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A3EC: nop

    // 0x8033A3F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A3F4: nop

    // 0x8033A3F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A3FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A400: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A404: nop

    // 0x8033A408: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A40C: nop

    // 0x8033A410: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A414: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A418: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A41C: addiu       $t7, $t7, -0x3E2C
    ctx->r15 = ADD32(ctx->r15, -0X3E2C);
    // 0x8033A420: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A424: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A428: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A42C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033A430: jal         0x8001C0EC
    // 0x8033A434: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A434: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    after_0:
L_8033A438:
    // 0x8033A438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A43C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A440: jal         0x8001B4AC
    // 0x8033A444: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A444: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A448: beq         $v0, $zero, L_8033A468
    if (ctx->r2 == 0) {
        // 0x8033A44C: nop
    
            goto L_8033A468;
    }
    // 0x8033A44C: nop

    // 0x8033A450: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033A454: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8033A458: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033A45C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A460: nop

    // 0x8033A464: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033A468:
    // 0x8033A468: b           L_8033A470
    // 0x8033A46C: nop

        goto L_8033A470;
    // 0x8033A46C: nop

L_8033A470:
    // 0x8033A470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A478: jr          $ra
    // 0x8033A47C: nop

    return;
    // 0x8033A47C: nop

;}
RECOMP_FUNC void func_80339154_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339154: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339158: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033915C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339160: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339164: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339168: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033916C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339170: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339174: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339178: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033917C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339180: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339184: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339188: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033918C: nop

    // 0x80339190: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339194: nop

    // 0x80339198: bne         $t1, $zero, L_803391F0
    if (ctx->r9 != 0) {
        // 0x8033919C: nop
    
            goto L_803391F0;
    }
    // 0x8033919C: nop

    // 0x803391A0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803391A4: nop

    // 0x803391A8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803391AC: nop

    // 0x803391B0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803391B4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803391B8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803391BC: nop

    // 0x803391C0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803391C4: nop

    // 0x803391C8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803391CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803391D0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803391D4: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x803391D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803391DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803391E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803391E4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x803391E8: jal         0x8001C0EC
    // 0x803391EC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803391EC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_803391F0:
    // 0x803391F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803391F4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803391F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803391FC: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80339200: jal         0x80015538
    // 0x80339204: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80339204: nop

    after_1:
    // 0x80339208: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033920C: nop

    // 0x80339210: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80339214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033921C: jal         0x8001B4AC
    // 0x80339220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80339220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80339224: beq         $v0, $zero, L_8033923C
    if (ctx->r2 == 0) {
        // 0x80339228: nop
    
            goto L_8033923C;
    }
    // 0x80339228: nop

    // 0x8033922C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339234: jal         0x8002B114
    // 0x80339238: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80339238: nop

    after_3:
L_8033923C:
    // 0x8033923C: b           L_80339244
    // 0x80339240: nop

        goto L_80339244;
    // 0x80339240: nop

L_80339244:
    // 0x80339244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033924C: jr          $ra
    // 0x80339250: nop

    return;
    // 0x80339250: nop

;}
RECOMP_FUNC void func_803382FC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803382FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338300: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338304: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338308: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033830C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338310: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338314: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338318: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033831C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338320: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338324: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338328: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033832C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338330: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338334: nop

    // 0x80338338: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033833C: nop

    // 0x80338340: bne         $t1, $zero, L_80338398
    if (ctx->r9 != 0) {
        // 0x80338344: nop
    
            goto L_80338398;
    }
    // 0x80338344: nop

    // 0x80338348: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033834C: nop

    // 0x80338350: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338354: nop

    // 0x80338358: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033835C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338360: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338364: nop

    // 0x80338368: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033836C: nop

    // 0x80338370: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338374: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338378: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033837C: addiu       $t7, $t7, -0x4288
    ctx->r15 = ADD32(ctx->r15, -0X4288);
    // 0x80338380: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338384: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338388: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033838C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80338390: jal         0x8001C0EC
    // 0x80338394: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338394: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    after_0:
L_80338398:
    // 0x80338398: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033839C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803383A0: jal         0x8001B4AC
    // 0x803383A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803383A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803383A8: beq         $v0, $zero, L_803383C8
    if (ctx->r2 == 0) {
        // 0x803383AC: nop
    
            goto L_803383C8;
    }
    // 0x803383AC: nop

    // 0x803383B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803383B4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x803383B8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803383BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803383C0: nop

    // 0x803383C4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803383C8:
    // 0x803383C8: b           L_803383D0
    // 0x803383CC: nop

        goto L_803383D0;
    // 0x803383CC: nop

L_803383D0:
    // 0x803383D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803383D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803383D8: jr          $ra
    // 0x803383DC: nop

    return;
    // 0x803383DC: nop

;}
RECOMP_FUNC void func_80336FE4_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336FE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336FE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336FEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336FF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336FF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336FF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336FFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337000: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337004: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337008: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033700C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337010: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337014: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337018: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033701C: nop

    // 0x80337020: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337024: nop

    // 0x80337028: bne         $t1, $zero, L_80337090
    if (ctx->r9 != 0) {
        // 0x8033702C: nop
    
            goto L_80337090;
    }
    // 0x8033702C: nop

    // 0x80337030: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337034: nop

    // 0x80337038: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033703C: nop

    // 0x80337040: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337044: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337048: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033704C: nop

    // 0x80337050: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337054: nop

    // 0x80337058: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033705C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337060: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337064: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80337068: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033706C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337074: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x80337078: jal         0x8001C0EC
    // 0x8033707C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033707C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80337080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337088: jal         0x8001BBDC
    // 0x8033708C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033708C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80337090:
    // 0x80337090: jal         0x80334D5C
    // 0x80337094: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80337094: nop

    after_2:
    // 0x80337098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033709C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803370A0: jal         0x8001B4AC
    // 0x803370A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803370A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803370A8: beq         $v0, $zero, L_803370C8
    if (ctx->r2 == 0) {
        // 0x803370AC: nop
    
            goto L_803370C8;
    }
    // 0x803370AC: nop

    // 0x803370B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803370B4: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x803370B8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803370BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803370C0: nop

    // 0x803370C4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803370C8:
    // 0x803370C8: b           L_803370D0
    // 0x803370CC: nop

        goto L_803370D0;
    // 0x803370CC: nop

L_803370D0:
    // 0x803370D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803370D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803370D8: jr          $ra
    // 0x803370DC: nop

    return;
    // 0x803370DC: nop

;}
RECOMP_FUNC void func_8033A480_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A480: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A484: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A488: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A48C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A490: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A494: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A498: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A49C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A4A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A4A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A4A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A4AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A4B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A4B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A4B8: nop

    // 0x8033A4BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A4C0: nop

    // 0x8033A4C4: bne         $t1, $zero, L_8033A51C
    if (ctx->r9 != 0) {
        // 0x8033A4C8: nop
    
            goto L_8033A51C;
    }
    // 0x8033A4C8: nop

    // 0x8033A4CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A4D0: nop

    // 0x8033A4D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A4D8: nop

    // 0x8033A4DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A4E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A4E4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A4E8: nop

    // 0x8033A4EC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A4F0: nop

    // 0x8033A4F4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A4F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A4FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A500: addiu       $t7, $t7, -0x3E2C
    ctx->r15 = ADD32(ctx->r15, -0X3E2C);
    // 0x8033A504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A508: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A50C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A510: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8033A514: jal         0x8001C0EC
    // 0x8033A518: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A518: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    after_0:
L_8033A51C:
    // 0x8033A51C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A520: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A524: jal         0x8001B4AC
    // 0x8033A528: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A528: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A52C: beq         $v0, $zero, L_8033A54C
    if (ctx->r2 == 0) {
        // 0x8033A530: nop
    
            goto L_8033A54C;
    }
    // 0x8033A530: nop

    // 0x8033A534: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033A538: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x8033A53C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033A540: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A544: nop

    // 0x8033A548: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033A54C:
    // 0x8033A54C: b           L_8033A554
    // 0x8033A550: nop

        goto L_8033A554;
    // 0x8033A550: nop

L_8033A554:
    // 0x8033A554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A558: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A55C: jr          $ra
    // 0x8033A560: nop

    return;
    // 0x8033A560: nop

;}
RECOMP_FUNC void func_8033A0F0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A0F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A0F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A0F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A0FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A100: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A104: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A108: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A10C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A110: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A114: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A118: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A11C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A120: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A124: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A128: nop

    // 0x8033A12C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A130: nop

    // 0x8033A134: bne         $t1, $zero, L_8033A18C
    if (ctx->r9 != 0) {
        // 0x8033A138: nop
    
            goto L_8033A18C;
    }
    // 0x8033A138: nop

    // 0x8033A13C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A140: nop

    // 0x8033A144: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A148: nop

    // 0x8033A14C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A150: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A154: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A158: nop

    // 0x8033A15C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A160: nop

    // 0x8033A164: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A16C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A170: addiu       $t7, $t7, -0x3E2C
    ctx->r15 = ADD32(ctx->r15, -0X3E2C);
    // 0x8033A174: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A178: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A17C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A184: jal         0x8001C0EC
    // 0x8033A188: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A188: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    after_0:
L_8033A18C:
    // 0x8033A18C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A190: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A194: jal         0x8001B4AC
    // 0x8033A198: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A198: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A19C: beq         $v0, $zero, L_8033A1BC
    if (ctx->r2 == 0) {
        // 0x8033A1A0: nop
    
            goto L_8033A1BC;
    }
    // 0x8033A1A0: nop

    // 0x8033A1A4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033A1A8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8033A1AC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033A1B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A1B4: nop

    // 0x8033A1B8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033A1BC:
    // 0x8033A1BC: b           L_8033A1C4
    // 0x8033A1C0: nop

        goto L_8033A1C4;
    // 0x8033A1C0: nop

L_8033A1C4:
    // 0x8033A1C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A1C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A1CC: jr          $ra
    // 0x8033A1D0: nop

    return;
    // 0x8033A1D0: nop

;}
RECOMP_FUNC void func_80337820_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337820: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337824: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337828: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033782C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337830: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337834: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337838: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033783C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337840: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337844: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337848: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033784C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337850: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337854: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337858: nop

    // 0x8033785C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337860: nop

    // 0x80337864: bne         $t1, $zero, L_803378CC
    if (ctx->r9 != 0) {
        // 0x80337868: nop
    
            goto L_803378CC;
    }
    // 0x80337868: nop

    // 0x8033786C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337870: nop

    // 0x80337874: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337878: nop

    // 0x8033787C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337880: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337884: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337888: nop

    // 0x8033788C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337890: nop

    // 0x80337894: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337898: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033789C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803378A0: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803378A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803378A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803378AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803378B0: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x803378B4: jal         0x8001C0EC
    // 0x803378B8: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803378B8: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803378BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803378C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803378C4: jal         0x8001BBDC
    // 0x803378C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803378C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803378CC:
    // 0x803378CC: jal         0x80334D5C
    // 0x803378D0: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803378D0: nop

    after_2:
    // 0x803378D4: b           L_803378DC
    // 0x803378D8: nop

        goto L_803378DC;
    // 0x803378D8: nop

L_803378DC:
    // 0x803378DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803378E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803378E4: jr          $ra
    // 0x803378E8: nop

    return;
    // 0x803378E8: nop

;}
RECOMP_FUNC void func_80338E3C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338E3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338E40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338E44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338E48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338E4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338E50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338E54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338E58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338E5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338E60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338E64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338E68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338E6C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338E70: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338E74: nop

    // 0x80338E78: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338E7C: nop

    // 0x80338E80: bne         $t1, $zero, L_80338ED8
    if (ctx->r9 != 0) {
        // 0x80338E84: nop
    
            goto L_80338ED8;
    }
    // 0x80338E84: nop

    // 0x80338E88: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338E8C: nop

    // 0x80338E90: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338E94: nop

    // 0x80338E98: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338E9C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338EA0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338EA4: nop

    // 0x80338EA8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338EAC: nop

    // 0x80338EB0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338EB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338EB8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338EBC: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x80338EC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338EC4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338EC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338ECC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80338ED0: jal         0x8001C0EC
    // 0x80338ED4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338ED4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_80338ED8:
    // 0x80338ED8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338EDC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338EE0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338EE4: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80338EE8: jal         0x80015538
    // 0x80338EEC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80338EEC: nop

    after_1:
    // 0x80338EF0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338EF4: nop

    // 0x80338EF8: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80338EFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338F00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338F04: jal         0x8001B4AC
    // 0x80338F08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80338F08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80338F0C: beq         $v0, $zero, L_80338F2C
    if (ctx->r2 == 0) {
        // 0x80338F10: nop
    
            goto L_80338F2C;
    }
    // 0x80338F10: nop

    // 0x80338F14: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338F18: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80338F1C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80338F20: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338F24: nop

    // 0x80338F28: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80338F2C:
    // 0x80338F2C: b           L_80338F34
    // 0x80338F30: nop

        goto L_80338F34;
    // 0x80338F30: nop

L_80338F34:
    // 0x80338F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338F38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338F3C: jr          $ra
    // 0x80338F40: nop

    return;
    // 0x80338F40: nop

;}
RECOMP_FUNC void func_803343FC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803343FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334400: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334404: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334408: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033440C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334410: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334414: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334418: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033441C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334420: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334424: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334428: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033442C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334430: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334434: nop

    // 0x80334438: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033443C: nop

    // 0x80334440: bne         $t1, $zero, L_803344F0
    if (ctx->r9 != 0) {
        // 0x80334444: nop
    
            goto L_803344F0;
    }
    // 0x80334444: nop

    // 0x80334448: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033444C: nop

    // 0x80334450: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334454: nop

    // 0x80334458: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033445C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334460: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334464: nop

    // 0x80334468: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033446C: nop

    // 0x80334470: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334474: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334478: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033447C: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80334480: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334484: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033448C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80334490: jal         0x8001C0EC
    // 0x80334494: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334494: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80334498: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033449C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803344A0: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x803344A4: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x803344A8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803344AC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803344B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803344B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803344B8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803344BC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803344C0: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x803344C4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803344C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803344CC: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x803344D0: nop

    // 0x803344D4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803344D8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803344DC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803344E0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803344E4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803344E8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803344EC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803344F0:
    // 0x803344F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803344F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803344F8: lh          $t5, 0x108($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X108);
    // 0x803344FC: nop

    // 0x80334500: bne         $t5, $at, L_80334514
    if (ctx->r13 != ctx->r1) {
        // 0x80334504: nop
    
            goto L_80334514;
    }
    // 0x80334504: nop

    // 0x80334508: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033450C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80334510: sh          $t7, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r15;
L_80334514:
    // 0x80334514: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334518: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033451C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334520: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334524: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80334528: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8033452C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334530: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334534: jal         0x800295C0
    // 0x80334538: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x80334538: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8033453C: beq         $v0, $zero, L_80334554
    if (ctx->r2 == 0) {
        // 0x80334540: nop
    
            goto L_80334554;
    }
    // 0x80334540: nop

    // 0x80334544: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80334548: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033454C: b           L_80334564
    // 0x80334550: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
        goto L_80334564;
    // 0x80334550: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_80334554:
    // 0x80334554: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80334558: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033455C: nop

    // 0x80334560: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_80334564:
    // 0x80334564: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334568: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033456C: jal         0x8001B44C
    // 0x80334570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80334570: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334574: beq         $v0, $zero, L_80334594
    if (ctx->r2 == 0) {
        // 0x80334578: nop
    
            goto L_80334594;
    }
    // 0x80334578: nop

    // 0x8033457C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334580: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x80334584: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80334588: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033458C: nop

    // 0x80334590: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80334594:
    // 0x80334594: b           L_8033459C
    // 0x80334598: nop

        goto L_8033459C;
    // 0x80334598: nop

L_8033459C:
    // 0x8033459C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803345A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803345A4: jr          $ra
    // 0x803345A8: nop

    return;
    // 0x803345A8: nop

;}
RECOMP_FUNC void func_803383E0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803383E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803383E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803383E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803383EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803383F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803383F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803383F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803383FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338404: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338408: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033840C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338410: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338414: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338418: nop

    // 0x8033841C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338420: nop

    // 0x80338424: bne         $t1, $zero, L_8033847C
    if (ctx->r9 != 0) {
        // 0x80338428: nop
    
            goto L_8033847C;
    }
    // 0x80338428: nop

    // 0x8033842C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338430: nop

    // 0x80338434: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338438: nop

    // 0x8033843C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338440: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338444: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338448: nop

    // 0x8033844C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338450: nop

    // 0x80338454: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338458: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033845C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338460: addiu       $t7, $t7, -0x4288
    ctx->r15 = ADD32(ctx->r15, -0X4288);
    // 0x80338464: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338468: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033846C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338470: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80338474: jal         0x8001C0EC
    // 0x80338478: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338478: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    after_0:
L_8033847C:
    // 0x8033847C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338480: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338484: jal         0x8001B4AC
    // 0x80338488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80338488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033848C: beq         $v0, $zero, L_803384AC
    if (ctx->r2 == 0) {
        // 0x80338490: nop
    
            goto L_803384AC;
    }
    // 0x80338490: nop

    // 0x80338494: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338498: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x8033849C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803384A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803384A4: nop

    // 0x803384A8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803384AC:
    // 0x803384AC: b           L_803384B4
    // 0x803384B0: nop

        goto L_803384B4;
    // 0x803384B0: nop

L_803384B4:
    // 0x803384B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803384B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803384BC: jr          $ra
    // 0x803384C0: nop

    return;
    // 0x803384C0: nop

;}
RECOMP_FUNC void func_8033A738_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A738: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033A73C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A740: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033A744: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A748: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A74C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A750: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A754: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A758: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A75C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A760: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A764: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A768: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A76C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033A770: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A774: nop

    // 0x8033A778: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033A77C: nop

    // 0x8033A780: bne         $t1, $zero, L_8033A9FC
    if (ctx->r9 != 0) {
        // 0x8033A784: nop
    
            goto L_8033A9FC;
    }
    // 0x8033A784: nop

    // 0x8033A788: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A78C: nop

    // 0x8033A790: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A794: nop

    // 0x8033A798: bne         $t3, $zero, L_8033A9DC
    if (ctx->r11 != 0) {
        // 0x8033A79C: nop
    
            goto L_8033A9DC;
    }
    // 0x8033A79C: nop

    // 0x8033A7A0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A7A4: nop

    // 0x8033A7A8: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x8033A7AC: nop

    // 0x8033A7B0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8033A7B4: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x8033A7B8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A7BC: nop

    // 0x8033A7C0: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x8033A7C4: nop

    // 0x8033A7C8: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x8033A7CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A7D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A7D4: jal         0x8001BB34
    // 0x8033A7D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033A7D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033A7DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A7E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A7E4: jal         0x8001BBDC
    // 0x8033A7E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033A7E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8033A7EC: jal         0x80014E80
    // 0x8033A7F0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x8033A7F0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x8033A7F4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8033A7F8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8033A7FC: nop

    // 0x8033A800: beq         $s0, $zero, L_8033A834
    if (ctx->r16 == 0) {
        // 0x8033A804: nop
    
            goto L_8033A834;
    }
    // 0x8033A804: nop

    // 0x8033A808: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A80C: beq         $s0, $at, L_8033A888
    if (ctx->r16 == ctx->r1) {
        // 0x8033A810: nop
    
            goto L_8033A888;
    }
    // 0x8033A810: nop

    // 0x8033A814: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033A818: beq         $s0, $at, L_8033A8D8
    if (ctx->r16 == ctx->r1) {
        // 0x8033A81C: nop
    
            goto L_8033A8D8;
    }
    // 0x8033A81C: nop

    // 0x8033A820: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033A824: beq         $s0, $at, L_8033A928
    if (ctx->r16 == ctx->r1) {
        // 0x8033A828: nop
    
            goto L_8033A928;
    }
    // 0x8033A828: nop

    // 0x8033A82C: b           L_8033A978
    // 0x8033A830: nop

        goto L_8033A978;
    // 0x8033A830: nop

L_8033A834:
    // 0x8033A834: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A838: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A83C: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A840: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A844: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033A848: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A84C: jal         0x8001ABF4
    // 0x8033A850: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8033A850: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8033A854: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A858: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A85C: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A860: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A864: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x8033A868: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A86C: jal         0x8001ABF4
    // 0x8033A870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x8033A870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8033A874: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A878: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x8033A87C: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x8033A880: b           L_8033A9D4
    // 0x8033A884: nop

        goto L_8033A9D4;
    // 0x8033A884: nop

L_8033A888:
    // 0x8033A888: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A88C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A890: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A894: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A89C: jal         0x8001ABF4
    // 0x8033A8A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x8033A8A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8033A8A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A8A8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A8AC: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A8B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A8B4: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8033A8B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A8BC: jal         0x8001ABF4
    // 0x8033A8C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x8033A8C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8033A8C4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A8C8: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x8033A8CC: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x8033A8D0: b           L_8033A9D4
    // 0x8033A8D4: nop

        goto L_8033A9D4;
    // 0x8033A8D4: nop

L_8033A8D8:
    // 0x8033A8D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A8DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A8E0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A8E4: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A8E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A8EC: jal         0x8001ABF4
    // 0x8033A8F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x8033A8F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8033A8F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A8F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A8FC: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A900: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A904: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8033A908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A90C: jal         0x8001ABF4
    // 0x8033A910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x8033A910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8033A914: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A918: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x8033A91C: sh          $t3, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r11;
    // 0x8033A920: b           L_8033A9D4
    // 0x8033A924: nop

        goto L_8033A9D4;
    // 0x8033A924: nop

L_8033A928:
    // 0x8033A928: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A92C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A930: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A934: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A93C: jal         0x8001ABF4
    // 0x8033A940: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x8033A940: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x8033A944: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A948: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A94C: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A950: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A954: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x8033A958: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A95C: jal         0x8001ABF4
    // 0x8033A960: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x8033A960: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x8033A964: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A968: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x8033A96C: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
    // 0x8033A970: b           L_8033A9D4
    // 0x8033A974: nop

        goto L_8033A9D4;
    // 0x8033A974: nop

L_8033A978:
    // 0x8033A978: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A97C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A980: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A984: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A988: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033A98C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A990: jal         0x8001ABF4
    // 0x8033A994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x8033A994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x8033A998: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A99C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A9A0: addiu       $a3, $a3, -0x3D68
    ctx->r7 = ADD32(ctx->r7, -0X3D68);
    // 0x8033A9A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A9A8: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x8033A9AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A9B0: jal         0x8001ABF4
    // 0x8033A9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_12;
    // 0x8033A9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x8033A9B8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A9BC: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x8033A9C0: sh          $t8, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r24;
    // 0x8033A9C4: b           L_8033A9D4
    // 0x8033A9C8: nop

        goto L_8033A9D4;
    // 0x8033A9C8: nop

    // 0x8033A9CC: b           L_8033A9D4
    // 0x8033A9D0: nop

        goto L_8033A9D4;
    // 0x8033A9D0: nop

L_8033A9D4:
    // 0x8033A9D4: b           L_8033A9F4
    // 0x8033A9D8: nop

        goto L_8033A9F4;
    // 0x8033A9D8: nop

L_8033A9DC:
    // 0x8033A9DC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A9E0: nop

    // 0x8033A9E4: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x8033A9E8: nop

    // 0x8033A9EC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8033A9F0: sb          $t1, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r9;
L_8033A9F4:
    // 0x8033A9F4: b           L_8033AA74
    // 0x8033A9F8: nop

        goto L_8033AA74;
    // 0x8033A9F8: nop

L_8033A9FC:
    // 0x8033A9FC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AA00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033AA04: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x8033AA08: nop

    // 0x8033AA0C: bne         $t3, $at, L_8033AA5C
    if (ctx->r11 != ctx->r1) {
        // 0x8033AA10: nop
    
            goto L_8033AA5C;
    }
    // 0x8033AA10: nop

    // 0x8033AA14: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AA18: nop

    // 0x8033AA1C: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x8033AA20: jal         0x80014E80
    // 0x8033AA24: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    Math_Random(rdram, ctx);
        goto after_13;
    // 0x8033AA24: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    after_13:
    // 0x8033AA28: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AA2C: addiu       $t6, $v0, 0x1E
    ctx->r14 = ADD32(ctx->r2, 0X1E);
    // 0x8033AA30: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x8033AA34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AA38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA3C: jal         0x8001BBDC
    // 0x8033AA40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_14;
    // 0x8033AA40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x8033AA44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AA48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA4C: jal         0x8001BB34
    // 0x8033AA50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_15;
    // 0x8033AA50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x8033AA54: b           L_8033AA74
    // 0x8033AA58: nop

        goto L_8033AA74;
    // 0x8033AA58: nop

L_8033AA5C:
    // 0x8033AA5C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AA60: nop

    // 0x8033AA64: lh          $t7, 0xA6($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XA6);
    // 0x8033AA68: nop

    // 0x8033AA6C: addiu       $t0, $t7, -0x1
    ctx->r8 = ADD32(ctx->r15, -0X1);
    // 0x8033AA70: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_8033AA74:
    // 0x8033AA74: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AA78: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033AA7C: lwc1        $f14, -0x511C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X511C);
    // 0x8033AA80: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033AA84: jal         0x80015538
    // 0x8033AA88: nop

    Math_WrapAngle(rdram, ctx);
        goto after_16;
    // 0x8033AA88: nop

    after_16:
    // 0x8033AA8C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AA90: nop

    // 0x8033AA94: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x8033AA98: b           L_8033AAA0
    // 0x8033AA9C: nop

        goto L_8033AAA0;
    // 0x8033AA9C: nop

L_8033AAA0:
    // 0x8033AAA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AAA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033AAA8: jr          $ra
    // 0x8033AAAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033AAAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803378EC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803378EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803378F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803378F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803378F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803378FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337900: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337904: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337908: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033790C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337910: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337914: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337918: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033791C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337920: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337924: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337928: nop

    // 0x8033792C: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80337930: nop

    // 0x80337934: beq         $t1, $zero, L_80337964
    if (ctx->r9 == 0) {
        // 0x80337938: nop
    
            goto L_80337964;
    }
    // 0x80337938: nop

    // 0x8033793C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337940: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337944: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x80337948: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033794C: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80337950: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80337954: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80337958: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x8033795C: jal         0x8001BB34
    // 0x80337960: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80337960: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
L_80337964:
    // 0x80337964: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337968: nop

    // 0x8033796C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337970: nop

    // 0x80337974: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80337978: sltiu       $at, $t7, 0x28
    ctx->r1 = ctx->r15 < 0X28 ? 1 : 0;
    // 0x8033797C: beq         $at, $zero, L_80337C20
    if (ctx->r1 == 0) {
        // 0x80337980: nop
    
            goto L_80337C20;
    }
    // 0x80337980: nop

    // 0x80337984: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337988: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033798C: addu        $at, $at, $t7
    gpr jr_addend_80337998 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80337990: lw          $t7, -0x5234($at)
    ctx->r15 = ADD32(ctx->r1, -0X5234);
    // 0x80337994: nop

    // 0x80337998: jr          $t7
    // 0x8033799C: nop

    switch (jr_addend_80337998 >> 2) {
        case 0: goto L_803379A0; break;
        case 1: goto L_803379B0; break;
        case 2: goto L_803379C0; break;
        case 3: goto L_803379D0; break;
        case 4: goto L_803379E0; break;
        case 5: goto L_803379F0; break;
        case 6: goto L_80337A00; break;
        case 7: goto L_80337A10; break;
        case 8: goto L_80337A20; break;
        case 9: goto L_80337A30; break;
        case 10: goto L_80337A40; break;
        case 11: goto L_80337A50; break;
        case 12: goto L_80337A60; break;
        case 13: goto L_80337A70; break;
        case 14: goto L_80337A80; break;
        case 15: goto L_80337A90; break;
        case 16: goto L_80337AA0; break;
        case 17: goto L_80337AB0; break;
        case 18: goto L_80337AC0; break;
        case 19: goto L_80337AD0; break;
        case 20: goto L_80337AE0; break;
        case 21: goto L_80337AF0; break;
        case 22: goto L_80337B00; break;
        case 23: goto L_80337B10; break;
        case 24: goto L_80337B20; break;
        case 25: goto L_80337B30; break;
        case 26: goto L_80337B40; break;
        case 27: goto L_80337B50; break;
        case 28: goto L_80337B60; break;
        case 29: goto L_80337B70; break;
        case 30: goto L_80337B80; break;
        case 31: goto L_80337B90; break;
        case 32: goto L_80337BA0; break;
        case 33: goto L_80337BB0; break;
        case 34: goto L_80337BC0; break;
        case 35: goto L_80337BD0; break;
        case 36: goto L_80337BE0; break;
        case 37: goto L_80337BF0; break;
        case 38: goto L_80337C00; break;
        case 39: goto L_80337C10; break;
        default: switch_error(__func__, 0x80337998, 0x8033ADCC);
    }
    // 0x8033799C: nop

L_803379A0:
    // 0x803379A0: jal         0x80334EEC
    // 0x803379A4: nop

    func_80334EEC_unk_bin_25(rdram, ctx);
        goto after_1;
    // 0x803379A4: nop

    after_1:
    // 0x803379A8: b           L_80337C28
    // 0x803379AC: nop

        goto L_80337C28;
    // 0x803379AC: nop

L_803379B0:
    // 0x803379B0: jal         0x80335044
    // 0x803379B4: nop

    func_80335044_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803379B4: nop

    after_2:
    // 0x803379B8: b           L_80337C28
    // 0x803379BC: nop

        goto L_80337C28;
    // 0x803379BC: nop

L_803379C0:
    // 0x803379C0: jal         0x80335140
    // 0x803379C4: nop

    func_80335140_unk_bin_25(rdram, ctx);
        goto after_3;
    // 0x803379C4: nop

    after_3:
    // 0x803379C8: b           L_80337C28
    // 0x803379CC: nop

        goto L_80337C28;
    // 0x803379CC: nop

L_803379D0:
    // 0x803379D0: jal         0x8033523C
    // 0x803379D4: nop

    func_8033523C_unk_bin_25(rdram, ctx);
        goto after_4;
    // 0x803379D4: nop

    after_4:
    // 0x803379D8: b           L_80337C28
    // 0x803379DC: nop

        goto L_80337C28;
    // 0x803379DC: nop

L_803379E0:
    // 0x803379E0: jal         0x80335394
    // 0x803379E4: nop

    func_80335394_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x803379E4: nop

    after_5:
    // 0x803379E8: b           L_80337C28
    // 0x803379EC: nop

        goto L_80337C28;
    // 0x803379EC: nop

L_803379F0:
    // 0x803379F0: jal         0x80335490
    // 0x803379F4: nop

    func_80335490_unk_bin_25(rdram, ctx);
        goto after_6;
    // 0x803379F4: nop

    after_6:
    // 0x803379F8: b           L_80337C28
    // 0x803379FC: nop

        goto L_80337C28;
    // 0x803379FC: nop

L_80337A00:
    // 0x80337A00: jal         0x8033558C
    // 0x80337A04: nop

    func_8033558C_unk_bin_25(rdram, ctx);
        goto after_7;
    // 0x80337A04: nop

    after_7:
    // 0x80337A08: b           L_80337C28
    // 0x80337A0C: nop

        goto L_80337C28;
    // 0x80337A0C: nop

L_80337A10:
    // 0x80337A10: jal         0x803356E4
    // 0x80337A14: nop

    func_803356E4_unk_bin_25(rdram, ctx);
        goto after_8;
    // 0x80337A14: nop

    after_8:
    // 0x80337A18: b           L_80337C28
    // 0x80337A1C: nop

        goto L_80337C28;
    // 0x80337A1C: nop

L_80337A20:
    // 0x80337A20: jal         0x803357E0
    // 0x80337A24: nop

    func_803357E0_unk_bin_25(rdram, ctx);
        goto after_9;
    // 0x80337A24: nop

    after_9:
    // 0x80337A28: b           L_80337C28
    // 0x80337A2C: nop

        goto L_80337C28;
    // 0x80337A2C: nop

L_80337A30:
    // 0x80337A30: jal         0x803358DC
    // 0x80337A34: nop

    func_803358DC_unk_bin_25(rdram, ctx);
        goto after_10;
    // 0x80337A34: nop

    after_10:
    // 0x80337A38: b           L_80337C28
    // 0x80337A3C: nop

        goto L_80337C28;
    // 0x80337A3C: nop

L_80337A40:
    // 0x80337A40: jal         0x803359D8
    // 0x80337A44: nop

    func_803359D8_unk_bin_25(rdram, ctx);
        goto after_11;
    // 0x80337A44: nop

    after_11:
    // 0x80337A48: b           L_80337C28
    // 0x80337A4C: nop

        goto L_80337C28;
    // 0x80337A4C: nop

L_80337A50:
    // 0x80337A50: jal         0x80335ACC
    // 0x80337A54: nop

    func_80335ACC_unk_bin_25(rdram, ctx);
        goto after_12;
    // 0x80337A54: nop

    after_12:
    // 0x80337A58: b           L_80337C28
    // 0x80337A5C: nop

        goto L_80337C28;
    // 0x80337A5C: nop

L_80337A60:
    // 0x80337A60: jal         0x80335BC8
    // 0x80337A64: nop

    func_80335BC8_unk_bin_25(rdram, ctx);
        goto after_13;
    // 0x80337A64: nop

    after_13:
    // 0x80337A68: b           L_80337C28
    // 0x80337A6C: nop

        goto L_80337C28;
    // 0x80337A6C: nop

L_80337A70:
    // 0x80337A70: jal         0x80335C94
    // 0x80337A74: nop

    func_80335C94_unk_bin_25(rdram, ctx);
        goto after_14;
    // 0x80337A74: nop

    after_14:
    // 0x80337A78: b           L_80337C28
    // 0x80337A7C: nop

        goto L_80337C28;
    // 0x80337A7C: nop

L_80337A80:
    // 0x80337A80: jal         0x80335DEC
    // 0x80337A84: nop

    func_80335DEC_unk_bin_25(rdram, ctx);
        goto after_15;
    // 0x80337A84: nop

    after_15:
    // 0x80337A88: b           L_80337C28
    // 0x80337A8C: nop

        goto L_80337C28;
    // 0x80337A8C: nop

L_80337A90:
    // 0x80337A90: jal         0x80335EE8
    // 0x80337A94: nop

    func_80335EE8_unk_bin_25(rdram, ctx);
        goto after_16;
    // 0x80337A94: nop

    after_16:
    // 0x80337A98: b           L_80337C28
    // 0x80337A9C: nop

        goto L_80337C28;
    // 0x80337A9C: nop

L_80337AA0:
    // 0x80337AA0: jal         0x80335FE4
    // 0x80337AA4: nop

    func_80335FE4_unk_bin_25(rdram, ctx);
        goto after_17;
    // 0x80337AA4: nop

    after_17:
    // 0x80337AA8: b           L_80337C28
    // 0x80337AAC: nop

        goto L_80337C28;
    // 0x80337AAC: nop

L_80337AB0:
    // 0x80337AB0: jal         0x803360E0
    // 0x80337AB4: nop

    func_803360E0_unk_bin_25(rdram, ctx);
        goto after_18;
    // 0x80337AB4: nop

    after_18:
    // 0x80337AB8: b           L_80337C28
    // 0x80337ABC: nop

        goto L_80337C28;
    // 0x80337ABC: nop

L_80337AC0:
    // 0x80337AC0: jal         0x803361DC
    // 0x80337AC4: nop

    func_803361DC_unk_bin_25(rdram, ctx);
        goto after_19;
    // 0x80337AC4: nop

    after_19:
    // 0x80337AC8: b           L_80337C28
    // 0x80337ACC: nop

        goto L_80337C28;
    // 0x80337ACC: nop

L_80337AD0:
    // 0x80337AD0: jal         0x803362A8
    // 0x80337AD4: nop

    func_803362A8_unk_bin_25(rdram, ctx);
        goto after_20;
    // 0x80337AD4: nop

    after_20:
    // 0x80337AD8: b           L_80337C28
    // 0x80337ADC: nop

        goto L_80337C28;
    // 0x80337ADC: nop

L_80337AE0:
    // 0x80337AE0: jal         0x80336400
    // 0x80337AE4: nop

    func_80336400_unk_bin_25(rdram, ctx);
        goto after_21;
    // 0x80337AE4: nop

    after_21:
    // 0x80337AE8: b           L_80337C28
    // 0x80337AEC: nop

        goto L_80337C28;
    // 0x80337AEC: nop

L_80337AF0:
    // 0x80337AF0: jal         0x803364FC
    // 0x80337AF4: nop

    func_803364FC_unk_bin_25(rdram, ctx);
        goto after_22;
    // 0x80337AF4: nop

    after_22:
    // 0x80337AF8: b           L_80337C28
    // 0x80337AFC: nop

        goto L_80337C28;
    // 0x80337AFC: nop

L_80337B00:
    // 0x80337B00: jal         0x803365C8
    // 0x80337B04: nop

    func_803365C8_unk_bin_25(rdram, ctx);
        goto after_23;
    // 0x80337B04: nop

    after_23:
    // 0x80337B08: b           L_80337C28
    // 0x80337B0C: nop

        goto L_80337C28;
    // 0x80337B0C: nop

L_80337B10:
    // 0x80337B10: jal         0x803366F0
    // 0x80337B14: nop

    func_803366F0_unk_bin_25(rdram, ctx);
        goto after_24;
    // 0x80337B14: nop

    after_24:
    // 0x80337B18: b           L_80337C28
    // 0x80337B1C: nop

        goto L_80337C28;
    // 0x80337B1C: nop

L_80337B20:
    // 0x80337B20: jal         0x80336848
    // 0x80337B24: nop

    func_80336848_unk_bin_25(rdram, ctx);
        goto after_25;
    // 0x80337B24: nop

    after_25:
    // 0x80337B28: b           L_80337C28
    // 0x80337B2C: nop

        goto L_80337C28;
    // 0x80337B2C: nop

L_80337B30:
    // 0x80337B30: jal         0x80336944
    // 0x80337B34: nop

    func_80336944_unk_bin_25(rdram, ctx);
        goto after_26;
    // 0x80337B34: nop

    after_26:
    // 0x80337B38: b           L_80337C28
    // 0x80337B3C: nop

        goto L_80337C28;
    // 0x80337B3C: nop

L_80337B40:
    // 0x80337B40: jal         0x80336A10
    // 0x80337B44: nop

    func_80336A10_unk_bin_25(rdram, ctx);
        goto after_27;
    // 0x80337B44: nop

    after_27:
    // 0x80337B48: b           L_80337C28
    // 0x80337B4C: nop

        goto L_80337C28;
    // 0x80337B4C: nop

L_80337B50:
    // 0x80337B50: jal         0x80336B64
    // 0x80337B54: nop

    func_80336B64_unk_bin_25(rdram, ctx);
        goto after_28;
    // 0x80337B54: nop

    after_28:
    // 0x80337B58: b           L_80337C28
    // 0x80337B5C: nop

        goto L_80337C28;
    // 0x80337B5C: nop

L_80337B60:
    // 0x80337B60: jal         0x80336C90
    // 0x80337B64: nop

    func_80336C90_unk_bin_25(rdram, ctx);
        goto after_29;
    // 0x80337B64: nop

    after_29:
    // 0x80337B68: b           L_80337C28
    // 0x80337B6C: nop

        goto L_80337C28;
    // 0x80337B6C: nop

L_80337B70:
    // 0x80337B70: jal         0x80336DEC
    // 0x80337B74: nop

    func_80336DEC_unk_bin_25(rdram, ctx);
        goto after_30;
    // 0x80337B74: nop

    after_30:
    // 0x80337B78: b           L_80337C28
    // 0x80337B7C: nop

        goto L_80337C28;
    // 0x80337B7C: nop

L_80337B80:
    // 0x80337B80: jal         0x80336EE8
    // 0x80337B84: nop

    func_80336EE8_unk_bin_25(rdram, ctx);
        goto after_31;
    // 0x80337B84: nop

    after_31:
    // 0x80337B88: b           L_80337C28
    // 0x80337B8C: nop

        goto L_80337C28;
    // 0x80337B8C: nop

L_80337B90:
    // 0x80337B90: jal         0x80336FE4
    // 0x80337B94: nop

    func_80336FE4_unk_bin_25(rdram, ctx);
        goto after_32;
    // 0x80337B94: nop

    after_32:
    // 0x80337B98: b           L_80337C28
    // 0x80337B9C: nop

        goto L_80337C28;
    // 0x80337B9C: nop

L_80337BA0:
    // 0x80337BA0: jal         0x803370E0
    // 0x80337BA4: nop

    func_803370E0_unk_bin_25(rdram, ctx);
        goto after_33;
    // 0x80337BA4: nop

    after_33:
    // 0x80337BA8: b           L_80337C28
    // 0x80337BAC: nop

        goto L_80337C28;
    // 0x80337BAC: nop

L_80337BB0:
    // 0x80337BB0: jal         0x803371AC
    // 0x80337BB4: nop

    func_803371AC_unk_bin_25(rdram, ctx);
        goto after_34;
    // 0x80337BB4: nop

    after_34:
    // 0x80337BB8: b           L_80337C28
    // 0x80337BBC: nop

        goto L_80337C28;
    // 0x80337BBC: nop

L_80337BC0:
    // 0x80337BC0: jal         0x803372D8
    // 0x80337BC4: nop

    func_803372D8_unk_bin_25(rdram, ctx);
        goto after_35;
    // 0x80337BC4: nop

    after_35:
    // 0x80337BC8: b           L_80337C28
    // 0x80337BCC: nop

        goto L_80337C28;
    // 0x80337BCC: nop

L_80337BD0:
    // 0x80337BD0: jal         0x80337430
    // 0x80337BD4: nop

    func_80337430_unk_bin_25(rdram, ctx);
        goto after_36;
    // 0x80337BD4: nop

    after_36:
    // 0x80337BD8: b           L_80337C28
    // 0x80337BDC: nop

        goto L_80337C28;
    // 0x80337BDC: nop

L_80337BE0:
    // 0x80337BE0: jal         0x8033752C
    // 0x80337BE4: nop

    func_8033752C_unk_bin_25(rdram, ctx);
        goto after_37;
    // 0x80337BE4: nop

    after_37:
    // 0x80337BE8: b           L_80337C28
    // 0x80337BEC: nop

        goto L_80337C28;
    // 0x80337BEC: nop

L_80337BF0:
    // 0x80337BF0: jal         0x80337628
    // 0x80337BF4: nop

    func_80337628_unk_bin_25(rdram, ctx);
        goto after_38;
    // 0x80337BF4: nop

    after_38:
    // 0x80337BF8: b           L_80337C28
    // 0x80337BFC: nop

        goto L_80337C28;
    // 0x80337BFC: nop

L_80337C00:
    // 0x80337C00: jal         0x80337724
    // 0x80337C04: nop

    func_80337724_unk_bin_25(rdram, ctx);
        goto after_39;
    // 0x80337C04: nop

    after_39:
    // 0x80337C08: b           L_80337C28
    // 0x80337C0C: nop

        goto L_80337C28;
    // 0x80337C0C: nop

L_80337C10:
    // 0x80337C10: jal         0x80337820
    // 0x80337C14: nop

    func_80337820_unk_bin_25(rdram, ctx);
        goto after_40;
    // 0x80337C14: nop

    after_40:
    // 0x80337C18: b           L_80337C28
    // 0x80337C1C: nop

        goto L_80337C28;
    // 0x80337C1C: nop

L_80337C20:
    // 0x80337C20: b           L_80337C28
    // 0x80337C24: nop

        goto L_80337C28;
    // 0x80337C24: nop

L_80337C28:
    // 0x80337C28: b           L_80337C30
    // 0x80337C2C: nop

        goto L_80337C30;
    // 0x80337C2C: nop

L_80337C30:
    // 0x80337C30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337C34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80337C38: jr          $ra
    // 0x80337C3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80337C3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803356E4_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803356E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803356E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803356EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803356F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803356F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803356F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803356FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335700: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335704: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335708: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033570C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335710: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335714: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335718: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033571C: nop

    // 0x80335720: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335724: nop

    // 0x80335728: bne         $t1, $zero, L_80335790
    if (ctx->r9 != 0) {
        // 0x8033572C: nop
    
            goto L_80335790;
    }
    // 0x8033572C: nop

    // 0x80335730: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335734: nop

    // 0x80335738: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033573C: nop

    // 0x80335740: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335744: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335748: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033574C: nop

    // 0x80335750: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335754: nop

    // 0x80335758: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033575C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335760: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335764: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335768: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033576C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335774: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80335778: jal         0x8001C0EC
    // 0x8033577C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033577C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335780: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335784: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335788: jal         0x8001BBDC
    // 0x8033578C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033578C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80335790:
    // 0x80335790: jal         0x80334D5C
    // 0x80335794: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80335794: nop

    after_2:
    // 0x80335798: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033579C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803357A0: jal         0x8001B4AC
    // 0x803357A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803357A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803357A8: beq         $v0, $zero, L_803357C8
    if (ctx->r2 == 0) {
        // 0x803357AC: nop
    
            goto L_803357C8;
    }
    // 0x803357AC: nop

    // 0x803357B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803357B4: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803357B8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803357BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803357C0: nop

    // 0x803357C4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803357C8:
    // 0x803357C8: b           L_803357D0
    // 0x803357CC: nop

        goto L_803357D0;
    // 0x803357CC: nop

L_803357D0:
    // 0x803357D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803357D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803357D8: jr          $ra
    // 0x803357DC: nop

    return;
    // 0x803357DC: nop

;}
