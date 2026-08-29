#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8009A4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009A4DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009A4E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009A4E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009A4E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009A4EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009A4F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009A4F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A4F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009A4FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009A500: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009A504: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009A508: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009A50C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009A510: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8009A514: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8009A518: nop

    // 0x8009A51C: bne         $t0, $zero, L_8009A5C4
    if (ctx->r8 != 0) {
        // 0x8009A520: nop
    
            goto L_8009A5C4;
    }
    // 0x8009A520: nop

    // 0x8009A524: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009A528: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8009A52C: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x8009A530: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009A534: nop

    // 0x8009A538: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
    // 0x8009A53C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009A540: nop

    // 0x8009A544: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x8009A548: nop

    // 0x8009A54C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8009A550: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8009A554: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009A558: beq         $t6, $at, L_8009A57C
    if (ctx->r14 == ctx->r1) {
        // 0x8009A55C: nop
    
            goto L_8009A57C;
    }
    // 0x8009A55C: nop

    // 0x8009A560: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A568: jal         0x800281A4
    // 0x8009A56C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x8009A56C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8009A570: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009A574: jal         0x8002B0E4
    // 0x8009A578: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x8009A578: nop

    after_1:
L_8009A57C:
    // 0x8009A57C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8009A580: nop

    // 0x8009A584: lh          $t8, 0xEE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEE);
    // 0x8009A588: nop

    // 0x8009A58C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8009A590: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8009A594: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009A598: beq         $t9, $at, L_8009A5BC
    if (ctx->r25 == ctx->r1) {
        // 0x8009A59C: nop
    
            goto L_8009A5BC;
    }
    // 0x8009A59C: nop

    // 0x8009A5A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009A5A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009A5A8: jal         0x800281A4
    // 0x8009A5AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x8009A5AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8009A5B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8009A5B4: jal         0x8002B0E4
    // 0x8009A5B8: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x8009A5B8: nop

    after_3:
L_8009A5BC:
    // 0x8009A5BC: b           L_8009A65C
    // 0x8009A5C0: nop

        goto L_8009A65C;
    // 0x8009A5C0: nop

L_8009A5C4:
    // 0x8009A5C4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8009A5C8: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8009A5CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009A5D0: bne         $t0, $at, L_8009A65C
    if (ctx->r8 != ctx->r1) {
        // 0x8009A5D4: nop
    
            goto L_8009A65C;
    }
    // 0x8009A5D4: nop

    // 0x8009A5D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009A5DC: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x8009A5E0: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x8009A5E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8009A5E8:
    // 0x8009A5E8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8009A5EC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8009A5F0: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8009A5F4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8009A5F8: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x8009A5FC: nop

    // 0x8009A600: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8009A604: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8009A608: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009A60C: beq         $t8, $at, L_8009A63C
    if (ctx->r24 == ctx->r1) {
        // 0x8009A610: nop
    
            goto L_8009A63C;
    }
    // 0x8009A610: nop

    // 0x8009A614: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8009A618: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009A61C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009A620: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009A624: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009A628: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009A62C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009A630: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009A634: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8009A638: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
L_8009A63C:
    // 0x8009A63C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8009A640: nop

    // 0x8009A644: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x8009A648: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x8009A64C: bne         $at, $zero, L_8009A5E8
    if (ctx->r1 != 0) {
        // 0x8009A650: sw          $t4, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r12;
            goto L_8009A5E8;
    }
    // 0x8009A650: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8009A654: b           L_8009A65C
    // 0x8009A658: nop

        goto L_8009A65C;
    // 0x8009A658: nop

L_8009A65C:
    // 0x8009A65C: b           L_8009A664
    // 0x8009A660: nop

        goto L_8009A664;
    // 0x8009A660: nop

L_8009A664:
    // 0x8009A664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009A668: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009A66C: jr          $ra
    // 0x8009A670: nop

    return;
    // 0x8009A670: nop

;}
RECOMP_FUNC void func_8009D618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D618: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009D61C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D620: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009D624: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009D628: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009D62C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009D630: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009D634: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009D638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009D63C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009D640: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009D644: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009D648: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009D64C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009D650: nop

    // 0x8009D654: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009D658: nop

    // 0x8009D65C: bne         $t1, $zero, L_8009D6A0
    if (ctx->r9 != 0) {
        // 0x8009D660: nop
    
            goto L_8009D6A0;
    }
    // 0x8009D660: nop

    // 0x8009D664: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009D668: nop

    // 0x8009D66C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009D670: nop

    // 0x8009D674: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009D678: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009D67C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009D680: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8009D684: addiu       $t5, $t5, 0x6AF0
    ctx->r13 = ADD32(ctx->r13, 0X6AF0);
    // 0x8009D688: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009D68C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8009D690: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009D694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009D698: jal         0x8001C0EC
    // 0x8009D69C: addiu       $a3, $zero, 0x109
    ctx->r7 = ADD32(0, 0X109);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8009D69C: addiu       $a3, $zero, 0x109
    ctx->r7 = ADD32(0, 0X109);
    after_0:
L_8009D6A0:
    // 0x8009D6A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009D6A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009D6A8: jal         0x8001B62C
    // 0x8009D6AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x8009D6AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8009D6B0: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8009D6B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009D6B8: nop

    // 0x8009D6BC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8009D6C0: nop

    // 0x8009D6C4: bc1f        L_8009D71C
    if (!c1cs) {
        // 0x8009D6C8: nop
    
            goto L_8009D71C;
    }
    // 0x8009D6C8: nop

    // 0x8009D6CC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009D6D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009D6D4: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8009D6D8: nop

    // 0x8009D6DC: bne         $t7, $at, L_8009D71C
    if (ctx->r15 != ctx->r1) {
        // 0x8009D6E0: nop
    
            goto L_8009D71C;
    }
    // 0x8009D6E0: nop

    // 0x8009D6E4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8009D6E8: nop

    // 0x8009D6EC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8009D6F0: nop

    // 0x8009D6F4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009D6F8: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8009D6FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009D700: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009D704: addiu       $a3, $a3, 0x6AB8
    ctx->r7 = ADD32(ctx->r7, 0X6AB8);
    // 0x8009D708: lh          $a0, 0xA6($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XA6);
    // 0x8009D70C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8009D710: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D714: jal         0x8001ABF4
    // 0x8009D718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8009D718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8009D71C:
    // 0x8009D71C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009D720: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009D724: jal         0x8001B4AC
    // 0x8009D728: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8009D728: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8009D72C: beq         $v0, $zero, L_8009D744
    if (ctx->r2 == 0) {
        // 0x8009D730: nop
    
            goto L_8009D744;
    }
    // 0x8009D730: nop

    // 0x8009D734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009D738: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009D73C: jal         0x8002B114
    // 0x8009D740: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x8009D740: nop

    after_4:
L_8009D744:
    // 0x8009D744: b           L_8009D74C
    // 0x8009D748: nop

        goto L_8009D74C;
    // 0x8009D748: nop

L_8009D74C:
    // 0x8009D74C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D750: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009D754: jr          $ra
    // 0x8009D758: nop

    return;
    // 0x8009D758: nop

;}
RECOMP_FUNC void func_8008F3D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F3D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008F3D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008F3DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008F3E0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008F3E4: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008F3E8: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008F3EC: nop

    // 0x8008F3F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008F3F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008F3F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008F3FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008F400: lw          $t9, 0x4D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4D48);
    // 0x8008F404: nop

    // 0x8008F408: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8008F40C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8008F410: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F414: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x8008F418: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8008F41C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008F420: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008F424: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008F428: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008F42C: sw          $t0, 0x4D48($at)
    MEM_W(0X4D48, ctx->r1) = ctx->r8;
    // 0x8008F430: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8008F434: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008F438: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8008F43C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F440: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008F444: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008F448: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008F44C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008F450: swc1        $f4, 0x4D4C($at)
    MEM_W(0X4D4C, ctx->r1) = ctx->f4.u32l;
    // 0x8008F454: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8008F458: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008F45C: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8008F460: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F464: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008F468: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008F46C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008F470: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008F474: swc1        $f6, 0x4D50($at)
    MEM_W(0X4D50, ctx->r1) = ctx->f6.u32l;
    // 0x8008F478: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8008F47C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F480: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x8008F484: nop

    // 0x8008F488: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x8008F48C: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8008F490: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008F494: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008F498: sh          $zero, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = 0;
    // 0x8008F49C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8008F4A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F4A4: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x8008F4A8: nop

    // 0x8008F4AC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008F4B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008F4B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008F4B8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008F4BC: sh          $zero, 0x4D56($at)
    MEM_H(0X4D56, ctx->r1) = 0;
    // 0x8008F4C0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008F4C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F4C8: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008F4CC: nop

    // 0x8008F4D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008F4D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008F4D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008F4DC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008F4E0: sh          $zero, 0x4D58($at)
    MEM_H(0X4D58, ctx->r1) = 0;
    // 0x8008F4E4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8008F4E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F4EC: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x8008F4F0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8008F4F4: sll         $t0, $t2, 1
    ctx->r8 = S32(ctx->r10 << 1);
    // 0x8008F4F8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008F4FC: sh          $t9, 0x4C28($at)
    MEM_H(0X4C28, ctx->r1) = ctx->r25;
    // 0x8008F500: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8008F504: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F508: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8008F50C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8008F510: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8008F514: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008F518: sh          $t3, 0x4C58($at)
    MEM_H(0X4C58, ctx->r1) = ctx->r11;
    // 0x8008F51C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8008F520: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F524: lh          $t1, 0x0($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X0);
    // 0x8008F528: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8008F52C: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8008F530: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008F534: sh          $t7, 0x4C88($at)
    MEM_H(0X4C88, ctx->r1) = ctx->r15;
    // 0x8008F538: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008F53C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F540: lh          $t4, 0x0($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X0);
    // 0x8008F544: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8008F548: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8008F54C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008F550: sh          $t9, 0x4CB8($at)
    MEM_H(0X4CB8, ctx->r1) = ctx->r25;
    // 0x8008F554: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008F558: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F55C: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x8008F560: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8008F564: sll         $t1, $t8, 1
    ctx->r9 = S32(ctx->r24 << 1);
    // 0x8008F568: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008F56C: sh          $t3, 0x4CE8($at)
    MEM_H(0X4CE8, ctx->r1) = ctx->r11;
    // 0x8008F570: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8008F574: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008F578: lh          $t2, 0x0($t7)
    ctx->r10 = MEM_H(ctx->r15, 0X0);
    // 0x8008F57C: nop

    // 0x8008F580: sll         $t0, $t2, 1
    ctx->r8 = S32(ctx->r10 << 1);
    // 0x8008F584: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008F588: sh          $zero, 0x4D18($at)
    MEM_H(0X4D18, ctx->r1) = 0;
    // 0x8008F58C: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
L_8008F590:
    // 0x8008F590: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8008F594: lh          $t5, 0x1A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1A);
    // 0x8008F598: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x8008F59C: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x8008F5A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008F5A4: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x8008F5A8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008F5AC: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8008F5B0: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x8008F5B4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8008F5B8: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x8008F5BC: lh          $t3, 0x4238($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4238);
    // 0x8008F5C0: nop

    // 0x8008F5C4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8008F5C8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8008F5CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008F5D0: beq         $t1, $at, L_8008F5F8
    if (ctx->r9 == ctx->r1) {
        // 0x8008F5D4: nop
    
            goto L_8008F5F8;
    }
    // 0x8008F5D4: nop

    // 0x8008F5D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008F5DC: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8008F5E0: jal         0x800281A4
    // 0x8008F5E4: nop

    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x8008F5E4: nop

    after_0:
    // 0x8008F5E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008F5EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F5F0: jal         0x8002B114
    // 0x8008F5F4: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x8008F5F4: nop

    after_1:
L_8008F5F8:
    // 0x8008F5F8: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x8008F5FC: nop

    // 0x8008F600: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x8008F604: sll         $t0, $t2, 16
    ctx->r8 = S32(ctx->r10 << 16);
    // 0x8008F608: sra         $t4, $t0, 16
    ctx->r12 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8008F60C: slti        $at, $t4, 0xA
    ctx->r1 = SIGNED(ctx->r12) < 0XA ? 1 : 0;
    // 0x8008F610: bne         $at, $zero, L_8008F590
    if (ctx->r1 != 0) {
        // 0x8008F614: sh          $t2, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r10;
            goto L_8008F590;
    }
    // 0x8008F614: sh          $t2, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r10;
    // 0x8008F618: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008F61C: jal         0x8002B114
    // 0x8008F620: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8008F620: nop

    after_2:
    // 0x8008F624: b           L_8008F62C
    // 0x8008F628: nop

        goto L_8008F62C;
    // 0x8008F628: nop

L_8008F62C:
    // 0x8008F62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008F630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008F634: jr          $ra
    // 0x8008F638: nop

    return;
    // 0x8008F638: nop

;}
RECOMP_FUNC void func_800C22C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C22C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C22C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C22CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C22D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C22D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C22D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C22DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C22E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C22E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C22E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C22EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C22F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C22F4: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800C22F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C22FC: bne         $t8, $at, L_800C2374
    if (ctx->r24 != ctx->r1) {
        // 0x800C2300: nop
    
            goto L_800C2374;
    }
    // 0x800C2300: nop

    // 0x800C2304: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800C2308: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800C230C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800C2310: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800C2314: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C2318: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C231C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C2320: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C2324: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800C2328: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800C232C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C2330: beq         $s0, $at, L_800C234C
    if (ctx->r16 == ctx->r1) {
        // 0x800C2334: nop
    
            goto L_800C234C;
    }
    // 0x800C2334: nop

    // 0x800C2338: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C233C: beq         $s0, $at, L_800C235C
    if (ctx->r16 == ctx->r1) {
        // 0x800C2340: nop
    
            goto L_800C235C;
    }
    // 0x800C2340: nop

    // 0x800C2344: b           L_800C236C
    // 0x800C2348: nop

        goto L_800C236C;
    // 0x800C2348: nop

L_800C234C:
    // 0x800C234C: jal         0x800C2004
    // 0x800C2350: nop

    func_800C2004(rdram, ctx);
        goto after_0;
    // 0x800C2350: nop

    after_0:
    // 0x800C2354: b           L_800C2374
    // 0x800C2358: nop

        goto L_800C2374;
    // 0x800C2358: nop

L_800C235C:
    // 0x800C235C: jal         0x800C2230
    // 0x800C2360: nop

    func_800C2230(rdram, ctx);
        goto after_1;
    // 0x800C2360: nop

    after_1:
    // 0x800C2364: b           L_800C2374
    // 0x800C2368: nop

        goto L_800C2374;
    // 0x800C2368: nop

L_800C236C:
    // 0x800C236C: b           L_800C2374
    // 0x800C2370: nop

        goto L_800C2374;
    // 0x800C2370: nop

L_800C2374:
    // 0x800C2374: b           L_800C237C
    // 0x800C2378: nop

        goto L_800C237C;
    // 0x800C2378: nop

L_800C237C:
    // 0x800C237C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C2380: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C2384: jr          $ra
    // 0x800C2388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C2388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80092AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092AE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092AEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092AF0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092AF4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092AF8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092AFC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092B00: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092B04: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092B08: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092B0C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092B10: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092B14: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092B18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092B1C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092B20: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092B24: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092B28: addiu       $a1, $a1, 0x1744
    ctx->r5 = ADD32(ctx->r5, 0X1744);
    // 0x80092B2C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092B30: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092B34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092B38: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092B3C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092B40: jal         0x80027464
    // 0x80092B44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092B44: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092B48: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092B4C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80092B50: addiu       $t1, $t1, 0x6F44
    ctx->r9 = ADD32(ctx->r9, 0X6F44);
    // 0x80092B54: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092B58: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80092B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092B60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80092B64: jal         0x8001C0EC
    // 0x80092B68: addiu       $a3, $zero, 0x27C
    ctx->r7 = ADD32(0, 0X27C);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80092B68: addiu       $a3, $zero, 0x27C
    ctx->r7 = ADD32(0, 0X27C);
    after_1:
    // 0x80092B6C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092B70: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80092B74: addiu       $a3, $a3, 0x6F98
    ctx->r7 = ADD32(ctx->r7, 0X6F98);
    // 0x80092B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092B7C: jal         0x8001ABF4
    // 0x80092B80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80092B80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80092B84: b           L_80092B8C
    // 0x80092B88: nop

        goto L_80092B8C;
    // 0x80092B88: nop

L_80092B8C:
    // 0x80092B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092B90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092B94: jr          $ra
    // 0x80092B98: nop

    return;
    // 0x80092B98: nop

;}
RECOMP_FUNC void func_800695A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800695A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800695A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800695A8: lui         $a1, 0x9F
    ctx->r5 = S32(0X9F << 16);
    // 0x800695AC: lui         $a2, 0x9F
    ctx->r6 = S32(0X9F << 16);
    // 0x800695B0: addiu       $a2, $a2, -0x2E20
    ctx->r6 = ADD32(ctx->r6, -0X2E20);
    // 0x800695B4: addiu       $a1, $a1, -0x3850
    ctx->r5 = ADD32(ctx->r5, -0X3850);
    // 0x800695B8: jal         0x8001EA68
    // 0x800695BC: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    DecompressFile(rdram, ctx);
        goto after_0;
    // 0x800695BC: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_0:
    // 0x800695C0: lui         $a1, 0x9F
    ctx->r5 = S32(0X9F << 16);
    // 0x800695C4: lui         $a2, 0x9F
    ctx->r6 = S32(0X9F << 16);
    // 0x800695C8: addiu       $a2, $a2, -0x2990
    ctx->r6 = ADD32(ctx->r6, -0X2990);
    // 0x800695CC: addiu       $a1, $a1, -0x2E20
    ctx->r5 = ADD32(ctx->r5, -0X2E20);
    // 0x800695D0: jal         0x8001EA68
    // 0x800695D4: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    DecompressFile(rdram, ctx);
        goto after_1;
    // 0x800695D4: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_1:
    // 0x800695D8: lui         $a1, 0x9F
    ctx->r5 = S32(0X9F << 16);
    // 0x800695DC: lui         $a2, 0x9F
    ctx->r6 = S32(0X9F << 16);
    // 0x800695E0: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x800695E4: addiu       $a1, $a1, -0x2990
    ctx->r5 = ADD32(ctx->r5, -0X2990);
    // 0x800695E8: jal         0x8001EA68
    // 0x800695EC: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    DecompressFile(rdram, ctx);
        goto after_2;
    // 0x800695EC: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_2:
    // 0x800695F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800695F4: lw          $t6, 0x796C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X796C);
    // 0x800695F8: nop

    // 0x800695FC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80069600: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80069604: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80069608: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x8006960C: nop

    // 0x80069610: beq         $t8, $at, L_800696E8
    if (ctx->r24 == ctx->r1) {
        // 0x80069614: nop
    
            goto L_800696E8;
    }
    // 0x80069614: nop

L_80069618:
    // 0x80069618: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8006961C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80069620: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80069624: nop

    // 0x80069628: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8006962C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80069630: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x80069634: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80069638: lw          $t2, 0x4DB4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4DB4);
    // 0x8006963C: nop

    // 0x80069640: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
L_80069644:
    // 0x80069644: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80069648: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006964C: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x80069650: nop

    // 0x80069654: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80069658: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006965C: lw          $t6, -0x3560($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3560);
    // 0x80069660: nop

    // 0x80069664: bne         $t6, $zero, L_80069688
    if (ctx->r14 != 0) {
        // 0x80069668: nop
    
            goto L_80069688;
    }
    // 0x80069668: nop

    // 0x8006966C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80069670: nop

    // 0x80069674: lh          $a0, 0x0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X0);
    // 0x80069678: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    // 0x8006967C: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x80069680: jal         0x8001EB68
    // 0x80069684: nop

    func_8001EB68(rdram, ctx);
        goto after_3;
    // 0x80069684: nop

    after_3:
L_80069688:
    // 0x80069688: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006968C: nop

    // 0x80069690: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x80069694: nop

    // 0x80069698: bne         $t9, $zero, L_800696A8
    if (ctx->r25 != 0) {
        // 0x8006969C: nop
    
            goto L_800696A8;
    }
    // 0x8006969C: nop

    // 0x800696A0: b           L_800696C0
    // 0x800696A4: nop

        goto L_800696C0;
    // 0x800696A4: nop

L_800696A8:
    // 0x800696A8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800696AC: nop

    // 0x800696B0: addiu       $t1, $t0, 0xC
    ctx->r9 = ADD32(ctx->r8, 0XC);
    // 0x800696B4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800696B8: b           L_80069644
    // 0x800696BC: nop

        goto L_80069644;
    // 0x800696BC: nop

L_800696C0:
    // 0x800696C0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800696C4: nop

    // 0x800696C8: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x800696CC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800696D0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800696D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800696D8: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x800696DC: nop

    // 0x800696E0: bne         $t5, $at, L_80069618
    if (ctx->r13 != ctx->r1) {
        // 0x800696E4: nop
    
            goto L_80069618;
    }
    // 0x800696E4: nop

L_800696E8:
    // 0x800696E8: b           L_800696F0
    // 0x800696EC: nop

        goto L_800696F0;
    // 0x800696EC: nop

L_800696F0:
    // 0x800696F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800696F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800696F8: jr          $ra
    // 0x800696FC: nop

    return;
    // 0x800696FC: nop

;}
RECOMP_FUNC void func_800BE5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE5CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BE5D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BE5D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BE5D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BE5DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BE5E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BE5E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BE5E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BE5EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BE5F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BE5F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BE5F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BE5FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BE600: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BE604: nop

    // 0x800BE608: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BE60C: nop

    // 0x800BE610: bne         $t1, $zero, L_800BE6EC
    if (ctx->r9 != 0) {
        // 0x800BE614: nop
    
            goto L_800BE6EC;
    }
    // 0x800BE614: nop

    // 0x800BE618: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BE61C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BE620: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BE624: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BE628: nop

    // 0x800BE62C: lh          $t5, 0xAE($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAE);
    // 0x800BE630: nop

    // 0x800BE634: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800BE638: nop

    // 0x800BE63C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BE640: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
    // 0x800BE644: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BE648: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BE64C: nop

    // 0x800BE650: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x800BE654: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BE658: nop

    // 0x800BE65C: lh          $t8, 0xB8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB8);
    // 0x800BE660: nop

    // 0x800BE664: bne         $t8, $zero, L_800BE6D0
    if (ctx->r24 != 0) {
        // 0x800BE668: nop
    
            goto L_800BE6D0;
    }
    // 0x800BE668: nop

    // 0x800BE66C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BE670: nop

    // 0x800BE674: lh          $t0, 0xB0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB0);
    // 0x800BE678: nop

    // 0x800BE67C: sh          $t0, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = ctx->r8;
    // 0x800BE680: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BE684: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800BE688: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x800BE68C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800BE690: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800BE694: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800BE698: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BE69C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800BE6A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BE6A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800BE6A8: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x800BE6AC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800BE6B0: jal         0x80015538
    // 0x800BE6B4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800BE6B4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x800BE6B8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BE6BC: nop

    // 0x800BE6C0: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x800BE6C4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BE6C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800BE6CC: sh          $t4, 0xB8($t6)
    MEM_H(0XB8, ctx->r14) = ctx->r12;
L_800BE6D0:
    // 0x800BE6D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE6D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE6D8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BE6DC: addiu       $a3, $a3, 0x7EA8
    ctx->r7 = ADD32(ctx->r7, 0X7EA8);
    // 0x800BE6E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BE6E4: jal         0x8001ABF4
    // 0x800BE6E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800BE6E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800BE6EC:
    // 0x800BE6EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BE6F0: nop

    // 0x800BE6F4: lh          $t8, 0xBA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XBA);
    // 0x800BE6F8: lwc1        $f4, 0x44($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X44);
    // 0x800BE6FC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800BE700: nop

    // 0x800BE704: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BE708: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800BE70C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800BE710: nop

    // 0x800BE714: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800BE718: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800BE71C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800BE720: nop

    // 0x800BE724: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800BE728: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x800BE72C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800BE730: sh          $t9, 0xBA($t7)
    MEM_H(0XBA, ctx->r15) = ctx->r25;
    // 0x800BE734: nop

    // 0x800BE738: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE73C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE740: jal         0x80029C40
    // 0x800BE744: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800BE744: nop

    after_2:
    // 0x800BE748: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BE74C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800BE750: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE754: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE758: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800BE75C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800BE760: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800BE764: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BE768: jal         0x80029018
    // 0x800BE76C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800BE76C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x800BE770: beq         $v0, $zero, L_800BE7D4
    if (ctx->r2 == 0) {
        // 0x800BE774: nop
    
            goto L_800BE7D4;
    }
    // 0x800BE774: nop

    // 0x800BE778: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BE77C: nop

    // 0x800BE780: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x800BE784: nop

    // 0x800BE788: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x800BE78C: sh          $t3, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r11;
    // 0x800BE790: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BE794: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800BE798: lh          $t4, 0xAA($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XAA);
    // 0x800BE79C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800BE7A0: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800BE7A4: subu        $t6, $t6, $t4
    ctx->r14 = SUB32(ctx->r14, ctx->r12);
    // 0x800BE7A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BE7AC: subu        $t6, $t6, $t4
    ctx->r14 = SUB32(ctx->r14, ctx->r12);
    // 0x800BE7B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BE7B4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800BE7B8: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800BE7BC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x800BE7C0: jal         0x80015538
    // 0x800BE7C4: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800BE7C4: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_4:
    // 0x800BE7C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BE7CC: b           L_800BE874
    // 0x800BE7D0: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
        goto L_800BE874;
    // 0x800BE7D0: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
L_800BE7D4:
    // 0x800BE7D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BE7D8: nop

    // 0x800BE7DC: lh          $t9, 0xB0($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XB0);
    // 0x800BE7E0: lwc1        $f6, 0x50($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X50);
    // 0x800BE7E4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BE7E8: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800BE7EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BE7F0: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x800BE7F4: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x800BE7F8: nop

    // 0x800BE7FC: bc1t        L_800BE818
    if (c1cs) {
        // 0x800BE800: nop
    
            goto L_800BE818;
    }
    // 0x800BE800: nop

    // 0x800BE804: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800BE808: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800BE80C: nop

    // 0x800BE810: bc1f        L_800BE874
    if (!c1cs) {
        // 0x800BE814: nop
    
            goto L_800BE874;
    }
    // 0x800BE814: nop

L_800BE818:
    // 0x800BE818: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BE81C: nop

    // 0x800BE820: lh          $t2, 0xAA($t7)
    ctx->r10 = MEM_H(ctx->r15, 0XAA);
    // 0x800BE824: nop

    // 0x800BE828: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x800BE82C: sh          $t3, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r11;
    // 0x800BE830: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BE834: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800BE838: lh          $t5, 0xAA($t1)
    ctx->r13 = MEM_H(ctx->r9, 0XAA);
    // 0x800BE83C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800BE840: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800BE844: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x800BE848: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BE84C: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x800BE850: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BE854: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800BE858: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x800BE85C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800BE860: jal         0x80015538
    // 0x800BE864: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800BE864: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_5:
    // 0x800BE868: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BE86C: nop

    // 0x800BE870: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
L_800BE874:
    // 0x800BE874: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BE878: nop

    // 0x800BE87C: lh          $t0, 0xBA($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XBA);
    // 0x800BE880: nop

    // 0x800BE884: bgtz        $t0, L_800BE8C8
    if (SIGNED(ctx->r8) > 0) {
        // 0x800BE888: nop
    
            goto L_800BE8C8;
    }
    // 0x800BE888: nop

    // 0x800BE88C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BE890: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x800BE894: sh          $t9, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r25;
    // 0x800BE898: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BE89C: nop

    // 0x800BE8A0: lh          $t7, 0xAA($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XAA);
    // 0x800BE8A4: nop

    // 0x800BE8A8: negu        $t1, $t7
    ctx->r9 = SUB32(0, ctx->r15);
    // 0x800BE8AC: sh          $t1, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r9;
    // 0x800BE8B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BE8B4: nop

    // 0x800BE8B8: sh          $zero, 0xB8($t5)
    MEM_H(0XB8, ctx->r13) = 0;
    // 0x800BE8BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BE8C0: nop

    // 0x800BE8C4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800BE8C8:
    // 0x800BE8C8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BE8CC: nop

    // 0x800BE8D0: lh          $t8, 0xAE($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XAE);
    // 0x800BE8D4: nop

    // 0x800BE8D8: bne         $t8, $zero, L_800BE8FC
    if (ctx->r24 != 0) {
        // 0x800BE8DC: nop
    
            goto L_800BE8FC;
    }
    // 0x800BE8DC: nop

    // 0x800BE8E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE8E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE8E8: jal         0x8002A46C
    // 0x800BE8EC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_6;
    // 0x800BE8EC: nop

    after_6:
    // 0x800BE8F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BE8F4: b           L_800BE910
    // 0x800BE8F8: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
        goto L_800BE910;
    // 0x800BE8F8: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
L_800BE8FC:
    // 0x800BE8FC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BE900: nop

    // 0x800BE904: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800BE908: nop

    // 0x800BE90C: swc1        $f16, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f16.u32l;
L_800BE910:
    // 0x800BE910: b           L_800BE918
    // 0x800BE914: nop

        goto L_800BE918;
    // 0x800BE914: nop

L_800BE918:
    // 0x800BE918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE91C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BE920: jr          $ra
    // 0x800BE924: nop

    return;
    // 0x800BE924: nop

;}
RECOMP_FUNC void func_800FB804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB804: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FB808: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FB80C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FB810: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FB814: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FB818: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FB81C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FB824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB828: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FB82C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FB830: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FB834: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800FB838: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FB83C: nop

    // 0x800FB840: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FB844: nop

    // 0x800FB848: bne         $t1, $zero, L_800FB89C
    if (ctx->r9 != 0) {
        // 0x800FB84C: nop
    
            goto L_800FB89C;
    }
    // 0x800FB84C: nop

    // 0x800FB850: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800FB854: nop

    // 0x800FB858: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800FB85C: nop

    // 0x800FB860: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FB864: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800FB868: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800FB86C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FB870: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800FB874: nop

    // 0x800FB878: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800FB87C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800FB880: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x800FB884: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800FB888: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB88C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB890: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x800FB894: jal         0x80029EF8
    // 0x800FB898: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800FB898: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_0:
L_800FB89C:
    // 0x800FB89C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800FB8A0: nop

    // 0x800FB8A4: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800FB8A8: nop

    // 0x800FB8AC: beq         $t9, $zero, L_800FB938
    if (ctx->r25 == 0) {
        // 0x800FB8B0: nop
    
            goto L_800FB938;
    }
    // 0x800FB8B0: nop

    // 0x800FB8B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FB8B8: nop

    // 0x800FB8BC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800FB8C0: nop

    // 0x800FB8C4: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800FB8C8: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
    // 0x800FB8CC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800FB8D0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB8D4: lwc1        $f6, 0xC($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800FB8D8: lwc1        $f11, 0x57A0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X57A0);
    // 0x800FB8DC: lwc1        $f10, 0x57A4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X57A4);
    // 0x800FB8E0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800FB8E4: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x800FB8E8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800FB8EC: swc1        $f18, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f18.u32l;
    // 0x800FB8F0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800FB8F4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB8F8: lwc1        $f4, 0x10($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X10);
    // 0x800FB8FC: lwc1        $f9, 0x57A8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X57A8);
    // 0x800FB900: lwc1        $f8, 0x57AC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X57AC);
    // 0x800FB904: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800FB908: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800FB90C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800FB910: swc1        $f16, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f16.u32l;
    // 0x800FB914: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800FB918: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB91C: lwc1        $f18, 0x14($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800FB920: lwc1        $f7, 0x57B0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X57B0);
    // 0x800FB924: lwc1        $f6, 0x57B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X57B4);
    // 0x800FB928: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800FB92C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800FB930: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800FB934: swc1        $f10, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f10.u32l;
L_800FB938:
    // 0x800FB938: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800FB93C: nop

    // 0x800FB940: lwc1        $f16, 0x28($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800FB944: nop

    // 0x800FB948: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x800FB94C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800FB950: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800FB954: nop

    // 0x800FB958: swc1        $f18, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f18.u32l;
    // 0x800FB95C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB960: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB964: jal         0x80029C40
    // 0x800FB968: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800FB968: nop

    after_1:
    // 0x800FB96C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FB970: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FB974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB97C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800FB980: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x800FB984: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800FB988: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800FB98C: jal         0x80029018
    // 0x800FB990: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x800FB990: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x800FB994: beq         $v0, $zero, L_800FB9B4
    if (ctx->r2 == 0) {
        // 0x800FB998: nop
    
            goto L_800FB9B4;
    }
    // 0x800FB998: nop

    // 0x800FB99C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800FB9A0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800FB9A4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800FB9A8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800FB9AC: nop

    // 0x800FB9B0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800FB9B4:
    // 0x800FB9B4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800FB9B8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800FB9BC: nop

    // 0x800FB9C0: swc1        $f8, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f8.u32l;
    // 0x800FB9C4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800FB9C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FB9CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB9D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB9D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800FB9D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800FB9DC: lui         $a3, 0xC170
    ctx->r7 = S32(0XC170 << 16);
    // 0x800FB9E0: jal         0x80029F58
    // 0x800FB9E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_3;
    // 0x800FB9E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x800FB9E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FB9EC: bne         $v0, $at, L_800FBA0C
    if (ctx->r2 != ctx->r1) {
        // 0x800FB9F0: nop
    
            goto L_800FBA0C;
    }
    // 0x800FB9F0: nop

    // 0x800FB9F4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800FB9F8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800FB9FC: sh          $t0, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r8;
    // 0x800FBA00: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800FBA04: nop

    // 0x800FBA08: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800FBA0C:
    // 0x800FBA0C: b           L_800FBA14
    // 0x800FBA10: nop

        goto L_800FBA14;
    // 0x800FBA10: nop

L_800FBA14:
    // 0x800FBA14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FBA18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FBA1C: jr          $ra
    // 0x800FBA20: nop

    return;
    // 0x800FBA20: nop

;}
RECOMP_FUNC void func_800F33AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F33AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F33B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F33B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F33B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F33BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F33C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F33C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F33C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F33CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F33D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F33D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F33D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F33DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F33E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F33E4: nop

    // 0x800F33E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F33EC: nop

    // 0x800F33F0: bne         $t1, $zero, L_800F3454
    if (ctx->r9 != 0) {
        // 0x800F33F4: nop
    
            goto L_800F3454;
    }
    // 0x800F33F4: nop

    // 0x800F33F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F33FC: nop

    // 0x800F3400: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F3404: nop

    // 0x800F3408: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F340C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F3410: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F3414: nop

    // 0x800F3418: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800F341C: nop

    // 0x800F3420: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800F3424: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3428: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800F342C: addiu       $t7, $t7, -0x64D0
    ctx->r15 = ADD32(ctx->r15, -0X64D0);
    // 0x800F3430: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3434: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800F3438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F343C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F3440: jal         0x8001C0EC
    // 0x800F3444: addiu       $a3, $zero, 0x188
    ctx->r7 = ADD32(0, 0X188);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F3444: addiu       $a3, $zero, 0x188
    ctx->r7 = ADD32(0, 0X188);
    after_0:
    // 0x800F3448: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F344C: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x800F3450: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_800F3454:
    // 0x800F3454: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3458: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F345C: jal         0x8002A8B4
    // 0x800F3460: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800F3460: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x800F3464: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F3468: nop

    // 0x800F346C: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800F3470: nop

    // 0x800F3474: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x800F3478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F347C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3480: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x800F3484: jal         0x8002A2EC
    // 0x800F3488: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x800F3488: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_2:
    // 0x800F348C: beq         $v0, $zero, L_800F34CC
    if (ctx->r2 == 0) {
        // 0x800F3490: nop
    
            goto L_800F34CC;
    }
    // 0x800F3490: nop

    // 0x800F3494: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F3498: nop

    // 0x800F349C: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800F34A0: nop

    // 0x800F34A4: bne         $t3, $zero, L_800F34C4
    if (ctx->r11 != 0) {
        // 0x800F34A8: nop
    
            goto L_800F34C4;
    }
    // 0x800F34A8: nop

    // 0x800F34AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F34B0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800F34B4: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800F34B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F34BC: nop

    // 0x800F34C0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800F34C4:
    // 0x800F34C4: b           L_800F3514
    // 0x800F34C8: nop

        goto L_800F3514;
    // 0x800F34C8: nop

L_800F34CC:
    // 0x800F34CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F34D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F34D4: jal         0x8002A2EC
    // 0x800F34D8: lui         $a1, 0x44F0
    ctx->r5 = S32(0X44F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_3;
    // 0x800F34D8: lui         $a1, 0x44F0
    ctx->r5 = S32(0X44F0 << 16);
    after_3:
    // 0x800F34DC: beq         $v0, $zero, L_800F34FC
    if (ctx->r2 == 0) {
        // 0x800F34E0: nop
    
            goto L_800F34FC;
    }
    // 0x800F34E0: nop

    // 0x800F34E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F34E8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800F34EC: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800F34F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F34F4: b           L_800F3514
    // 0x800F34F8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_800F3514;
    // 0x800F34F8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800F34FC:
    // 0x800F34FC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F3500: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800F3504: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800F3508: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F350C: nop

    // 0x800F3510: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800F3514:
    // 0x800F3514: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F3518: nop

    // 0x800F351C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800F3520: nop

    // 0x800F3524: bne         $t4, $zero, L_800F3538
    if (ctx->r12 != 0) {
        // 0x800F3528: nop
    
            goto L_800F3538;
    }
    // 0x800F3528: nop

    // 0x800F352C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F3530: b           L_800F3550
    // 0x800F3534: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
        goto L_800F3550;
    // 0x800F3534: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
L_800F3538:
    // 0x800F3538: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F353C: nop

    // 0x800F3540: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x800F3544: nop

    // 0x800F3548: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x800F354C: sh          $t7, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r15;
L_800F3550:
    // 0x800F3550: b           L_800F3558
    // 0x800F3554: nop

        goto L_800F3558;
    // 0x800F3554: nop

L_800F3558:
    // 0x800F3558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F355C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F3560: jr          $ra
    // 0x800F3564: nop

    return;
    // 0x800F3564: nop

;}
RECOMP_FUNC void func_800F8AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8AC8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800F8ACC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F8AD0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800F8AD4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800F8AD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F8ADC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F8AE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F8AE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F8AE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8AEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F8AF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8AF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F8AF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F8AFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F8B00: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800F8B04: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800F8B08: nop

    // 0x800F8B0C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F8B10: nop

    // 0x800F8B14: bne         $t1, $zero, L_800F8CA0
    if (ctx->r9 != 0) {
        // 0x800F8B18: nop
    
            goto L_800F8CA0;
    }
    // 0x800F8B18: nop

    // 0x800F8B1C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800F8B20: nop

    // 0x800F8B24: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F8B28: nop

    // 0x800F8B2C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F8B30: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F8B34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F8B38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F8B3C: jal         0x8001BB34
    // 0x800F8B40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800F8B40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800F8B44: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800F8B48:
    // 0x800F8B48: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x800F8B4C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800F8B50: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800F8B54: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800F8B58: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x800F8B5C: nop

    // 0x800F8B60: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x800F8B64: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800F8B68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8B6C: bne         $t0, $at, L_800F8B7C
    if (ctx->r8 != ctx->r1) {
        // 0x800F8B70: nop
    
            goto L_800F8B7C;
    }
    // 0x800F8B70: nop

    // 0x800F8B74: b           L_800F8C80
    // 0x800F8B78: nop

        goto L_800F8C80;
    // 0x800F8B78: nop

L_800F8B7C:
    // 0x800F8B7C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800F8B80: addiu       $t1, $t1, -0x45C8
    ctx->r9 = ADD32(ctx->r9, -0X45C8);
    // 0x800F8B84: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800F8B88: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800F8B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F8B90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F8B94: jal         0x8001C0EC
    // 0x800F8B98: addiu       $a3, $zero, 0x66
    ctx->r7 = ADD32(0, 0X66);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F8B98: addiu       $a3, $zero, 0x66
    ctx->r7 = ADD32(0, 0X66);
    after_1:
    // 0x800F8B9C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800F8BA0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F8BA4: addiu       $a3, $a3, -0x4594
    ctx->r7 = ADD32(ctx->r7, -0X4594);
    // 0x800F8BA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F8BAC: jal         0x8001ABF4
    // 0x800F8BB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800F8BB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800F8BB4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800F8BB8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800F8BBC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800F8BC0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F8BC4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F8BC8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F8BCC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F8BD0: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800F8BD4: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x800F8BD8: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800F8BDC: lwc1        $f14, 0x4($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800F8BE0: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x800F8BE4: jal         0x80067748
    // 0x800F8BE8: nop

    func_80067748(rdram, ctx);
        goto after_3;
    // 0x800F8BE8: nop

    after_3:
    // 0x800F8BEC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800F8BF0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800F8BF4: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x800F8BF8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F8BFC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F8C00: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x800F8C04: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800F8C08: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F8C0C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800F8C10: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F8C14: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F8C18: lw          $t9, 0x7750($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7750);
    // 0x800F8C1C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F8C20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8C24: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F8C28: sh          $t9, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r25;
    // 0x800F8C2C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800F8C30: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x800F8C34: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800F8C38: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800F8C3C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F8C40: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800F8C44: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800F8C48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8C4C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800F8C50: sh          $t3, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r11;
    // 0x800F8C54: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800F8C58: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800F8C5C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800F8C60: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F8C64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F8C68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F8C6C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F8C70: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F8C74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8C78: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F8C7C: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
L_800F8C80:
    // 0x800F8C80: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x800F8C84: nop

    // 0x800F8C88: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800F8C8C: sll         $t0, $t8, 16
    ctx->r8 = S32(ctx->r24 << 16);
    // 0x800F8C90: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800F8C94: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x800F8C98: bne         $at, $zero, L_800F8B48
    if (ctx->r1 != 0) {
        // 0x800F8C9C: sh          $t8, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r24;
            goto L_800F8B48;
    }
    // 0x800F8C9C: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
L_800F8CA0:
    // 0x800F8CA0: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800F8CA4:
    // 0x800F8CA4: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800F8CA8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800F8CAC: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x800F8CB0: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x800F8CB4: lh          $t6, 0xE8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XE8);
    // 0x800F8CB8: nop

    // 0x800F8CBC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x800F8CC0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800F8CC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8CC8: bne         $t5, $at, L_800F8CD8
    if (ctx->r13 != ctx->r1) {
        // 0x800F8CCC: nop
    
            goto L_800F8CD8;
    }
    // 0x800F8CCC: nop

    // 0x800F8CD0: b           L_800F8FE0
    // 0x800F8CD4: nop

        goto L_800F8FE0;
    // 0x800F8CD4: nop

L_800F8CD8:
    // 0x800F8CD8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800F8CDC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800F8CE0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800F8CE4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F8CE8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F8CEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F8CF0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F8CF4: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800F8CF8: lh          $t0, 0x41F6($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F6);
    // 0x800F8CFC: nop

    // 0x800F8D00: bne         $t0, $zero, L_800F8D9C
    if (ctx->r8 != 0) {
        // 0x800F8D04: nop
    
            goto L_800F8D9C;
    }
    // 0x800F8D04: nop

    // 0x800F8D08: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800F8D0C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800F8D10: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800F8D14: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800F8D18: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F8D1C: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800F8D20: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F8D24: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x800F8D28: lh          $t1, 0x41F8($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F8);
    // 0x800F8D2C: nop

    // 0x800F8D30: bne         $t1, $zero, L_800F8D68
    if (ctx->r9 != 0) {
        // 0x800F8D34: nop
    
            goto L_800F8D68;
    }
    // 0x800F8D34: nop

    // 0x800F8D38: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800F8D3C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800F8D40: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800F8D44: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800F8D48: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F8D4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F8D50: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800F8D54: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800F8D58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8D5C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800F8D60: b           L_800F8D94
    // 0x800F8D64: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
        goto L_800F8D94;
    // 0x800F8D64: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
L_800F8D68:
    // 0x800F8D68: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800F8D6C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800F8D70: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800F8D74: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F8D78: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F8D7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F8D80: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800F8D84: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F8D88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8D8C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F8D90: swc1        $f8, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f8.u32l;
L_800F8D94:
    // 0x800F8D94: b           L_800F8E24
    // 0x800F8D98: nop

        goto L_800F8E24;
    // 0x800F8D98: nop

L_800F8D9C:
    // 0x800F8D9C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800F8DA0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800F8DA4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800F8DA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F8DAC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F8DB0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F8DB4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F8DB8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800F8DBC: lh          $t0, 0x41F8($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F8);
    // 0x800F8DC0: nop

    // 0x800F8DC4: bne         $t0, $zero, L_800F8DF8
    if (ctx->r8 != 0) {
        // 0x800F8DC8: nop
    
            goto L_800F8DF8;
    }
    // 0x800F8DC8: nop

    // 0x800F8DCC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800F8DD0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F8DD4: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800F8DD8: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800F8DDC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F8DE0: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800F8DE4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F8DE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8DEC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800F8DF0: b           L_800F8E24
    // 0x800F8DF4: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
        goto L_800F8E24;
    // 0x800F8DF4: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
L_800F8DF8:
    // 0x800F8DF8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800F8DFC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800F8E00: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800F8E04: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800F8E08: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F8E0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F8E10: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800F8E14: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F8E18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8E1C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800F8E20: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
L_800F8E24:
    // 0x800F8E24: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800F8E28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8E2C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800F8E30: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800F8E34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F8E38: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800F8E3C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F8E40: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F8E44: lwc1        $f18, 0x418C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x800F8E48: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F8E4C: lwc1        $f7, 0x5728($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5728);
    // 0x800F8E50: lwc1        $f6, 0x572C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X572C);
    // 0x800F8E54: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800F8E58: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x800F8E5C: jal         0x80034970
    // 0x800F8E60: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x800F8E60: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_4:
    // 0x800F8E64: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800F8E68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8E6C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800F8E70: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F8E74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F8E78: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F8E7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F8E80: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F8E84: lwc1        $f10, 0x4150($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x800F8E88: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800F8E8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F8E90: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800F8E94: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x800F8E98: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800F8E9C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x800F8EA0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800F8EA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8EA8: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800F8EAC: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800F8EB0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F8EB4: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800F8EB8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F8EBC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800F8EC0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x800F8EC4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F8EC8: lwc1        $f17, 0x5730($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5730);
    // 0x800F8ECC: lwc1        $f16, 0x5734($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5734);
    // 0x800F8ED0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800F8ED4: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x800F8ED8: jal         0x80036570
    // 0x800F8EDC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x800F8EDC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_5:
    // 0x800F8EE0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800F8EE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8EE8: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800F8EEC: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800F8EF0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F8EF4: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800F8EF8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F8EFC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800F8F00: lwc1        $f18, 0x4158($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x800F8F04: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800F8F08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F8F0C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800F8F10: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800F8F14: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800F8F18: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x800F8F1C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800F8F20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8F24: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800F8F28: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800F8F2C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F8F30: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800F8F34: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F8F38: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800F8F3C: lwc1        $f14, 0x4154($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x800F8F40: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800F8F44: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800F8F48: jal         0x80067748
    // 0x800F8F4C: nop

    func_80067748(rdram, ctx);
        goto after_6;
    // 0x800F8F4C: nop

    after_6:
    // 0x800F8F50: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800F8F54: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x800F8F58: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800F8F5C: andi        $t6, $t2, 0x1
    ctx->r14 = ctx->r10 & 0X1;
    // 0x800F8F60: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800F8F64: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F8F68: lw          $t7, 0x7740($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7740);
    // 0x800F8F6C: addiu       $at, $zero, 0xF2
    ctx->r1 = ADD32(0, 0XF2);
    // 0x800F8F70: beq         $t7, $at, L_800F8FAC
    if (ctx->r15 == ctx->r1) {
        // 0x800F8F74: nop
    
            goto L_800F8FAC;
    }
    // 0x800F8F74: nop

    // 0x800F8F78: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800F8F7C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800F8F80: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800F8F84: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800F8F88: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F8F8C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800F8F90: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F8F94: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800F8F98: addu        $t4, $t0, $t9
    ctx->r12 = ADD32(ctx->r8, ctx->r25);
    // 0x800F8F9C: lh          $t1, 0xA8($t4)
    ctx->r9 = MEM_H(ctx->r12, 0XA8);
    // 0x800F8FA0: nop

    // 0x800F8FA4: xori        $t3, $t1, 0x1
    ctx->r11 = ctx->r9 ^ 0X1;
    // 0x800F8FA8: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
L_800F8FAC:
    // 0x800F8FAC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800F8FB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F8FB4: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800F8FB8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800F8FBC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F8FC0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800F8FC4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F8FC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F8FCC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F8FD0: swc1        $f16, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f16.u32l;
    // 0x800F8FD4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800F8FD8: jal         0x80029C40
    // 0x800F8FDC: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800F8FDC: nop

    after_7:
L_800F8FE0:
    // 0x800F8FE0: lh          $t5, 0x2E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2E);
    // 0x800F8FE4: nop

    // 0x800F8FE8: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x800F8FEC: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x800F8FF0: sra         $t0, $t8, 16
    ctx->r8 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800F8FF4: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x800F8FF8: bne         $at, $zero, L_800F8CA4
    if (ctx->r1 != 0) {
        // 0x800F8FFC: sh          $t7, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r15;
            goto L_800F8CA4;
    }
    // 0x800F8FFC: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x800F9000: b           L_800F9008
    // 0x800F9004: nop

        goto L_800F9008;
    // 0x800F9004: nop

L_800F9008:
    // 0x800F9008: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F900C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800F9010: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F9014: jr          $ra
    // 0x800F9018: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800F9018: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800EBC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBC58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EBC5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EBC60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EBC64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EBC68: jal         0x8002B0E4
    // 0x800EBC6C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800EBC6C: nop

    after_0:
    // 0x800EBC70: b           L_800EBC78
    // 0x800EBC74: nop

        goto L_800EBC78;
    // 0x800EBC74: nop

L_800EBC78:
    // 0x800EBC78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EBC7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EBC80: jr          $ra
    // 0x800EBC84: nop

    return;
    // 0x800EBC84: nop

;}
RECOMP_FUNC void func_800B99A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B99A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B99A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B99AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B99B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B99B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B99B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B99BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B99C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B99C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B99C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B99CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B99D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B99D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B99D8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800B99DC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B99E0: nop

    // 0x800B99E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B99E8: nop

    // 0x800B99EC: bne         $t1, $zero, L_800B9A6C
    if (ctx->r9 != 0) {
        // 0x800B99F0: nop
    
            goto L_800B9A6C;
    }
    // 0x800B99F0: nop

    // 0x800B99F4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B99F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B99FC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B9A00: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B9A04: nop

    // 0x800B9A08: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800B9A0C: nop

    // 0x800B9A10: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800B9A14: nop

    // 0x800B9A18: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B9A1C: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
    // 0x800B9A20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B9A24: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B9A28: nop

    // 0x800B9A2C: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x800B9A30: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B9A34: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B9A38: nop

    // 0x800B9A3C: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
    // 0x800B9A40: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B9A44: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B9A48: nop

    // 0x800B9A4C: swc1        $f16, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f16.u32l;
    // 0x800B9A50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9A54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9A58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B9A5C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x800B9A60: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B9A64: jal         0x800175F0
    // 0x800B9A68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800B9A68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800B9A6C:
    // 0x800B9A6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9A70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9A74: jal         0x80029C40
    // 0x800B9A78: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800B9A78: nop

    after_1:
    // 0x800B9A7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9A80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9A84: jal         0x80029D04
    // 0x800B9A88: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800B9A88: nop

    after_2:
    // 0x800B9A8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9A90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9A94: jal         0x80028FA0
    // 0x800B9A98: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800B9A98: nop

    after_3:
    // 0x800B9A9C: beq         $v0, $zero, L_800B9B5C
    if (ctx->r2 == 0) {
        // 0x800B9AA0: nop
    
            goto L_800B9B5C;
    }
    // 0x800B9AA0: nop

    // 0x800B9AA4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B9AA8: nop

    // 0x800B9AAC: lh          $t0, 0xAE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAE);
    // 0x800B9AB0: nop

    // 0x800B9AB4: bne         $t0, $zero, L_800B9B2C
    if (ctx->r8 != 0) {
        // 0x800B9AB8: nop
    
            goto L_800B9B2C;
    }
    // 0x800B9AB8: nop

    // 0x800B9ABC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B9AC0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B9AC4: nop

    // 0x800B9AC8: swc1        $f18, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f18.u32l;
    // 0x800B9ACC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B9AD0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B9AD4: nop

    // 0x800B9AD8: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x800B9ADC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B9AE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B9AE4: lh          $t5, 0x104($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X104);
    // 0x800B9AE8: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800B9AEC: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800B9AF0: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800B9AF4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B9AF8: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800B9AFC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B9B00: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B9B04: lwc1        $f6, 0x4158($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x800B9B08: nop

    // 0x800B9B0C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800B9B10: nop

    // 0x800B9B14: bc1f        L_800B9B2C
    if (!c1cs) {
        // 0x800B9B18: nop
    
            goto L_800B9B2C;
    }
    // 0x800B9B18: nop

    // 0x800B9B1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9B20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9B24: jal         0x80029C40
    // 0x800B9B28: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800B9B28: nop

    after_4:
L_800B9B2C:
    // 0x800B9B2C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B9B30: addiu       $at, $zero, 0x185
    ctx->r1 = ADD32(0, 0X185);
    // 0x800B9B34: lh          $t7, 0x106($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X106);
    // 0x800B9B38: nop

    // 0x800B9B3C: bne         $t7, $at, L_800B9B5C
    if (ctx->r15 != ctx->r1) {
        // 0x800B9B40: nop
    
            goto L_800B9B5C;
    }
    // 0x800B9B40: nop

    // 0x800B9B44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9B48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9B4C: jal         0x8002B0E4
    // 0x800B9B50: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x800B9B50: nop

    after_5:
    // 0x800B9B54: b           L_800B9D5C
    // 0x800B9B58: nop

        goto L_800B9D5C;
    // 0x800B9B58: nop

L_800B9B5C:
    // 0x800B9B5C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800B9B60: jal         0x800C0194
    // 0x800B9B64: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_800C0194(rdram, ctx);
        goto after_6;
    // 0x800B9B64: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_6:
    // 0x800B9B68: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x800B9B6C: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x800B9B70: nop

    // 0x800B9B74: slti        $at, $t8, -0x50
    ctx->r1 = SIGNED(ctx->r24) < -0X50 ? 1 : 0;
    // 0x800B9B78: beq         $at, $zero, L_800B9C0C
    if (ctx->r1 == 0) {
        // 0x800B9B7C: nop
    
            goto L_800B9C0C;
    }
    // 0x800B9B7C: nop

    // 0x800B9B80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9B84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9B88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B9B8C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x800B9B90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B9B94: jal         0x800175F0
    // 0x800B9B98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x800B9B98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x800B9B9C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B9BA0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800B9BA4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800B9BA8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B9BAC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800B9BB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B9BB4: lwc1        $f10, 0x44($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X44);
    // 0x800B9BB8: nop

    // 0x800B9BBC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800B9BC0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800B9BC4: nop

    // 0x800B9BC8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800B9BCC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B9BD0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B9BD4: nop

    // 0x800B9BD8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800B9BDC: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x800B9BE0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800B9BE4: sh          $t5, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r13;
    // 0x800B9BE8: nop

    // 0x800B9BEC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B9BF0: nop

    // 0x800B9BF4: sh          $zero, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = 0;
    // 0x800B9BF8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B9BFC: nop

    // 0x800B9C00: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800B9C04: b           L_800B9D5C
    // 0x800B9C08: nop

        goto L_800B9D5C;
    // 0x800B9C08: nop

L_800B9C0C:
    // 0x800B9C0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B9C10: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B9C14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9C18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9C1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B9C20: lui         $a2, 0x430C
    ctx->r6 = S32(0X430C << 16);
    // 0x800B9C24: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B9C28: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800B9C2C: jal         0x80029018
    // 0x800B9C30: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800B9C30: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x800B9C34: beq         $v0, $zero, L_800B9D10
    if (ctx->r2 == 0) {
        // 0x800B9C38: nop
    
            goto L_800B9D10;
    }
    // 0x800B9C38: nop

    // 0x800B9C3C: jal         0x800297DC
    // 0x800B9C40: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800B9C40: nop

    after_9:
    // 0x800B9C44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9C48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9C4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B9C50: jal         0x80029824
    // 0x800B9C54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800B9C54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800B9C58: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B9C5C: nop

    // 0x800B9C60: lh          $t7, 0xAE($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAE);
    // 0x800B9C64: nop

    // 0x800B9C68: bne         $t7, $zero, L_800B9CE4
    if (ctx->r15 != 0) {
        // 0x800B9C6C: nop
    
            goto L_800B9CE4;
    }
    // 0x800B9C6C: nop

    // 0x800B9C70: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B9C74: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800B9C78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800B9C7C: lwc1        $f10, 0x3C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800B9C80: nop

    // 0x800B9C84: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x800B9C88: nop

    // 0x800B9C8C: bc1f        L_800B9CE4
    if (!c1cs) {
        // 0x800B9C90: nop
    
            goto L_800B9CE4;
    }
    // 0x800B9C90: nop

    // 0x800B9C94: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800B9C98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B9C9C: nop

    // 0x800B9CA0: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x800B9CA4: nop

    // 0x800B9CA8: bc1f        L_800B9CE4
    if (!c1cs) {
        // 0x800B9CAC: nop
    
            goto L_800B9CE4;
    }
    // 0x800B9CAC: nop

    // 0x800B9CB0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B9CB4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800B9CB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B9CBC: lwc1        $f12, 0x3C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800B9CC0: jal         0x80015538
    // 0x800B9CC4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x800B9CC4: nop

    after_11:
    // 0x800B9CC8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B9CCC: nop

    // 0x800B9CD0: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x800B9CD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B9CD8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B9CDC: nop

    // 0x800B9CE0: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
L_800B9CE4:
    // 0x800B9CE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9CE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9CEC: jal         0x80029C40
    // 0x800B9CF0: nop

    func_80029C40(rdram, ctx);
        goto after_12;
    // 0x800B9CF0: nop

    after_12:
    // 0x800B9CF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9CF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B9D00: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x800B9D04: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B9D08: jal         0x800175F0
    // 0x800B9D0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_13;
    // 0x800B9D0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
L_800B9D10:
    // 0x800B9D10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800B9D14: jal         0x800C00F4
    // 0x800B9D18: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_800C00F4(rdram, ctx);
        goto after_14;
    // 0x800B9D18: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_14:
    // 0x800B9D1C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B9D20: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800B9D24: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800B9D28: lwc1        $f12, 0x18($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X18);
    // 0x800B9D2C: jal         0x80015538
    // 0x800B9D30: nop

    Math_WrapAngle(rdram, ctx);
        goto after_15;
    // 0x800B9D30: nop

    after_15:
    // 0x800B9D34: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B9D38: nop

    // 0x800B9D3C: swc1        $f0, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f0.u32l;
    // 0x800B9D40: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B9D44: nop

    // 0x800B9D48: lwc1        $f6, 0x3C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800B9D4C: nop

    // 0x800B9D50: swc1        $f6, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f6.u32l;
    // 0x800B9D54: b           L_800B9D5C
    // 0x800B9D58: nop

        goto L_800B9D5C;
    // 0x800B9D58: nop

L_800B9D5C:
    // 0x800B9D5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B9D60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B9D64: jr          $ra
    // 0x800B9D68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B9D68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006BBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BBF4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006BBF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006BBFC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006BC00: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006BC04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006BC08: jal         0x80014E80
    // 0x8006BC0C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8006BC0C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x8006BC10: bne         $v0, $zero, L_8006BC2C
    if (ctx->r2 != 0) {
        // 0x8006BC14: nop
    
            goto L_8006BC2C;
    }
    // 0x8006BC14: nop

    // 0x8006BC18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006BC1C: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x8006BC20: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006BC24: jal         0x80017BEC
    // 0x8006BC28: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80017BEC(rdram, ctx);
        goto after_1;
    // 0x8006BC28: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
L_8006BC2C:
    // 0x8006BC2C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8006BC30: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_8006BC34:
    // 0x8006BC34: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8006BC38: jal         0x80026E58
    // 0x8006BC3C: addiu       $a0, $zero, 0x26A
    ctx->r4 = ADD32(0, 0X26A);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_2;
    // 0x8006BC3C: addiu       $a0, $zero, 0x26A
    ctx->r4 = ADD32(0, 0X26A);
    after_2:
    // 0x8006BC40: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8006BC44: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8006BC48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006BC4C: bne         $t7, $at, L_8006BC64
    if (ctx->r15 != ctx->r1) {
        // 0x8006BC50: nop
    
            goto L_8006BC64;
    }
    // 0x8006BC50: nop

    // 0x8006BC54: b           L_8006BE7C
    // 0x8006BC58: nop

        goto L_8006BE7C;
    // 0x8006BC58: nop

    // 0x8006BC5C: b           L_8006BE74
    // 0x8006BC60: nop

        goto L_8006BE74;
    // 0x8006BC60: nop

L_8006BC64:
    // 0x8006BC64: jal         0x80014E80
    // 0x8006BC68: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x8006BC68: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x8006BC6C: bne         $v0, $zero, L_8006BD04
    if (ctx->r2 != 0) {
        // 0x8006BC70: nop
    
            goto L_8006BD04;
    }
    // 0x8006BC70: nop

    // 0x8006BC74: jal         0x80014E80
    // 0x8006BC78: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x8006BC78: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    after_4:
    // 0x8006BC7C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006BC80: jal         0x80014E80
    // 0x8006BC84: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x8006BC84: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_5:
    // 0x8006BC88: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006BC8C: jal         0x80014E80
    // 0x8006BC90: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    Math_Random(rdram, ctx);
        goto after_6;
    // 0x8006BC90: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    after_6:
    // 0x8006BC94: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8006BC98: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x8006BC9C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006BCA0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006BCA4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006BCA8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8006BCAC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006BCB0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8006BCB4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8006BCB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006BCBC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8006BCC0: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8006BCC4: mtc1        $s1, $f16
    ctx->f16.u32l = ctx->r17;
    // 0x8006BCC8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006BCCC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006BCD0: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8006BCD4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006BCD8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8006BCDC: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8006BCE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006BCE4: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8006BCE8: addiu       $a0, $zero, 0x2BC
    ctx->r4 = ADD32(0, 0X2BC);
    // 0x8006BCEC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8006BCF0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8006BCF4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8006BCF8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8006BCFC: jal         0x80081468
    // 0x8006BD00: nop

    func_80081468(rdram, ctx);
        goto after_7;
    // 0x8006BD00: nop

    after_7:
L_8006BD04:
    // 0x8006BD04: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8006BD08: lh          $t2, 0x4C22($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4C22);
    // 0x8006BD0C: nop

    // 0x8006BD10: beq         $t2, $zero, L_8006BDC8
    if (ctx->r10 == 0) {
        // 0x8006BD14: nop
    
            goto L_8006BDC8;
    }
    // 0x8006BD14: nop

    // 0x8006BD18: jal         0x80014E80
    // 0x8006BD1C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    Math_Random(rdram, ctx);
        goto after_8;
    // 0x8006BD1C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_8:
    // 0x8006BD20: bne         $v0, $zero, L_8006BDC0
    if (ctx->r2 != 0) {
        // 0x8006BD24: nop
    
            goto L_8006BDC0;
    }
    // 0x8006BD24: nop

    // 0x8006BD28: jal         0x80014E80
    // 0x8006BD2C: addiu       $a0, $zero, -0x190
    ctx->r4 = ADD32(0, -0X190);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x8006BD2C: addiu       $a0, $zero, -0x190
    ctx->r4 = ADD32(0, -0X190);
    after_9:
    // 0x8006BD30: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006BD34: jal         0x80014E80
    // 0x8006BD38: addiu       $a0, $zero, -0x12C
    ctx->r4 = ADD32(0, -0X12C);
    Math_Random(rdram, ctx);
        goto after_10;
    // 0x8006BD38: addiu       $a0, $zero, -0x12C
    ctx->r4 = ADD32(0, -0X12C);
    after_10:
    // 0x8006BD3C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006BD40: jal         0x80014E80
    // 0x8006BD44: addiu       $a0, $zero, -0x12C
    ctx->r4 = ADD32(0, -0X12C);
    Math_Random(rdram, ctx);
        goto after_11;
    // 0x8006BD44: addiu       $a0, $zero, -0x12C
    ctx->r4 = ADD32(0, -0X12C);
    after_11:
    // 0x8006BD48: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8006BD4C: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x8006BD50: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006BD54: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006BD58: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8006BD5C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8006BD60: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006BD64: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8006BD68: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8006BD6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006BD70: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8006BD74: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8006BD78: mtc1        $s1, $f16
    ctx->f16.u32l = ctx->r17;
    // 0x8006BD7C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006BD80: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006BD84: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8006BD88: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006BD8C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8006BD90: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8006BD94: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006BD98: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8006BD9C: addiu       $a0, $zero, 0x2CD
    ctx->r4 = ADD32(0, 0X2CD);
    // 0x8006BDA0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8006BDA4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8006BDA8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8006BDAC: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8006BDB0: jal         0x80081468
    // 0x8006BDB4: nop

    func_80081468(rdram, ctx);
        goto after_12;
    // 0x8006BDB4: nop

    after_12:
    // 0x8006BDB8: b           L_8006BE7C
    // 0x8006BDBC: nop

        goto L_8006BE7C;
    // 0x8006BDBC: nop

L_8006BDC0:
    // 0x8006BDC0: b           L_8006BE74
    // 0x8006BDC4: nop

        goto L_8006BE74;
    // 0x8006BDC4: nop

L_8006BDC8:
    // 0x8006BDC8: jal         0x80014E80
    // 0x8006BDCC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    Math_Random(rdram, ctx);
        goto after_13;
    // 0x8006BDCC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_13:
    // 0x8006BDD0: bne         $v0, $zero, L_8006BE74
    if (ctx->r2 != 0) {
        // 0x8006BDD4: nop
    
            goto L_8006BE74;
    }
    // 0x8006BDD4: nop

    // 0x8006BDD8: jal         0x80014E80
    // 0x8006BDDC: addiu       $a0, $zero, -0x320
    ctx->r4 = ADD32(0, -0X320);
    Math_Random(rdram, ctx);
        goto after_14;
    // 0x8006BDDC: addiu       $a0, $zero, -0x320
    ctx->r4 = ADD32(0, -0X320);
    after_14:
    // 0x8006BDE0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006BDE4: jal         0x80014E80
    // 0x8006BDE8: addiu       $a0, $zero, -0x12C
    ctx->r4 = ADD32(0, -0X12C);
    Math_Random(rdram, ctx);
        goto after_15;
    // 0x8006BDE8: addiu       $a0, $zero, -0x12C
    ctx->r4 = ADD32(0, -0X12C);
    after_15:
    // 0x8006BDEC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006BDF0: jal         0x80014E80
    // 0x8006BDF4: addiu       $a0, $zero, -0x12C
    ctx->r4 = ADD32(0, -0X12C);
    Math_Random(rdram, ctx);
        goto after_16;
    // 0x8006BDF4: addiu       $a0, $zero, -0x12C
    ctx->r4 = ADD32(0, -0X12C);
    after_16:
    // 0x8006BDF8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8006BDFC: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x8006BE00: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006BE04: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006BE08: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8006BE0C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8006BE10: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006BE14: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8006BE18: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8006BE1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006BE20: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8006BE24: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8006BE28: addiu       $t1, $s1, 0xC8
    ctx->r9 = ADD32(ctx->r17, 0XC8);
    // 0x8006BE2C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006BE30: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8006BE34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006BE38: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8006BE3C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006BE40: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8006BE44: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8006BE48: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006BE4C: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8006BE50: addiu       $a0, $zero, 0x2CD
    ctx->r4 = ADD32(0, 0X2CD);
    // 0x8006BE54: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8006BE58: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8006BE5C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8006BE60: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8006BE64: jal         0x80081468
    // 0x8006BE68: nop

    func_80081468(rdram, ctx);
        goto after_17;
    // 0x8006BE68: nop

    after_17:
    // 0x8006BE6C: b           L_8006BE7C
    // 0x8006BE70: nop

        goto L_8006BE7C;
    // 0x8006BE70: nop

L_8006BE74:
    // 0x8006BE74: b           L_8006BC34
    // 0x8006BE78: nop

        goto L_8006BC34;
    // 0x8006BE78: nop

L_8006BE7C:
    // 0x8006BE7C: b           L_8006BE84
    // 0x8006BE80: nop

        goto L_8006BE84;
    // 0x8006BE80: nop

L_8006BE84:
    // 0x8006BE84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006BE88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006BE8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BE90: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006BE94: jr          $ra
    // 0x8006BE98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8006BE98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800A1E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1E70: jr          $ra
    // 0x800A1E74: nop

    return;
    // 0x800A1E74: nop

    // 0x800A1E78: jr          $ra
    // 0x800A1E7C: nop

    return;
    // 0x800A1E7C: nop

;}
RECOMP_FUNC void func_800F7D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7D08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F7D0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F7D10: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800F7D14: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800F7D18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7D1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7D20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F7D24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F7D28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7D2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F7D30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7D34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F7D38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F7D3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F7D40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F7D44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F7D48: nop

    // 0x800F7D4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F7D50: nop

    // 0x800F7D54: bne         $t1, $zero, L_800F7DCC
    if (ctx->r9 != 0) {
        // 0x800F7D58: nop
    
            goto L_800F7DCC;
    }
    // 0x800F7D58: nop

    // 0x800F7D5C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F7D60: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F7D64: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F7D68: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F7D6C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F7D70: sh          $t4, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = ctx->r12;
    // 0x800F7D74: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F7D78: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x800F7D7C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800F7D80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7D84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7D88: jal         0x8001BBDC
    // 0x800F7D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800F7D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800F7D90: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F7D94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7D98: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x800F7D9C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800F7DA0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800F7DA4: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x800F7DA8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800F7DAC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F7DB0: addiu       $t2, $t1, 0x1C
    ctx->r10 = ADD32(ctx->r9, 0X1C);
    // 0x800F7DB4: addiu       $t3, $t3, -0x4648
    ctx->r11 = ADD32(ctx->r11, -0X4648);
    // 0x800F7DB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7DBC: addu        $a3, $t2, $t3
    ctx->r7 = ADD32(ctx->r10, ctx->r11);
    // 0x800F7DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F7DC4: jal         0x8001ABF4
    // 0x800F7DC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800F7DC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800F7DCC:
    // 0x800F7DCC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F7DD0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F7DD4: nop

    // 0x800F7DD8: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800F7DDC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F7DE0: nop

    // 0x800F7DE4: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800F7DE8: nop

    // 0x800F7DEC: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800F7DF0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F7DF4: nop

    // 0x800F7DF8: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800F7DFC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F7E00: nop

    // 0x800F7E04: lh          $t8, 0xB0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB0);
    // 0x800F7E08: nop

    // 0x800F7E0C: sh          $t8, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r24;
    // 0x800F7E10: b           L_800F7E18
    // 0x800F7E14: nop

        goto L_800F7E18;
    // 0x800F7E14: nop

L_800F7E18:
    // 0x800F7E18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7E1C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800F7E20: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800F7E24: jr          $ra
    // 0x800F7E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F7E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C689C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C689C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C68A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C68A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C68A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C68AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C68B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C68B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C68B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C68BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C68C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C68C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C68C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C68CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C68D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C68D4: nop

    // 0x800C68D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C68DC: nop

    // 0x800C68E0: bne         $t1, $zero, L_800C695C
    if (ctx->r9 != 0) {
        // 0x800C68E4: nop
    
            goto L_800C695C;
    }
    // 0x800C68E4: nop

    // 0x800C68E8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C68EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C68F0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800C68F4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C68F8: nop

    // 0x800C68FC: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800C6900: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C6904: nop

    // 0x800C6908: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
    // 0x800C690C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6910: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800C6914: addiu       $t6, $t6, -0x7E90
    ctx->r14 = ADD32(ctx->r14, -0X7E90);
    // 0x800C6918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C691C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C6920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C6924: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800C6928: jal         0x8001C0EC
    // 0x800C692C: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C692C: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    after_0:
    // 0x800C6930: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6934: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6938: jal         0x8001BBDC
    // 0x800C693C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800C693C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800C6940: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6944: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C694C: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x800C6950: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C6954: jal         0x800175F0
    // 0x800C6958: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800C6958: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800C695C:
    // 0x800C695C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C6960: nop

    // 0x800C6964: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800C6968: nop

    // 0x800C696C: bne         $t8, $zero, L_800C6A48
    if (ctx->r24 != 0) {
        // 0x800C6970: nop
    
            goto L_800C6A48;
    }
    // 0x800C6970: nop

    // 0x800C6974: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C6978: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x800C697C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800C6980: nop

    // 0x800C6984: bne         $t0, $at, L_800C69BC
    if (ctx->r8 != ctx->r1) {
        // 0x800C6988: nop
    
            goto L_800C69BC;
    }
    // 0x800C6988: nop

    // 0x800C698C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C6990: nop

    // 0x800C6994: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800C6998: nop

    // 0x800C699C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800C69A0: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
    // 0x800C69A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C69A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C69AC: jal         0x8001BBDC
    // 0x800C69B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800C69B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800C69B4: b           L_800C6A40
    // 0x800C69B8: nop

        goto L_800C6A40;
    // 0x800C69B8: nop

L_800C69BC:
    // 0x800C69BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C69C0: nop

    // 0x800C69C4: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800C69C8: nop

    // 0x800C69CC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800C69D0: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
    // 0x800C69D4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C69D8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C69DC: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x800C69E0: lwc1        $f9, 0x4DC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4DC8);
    // 0x800C69E4: lwc1        $f8, 0x4DCC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4DCC);
    // 0x800C69E8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800C69EC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800C69F0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800C69F4: swc1        $f16, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f16.u32l;
    // 0x800C69F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C69FC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C6A00: lwc1        $f18, 0x10($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X10);
    // 0x800C6A04: lwc1        $f7, 0x4DD0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4DD0);
    // 0x800C6A08: lwc1        $f6, 0x4DD4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4DD4);
    // 0x800C6A0C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800C6A10: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800C6A14: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800C6A18: swc1        $f10, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f10.u32l;
    // 0x800C6A1C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C6A20: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C6A24: lwc1        $f16, 0x14($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X14);
    // 0x800C6A28: lwc1        $f5, 0x4DD8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4DD8);
    // 0x800C6A2C: lwc1        $f4, 0x4DDC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4DDC);
    // 0x800C6A30: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800C6A34: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800C6A38: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800C6A3C: swc1        $f8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f8.u32l;
L_800C6A40:
    // 0x800C6A40: b           L_800C6B74
    // 0x800C6A44: nop

        goto L_800C6B74;
    // 0x800C6A44: nop

L_800C6A48:
    // 0x800C6A48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C6A4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C6A50: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x800C6A54: nop

    // 0x800C6A58: bne         $t2, $at, L_800C6AA8
    if (ctx->r10 != ctx->r1) {
        // 0x800C6A5C: nop
    
            goto L_800C6AA8;
    }
    // 0x800C6A5C: nop

    // 0x800C6A60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6A64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6A68: jal         0x8001B44C
    // 0x800C6A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800C6A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800C6A70: beq         $v0, $zero, L_800C6AA0
    if (ctx->r2 == 0) {
        // 0x800C6A74: nop
    
            goto L_800C6AA0;
    }
    // 0x800C6A74: nop

    // 0x800C6A78: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C6A7C: nop

    // 0x800C6A80: lh          $t1, 0xA8($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XA8);
    // 0x800C6A84: nop

    // 0x800C6A88: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x800C6A8C: sh          $t5, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r13;
    // 0x800C6A90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6A94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6A98: jal         0x8001BBDC
    // 0x800C6A9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800C6A9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_800C6AA0:
    // 0x800C6AA0: b           L_800C6B74
    // 0x800C6AA4: nop

        goto L_800C6B74;
    // 0x800C6AA4: nop

L_800C6AA8:
    // 0x800C6AA8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C6AAC: nop

    // 0x800C6AB0: lh          $t4, 0xA6($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XA6);
    // 0x800C6AB4: nop

    // 0x800C6AB8: bne         $t4, $zero, L_800C6AF0
    if (ctx->r12 != 0) {
        // 0x800C6ABC: nop
    
            goto L_800C6AF0;
    }
    // 0x800C6ABC: nop

    // 0x800C6AC0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C6AC4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x800C6AC8: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800C6ACC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C6AD0: nop

    // 0x800C6AD4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800C6AD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6ADC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6AE0: jal         0x8001BBDC
    // 0x800C6AE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x800C6AE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x800C6AE8: b           L_800C6B74
    // 0x800C6AEC: nop

        goto L_800C6B74;
    // 0x800C6AEC: nop

L_800C6AF0:
    // 0x800C6AF0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C6AF4: nop

    // 0x800C6AF8: lh          $t2, 0xA6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA6);
    // 0x800C6AFC: nop

    // 0x800C6B00: addiu       $t1, $t2, -0x1
    ctx->r9 = ADD32(ctx->r10, -0X1);
    // 0x800C6B04: sh          $t1, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r9;
    // 0x800C6B08: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C6B0C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C6B10: lwc1        $f10, 0xC($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0XC);
    // 0x800C6B14: lwc1        $f19, 0x4DE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4DE0);
    // 0x800C6B18: lwc1        $f18, 0x4DE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4DE4);
    // 0x800C6B1C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800C6B20: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x800C6B24: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800C6B28: swc1        $f6, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f6.u32l;
    // 0x800C6B2C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C6B30: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C6B34: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x800C6B38: lwc1        $f17, 0x4DE8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4DE8);
    // 0x800C6B3C: lwc1        $f16, 0x4DEC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4DEC);
    // 0x800C6B40: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800C6B44: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x800C6B48: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800C6B4C: swc1        $f4, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f4.u32l;
    // 0x800C6B50: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C6B54: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C6B58: lwc1        $f6, 0x14($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X14);
    // 0x800C6B5C: lwc1        $f11, 0x4DF0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4DF0);
    // 0x800C6B60: lwc1        $f10, 0x4DF4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4DF4);
    // 0x800C6B64: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800C6B68: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x800C6B6C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800C6B70: swc1        $f18, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f18.u32l;
L_800C6B74:
    // 0x800C6B74: b           L_800C6B7C
    // 0x800C6B78: nop

        goto L_800C6B7C;
    // 0x800C6B78: nop

L_800C6B7C:
    // 0x800C6B7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C6B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C6B84: jr          $ra
    // 0x800C6B88: nop

    return;
    // 0x800C6B88: nop

;}
RECOMP_FUNC void func_800C2230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2230: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C2234: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C2238: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C223C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C2240: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C2244: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C2248: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C224C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C2250: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2254: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C2258: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C225C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C2260: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C2264: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2268: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C226C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C2270: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800C2274: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C2278: jal         0x800175F0
    // 0x800C227C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800C227C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800C2280: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C2284: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800C2288: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800C228C: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800C2290: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x800C2294: jal         0x8007EDF4
    // 0x800C2298: nop

    func_8007EDF4(rdram, ctx);
        goto after_1;
    // 0x800C2298: nop

    after_1:
    // 0x800C229C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C22A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C22A4: jal         0x8002B114
    // 0x800C22A8: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x800C22A8: nop

    after_2:
    // 0x800C22AC: b           L_800C22B4
    // 0x800C22B0: nop

        goto L_800C22B4;
    // 0x800C22B0: nop

L_800C22B4:
    // 0x800C22B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C22B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C22BC: jr          $ra
    // 0x800C22C0: nop

    return;
    // 0x800C22C0: nop

;}
RECOMP_FUNC void func_80096350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096350: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096354: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80096358: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009635C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80096360: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80096364: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80096368: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009636C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096370: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096374: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096378: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009637C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80096380: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80096384: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80096388: beq         $s0, $at, L_800963A4
    if (ctx->r16 == ctx->r1) {
        // 0x8009638C: nop
    
            goto L_800963A4;
    }
    // 0x8009638C: nop

    // 0x80096390: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80096394: beq         $s0, $at, L_800963B4
    if (ctx->r16 == ctx->r1) {
        // 0x80096398: nop
    
            goto L_800963B4;
    }
    // 0x80096398: nop

    // 0x8009639C: b           L_800963C4
    // 0x800963A0: nop

        goto L_800963C4;
    // 0x800963A0: nop

L_800963A4:
    // 0x800963A4: jal         0x800961A8
    // 0x800963A8: nop

    func_800961A8(rdram, ctx);
        goto after_0;
    // 0x800963A8: nop

    after_0:
    // 0x800963AC: b           L_800963C4
    // 0x800963B0: nop

        goto L_800963C4;
    // 0x800963B0: nop

L_800963B4:
    // 0x800963B4: jal         0x80096254
    // 0x800963B8: nop

    func_80096254(rdram, ctx);
        goto after_1;
    // 0x800963B8: nop

    after_1:
    // 0x800963BC: b           L_800963C4
    // 0x800963C0: nop

        goto L_800963C4;
    // 0x800963C0: nop

L_800963C4:
    // 0x800963C4: b           L_800963CC
    // 0x800963C8: nop

        goto L_800963CC;
    // 0x800963C8: nop

L_800963CC:
    // 0x800963CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800963D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800963D4: jr          $ra
    // 0x800963D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800963D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80067748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067748: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x8006774C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80067750: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x80067754: swc1        $f12, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f12.u32l;
    // 0x80067758: swc1        $f14, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f14.u32l;
    // 0x8006775C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80067760: lh          $t6, 0x7788($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7788);
    // 0x80067764: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80067768: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8006776C: nop

    // 0x80067770: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80067774: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80067778: nop

    // 0x8006777C: bc1f        L_800677A0
    if (!c1cs) {
        // 0x80067780: nop
    
            goto L_800677A0;
    }
    // 0x80067780: nop

    // 0x80067784: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80067788: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006778C: sb          $t7, 0x76E4($at)
    MEM_B(0X76E4, ctx->r1) = ctx->r15;
    // 0x80067790: jal         0x8006770C
    // 0x80067794: nop

    func_8006770C(rdram, ctx);
        goto after_0;
    // 0x80067794: nop

    after_0:
    // 0x80067798: b           L_8006827C
    // 0x8006779C: nop

        goto L_8006827C;
    // 0x8006779C: nop

L_800677A0:
    // 0x800677A0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800677A4: lh          $t8, 0x77A8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X77A8);
    // 0x800677A8: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x800677AC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800677B0: nop

    // 0x800677B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800677B8: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x800677BC: nop

    // 0x800677C0: bc1f        L_800677E4
    if (!c1cs) {
        // 0x800677C4: nop
    
            goto L_800677E4;
    }
    // 0x800677C4: nop

    // 0x800677C8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800677CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800677D0: sb          $t9, 0x76E4($at)
    MEM_B(0X76E4, ctx->r1) = ctx->r25;
    // 0x800677D4: jal         0x8006770C
    // 0x800677D8: nop

    func_8006770C(rdram, ctx);
        goto after_1;
    // 0x800677D8: nop

    after_1:
    // 0x800677DC: b           L_8006827C
    // 0x800677E0: nop

        goto L_8006827C;
    // 0x800677E0: nop

L_800677E4:
    // 0x800677E4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800677E8: lh          $t0, 0x77B8($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X77B8);
    // 0x800677EC: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x800677F0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800677F4: nop

    // 0x800677F8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800677FC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80067800: nop

    // 0x80067804: bc1f        L_80067828
    if (!c1cs) {
        // 0x80067808: nop
    
            goto L_80067828;
    }
    // 0x80067808: nop

    // 0x8006780C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80067810: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067814: sb          $t1, 0x76E4($at)
    MEM_B(0X76E4, ctx->r1) = ctx->r9;
    // 0x80067818: jal         0x8006770C
    // 0x8006781C: nop

    func_8006770C(rdram, ctx);
        goto after_2;
    // 0x8006781C: nop

    after_2:
    // 0x80067820: b           L_8006827C
    // 0x80067824: nop

        goto L_8006827C;
    // 0x80067824: nop

L_80067828:
    // 0x80067828: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006782C: lh          $t2, 0x77D8($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X77D8);
    // 0x80067830: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80067834: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80067838: nop

    // 0x8006783C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80067840: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80067844: nop

    // 0x80067848: bc1f        L_8006786C
    if (!c1cs) {
        // 0x8006784C: nop
    
            goto L_8006786C;
    }
    // 0x8006784C: nop

    // 0x80067850: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80067854: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067858: sb          $t3, 0x76E4($at)
    MEM_B(0X76E4, ctx->r1) = ctx->r11;
    // 0x8006785C: jal         0x8006770C
    // 0x80067860: nop

    func_8006770C(rdram, ctx);
        goto after_3;
    // 0x80067860: nop

    after_3:
    // 0x80067864: b           L_8006827C
    // 0x80067868: nop

        goto L_8006827C;
    // 0x80067868: nop

L_8006786C:
    // 0x8006786C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067870: sb          $zero, 0x76E4($at)
    MEM_B(0X76E4, ctx->r1) = 0;
    // 0x80067874: lwc1        $f12, 0xE0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80067878: lwc1        $f14, 0xE4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8006787C: lw          $a2, 0xE8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE8);
    // 0x80067880: addiu       $t4, $sp, 0xB8
    ctx->r12 = ADD32(ctx->r29, 0XB8);
    // 0x80067884: addiu       $t5, $sp, 0xB4
    ctx->r13 = ADD32(ctx->r29, 0XB4);
    // 0x80067888: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8006788C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80067890: jal         0x80065AEC
    // 0x80067894: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    func_80065AEC(rdram, ctx);
        goto after_4;
    // 0x80067894: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    after_4:
    // 0x80067898: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006789C: lh          $t7, 0x7910($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7910);
    // 0x800678A0: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x800678A4: nop

    // 0x800678A8: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800678AC: beq         $at, $zero, L_800678D0
    if (ctx->r1 == 0) {
        // 0x800678B0: nop
    
            goto L_800678D0;
    }
    // 0x800678B0: nop

    // 0x800678B4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800678B8: lh          $t9, 0x7918($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7918);
    // 0x800678BC: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x800678C0: nop

    // 0x800678C4: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800678C8: bne         $at, $zero, L_800678E0
    if (ctx->r1 != 0) {
        // 0x800678CC: nop
    
            goto L_800678E0;
    }
    // 0x800678CC: nop

L_800678D0:
    // 0x800678D0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800678D4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x800678D8: b           L_80068264
    // 0x800678DC: nop

        goto L_80068264;
    // 0x800678DC: nop

L_800678E0:
    // 0x800678E0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800678E4: lh          $t1, 0x7910($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7910);
    // 0x800678E8: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x800678EC: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x800678F0: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800678F4: mflo        $t3
    ctx->r11 = lo;
    // 0x800678F8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800678FC: sw          $t5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r13;
    // 0x80067900: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x80067904: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80067908: lw          $t6, 0x7954($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7954);
    // 0x8006790C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80067910: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80067914: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80067918: nop

    // 0x8006791C: sw          $t0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r8;
    // 0x80067920: lw          $t1, 0xDC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XDC);
    // 0x80067924: nop

    // 0x80067928: bne         $t1, $zero, L_80067940
    if (ctx->r9 != 0) {
        // 0x8006792C: nop
    
            goto L_80067940;
    }
    // 0x8006792C: nop

    // 0x80067930: jal         0x8006770C
    // 0x80067934: nop

    func_8006770C(rdram, ctx);
        goto after_5;
    // 0x80067934: nop

    after_5:
    // 0x80067938: b           L_8006827C
    // 0x8006793C: nop

        goto L_8006827C;
    // 0x8006793C: nop

L_80067940:
    // 0x80067940: lw          $t2, 0xDC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XDC);
    // 0x80067944: nop

    // 0x80067948: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8006794C: nop

    // 0x80067950: sw          $t3, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r11;
    // 0x80067954: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x80067958: nop

    // 0x8006795C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80067960: nop

    // 0x80067964: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
    // 0x80067968: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x8006796C: nop

    // 0x80067970: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x80067974: nop

    // 0x80067978: sw          $t6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r14;
    // 0x8006797C: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x80067980: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80067984: lh          $t8, 0x7788($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7788);
    // 0x80067988: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x8006798C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80067990: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80067994: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x80067998: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006799C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800679A0: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x800679A4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800679A8: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x800679AC: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x800679B0: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x800679B4: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x800679B8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800679BC: lh          $t1, 0x77A8($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X77A8);
    // 0x800679C0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x800679C4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800679C8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800679CC: sll         $t3, $t3, 6
    ctx->r11 = S32(ctx->r11 << 6);
    // 0x800679D0: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800679D4: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x800679D8: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x800679DC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800679E0: sub.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x800679E4: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x800679E8: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x800679EC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800679F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800679F4: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x800679F8: nop

    // 0x800679FC: div.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80067A00: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80067A04: nop

    // 0x80067A08: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80067A0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80067A10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80067A14: nop

    // 0x80067A18: cvt.w.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80067A1C: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80067A20: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80067A24: sw          $t5, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r13;
    // 0x80067A28: nop

    // 0x80067A2C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80067A30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80067A34: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80067A38: nop

    // 0x80067A3C: div.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80067A40: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80067A44: nop

    // 0x80067A48: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80067A4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80067A50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80067A54: nop

    // 0x80067A58: cvt.w.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80067A5C: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x80067A60: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80067A64: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    // 0x80067A68: nop

    // 0x80067A6C: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x80067A70: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x80067A74: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80067A78: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80067A7C: sh          $t1, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r9;
    // 0x80067A80: lh          $t2, 0xCA($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XCA);
    // 0x80067A84: nop

    // 0x80067A88: slti        $at, $t2, 0x100
    ctx->r1 = SIGNED(ctx->r10) < 0X100 ? 1 : 0;
    // 0x80067A8C: beq         $at, $zero, L_80067A9C
    if (ctx->r1 == 0) {
        // 0x80067A90: nop
    
            goto L_80067A9C;
    }
    // 0x80067A90: nop

    // 0x80067A94: bgez        $t2, L_80067AAC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80067A98: nop
    
            goto L_80067AAC;
    }
    // 0x80067A98: nop

L_80067A9C:
    // 0x80067A9C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80067AA0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80067AA4: b           L_80068264
    // 0x80067AA8: nop

        goto L_80068264;
    // 0x80067AA8: nop

L_80067AAC:
    // 0x80067AAC: lh          $t5, 0xCA($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XCA);
    // 0x80067AB0: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x80067AB4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80067AB8: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x80067ABC: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80067AC0: lb          $t8, 0x0($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X0);
    // 0x80067AC4: nop

    // 0x80067AC8: bne         $t8, $zero, L_80067B6C
    if (ctx->r24 != 0) {
        // 0x80067ACC: nop
    
            goto L_80067B6C;
    }
    // 0x80067ACC: nop

    // 0x80067AD0: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x80067AD4: nop

    // 0x80067AD8: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80067ADC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80067AE0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80067AE4: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80067AE8: nop

    // 0x80067AEC: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80067AF0: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x80067AF4: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x80067AF8: nop

    // 0x80067AFC: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80067B00: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80067B04: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80067B08: addiu       $t3, $t2, 0x3C
    ctx->r11 = ADD32(ctx->r10, 0X3C);
    // 0x80067B0C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80067B10: nop

    // 0x80067B14: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80067B18: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x80067B1C: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x80067B20: nop

    // 0x80067B24: sll         $t4, $t5, 4
    ctx->r12 = S32(ctx->r13 << 4);
    // 0x80067B28: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x80067B2C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80067B30: addiu       $t7, $t4, 0x3C
    ctx->r15 = ADD32(ctx->r12, 0X3C);
    // 0x80067B34: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80067B38: nop

    // 0x80067B3C: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80067B40: swc1        $f16, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f16.u32l;
    // 0x80067B44: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x80067B48: nop

    // 0x80067B4C: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x80067B50: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80067B54: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80067B58: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80067B5C: nop

    // 0x80067B60: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80067B64: b           L_80067C04
    // 0x80067B68: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
        goto L_80067C04;
    // 0x80067B68: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
L_80067B6C:
    // 0x80067B6C: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x80067B70: nop

    // 0x80067B74: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80067B78: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80067B7C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80067B80: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80067B84: nop

    // 0x80067B88: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80067B8C: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x80067B90: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x80067B94: nop

    // 0x80067B98: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80067B9C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80067BA0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80067BA4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80067BA8: nop

    // 0x80067BAC: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80067BB0: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x80067BB4: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x80067BB8: nop

    // 0x80067BBC: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x80067BC0: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x80067BC4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80067BC8: addiu       $t4, $t5, 0x3C
    ctx->r12 = ADD32(ctx->r13, 0X3C);
    // 0x80067BCC: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80067BD0: nop

    // 0x80067BD4: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80067BD8: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    // 0x80067BDC: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80067BE0: nop

    // 0x80067BE4: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x80067BE8: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x80067BEC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80067BF0: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x80067BF4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80067BF8: nop

    // 0x80067BFC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80067C00: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
L_80067C04:
    // 0x80067C04: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80067C08: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80067C0C: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80067C10: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80067C14: sub.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80067C18: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80067C1C: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80067C20: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80067C24: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80067C28: sub.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80067C2C: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80067C30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80067C34: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80067C38: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80067C3C: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x80067C40: nop

    // 0x80067C44: bc1f        L_80067C54
    if (!c1cs) {
        // 0x80067C48: nop
    
            goto L_80067C54;
    }
    // 0x80067C48: nop

    // 0x80067C4C: b           L_80067C5C
    // 0x80067C50: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
        goto L_80067C5C;
    // 0x80067C50: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
L_80067C54:
    // 0x80067C54: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80067C58: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
L_80067C5C:
    // 0x80067C5C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80067C60: addiu       $t1, $sp, 0x94
    ctx->r9 = ADD32(ctx->r29, 0X94);
    // 0x80067C64: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
    // 0x80067C68: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80067C6C: addiu       $t3, $sp, 0x94
    ctx->r11 = ADD32(ctx->r29, 0X94);
    // 0x80067C70: sb          $t2, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r10;
    // 0x80067C74: lh          $t4, 0xCA($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XCA);
    // 0x80067C78: lw          $t5, 0xD8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD8);
    // 0x80067C7C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80067C80: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x80067C84: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x80067C88: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x80067C8C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80067C90: lbu         $t0, 0x1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1);
    // 0x80067C94: lw          $t1, 0xD0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD0);
    // 0x80067C98: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
    // 0x80067C9C: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80067CA0: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80067CA4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80067CA8: beq         $t3, $at, L_80067FF0
    if (ctx->r11 == ctx->r1) {
        // 0x80067CAC: sb          $t3, 0x97($sp)
        MEM_B(0X97, ctx->r29) = ctx->r11;
            goto L_80067FF0;
    }
    // 0x80067CAC: sb          $t3, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r11;
L_80067CB0:
    // 0x80067CB0: lbu         $t5, 0x97($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X97);
    // 0x80067CB4: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x80067CB8: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x80067CBC: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x80067CC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80067CC4: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80067CC8: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80067CCC: nop

    // 0x80067CD0: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x80067CD4: lbu         $t1, 0x97($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X97);
    // 0x80067CD8: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x80067CDC: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x80067CE0: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x80067CE4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80067CE8: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x80067CEC: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80067CF0: nop

    // 0x80067CF4: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x80067CF8: lbu         $t4, 0x97($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X97);
    // 0x80067CFC: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x80067D00: sll         $t7, $t4, 3
    ctx->r15 = S32(ctx->r12 << 3);
    // 0x80067D04: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x80067D08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80067D0C: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x80067D10: lw          $t8, 0x8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X8);
    // 0x80067D14: nop

    // 0x80067D18: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80067D1C: lbu         $t9, 0x97($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X97);
    // 0x80067D20: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x80067D24: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80067D28: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80067D2C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80067D30: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x80067D34: lw          $t3, 0xC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC);
    // 0x80067D38: nop

    // 0x80067D3C: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x80067D40: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80067D44: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80067D48: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80067D4C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80067D50: lwc1        $f12, 0xE0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80067D54: lwc1        $f14, 0xE8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80067D58: or          $t7, $t5, $zero
    ctx->r15 = ctx->r13 | 0;
    // 0x80067D5C: sra         $t6, $t5, 31
    ctx->r14 = S32(SIGNED(ctx->r13) >> 31);
    // 0x80067D60: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x80067D64: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80067D68: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x80067D6C: sra         $t2, $t9, 31
    ctx->r10 = S32(SIGNED(ctx->r25) >> 31);
    // 0x80067D70: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80067D74: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80067D78: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80067D7C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80067D80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80067D84: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80067D88: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x80067D8C: jal         0x80015D2C
    // 0x80067D90: sra         $a2, $t4, 31
    ctx->r6 = S32(SIGNED(ctx->r12) >> 31);
    Math_SolvePlaneY(rdram, ctx);
        goto after_6;
    // 0x80067D90: sra         $a2, $t4, 31
    ctx->r6 = S32(SIGNED(ctx->r12) >> 31);
    after_6:
    // 0x80067D94: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80067D98: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80067D9C: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80067DA0: nop

    // 0x80067DA4: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x80067DA8: nop

    // 0x80067DAC: bc1f        L_80067DBC
    if (!c1cs) {
        // 0x80067DB0: nop
    
            goto L_80067DBC;
    }
    // 0x80067DB0: nop

    // 0x80067DB4: b           L_80067DC4
    // 0x80067DB8: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
        goto L_80067DC4;
    // 0x80067DB8: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
L_80067DBC:
    // 0x80067DBC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80067DC0: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
L_80067DC4:
    // 0x80067DC4: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x80067DC8: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x80067DCC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80067DD0: addu        $t6, $sp, $t5
    ctx->r14 = ADD32(ctx->r29, ctx->r13);
    // 0x80067DD4: lbu         $t6, 0x94($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X94);
    // 0x80067DD8: nop

    // 0x80067DDC: beq         $t6, $at, L_80067EBC
    if (ctx->r14 == ctx->r1) {
        // 0x80067DE0: nop
    
            goto L_80067EBC;
    }
    // 0x80067DE0: nop

    // 0x80067DE4: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80067DE8: lwc1        $f12, 0xE0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80067DEC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80067DF0: addu        $t1, $sp, $t8
    ctx->r9 = ADD32(ctx->r29, ctx->r24);
    // 0x80067DF4: lw          $t1, 0x84($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X84);
    // 0x80067DF8: addu        $t0, $sp, $t8
    ctx->r8 = ADD32(ctx->r29, ctx->r24);
    // 0x80067DFC: lw          $t0, 0x8C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X8C);
    // 0x80067E00: or          $t3, $t1, $zero
    ctx->r11 = ctx->r9 | 0;
    // 0x80067E04: sra         $t2, $t1, 31
    ctx->r10 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80067E08: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80067E0C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80067E10: addu        $t9, $sp, $t8
    ctx->r25 = ADD32(ctx->r29, ctx->r24);
    // 0x80067E14: lw          $t9, 0x7C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7C);
    // 0x80067E18: addu        $t6, $sp, $t8
    ctx->r14 = ADD32(ctx->r29, ctx->r24);
    // 0x80067E1C: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x80067E20: sra         $t4, $t9, 31
    ctx->r12 = S32(SIGNED(ctx->r25) >> 31);
    // 0x80067E24: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80067E28: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80067E2C: lw          $t6, 0x74($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X74);
    // 0x80067E30: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x80067E34: sra         $a2, $t0, 31
    ctx->r6 = S32(SIGNED(ctx->r8) >> 31);
    // 0x80067E38: lwc1        $f14, 0xE8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80067E3C: sra         $t0, $t6, 31
    ctx->r8 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80067E40: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x80067E44: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80067E48: jal         0x80015D2C
    // 0x80067E4C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    Math_SolvePlaneY(rdram, ctx);
        goto after_7;
    // 0x80067E4C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_7:
    // 0x80067E50: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80067E54: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x80067E58: nop

    // 0x80067E5C: bne         $t7, $zero, L_80067E90
    if (ctx->r15 != 0) {
        // 0x80067E60: nop
    
            goto L_80067E90;
    }
    // 0x80067E60: nop

    // 0x80067E64: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80067E68: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80067E6C: nop

    // 0x80067E70: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80067E74: nop

    // 0x80067E78: bc1f        L_80067E88
    if (!c1cs) {
        // 0x80067E7C: nop
    
            goto L_80067E88;
    }
    // 0x80067E7C: nop

    // 0x80067E80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80067E84: sh          $t2, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r10;
L_80067E88:
    // 0x80067E88: b           L_80067EB4
    // 0x80067E8C: nop

        goto L_80067EB4;
    // 0x80067E8C: nop

L_80067E90:
    // 0x80067E90: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80067E94: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80067E98: nop

    // 0x80067E9C: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x80067EA0: nop

    // 0x80067EA4: bc1f        L_80067EB4
    if (!c1cs) {
        // 0x80067EA8: nop
    
            goto L_80067EB4;
    }
    // 0x80067EA8: nop

    // 0x80067EAC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80067EB0: sh          $t3, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r11;
L_80067EB4:
    // 0x80067EB4: b           L_80067EC4
    // 0x80067EB8: nop

        goto L_80067EC4;
    // 0x80067EB8: nop

L_80067EBC:
    // 0x80067EBC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80067EC0: sh          $t9, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r25;
L_80067EC4:
    // 0x80067EC4: lh          $t4, 0x3A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3A);
    // 0x80067EC8: nop

    // 0x80067ECC: beq         $t4, $zero, L_80067FCC
    if (ctx->r12 == 0) {
        // 0x80067ED0: nop
    
            goto L_80067FCC;
    }
    // 0x80067ED0: nop

    // 0x80067ED4: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x80067ED8: lbu         $t5, 0x97($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X97);
    // 0x80067EDC: addu        $t6, $sp, $t8
    ctx->r14 = ADD32(ctx->r29, ctx->r24);
    // 0x80067EE0: sb          $t5, 0x94($t6)
    MEM_B(0X94, ctx->r14) = ctx->r13;
    // 0x80067EE4: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x80067EE8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80067EEC: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80067EF0: addu        $t2, $sp, $t7
    ctx->r10 = ADD32(ctx->r29, ctx->r15);
    // 0x80067EF4: sw          $t0, 0x8C($t2)
    MEM_W(0X8C, ctx->r10) = ctx->r8;
    // 0x80067EF8: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x80067EFC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80067F00: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80067F04: addu        $t5, $sp, $t4
    ctx->r13 = ADD32(ctx->r29, ctx->r12);
    // 0x80067F08: sw          $t3, 0x84($t5)
    MEM_W(0X84, ctx->r13) = ctx->r11;
    // 0x80067F0C: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x80067F10: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80067F14: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80067F18: addu        $t0, $sp, $t1
    ctx->r8 = ADD32(ctx->r29, ctx->r9);
    // 0x80067F1C: sw          $t8, 0x7C($t0)
    MEM_W(0X7C, ctx->r8) = ctx->r24;
    // 0x80067F20: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x80067F24: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80067F28: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x80067F2C: addu        $t3, $sp, $t9
    ctx->r11 = ADD32(ctx->r29, ctx->r25);
    // 0x80067F30: sw          $t7, 0x74($t3)
    MEM_W(0X74, ctx->r11) = ctx->r15;
    // 0x80067F34: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80067F38: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80067F3C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80067F40: addu        $t6, $sp, $t5
    ctx->r14 = ADD32(ctx->r29, ctx->r13);
    // 0x80067F44: swc1        $f18, 0x54($t6)
    MEM_W(0X54, ctx->r14) = ctx->f18.u32l;
    // 0x80067F48: lbu         $t1, 0x97($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X97);
    // 0x80067F4C: lw          $t8, 0xD4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD4);
    // 0x80067F50: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x80067F54: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x80067F58: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x80067F5C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80067F60: addu        $t2, $t8, $t0
    ctx->r10 = ADD32(ctx->r24, ctx->r8);
    // 0x80067F64: lw          $t7, 0x10($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X10);
    // 0x80067F68: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80067F6C: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x80067F70: sw          $t7, 0x6C($t4)
    MEM_W(0X6C, ctx->r12) = ctx->r15;
    // 0x80067F74: lbu         $t6, 0x97($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X97);
    // 0x80067F78: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x80067F7C: sll         $t1, $t6, 3
    ctx->r9 = S32(ctx->r14 << 3);
    // 0x80067F80: subu        $t1, $t1, $t6
    ctx->r9 = SUB32(ctx->r9, ctx->r14);
    // 0x80067F84: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x80067F88: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80067F8C: addu        $t8, $t5, $t1
    ctx->r24 = ADD32(ctx->r13, ctx->r9);
    // 0x80067F90: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x80067F94: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x80067F98: addu        $t7, $sp, $t9
    ctx->r15 = ADD32(ctx->r29, ctx->r25);
    // 0x80067F9C: sw          $t0, 0x64($t7)
    MEM_W(0X64, ctx->r15) = ctx->r8;
    // 0x80067FA0: lbu         $t4, 0x97($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X97);
    // 0x80067FA4: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x80067FA8: sll         $t6, $t4, 3
    ctx->r14 = S32(ctx->r12 << 3);
    // 0x80067FAC: subu        $t6, $t6, $t4
    ctx->r14 = SUB32(ctx->r14, ctx->r12);
    // 0x80067FB0: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x80067FB4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80067FB8: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x80067FBC: lw          $t1, 0x18($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X18);
    // 0x80067FC0: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80067FC4: addu        $t0, $sp, $t2
    ctx->r8 = ADD32(ctx->r29, ctx->r10);
    // 0x80067FC8: sw          $t1, 0x5C($t0)
    MEM_W(0X5C, ctx->r8) = ctx->r9;
L_80067FCC:
    // 0x80067FCC: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x80067FD0: lw          $t4, 0xD0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD0);
    // 0x80067FD4: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x80067FD8: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    // 0x80067FDC: addu        $t3, $t4, $t7
    ctx->r11 = ADD32(ctx->r12, ctx->r15);
    // 0x80067FE0: lbu         $t6, 0x0($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X0);
    // 0x80067FE4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80067FE8: bne         $t6, $at, L_80067CB0
    if (ctx->r14 != ctx->r1) {
        // 0x80067FEC: sb          $t6, 0x97($sp)
        MEM_B(0X97, ctx->r29) = ctx->r14;
            goto L_80067CB0;
    }
    // 0x80067FEC: sb          $t6, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r14;
L_80067FF0:
    // 0x80067FF0: addiu       $t5, $sp, 0x94
    ctx->r13 = ADD32(ctx->r29, 0X94);
    // 0x80067FF4: lbu         $t8, 0x0($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X0);
    // 0x80067FF8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80067FFC: bne         $t8, $at, L_8006802C
    if (ctx->r24 != ctx->r1) {
        // 0x80068000: nop
    
            goto L_8006802C;
    }
    // 0x80068000: nop

    // 0x80068004: lbu         $t1, 0x1($t5)
    ctx->r9 = MEM_BU(ctx->r13, 0X1);
    // 0x80068008: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8006800C: bne         $t1, $at, L_8006802C
    if (ctx->r9 != ctx->r1) {
        // 0x80068010: nop
    
            goto L_8006802C;
    }
    // 0x80068010: nop

    // 0x80068014: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80068018: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x8006801C: b           L_80068264
    // 0x80068020: nop

        goto L_80068264;
    // 0x80068020: nop

    // 0x80068024: b           L_80068108
    // 0x80068028: nop

        goto L_80068108;
    // 0x80068028: nop

L_8006802C:
    // 0x8006802C: addiu       $t0, $sp, 0x94
    ctx->r8 = ADD32(ctx->r29, 0X94);
    // 0x80068030: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x80068034: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80068038: bne         $t9, $at, L_8006809C
    if (ctx->r25 != ctx->r1) {
        // 0x8006803C: nop
    
            goto L_8006809C;
    }
    // 0x8006803C: nop

    // 0x80068040: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x80068044: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x80068048: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006804C: addiu       $t3, $sp, 0x84
    ctx->r11 = ADD32(ctx->r29, 0X84);
    // 0x80068050: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80068054: addiu       $t6, $sp, 0x7C
    ctx->r14 = ADD32(ctx->r29, 0X7C);
    // 0x80068058: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8006805C: addiu       $t8, $zero, -0x7530
    ctx->r24 = ADD32(0, -0X7530);
    // 0x80068060: addiu       $t5, $sp, 0x74
    ctx->r13 = ADD32(ctx->r29, 0X74);
    // 0x80068064: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x80068068: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006806C: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x80068070: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80068074: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80068078: lwc1        $f10, 0x4F78($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F78);
    // 0x8006807C: addiu       $t0, $sp, 0x54
    ctx->r8 = ADD32(ctx->r29, 0X54);
    // 0x80068080: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x80068084: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80068088: addiu       $t4, $sp, 0x64
    ctx->r12 = ADD32(ctx->r29, 0X64);
    // 0x8006808C: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x80068090: addiu       $t7, $sp, 0x5C
    ctx->r15 = ADD32(ctx->r29, 0X5C);
    // 0x80068094: b           L_80068108
    // 0x80068098: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
        goto L_80068108;
    // 0x80068098: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
L_8006809C:
    // 0x8006809C: addiu       $t3, $sp, 0x94
    ctx->r11 = ADD32(ctx->r29, 0X94);
    // 0x800680A0: lbu         $t6, 0x1($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X1);
    // 0x800680A4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800680A8: bne         $t6, $at, L_80068108
    if (ctx->r14 != ctx->r1) {
        // 0x800680AC: nop
    
            goto L_80068108;
    }
    // 0x800680AC: nop

    // 0x800680B0: addiu       $t8, $sp, 0x8C
    ctx->r24 = ADD32(ctx->r29, 0X8C);
    // 0x800680B4: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x800680B8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800680BC: addiu       $t1, $sp, 0x84
    ctx->r9 = ADD32(ctx->r29, 0X84);
    // 0x800680C0: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x800680C4: addiu       $t2, $sp, 0x7C
    ctx->r10 = ADD32(ctx->r29, 0X7C);
    // 0x800680C8: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x800680CC: addiu       $t0, $zero, 0x7530
    ctx->r8 = ADD32(0, 0X7530);
    // 0x800680D0: addiu       $t9, $sp, 0x74
    ctx->r25 = ADD32(ctx->r29, 0X74);
    // 0x800680D4: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
    // 0x800680D8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800680DC: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x800680E0: sw          $t4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r12;
    // 0x800680E4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800680E8: lwc1        $f4, 0x4F7C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F7C);
    // 0x800680EC: addiu       $t3, $sp, 0x54
    ctx->r11 = ADD32(ctx->r29, 0X54);
    // 0x800680F0: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x800680F4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800680F8: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x800680FC: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x80068100: addiu       $t5, $sp, 0x5C
    ctx->r13 = ADD32(ctx->r29, 0X5C);
    // 0x80068104: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
L_80068108:
    // 0x80068108: addiu       $t1, $sp, 0x6C
    ctx->r9 = ADD32(ctx->r29, 0X6C);
    // 0x8006810C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80068110: nop

    // 0x80068114: bltz        $t2, L_8006812C
    if (SIGNED(ctx->r10) < 0) {
        // 0x80068118: nop
    
            goto L_8006812C;
    }
    // 0x80068118: nop

    // 0x8006811C: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x80068120: nop

    // 0x80068124: blez        $t0, L_80068138
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80068128: nop
    
            goto L_80068138;
    }
    // 0x80068128: nop

L_8006812C:
    // 0x8006812C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80068130: b           L_8006813C
    // 0x80068134: sb          $t9, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r25;
        goto L_8006813C;
    // 0x80068134: sb          $t9, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r25;
L_80068138:
    // 0x80068138: sb          $zero, 0x39($sp)
    MEM_B(0X39, ctx->r29) = 0;
L_8006813C:
    // 0x8006813C: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
L_80068140:
    // 0x80068140: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80068144: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80068148: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x8006814C: addu        $t3, $sp, $t7
    ctx->r11 = ADD32(ctx->r29, ctx->r15);
    // 0x80068150: lw          $t3, 0x8C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X8C);
    // 0x80068154: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80068158: sw          $t3, 0x76F0($at)
    MEM_W(0X76F0, ctx->r1) = ctx->r11;
    // 0x8006815C: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x80068160: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80068164: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80068168: addu        $t5, $sp, $t8
    ctx->r13 = ADD32(ctx->r29, ctx->r24);
    // 0x8006816C: lw          $t5, 0x84($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X84);
    // 0x80068170: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80068174: sw          $t5, 0x7700($at)
    MEM_W(0X7700, ctx->r1) = ctx->r13;
    // 0x80068178: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x8006817C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80068180: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80068184: addu        $t0, $sp, $t1
    ctx->r8 = ADD32(ctx->r29, ctx->r9);
    // 0x80068188: lw          $t0, 0x7C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7C);
    // 0x8006818C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80068190: sw          $t0, 0x7710($at)
    MEM_W(0X7710, ctx->r1) = ctx->r8;
    // 0x80068194: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x80068198: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006819C: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800681A0: addu        $t3, $sp, $t4
    ctx->r11 = ADD32(ctx->r29, ctx->r12);
    // 0x800681A4: lw          $t3, 0x74($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X74);
    // 0x800681A8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800681AC: sw          $t3, 0x7720($at)
    MEM_W(0X7720, ctx->r1) = ctx->r11;
    // 0x800681B0: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x800681B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800681B8: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800681BC: addu        $t5, $sp, $t6
    ctx->r13 = ADD32(ctx->r29, ctx->r14);
    // 0x800681C0: lw          $t5, 0x6C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6C);
    // 0x800681C4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800681C8: sw          $t5, 0x7730($at)
    MEM_W(0X7730, ctx->r1) = ctx->r13;
    // 0x800681CC: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x800681D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800681D4: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x800681D8: addu        $t0, $sp, $t2
    ctx->r8 = ADD32(ctx->r29, ctx->r10);
    // 0x800681DC: lwc1        $f6, 0x54($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X54);
    // 0x800681E0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800681E4: swc1        $f6, 0x7760($at)
    MEM_W(0X7760, ctx->r1) = ctx->f6.u32l;
    // 0x800681E8: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x800681EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800681F0: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x800681F4: addu        $t3, $sp, $t9
    ctx->r11 = ADD32(ctx->r29, ctx->r25);
    // 0x800681F8: lw          $t3, 0x64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X64);
    // 0x800681FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80068200: sw          $t3, 0x7740($at)
    MEM_W(0X7740, ctx->r1) = ctx->r11;
    // 0x80068204: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80068208: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006820C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80068210: addu        $t5, $sp, $t7
    ctx->r13 = ADD32(ctx->r29, ctx->r15);
    // 0x80068214: lw          $t5, 0x5C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5C);
    // 0x80068218: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8006821C: sw          $t5, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r13;
    // 0x80068220: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x80068224: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80068228: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8006822C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80068230: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80068234: sw          $t6, 0x7770($at)
    MEM_W(0X7770, ctx->r1) = ctx->r14;
    // 0x80068238: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x8006823C: nop

    // 0x80068240: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x80068244: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x80068248: bne         $at, $zero, L_80068140
    if (ctx->r1 != 0) {
        // 0x8006824C: sw          $t1, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r9;
            goto L_80068140;
    }
    // 0x8006824C: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
    // 0x80068250: lbu         $t3, 0x39($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X39);
    // 0x80068254: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80068258: sb          $t3, 0x76E0($at)
    MEM_B(0X76E0, ctx->r1) = ctx->r11;
    // 0x8006825C: b           L_8006827C
    // 0x80068260: nop

        goto L_8006827C;
    // 0x80068260: nop

L_80068264:
    // 0x80068264: jal         0x8006770C
    // 0x80068268: nop

    func_8006770C(rdram, ctx);
        goto after_8;
    // 0x80068268: nop

    after_8:
    // 0x8006826C: b           L_8006827C
    // 0x80068270: nop

        goto L_8006827C;
    // 0x80068270: nop

    // 0x80068274: b           L_8006827C
    // 0x80068278: nop

        goto L_8006827C;
    // 0x80068278: nop

L_8006827C:
    // 0x8006827C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80068280: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x80068284: jr          $ra
    // 0x80068288: nop

    return;
    // 0x80068288: nop

;}
RECOMP_FUNC void func_80065ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065ACC: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80065AD0: lw          $v0, 0x7778($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7778);
    // 0x80065AD4: jr          $ra
    // 0x80065AD8: nop

    return;
    // 0x80065AD8: nop

    // 0x80065ADC: jr          $ra
    // 0x80065AE0: nop

    return;
    // 0x80065AE0: nop

    // 0x80065AE4: jr          $ra
    // 0x80065AE8: nop

    return;
    // 0x80065AE8: nop

;}
RECOMP_FUNC void func_8006770C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006770C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80067710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067714: jal         0x800675DC
    // 0x80067718: nop

    func_800675DC(rdram, ctx);
        goto after_0;
    // 0x80067718: nop

    after_0:
    // 0x8006771C: jal         0x80067674
    // 0x80067720: nop

    func_80067674(rdram, ctx);
        goto after_1;
    // 0x80067720: nop

    after_1:
    // 0x80067724: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80067728: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006772C: sb          $t6, 0x76E0($at)
    MEM_B(0X76E0, ctx->r1) = ctx->r14;
    // 0x80067730: b           L_80067738
    // 0x80067734: nop

        goto L_80067738;
    // 0x80067734: nop

L_80067738:
    // 0x80067738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006773C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80067740: jr          $ra
    // 0x80067744: nop

    return;
    // 0x80067744: nop

;}
RECOMP_FUNC void func_80097DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097DC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80097DCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097DD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80097DD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80097DD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80097DDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80097DE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80097DE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80097DE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80097DEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80097DF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80097DF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80097DF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80097DFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80097E00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80097E04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80097E08: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80097E0C: nop

    // 0x80097E10: beq         $s0, $at, L_80097E2C
    if (ctx->r16 == ctx->r1) {
        // 0x80097E14: nop
    
            goto L_80097E2C;
    }
    // 0x80097E14: nop

    // 0x80097E18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80097E1C: beq         $s0, $at, L_80097E40
    if (ctx->r16 == ctx->r1) {
        // 0x80097E20: nop
    
            goto L_80097E40;
    }
    // 0x80097E20: nop

    // 0x80097E24: b           L_80097E54
    // 0x80097E28: nop

        goto L_80097E54;
    // 0x80097E28: nop

L_80097E2C:
    // 0x80097E2C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80097E30: jal         0x80097B4C
    // 0x80097E34: nop

    func_80097B4C(rdram, ctx);
        goto after_0;
    // 0x80097E34: nop

    after_0:
    // 0x80097E38: b           L_80097E54
    // 0x80097E3C: nop

        goto L_80097E54;
    // 0x80097E3C: nop

L_80097E40:
    // 0x80097E40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80097E44: jal         0x80097C68
    // 0x80097E48: nop

    func_80097C68(rdram, ctx);
        goto after_1;
    // 0x80097E48: nop

    after_1:
    // 0x80097E4C: b           L_80097E54
    // 0x80097E50: nop

        goto L_80097E54;
    // 0x80097E50: nop

L_80097E54:
    // 0x80097E54: b           L_80097E5C
    // 0x80097E58: nop

        goto L_80097E5C;
    // 0x80097E58: nop

L_80097E5C:
    // 0x80097E5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097E60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80097E64: jr          $ra
    // 0x80097E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80097E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void Debug_SetTextColor(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F96C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F974: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8005F978: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8005F97C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8005F980: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8005F984: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x8005F988: bgez        $a0, L_8005F998
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8005F98C: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_8005F998;
    }
    // 0x8005F98C: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x8005F990: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x8005F994: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8005F998:
    // 0x8005F998: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x8005F99C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8005F9A0: bgez        $a1, L_8005F9B0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8005F9A4: sra         $t7, $a1, 3
        ctx->r15 = S32(SIGNED(ctx->r5) >> 3);
            goto L_8005F9B0;
    }
    // 0x8005F9A4: sra         $t7, $a1, 3
    ctx->r15 = S32(SIGNED(ctx->r5) >> 3);
    // 0x8005F9A8: addiu       $at, $a1, 0x7
    ctx->r1 = ADD32(ctx->r5, 0X7);
    // 0x8005F9AC: sra         $t7, $at, 3
    ctx->r15 = S32(SIGNED(ctx->r1) >> 3);
L_8005F9B0:
    // 0x8005F9B0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8005F9B4: bgez        $a2, L_8005F9C4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8005F9B8: sra         $t8, $a2, 3
        ctx->r24 = S32(SIGNED(ctx->r6) >> 3);
            goto L_8005F9C4;
    }
    // 0x8005F9B8: sra         $t8, $a2, 3
    ctx->r24 = S32(SIGNED(ctx->r6) >> 3);
    // 0x8005F9BC: addiu       $at, $a2, 0x7
    ctx->r1 = ADD32(ctx->r6, 0X7);
    // 0x8005F9C0: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_8005F9C4:
    // 0x8005F9C4: jal         0x8005F488
    // 0x8005F9C8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    func_8005F488(rdram, ctx);
        goto after_0;
    // 0x8005F9C8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_0:
    // 0x8005F9CC: jal         0x8005F170
    // 0x8005F9D0: nop

    func_8005F170(rdram, ctx);
        goto after_1;
    // 0x8005F9D0: nop

    after_1:
    // 0x8005F9D4: b           L_8005F9DC
    // 0x8005F9D8: nop

        goto L_8005F9DC;
    // 0x8005F9D8: nop

L_8005F9DC:
    // 0x8005F9DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F9E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F9E4: jr          $ra
    // 0x8005F9E8: nop

    return;
    // 0x8005F9E8: nop

;}
RECOMP_FUNC void func_800A10C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A10C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A10C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A10C8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A10CC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A10D0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A10D4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A10D8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A10DC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A10E0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A10E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A10E8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A10EC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A10F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A10F4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A10F8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A10FC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A1100: addiu       $a1, $a1, 0x3844
    ctx->r5 = ADD32(ctx->r5, 0X3844);
    // 0x800A1104: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A1108: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A110C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A1110: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A1114: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A1118: jal         0x80027464
    // 0x800A111C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A111C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A1120: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800A1124: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800A1128: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A112C: beq         $t1, $at, L_800A1640
    if (ctx->r9 == ctx->r1) {
        // 0x800A1130: nop
    
            goto L_800A1640;
    }
    // 0x800A1130: nop

    // 0x800A1134: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800A1138: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A113C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A1140: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A1144: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A1148: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A114C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A1150: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A1154: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A1158: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800A115C: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x800A1160: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1164: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800A1168: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A116C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A1170: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A1174: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A1178: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A117C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800A1180: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x800A1184: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x800A1188: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A118C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800A1190: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800A1194: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A1198: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800A119C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800A11A0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A11A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800A11A8: sh          $t9, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r25;
    // 0x800A11AC: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800A11B0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A11B4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800A11B8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A11BC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A11C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A11C4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A11C8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A11CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A11D0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A11D4: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x800A11D8: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x800A11DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A11E0: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A11E4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A11E8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A11EC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A11F0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A11F4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A11F8: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800A11FC: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800A1200: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1204: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x800A1208: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800A120C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A1210: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800A1214: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A1218: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A121C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800A1220: sh          $t7, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r15;
    // 0x800A1224: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x800A1228: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A122C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800A1230: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800A1234: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A1238: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800A123C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A1240: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A1244: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x800A1248: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800A124C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1250: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800A1254: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A1258: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A125C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A1260: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A1264: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A1268: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800A126C: sb          $t0, 0x4253($at)
    MEM_B(0X4253, ctx->r1) = ctx->r8;
    // 0x800A1270: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x800A1274: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1278: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A127C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A1280: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A1284: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A1288: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A128C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A1290: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A1294: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800A1298: jal         0x8001BB34
    // 0x800A129C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800A129C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800A12A0: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800A12A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A12A8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A12AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A12B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A12B4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A12B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A12BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A12C0: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x800A12C4: nop

    // 0x800A12C8: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
    // 0x800A12CC: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x800A12D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A12D4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800A12D8: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800A12DC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A12E0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800A12E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A12E8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A12EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A12F0: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800A12F4: lh          $t0, 0x24($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X24);
    // 0x800A12F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A12FC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800A1300: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800A1304: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A1308: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800A130C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A1310: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A1314: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A1318: lh          $t2, 0x24($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X24);
    // 0x800A131C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1320: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A1324: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A1328: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A132C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A1330: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A1334: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A1338: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x800A133C: lh          $t7, 0x24($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X24);
    // 0x800A1340: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1344: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800A1348: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A134C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A1350: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A1354: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A1358: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A135C: addiu       $t5, $zero, -0x3C
    ctx->r13 = ADD32(0, -0X3C);
    // 0x800A1360: sh          $t5, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r13;
    // 0x800A1364: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x800A1368: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A136C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800A1370: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A1374: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A1378: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A137C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A1380: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A1384: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x800A1388: lh          $t0, 0x24($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X24);
    // 0x800A138C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1390: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800A1394: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800A1398: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A139C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800A13A0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A13A4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A13A8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A13AC: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
    // 0x800A13B0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800A13B4: addiu       $t2, $t2, 0x7020
    ctx->r10 = ADD32(ctx->r10, 0X7020);
    // 0x800A13B8: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x800A13BC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A13C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A13C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A13C8: jal         0x8001C0EC
    // 0x800A13CC: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800A13CC: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_2:
    // 0x800A13D0: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800A13D4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800A13D8: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800A13DC: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800A13E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A13E4: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800A13E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A13EC: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800A13F0: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800A13F4: nop

    // 0x800A13F8: sh          $t5, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r13;
    // 0x800A13FC: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x800A1400: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1404: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800A1408: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A140C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A1410: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A1414: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A1418: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A141C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A1420: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x800A1424: lh          $t0, 0x24($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X24);
    // 0x800A1428: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A142C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A1430: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A1434: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A1438: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A143C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A1440: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A1444: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A1448: lh          $t2, 0x24($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X24);
    // 0x800A144C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1450: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A1454: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A1458: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A145C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A1460: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A1464: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A1468: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800A146C: sh          $t3, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r11;
    // 0x800A1470: lh          $t5, 0x24($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X24);
    // 0x800A1474: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1478: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x800A147C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x800A1480: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A1484: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x800A1488: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A148C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A1490: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x800A1494: sh          $t7, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r15;
    // 0x800A1498: lh          $t6, 0x24($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X24);
    // 0x800A149C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A14A0: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800A14A4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800A14A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A14AC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800A14B0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800A14B4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A14B8: addiu       $t8, $zero, -0x3C
    ctx->r24 = ADD32(0, -0X3C);
    // 0x800A14BC: sh          $t8, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r24;
    // 0x800A14C0: lh          $t2, 0x24($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X24);
    // 0x800A14C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A14C8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A14CC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A14D0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A14D4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A14D8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A14DC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A14E0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A14E4: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
    // 0x800A14E8: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800A14EC: addiu       $t4, $t4, 0x7020
    ctx->r12 = ADD32(ctx->r12, 0X7020);
    // 0x800A14F0: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x800A14F4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800A14F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A14FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A1500: jal         0x8001C0EC
    // 0x800A1504: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800A1504: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_3:
    // 0x800A1508: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800A150C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800A1510: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A1514: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A1518: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A151C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A1520: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A1524: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800A1528: lh          $t9, 0x423C($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X423C);
    // 0x800A152C: nop

    // 0x800A1530: sh          $t9, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r25;
    // 0x800A1534: lh          $t8, 0x24($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X24);
    // 0x800A1538: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A153C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800A1540: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800A1544: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A1548: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800A154C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800A1550: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A1554: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A1558: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800A155C: lh          $t2, 0x24($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X24);
    // 0x800A1560: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1564: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800A1568: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800A156C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A1570: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800A1574: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A1578: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A157C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A1580: lh          $t4, 0x24($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X24);
    // 0x800A1584: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1588: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800A158C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A1590: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A1594: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A1598: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800A159C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800A15A0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800A15A4: sh          $t3, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r11;
    // 0x800A15A8: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x800A15AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A15B0: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800A15B4: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800A15B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A15BC: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800A15C0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A15C4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A15C8: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x800A15CC: sh          $t7, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r15;
    // 0x800A15D0: lh          $t0, 0x24($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X24);
    // 0x800A15D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A15D8: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x800A15DC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800A15E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800A15E4: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800A15E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800A15EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800A15F0: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800A15F4: sh          $t6, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r14;
    // 0x800A15F8: lh          $t4, 0x24($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X24);
    // 0x800A15FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A1600: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x800A1604: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800A1608: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A160C: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800A1610: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A1614: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A1618: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A161C: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
    // 0x800A1620: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800A1624: addiu       $t5, $t5, 0x7020
    ctx->r13 = ADD32(ctx->r13, 0X7020);
    // 0x800A1628: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x800A162C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A1630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A1634: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A1638: jal         0x8001C0EC
    // 0x800A163C: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800A163C: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_4:
L_800A1640:
    // 0x800A1640: b           L_800A1648
    // 0x800A1644: nop

        goto L_800A1648;
    // 0x800A1644: nop

L_800A1648:
    // 0x800A1648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A164C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A1650: jr          $ra
    // 0x800A1654: nop

    return;
    // 0x800A1654: nop

;}
RECOMP_FUNC void func_800889A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800889A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800889AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800889B0: jal         0x8001E954
    // 0x800889B4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    Set_DecompressHeap(rdram, ctx);
        goto after_0;
    // 0x800889B4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    after_0:
    // 0x800889B8: lui         $a1, 0x9B
    ctx->r5 = S32(0X9B << 16);
    // 0x800889BC: lui         $a2, 0x9C
    ctx->r6 = S32(0X9C << 16);
    // 0x800889C0: addiu       $a2, $a2, -0x2E80
    ctx->r6 = ADD32(ctx->r6, -0X2E80);
    // 0x800889C4: addiu       $a1, $a1, 0x5440
    ctx->r5 = ADD32(ctx->r5, 0X5440);
    // 0x800889C8: jal         0x8001EB68
    // 0x800889CC: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    func_8001EB68(rdram, ctx);
        goto after_1;
    // 0x800889CC: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    after_1:
    // 0x800889D0: jal         0x8008884C
    // 0x800889D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8008884C(rdram, ctx);
        goto after_2;
    // 0x800889D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x800889D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800889DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800889E0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800889E4: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x800889E8: nop

    // 0x800889EC: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x800889F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800889F4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800889F8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800889FC: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x80088A00: nop

    // 0x80088A04: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x80088A08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088A0C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80088A10: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80088A14: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x80088A18: nop

    // 0x80088A1C: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x80088A20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088A24: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80088A28: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80088A2C: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x80088A30: nop

    // 0x80088A34: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x80088A38: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80088A3C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80088A40: nop

    // 0x80088A44: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80088A48: nop

    // 0x80088A4C: swc1        $f16, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f16.u32l;
    // 0x80088A50: jal         0x80087E14
    // 0x80088A54: nop

    func_80087E14(rdram, ctx);
        goto after_3;
    // 0x80088A54: nop

    after_3:
    // 0x80088A58: jal         0x8006828C
    // 0x80088A5C: nop

    func_8006828C(rdram, ctx);
        goto after_4;
    // 0x80088A5C: nop

    after_4:
    // 0x80088A60: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80088A64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80088A68: jal         0x80085B34
    // 0x80088A6C: nop

    func_80085B34(rdram, ctx);
        goto after_5;
    // 0x80088A6C: nop

    after_5:
    // 0x80088A70: b           L_80088A78
    // 0x80088A74: nop

        goto L_80088A78;
    // 0x80088A74: nop

L_80088A78:
    // 0x80088A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80088A80: jr          $ra
    // 0x80088A84: nop

    return;
    // 0x80088A84: nop

;}
RECOMP_FUNC void func_80096894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80096898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009689C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800968A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800968A4: nop

    // 0x800968A8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800968AC: nop

    // 0x800968B0: bne         $t7, $zero, L_800968D4
    if (ctx->r15 != 0) {
        // 0x800968B4: nop
    
            goto L_800968D4;
    }
    // 0x800968B4: nop

    // 0x800968B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800968BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800968C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800968C4: jal         0x8001B6BC
    // 0x800968C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_0;
    // 0x800968C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x800968CC: b           L_800968E8
    // 0x800968D0: nop

        goto L_800968E8;
    // 0x800968D0: nop

L_800968D4:
    // 0x800968D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800968D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800968DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800968E0: jal         0x8001B6BC
    // 0x800968E4: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_1;
    // 0x800968E4: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_1:
L_800968E8:
    // 0x800968E8: b           L_800968F0
    // 0x800968EC: nop

        goto L_800968F0;
    // 0x800968EC: nop

L_800968F0:
    // 0x800968F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800968F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800968F8: jr          $ra
    // 0x800968FC: nop

    return;
    // 0x800968FC: nop

;}
RECOMP_FUNC void func_800AE8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AE8A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AE8A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AE8AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800AE8B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800AE8B4: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x800AE8B8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800AE8BC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800AE8C0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800AE8C4: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x800AE8C8: nop

    // 0x800AE8CC: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
    // 0x800AE8D0: lh          $t1, 0x22($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X22);
    // 0x800AE8D4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800AE8D8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800AE8DC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800AE8E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800AE8E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800AE8E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800AE8EC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800AE8F0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800AE8F4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x800AE8F8: lh          $t5, 0x22($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X22);
    // 0x800AE8FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AE900: beq         $t5, $at, L_800AE98C
    if (ctx->r13 == ctx->r1) {
        // 0x800AE904: nop
    
            goto L_800AE98C;
    }
    // 0x800AE904: nop

    // 0x800AE908: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AE90C: nop

    // 0x800AE910: sh          $zero, 0x108($t7)
    MEM_H(0X108, ctx->r15) = 0;
    // 0x800AE914: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AE918: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800AE91C: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x800AE920: jal         0x80014E80
    // 0x800AE924: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800AE924: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x800AE928: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AE92C: addiu       $t9, $v0, 0xC
    ctx->r25 = ADD32(ctx->r2, 0XC);
    // 0x800AE930: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x800AE934: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AE938: nop

    // 0x800AE93C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800AE940: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800AE944: jal         0x8001BB04
    // 0x800AE948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x800AE948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800AE94C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800AE950: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800AE954: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800AE958: jal         0x80019448
    // 0x800AE95C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x800AE95C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x800AE960: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE964: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE968: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x800AE96C: jal         0x800281A4
    // 0x800AE970: nop

    func_800281A4(rdram, ctx);
        goto after_3;
    // 0x800AE970: nop

    after_3:
    // 0x800AE974: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800AE978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AE97C: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x800AE980: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AE984: jal         0x800175F0
    // 0x800AE988: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x800AE988: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_800AE98C:
    // 0x800AE98C: b           L_800AE994
    // 0x800AE990: nop

        goto L_800AE994;
    // 0x800AE990: nop

L_800AE994:
    // 0x800AE994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AE99C: jr          $ra
    // 0x800AE9A0: nop

    return;
    // 0x800AE9A0: nop

;}
RECOMP_FUNC void func_800F3F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F3F60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F3F64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F3F68: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800F3F6C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800F3F70: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F3F74: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F3F78: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F3F7C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F3F80: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F3F84: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F3F88: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F3F8C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F3F90: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F3F94: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F3F98: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F3F9C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F3FA0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F3FA4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F3FA8: addiu       $a1, $a1, 0x3700
    ctx->r5 = ADD32(ctx->r5, 0X3700);
    // 0x800F3FAC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F3FB0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F3FB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F3FB8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F3FBC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F3FC0: jal         0x80027464
    // 0x800F3FC4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F3FC4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F3FC8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800F3FCC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3FD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F3FD4: beq         $t1, $at, L_800F405C
    if (ctx->r9 == ctx->r1) {
        // 0x800F3FD8: nop
    
            goto L_800F405C;
    }
    // 0x800F3FD8: nop

    // 0x800F3FDC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3FE0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F3FE4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F3FE8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F3FEC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800F3FF0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F3FF4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800F3FF8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F3FFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F4000: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F4004: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F4008: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F400C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F4010: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800F4014: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F4018: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F401C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800F4020: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800F4024: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800F4028: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x800F402C: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x800F4030: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F4034: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x800F4038: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F403C: nop

    // 0x800F4040: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800F4044: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800F4048: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F404C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800F4050: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F4054: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F4058: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_800F405C:
    // 0x800F405C: b           L_800F4064
    // 0x800F4060: nop

        goto L_800F4064;
    // 0x800F4060: nop

L_800F4064:
    // 0x800F4064: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F4068: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800F406C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F4070: jr          $ra
    // 0x800F4074: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800F4074: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800D0194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0194: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D0198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D019C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D01A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D01A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D01A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D01AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D01B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D01B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D01B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D01BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D01C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D01C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D01C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D01CC: nop

    // 0x800D01D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D01D4: nop

    // 0x800D01D8: bne         $t1, $zero, L_800D024C
    if (ctx->r9 != 0) {
        // 0x800D01DC: nop
    
            goto L_800D024C;
    }
    // 0x800D01DC: nop

    // 0x800D01E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D01E4: nop

    // 0x800D01E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D01EC: nop

    // 0x800D01F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D01F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D01F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D01FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D0200: nop

    // 0x800D0204: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800D0208: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D020C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800D0210: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800D0214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D021C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x800D0220: jal         0x80029EF8
    // 0x800D0224: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800D0224: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x800D0228: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D022C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D0230: addiu       $t8, $t8, -0x7AEC
    ctx->r24 = ADD32(ctx->r24, -0X7AEC);
    // 0x800D0234: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0238: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800D023C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D0240: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800D0244: jal         0x8001C0EC
    // 0x800D0248: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800D0248: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    after_1:
L_800D024C:
    // 0x800D024C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D0250: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D0254: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D025C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D0260: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D0264: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D0268: jal         0x80029F58
    // 0x800D026C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_2;
    // 0x800D026C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x800D0270: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D0274: bne         $v0, $at, L_800D0294
    if (ctx->r2 != ctx->r1) {
        // 0x800D0278: nop
    
            goto L_800D0294;
    }
    // 0x800D0278: nop

    // 0x800D027C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D0280: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800D0284: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800D0288: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D028C: nop

    // 0x800D0290: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800D0294:
    // 0x800D0294: b           L_800D029C
    // 0x800D0298: nop

        goto L_800D029C;
    // 0x800D0298: nop

L_800D029C:
    // 0x800D029C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D02A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D02A4: jr          $ra
    // 0x800D02A8: nop

    return;
    // 0x800D02A8: nop

;}
RECOMP_FUNC void func_800A843C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A843C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A8440: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8444: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A8448: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A844C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A8450: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A8454: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A8458: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A845C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8460: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8464: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A8468: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A846C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800A8470: nop

    // 0x800A8474: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800A8478: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800A847C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A8480: beq         $s0, $at, L_800A84A8
    if (ctx->r16 == ctx->r1) {
        // 0x800A8484: nop
    
            goto L_800A84A8;
    }
    // 0x800A8484: nop

    // 0x800A8488: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A848C: beq         $s0, $at, L_800A84C8
    if (ctx->r16 == ctx->r1) {
        // 0x800A8490: nop
    
            goto L_800A84C8;
    }
    // 0x800A8490: nop

    // 0x800A8494: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A8498: beq         $s0, $at, L_800A84B8
    if (ctx->r16 == ctx->r1) {
        // 0x800A849C: nop
    
            goto L_800A84B8;
    }
    // 0x800A849C: nop

    // 0x800A84A0: b           L_800A84D8
    // 0x800A84A4: nop

        goto L_800A84D8;
    // 0x800A84A4: nop

L_800A84A8:
    // 0x800A84A8: jal         0x800A7ABC
    // 0x800A84AC: nop

    func_800A7ABC(rdram, ctx);
        goto after_0;
    // 0x800A84AC: nop

    after_0:
    // 0x800A84B0: b           L_800A84E8
    // 0x800A84B4: nop

        goto L_800A84E8;
    // 0x800A84B4: nop

L_800A84B8:
    // 0x800A84B8: jal         0x800A7C18
    // 0x800A84BC: nop

    func_800A7C18(rdram, ctx);
        goto after_1;
    // 0x800A84BC: nop

    after_1:
    // 0x800A84C0: b           L_800A84E8
    // 0x800A84C4: nop

        goto L_800A84E8;
    // 0x800A84C4: nop

L_800A84C8:
    // 0x800A84C8: jal         0x800A7DF0
    // 0x800A84CC: nop

    func_800A7DF0(rdram, ctx);
        goto after_2;
    // 0x800A84CC: nop

    after_2:
    // 0x800A84D0: b           L_800A84E8
    // 0x800A84D4: nop

        goto L_800A84E8;
    // 0x800A84D4: nop

L_800A84D8:
    // 0x800A84D8: jal         0x800A8144
    // 0x800A84DC: nop

    func_800A8144(rdram, ctx);
        goto after_3;
    // 0x800A84DC: nop

    after_3:
    // 0x800A84E0: b           L_800A84E8
    // 0x800A84E4: nop

        goto L_800A84E8;
    // 0x800A84E4: nop

L_800A84E8:
    // 0x800A84E8: b           L_800A84F0
    // 0x800A84EC: nop

        goto L_800A84F0;
    // 0x800A84EC: nop

L_800A84F0:
    // 0x800A84F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A84F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A84F8: jr          $ra
    // 0x800A84FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A84FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008EB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EB6C: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x8008EB70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008EB74: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008EB78: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EB7C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008EB80: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008EB84: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008EB88: sh          $t6, 0x4D58($at)
    MEM_H(0X4D58, ctx->r1) = ctx->r14;
    // 0x8008EB8C: jr          $ra
    // 0x8008EB90: nop

    return;
    // 0x8008EB90: nop

    // 0x8008EB94: jr          $ra
    // 0x8008EB98: nop

    return;
    // 0x8008EB98: nop

;}
RECOMP_FUNC void func_800A2058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2058: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A205C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A2060: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A2064: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A2068: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A206C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A2070: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A2074: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A2078: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A207C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A2080: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A2084: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A2088: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A208C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A2090: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A2094: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A2098: addiu       $a1, $a1, 0x3874
    ctx->r5 = ADD32(ctx->r5, 0X3874);
    // 0x800A209C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A20A0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A20A4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800A20A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A20AC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A20B0: jal         0x80027464
    // 0x800A20B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A20B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A20B8: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800A20BC: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800A20C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A20C4: beq         $t1, $at, L_800A25D8
    if (ctx->r9 == ctx->r1) {
        // 0x800A20C8: nop
    
            goto L_800A25D8;
    }
    // 0x800A20C8: nop

    // 0x800A20CC: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800A20D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A20D4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A20D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A20DC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A20E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A20E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A20E8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A20EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A20F0: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800A20F4: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x800A20F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A20FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800A2100: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A2104: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A2108: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A210C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A2110: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A2114: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800A2118: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x800A211C: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x800A2120: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2124: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800A2128: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800A212C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A2130: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800A2134: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800A2138: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A213C: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x800A2140: sh          $t9, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r25;
    // 0x800A2144: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800A2148: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A214C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800A2150: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A2154: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A2158: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A215C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A2160: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A2164: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800A2168: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x800A216C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A2170: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A2174: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A2178: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A217C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A2180: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A2184: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A2188: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A218C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A2190: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x800A2194: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800A2198: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A219C: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x800A21A0: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800A21A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A21A8: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800A21AC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A21B0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A21B4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800A21B8: sh          $t7, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r15;
    // 0x800A21BC: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x800A21C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A21C4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800A21C8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800A21CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A21D0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800A21D4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A21D8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A21DC: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x800A21E0: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800A21E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A21E8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800A21EC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A21F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A21F4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800A21F8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A21FC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A2200: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800A2204: sb          $t0, 0x4253($at)
    MEM_B(0X4253, ctx->r1) = ctx->r8;
    // 0x800A2208: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x800A220C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2210: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A2214: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A2218: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A221C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A2220: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A2224: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A2228: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A222C: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800A2230: jal         0x8001BB34
    // 0x800A2234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800A2234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800A2238: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800A223C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A2240: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A2244: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A2248: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A224C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A2250: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A2254: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A2258: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x800A225C: nop

    // 0x800A2260: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
    // 0x800A2264: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x800A2268: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A226C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800A2270: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800A2274: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A2278: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800A227C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A2280: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A2284: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A2288: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800A228C: lh          $t0, 0x24($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X24);
    // 0x800A2290: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2294: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800A2298: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800A229C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A22A0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800A22A4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A22A8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A22AC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A22B0: lh          $t2, 0x24($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X24);
    // 0x800A22B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A22B8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A22BC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A22C0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A22C4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A22C8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A22CC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A22D0: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x800A22D4: lh          $t7, 0x24($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X24);
    // 0x800A22D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A22DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800A22E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A22E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A22E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A22EC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A22F0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A22F4: addiu       $t5, $zero, -0x3C
    ctx->r13 = ADD32(0, -0X3C);
    // 0x800A22F8: sh          $t5, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r13;
    // 0x800A22FC: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x800A2300: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2304: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800A2308: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A230C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A2310: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A2314: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A2318: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A231C: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x800A2320: lh          $t0, 0x24($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X24);
    // 0x800A2324: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2328: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800A232C: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800A2330: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A2334: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800A2338: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A233C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A2340: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A2344: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
    // 0x800A2348: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800A234C: addiu       $t2, $t2, 0x7020
    ctx->r10 = ADD32(ctx->r10, 0X7020);
    // 0x800A2350: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x800A2354: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A2358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A235C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A2360: jal         0x8001C0EC
    // 0x800A2364: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800A2364: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_2:
    // 0x800A2368: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800A236C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800A2370: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800A2374: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800A2378: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A237C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800A2380: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A2384: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800A2388: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800A238C: nop

    // 0x800A2390: sh          $t5, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r13;
    // 0x800A2394: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x800A2398: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A239C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800A23A0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A23A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A23A8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A23AC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A23B0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A23B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800A23B8: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x800A23BC: lh          $t0, 0x24($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X24);
    // 0x800A23C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A23C4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A23C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A23CC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A23D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A23D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A23D8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A23DC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A23E0: lh          $t2, 0x24($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X24);
    // 0x800A23E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A23E8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800A23EC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A23F0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A23F4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800A23F8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A23FC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A2400: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800A2404: sh          $t3, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r11;
    // 0x800A2408: lh          $t5, 0x24($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X24);
    // 0x800A240C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2410: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x800A2414: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x800A2418: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A241C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x800A2420: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A2424: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A2428: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x800A242C: sh          $t7, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r15;
    // 0x800A2430: lh          $t6, 0x24($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X24);
    // 0x800A2434: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2438: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800A243C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800A2440: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A2444: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800A2448: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800A244C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A2450: addiu       $t8, $zero, -0x3C
    ctx->r24 = ADD32(0, -0X3C);
    // 0x800A2454: sh          $t8, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r24;
    // 0x800A2458: lh          $t2, 0x24($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X24);
    // 0x800A245C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2460: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A2464: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A2468: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A246C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A2470: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A2474: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A2478: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A247C: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
    // 0x800A2480: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800A2484: addiu       $t4, $t4, 0x7020
    ctx->r12 = ADD32(ctx->r12, 0X7020);
    // 0x800A2488: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x800A248C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800A2490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A2494: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A2498: jal         0x8001C0EC
    // 0x800A249C: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800A249C: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_3:
    // 0x800A24A0: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800A24A4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800A24A8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A24AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A24B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A24B4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A24B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A24BC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800A24C0: lh          $t9, 0x423C($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X423C);
    // 0x800A24C4: nop

    // 0x800A24C8: sh          $t9, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r25;
    // 0x800A24CC: lh          $t8, 0x24($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X24);
    // 0x800A24D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A24D4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800A24D8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800A24DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A24E0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800A24E4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800A24E8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A24EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A24F0: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800A24F4: lh          $t2, 0x24($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X24);
    // 0x800A24F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A24FC: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800A2500: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800A2504: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A2508: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800A250C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A2510: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A2514: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A2518: lh          $t4, 0x24($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X24);
    // 0x800A251C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2520: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800A2524: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A2528: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A252C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A2530: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800A2534: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800A2538: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800A253C: sh          $t3, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r11;
    // 0x800A2540: lh          $t9, 0x24($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X24);
    // 0x800A2544: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2548: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800A254C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800A2550: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A2554: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800A2558: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A255C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A2560: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x800A2564: sh          $t7, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r15;
    // 0x800A2568: lh          $t0, 0x24($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X24);
    // 0x800A256C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2570: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x800A2574: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800A2578: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800A257C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800A2580: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800A2584: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800A2588: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800A258C: sh          $t6, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r14;
    // 0x800A2590: lh          $t4, 0x24($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X24);
    // 0x800A2594: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2598: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x800A259C: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800A25A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A25A4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800A25A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A25AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A25B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800A25B4: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
    // 0x800A25B8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800A25BC: addiu       $t5, $t5, 0x7020
    ctx->r13 = ADD32(ctx->r13, 0X7020);
    // 0x800A25C0: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x800A25C4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A25C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A25CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A25D0: jal         0x8001C0EC
    // 0x800A25D4: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800A25D4: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_4:
L_800A25D8:
    // 0x800A25D8: b           L_800A25E0
    // 0x800A25DC: nop

        goto L_800A25E0;
    // 0x800A25DC: nop

L_800A25E0:
    // 0x800A25E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A25E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A25E8: jr          $ra
    // 0x800A25EC: nop

    return;
    // 0x800A25EC: nop

;}
RECOMP_FUNC void func_800D768C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D768C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D7690: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D7694: nop

    // 0x800D7698: bne         $t6, $zero, L_800D76F4
    if (ctx->r14 != 0) {
        // 0x800D769C: nop
    
            goto L_800D76F4;
    }
    // 0x800D769C: nop

    // 0x800D76A0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D76A4: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800D76A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D76AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D76B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D76B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D76B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D76BC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D76C0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D76C4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800D76C8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D76CC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D76D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D76D4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D76D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D76DC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D76E0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D76E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D76E8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D76EC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800D76F0: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_800D76F4:
    // 0x800D76F4: jr          $ra
    // 0x800D76F8: nop

    return;
    // 0x800D76F8: nop

    // 0x800D76FC: jr          $ra
    // 0x800D7700: nop

    return;
    // 0x800D7700: nop

;}
RECOMP_FUNC void func_800C3454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C3458: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C345C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C3460: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C3464: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C3468: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C346C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3470: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C3474: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3478: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C347C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C3480: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C3484: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C3488: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C348C: nop

    // 0x800C3490: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C3494: nop

    // 0x800C3498: bne         $t1, $zero, L_800C3528
    if (ctx->r9 != 0) {
        // 0x800C349C: nop
    
            goto L_800C3528;
    }
    // 0x800C349C: nop

    // 0x800C34A0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C34A4: nop

    // 0x800C34A8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C34AC: nop

    // 0x800C34B0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C34B4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C34B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800C34BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C34C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C34C4: nop

    // 0x800C34C8: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C34CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C34D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C34D4: lui         $a1, 0x418D
    ctx->r5 = S32(0X418D << 16);
    // 0x800C34D8: lui         $a2, 0x3F7A
    ctx->r6 = S32(0X3F7A << 16);
    // 0x800C34DC: ori         $a2, $a2, 0xFAF8
    ctx->r6 = ctx->r6 | 0XFAF8;
    // 0x800C34E0: jal         0x80029EF8
    // 0x800C34E4: ori         $a1, $a1, 0x2D2D
    ctx->r5 = ctx->r5 | 0X2D2D;
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800C34E4: ori         $a1, $a1, 0x2D2D
    ctx->r5 = ctx->r5 | 0X2D2D;
    after_0:
    // 0x800C34E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C34EC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800C34F0: addiu       $t6, $t6, -0x7F04
    ctx->r14 = ADD32(ctx->r14, -0X7F04);
    // 0x800C34F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C34F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C34FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3500: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800C3504: jal         0x8001C0EC
    // 0x800C3508: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C3508: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    after_1:
    // 0x800C350C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3510: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3518: addiu       $a2, $zero, 0x56
    ctx->r6 = ADD32(0, 0X56);
    // 0x800C351C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C3520: jal         0x80017664
    // 0x800C3524: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_2;
    // 0x800C3524: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800C3528:
    // 0x800C3528: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C352C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3530: jal         0x80028FA0
    // 0x800C3534: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800C3534: nop

    after_3:
    // 0x800C3538: beq         $v0, $zero, L_800C3550
    if (ctx->r2 == 0) {
        // 0x800C353C: nop
    
            goto L_800C3550;
    }
    // 0x800C353C: nop

    // 0x800C3540: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3544: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3548: jal         0x80029B60
    // 0x800C354C: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800C354C: nop

    after_4:
L_800C3550:
    // 0x800C3550: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C3554: nop

    // 0x800C3558: lwc1        $f6, 0x28($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800C355C: nop

    // 0x800C3560: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800C3564: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C3568: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C356C: nop

    // 0x800C3570: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x800C3574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3578: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C357C: jal         0x80029C40
    // 0x800C3580: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800C3580: nop

    after_5:
    // 0x800C3584: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C3588: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C358C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3590: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3598: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800C359C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C35A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C35A4: jal         0x80029018
    // 0x800C35A8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800C35A8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x800C35AC: beq         $v0, $zero, L_800C35D8
    if (ctx->r2 == 0) {
        // 0x800C35B0: nop
    
            goto L_800C35D8;
    }
    // 0x800C35B0: nop

    // 0x800C35B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C35B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C35BC: nop

    // 0x800C35C0: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x800C35C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C35C8: nop

    // 0x800C35CC: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800C35D0: nop

    // 0x800C35D4: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
L_800C35D8:
    // 0x800C35D8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C35DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C35E0: nop

    // 0x800C35E4: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
    // 0x800C35E8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C35EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C35F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C35F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C35F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C35FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C3600: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C3604: jal         0x80029F58
    // 0x800C3608: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_7;
    // 0x800C3608: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x800C360C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C3610: bne         $v0, $at, L_800C3658
    if (ctx->r2 != ctx->r1) {
        // 0x800C3614: nop
    
            goto L_800C3658;
    }
    // 0x800C3614: nop

    // 0x800C3618: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C361C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C3620: nop

    // 0x800C3624: swc1        $f10, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f10.u32l;
    // 0x800C3628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C362C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3630: jal         0x8001B44C
    // 0x800C3634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_8;
    // 0x800C3634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800C3638: beq         $v0, $zero, L_800C3658
    if (ctx->r2 == 0) {
        // 0x800C363C: nop
    
            goto L_800C3658;
    }
    // 0x800C363C: nop

    // 0x800C3640: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C3644: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800C3648: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800C364C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C3650: nop

    // 0x800C3654: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800C3658:
    // 0x800C3658: b           L_800C3660
    // 0x800C365C: nop

        goto L_800C3660;
    // 0x800C365C: nop

L_800C3660:
    // 0x800C3660: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C3664: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C3668: jr          $ra
    // 0x800C366C: nop

    return;
    // 0x800C366C: nop

;}
RECOMP_FUNC void func_800AECA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AECA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AECAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AECB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AECB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AECB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AECBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AECC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AECC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AECC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AECCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AECD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AECD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AECD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AECDC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AECE0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AECE4: nop

    // 0x800AECE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AECEC: nop

    // 0x800AECF0: bne         $t1, $zero, L_800AED48
    if (ctx->r9 != 0) {
        // 0x800AECF4: nop
    
            goto L_800AED48;
    }
    // 0x800AECF4: nop

    // 0x800AECF8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AECFC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AED00: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AED04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800AED08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AED0C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AED10: nop

    // 0x800AED14: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AED18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AED1C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AED20: nop

    // 0x800AED24: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AED28: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AED2C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800AED30: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800AED34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AED38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AED3C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800AED40: jal         0x80029EF8
    // 0x800AED44: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800AED44: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    after_0:
L_800AED48:
    // 0x800AED48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AED4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AED50: jal         0x80028FA0
    // 0x800AED54: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800AED54: nop

    after_1:
    // 0x800AED58: beq         $v0, $zero, L_800AED70
    if (ctx->r2 == 0) {
        // 0x800AED5C: nop
    
            goto L_800AED70;
    }
    // 0x800AED5C: nop

    // 0x800AED60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AED64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AED68: jal         0x80029B60
    // 0x800AED6C: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800AED6C: nop

    after_2:
L_800AED70:
    // 0x800AED70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AED74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AED78: jal         0x80029C40
    // 0x800AED7C: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800AED7C: nop

    after_3:
    // 0x800AED80: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800AED84: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800AED88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AED8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AED90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800AED94: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800AED98: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800AED9C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800AEDA0: jal         0x80029018
    // 0x800AEDA4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800AEDA4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800AEDA8: beq         $v0, $zero, L_800AEDCC
    if (ctx->r2 == 0) {
        // 0x800AEDAC: nop
    
            goto L_800AEDCC;
    }
    // 0x800AEDAC: nop

    // 0x800AEDB0: jal         0x800297DC
    // 0x800AEDB4: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x800AEDB4: nop

    after_5:
    // 0x800AEDB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEDBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEDC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AEDC4: jal         0x80029824
    // 0x800AEDC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x800AEDC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_800AEDCC:
    // 0x800AEDCC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x800AEDD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800AEDD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AEDD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AEDDC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800AEDE0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800AEDE4: lui         $a3, 0xC220
    ctx->r7 = S32(0XC220 << 16);
    // 0x800AEDE8: jal         0x80029F58
    // 0x800AEDEC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_7;
    // 0x800AEDEC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800AEDF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AEDF4: bne         $v0, $at, L_800AEE54
    if (ctx->r2 != ctx->r1) {
        // 0x800AEDF8: nop
    
            goto L_800AEE54;
    }
    // 0x800AEDF8: nop

    // 0x800AEDFC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEE00: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800AEE04: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800AEE08: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEE0C: nop

    // 0x800AEE10: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800AEE14: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800AEE18: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x800AEE1C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800AEE20: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x800AEE24: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800AEE28: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AEE2C: lw          $t4, 0x7740($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7740);
    // 0x800AEE30: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x800AEE34: bne         $t4, $at, L_800AEE54
    if (ctx->r12 != ctx->r1) {
        // 0x800AEE38: nop
    
            goto L_800AEE54;
    }
    // 0x800AEE38: nop

    // 0x800AEE3C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEE40: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800AEE44: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800AEE48: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AEE4C: nop

    // 0x800AEE50: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800AEE54:
    // 0x800AEE54: b           L_800AEE5C
    // 0x800AEE58: nop

        goto L_800AEE5C;
    // 0x800AEE58: nop

L_800AEE5C:
    // 0x800AEE5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AEE60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800AEE64: jr          $ra
    // 0x800AEE68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AEE68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C304C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C304C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C3050: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3054: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C3058: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C305C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C3060: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C3064: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3068: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C306C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3070: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C3074: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C3078: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C307C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C3080: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C3084: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C3088: nop

    // 0x800C308C: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x800C3090: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C3094: nop

    // 0x800C3098: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800C309C: nop

    // 0x800C30A0: bne         $t2, $zero, L_800C311C
    if (ctx->r10 != 0) {
        // 0x800C30A4: nop
    
            goto L_800C311C;
    }
    // 0x800C30A4: nop

    // 0x800C30A8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C30AC: nop

    // 0x800C30B0: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x800C30B4: nop

    // 0x800C30B8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800C30BC: sb          $t5, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r13;
    // 0x800C30C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C30C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C30C8: lui         $a1, 0x4166
    ctx->r5 = S32(0X4166 << 16);
    // 0x800C30CC: lui         $a2, 0x3F87
    ctx->r6 = S32(0X3F87 << 16);
    // 0x800C30D0: ori         $a2, $a2, 0xCB3E
    ctx->r6 = ctx->r6 | 0XCB3E;
    // 0x800C30D4: jal         0x80029EF8
    // 0x800C30D8: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800C30D8: ori         $a1, $a1, 0xF26
    ctx->r5 = ctx->r5 | 0XF26;
    after_0:
    // 0x800C30DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C30E0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800C30E4: addiu       $t6, $t6, -0x7F04
    ctx->r14 = ADD32(ctx->r14, -0X7F04);
    // 0x800C30E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C30EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C30F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C30F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C30F8: jal         0x8001C0EC
    // 0x800C30FC: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C30FC: addiu       $a3, $zero, 0x52
    ctx->r7 = ADD32(0, 0X52);
    after_1:
    // 0x800C3100: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3104: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C310C: addiu       $a2, $zero, 0x56
    ctx->r6 = ADD32(0, 0X56);
    // 0x800C3110: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C3114: jal         0x80017664
    // 0x800C3118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_2;
    // 0x800C3118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800C311C:
    // 0x800C311C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3124: jal         0x8002A640
    // 0x800C3128: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_3;
    // 0x800C3128: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_3:
    // 0x800C312C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800C3130: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800C3134: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C3138: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800C313C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C3140: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x800C3144: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800C3148: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800C314C: jal         0x80015538
    // 0x800C3150: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800C3150: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x800C3154: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C3158: nop

    // 0x800C315C: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x800C3160: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C3164: nop

    // 0x800C3168: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800C316C: nop

    // 0x800C3170: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x800C3174: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C3178: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C317C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3184: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C3188: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C318C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C3190: jal         0x80029F58
    // 0x800C3194: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x800C3194: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800C3198: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C319C: bne         $v0, $at, L_800C31BC
    if (ctx->r2 != ctx->r1) {
        // 0x800C31A0: nop
    
            goto L_800C31BC;
    }
    // 0x800C31A0: nop

    // 0x800C31A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C31A8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800C31AC: sh          $t2, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r10;
    // 0x800C31B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C31B4: nop

    // 0x800C31B8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800C31BC:
    // 0x800C31BC: b           L_800C31C4
    // 0x800C31C0: nop

        goto L_800C31C4;
    // 0x800C31C0: nop

L_800C31C4:
    // 0x800C31C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C31C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C31CC: jr          $ra
    // 0x800C31D0: nop

    return;
    // 0x800C31D0: nop

;}
RECOMP_FUNC void func_8007FD5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FD5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007FD60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007FD64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007FD68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8007FD6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007FD70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007FD74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FD78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007FD7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FD80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007FD84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007FD88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007FD8C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007FD90: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FD94: addiu       $t0, $zero, 0x2BF
    ctx->r8 = ADD32(0, 0X2BF);
    // 0x8007FD98: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x8007FD9C: jal         0x80014E80
    // 0x8007FDA0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8007FDA0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8007FDA4: addiu       $t2, $v0, 0xF
    ctx->r10 = ADD32(ctx->r2, 0XF);
    // 0x8007FDA8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8007FDAC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FDB0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007FDB4: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
    // 0x8007FDB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FDBC: jal         0x8007FC98
    // 0x8007FDC0: nop

    func_8007FC98(rdram, ctx);
        goto after_1;
    // 0x8007FDC0: nop

    after_1:
    // 0x8007FDC4: b           L_8007FDCC
    // 0x8007FDC8: nop

        goto L_8007FDCC;
    // 0x8007FDC8: nop

L_8007FDCC:
    // 0x8007FDCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007FDD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007FDD4: jr          $ra
    // 0x8007FDD8: nop

    return;
    // 0x8007FDD8: nop

;}
RECOMP_FUNC void func_800A7A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7A08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A7A0C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800A7A10: nop

    // 0x800A7A14: beq         $t6, $zero, L_800A7A30
    if (ctx->r14 == 0) {
        // 0x800A7A18: nop
    
            goto L_800A7A30;
    }
    // 0x800A7A18: nop

    // 0x800A7A1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A7A20: beq         $t6, $at, L_800A7A30
    if (ctx->r14 == ctx->r1) {
        // 0x800A7A24: nop
    
            goto L_800A7A30;
    }
    // 0x800A7A24: nop

    // 0x800A7A28: jr          $ra
    // 0x800A7A2C: nop

    return;
    // 0x800A7A2C: nop

L_800A7A30:
    // 0x800A7A30: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800A7A34: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800A7A38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A7A3C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A7A40: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A7A44: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A7A48: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A7A4C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A7A50: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A7A54: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x800A7A58: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800A7A5C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800A7A60: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800A7A64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A7A68: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A7A6C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A7A70: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A7A74: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A7A78: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A7A7C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A7A80: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A7A84: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800A7A88: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800A7A8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A7A90: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A7A94: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A7A98: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A7A9C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A7AA0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A7AA4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A7AA8: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800A7AAC: jr          $ra
    // 0x800A7AB0: nop

    return;
    // 0x800A7AB0: nop

    // 0x800A7AB4: jr          $ra
    // 0x800A7AB8: nop

    return;
    // 0x800A7AB8: nop

;}
RECOMP_FUNC void func_80080198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080198: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008019C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800801A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800801A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800801A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800801AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800801B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800801B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800801B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800801BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800801C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800801C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800801C8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800801CC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800801D0: addiu       $t0, $zero, 0x2C2
    ctx->r8 = ADD32(0, 0X2C2);
    // 0x800801D4: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x800801D8: jal         0x80014E80
    // 0x800801DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800801DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x800801E0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800801E4: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x800801E8: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800801EC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800801F0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800801F4: sh          $t4, 0xBE($t5)
    MEM_H(0XBE, ctx->r13) = ctx->r12;
    // 0x800801F8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800801FC: nop

    // 0x80080200: sh          $zero, 0xC0($t6)
    MEM_H(0XC0, ctx->r14) = 0;
    // 0x80080204: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80080208: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x8008020C: sh          $t7, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r15;
    // 0x80080210: b           L_80080218
    // 0x80080214: nop

        goto L_80080218;
    // 0x80080214: nop

L_80080218:
    // 0x80080218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008021C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80080220: jr          $ra
    // 0x80080224: nop

    return;
    // 0x80080224: nop

;}
RECOMP_FUNC void func_800A04D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A04D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A04D8: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800A04DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A04E0: bne         $t6, $at, L_800A0570
    if (ctx->r14 != ctx->r1) {
        // 0x800A04E4: nop
    
            goto L_800A0570;
    }
    // 0x800A04E4: nop

    // 0x800A04E8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800A04EC: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800A04F0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800A04F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800A04F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A04FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A0500: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A0504: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A0508: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A050C: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x800A0510: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A0514: bne         $t9, $at, L_800A0570
    if (ctx->r25 != ctx->r1) {
        // 0x800A0518: nop
    
            goto L_800A0570;
    }
    // 0x800A0518: nop

    // 0x800A051C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800A0520: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x800A0524: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0528: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800A052C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800A0530: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800A0534: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800A0538: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800A053C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800A0540: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800A0544: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x800A0548: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800A054C: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800A0550: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A0554: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A0558: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A055C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A0560: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A0564: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A0568: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A056C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800A0570:
    // 0x800A0570: jr          $ra
    // 0x800A0574: nop

    return;
    // 0x800A0574: nop

    // 0x800A0578: jr          $ra
    // 0x800A057C: nop

    return;
    // 0x800A057C: nop

;}
RECOMP_FUNC void func_800BFFCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFFCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BFFD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BFFD4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BFFD8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800BFFDC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800BFFE0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800BFFE4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800BFFE8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800BFFEC: lb          $t6, 0x2F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2F);
    // 0x800BFFF0: nop

    // 0x800BFFF4: bne         $t6, $zero, L_800C0064
    if (ctx->r14 != 0) {
        // 0x800BFFF8: nop
    
            goto L_800C0064;
    }
    // 0x800BFFF8: nop

    // 0x800BFFFC: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C0000: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C0004: nop

    // 0x800C0008: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800C000C: nop

    // 0x800C0010: bc1f        L_800C0020
    if (!c1cs) {
        // 0x800C0014: nop
    
            goto L_800C0020;
    }
    // 0x800C0014: nop

    // 0x800C0018: b           L_800C0028
    // 0x800C001C: neg.s       $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = -ctx->f4.fl;
        goto L_800C0028;
    // 0x800C001C: neg.s       $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = -ctx->f4.fl;
L_800C0020:
    // 0x800C0020: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C0024: nop

L_800C0028:
    // 0x800C0028: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800C002C: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C0030: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800C0034: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800C0038: jal         0x8002A800
    // 0x800C003C: nop

    func_8002A800(rdram, ctx);
        goto after_0;
    // 0x800C003C: nop

    after_0:
    // 0x800C0040: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x800C0044: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800C0048: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C004C: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800C0050: jal         0x80015538
    // 0x800C0054: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800C0054: nop

    after_1:
    // 0x800C0058: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800C005C: b           L_800C00CC
    // 0x800C0060: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
        goto L_800C00CC;
    // 0x800C0060: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
L_800C0064:
    // 0x800C0064: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C0068: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C006C: nop

    // 0x800C0070: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800C0074: nop

    // 0x800C0078: bc1f        L_800C0088
    if (!c1cs) {
        // 0x800C007C: nop
    
            goto L_800C0088;
    }
    // 0x800C007C: nop

    // 0x800C0080: b           L_800C0090
    // 0x800C0084: neg.s       $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = -ctx->f8.fl;
        goto L_800C0090;
    // 0x800C0084: neg.s       $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = -ctx->f8.fl;
L_800C0088:
    // 0x800C0088: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C008C: nop

L_800C0090:
    // 0x800C0090: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800C0094: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C0098: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800C009C: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x800C00A0: jal         0x8002A800
    // 0x800C00A4: nop

    func_8002A800(rdram, ctx);
        goto after_2;
    // 0x800C00A4: nop

    after_2:
    // 0x800C00A8: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x800C00AC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800C00B0: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C00B4: lwc1        $f12, 0x40($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X40);
    // 0x800C00B8: jal         0x80015538
    // 0x800C00BC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800C00BC: nop

    after_3:
    // 0x800C00C0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800C00C4: nop

    // 0x800C00C8: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
L_800C00CC:
    // 0x800C00CC: lb          $v0, 0x27($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X27);
    // 0x800C00D0: b           L_800C00E0
    // 0x800C00D4: nop

        goto L_800C00E0;
    // 0x800C00D4: nop

    // 0x800C00D8: b           L_800C00E0
    // 0x800C00DC: nop

        goto L_800C00E0;
    // 0x800C00DC: nop

L_800C00E0:
    // 0x800C00E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C00E4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800C00E8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800C00EC: jr          $ra
    // 0x800C00F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C00F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007C640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007C644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C648: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007C64C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007C650: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007C654: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007C658: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007C65C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007C660: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007C664: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007C668: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007C66C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007C670: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007C674: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007C678: jal         0x8007C39C
    // 0x8007C67C: nop

    func_8007C39C(rdram, ctx);
        goto after_0;
    // 0x8007C67C: nop

    after_0:
    // 0x8007C680: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007C684: jal         0x80079778
    // 0x8007C688: nop

    func_80079778(rdram, ctx);
        goto after_1;
    // 0x8007C688: nop

    after_1:
    // 0x8007C68C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007C690: jal         0x800797FC
    // 0x8007C694: nop

    func_800797FC(rdram, ctx);
        goto after_2;
    // 0x8007C694: nop

    after_2:
    // 0x8007C698: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C69C: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8007C6A0: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x8007C6A4: nop

    // 0x8007C6A8: bne         $t1, $at, L_8007C6BC
    if (ctx->r9 != ctx->r1) {
        // 0x8007C6AC: nop
    
            goto L_8007C6BC;
    }
    // 0x8007C6AC: nop

    // 0x8007C6B0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C6B4: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x8007C6B8: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_8007C6BC:
    // 0x8007C6BC: b           L_8007C6C4
    // 0x8007C6C0: nop

        goto L_8007C6C4;
    // 0x8007C6C0: nop

L_8007C6C4:
    // 0x8007C6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C6C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007C6CC: jr          $ra
    // 0x8007C6D0: nop

    return;
    // 0x8007C6D0: nop

;}
RECOMP_FUNC void func_800657E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800657E8: addiu       $sp, $sp, -0x1C8
    ctx->r29 = ADD32(ctx->r29, -0X1C8);
    // 0x800657EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800657F0: addiu       $a0, $sp, 0x184
    ctx->r4 = ADD32(ctx->r29, 0X184);
    // 0x800657F4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800657F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800657FC: jal         0x80037200
    // 0x80065800: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    guTranslateF(rdram, ctx);
        goto after_0;
    // 0x80065800: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x80065804: addiu       $a0, $sp, 0x144
    ctx->r4 = ADD32(ctx->r29, 0X144);
    // 0x80065808: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8006580C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80065810: jal         0x80037490
    // 0x80065814: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    guScaleF(rdram, ctx);
        goto after_1;
    // 0x80065814: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x80065818: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006581C: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    // 0x80065820: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80065824: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80065828: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8006582C: jal         0x800372A0
    // 0x80065830: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_2;
    // 0x80065830: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80065834: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80065838: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    // 0x8006583C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80065840: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80065844: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80065848: jal         0x800372A0
    // 0x8006584C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_3;
    // 0x8006584C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80065850: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80065854: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80065858: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x8006585C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80065860: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80065864: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80065868: jal         0x800372A0
    // 0x8006586C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    guRotateF(rdram, ctx);
        goto after_4;
    // 0x8006586C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80065870: addiu       $t6, $sp, 0x84
    ctx->r14 = ADD32(ctx->r29, 0X84);
    // 0x80065874: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80065878: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8006587C: jal         0x80036400
    // 0x80065880: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    guMtxCatF(rdram, ctx);
        goto after_5;
    // 0x80065880: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    after_5:
    // 0x80065884: addiu       $t7, $sp, 0x84
    ctx->r15 = ADD32(ctx->r29, 0X84);
    // 0x80065888: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8006588C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80065890: jal         0x80036400
    // 0x80065894: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    guMtxCatF(rdram, ctx);
        goto after_6;
    // 0x80065894: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    after_6:
    // 0x80065898: addiu       $t8, $sp, 0x84
    ctx->r24 = ADD32(ctx->r29, 0X84);
    // 0x8006589C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800658A0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x800658A4: jal         0x80036400
    // 0x800658A8: addiu       $a1, $sp, 0x144
    ctx->r5 = ADD32(ctx->r29, 0X144);
    guMtxCatF(rdram, ctx);
        goto after_7;
    // 0x800658A8: addiu       $a1, $sp, 0x144
    ctx->r5 = ADD32(ctx->r29, 0X144);
    after_7:
    // 0x800658AC: addiu       $t9, $sp, 0x84
    ctx->r25 = ADD32(ctx->r29, 0X84);
    // 0x800658B0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800658B4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x800658B8: jal         0x80036400
    // 0x800658BC: addiu       $a1, $sp, 0x184
    ctx->r5 = ADD32(ctx->r29, 0X184);
    guMtxCatF(rdram, ctx);
        goto after_8;
    // 0x800658BC: addiu       $a1, $sp, 0x184
    ctx->r5 = ADD32(ctx->r29, 0X184);
    after_8:
    // 0x800658C0: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800658C4: lw          $a1, -0x1EFC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EFC);
    // 0x800658C8: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x800658CC: jal         0x800362A8
    // 0x800658D0: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    guMtxL2F(rdram, ctx);
        goto after_9;
    // 0x800658D0: addiu       $a1, $a1, 0x80
    ctx->r5 = ADD32(ctx->r5, 0X80);
    after_9:
    // 0x800658D4: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x800658D8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800658DC: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x800658E0: jal         0x80036400
    // 0x800658E4: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    guMtxCatF(rdram, ctx);
        goto after_10;
    // 0x800658E4: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    after_10:
    // 0x800658E8: sw          $zero, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = 0;
L_800658EC:
    // 0x800658EC: lw          $t1, 0x1C4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C4);
    // 0x800658F0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800658F4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800658F8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800658FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80065900: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80065904: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80065908: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006590C: lw          $t3, 0x64A8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X64A8);
    // 0x80065910: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065914: beq         $t3, $at, L_80065A9C
    if (ctx->r11 == ctx->r1) {
        // 0x80065918: nop
    
            goto L_80065A9C;
    }
    // 0x80065918: nop

    // 0x8006591C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80065920: lw          $t5, -0x1C5C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1C5C);
    // 0x80065924: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80065928: lw          $t4, -0x1EFC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1EFC);
    // 0x8006592C: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x80065930: addu        $a1, $t4, $t6
    ctx->r5 = ADD32(ctx->r12, ctx->r14);
    // 0x80065934: addiu       $a1, $a1, 0xE0
    ctx->r5 = ADD32(ctx->r5, 0XE0);
    // 0x80065938: jal         0x800360F0
    // 0x8006593C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    guMtxF2L(rdram, ctx);
        goto after_11;
    // 0x8006593C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_11:
    // 0x80065940: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80065944: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80065948: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006594C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80065950: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80065954: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80065958: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8006595C: lui         $t9, 0x102
    ctx->r25 = S32(0X102 << 16);
    // 0x80065960: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x80065964: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80065968: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006596C: lw          $t2, -0x1C5C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1C5C);
    // 0x80065970: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80065974: lw          $t1, -0x1EFC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1EFC);
    // 0x80065978: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x8006597C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80065980: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x80065984: addiu       $t4, $t5, 0xE0
    ctx->r12 = ADD32(ctx->r13, 0XE0);
    // 0x80065988: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006598C: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x80065990: lw          $t7, -0x1C5C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1C5C);
    // 0x80065994: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065998: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8006599C: sw          $t8, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r24;
    // 0x800659A0: lw          $t9, 0x1C4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C4);
    // 0x800659A4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800659A8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800659AC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800659B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800659B4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800659B8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800659BC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800659C0: lw          $t2, 0x64A8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X64A8);
    // 0x800659C4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800659C8: sll         $t1, $t2, 3
    ctx->r9 = S32(ctx->r10 << 3);
    // 0x800659CC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800659D0: lw          $t3, -0x3560($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3560);
    // 0x800659D4: nop

    // 0x800659D8: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x800659DC: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800659E0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x800659E4: lb          $t4, 0x4($t5)
    ctx->r12 = MEM_B(ctx->r13, 0X4);
    // 0x800659E8: nop

    // 0x800659EC: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x800659F0: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x800659F4: addiu       $t8, $t7, 0x7
    ctx->r24 = ADD32(ctx->r15, 0X7);
    // 0x800659F8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x800659FC: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x80065A00: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80065A04: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80065A08: nop

    // 0x80065A0C: addiu       $t1, $t2, 0x10
    ctx->r9 = ADD32(ctx->r10, 0X10);
    // 0x80065A10: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x80065A14: lw          $t3, 0x1C4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C4);
    // 0x80065A18: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80065A1C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80065A20: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80065A24: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80065A28: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80065A2C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80065A30: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80065A34: addiu       $t5, $t5, 0x6458
    ctx->r13 = ADD32(ctx->r13, 0X6458);
    // 0x80065A38: addiu       $t6, $t4, 0x40
    ctx->r14 = ADD32(ctx->r12, 0X40);
    // 0x80065A3C: addu        $a1, $t6, $t5
    ctx->r5 = ADD32(ctx->r14, ctx->r13);
    // 0x80065A40: lb          $t9, 0xC($t8)
    ctx->r25 = MEM_B(ctx->r24, 0XC);
    // 0x80065A44: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x80065A48: lb          $a3, 0x8($t8)
    ctx->r7 = MEM_B(ctx->r24, 0X8);
    // 0x80065A4C: addiu       $t7, $t4, 0x44
    ctx->r15 = ADD32(ctx->r12, 0X44);
    // 0x80065A50: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x80065A54: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80065A58: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80065A5C: lw          $t4, 0x7964($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7964);
    // 0x80065A60: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x80065A64: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80065A68: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80065A6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80065A70: addu        $a2, $t7, $t5
    ctx->r6 = ADD32(ctx->r15, ctx->r13);
    // 0x80065A74: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80065A78: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x80065A7C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80065A80: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80065A84: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80065A88: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80065A8C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80065A90: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80065A94: jal         0x800643C0
    // 0x80065A98: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_800643C0(rdram, ctx);
        goto after_12;
    // 0x80065A98: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_12:
L_80065A9C:
    // 0x80065A9C: lw          $t5, 0x1C4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C4);
    // 0x80065AA0: nop

    // 0x80065AA4: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x80065AA8: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x80065AAC: bne         $at, $zero, L_800658EC
    if (ctx->r1 != 0) {
        // 0x80065AB0: sw          $t8, 0x1C4($sp)
        MEM_W(0X1C4, ctx->r29) = ctx->r24;
            goto L_800658EC;
    }
    // 0x80065AB0: sw          $t8, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r24;
    // 0x80065AB4: b           L_80065ABC
    // 0x80065AB8: nop

        goto L_80065ABC;
    // 0x80065AB8: nop

L_80065ABC:
    // 0x80065ABC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80065AC0: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    // 0x80065AC4: jr          $ra
    // 0x80065AC8: nop

    return;
    // 0x80065AC8: nop

;}
RECOMP_FUNC void func_800EDDE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDDE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EDDE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EDDEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EDDF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EDDF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EDDF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EDDFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EDE00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EDE04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EDE08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EDE0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EDE10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EDE14: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800EDE18: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDE1C: nop

    // 0x800EDE20: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EDE24: nop

    // 0x800EDE28: bne         $t1, $zero, L_800EDE6C
    if (ctx->r9 != 0) {
        // 0x800EDE2C: nop
    
            goto L_800EDE6C;
    }
    // 0x800EDE2C: nop

    // 0x800EDE30: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDE34: nop

    // 0x800EDE38: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EDE3C: nop

    // 0x800EDE40: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EDE44: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EDE48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDE4C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800EDE50: addiu       $t5, $t5, -0x7018
    ctx->r13 = ADD32(ctx->r13, -0X7018);
    // 0x800EDE54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDE58: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800EDE5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EDE60: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800EDE64: jal         0x8001C0EC
    // 0x800EDE68: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EDE68: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_0:
L_800EDE6C:
    // 0x800EDE6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDE70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDE74: jal         0x800EE354
    // 0x800EDE78: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_800EE354(rdram, ctx);
        goto after_1;
    // 0x800EDE78: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x800EDE7C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDE80: nop

    // 0x800EDE84: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800EDE88: nop

    // 0x800EDE8C: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x800EDE90: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800EDE94: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800EDE98: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDE9C: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800EDEA0: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800EDEA4: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800EDEA8: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800EDEAC: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800EDEB0: jal         0x800156C4
    // 0x800EDEB4: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_2;
    // 0x800EDEB4: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_2:
    // 0x800EDEB8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x800EDEBC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EDEC0: jal         0x80015744
    // 0x800EDEC4: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_3;
    // 0x800EDEC4: nop

    after_3:
    // 0x800EDEC8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x800EDECC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDED0: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EDED4: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x800EDED8: jal         0x8002A800
    // 0x800EDEDC: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8002A800(rdram, ctx);
        goto after_4;
    // 0x800EDEDC: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_4:
    // 0x800EDEE0: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x800EDEE4: nop

    // 0x800EDEE8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800EDEEC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x800EDEF0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EDEF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EDEF8: nop

    // 0x800EDEFC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800EDF00: nop

    // 0x800EDF04: bc1t        L_800EDF38
    if (c1cs) {
        // 0x800EDF08: nop
    
            goto L_800EDF38;
    }
    // 0x800EDF08: nop

    // 0x800EDF0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800EDF10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800EDF14: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDF18: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EDF1C: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x800EDF20: mul.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800EDF24: jal         0x80015538
    // 0x800EDF28: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800EDF28: nop

    after_5:
    // 0x800EDF2C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDF30: nop

    // 0x800EDF34: swc1        $f0, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f0.u32l;
L_800EDF38:
    // 0x800EDF38: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDF3C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x800EDF40: lwc1        $f14, 0x40($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X40);
    // 0x800EDF44: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800EDF48: jal         0x80015538
    // 0x800EDF4C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x800EDF4C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_6:
    // 0x800EDF50: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDF54: nop

    // 0x800EDF58: swc1        $f0, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f0.u32l;
    // 0x800EDF5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDF60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDF64: jal         0x8001B4AC
    // 0x800EDF68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x800EDF68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800EDF6C: beq         $v0, $zero, L_800EDF8C
    if (ctx->r2 == 0) {
        // 0x800EDF70: nop
    
            goto L_800EDF8C;
    }
    // 0x800EDF70: nop

    // 0x800EDF74: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDF78: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800EDF7C: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800EDF80: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800EDF84: nop

    // 0x800EDF88: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800EDF8C:
    // 0x800EDF8C: b           L_800EDF94
    // 0x800EDF90: nop

        goto L_800EDF94;
    // 0x800EDF90: nop

L_800EDF94:
    // 0x800EDF94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EDF98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800EDF9C: jr          $ra
    // 0x800EDFA0: nop

    return;
    // 0x800EDFA0: nop

;}
RECOMP_FUNC void func_800CD1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD1E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CD1E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CD1EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CD1F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CD1F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CD1F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CD1FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD200: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CD204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD208: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CD20C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CD210: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CD214: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800CD218: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD21C: nop

    // 0x800CD220: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CD224: nop

    // 0x800CD228: bne         $t1, $zero, L_800CD280
    if (ctx->r9 != 0) {
        // 0x800CD22C: nop
    
            goto L_800CD280;
    }
    // 0x800CD22C: nop

    // 0x800CD230: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD234: nop

    // 0x800CD238: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CD23C: nop

    // 0x800CD240: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CD244: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CD248: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CD24C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CD250: jal         0x8001BBDC
    // 0x800CD254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800CD254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800CD258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CD25C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CD260: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CD264: addiu       $a3, $a3, -0x7CF4
    ctx->r7 = ADD32(ctx->r7, -0X7CF4);
    // 0x800CD268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CD26C: jal         0x8001ABF4
    // 0x800CD270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800CD270: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800CD274: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD278: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800CD27C: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
L_800CD280:
    // 0x800CD280: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD284: nop

    // 0x800CD288: lh          $t8, 0xC0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC0);
    // 0x800CD28C: nop

    // 0x800CD290: bne         $t8, $zero, L_800CD398
    if (ctx->r24 != 0) {
        // 0x800CD294: nop
    
            goto L_800CD398;
    }
    // 0x800CD294: nop

    // 0x800CD298: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x800CD29C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_800CD2A0:
    // 0x800CD2A0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800CD2A4: jal         0x80026E58
    // 0x800CD2A8: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_2;
    // 0x800CD2A8: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_2:
    // 0x800CD2AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800CD2B0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800CD2B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CD2B8: bne         $t0, $at, L_800CD2D0
    if (ctx->r8 != ctx->r1) {
        // 0x800CD2BC: nop
    
            goto L_800CD2D0;
    }
    // 0x800CD2BC: nop

    // 0x800CD2C0: b           L_800CD37C
    // 0x800CD2C4: nop

        goto L_800CD37C;
    // 0x800CD2C4: nop

    // 0x800CD2C8: b           L_800CD374
    // 0x800CD2CC: nop

        goto L_800CD374;
    // 0x800CD2CC: nop

L_800CD2D0:
    // 0x800CD2D0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800CD2D4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD2D8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800CD2DC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800CD2E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CD2E4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800CD2E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CD2EC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800CD2F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CD2F4: lh          $t4, 0x4206($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4206);
    // 0x800CD2F8: lh          $t5, 0xB6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XB6);
    // 0x800CD2FC: nop

    // 0x800CD300: bne         $t4, $t5, L_800CD364
    if (ctx->r12 != ctx->r13) {
        // 0x800CD304: nop
    
            goto L_800CD364;
    }
    // 0x800CD304: nop

    // 0x800CD308: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800CD30C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CD310: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CD314: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD318: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CD31C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD320: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CD324: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CD328: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800CD32C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800CD330: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CD334: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800CD338: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CD33C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800CD340: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CD344: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800CD348: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800CD34C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800CD350: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x800CD354: b           L_800CD37C
    // 0x800CD358: nop

        goto L_800CD37C;
    // 0x800CD358: nop

    // 0x800CD35C: b           L_800CD374
    // 0x800CD360: nop

        goto L_800CD374;
    // 0x800CD360: nop

L_800CD364:
    // 0x800CD364: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800CD368: nop

    // 0x800CD36C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x800CD370: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
L_800CD374:
    // 0x800CD374: b           L_800CD2A0
    // 0x800CD378: nop

        goto L_800CD2A0;
    // 0x800CD378: nop

L_800CD37C:
    // 0x800CD37C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD380: nop

    // 0x800CD384: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800CD388: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD38C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800CD390: b           L_800CD4D4
    // 0x800CD394: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
        goto L_800CD4D4;
    // 0x800CD394: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800CD398:
    // 0x800CD398: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD39C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CD3A0: lh          $t7, 0xC0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC0);
    // 0x800CD3A4: nop

    // 0x800CD3A8: bne         $t7, $at, L_800CD4B0
    if (ctx->r15 != ctx->r1) {
        // 0x800CD3AC: nop
    
            goto L_800CD4B0;
    }
    // 0x800CD3AC: nop

    // 0x800CD3B0: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x800CD3B4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_800CD3B8:
    // 0x800CD3B8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800CD3BC: jal         0x80026E58
    // 0x800CD3C0: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_3;
    // 0x800CD3C0: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_3:
    // 0x800CD3C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800CD3C8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800CD3CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CD3D0: bne         $t8, $at, L_800CD3E8
    if (ctx->r24 != ctx->r1) {
        // 0x800CD3D4: nop
    
            goto L_800CD3E8;
    }
    // 0x800CD3D4: nop

    // 0x800CD3D8: b           L_800CD494
    // 0x800CD3DC: nop

        goto L_800CD494;
    // 0x800CD3DC: nop

    // 0x800CD3E0: b           L_800CD48C
    // 0x800CD3E4: nop

        goto L_800CD48C;
    // 0x800CD3E4: nop

L_800CD3E8:
    // 0x800CD3E8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800CD3EC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD3F0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CD3F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CD3F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CD3FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CD400: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CD404: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800CD408: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800CD40C: lh          $t3, 0x4206($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4206);
    // 0x800CD410: lh          $t4, 0xB8($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XB8);
    // 0x800CD414: nop

    // 0x800CD418: bne         $t3, $t4, L_800CD47C
    if (ctx->r11 != ctx->r12) {
        // 0x800CD41C: nop
    
            goto L_800CD47C;
    }
    // 0x800CD41C: nop

    // 0x800CD420: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x800CD424: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CD428: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CD42C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CD430: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CD434: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CD438: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CD43C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800CD440: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800CD444: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800CD448: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CD44C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800CD450: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800CD454: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CD458: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800CD45C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CD460: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CD464: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800CD468: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800CD46C: b           L_800CD494
    // 0x800CD470: nop

        goto L_800CD494;
    // 0x800CD470: nop

    // 0x800CD474: b           L_800CD48C
    // 0x800CD478: nop

        goto L_800CD48C;
    // 0x800CD478: nop

L_800CD47C:
    // 0x800CD47C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800CD480: nop

    // 0x800CD484: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800CD488: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
L_800CD48C:
    // 0x800CD48C: b           L_800CD3B8
    // 0x800CD490: nop

        goto L_800CD3B8;
    // 0x800CD490: nop

L_800CD494:
    // 0x800CD494: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD498: nop

    // 0x800CD49C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800CD4A0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD4A4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800CD4A8: b           L_800CD4D4
    // 0x800CD4AC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
        goto L_800CD4D4;
    // 0x800CD4AC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
L_800CD4B0:
    // 0x800CD4B0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD4B4: nop

    // 0x800CD4B8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800CD4BC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD4C0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800CD4C4: sh          $t6, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r14;
    // 0x800CD4C8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD4CC: nop

    // 0x800CD4D0: sh          $zero, 0xBA($t7)
    MEM_H(0XBA, ctx->r15) = 0;
L_800CD4D4:
    // 0x800CD4D4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD4D8: nop

    // 0x800CD4DC: lh          $t0, 0xC0($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XC0);
    // 0x800CD4E0: nop

    // 0x800CD4E4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800CD4E8: sh          $t1, 0xC0($t8)
    MEM_H(0XC0, ctx->r24) = ctx->r9;
    // 0x800CD4EC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD4F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800CD4F4: lh          $t3, 0xC0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC0);
    // 0x800CD4F8: nop

    // 0x800CD4FC: bne         $t3, $at, L_800CD510
    if (ctx->r11 != ctx->r1) {
        // 0x800CD500: nop
    
            goto L_800CD510;
    }
    // 0x800CD500: nop

    // 0x800CD504: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800CD508: nop

    // 0x800CD50C: sh          $zero, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = 0;
L_800CD510:
    // 0x800CD510: b           L_800CD518
    // 0x800CD514: nop

        goto L_800CD518;
    // 0x800CD514: nop

L_800CD518:
    // 0x800CD518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CD51C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CD520: jr          $ra
    // 0x800CD524: nop

    return;
    // 0x800CD524: nop

;}
RECOMP_FUNC void func_800F65C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F65C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800F65C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F65CC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800F65D0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800F65D4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800F65D8: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x800F65DC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800F65E0: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800F65E4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800F65E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800F65EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F65F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F65F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F65F8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F65FC: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800F6600: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800F6604: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x800F6608: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F660C: nop

    // 0x800F6610: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800F6614: nop

    // 0x800F6618: bne         $t2, $zero, L_800F6798
    if (ctx->r10 != 0) {
        // 0x800F661C: nop
    
            goto L_800F6798;
    }
    // 0x800F661C: nop

    // 0x800F6620: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F6624: nop

    // 0x800F6628: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x800F662C: nop

    // 0x800F6630: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800F6634: sb          $t5, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r13;
    // 0x800F6638: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F663C: nop

    // 0x800F6640: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800F6644: nop

    // 0x800F6648: beq         $t7, $zero, L_800F66FC
    if (ctx->r15 == 0) {
        // 0x800F664C: nop
    
            goto L_800F66FC;
    }
    // 0x800F664C: nop

    // 0x800F6650: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F6654: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x800F6658: sh          $t8, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r24;
    // 0x800F665C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F6660: nop

    // 0x800F6664: sh          $zero, 0xAE($t0)
    MEM_H(0XAE, ctx->r8) = 0;
    // 0x800F6668: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F666C: nop

    // 0x800F6670: lh          $t2, 0xAC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAC);
    // 0x800F6674: nop

    // 0x800F6678: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800F667C: nop

    // 0x800F6680: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F6684: swc1        $f6, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f6.u32l;
    // 0x800F6688: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800F668C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F6690: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F6694: nop

    // 0x800F6698: swc1        $f8, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f8.u32l;
    // 0x800F669C: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800F66A0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F66A4: negu        $t3, $t5
    ctx->r11 = SUB32(0, ctx->r13);
    // 0x800F66A8: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800F66AC: lwc1        $f19, 0x5708($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5708);
    // 0x800F66B0: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x800F66B4: lwc1        $f18, 0x570C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X570C);
    // 0x800F66B8: nop

    // 0x800F66BC: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x800F66C0: jal         0x80034970
    // 0x800F66C4: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x800F66C4: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_0:
    // 0x800F66C8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F66CC: nop

    // 0x800F66D0: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800F66D4: nop

    // 0x800F66D8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800F66DC: nop

    // 0x800F66E0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F66E4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800F66E8: swc1        $f10, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f10.u32l;
    // 0x800F66EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F66F0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F66F4: b           L_800F6798
    // 0x800F66F8: swc1        $f16, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f16.u32l;
        goto L_800F6798;
    // 0x800F66F8: swc1        $f16, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f16.u32l;
L_800F66FC:
    // 0x800F66FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F6700: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x800F6704: sh          $t9, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r25;
    // 0x800F6708: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F670C: nop

    // 0x800F6710: lh          $t1, 0xAC($t2)
    ctx->r9 = MEM_H(ctx->r10, 0XAC);
    // 0x800F6714: nop

    // 0x800F6718: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800F671C: nop

    // 0x800F6720: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800F6724: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
    // 0x800F6728: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x800F672C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F6730: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x800F6734: lwc1        $f11, 0x5710($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5710);
    // 0x800F6738: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x800F673C: lwc1        $f10, 0x5714($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5714);
    // 0x800F6740: nop

    // 0x800F6744: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800F6748: jal         0x80034970
    // 0x800F674C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x800F674C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_1:
    // 0x800F6750: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F6754: nop

    // 0x800F6758: lh          $t3, 0xA6($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XA6);
    // 0x800F675C: nop

    // 0x800F6760: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x800F6764: nop

    // 0x800F6768: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800F676C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800F6770: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x800F6774: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F6778: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F677C: nop

    // 0x800F6780: swc1        $f8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f8.u32l;
    // 0x800F6784: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F6788: nop

    // 0x800F678C: lwc1        $f10, 0x40($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X40);
    // 0x800F6790: nop

    // 0x800F6794: swc1        $f10, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f10.u32l;
L_800F6798:
    // 0x800F6798: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F679C: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800F67A0: lh          $t1, 0xA8($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA8);
    // 0x800F67A4: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x800F67A8: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800F67AC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800F67B0: nop

    // 0x800F67B4: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F67B8: mflo        $t2
    ctx->r10 = lo;
    // 0x800F67BC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x800F67C0: jal         0x80015538
    // 0x800F67C4: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800F67C4: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_2:
    // 0x800F67C8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800F67CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F67D0: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800F67D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800F67D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800F67DC: nop

    // 0x800F67E0: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800F67E4: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x800F67E8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800F67EC: sh          $t3, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r11;
    // 0x800F67F0: nop

    // 0x800F67F4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F67F8: nop

    // 0x800F67FC: lh          $t6, 0xAA($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XAA);
    // 0x800F6800: nop

    // 0x800F6804: beq         $t6, $zero, L_800F690C
    if (ctx->r14 == 0) {
        // 0x800F6808: nop
    
            goto L_800F690C;
    }
    // 0x800F6808: nop

    // 0x800F680C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F6810: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800F6814: lh          $t1, 0xA8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA8);
    // 0x800F6818: lh          $t8, 0xAE($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XAE);
    // 0x800F681C: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800F6820: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F6824: nop

    // 0x800F6828: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F682C: mflo        $t2
    ctx->r10 = lo;
    // 0x800F6830: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800F6834: jal         0x80015538
    // 0x800F6838: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800F6838: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_3:
    // 0x800F683C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800F6840: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F6844: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800F6848: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800F684C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800F6850: nop

    // 0x800F6854: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800F6858: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x800F685C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800F6860: sh          $t3, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = ctx->r11;
    // 0x800F6864: nop

    // 0x800F6868: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F686C: nop

    // 0x800F6870: lh          $t6, 0xAC($t7)
    ctx->r14 = MEM_H(ctx->r15, 0XAC);
    // 0x800F6874: nop

    // 0x800F6878: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800F687C: nop

    // 0x800F6880: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F6884: swc1        $f18, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f18.u32l;
    // 0x800F6888: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x800F688C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F6890: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800F6894: lwc1        $f9, 0x5718($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5718);
    // 0x800F6898: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x800F689C: lwc1        $f8, 0x571C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X571C);
    // 0x800F68A0: nop

    // 0x800F68A4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800F68A8: jal         0x80034970
    // 0x800F68AC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x800F68AC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_4:
    // 0x800F68B0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F68B4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F68B8: lh          $t0, 0xAE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAE);
    // 0x800F68BC: lwc1        $f5, 0x5720($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5720);
    // 0x800F68C0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F68C4: lwc1        $f4, 0x5724($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5724);
    // 0x800F68C8: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x800F68CC: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800F68D0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800F68D4: jal         0x80034970
    // 0x800F68D8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x800F68D8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_5:
    // 0x800F68DC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F68E0: nop

    // 0x800F68E4: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800F68E8: nop

    // 0x800F68EC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800F68F0: nop

    // 0x800F68F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F68F8: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800F68FC: nop

    // 0x800F6900: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800F6904: b           L_800F692C
    // 0x800F6908: swc1        $f18, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f18.u32l;
        goto L_800F692C;
    // 0x800F6908: swc1        $f18, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f18.u32l;
L_800F690C:
    // 0x800F690C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F6910: nop

    // 0x800F6914: lh          $t3, 0xAC($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XAC);
    // 0x800F6918: nop

    // 0x800F691C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800F6920: nop

    // 0x800F6924: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F6928: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
L_800F692C:
    // 0x800F692C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6930: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6934: jal         0x80029C40
    // 0x800F6938: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800F6938: nop

    after_6:
    // 0x800F693C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F6940: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F6944: jal         0x80029D04
    // 0x800F6948: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x800F6948: nop

    after_7:
    // 0x800F694C: b           L_800F6954
    // 0x800F6950: nop

        goto L_800F6954;
    // 0x800F6950: nop

L_800F6954:
    // 0x800F6954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6958: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800F695C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800F6960: jr          $ra
    // 0x800F6964: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800F6964: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800CD738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD738: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800CD73C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CD740: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CD744: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CD748: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CD74C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD750: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CD754: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD758: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CD75C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CD760: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CD764: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800CD768: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800CD76C: nop

    // 0x800CD770: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CD774: nop

    // 0x800CD778: bne         $t1, $zero, L_800CD7B0
    if (ctx->r9 != 0) {
        // 0x800CD77C: nop
    
            goto L_800CD7B0;
    }
    // 0x800CD77C: nop

    // 0x800CD780: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800CD784: nop

    // 0x800CD788: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CD78C: nop

    // 0x800CD790: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CD794: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CD798: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800CD79C: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800CD7A0: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800CD7A4: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800CD7A8: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800CD7AC: sh          $t7, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = ctx->r15;
L_800CD7B0:
    // 0x800CD7B0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800CD7B4: nop

    // 0x800CD7B8: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800CD7BC: nop

    // 0x800CD7C0: bne         $t0, $zero, L_800CD7E0
    if (ctx->r8 != 0) {
        // 0x800CD7C4: nop
    
            goto L_800CD7E0;
    }
    // 0x800CD7C4: nop

    // 0x800CD7C8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800CD7CC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800CD7D0: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800CD7D4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800CD7D8: b           L_800CD7F8
    // 0x800CD7DC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800CD7F8;
    // 0x800CD7DC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800CD7E0:
    // 0x800CD7E0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800CD7E4: nop

    // 0x800CD7E8: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800CD7EC: nop

    // 0x800CD7F0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800CD7F4: sh          $t6, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r14;
L_800CD7F8:
    // 0x800CD7F8: b           L_800CD800
    // 0x800CD7FC: nop

        goto L_800CD800;
    // 0x800CD7FC: nop

L_800CD800:
    // 0x800CD800: jr          $ra
    // 0x800CD804: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800CD804: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800AFA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AFA3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AFA40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AFA44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AFA48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AFA4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AFA50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AFA54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AFA58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AFA5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AFA60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AFA64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AFA68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AFA6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AFA70: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AFA74: nop

    // 0x800AFA78: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AFA7C: nop

    // 0x800AFA80: bne         $t1, $zero, L_800AFAF8
    if (ctx->r9 != 0) {
        // 0x800AFA84: nop
    
            goto L_800AFAF8;
    }
    // 0x800AFA84: nop

    // 0x800AFA88: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AFA8C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AFA90: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AFA94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AFA98: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AFA9C: nop

    // 0x800AFAA0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AFAA4: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x800AFAA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800AFAAC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AFAB0: nop

    // 0x800AFAB4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AFAB8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800AFABC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800AFAC0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AFAC4: nop

    // 0x800AFAC8: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800AFACC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AFAD0: nop

    // 0x800AFAD4: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x800AFAD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFADC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFAE0: jal         0x8001BBDC
    // 0x800AFAE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800AFAE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800AFAE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFAEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFAF0: jal         0x8001BB04
    // 0x800AFAF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x800AFAF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800AFAF8:
    // 0x800AFAF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFAFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFB00: jal         0x80029C40
    // 0x800AFB04: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800AFB04: nop

    after_2:
    // 0x800AFB08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFB0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFB10: jal         0x80029D04
    // 0x800AFB14: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800AFB14: nop

    after_3:
    // 0x800AFB18: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x800AFB1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800AFB20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800AFB24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFB28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFB2C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800AFB30: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800AFB34: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800AFB38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800AFB3C: jal         0x800295C0
    // 0x800AFB40: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800AFB40: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x800AFB44: beq         $v0, $zero, L_800AFB74
    if (ctx->r2 == 0) {
        // 0x800AFB48: nop
    
            goto L_800AFB74;
    }
    // 0x800AFB48: nop

    // 0x800AFB4C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AFB50: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800AFB54: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800AFB58: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AFB5C: nop

    // 0x800AFB60: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800AFB64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AFB68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AFB6C: jal         0x8001BBDC
    // 0x800AFB70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800AFB70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_800AFB74:
    // 0x800AFB74: b           L_800AFB7C
    // 0x800AFB78: nop

        goto L_800AFB7C;
    // 0x800AFB78: nop

L_800AFB7C:
    // 0x800AFB7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AFB80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800AFB84: jr          $ra
    // 0x800AFB88: nop

    return;
    // 0x800AFB88: nop

;}
RECOMP_FUNC void func_800F6968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F696C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6970: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F6974: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F6978: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F697C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F6980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F6984: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F6988: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F698C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F6990: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F6994: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800F6998: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F699C: bne         $t8, $at, L_800F69BC
    if (ctx->r24 != ctx->r1) {
        // 0x800F69A0: nop
    
            goto L_800F69BC;
    }
    // 0x800F69A0: nop

    // 0x800F69A4: b           L_800F69AC
    // 0x800F69A8: nop

        goto L_800F69AC;
    // 0x800F69A8: nop

L_800F69AC:
    // 0x800F69AC: jal         0x800F65C4
    // 0x800F69B0: nop

    func_800F65C4(rdram, ctx);
        goto after_0;
    // 0x800F69B0: nop

    after_0:
    // 0x800F69B4: b           L_800F69C4
    // 0x800F69B8: nop

        goto L_800F69C4;
    // 0x800F69B8: nop

L_800F69BC:
    // 0x800F69BC: b           L_800F69C4
    // 0x800F69C0: nop

        goto L_800F69C4;
    // 0x800F69C0: nop

L_800F69C4:
    // 0x800F69C4: b           L_800F69CC
    // 0x800F69C8: nop

        goto L_800F69CC;
    // 0x800F69C8: nop

L_800F69CC:
    // 0x800F69CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F69D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F69D4: jr          $ra
    // 0x800F69D8: nop

    return;
    // 0x800F69D8: nop

;}
RECOMP_FUNC void func_800BF3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF3A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BF3A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BF3AC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800BF3B0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800BF3B4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800BF3B8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800BF3BC: nop

    // 0x800BF3C0: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800BF3C4: nop

    // 0x800BF3C8: bne         $t7, $zero, L_800BF40C
    if (ctx->r15 != 0) {
        // 0x800BF3CC: nop
    
            goto L_800BF40C;
    }
    // 0x800BF3CC: nop

    // 0x800BF3D0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800BF3D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BF3D8: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800BF3DC: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x800BF3E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800BF3E4: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800BF3E8: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    // 0x800BF3EC: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x800BF3F0: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x800BF3F4: addiu       $a2, $a2, 0x3DB4
    ctx->r6 = ADD32(ctx->r6, 0X3DB4);
    // 0x800BF3F8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x800BF3FC: jal         0x80027C00
    // 0x800BF400: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027C00(rdram, ctx);
        goto after_0;
    // 0x800BF400: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800BF404: b           L_800BF444
    // 0x800BF408: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
        goto L_800BF444;
    // 0x800BF408: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
L_800BF40C:
    // 0x800BF40C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800BF410: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800BF414: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800BF418: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x800BF41C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BF420: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800BF424: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    // 0x800BF428: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x800BF42C: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x800BF430: addiu       $a2, $a2, 0x3DA8
    ctx->r6 = ADD32(ctx->r6, 0X3DA8);
    // 0x800BF434: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x800BF438: jal         0x80027C00
    // 0x800BF43C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027C00(rdram, ctx);
        goto after_1;
    // 0x800BF43C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x800BF440: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
L_800BF444:
    // 0x800BF444: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x800BF448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BF44C: beq         $t0, $at, L_800BF5AC
    if (ctx->r8 == ctx->r1) {
        // 0x800BF450: nop
    
            goto L_800BF5AC;
    }
    // 0x800BF450: nop

    // 0x800BF454: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x800BF458: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800BF45C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800BF460: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BF464: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800BF468: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BF46C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800BF470: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800BF474: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800BF478: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x800BF47C: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800BF480: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF484: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800BF488: nop

    // 0x800BF48C: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x800BF490: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800BF494: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF498: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800BF49C: nop

    // 0x800BF4A0: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    // 0x800BF4A4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800BF4A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF4AC: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800BF4B0: nop

    // 0x800BF4B4: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
    // 0x800BF4B8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800BF4BC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF4C0: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800BF4C4: nop

    // 0x800BF4C8: swc1        $f8, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f8.u32l;
    // 0x800BF4CC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800BF4D0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF4D4: lwc1        $f10, 0x3C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800BF4D8: nop

    // 0x800BF4DC: swc1        $f10, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f10.u32l;
    // 0x800BF4E0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800BF4E4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF4E8: lwc1        $f16, 0x40($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X40);
    // 0x800BF4EC: nop

    // 0x800BF4F0: swc1        $f16, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f16.u32l;
    // 0x800BF4F4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF4F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800BF4FC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800BF500: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF504: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x800BF508: sh          $t0, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r8;
    // 0x800BF50C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF510: nop

    // 0x800BF514: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800BF518: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800BF51C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800BF520: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
    // 0x800BF524: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800BF528: nop

    // 0x800BF52C: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800BF530: nop

    // 0x800BF534: bne         $t6, $zero, L_800BF564
    if (ctx->r14 != 0) {
        // 0x800BF538: nop
    
            goto L_800BF564;
    }
    // 0x800BF538: nop

    // 0x800BF53C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800BF540: addiu       $t7, $t7, 0x7EE8
    ctx->r15 = ADD32(ctx->r15, 0X7EE8);
    // 0x800BF544: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800BF548: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800BF54C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800BF550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BF554: jal         0x8001C0EC
    // 0x800BF558: addiu       $a3, $zero, 0x116
    ctx->r7 = ADD32(0, 0X116);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800BF558: addiu       $a3, $zero, 0x116
    ctx->r7 = ADD32(0, 0X116);
    after_2:
    // 0x800BF55C: b           L_800BF584
    // 0x800BF560: nop

        goto L_800BF584;
    // 0x800BF560: nop

L_800BF564:
    // 0x800BF564: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800BF568: addiu       $t8, $t8, 0x7EE0
    ctx->r24 = ADD32(ctx->r24, 0X7EE0);
    // 0x800BF56C: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800BF570: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800BF574: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800BF578: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BF57C: jal         0x8001C0EC
    // 0x800BF580: addiu       $a3, $zero, 0x115
    ctx->r7 = ADD32(0, 0X115);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800BF580: addiu       $a3, $zero, 0x115
    ctx->r7 = ADD32(0, 0X115);
    after_3:
L_800BF584:
    // 0x800BF584: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800BF588: jal         0x80029C40
    // 0x800BF58C: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800BF58C: nop

    after_4:
    // 0x800BF590: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800BF594: jal         0x80029D04
    // 0x800BF598: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800BF598: nop

    after_5:
    // 0x800BF59C: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    // 0x800BF5A0: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x800BF5A4: jal         0x800281A4
    // 0x800BF5A8: nop

    func_800281A4(rdram, ctx);
        goto after_6;
    // 0x800BF5A8: nop

    after_6:
L_800BF5AC:
    // 0x800BF5AC: lh          $v0, 0x2A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2A);
    // 0x800BF5B0: b           L_800BF5C0
    // 0x800BF5B4: nop

        goto L_800BF5C0;
    // 0x800BF5B4: nop

    // 0x800BF5B8: b           L_800BF5C0
    // 0x800BF5BC: nop

        goto L_800BF5C0;
    // 0x800BF5BC: nop

L_800BF5C0:
    // 0x800BF5C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BF5C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800BF5C8: jr          $ra
    // 0x800BF5CC: nop

    return;
    // 0x800BF5CC: nop

;}
