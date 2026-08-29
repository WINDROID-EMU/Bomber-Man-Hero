#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8033ECA0_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033ECA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033ECA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033ECA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033ECAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033ECB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033ECB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033ECB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ECBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033ECC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ECC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033ECC8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033ECCC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033ECD0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033ECD4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033ECD8: nop

    // 0x8033ECDC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033ECE0: nop

    // 0x8033ECE4: bne         $t1, $zero, L_8033ED3C
    if (ctx->r9 != 0) {
        // 0x8033ECE8: nop
    
            goto L_8033ED3C;
    }
    // 0x8033ECE8: nop

    // 0x8033ECEC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033ECF0: nop

    // 0x8033ECF4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033ECF8: nop

    // 0x8033ECFC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033ED00: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033ED04: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033ED08: nop

    // 0x8033ED0C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033ED10: nop

    // 0x8033ED14: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033ED18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ED1C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033ED20: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x8033ED24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ED28: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033ED2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033ED30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033ED34: jal         0x8001C0EC
    // 0x8033ED38: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033ED38: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
L_8033ED3C:
    // 0x8033ED3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ED40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ED44: jal         0x8002A8B4
    // 0x8033ED48: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x8033ED48: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x8033ED4C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033ED50: nop

    // 0x8033ED54: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033ED58: nop

    // 0x8033ED5C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033ED60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ED64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ED68: jal         0x8001B4AC
    // 0x8033ED6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033ED6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033ED70: beq         $v0, $zero, L_8033ED90
    if (ctx->r2 == 0) {
        // 0x8033ED74: nop
    
            goto L_8033ED90;
    }
    // 0x8033ED74: nop

    // 0x8033ED78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033ED7C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8033ED80: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033ED84: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033ED88: nop

    // 0x8033ED8C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033ED90:
    // 0x8033ED90: b           L_8033ED98
    // 0x8033ED94: nop

        goto L_8033ED98;
    // 0x8033ED94: nop

L_8033ED98:
    // 0x8033ED98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ED9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033EDA0: jr          $ra
    // 0x8033EDA4: nop

    return;
    // 0x8033EDA4: nop

;}
RECOMP_FUNC void func_80336724_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336724: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80336728: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033672C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336730: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336734: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336738: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033673C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336740: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336744: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336748: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033674C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336750: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336754: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80336758: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033675C: nop

    // 0x80336760: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336764: nop

    // 0x80336768: bne         $t1, $zero, L_80336808
    if (ctx->r9 != 0) {
        // 0x8033676C: nop
    
            goto L_80336808;
    }
    // 0x8033676C: nop

    // 0x80336770: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80336774: nop

    // 0x80336778: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033677C: nop

    // 0x80336780: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336784: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336788: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8033678C: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x80336790: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80336794: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336798: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033679C: addiu       $t7, $t7, -0x5A58
    ctx->r15 = ADD32(ctx->r15, -0X5A58);
    // 0x803367A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803367A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803367A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803367AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803367B0: jal         0x8001C0EC
    // 0x803367B4: addiu       $a3, $zero, 0xDF
    ctx->r7 = ADD32(0, 0XDF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803367B4: addiu       $a3, $zero, 0xDF
    ctx->r7 = ADD32(0, 0XDF);
    after_0:
    // 0x803367B8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803367BC: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x803367C0: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x803367C4: lwc1        $f14, 0x4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803367C8: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x803367CC: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x803367D0: addiu       $t1, $sp, 0x2C
    ctx->r9 = ADD32(ctx->r29, 0X2C);
    // 0x803367D4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x803367D8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x803367DC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803367E0: jal         0x80016C54
    // 0x803367E4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_80016C54(rdram, ctx);
        goto after_1;
    // 0x803367E4: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x803367E8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803367EC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803367F0: nop

    // 0x803367F4: swc1        $f4, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f4.u32l;
    // 0x803367F8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803367FC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80336800: nop

    // 0x80336804: swc1        $f6, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f6.u32l;
L_80336808:
    // 0x80336808: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033680C: nop

    // 0x80336810: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x80336814: nop

    // 0x80336818: bne         $t5, $zero, L_80336838
    if (ctx->r13 != 0) {
        // 0x8033681C: nop
    
            goto L_80336838;
    }
    // 0x8033681C: nop

    // 0x80336820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336824: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336828: jal         0x8002B114
    // 0x8033682C: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033682C: nop

    after_2:
    // 0x80336830: b           L_80336850
    // 0x80336834: nop

        goto L_80336850;
    // 0x80336834: nop

L_80336838:
    // 0x80336838: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8033683C: nop

    // 0x80336840: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x80336844: nop

    // 0x80336848: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8033684C: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
L_80336850:
    // 0x80336850: b           L_80336858
    // 0x80336854: nop

        goto L_80336858;
    // 0x80336854: nop

L_80336858:
    // 0x80336858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033685C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80336860: jr          $ra
    // 0x80336864: nop

    return;
    // 0x80336864: nop

;}
RECOMP_FUNC void func_80338C88_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338C88: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80338C8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338C90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338C94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338C98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338C9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338CA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338CA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338CA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338CAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338CB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338CB4: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80338CB8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80338CBC: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
L_80338CC0:
    // 0x80338CC0: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80338CC4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80338CC8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80338CCC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338CD0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80338CD4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338CD8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80338CDC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80338CE0: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x80338CE4: nop

    // 0x80338CE8: beq         $t3, $zero, L_80338D98
    if (ctx->r11 == 0) {
        // 0x80338CEC: nop
    
            goto L_80338D98;
    }
    // 0x80338CEC: nop

    // 0x80338CF0: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80338CF4: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80338CF8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80338CFC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338D00: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80338D04: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338D08: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80338D0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338D10: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80338D14: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80338D18: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80338D1C: nop

    // 0x80338D20: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80338D24: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x80338D28: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80338D2C: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80338D30: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80338D34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338D38: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338D3C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338D40: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80338D44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338D48: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80338D4C: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80338D50: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80338D54: nop

    // 0x80338D58: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80338D5C: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80338D60: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80338D64: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80338D68: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80338D6C: nop

    // 0x80338D70: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80338D74: nop

    // 0x80338D78: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80338D7C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80338D80: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80338D84: nop

    // 0x80338D88: bc1f        L_80338D98
    if (!c1cs) {
        // 0x80338D8C: nop
    
            goto L_80338D98;
    }
    // 0x80338D8C: nop

    // 0x80338D90: b           L_80338DC0
    // 0x80338D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80338DC0;
    // 0x80338D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80338D98:
    // 0x80338D98: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80338D9C: nop

    // 0x80338DA0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80338DA4: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x80338DA8: bne         $at, $zero, L_80338CC0
    if (ctx->r1 != 0) {
        // 0x80338DAC: sw          $t1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r9;
            goto L_80338CC0;
    }
    // 0x80338DAC: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80338DB0: b           L_80338DC0
    // 0x80338DB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80338DC0;
    // 0x80338DB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80338DB8: b           L_80338DC0
    // 0x80338DBC: nop

        goto L_80338DC0;
    // 0x80338DBC: nop

L_80338DC0:
    // 0x80338DC0: jr          $ra
    // 0x80338DC4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80338DC4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8033078C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033078C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330790: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330794: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330798: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033079C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803307A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803307A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803307AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803307B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803307B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803307BC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803307C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803307C4: nop

    // 0x803307C8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803307CC: nop

    // 0x803307D0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x803307D4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803307D8: nop

    // 0x803307DC: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803307E0: nop

    // 0x803307E4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x803307E8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803307EC: nop

    // 0x803307F0: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x803307F4: nop

    // 0x803307F8: bne         $t5, $zero, L_8033088C
    if (ctx->r13 != 0) {
        // 0x803307FC: nop
    
            goto L_8033088C;
    }
    // 0x803307FC: nop

    // 0x80330800: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330804: nop

    // 0x80330808: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033080C: nop

    // 0x80330810: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80330814: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80330818: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033081C: nop

    // 0x80330820: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80330824: nop

    // 0x80330828: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x8033082C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330834: jal         0x8001BBDC
    // 0x80330838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80330838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033083C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330840: jal         0x8001BBDC
    // 0x80330844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80330844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330848: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033084C: jal         0x8001BBDC
    // 0x80330850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80330850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330854: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330858: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x8033085C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330860: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80330864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330868: jal         0x8001ABF4
    // 0x8033086C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8033086C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80330870: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330874: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033087C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80330880: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330884: jal         0x800175F0
    // 0x80330888: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x80330888: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_8033088C:
    // 0x8033088C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330890: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330894: jal         0x80334F08
    // 0x80330898: nop

    func_80334F08_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x80330898: nop

    after_5:
    // 0x8033089C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803308A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803308A4: jal         0x8001B4AC
    // 0x803308A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x803308A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x803308AC: beq         $v0, $zero, L_803308DC
    if (ctx->r2 == 0) {
        // 0x803308B0: nop
    
            goto L_803308DC;
    }
    // 0x803308B0: nop

    // 0x803308B4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803308B8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803308BC: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x803308C0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803308C4: nop

    // 0x803308C8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x803308CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803308D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803308D4: jal         0x80335498
    // 0x803308D8: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x803308D8: nop

    after_7:
L_803308DC:
    // 0x803308DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803308E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803308E4: jal         0x80334854
    // 0x803308E8: nop

    func_80334854_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x803308E8: nop

    after_8:
    // 0x803308EC: b           L_803308F4
    // 0x803308F0: nop

        goto L_803308F4;
    // 0x803308F0: nop

L_803308F4:
    // 0x803308F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803308F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803308FC: jr          $ra
    // 0x80330900: nop

    return;
    // 0x80330900: nop

;}
RECOMP_FUNC void func_8033AF54_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AF54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033AF58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AF5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AF60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AF64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AF68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AF6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AF70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AF74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AF78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AF7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AF80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AF84: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033AF88: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AF8C: nop

    // 0x8033AF90: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033AF94: nop

    // 0x8033AF98: bne         $t1, $zero, L_8033B060
    if (ctx->r9 != 0) {
        // 0x8033AF9C: nop
    
            goto L_8033B060;
    }
    // 0x8033AF9C: nop

    // 0x8033AFA0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AFA4: nop

    // 0x8033AFA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033AFAC: nop

    // 0x8033AFB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033AFB4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033AFB8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AFBC: nop

    // 0x8033AFC0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033AFC4: nop

    // 0x8033AFC8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033AFCC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033AFD0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AFD4: nop

    // 0x8033AFD8: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x8033AFDC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AFE0: nop

    // 0x8033AFE4: lwc1        $f6, 0x2C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8033AFE8: nop

    // 0x8033AFEC: swc1        $f6, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f6.u32l;
    // 0x8033AFF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033AFF4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AFF8: nop

    // 0x8033AFFC: swc1        $f8, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f8.u32l;
    // 0x8033B000: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B004: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8033B008: addiu       $t0, $t0, -0x5720
    ctx->r8 = ADD32(ctx->r8, -0X5720);
    // 0x8033B00C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B010: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033B014: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B018: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033B01C: jal         0x8001C0EC
    // 0x8033B020: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033B020: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033B024: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B02C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B030: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B038: jal         0x8001ABF4
    // 0x8033B03C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033B03C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033B040: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B044: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B048: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B04C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B050: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8033B054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033B058: jal         0x8001ABF4
    // 0x8033B05C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033B05C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033B060:
    // 0x8033B060: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033B064: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033B068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B06C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B070: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033B074: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8033B078: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033B07C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033B080: jal         0x800295C0
    // 0x8033B084: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x8033B084: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x8033B088: beq         $v0, $zero, L_8033B0A0
    if (ctx->r2 == 0) {
        // 0x8033B08C: nop
    
            goto L_8033B0A0;
    }
    // 0x8033B08C: nop

    // 0x8033B090: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033B094: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B098: b           L_8033B0B0
    // 0x8033B09C: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
        goto L_8033B0B0;
    // 0x8033B09C: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
L_8033B0A0:
    // 0x8033B0A0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033B0A4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B0A8: nop

    // 0x8033B0AC: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
L_8033B0B0:
    // 0x8033B0B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B0B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B0B8: jal         0x8002A46C
    // 0x8033B0BC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x8033B0BC: nop

    after_4:
    // 0x8033B0C0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B0C4: nop

    // 0x8033B0C8: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x8033B0CC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B0D0: nop

    // 0x8033B0D4: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8033B0D8: nop

    // 0x8033B0DC: swc1        $f6, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f6.u32l;
    // 0x8033B0E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B0E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B0E8: jal         0x8001B4AC
    // 0x8033B0EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x8033B0EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8033B0F0: beq         $v0, $zero, L_8033B254
    if (ctx->r2 == 0) {
        // 0x8033B0F4: nop
    
            goto L_8033B254;
    }
    // 0x8033B0F4: nop

    // 0x8033B0F8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B0FC: nop

    // 0x8033B100: lh          $t5, 0xC0($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC0);
    // 0x8033B104: nop

    // 0x8033B108: bne         $t5, $zero, L_8033B200
    if (ctx->r13 != 0) {
        // 0x8033B10C: nop
    
            goto L_8033B200;
    }
    // 0x8033B10C: nop

    // 0x8033B110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B114: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B118: jal         0x8002A1FC
    // 0x8033B11C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_6;
    // 0x8033B11C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_6:
    // 0x8033B120: beq         $v0, $zero, L_8033B14C
    if (ctx->r2 == 0) {
        // 0x8033B124: nop
    
            goto L_8033B14C;
    }
    // 0x8033B124: nop

    // 0x8033B128: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B12C: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x8033B130: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8033B134: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B138: nop

    // 0x8033B13C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x8033B140: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B144: b           L_8033B1F8
    // 0x8033B148: sh          $zero, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = 0;
        goto L_8033B1F8;
    // 0x8033B148: sh          $zero, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = 0;
L_8033B14C:
    // 0x8033B14C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B150: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B154: jal         0x8002A1FC
    // 0x8033B158: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x8033B158: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_7:
    // 0x8033B15C: beq         $v0, $zero, L_8033B17C
    if (ctx->r2 == 0) {
        // 0x8033B160: nop
    
            goto L_8033B17C;
    }
    // 0x8033B160: nop

    // 0x8033B164: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B168: addiu       $t1, $zero, 0x1B
    ctx->r9 = ADD32(0, 0X1B);
    // 0x8033B16C: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033B170: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B174: b           L_8033B1F8
    // 0x8033B178: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_8033B1F8;
    // 0x8033B178: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033B17C:
    // 0x8033B17C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B184: jal         0x8002A1FC
    // 0x8033B188: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_8;
    // 0x8033B188: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_8:
    // 0x8033B18C: beq         $v0, $zero, L_8033B1C8
    if (ctx->r2 == 0) {
        // 0x8033B190: nop
    
            goto L_8033B1C8;
    }
    // 0x8033B190: nop

    // 0x8033B194: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B198: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x8033B19C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033B1A0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B1A4: nop

    // 0x8033B1A8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x8033B1AC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B1B0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8033B1B4: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x8033B1B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B1BC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033B1C0: b           L_8033B1F8
    // 0x8033B1C4: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
        goto L_8033B1F8;
    // 0x8033B1C4: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
L_8033B1C8:
    // 0x8033B1C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B1CC: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x8033B1D0: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033B1D4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B1D8: nop

    // 0x8033B1DC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x8033B1E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B1E4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8033B1E8: sh          $t2, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r10;
    // 0x8033B1EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B1F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033B1F4: sh          $t5, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r13;
L_8033B1F8:
    // 0x8033B1F8: b           L_8033B254
    // 0x8033B1FC: nop

        goto L_8033B254;
    // 0x8033B1FC: nop

L_8033B200:
    // 0x8033B200: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B204: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x8033B208: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033B20C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B210: nop

    // 0x8033B214: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x8033B218: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B21C: nop

    // 0x8033B220: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
    // 0x8033B224: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B228: nop

    // 0x8033B22C: sh          $zero, 0xC0($t3)
    MEM_H(0XC0, ctx->r11) = 0;
    // 0x8033B230: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033B234: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B238: nop

    // 0x8033B23C: swc1        $f8, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f8.u32l;
    // 0x8033B240: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033B244: nop

    // 0x8033B248: lwc1        $f10, 0x2C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8033B24C: nop

    // 0x8033B250: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
L_8033B254:
    // 0x8033B254: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B25C: jal         0x8033EA14
    // 0x8033B260: nop

    func_8033EA14_unk_bin_14(rdram, ctx);
        goto after_9;
    // 0x8033B260: nop

    after_9:
    // 0x8033B264: b           L_8033B26C
    // 0x8033B268: nop

        goto L_8033B26C;
    // 0x8033B268: nop

L_8033B26C:
    // 0x8033B26C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B270: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033B274: jr          $ra
    // 0x8033B278: nop

    return;
    // 0x8033B278: nop

;}
RECOMP_FUNC void func_8033D324_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D324: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033D328: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D32C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D330: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D334: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D338: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D33C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D340: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D344: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D348: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D34C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D350: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D354: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033D358: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D35C: nop

    // 0x8033D360: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033D364: nop

    // 0x8033D368: bne         $t1, $zero, L_8033D3FC
    if (ctx->r9 != 0) {
        // 0x8033D36C: nop
    
            goto L_8033D3FC;
    }
    // 0x8033D36C: nop

    // 0x8033D370: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033D374: nop

    // 0x8033D378: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033D37C: nop

    // 0x8033D380: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033D384: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033D388: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033D38C: nop

    // 0x8033D390: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033D394: nop

    // 0x8033D398: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033D39C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D3A0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033D3A4: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033D3A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D3AC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033D3B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D3B4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8033D3B8: jal         0x8001C0EC
    // 0x8033D3BC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033D3BC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033D3C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D3C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D3C8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D3CC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D3D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D3D4: jal         0x8001ABF4
    // 0x8033D3D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033D3D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033D3DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D3E0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D3E4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D3E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D3EC: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033D3F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033D3F4: jal         0x8001ABF4
    // 0x8033D3F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033D3F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033D3FC:
    // 0x8033D3FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D400: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D404: jal         0x8033E904
    // 0x8033D408: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x8033D408: nop

    after_3:
    // 0x8033D40C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D410: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D414: jal         0x8001B4AC
    // 0x8033D418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033D418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033D41C: beq         $v0, $zero, L_8033D43C
    if (ctx->r2 == 0) {
        // 0x8033D420: nop
    
            goto L_8033D43C;
    }
    // 0x8033D420: nop

    // 0x8033D424: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033D428: addiu       $t8, $zero, 0x25
    ctx->r24 = ADD32(0, 0X25);
    // 0x8033D42C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033D430: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D434: nop

    // 0x8033D438: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033D43C:
    // 0x8033D43C: b           L_8033D444
    // 0x8033D440: nop

        goto L_8033D444;
    // 0x8033D440: nop

L_8033D444:
    // 0x8033D444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033D44C: jr          $ra
    // 0x8033D450: nop

    return;
    // 0x8033D450: nop

;}
RECOMP_FUNC void func_80338504_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338504: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033850C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338510: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338514: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338518: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033851C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338520: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338524: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338528: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033852C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338530: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338534: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338538: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033853C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80338540: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80338544: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80338548: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033854C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338550: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80338554: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338558: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033855C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80338560: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80338564: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338568: nop

    // 0x8033856C: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80338570: nop

    // 0x80338574: bne         $t6, $zero, L_8033863C
    if (ctx->r14 != 0) {
        // 0x80338578: nop
    
            goto L_8033863C;
    }
    // 0x80338578: nop

    // 0x8033857C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80338580: nop

    // 0x80338584: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80338588: nop

    // 0x8033858C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80338590: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80338594: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338598: nop

    // 0x8033859C: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x803385A0: nop

    // 0x803385A4: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x803385A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803385AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803385B0: nop

    // 0x803385B4: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x803385B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803385BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803385C0: jal         0x8002A46C
    // 0x803385C4: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x803385C4: nop

    after_0:
    // 0x803385C8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803385CC: nop

    // 0x803385D0: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x803385D4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803385D8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803385DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803385E0: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x803385E4: jal         0x80015538
    // 0x803385E8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803385E8: nop

    after_1:
    // 0x803385EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803385F0: nop

    // 0x803385F4: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x803385F8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803385FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80338600: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80338604: nop

    // 0x80338608: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x8033860C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338610: nop

    // 0x80338614: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x80338618: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8033861C: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x80338620: sh          $t9, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r25;
    // 0x80338624: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80338628: nop

    // 0x8033862C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80338630: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80338634: nop

    // 0x80338638: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
L_8033863C:
    // 0x8033863C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338640: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338644: jal         0x80029C40
    // 0x80338648: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80338648: nop

    after_2:
    // 0x8033864C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338650: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80338654: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80338658: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8033865C: nop

    // 0x80338660: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80338664: nop

    // 0x80338668: bc1f        L_803386A4
    if (!c1cs) {
        // 0x8033866C: nop
    
            goto L_803386A4;
    }
    // 0x8033866C: nop

    // 0x80338670: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80338674: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x80338678: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033867C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80338680: nop

    // 0x80338684: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80338688: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8033868C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80338690: sh          $t6, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r14;
    // 0x80338694: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338698: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033869C: jal         0x8002B114
    // 0x803386A0: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x803386A0: nop

    after_3:
L_803386A4:
    // 0x803386A4: b           L_803386AC
    // 0x803386A8: nop

        goto L_803386AC;
    // 0x803386A8: nop

L_803386AC:
    // 0x803386AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803386B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803386B4: jr          $ra
    // 0x803386B8: nop

    return;
    // 0x803386B8: nop

;}
RECOMP_FUNC void func_803373D8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803373D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803373DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803373E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803373E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803373E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803373EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803373F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803373F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803373F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803373FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337400: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337404: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337408: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033740C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80337410: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337414: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80337418: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033741C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80337420: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80337424: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337428: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033742C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337430: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80337434: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80337438: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8033743C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337440: nop

    // 0x80337444: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80337448: nop

    // 0x8033744C: bne         $t6, $zero, L_803374E4
    if (ctx->r14 != 0) {
        // 0x80337450: nop
    
            goto L_803374E4;
    }
    // 0x80337450: nop

    // 0x80337454: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337458: nop

    // 0x8033745C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80337460: nop

    // 0x80337464: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80337468: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033746C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337470: nop

    // 0x80337474: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80337478: nop

    // 0x8033747C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80337480: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337488: jal         0x8001BBDC
    // 0x8033748C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x8033748C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80337490: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80337494: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80337498: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033749C: nop

    // 0x803374A0: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x803374A4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803374A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803374AC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803374B0: nop

    // 0x803374B4: swc1        $f6, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f6.u32l;
    // 0x803374B8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803374BC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803374C0: lh          $t5, 0x1308($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X1308);
    // 0x803374C4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803374C8: nop

    // 0x803374CC: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x803374D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374D8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x803374DC: jal         0x80029EF8
    // 0x803374E0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x803374E0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_1:
L_803374E4:
    // 0x803374E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374EC: jal         0x8002A46C
    // 0x803374F0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_2;
    // 0x803374F0: nop

    after_2:
    // 0x803374F4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803374F8: nop

    // 0x803374FC: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80337500: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337504: nop

    // 0x80337508: lh          $t7, 0xA8($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XA8);
    // 0x8033750C: nop

    // 0x80337510: bne         $t7, $zero, L_8033753C
    if (ctx->r15 != 0) {
        // 0x80337514: nop
    
            goto L_8033753C;
    }
    // 0x80337514: nop

    // 0x80337518: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8033751C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80337520: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337524: nop

    // 0x80337528: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x8033752C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337530: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x80337534: b           L_80337554
    // 0x80337538: sh          $t0, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r8;
        goto L_80337554;
    // 0x80337538: sh          $t0, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r8;
L_8033753C:
    // 0x8033753C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337540: nop

    // 0x80337544: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80337548: nop

    // 0x8033754C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80337550: sh          $t5, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r13;
L_80337554:
    // 0x80337554: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337558: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033755C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80337560: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80337564: jal         0x8002A0D0
    // 0x80337568: lui         $a3, 0xC370
    ctx->r7 = S32(0XC370 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_3;
    // 0x80337568: lui         $a3, 0xC370
    ctx->r7 = S32(0XC370 << 16);
    after_3:
    // 0x8033756C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337570: nop

    // 0x80337574: lh          $t8, 0xBA($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XBA);
    // 0x80337578: nop

    // 0x8033757C: bne         $t8, $zero, L_80337594
    if (ctx->r24 != 0) {
        // 0x80337580: nop
    
            goto L_80337594;
    }
    // 0x80337580: nop

    // 0x80337584: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337588: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033758C: jal         0x80029C40
    // 0x80337590: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80337590: nop

    after_4:
L_80337594:
    // 0x80337594: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337598: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x8033759C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803375A0: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803375A4: nop

    // 0x803375A8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803375AC: nop

    // 0x803375B0: bc1f        L_803375D8
    if (!c1cs) {
        // 0x803375B4: nop
    
            goto L_803375D8;
    }
    // 0x803375B4: nop

    // 0x803375B8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803375BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803375C0: sh          $t7, 0xBA($t1)
    MEM_H(0XBA, ctx->r9) = ctx->r15;
    // 0x803375C4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803375C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803375CC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803375D0: b           L_8033761C
    // 0x803375D4: swc1        $f18, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f18.u32l;
        goto L_8033761C;
    // 0x803375D4: swc1        $f18, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f18.u32l;
L_803375D8:
    // 0x803375D8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803375DC: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x803375E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803375E4: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x803375E8: nop

    // 0x803375EC: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x803375F0: nop

    // 0x803375F4: bc1f        L_8033761C
    if (!c1cs) {
        // 0x803375F8: nop
    
            goto L_8033761C;
    }
    // 0x803375F8: nop

    // 0x803375FC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337600: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80337604: sh          $t4, 0xBA($t5)
    MEM_H(0XBA, ctx->r13) = ctx->r12;
    // 0x80337608: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x8033760C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80337610: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337614: nop

    // 0x80337618: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
L_8033761C:
    // 0x8033761C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337620: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x80337624: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80337628: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033762C: nop

    // 0x80337630: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80337634: nop

    // 0x80337638: bc1f        L_80337660
    if (!c1cs) {
        // 0x8033763C: nop
    
            goto L_80337660;
    }
    // 0x8033763C: nop

    // 0x80337640: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337644: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80337648: sh          $t8, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = ctx->r24;
    // 0x8033764C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80337650: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80337654: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337658: b           L_803376A4
    // 0x8033765C: swc1        $f18, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f18.u32l;
        goto L_803376A4;
    // 0x8033765C: swc1        $f18, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f18.u32l;
L_80337660:
    // 0x80337660: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337664: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x80337668: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033766C: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80337670: nop

    // 0x80337674: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80337678: nop

    // 0x8033767C: bc1f        L_803376A4
    if (!c1cs) {
        // 0x80337680: nop
    
            goto L_803376A4;
    }
    // 0x80337680: nop

    // 0x80337684: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337688: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033768C: sh          $t0, 0xBA($t2)
    MEM_H(0XBA, ctx->r10) = ctx->r8;
    // 0x80337690: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x80337694: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80337698: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033769C: nop

    // 0x803376A0: swc1        $f8, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f8.u32l;
L_803376A4:
    // 0x803376A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803376A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803376AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803376B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803376B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803376B8: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x803376BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803376C0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803376C4: jal         0x80029018
    // 0x803376C8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x803376C8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x803376CC: beq         $v0, $zero, L_803376F0
    if (ctx->r2 == 0) {
        // 0x803376D0: nop
    
            goto L_803376F0;
    }
    // 0x803376D0: nop

    // 0x803376D4: jal         0x800297DC
    // 0x803376D8: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x803376D8: nop

    after_6:
    // 0x803376DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803376E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803376E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803376E8: jal         0x80029824
    // 0x803376EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x803376EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_803376F0:
    // 0x803376F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803376F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803376F8: jal         0x8001B4AC
    // 0x803376FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x803376FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80337700: beq         $v0, $zero, L_80337730
    if (ctx->r2 == 0) {
        // 0x80337704: nop
    
            goto L_80337730;
    }
    // 0x80337704: nop

    // 0x80337708: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033770C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80337710: sh          $t5, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r13;
    // 0x80337714: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337718: nop

    // 0x8033771C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80337720: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80337724: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80337728: nop

    // 0x8033772C: swc1        $f18, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f18.u32l;
L_80337730:
    // 0x80337730: b           L_80337738
    // 0x80337734: nop

        goto L_80337738;
    // 0x80337734: nop

L_80337738:
    // 0x80337738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033773C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80337740: jr          $ra
    // 0x80337744: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80337744: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8033D1F4_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D1F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033D1F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D1FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D200: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D204: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D208: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D20C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D210: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D214: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D218: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D21C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D220: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D224: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033D228: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D22C: nop

    // 0x8033D230: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033D234: nop

    // 0x8033D238: bne         $t1, $zero, L_8033D2CC
    if (ctx->r9 != 0) {
        // 0x8033D23C: nop
    
            goto L_8033D2CC;
    }
    // 0x8033D23C: nop

    // 0x8033D240: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033D244: nop

    // 0x8033D248: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033D24C: nop

    // 0x8033D250: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033D254: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033D258: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033D25C: nop

    // 0x8033D260: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033D264: nop

    // 0x8033D268: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033D26C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D270: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033D274: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033D278: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D27C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033D280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D284: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8033D288: jal         0x8001C0EC
    // 0x8033D28C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033D28C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033D290: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D294: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D298: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D29C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D2A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D2A4: jal         0x8001ABF4
    // 0x8033D2A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033D2A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033D2AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D2B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D2B4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D2B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D2BC: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033D2C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033D2C4: jal         0x8001ABF4
    // 0x8033D2C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033D2C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033D2CC:
    // 0x8033D2CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D2D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D2D4: jal         0x8033E904
    // 0x8033D2D8: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x8033D2D8: nop

    after_3:
    // 0x8033D2DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D2E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D2E4: jal         0x8001B4AC
    // 0x8033D2E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033D2E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033D2EC: beq         $v0, $zero, L_8033D30C
    if (ctx->r2 == 0) {
        // 0x8033D2F0: nop
    
            goto L_8033D30C;
    }
    // 0x8033D2F0: nop

    // 0x8033D2F4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033D2F8: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x8033D2FC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033D300: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D304: nop

    // 0x8033D308: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033D30C:
    // 0x8033D30C: b           L_8033D314
    // 0x8033D310: nop

        goto L_8033D314;
    // 0x8033D310: nop

L_8033D314:
    // 0x8033D314: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D318: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033D31C: jr          $ra
    // 0x8033D320: nop

    return;
    // 0x8033D320: nop

;}
RECOMP_FUNC void func_8033B410_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B410: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B418: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B41C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B420: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B424: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B428: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B42C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B430: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B434: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B438: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B43C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B440: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B444: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B448: nop

    // 0x8033B44C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B450: nop

    // 0x8033B454: bne         $t1, $zero, L_8033B4E8
    if (ctx->r9 != 0) {
        // 0x8033B458: nop
    
            goto L_8033B4E8;
    }
    // 0x8033B458: nop

    // 0x8033B45C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B460: nop

    // 0x8033B464: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B468: nop

    // 0x8033B46C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B470: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B474: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B478: nop

    // 0x8033B47C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B480: nop

    // 0x8033B484: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B48C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033B490: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033B494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B498: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033B49C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B4A0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8033B4A4: jal         0x8001C0EC
    // 0x8033B4A8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033B4A8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033B4AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B4B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B4B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B4B8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B4BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B4C0: jal         0x8001ABF4
    // 0x8033B4C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033B4C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033B4C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B4CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B4D0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B4D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B4D8: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033B4DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033B4E0: jal         0x8001ABF4
    // 0x8033B4E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033B4E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033B4E8:
    // 0x8033B4E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B4EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B4F0: jal         0x8002A8B4
    // 0x8033B4F4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033B4F4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033B4F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B4FC: nop

    // 0x8033B500: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033B504: nop

    // 0x8033B508: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033B50C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B510: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B514: jal         0x80029C40
    // 0x8033B518: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x8033B518: nop

    after_4:
    // 0x8033B51C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B520: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B524: jal         0x8033E904
    // 0x8033B528: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x8033B528: nop

    after_5:
    // 0x8033B52C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B534: jal         0x8001B4AC
    // 0x8033B538: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x8033B538: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033B53C: beq         $v0, $zero, L_8033B55C
    if (ctx->r2 == 0) {
        // 0x8033B540: nop
    
            goto L_8033B55C;
    }
    // 0x8033B540: nop

    // 0x8033B544: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B548: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x8033B54C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033B550: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B554: nop

    // 0x8033B558: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033B55C:
    // 0x8033B55C: b           L_8033B564
    // 0x8033B560: nop

        goto L_8033B564;
    // 0x8033B560: nop

L_8033B564:
    // 0x8033B564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B56C: jr          $ra
    // 0x8033B570: nop

    return;
    // 0x8033B570: nop

;}
RECOMP_FUNC void func_80332094_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332094: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033209C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803320A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803320A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803320A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803320AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803320B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803320B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803320B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803320BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803320C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803320C4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803320C8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803320CC: nop

    // 0x803320D0: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803320D4: nop

    // 0x803320D8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x803320DC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803320E0: nop

    // 0x803320E4: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803320E8: nop

    // 0x803320EC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x803320F0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803320F4: nop

    // 0x803320F8: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x803320FC: nop

    // 0x80332100: bne         $t5, $zero, L_803322C0
    if (ctx->r13 != 0) {
        // 0x80332104: nop
    
            goto L_803322C0;
    }
    // 0x80332104: nop

    // 0x80332108: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033210C: nop

    // 0x80332110: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80332114: nop

    // 0x80332118: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8033211C: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80332120: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332124: nop

    // 0x80332128: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8033212C: nop

    // 0x80332130: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80332134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332138: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8033213C: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80332140: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332144: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80332148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033214C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80332150: jal         0x8001C0EC
    // 0x80332154: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332154: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x80332158: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033215C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332160: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332164: lwc1        $f4, 0x18($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X18);
    // 0x80332168: nop

    // 0x8033216C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80332170: nop

    // 0x80332174: bc1f        L_803321D4
    if (!c1cs) {
        // 0x80332178: nop
    
            goto L_803321D4;
    }
    // 0x80332178: nop

    // 0x8033217C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332180: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332184: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332188: lwc1        $f10, 0x18($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X18);
    // 0x8033218C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332190: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80332194: lwc1        $f5, -0x768($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X768);
    // 0x80332198: lwc1        $f4, -0x764($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X764);
    // 0x8033219C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x803321A0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x803321A4: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x803321A8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x803321AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803321B0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x803321B4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803321B8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x803321BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803321C0: nop

    // 0x803321C4: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x803321C8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803321CC: b           L_8033220C
    // 0x803321D0: swc1        $f4, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f4.u32l;
        goto L_8033220C;
    // 0x803321D0: swc1        $f4, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f4.u32l;
L_803321D4:
    // 0x803321D4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803321D8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803321DC: lwc1        $f6, 0x18($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X18);
    // 0x803321E0: lwc1        $f11, -0x760($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X760);
    // 0x803321E4: lwc1        $f10, -0x75C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X75C);
    // 0x803321E8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803321EC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x803321F0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x803321F4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x803321F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803321FC: nop

    // 0x80332200: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x80332204: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80332208: swc1        $f6, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f6.u32l;
L_8033220C:
    // 0x8033220C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332210: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332214: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332218: lwc1        $f8, 0x20($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X20);
    // 0x8033221C: nop

    // 0x80332220: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80332224: nop

    // 0x80332228: bc1f        L_80332288
    if (!c1cs) {
        // 0x8033222C: nop
    
            goto L_80332288;
    }
    // 0x8033222C: nop

    // 0x80332230: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332234: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332238: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033223C: lwc1        $f18, 0x20($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X20);
    // 0x80332240: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332244: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80332248: lwc1        $f9, -0x758($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X758);
    // 0x8033224C: lwc1        $f8, -0x754($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X754);
    // 0x80332250: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80332254: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80332258: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x8033225C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80332260: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332264: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80332268: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8033226C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80332270: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332274: nop

    // 0x80332278: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x8033227C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80332280: b           L_803322C0
    // 0x80332284: swc1        $f8, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f8.u32l;
        goto L_803322C0;
    // 0x80332284: swc1        $f8, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f8.u32l;
L_80332288:
    // 0x80332288: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033228C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332290: lwc1        $f10, 0x20($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X20);
    // 0x80332294: lwc1        $f19, -0x750($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X750);
    // 0x80332298: lwc1        $f18, -0x74C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X74C);
    // 0x8033229C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803322A0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x803322A4: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x803322A8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x803322AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803322B0: nop

    // 0x803322B4: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x803322B8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803322BC: swc1        $f10, 0xD8($t8)
    MEM_W(0XD8, ctx->r24) = ctx->f10.u32l;
L_803322C0:
    // 0x803322C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803322C4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803322C8: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x803322CC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803322D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803322D4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803322D8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803322DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322E0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803322E4: lwc1        $f12, 0x4168($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x803322E8: lwc1        $f14, 0xD4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0XD4);
    // 0x803322EC: jal         0x80015538
    // 0x803322F0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803322F0: nop

    after_1:
    // 0x803322F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803322F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322FC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332300: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332304: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332308: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033230C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332310: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332314: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x80332318: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033231C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332320: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332324: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332328: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033232C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332330: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332334: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332338: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033233C: lwc1        $f12, 0x4170($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x80332340: lwc1        $f14, 0xD8($t5)
    ctx->f14.u32l = MEM_W(ctx->r13, 0XD8);
    // 0x80332344: jal         0x80015538
    // 0x80332348: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80332348: nop

    after_2:
    // 0x8033234C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332350: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332354: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332358: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033235C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332360: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332364: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332368: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033236C: swc1        $f0, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f0.u32l;
    // 0x80332370: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332374: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332378: jal         0x8001B4AC
    // 0x8033237C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8033237C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80332380: beq         $v0, $zero, L_803323C0
    if (ctx->r2 == 0) {
        // 0x80332384: nop
    
            goto L_803323C0;
    }
    // 0x80332384: nop

    // 0x80332388: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033238C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332390: jal         0x80334F08
    // 0x80332394: nop

    func_80334F08_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x80332394: nop

    after_4:
    // 0x80332398: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033239C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x803323A0: sh          $t6, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r14;
    // 0x803323A4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803323A8: nop

    // 0x803323AC: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x803323B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323B8: jal         0x80335498
    // 0x803323BC: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x803323BC: nop

    after_5:
L_803323C0:
    // 0x803323C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323C8: jal         0x80334B78
    // 0x803323CC: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x803323CC: nop

    after_6:
    // 0x803323D0: b           L_803323D8
    // 0x803323D4: nop

        goto L_803323D8;
    // 0x803323D4: nop

L_803323D8:
    // 0x803323D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803323DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803323E0: jr          $ra
    // 0x803323E4: nop

    return;
    // 0x803323E4: nop

;}
RECOMP_FUNC void func_80339ADC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339ADC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80339AE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339AE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339AE8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339AEC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339AF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339AF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339AF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339AFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339B00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339B04: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339B08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339B0C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80339B10: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80339B14: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80339B18: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80339B1C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80339B20: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80339B24: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80339B28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339B2C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80339B30: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80339B34: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80339B38: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x80339B3C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80339B40: nop

    // 0x80339B44: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80339B48: nop

    // 0x80339B4C: bne         $t6, $zero, L_80339BE0
    if (ctx->r14 != 0) {
        // 0x80339B50: nop
    
            goto L_80339BE0;
    }
    // 0x80339B50: nop

    // 0x80339B54: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80339B58: nop

    // 0x80339B5C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80339B60: nop

    // 0x80339B64: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80339B68: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80339B6C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80339B70: nop

    // 0x80339B74: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80339B78: nop

    // 0x80339B7C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80339B80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339B84: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80339B88: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x80339B8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339B90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80339B94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339B98: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80339B9C: jal         0x8001C0EC
    // 0x80339BA0: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339BA0: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80339BA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339BA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339BAC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339BB0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80339BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339BB8: jal         0x8001ABF4
    // 0x80339BBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80339BBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80339BC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339BC4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339BC8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80339BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339BD0: addiu       $a3, $a3, 0xE0
    ctx->r7 = ADD32(ctx->r7, 0XE0);
    // 0x80339BD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80339BD8: jal         0x8001ABF4
    // 0x80339BDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80339BDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80339BE0:
    // 0x80339BE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339BE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339BE8: jal         0x8001B62C
    // 0x80339BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80339BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80339BF0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80339BF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339BF8: nop

    // 0x80339BFC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80339C00: nop

    // 0x80339C04: bc1f        L_80339C4C
    if (!c1cs) {
        // 0x80339C08: nop
    
            goto L_80339C4C;
    }
    // 0x80339C08: nop

    // 0x80339C0C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80339C10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339C14: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80339C18: nop

    // 0x80339C1C: bne         $t4, $at, L_80339C4C
    if (ctx->r12 != ctx->r1) {
        // 0x80339C20: nop
    
            goto L_80339C4C;
    }
    // 0x80339C20: nop

    // 0x80339C24: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80339C28: nop

    // 0x80339C2C: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80339C30: nop

    // 0x80339C34: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80339C38: sb          $t8, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r24;
    // 0x80339C3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339C40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339C44: jal         0x8001BBDC
    // 0x80339C48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80339C48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_80339C4C:
    // 0x80339C4C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80339C50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339C54: lh          $t7, 0xAA($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XAA);
    // 0x80339C58: nop

    // 0x80339C5C: bne         $t7, $at, L_80339C80
    if (ctx->r15 != ctx->r1) {
        // 0x80339C60: nop
    
            goto L_80339C80;
    }
    // 0x80339C60: nop

    // 0x80339C64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339C68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339C6C: jal         0x8001BBDC
    // 0x80339C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x80339C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80339C74: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80339C78: nop

    // 0x80339C7C: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
L_80339C80:
    // 0x80339C80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339C84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339C88: jal         0x8001B4AC
    // 0x80339C8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80339C8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80339C90: beq         $v0, $zero, L_80339CB0
    if (ctx->r2 == 0) {
        // 0x80339C94: nop
    
            goto L_80339CB0;
    }
    // 0x80339C94: nop

    // 0x80339C98: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80339C9C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80339CA0: sh          $t0, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r8;
    // 0x80339CA4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80339CA8: nop

    // 0x80339CAC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80339CB0:
    // 0x80339CB0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80339CB4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80339CB8: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80339CBC: nop

    // 0x80339CC0: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
    // 0x80339CC4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80339CC8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80339CCC: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80339CD0: nop

    // 0x80339CD4: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
    // 0x80339CD8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80339CDC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80339CE0: lwc1        $f10, 0x24($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X24);
    // 0x80339CE4: nop

    // 0x80339CE8: swc1        $f10, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f10.u32l;
    // 0x80339CEC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80339CF0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80339CF4: lwc1        $f16, 0x2C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80339CF8: nop

    // 0x80339CFC: swc1        $f16, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f16.u32l;
    // 0x80339D00: b           L_80339D08
    // 0x80339D04: nop

        goto L_80339D08;
    // 0x80339D04: nop

L_80339D08:
    // 0x80339D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80339D10: jr          $ra
    // 0x80339D14: nop

    return;
    // 0x80339D14: nop

;}
RECOMP_FUNC void func_80337210_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337210: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80337214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337218: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033721C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337220: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337224: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337228: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033722C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337230: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337234: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337238: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033723C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337240: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80337244: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80337248: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033724C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80337250: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80337254: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80337258: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033725C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80337260: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337264: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80337268: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033726C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80337270: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80337274: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x80337278: nop

    // 0x8033727C: bne         $t5, $zero, L_803372CC
    if (ctx->r13 != 0) {
        // 0x80337280: nop
    
            goto L_803372CC;
    }
    // 0x80337280: nop

    // 0x80337284: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80337288: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8033728C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80337290: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80337294: nop

    // 0x80337298: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x8033729C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x803372A0: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x803372A4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803372A8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x803372AC: nop

    // 0x803372B0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803372B4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803372B8: nop

    // 0x803372BC: sh          $zero, 0x108($t2)
    MEM_H(0X108, ctx->r10) = 0;
    // 0x803372C0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x803372C4: b           L_80337368
    // 0x803372C8: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
        goto L_80337368;
    // 0x803372C8: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
L_803372CC:
    // 0x803372CC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803372D0: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x803372D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803372D8: bne         $t4, $at, L_80337350
    if (ctx->r12 != ctx->r1) {
        // 0x803372DC: nop
    
            goto L_80337350;
    }
    // 0x803372DC: nop

    // 0x803372E0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803372E4: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x803372E8: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x803372EC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803372F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803372F4: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x803372F8: nop

    // 0x803372FC: beq         $t8, $at, L_80337348
    if (ctx->r24 == ctx->r1) {
        // 0x80337300: nop
    
            goto L_80337348;
    }
    // 0x80337300: nop

    // 0x80337304: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80337308: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8033730C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80337310: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80337314: nop

    // 0x80337318: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x8033731C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80337320: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80337324: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80337328: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8033732C: nop

    // 0x80337330: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80337334: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80337338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033733C: lh          $a0, 0xA6($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XA6);
    // 0x80337340: jal         0x8001BBDC
    // 0x80337344: nop

    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80337344: nop

    after_0:
L_80337348:
    // 0x80337348: b           L_80337368
    // 0x8033734C: nop

        goto L_80337368;
    // 0x8033734C: nop

L_80337350:
    // 0x80337350: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80337354: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80337358: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x8033735C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80337360: nop

    // 0x80337364: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80337368:
    // 0x80337368: b           L_80337370
    // 0x8033736C: nop

        goto L_80337370;
    // 0x8033736C: nop

L_80337370:
    // 0x80337370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80337374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80337378: jr          $ra
    // 0x8033737C: nop

    return;
    // 0x8033737C: nop

;}
RECOMP_FUNC void func_803381B8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803381B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803381BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803381C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803381C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803381C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803381CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803381D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803381D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803381D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803381DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803381E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803381E4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803381E8: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x803381EC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803381F0: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803381F4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803381F8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803381FC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338200: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80338204: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338208: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033820C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80338210: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80338214: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80338218: nop

    // 0x8033821C: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80338220: nop

    // 0x80338224: bne         $t6, $zero, L_803382A4
    if (ctx->r14 != 0) {
        // 0x80338228: nop
    
            goto L_803382A4;
    }
    // 0x80338228: nop

    // 0x8033822C: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80338230: nop

    // 0x80338234: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80338238: nop

    // 0x8033823C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80338240: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80338244: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80338248: nop

    // 0x8033824C: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80338250: nop

    // 0x80338254: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80338258: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033825C: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80338260: nop

    // 0x80338264: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x80338268: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033826C: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x80338270: nop

    // 0x80338274: swc1        $f6, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f6.u32l;
    // 0x80338278: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x8033827C: nop

    // 0x80338280: lwc1        $f12, 0x2C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80338284: nop

    // 0x80338288: swc1        $f12, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f12.u32l;
    // 0x8033828C: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80338290: nop

    // 0x80338294: swc1        $f12, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f12.u32l;
    // 0x80338298: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x8033829C: addiu       $t6, $zero, 0x1F
    ctx->r14 = ADD32(0, 0X1F);
    // 0x803382A0: sh          $t6, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = ctx->r14;
L_803382A4:
    // 0x803382A4: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x803382A8: nop

    // 0x803382AC: lh          $t7, 0xAE($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XAE);
    // 0x803382B0: nop

    // 0x803382B4: bne         $t7, $zero, L_803382D4
    if (ctx->r15 != 0) {
        // 0x803382B8: nop
    
            goto L_803382D4;
    }
    // 0x803382B8: nop

    // 0x803382BC: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x803382C0: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x803382C4: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
    // 0x803382C8: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x803382CC: b           L_803382EC
    // 0x803382D0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_803382EC;
    // 0x803382D0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803382D4:
    // 0x803382D4: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x803382D8: nop

    // 0x803382DC: lh          $t4, 0xAE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAE);
    // 0x803382E0: nop

    // 0x803382E4: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x803382E8: sh          $t5, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r13;
L_803382EC:
    // 0x803382EC: b           L_803382F4
    // 0x803382F0: nop

        goto L_803382F4;
    // 0x803382F0: nop

L_803382F4:
    // 0x803382F4: jr          $ra
    // 0x803382F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803382F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_803311DC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803311DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803311E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803311E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803311E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803311EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803311F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803311F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803311F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803311FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331200: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331204: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331208: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033120C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331210: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331214: nop

    // 0x80331218: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033121C: nop

    // 0x80331220: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80331224: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331228: nop

    // 0x8033122C: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80331230: nop

    // 0x80331234: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80331238: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033123C: nop

    // 0x80331240: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80331244: nop

    // 0x80331248: bne         $t5, $zero, L_803312A0
    if (ctx->r13 != 0) {
        // 0x8033124C: nop
    
            goto L_803312A0;
    }
    // 0x8033124C: nop

    // 0x80331250: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331254: nop

    // 0x80331258: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033125C: nop

    // 0x80331260: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331264: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80331268: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033126C: nop

    // 0x80331270: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80331274: nop

    // 0x80331278: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x8033127C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331280: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331284: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80331288: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033128C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331294: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80331298: jal         0x8001C0EC
    // 0x8033129C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033129C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
L_803312A0:
    // 0x803312A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312A8: jal         0x80334F08
    // 0x803312AC: nop

    func_80334F08_unk_bin_14(rdram, ctx);
        goto after_1;
    // 0x803312AC: nop

    after_1:
    // 0x803312B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312B8: jal         0x803350CC
    // 0x803312BC: nop

    func_803350CC_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x803312BC: nop

    after_2:
    // 0x803312C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312C8: jal         0x80334798
    // 0x803312CC: nop

    func_80334798_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x803312CC: nop

    after_3:
    // 0x803312D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312D8: jal         0x8001B4AC
    // 0x803312DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803312DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803312E0: beq         $v0, $zero, L_80331380
    if (ctx->r2 == 0) {
        // 0x803312E4: nop
    
            goto L_80331380;
    }
    // 0x803312E4: nop

    // 0x803312E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803312F4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x803312F8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803312FC: jal         0x800175F0
    // 0x80331300: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x80331300: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80331304: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331308: nop

    // 0x8033130C: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x80331310: nop

    // 0x80331314: bne         $t3, $zero, L_80331334
    if (ctx->r11 != 0) {
        // 0x80331318: nop
    
            goto L_80331334;
    }
    // 0x80331318: nop

    // 0x8033131C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331320: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x80331324: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80331328: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033132C: b           L_80331370
    // 0x80331330: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_80331370;
    // 0x80331330: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80331334:
    // 0x80331334: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331338: nop

    // 0x8033133C: lh          $t6, 0xAA($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XAA);
    // 0x80331340: nop

    // 0x80331344: addiu       $t0, $t6, -0x1
    ctx->r8 = ADD32(ctx->r14, -0X1);
    // 0x80331348: sh          $t0, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r8;
    // 0x8033134C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331350: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80331354: sh          $t9, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r25;
    // 0x80331358: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033135C: nop

    // 0x80331360: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80331364: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331368: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033136C: sh          $t3, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r11;
L_80331370:
    // 0x80331370: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331374: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331378: jal         0x80335498
    // 0x8033137C: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x8033137C: nop

    after_6:
L_80331380:
    // 0x80331380: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331384: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331388: jal         0x80334B78
    // 0x8033138C: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x8033138C: nop

    after_7:
    // 0x80331390: b           L_80331398
    // 0x80331394: nop

        goto L_80331398;
    // 0x80331394: nop

L_80331398:
    // 0x80331398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033139C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803313A0: jr          $ra
    // 0x803313A4: nop

    return;
    // 0x803313A4: nop

;}
RECOMP_FUNC void func_80333B9C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333B9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333BA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333BA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333BA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333BAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333BB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333BB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333BB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333BBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333BC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333BC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333BC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333BCC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333BD0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333BD4: nop

    // 0x80333BD8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80333BDC: nop

    // 0x80333BE0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80333BE4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333BE8: nop

    // 0x80333BEC: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80333BF0: nop

    // 0x80333BF4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80333BF8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333BFC: nop

    // 0x80333C00: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80333C04: nop

    // 0x80333C08: bne         $t5, $zero, L_80333CDC
    if (ctx->r13 != 0) {
        // 0x80333C0C: nop
    
            goto L_80333CDC;
    }
    // 0x80333C0C: nop

    // 0x80333C10: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C14: nop

    // 0x80333C18: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80333C1C: nop

    // 0x80333C20: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80333C24: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80333C28: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C2C: nop

    // 0x80333C30: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80333C34: nop

    // 0x80333C38: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80333C3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C40: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80333C44: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80333C48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C4C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80333C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333C54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333C58: jal         0x8001C0EC
    // 0x80333C5C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333C5C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x80333C60: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80333C64: addiu       $t2, $t2, -0x5A70
    ctx->r10 = ADD32(ctx->r10, -0X5A70);
    // 0x80333C68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80333C6C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80333C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333C78: jal         0x8001C0EC
    // 0x80333C7C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80333C7C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_1:
    // 0x80333C80: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80333C84: addiu       $t3, $t3, -0x5A10
    ctx->r11 = ADD32(ctx->r11, -0X5A10);
    // 0x80333C88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333C8C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80333C90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333C94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333C98: jal         0x8001C0EC
    // 0x80333C9C: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80333C9C: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_2:
    // 0x80333CA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333CA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333CA8: jal         0x8001BBDC
    // 0x80333CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80333CAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80333CB0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80333CB4: jal         0x8001BBDC
    // 0x80333CB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80333CB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80333CBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333CC0: jal         0x8001BBDC
    // 0x80333CC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x80333CC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80333CC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333CCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333CD0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80333CD4: jal         0x80029EF8
    // 0x80333CD8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_6;
    // 0x80333CD8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_6:
L_80333CDC:
    // 0x80333CDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333CE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333CE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80333CE8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80333CEC: jal         0x8002A0D0
    // 0x80333CF0: lui         $a3, 0xC32F
    ctx->r7 = S32(0XC32F << 16);
    func_8002A0D0(rdram, ctx);
        goto after_7;
    // 0x80333CF0: lui         $a3, 0xC32F
    ctx->r7 = S32(0XC32F << 16);
    after_7:
    // 0x80333CF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333CF8: bne         $v0, $at, L_80333D38
    if (ctx->r2 != ctx->r1) {
        // 0x80333CFC: nop
    
            goto L_80333D38;
    }
    // 0x80333CFC: nop

    // 0x80333D00: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D04: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80333D08: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80333D0C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D10: nop

    // 0x80333D14: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80333D18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333D1C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D20: nop

    // 0x80333D24: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x80333D28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D30: jal         0x80335498
    // 0x80333D34: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x80333D34: nop

    after_8:
L_80333D38:
    // 0x80333D38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D40: jal         0x80334854
    // 0x80333D44: nop

    func_80334854_unk_bin_14(rdram, ctx);
        goto after_9;
    // 0x80333D44: nop

    after_9:
    // 0x80333D48: b           L_80333D50
    // 0x80333D4C: nop

        goto L_80333D50;
    // 0x80333D4C: nop

L_80333D50:
    // 0x80333D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333D54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80333D58: jr          $ra
    // 0x80333D5C: nop

    return;
    // 0x80333D5C: nop

;}
RECOMP_FUNC void func_8033AA00_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AA00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033AA04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AA08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AA0C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AA10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AA14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AA18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AA1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AA20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AA24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AA28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AA2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AA30: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033AA34: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA38: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033AA3C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033AA40: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033AA44: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033AA48: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033AA4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033AA50: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033AA54: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033AA58: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033AA5C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x8033AA60: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA64: nop

    // 0x8033AA68: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033AA6C: nop

    // 0x8033AA70: bne         $t6, $zero, L_8033AB04
    if (ctx->r14 != 0) {
        // 0x8033AA74: nop
    
            goto L_8033AB04;
    }
    // 0x8033AA74: nop

    // 0x8033AA78: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA7C: nop

    // 0x8033AA80: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033AA84: nop

    // 0x8033AA88: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033AA8C: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033AA90: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033AA94: nop

    // 0x8033AA98: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033AA9C: nop

    // 0x8033AAA0: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033AAA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AAA8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033AAAC: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033AAB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AAB4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033AAB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AABC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x8033AAC0: jal         0x8001C0EC
    // 0x8033AAC4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033AAC4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033AAC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AACC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AAD0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033AAD4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033AAD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AADC: jal         0x8001ABF4
    // 0x8033AAE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033AAE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033AAE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AAE8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033AAEC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033AAF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AAF4: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8033AAF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033AAFC: jal         0x8001ABF4
    // 0x8033AB00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033AB00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033AB04:
    // 0x8033AB04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AB08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AB0C: jal         0x8002A8B4
    // 0x8033AB10: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033AB10: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x8033AB14: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033AB18: nop

    // 0x8033AB1C: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033AB20: nop

    // 0x8033AB24: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x8033AB28: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8033AB2C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033AB30: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8033AB34: nop

    // 0x8033AB38: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
    // 0x8033AB3C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8033AB40: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033AB44: lwc1        $f8, 0x24($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X24);
    // 0x8033AB48: nop

    // 0x8033AB4C: swc1        $f8, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f8.u32l;
    // 0x8033AB50: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8033AB54: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033AB58: lwc1        $f10, 0x2C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8033AB5C: nop

    // 0x8033AB60: swc1        $f10, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f10.u32l;
    // 0x8033AB64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AB68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AB6C: jal         0x8001B4AC
    // 0x8033AB70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033AB70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033AB74: beq         $v0, $zero, L_8033AB94
    if (ctx->r2 == 0) {
        // 0x8033AB78: nop
    
            goto L_8033AB94;
    }
    // 0x8033AB78: nop

    // 0x8033AB7C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033AB80: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8033AB84: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
    // 0x8033AB88: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033AB8C: nop

    // 0x8033AB90: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_8033AB94:
    // 0x8033AB94: b           L_8033AB9C
    // 0x8033AB98: nop

        goto L_8033AB9C;
    // 0x8033AB98: nop

L_8033AB9C:
    // 0x8033AB9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033ABA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8033ABA4: jr          $ra
    // 0x8033ABA8: nop

    return;
    // 0x8033ABA8: nop

;}
RECOMP_FUNC void func_8033BDC8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BDC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033BDCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BDD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BDD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BDD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BDDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BDE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BDE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BDE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BDEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BDF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BDF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BDF8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033BDFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BE00: nop

    // 0x8033BE04: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033BE08: nop

    // 0x8033BE0C: bne         $t1, $zero, L_8033BED8
    if (ctx->r9 != 0) {
        // 0x8033BE10: nop
    
            goto L_8033BED8;
    }
    // 0x8033BE10: nop

    // 0x8033BE14: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BE18: nop

    // 0x8033BE1C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033BE20: nop

    // 0x8033BE24: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033BE28: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033BE2C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BE30: nop

    // 0x8033BE34: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033BE38: nop

    // 0x8033BE3C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033BE40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BE44: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033BE48: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033BE4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BE50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033BE54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BE58: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8033BE5C: jal         0x8001C0EC
    // 0x8033BE60: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033BE60: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033BE64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BE68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BE6C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033BE70: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033BE74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BE78: jal         0x8001ABF4
    // 0x8033BE7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033BE7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033BE80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BE84: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033BE88: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033BE8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BE90: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033BE94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033BE98: jal         0x8001ABF4
    // 0x8033BE9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033BE9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033BEA0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8033BEA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033BEA8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033BEAC: nop

    // 0x8033BEB0: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x8033BEB4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033BEB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033BEBC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033BEC0: nop

    // 0x8033BEC4: swc1        $f6, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f6.u32l;
    // 0x8033BEC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BECC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BED0: jal         0x8001BBDC
    // 0x8033BED4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x8033BED4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8033BED8:
    // 0x8033BED8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BEDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BEE0: jal         0x80029D8C
    // 0x8033BEE4: nop

    func_80029D8C(rdram, ctx);
        goto after_4;
    // 0x8033BEE4: nop

    after_4:
    // 0x8033BEE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BEEC: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x8033BEF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033BEF4: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033BEF8: nop

    // 0x8033BEFC: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8033BF00: nop

    // 0x8033BF04: bc1f        L_8033BF24
    if (!c1cs) {
        // 0x8033BF08: nop
    
            goto L_8033BF24;
    }
    // 0x8033BF08: nop

    // 0x8033BF0C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033BF10: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x8033BF14: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033BF18: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033BF1C: nop

    // 0x8033BF20: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033BF24:
    // 0x8033BF24: b           L_8033BF2C
    // 0x8033BF28: nop

        goto L_8033BF2C;
    // 0x8033BF28: nop

L_8033BF2C:
    // 0x8033BF2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BF30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033BF34: jr          $ra
    // 0x8033BF38: nop

    return;
    // 0x8033BF38: nop

;}
RECOMP_FUNC void func_80335214_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335214: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x80335218: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033521C: sw          $a2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r6;
    // 0x80335220: sw          $a3, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r7;
    // 0x80335224: swc1        $f12, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f12.u32l;
    // 0x80335228: swc1        $f14, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f14.u32l;
    // 0x8033522C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335230: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335234: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335238: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033523C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335240: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335244: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335248: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033524C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335250: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335254: sw          $t9, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r25;
    // 0x80335258: lw          $t0, 0x134($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X134);
    // 0x8033525C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335260: lw          $a1, 0x18($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X18);
    // 0x80335264: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x80335268: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8033526C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335270: jal         0x800372A0
    // 0x80335274: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_0;
    // 0x80335274: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80335278: lw          $t1, 0x134($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X134);
    // 0x8033527C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80335280: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335284: lw          $a1, 0x20($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X20);
    // 0x80335288: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8033528C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80335290: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335294: jal         0x800372A0
    // 0x80335298: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_1;
    // 0x80335298: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8033529C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x803352A0: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    // 0x803352A4: jal         0x80036400
    // 0x803352A8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    guMtxCatF(rdram, ctx);
        goto after_2;
    // 0x803352A8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x803352AC: lw          $a1, 0x138($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X138);
    // 0x803352B0: lw          $a2, 0x13C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X13C);
    // 0x803352B4: lw          $a3, 0x140($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X140);
    // 0x803352B8: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x803352BC: addiu       $t3, $sp, 0x2C
    ctx->r11 = ADD32(ctx->r29, 0X2C);
    // 0x803352C0: addiu       $t4, $sp, 0x28
    ctx->r12 = ADD32(ctx->r29, 0X28);
    // 0x803352C4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x803352C8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x803352CC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803352D0: jal         0x80036360
    // 0x803352D4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    guMtxXFMF(rdram, ctx);
        goto after_3;
    // 0x803352D4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x803352D8: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x803352DC: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803352E0: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803352E4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x803352E8: lw          $a3, 0x144($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X144);
    // 0x803352EC: jal         0x800158B4
    // 0x803352F0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_800158B4(rdram, ctx);
        goto after_4;
    // 0x803352F0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_4:
    // 0x803352F4: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
    // 0x803352F8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803352FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80335300: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80335304: nop

    // 0x80335308: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8033530C: nop

    // 0x80335310: bc1f        L_8033533C
    if (!c1cs) {
        // 0x80335314: nop
    
            goto L_8033533C;
    }
    // 0x80335314: nop

    // 0x80335318: lw          $t7, 0x144($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X144);
    // 0x8033531C: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x80335320: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80335324: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80335328: jal         0x80015538
    // 0x8033532C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x8033532C: nop

    after_5:
    // 0x80335330: lw          $t8, 0x144($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X144);
    // 0x80335334: b           L_80335370
    // 0x80335338: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
        goto L_80335370;
    // 0x80335338: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
L_8033533C:
    // 0x8033533C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80335340: lw          $t9, 0x144($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X144);
    // 0x80335344: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80335348: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8033534C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80335350: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80335354: nop

    // 0x80335358: mul.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8033535C: jal         0x80015538
    // 0x80335360: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80335360: nop

    after_6:
    // 0x80335364: lw          $t0, 0x144($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X144);
    // 0x80335368: nop

    // 0x8033536C: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
L_80335370:
    // 0x80335370: b           L_80335378
    // 0x80335374: nop

        goto L_80335378;
    // 0x80335374: nop

L_80335378:
    // 0x80335378: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033537C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    // 0x80335380: jr          $ra
    // 0x80335384: nop

    return;
    // 0x80335384: nop

;}
RECOMP_FUNC void func_80334B78_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334B78: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80334B7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334B80: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80334B84: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80334B88: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334B8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334B90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334B94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334B98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334B9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334BA0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334BA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334BA8: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80334BAC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80334BB0: nop

    // 0x80334BB4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80334BB8: nop

    // 0x80334BBC: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x80334BC0: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80334BC4: nop

    // 0x80334BC8: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80334BCC: nop

    // 0x80334BD0: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x80334BD4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80334BD8: nop

    // 0x80334BDC: lh          $t5, 0xEC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XEC);
    // 0x80334BE0: nop

    // 0x80334BE4: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x80334BE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334BEC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334BF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334BF8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80334BFC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80334C00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334C04: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334C08: jal         0x800295C0
    // 0x80334C0C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x80334C0C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80334C10: beq         $v0, $zero, L_80334C28
    if (ctx->r2 == 0) {
        // 0x80334C14: nop
    
            goto L_80334C28;
    }
    // 0x80334C14: nop

    // 0x80334C18: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334C1C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80334C20: b           L_80334C38
    // 0x80334C24: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
        goto L_80334C38;
    // 0x80334C24: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
L_80334C28:
    // 0x80334C28: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80334C2C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80334C30: nop

    // 0x80334C34: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
L_80334C38:
    // 0x80334C38: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80334C3C: lui         $at, 0x432F
    ctx->r1 = S32(0X432F << 16);
    // 0x80334C40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334C44: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80334C48: nop

    // 0x80334C4C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80334C50: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    // 0x80334C54: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80334C58: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80334C5C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334C60: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334C64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334C68: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334C6C: lwc1        $f6, 0x24($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X24);
    // 0x80334C70: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334C74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334C78: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334C7C: swc1        $f6, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f6.u32l;
    // 0x80334C80: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80334C84: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80334C88: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334C8C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334C90: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334C94: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334C98: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80334C9C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80334CA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334CA4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80334CA8: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80334CAC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80334CB0: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80334CB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334CB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334CBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334CC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334CC4: lwc1        $f10, 0x2C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80334CC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334CCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334CD0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334CD4: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x80334CD8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80334CDC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80334CE0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80334CE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334CE8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334CEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334CF0: lwc1        $f16, 0x24($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X24);
    // 0x80334CF4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334CF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334CFC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80334D00: swc1        $f16, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f16.u32l;
    // 0x80334D04: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80334D08: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80334D0C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334D10: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334D14: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334D18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334D1C: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80334D20: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334D24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334D28: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334D2C: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x80334D30: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80334D34: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80334D38: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80334D3C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334D40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334D44: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334D48: lwc1        $f4, 0x2C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80334D4C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334D50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334D54: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80334D58: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x80334D5C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80334D60: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80334D64: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80334D68: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334D6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334D70: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334D74: lwc1        $f6, 0x24($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80334D78: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334D7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334D80: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80334D84: swc1        $f6, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f6.u32l;
    // 0x80334D88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334D8C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334D90: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80334D94: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80334D98: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80334D9C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334DA0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334DA4: jal         0x800295C0
    // 0x80334DA8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x80334DA8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80334DAC: beq         $v0, $zero, L_80334DE0
    if (ctx->r2 == 0) {
        // 0x80334DB0: nop
    
            goto L_80334DE0;
    }
    // 0x80334DB0: nop

    // 0x80334DB4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80334DB8: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334DBC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334DC0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334DC4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334DC8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334DCC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334DD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334DD4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334DD8: b           L_80334E08
    // 0x80334DDC: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
        goto L_80334E08;
    // 0x80334DDC: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
L_80334DE0:
    // 0x80334DE0: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80334DE4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80334DE8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334DEC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334DF0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334DF4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334DF8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334DFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334E00: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334E04: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
L_80334E08:
    // 0x80334E08: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80334E0C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80334E10: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334E14: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334E18: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334E1C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334E20: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334E24: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80334E28: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80334E2C: lui         $at, 0x432F
    ctx->r1 = S32(0X432F << 16);
    // 0x80334E30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334E34: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80334E38: nop

    // 0x80334E3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334E40: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x80334E44: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80334E48: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80334E4C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80334E50: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334E54: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334E58: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334E5C: lwc1        $f10, 0x2C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80334E60: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334E64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334E68: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80334E6C: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x80334E70: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80334E74: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x80334E78: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80334E7C: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80334E80: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80334E84: addiu       $t3, $sp, 0x2C
    ctx->r11 = ADD32(ctx->r29, 0X2C);
    // 0x80334E88: addiu       $t4, $sp, 0x28
    ctx->r12 = ADD32(ctx->r29, 0X28);
    // 0x80334E8C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80334E90: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80334E94: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80334E98: jal         0x80016C54
    // 0x80334E9C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_80016C54(rdram, ctx);
        goto after_2;
    // 0x80334E9C: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x80334EA0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80334EA4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80334EA8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80334EAC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334EB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334EB4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334EB8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334EBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334EC0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80334EC4: swc1        $f16, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f16.u32l;
    // 0x80334EC8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80334ECC: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80334ED0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80334ED4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334ED8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334EDC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334EE0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334EE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334EE8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334EEC: swc1        $f18, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f18.u32l;
    // 0x80334EF0: b           L_80334EF8
    // 0x80334EF4: nop

        goto L_80334EF8;
    // 0x80334EF4: nop

L_80334EF8:
    // 0x80334EF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80334EFC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80334F00: jr          $ra
    // 0x80334F04: nop

    return;
    // 0x80334F04: nop

;}
RECOMP_FUNC void func_8033CF04_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CF04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033CF08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033CF0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CF10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CF14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CF18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CF1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CF20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CF24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CF28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CF2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033CF30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CF34: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033CF38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033CF3C: nop

    // 0x8033CF40: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033CF44: nop

    // 0x8033CF48: bne         $t1, $zero, L_8033CFE0
    if (ctx->r9 != 0) {
        // 0x8033CF4C: nop
    
            goto L_8033CFE0;
    }
    // 0x8033CF4C: nop

    // 0x8033CF50: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033CF54: nop

    // 0x8033CF58: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033CF5C: nop

    // 0x8033CF60: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033CF64: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033CF68: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033CF6C: nop

    // 0x8033CF70: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033CF74: nop

    // 0x8033CF78: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033CF7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CF80: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033CF84: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033CF88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CF8C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033CF90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CF94: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x8033CF98: jal         0x8001C0EC
    // 0x8033CF9C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033CF9C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033CFA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CFA4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033CFA8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CFAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CFB0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8033CFB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CFB8: jal         0x8001ABF4
    // 0x8033CFBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033CFBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033CFC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CFC4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033CFC8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CFCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CFD0: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x8033CFD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033CFD8: jal         0x8001ABF4
    // 0x8033CFDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033CFDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033CFE0:
    // 0x8033CFE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CFE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CFE8: jal         0x8001B62C
    // 0x8033CFEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x8033CFEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033CFF0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8033CFF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033CFF8: nop

    // 0x8033CFFC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8033D000: nop

    // 0x8033D004: bc1f        L_8033D024
    if (!c1cs) {
        // 0x8033D008: nop
    
            goto L_8033D024;
    }
    // 0x8033D008: nop

    // 0x8033D00C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033D010: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x8033D014: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033D018: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D01C: nop

    // 0x8033D020: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033D024:
    // 0x8033D024: b           L_8033D02C
    // 0x8033D028: nop

        goto L_8033D02C;
    // 0x8033D028: nop

L_8033D02C:
    // 0x8033D02C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033D034: jr          $ra
    // 0x8033D038: nop

    return;
    // 0x8033D038: nop

;}
RECOMP_FUNC void func_8033C6E8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C6E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033C6EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C6F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C6F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C6F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C6FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C700: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C704: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C708: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C70C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C710: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C714: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C718: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033C71C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C720: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033C724: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033C728: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033C72C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033C730: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033C734: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033C738: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033C73C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033C740: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033C744: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8033C748: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C74C: nop

    // 0x8033C750: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033C754: nop

    // 0x8033C758: bne         $t6, $zero, L_8033C7EC
    if (ctx->r14 != 0) {
        // 0x8033C75C: nop
    
            goto L_8033C7EC;
    }
    // 0x8033C75C: nop

    // 0x8033C760: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C764: nop

    // 0x8033C768: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033C76C: nop

    // 0x8033C770: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033C774: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033C778: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C77C: nop

    // 0x8033C780: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033C784: nop

    // 0x8033C788: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033C78C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C790: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033C794: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033C798: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C79C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033C7A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C7A4: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x8033C7A8: jal         0x8001C0EC
    // 0x8033C7AC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033C7AC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033C7B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C7B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C7B8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C7BC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033C7C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C7C4: jal         0x8001ABF4
    // 0x8033C7C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033C7C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033C7CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C7D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C7D4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033C7D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C7DC: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033C7E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033C7E4: jal         0x8001ABF4
    // 0x8033C7E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033C7E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033C7EC:
    // 0x8033C7EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C7F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C7F4: jal         0x8001B62C
    // 0x8033C7F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x8033C7F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033C7FC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8033C800: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033C804: nop

    // 0x8033C808: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8033C80C: nop

    // 0x8033C810: bc1f        L_8033C8BC
    if (!c1cs) {
        // 0x8033C814: nop
    
            goto L_8033C8BC;
    }
    // 0x8033C814: nop

    // 0x8033C818: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C81C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C820: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x8033C824: nop

    // 0x8033C828: bne         $t4, $at, L_8033C8BC
    if (ctx->r12 != ctx->r1) {
        // 0x8033C82C: nop
    
            goto L_8033C8BC;
    }
    // 0x8033C82C: nop

    // 0x8033C830: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C834: nop

    // 0x8033C838: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033C83C: nop

    // 0x8033C840: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x8033C844: sb          $t8, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r24;
    // 0x8033C848: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C84C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033C850: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033C854: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x8033C858: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x8033C85C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033C860: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033C864: addiu       $a1, $a1, -0x7F0
    ctx->r5 = ADD32(ctx->r5, -0X7F0);
    // 0x8033C868: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033C86C: jal         0x80027464
    // 0x8033C870: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x8033C870: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x8033C874: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033C878: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8033C87C: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x8033C880: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033C884: jal         0x80026F10
    // 0x8033C888: nop

    func_80026F10(rdram, ctx);
        goto after_5;
    // 0x8033C888: nop

    after_5:
    // 0x8033C88C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033C890: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C894: nop

    // 0x8033C898: sh          $t7, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r15;
    // 0x8033C89C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8033C8A0: addiu       $t0, $t0, -0x5448
    ctx->r8 = ADD32(ctx->r8, -0X5448);
    // 0x8033C8A4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033C8A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033C8AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C8B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033C8B4: jal         0x8001C0EC
    // 0x8033C8B8: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x8033C8B8: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_6:
L_8033C8BC:
    // 0x8033C8BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C8C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C8C4: jal         0x8002A8B4
    // 0x8033C8C8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_7;
    // 0x8033C8C8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_7:
    // 0x8033C8CC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C8D0: nop

    // 0x8033C8D4: lwc1        $f10, 0x3C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x8033C8D8: nop

    // 0x8033C8DC: swc1        $f10, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f10.u32l;
    // 0x8033C8E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C8E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C8E8: jal         0x8001B4AC
    // 0x8033C8EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x8033C8EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8033C8F0: beq         $v0, $zero, L_8033C910
    if (ctx->r2 == 0) {
        // 0x8033C8F4: nop
    
            goto L_8033C910;
    }
    // 0x8033C8F4: nop

    // 0x8033C8F8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C8FC: addiu       $t3, $zero, 0x1D
    ctx->r11 = ADD32(0, 0X1D);
    // 0x8033C900: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033C904: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C908: nop

    // 0x8033C90C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033C910:
    // 0x8033C910: b           L_8033C918
    // 0x8033C914: nop

        goto L_8033C918;
    // 0x8033C914: nop

L_8033C918:
    // 0x8033C918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C91C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033C920: jr          $ra
    // 0x8033C924: nop

    return;
    // 0x8033C924: nop

;}
RECOMP_FUNC void func_8033BB6C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BB6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033BB70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BB74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BB78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BB7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BB80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BB84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BB88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BB8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BB90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BB94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BB98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BB9C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033BBA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BBA4: nop

    // 0x8033BBA8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033BBAC: nop

    // 0x8033BBB0: bne         $t1, $zero, L_8033BC44
    if (ctx->r9 != 0) {
        // 0x8033BBB4: nop
    
            goto L_8033BC44;
    }
    // 0x8033BBB4: nop

    // 0x8033BBB8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BBBC: nop

    // 0x8033BBC0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033BBC4: nop

    // 0x8033BBC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033BBCC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033BBD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BBD4: nop

    // 0x8033BBD8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033BBDC: nop

    // 0x8033BBE0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033BBE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BBE8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033BBEC: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033BBF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BBF4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033BBF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BBFC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8033BC00: jal         0x8001C0EC
    // 0x8033BC04: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033BC04: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033BC08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BC0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BC10: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033BC14: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033BC18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BC1C: jal         0x8001ABF4
    // 0x8033BC20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033BC20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033BC24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BC28: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033BC2C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033BC30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BC34: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033BC38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033BC3C: jal         0x8001ABF4
    // 0x8033BC40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033BC40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033BC44:
    // 0x8033BC44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BC48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BC4C: jal         0x8001B4AC
    // 0x8033BC50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8033BC50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033BC54: beq         $v0, $zero, L_8033BC74
    if (ctx->r2 == 0) {
        // 0x8033BC58: nop
    
            goto L_8033BC74;
    }
    // 0x8033BC58: nop

    // 0x8033BC5C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033BC60: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x8033BC64: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033BC68: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BC6C: nop

    // 0x8033BC70: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033BC74:
    // 0x8033BC74: b           L_8033BC7C
    // 0x8033BC78: nop

        goto L_8033BC7C;
    // 0x8033BC78: nop

L_8033BC7C:
    // 0x8033BC7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BC80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033BC84: jr          $ra
    // 0x8033BC88: nop

    return;
    // 0x8033BC88: nop

;}
RECOMP_FUNC void func_8033F720_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033F724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033F728: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033F72C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033F730: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033F734: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033F738: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033F73C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033F740: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033F744: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033F748: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033F74C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033F750: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033F754: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033F758: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033F75C: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033F760: nop

    // 0x8033F764: bne         $t1, $at, L_8033F784
    if (ctx->r9 != ctx->r1) {
        // 0x8033F768: nop
    
            goto L_8033F784;
    }
    // 0x8033F768: nop

    // 0x8033F76C: b           L_8033F774
    // 0x8033F770: nop

        goto L_8033F774;
    // 0x8033F770: nop

L_8033F774:
    // 0x8033F774: jal         0x8033F2FC
    // 0x8033F778: nop

    func_8033F2FC_unk_bin_14(rdram, ctx);
        goto after_0;
    // 0x8033F778: nop

    after_0:
    // 0x8033F77C: b           L_8033F78C
    // 0x8033F780: nop

        goto L_8033F78C;
    // 0x8033F780: nop

L_8033F784:
    // 0x8033F784: b           L_8033F78C
    // 0x8033F788: nop

        goto L_8033F78C;
    // 0x8033F788: nop

L_8033F78C:
    // 0x8033F78C: b           L_8033F794
    // 0x8033F790: nop

        goto L_8033F794;
    // 0x8033F790: nop

L_8033F794:
    // 0x8033F794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033F798: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033F79C: jr          $ra
    // 0x8033F7A0: nop

    return;
    // 0x8033F7A0: nop

    // 0x8033F7A4: nop

    // 0x8033F7A8: nop

    // 0x8033F7AC: nop

;}
RECOMP_FUNC void func_8033F0DC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F0DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033F0E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033F0E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033F0E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033F0EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033F0F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033F0F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033F0F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033F0FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033F100: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033F104: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033F108: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033F10C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033F110: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033F114: nop

    // 0x8033F118: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033F11C: nop

    // 0x8033F120: bne         $t1, $zero, L_8033F178
    if (ctx->r9 != 0) {
        // 0x8033F124: nop
    
            goto L_8033F178;
    }
    // 0x8033F124: nop

    // 0x8033F128: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033F12C: nop

    // 0x8033F130: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033F134: nop

    // 0x8033F138: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033F13C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033F140: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033F144: nop

    // 0x8033F148: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033F14C: nop

    // 0x8033F150: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033F154: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F158: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033F15C: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x8033F160: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F164: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033F168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033F16C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8033F170: jal         0x8001C0EC
    // 0x8033F174: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033F174: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
L_8033F178:
    // 0x8033F178: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F17C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F180: jal         0x8002A8B4
    // 0x8033F184: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x8033F184: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x8033F188: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033F18C: nop

    // 0x8033F190: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033F194: nop

    // 0x8033F198: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033F19C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F1A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F1A4: jal         0x8001B4AC
    // 0x8033F1A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033F1A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033F1AC: beq         $v0, $zero, L_8033F1C4
    if (ctx->r2 == 0) {
        // 0x8033F1B0: nop
    
            goto L_8033F1C4;
    }
    // 0x8033F1B0: nop

    // 0x8033F1B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F1B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F1BC: jal         0x8002B114
    // 0x8033F1C0: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x8033F1C0: nop

    after_3:
L_8033F1C4:
    // 0x8033F1C4: b           L_8033F1CC
    // 0x8033F1C8: nop

        goto L_8033F1CC;
    // 0x8033F1C8: nop

L_8033F1CC:
    // 0x8033F1CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033F1D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033F1D4: jr          $ra
    // 0x8033F1D8: nop

    return;
    // 0x8033F1D8: nop

;}
RECOMP_FUNC void func_8033C5A4_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C5A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033C5A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C5AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C5B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C5B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C5B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C5BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C5C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C5C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C5C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C5CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C5D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C5D4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033C5D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C5DC: nop

    // 0x8033C5E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033C5E4: nop

    // 0x8033C5E8: bne         $t1, $zero, L_8033C67C
    if (ctx->r9 != 0) {
        // 0x8033C5EC: nop
    
            goto L_8033C67C;
    }
    // 0x8033C5EC: nop

    // 0x8033C5F0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C5F4: nop

    // 0x8033C5F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033C5FC: nop

    // 0x8033C600: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033C604: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033C608: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C60C: nop

    // 0x8033C610: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033C614: nop

    // 0x8033C618: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033C61C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C620: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033C624: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033C628: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C62C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033C630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C634: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8033C638: jal         0x8001C0EC
    // 0x8033C63C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033C63C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033C640: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C644: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C648: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C64C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033C650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C654: jal         0x8001ABF4
    // 0x8033C658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033C658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033C65C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C660: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C664: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033C668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C66C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033C670: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033C674: jal         0x8001ABF4
    // 0x8033C678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033C678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033C67C:
    // 0x8033C67C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C684: jal         0x8002A8B4
    // 0x8033C688: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033C688: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033C68C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C690: nop

    // 0x8033C694: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033C698: nop

    // 0x8033C69C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033C6A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C6A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C6A8: jal         0x8001B4AC
    // 0x8033C6AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033C6AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033C6B0: beq         $v0, $zero, L_8033C6D0
    if (ctx->r2 == 0) {
        // 0x8033C6B4: nop
    
            goto L_8033C6D0;
    }
    // 0x8033C6B4: nop

    // 0x8033C6B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C6BC: addiu       $t9, $zero, 0x1C
    ctx->r25 = ADD32(0, 0X1C);
    // 0x8033C6C0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033C6C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C6C8: nop

    // 0x8033C6CC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033C6D0:
    // 0x8033C6D0: b           L_8033C6D8
    // 0x8033C6D4: nop

        goto L_8033C6D8;
    // 0x8033C6D4: nop

L_8033C6D8:
    // 0x8033C6D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C6DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033C6E0: jr          $ra
    // 0x8033C6E4: nop

    return;
    // 0x8033C6E4: nop

;}
RECOMP_FUNC void func_80331E70_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331E78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331E7C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331E80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331E84: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331E88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E8C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331E90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E94: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331E98: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331E9C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331EA0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331EA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331EA8: nop

    // 0x80331EAC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331EB0: nop

    // 0x80331EB4: bne         $t1, $zero, L_80331F50
    if (ctx->r9 != 0) {
        // 0x80331EB8: nop
    
            goto L_80331F50;
    }
    // 0x80331EB8: nop

    // 0x80331EBC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331EC0: nop

    // 0x80331EC4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331EC8: nop

    // 0x80331ECC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331ED0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331ED4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331ED8: nop

    // 0x80331EDC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331EE0: nop

    // 0x80331EE4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331EE8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80331EEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331EF0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331EF4: nop

    // 0x80331EF8: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80331EFC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80331F00:
    // 0x80331F00: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80331F04: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331F08: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80331F0C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80331F10: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x80331F14: lwc1        $f6, 0x44($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80331F18: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331F1C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F20: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331F24: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331F28: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331F2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331F30: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331F34: swc1        $f6, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f6.u32l;
    // 0x80331F38: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80331F3C: nop

    // 0x80331F40: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x80331F44: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x80331F48: bne         $at, $zero, L_80331F00
    if (ctx->r1 != 0) {
        // 0x80331F4C: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_80331F00;
    }
    // 0x80331F4C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_80331F50:
    // 0x80331F50: jal         0x80333308
    // 0x80331F54: nop

    func_80333308_unk_bin_15(rdram, ctx);
        goto after_0;
    // 0x80331F54: nop

    after_0:
    // 0x80331F58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F60: jal         0x80029D8C
    // 0x80331F64: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x80331F64: nop

    after_1:
    // 0x80331F68: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80331F6C:
    // 0x80331F6C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80331F70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331F74: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80331F78: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x80331F7C: lh          $a0, 0xE8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XE8);
    // 0x80331F80: jal         0x80029D8C
    // 0x80331F84: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x80331F84: nop

    after_2:
    // 0x80331F88: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80331F8C: nop

    // 0x80331F90: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80331F94: slti        $at, $t1, 0x9
    ctx->r1 = SIGNED(ctx->r9) < 0X9 ? 1 : 0;
    // 0x80331F98: bne         $at, $zero, L_80331F6C
    if (ctx->r1 != 0) {
        // 0x80331F9C: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_80331F6C;
    }
    // 0x80331F9C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80331FA0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331FA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331FA8: lh          $t4, 0xF8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XF8);
    // 0x80331FAC: nop

    // 0x80331FB0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80331FB4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331FB8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331FBC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331FC0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331FC4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331FC8: lwc1        $f12, 0x4168($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80331FCC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331FD0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331FD4: jal         0x80015538
    // 0x80331FD8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80331FD8: nop

    after_3:
    // 0x80331FDC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331FE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331FE4: lh          $t7, 0xF8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XF8);
    // 0x80331FE8: nop

    // 0x80331FEC: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80331FF0: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80331FF4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331FF8: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80331FFC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332000: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332004: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x80332008: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033200C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332010: jal         0x8002A2EC
    // 0x80332014: lui         $a1, 0x4561
    ctx->r5 = S32(0X4561 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_4;
    // 0x80332014: lui         $a1, 0x4561
    ctx->r5 = S32(0X4561 << 16);
    after_4:
    // 0x80332018: beq         $v0, $zero, L_80332028
    if (ctx->r2 == 0) {
        // 0x8033201C: nop
    
            goto L_80332028;
    }
    // 0x8033201C: nop

    // 0x80332020: b           L_80332040
    // 0x80332024: nop

        goto L_80332040;
    // 0x80332024: nop

L_80332028:
    // 0x80332028: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033202C: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80332030: sh          $t9, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r25;
    // 0x80332034: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332038: nop

    // 0x8033203C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80332040:
    // 0x80332040: b           L_80332048
    // 0x80332044: nop

        goto L_80332048;
    // 0x80332044: nop

L_80332048:
    // 0x80332048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033204C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332050: jr          $ra
    // 0x80332054: nop

    return;
    // 0x80332054: nop

;}
RECOMP_FUNC void func_80333C58_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333C58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333C60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80333C64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80333C68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80333C6C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80333C70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333C74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333C78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333C80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333C88: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333C8C: lwc1        $f4, 0x4190($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x80333C90: nop

    // 0x80333C94: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80333C98: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333C9C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80333CA0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80333CA4: jal         0x80333D54
    // 0x80333CA8: nop

    func_80333D54_unk_bin_15(rdram, ctx);
        goto after_0;
    // 0x80333CA8: nop

    after_0:
    // 0x80333CAC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80333CB0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80333CB4: nop

    // 0x80333CB8: bgez        $t8, L_80333CD8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80333CBC: nop
    
            goto L_80333CD8;
    }
    // 0x80333CBC: nop

    // 0x80333CC0: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333CC4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333CC8: jal         0x80015538
    // 0x80333CCC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80333CCC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x80333CD0: b           L_80333D14
    // 0x80333CD4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_80333D14;
    // 0x80333CD4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_80333CD8:
    // 0x80333CD8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80333CDC: nop

    // 0x80333CE0: blez        $t9, L_80333D00
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80333CE4: nop
    
            goto L_80333D00;
    }
    // 0x80333CE4: nop

    // 0x80333CE8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333CEC: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333CF0: jal         0x80015538
    // 0x80333CF4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80333CF4: nop

    after_2:
    // 0x80333CF8: b           L_80333D14
    // 0x80333CFC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_80333D14;
    // 0x80333CFC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_80333D00:
    // 0x80333D00: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333D04: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80333D08: jal         0x80333E3C
    // 0x80333D0C: nop

    func_80333E3C_unk_bin_15(rdram, ctx);
        goto after_3;
    // 0x80333D0C: nop

    after_3:
    // 0x80333D10: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_80333D14:
    // 0x80333D14: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80333D18: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333D1C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333D20: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333D24: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333D28: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333D2C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333D30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D34: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333D38: swc1        $f6, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f6.u32l;
    // 0x80333D3C: b           L_80333D44
    // 0x80333D40: nop

        goto L_80333D44;
    // 0x80333D40: nop

L_80333D44:
    // 0x80333D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333D48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333D4C: jr          $ra
    // 0x80333D50: nop

    return;
    // 0x80333D50: nop

;}
RECOMP_FUNC void func_80330918_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330918: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033091C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330920: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330924: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330928: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033092C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330930: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330934: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330938: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033093C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330940: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330944: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330948: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033094C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330950: addiu       $at, $zero, 0x130
    ctx->r1 = ADD32(0, 0X130);
    // 0x80330954: lh          $t1, 0xE4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE4);
    // 0x80330958: nop

    // 0x8033095C: bne         $t1, $at, L_80330AA4
    if (ctx->r9 != ctx->r1) {
        // 0x80330960: nop
    
            goto L_80330AA4;
    }
    // 0x80330960: nop

    // 0x80330964: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330968: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x8033096C: nop

    // 0x80330970: bne         $t2, $zero, L_803309EC
    if (ctx->r10 != 0) {
        // 0x80330974: nop
    
            goto L_803309EC;
    }
    // 0x80330974: nop

    // 0x80330978: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033097C: nop

    // 0x80330980: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
    // 0x80330984: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80330988:
    // 0x80330988: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8033098C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330990: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80330994: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80330998: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x8033099C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803309A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803309A4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803309A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803309AC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803309B0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803309B4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803309B8: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803309BC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x803309C0: nop

    // 0x803309C4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803309C8: slti        $at, $t1, 0x9
    ctx->r1 = SIGNED(ctx->r9) < 0X9 ? 1 : 0;
    // 0x803309CC: bne         $at, $zero, L_80330988
    if (ctx->r1 != 0) {
        // 0x803309D0: sw          $t1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r9;
            goto L_80330988;
    }
    // 0x803309D0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x803309D4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803309D8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803309DC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x803309E0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803309E4: b           L_80330AA4
    // 0x803309E8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80330AA4;
    // 0x803309E8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803309EC:
    // 0x803309EC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803309F0: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x803309F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803309F8: bne         $t4, $at, L_80330A68
    if (ctx->r12 != ctx->r1) {
        // 0x803309FC: nop
    
            goto L_80330A68;
    }
    // 0x803309FC: nop

    // 0x80330A00: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A04: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80330A08: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80330A0C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80330A10:
    // 0x80330A10: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80330A14: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A18: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80330A1C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80330A20: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x80330A24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330A28: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80330A2C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330A30: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330A34: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80330A38: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330A3C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330A40: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80330A44: sh          $t8, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r24;
    // 0x80330A48: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80330A4C: nop

    // 0x80330A50: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x80330A54: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x80330A58: bne         $at, $zero, L_80330A10
    if (ctx->r1 != 0) {
        // 0x80330A5C: sw          $t6, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r14;
            goto L_80330A10;
    }
    // 0x80330A5C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80330A60: b           L_80330AA4
    // 0x80330A64: nop

        goto L_80330AA4;
    // 0x80330A64: nop

L_80330A68:
    // 0x80330A68: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330A6C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80330A70: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A74: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80330A78: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80330A7C: lui         $at, 0xC2F0
    ctx->r1 = S32(0XC2F0 << 16);
    // 0x80330A80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330A84: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330A88: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80330A8C: nop

    // 0x80330A90: bc1f        L_80330AA4
    if (!c1cs) {
        // 0x80330A94: nop
    
            goto L_80330AA4;
    }
    // 0x80330A94: nop

    // 0x80330A98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330A9C: jal         0x80069D04
    // 0x80330AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069D04(rdram, ctx);
        goto after_0;
    // 0x80330AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80330AA4:
    // 0x80330AA4: b           L_80330AAC
    // 0x80330AA8: nop

        goto L_80330AAC;
    // 0x80330AA8: nop

L_80330AAC:
    // 0x80330AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330AB4: jr          $ra
    // 0x80330AB8: nop

    return;
    // 0x80330AB8: nop

;}
RECOMP_FUNC void func_80330BD0_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330BD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330BD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330BD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330BDC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330BE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330BE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330BE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330BEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330BF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330BF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330BF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330BFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330C00: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330C04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330C08: nop

    // 0x80330C0C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330C10: nop

    // 0x80330C14: bne         $t1, $zero, L_80330D44
    if (ctx->r9 != 0) {
        // 0x80330C18: nop
    
            goto L_80330D44;
    }
    // 0x80330C18: nop

    // 0x80330C1C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330C20: nop

    // 0x80330C24: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330C28: nop

    // 0x80330C2C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330C30: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330C34: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330C38: nop

    // 0x80330C3C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330C40: nop

    // 0x80330C44: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330C48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C4C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330C50: addiu       $t7, $t7, -0x52BC
    ctx->r15 = ADD32(ctx->r15, -0X52BC);
    // 0x80330C54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C58: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330C5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330C60: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330C64: jal         0x8001C0EC
    // 0x80330C68: addiu       $a3, $zero, 0x111
    ctx->r7 = ADD32(0, 0X111);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330C68: addiu       $a3, $zero, 0x111
    ctx->r7 = ADD32(0, 0X111);
    after_0:
    // 0x80330C6C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80330C70:
    // 0x80330C70: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80330C74: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330C78: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80330C7C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80330C80: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x80330C84: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330C88: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330C8C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330C90: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330C94: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330C98: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330C9C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330CA0: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80330CA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330CA8: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x80330CAC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80330CB0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80330CB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330CB8: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80330CBC: nop

    // 0x80330CC0: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80330CC4: swc1        $f16, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f16.u32l;
    // 0x80330CC8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80330CCC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330CD0: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80330CD4: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x80330CD8: lh          $t0, 0xE8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XE8);
    // 0x80330CDC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330CE0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330CE4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330CE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330CEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330CF0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330CF4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330CF8: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80330CFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330D00: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80330D04: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330D08: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80330D0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330D10: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x80330D14: nop

    // 0x80330D18: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80330D1C: swc1        $f10, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f10.u32l;
    // 0x80330D20: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330D24: nop

    // 0x80330D28: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x80330D2C: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x80330D30: bne         $at, $zero, L_80330C70
    if (ctx->r1 != 0) {
        // 0x80330D34: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_80330C70;
    }
    // 0x80330D34: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80330D38: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330D3C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80330D40: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
L_80330D44:
    // 0x80330D44: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330D48: nop

    // 0x80330D4C: lh          $t8, 0xA6($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XA6);
    // 0x80330D50: nop

    // 0x80330D54: bne         $t8, $zero, L_80330E10
    if (ctx->r24 != 0) {
        // 0x80330D58: nop
    
            goto L_80330E10;
    }
    // 0x80330D58: nop

    // 0x80330D5C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80330D60:
    // 0x80330D60: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330D64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330D68: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x80330D6C: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x80330D70: lh          $t2, 0xE8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XE8);
    // 0x80330D74: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330D78: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80330D7C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80330D80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330D84: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80330D88: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330D8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D90: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330D94: swc1        $f16, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f16.u32l;
    // 0x80330D98: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330D9C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330DA0: sll         $t9, $t5, 1
    ctx->r25 = S32(ctx->r13 << 1);
    // 0x80330DA4: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80330DA8: lh          $t1, 0xE8($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XE8);
    // 0x80330DAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330DB0: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80330DB4: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330DB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330DBC: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330DC0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330DC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DC8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330DCC: swc1        $f6, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f6.u32l;
    // 0x80330DD0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80330DD4: nop

    // 0x80330DD8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330DDC: slti        $at, $t4, 0x9
    ctx->r1 = SIGNED(ctx->r12) < 0X9 ? 1 : 0;
    // 0x80330DE0: bne         $at, $zero, L_80330D60
    if (ctx->r1 != 0) {
        // 0x80330DE4: sw          $t4, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r12;
            goto L_80330D60;
    }
    // 0x80330DE4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80330DE8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330DEC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80330DF0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80330DF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330DF8: nop

    // 0x80330DFC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80330E00: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330E04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330E08: b           L_80330E28
    // 0x80330E0C: sh          $t7, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r15;
        goto L_80330E28;
    // 0x80330E0C: sh          $t7, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r15;
L_80330E10:
    // 0x80330E10: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330E14: nop

    // 0x80330E18: lh          $t1, 0xA6($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA6);
    // 0x80330E1C: nop

    // 0x80330E20: addiu       $t0, $t1, -0x1
    ctx->r8 = ADD32(ctx->r9, -0X1);
    // 0x80330E24: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_80330E28:
    // 0x80330E28: b           L_80330E30
    // 0x80330E2C: nop

        goto L_80330E30;
    // 0x80330E2C: nop

L_80330E30:
    // 0x80330E30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330E38: jr          $ra
    // 0x80330E3C: nop

    return;
    // 0x80330E3C: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330008: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033000C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330010: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330014: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330018: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033001C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330020: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80330024: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330028: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033002C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330030: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330034: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80330038: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033003C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330040: addiu       $a1, $a1, 0x4948
    ctx->r5 = ADD32(ctx->r5, 0X4948);
    // 0x80330044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033004C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80330050: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330054: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330058: jal         0x80027464
    // 0x8033005C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033005C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330060: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80330064: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80330068: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033006C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330070: jal         0x80019448
    // 0x80330074: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80330074: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80330078: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8033007C:
    // 0x8033007C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330080: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80330084: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330088: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033008C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330090: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330094: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330098: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8033009C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x803300A0: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x803300A4: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x803300A8: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x803300AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803300B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803300B4: jal         0x80019448
    // 0x803300B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x803300B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x803300BC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x803300C0: nop

    // 0x803300C4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803300C8: slti        $at, $t8, 0x9
    ctx->r1 = SIGNED(ctx->r24) < 0X9 ? 1 : 0;
    // 0x803300CC: bne         $at, $zero, L_8033007C
    if (ctx->r1 != 0) {
        // 0x803300D0: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_8033007C;
    }
    // 0x803300D0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x803300D4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803300D8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803300DC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803300E0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803300E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803300E8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803300EC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803300F0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803300F4: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x803300F8: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x803300FC: lui         $at, 0x44A5
    ctx->r1 = S32(0X44A5 << 16);
    // 0x80330100: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80330104: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330108: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033010C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330110: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330114: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330118: addu        $t4, $t2, $t0
    ctx->r12 = ADD32(ctx->r10, ctx->r8);
    // 0x8033011C: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x80330120: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330124: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330128: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033012C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330130: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330134: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330138: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033013C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330140: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330144: lh          $t6, 0xE8($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XE8);
    // 0x80330148: lui         $at, 0x44A5
    ctx->r1 = S32(0X44A5 << 16);
    // 0x8033014C: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80330150: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80330154: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330158: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8033015C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330160: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330164: addu        $t3, $t1, $t8
    ctx->r11 = ADD32(ctx->r9, ctx->r24);
    // 0x80330168: swc1        $f6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f6.u32l;
    // 0x8033016C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330170: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330174: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80330178: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033017C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330180: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80330184: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330188: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033018C: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80330190: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x80330194: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80330198: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8033019C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803301A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803301A4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803301A8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803301AC: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x803301B0: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x803301B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803301B8: nop

    // 0x803301BC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x803301C0: swc1        $f16, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f16.u32l;
    // 0x803301C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803301C8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803301CC: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x803301D0: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x803301D4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803301D8: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x803301DC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803301E0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803301E4: addu        $t2, $t8, $t3
    ctx->r10 = ADD32(ctx->r24, ctx->r11);
    // 0x803301E8: lh          $t0, 0xEA($t2)
    ctx->r8 = MEM_H(ctx->r10, 0XEA);
    // 0x803301EC: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x803301F0: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x803301F4: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x803301F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803301FC: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x80330200: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330204: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330208: addu        $t7, $t5, $t3
    ctx->r15 = ADD32(ctx->r13, ctx->r11);
    // 0x8033020C: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
    // 0x80330210: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330214: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80330218: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x8033021C: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x80330220: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330224: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x80330228: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033022C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330230: addu        $t1, $t4, $t6
    ctx->r9 = ADD32(ctx->r12, ctx->r14);
    // 0x80330234: lh          $t8, 0xEA($t1)
    ctx->r24 = MEM_H(ctx->r9, 0XEA);
    // 0x80330238: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x8033023C: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80330240: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80330244: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330248: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8033024C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330250: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330254: addu        $t0, $t2, $t6
    ctx->r8 = ADD32(ctx->r10, ctx->r14);
    // 0x80330258: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x8033025C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330260: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330264: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x80330268: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x8033026C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330270: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80330274: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330278: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033027C: addu        $t9, $t3, $t7
    ctx->r25 = ADD32(ctx->r11, ctx->r15);
    // 0x80330280: lh          $t4, 0xEA($t9)
    ctx->r12 = MEM_H(ctx->r25, 0XEA);
    // 0x80330284: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80330288: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x8033028C: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x80330290: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330294: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x80330298: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033029C: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x803302A0: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803302A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803302A8: nop

    // 0x803302AC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803302B0: swc1        $f10, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f10.u32l;
    // 0x803302B4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803302B8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803302BC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803302C0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803302C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803302C8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803302CC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803302D0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803302D4: addu        $t5, $t6, $t0
    ctx->r13 = ADD32(ctx->r14, ctx->r8);
    // 0x803302D8: lh          $t3, 0xEC($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XEC);
    // 0x803302DC: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x803302E0: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x803302E4: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x803302E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803302EC: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x803302F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803302F4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803302F8: addu        $t4, $t9, $t0
    ctx->r12 = ADD32(ctx->r25, ctx->r8);
    // 0x803302FC: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
    // 0x80330300: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330304: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330308: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8033030C: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80330310: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330314: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x80330318: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033031C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330320: addu        $t2, $t7, $t8
    ctx->r10 = ADD32(ctx->r15, ctx->r24);
    // 0x80330324: lh          $t6, 0xEC($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XEC);
    // 0x80330328: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x8033032C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80330330: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80330334: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330338: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033033C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330340: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330344: addu        $t3, $t5, $t8
    ctx->r11 = ADD32(ctx->r13, ctx->r24);
    // 0x80330348: swc1        $f18, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f18.u32l;
    // 0x8033034C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330350: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330354: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330358: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033035C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330360: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330364: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330368: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033036C: addu        $t1, $t0, $t4
    ctx->r9 = ADD32(ctx->r8, ctx->r12);
    // 0x80330370: lh          $t7, 0xEC($t1)
    ctx->r15 = MEM_H(ctx->r9, 0XEC);
    // 0x80330374: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80330378: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8033037C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80330380: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330384: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80330388: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033038C: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x80330390: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80330394: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330398: nop

    // 0x8033039C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803303A0: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x803303A4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803303A8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803303AC: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x803303B0: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803303B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803303B8: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803303BC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803303C0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803303C4: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x803303C8: lh          $t0, 0xEE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEE);
    // 0x803303CC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803303D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803303D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803303D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803303DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803303E0: lwc1        $f10, 0x49C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X49C0);
    // 0x803303E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803303E8: addu        $t7, $t1, $t3
    ctx->r15 = ADD32(ctx->r9, ctx->r11);
    // 0x803303EC: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x803303F0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803303F4: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803303F8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803303FC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330400: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330404: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330408: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033040C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80330410: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x80330414: lh          $t8, 0xEE($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XEE);
    // 0x80330418: lui         $at, 0x44A5
    ctx->r1 = S32(0X44A5 << 16);
    // 0x8033041C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330420: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330424: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330428: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033042C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330430: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330434: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80330438: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
    // 0x8033043C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330440: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330444: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80330448: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033044C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330450: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330454: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330458: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033045C: addu        $t2, $t3, $t7
    ctx->r10 = ADD32(ctx->r11, ctx->r15);
    // 0x80330460: lh          $t4, 0xEE($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XEE);
    // 0x80330464: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330468: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033046C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330470: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330474: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330478: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033047C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80330480: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80330484: lwc1        $f4, 0x49C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X49C4);
    // 0x80330488: nop

    // 0x8033048C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80330490: swc1        $f6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f6.u32l;
    // 0x80330494: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330498: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033049C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803304A0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803304A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803304A8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803304AC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803304B0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803304B4: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x803304B8: lh          $t3, 0xF0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XF0);
    // 0x803304BC: lui         $at, 0x44A5
    ctx->r1 = S32(0X44A5 << 16);
    // 0x803304C0: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x803304C4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803304C8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803304CC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803304D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803304D4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803304D8: addu        $t4, $t2, $t0
    ctx->r12 = ADD32(ctx->r10, ctx->r8);
    // 0x803304DC: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x803304E0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803304E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803304E8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803304EC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803304F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803304F4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803304F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803304FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330500: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330504: lh          $t6, 0xF0($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XF0);
    // 0x80330508: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033050C: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80330510: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80330514: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330518: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8033051C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330520: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330524: addu        $t3, $t1, $t8
    ctx->r11 = ADD32(ctx->r9, ctx->r24);
    // 0x80330528: swc1        $f10, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f10.u32l;
    // 0x8033052C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330530: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330534: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80330538: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x8033053C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330540: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80330544: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330548: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033054C: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80330550: lh          $t7, 0xF0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XF0);
    // 0x80330554: lui         $at, 0x443E
    ctx->r1 = S32(0X443E << 16);
    // 0x80330558: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8033055C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80330560: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330564: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80330568: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033056C: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x80330570: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80330574: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330578: nop

    // 0x8033057C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80330580: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x80330584: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330588: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033058C: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80330590: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x80330594: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330598: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x8033059C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803305A0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803305A4: addu        $t2, $t8, $t3
    ctx->r10 = ADD32(ctx->r24, ctx->r11);
    // 0x803305A8: lh          $t0, 0xF2($t2)
    ctx->r8 = MEM_H(ctx->r10, 0XF2);
    // 0x803305AC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803305B0: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x803305B4: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x803305B8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803305BC: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x803305C0: lwc1        $f6, 0x49C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X49C8);
    // 0x803305C4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803305C8: addu        $t7, $t5, $t3
    ctx->r15 = ADD32(ctx->r13, ctx->r11);
    // 0x803305CC: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x803305D0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803305D4: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803305D8: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x803305DC: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x803305E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803305E4: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x803305E8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803305EC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803305F0: addu        $t1, $t4, $t6
    ctx->r9 = ADD32(ctx->r12, ctx->r14);
    // 0x803305F4: lh          $t8, 0xF2($t1)
    ctx->r24 = MEM_H(ctx->r9, 0XF2);
    // 0x803305F8: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x803305FC: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80330600: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80330604: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330608: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8033060C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330610: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330614: addu        $t0, $t2, $t6
    ctx->r8 = ADD32(ctx->r10, ctx->r14);
    // 0x80330618: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
    // 0x8033061C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330620: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330624: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x80330628: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x8033062C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330630: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80330634: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330638: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033063C: addu        $t9, $t3, $t7
    ctx->r25 = ADD32(ctx->r11, ctx->r15);
    // 0x80330640: lh          $t4, 0xF2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0XF2);
    // 0x80330644: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330648: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x8033064C: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x80330650: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330654: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x80330658: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033065C: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x80330660: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80330664: lwc1        $f16, 0x49CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X49CC);
    // 0x80330668: nop

    // 0x8033066C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330670: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x80330674: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330678: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033067C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80330680: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80330684: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330688: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033068C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330690: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330694: addu        $t5, $t6, $t0
    ctx->r13 = ADD32(ctx->r14, ctx->r8);
    // 0x80330698: lh          $t3, 0xF4($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XF4);
    // 0x8033069C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x803306A0: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x803306A4: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x803306A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803306AC: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x803306B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803306B4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803306B8: addu        $t4, $t9, $t0
    ctx->r12 = ADD32(ctx->r25, ctx->r8);
    // 0x803306BC: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x803306C0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803306C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803306C8: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x803306CC: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x803306D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803306D4: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x803306D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803306DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803306E0: addu        $t2, $t7, $t8
    ctx->r10 = ADD32(ctx->r15, ctx->r24);
    // 0x803306E4: lh          $t6, 0xF4($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XF4);
    // 0x803306E8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x803306EC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803306F0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803306F4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803306F8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803306FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330700: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330704: addu        $t3, $t5, $t8
    ctx->r11 = ADD32(ctx->r13, ctx->r24);
    // 0x80330708: swc1        $f6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f6.u32l;
    // 0x8033070C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330710: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330714: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330718: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033071C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330720: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330724: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330728: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033072C: addu        $t1, $t0, $t4
    ctx->r9 = ADD32(ctx->r8, ctx->r12);
    // 0x80330730: lh          $t7, 0xF4($t1)
    ctx->r15 = MEM_H(ctx->r9, 0XF4);
    // 0x80330734: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330738: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8033073C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80330740: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330744: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80330748: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033074C: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x80330750: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80330754: lwc1        $f10, 0x49D0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X49D0);
    // 0x80330758: nop

    // 0x8033075C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80330760: swc1        $f16, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f16.u32l;
    // 0x80330764: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330768: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033076C: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80330770: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330774: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330778: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x8033077C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330780: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330784: addu        $t9, $t8, $t3
    ctx->r25 = ADD32(ctx->r24, ctx->r11);
    // 0x80330788: lh          $t0, 0xF6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XF6);
    // 0x8033078C: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80330790: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330794: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330798: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033079C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803307A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803307A4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803307A8: addu        $t7, $t1, $t3
    ctx->r15 = ADD32(ctx->r9, ctx->r11);
    // 0x803307AC: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
    // 0x803307B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803307B4: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803307B8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803307BC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803307C0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803307C4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803307C8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803307CC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803307D0: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x803307D4: lh          $t8, 0xF6($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XF6);
    // 0x803307D8: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x803307DC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803307E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803307E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803307E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803307EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803307F0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803307F4: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x803307F8: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x803307FC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330800: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330804: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80330808: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033080C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330810: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330814: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330818: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033081C: addu        $t2, $t3, $t7
    ctx->r10 = ADD32(ctx->r11, ctx->r15);
    // 0x80330820: lh          $t4, 0xF6($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XF6);
    // 0x80330824: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330828: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033082C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330830: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330834: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330838: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033083C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80330840: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80330844: lwc1        $f8, 0x49D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X49D4);
    // 0x80330848: nop

    // 0x8033084C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80330850: swc1        $f10, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f10.u32l;
    // 0x80330854: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330858: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033085C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80330860: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330864: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330868: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033086C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330870: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330874: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80330878: lh          $t3, 0xF8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XF8);
    // 0x8033087C: lui         $at, 0x44AA
    ctx->r1 = S32(0X44AA << 16);
    // 0x80330880: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80330884: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330888: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033088C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80330890: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330894: addu        $t4, $t2, $t0
    ctx->r12 = ADD32(ctx->r10, ctx->r8);
    // 0x80330898: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8033089C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803308A0: nop

    // 0x803308A4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803308A8: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x803308AC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803308B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803308B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803308BC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803308C0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803308C4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803308C8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803308CC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x803308D0: sh          $t5, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r13;
    // 0x803308D4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803308D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803308DC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803308E0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803308E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803308E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803308EC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803308F0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803308F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803308F8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803308FC: swc1        $f6, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f6.u32l;
    // 0x80330900: b           L_80330908
    // 0x80330904: nop

        goto L_80330908;
    // 0x80330904: nop

L_80330908:
    // 0x80330908: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033090C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330910: jr          $ra
    // 0x80330914: nop

    return;
    // 0x80330914: nop

;}
RECOMP_FUNC void func_80333308_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333308: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033330C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333310: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333314: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333318: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033331C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333320: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333324: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333328: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033332C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333330: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333334: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333338: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033333C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333340: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80333344: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80333348: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033334C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333350: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333354: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333358: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033335C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333360: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80333364: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80333368: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033336C: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80333370: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80333374: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80333378: lwc1        $f8, 0x4($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8033337C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80333380: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80333384: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80333388: addiu       $t5, $sp, 0x20
    ctx->r13 = ADD32(ctx->r29, 0X20);
    // 0x8033338C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80333390: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x80333394: jal         0x800158B4
    // 0x80333398: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800158B4(rdram, ctx);
        goto after_0;
    // 0x80333398: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8033339C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803333A0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803333A4: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x803333A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803333AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803333B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803333B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803333B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803333BC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803333C0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803333C4: swc1        $f6, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f6.u32l;
    // 0x803333C8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803333CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803333D0: lh          $t1, 0xE8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XE8);
    // 0x803333D4: nop

    // 0x803333D8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803333DC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803333E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803333E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803333E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803333EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803333F0: lwc1        $f8, 0x4190($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x803333F4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803333F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803333FC: nop

    // 0x80333400: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80333404: nop

    // 0x80333408: bc1f        L_80333470
    if (!c1cs) {
        // 0x8033340C: nop
    
            goto L_80333470;
    }
    // 0x8033340C: nop

    // 0x80333410: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333414: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333418: nop

    // 0x8033341C: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x80333420: nop

    // 0x80333424: bc1f        L_80333470
    if (!c1cs) {
        // 0x80333428: nop
    
            goto L_80333470;
    }
    // 0x80333428: nop

    // 0x8033342C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333430: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80333434: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x80333438: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033343C: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x80333440: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80333444: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333448: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x8033344C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333450: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x80333454: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333458: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033345C: lwc1        $f4, 0x40($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80333460: nop

    // 0x80333464: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80333468: b           L_80333514
    // 0x8033346C: swc1        $f6, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f6.u32l;
        goto L_80333514;
    // 0x8033346C: swc1        $f6, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f6.u32l;
L_80333470:
    // 0x80333470: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333474: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333478: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x8033347C: nop

    // 0x80333480: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333484: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333488: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033348C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333490: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333494: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333498: lwc1        $f10, 0x4190($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x8033349C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803334A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803334A4: nop

    // 0x803334A8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803334AC: nop

    // 0x803334B0: bc1f        L_80333514
    if (!c1cs) {
        // 0x803334B4: nop
    
            goto L_80333514;
    }
    // 0x803334B4: nop

    // 0x803334B8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803334BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803334C0: nop

    // 0x803334C4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803334C8: nop

    // 0x803334CC: bc1f        L_80333514
    if (!c1cs) {
        // 0x803334D0: nop
    
            goto L_80333514;
    }
    // 0x803334D0: nop

    // 0x803334D4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803334D8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803334DC: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x803334E0: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803334E4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803334E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803334EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803334F0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803334F4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803334F8: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x803334FC: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80333500: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333504: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80333508: nop

    // 0x8033350C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80333510: swc1        $f6, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f6.u32l;
L_80333514:
    // 0x80333514: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333518: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033351C: lh          $t6, 0xE8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE8);
    // 0x80333520: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333524: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333528: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033352C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333530: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333534: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333538: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033353C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80333540: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333544: lwc1        $f10, 0x40($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X40);
    // 0x80333548: nop

    // 0x8033354C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80333550: swc1        $f16, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f16.u32l;
    // 0x80333554: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333558: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033355C: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x80333560: nop

    // 0x80333564: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333568: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033356C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333570: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333574: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333578: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033357C: lwc1        $f18, 0x4168($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80333580: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80333584: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333588: nop

    // 0x8033358C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80333590: nop

    // 0x80333594: bc1f        L_803335DC
    if (!c1cs) {
        // 0x80333598: nop
    
            goto L_803335DC;
    }
    // 0x80333598: nop

    // 0x8033359C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803335A0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803335A4: lh          $t0, 0xE8($t4)
    ctx->r8 = MEM_H(ctx->r12, 0XE8);
    // 0x803335A8: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803335AC: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x803335B0: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x803335B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803335B8: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x803335BC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803335C0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x803335C4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803335C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803335CC: lwc1        $f6, 0x18($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X18);
    // 0x803335D0: nop

    // 0x803335D4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803335D8: swc1        $f10, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f10.u32l;
L_803335DC:
    // 0x803335DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803335E0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_803335E4:
    // 0x803335E4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803335E8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803335EC: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x803335F0: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x803335F4: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x803335F8: lh          $t7, 0xE6($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XE6);
    // 0x803335FC: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x80333600: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333604: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80333608: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033360C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333610: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333614: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80333618: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033361C: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80333620: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333624: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333628: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033362C: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x80333630: addu        $t1, $t8, $t5
    ctx->r9 = ADD32(ctx->r24, ctx->r13);
    // 0x80333634: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80333638: lwc1        $f16, 0x0($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8033363C: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80333640: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80333644: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80333648: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8033364C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80333650: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80333654: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80333658: addiu       $t9, $sp, 0x20
    ctx->r25 = ADD32(ctx->r29, 0X20);
    // 0x8033365C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80333660: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x80333664: jal         0x800158B4
    // 0x80333668: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    func_800158B4(rdram, ctx);
        goto after_1;
    // 0x80333668: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_1:
    // 0x8033366C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80333670: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333674: sll         $t0, $t4, 1
    ctx->r8 = S32(ctx->r12 << 1);
    // 0x80333678: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x8033367C: lh          $t7, 0xE8($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XE8);
    // 0x80333680: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333684: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333688: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033368C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333690: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333694: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333698: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033369C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803336A0: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x803336A4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803336A8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803336AC: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x803336B0: addu        $t9, $t5, $t1
    ctx->r25 = ADD32(ctx->r13, ctx->r9);
    // 0x803336B4: lh          $t4, 0xE8($t9)
    ctx->r12 = MEM_H(ctx->r25, 0XE8);
    // 0x803336B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803336BC: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803336C0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803336C4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803336C8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803336CC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803336D0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803336D4: lwc1        $f4, 0x4190($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x803336D8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803336DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803336E0: nop

    // 0x803336E4: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x803336E8: nop

    // 0x803336EC: bc1f        L_80333760
    if (!c1cs) {
        // 0x803336F0: nop
    
            goto L_80333760;
    }
    // 0x803336F0: nop

    // 0x803336F4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803336F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803336FC: nop

    // 0x80333700: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80333704: nop

    // 0x80333708: bc1f        L_80333760
    if (!c1cs) {
        // 0x8033370C: nop
    
            goto L_80333760;
    }
    // 0x8033370C: nop

    // 0x80333710: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80333714: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333718: sll         $t7, $t3, 1
    ctx->r15 = S32(ctx->r11 << 1);
    // 0x8033371C: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x80333720: lh          $t6, 0xE8($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XE8);
    // 0x80333724: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80333728: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8033372C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80333730: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333734: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80333738: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033373C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80333740: addu        $t9, $t5, $t1
    ctx->r25 = ADD32(ctx->r13, ctx->r9);
    // 0x80333744: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333748: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033374C: lwc1        $f10, 0x40($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X40);
    // 0x80333750: nop

    // 0x80333754: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x80333758: b           L_80333818
    // 0x8033375C: swc1        $f18, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f18.u32l;
        goto L_80333818;
    // 0x8033375C: swc1        $f18, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f18.u32l;
L_80333760:
    // 0x80333760: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80333764: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333768: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8033376C: addu        $t0, $t4, $t3
    ctx->r8 = ADD32(ctx->r12, ctx->r11);
    // 0x80333770: lh          $t7, 0xE8($t0)
    ctx->r15 = MEM_H(ctx->r8, 0XE8);
    // 0x80333774: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333778: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033377C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333780: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333784: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333788: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033378C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333790: lwc1        $f6, 0x4190($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4190);
    // 0x80333794: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333798: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033379C: nop

    // 0x803337A0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803337A4: nop

    // 0x803337A8: bc1f        L_80333818
    if (!c1cs) {
        // 0x803337AC: nop
    
            goto L_80333818;
    }
    // 0x803337AC: nop

    // 0x803337B0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803337B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803337B8: nop

    // 0x803337BC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803337C0: nop

    // 0x803337C4: bc1f        L_80333818
    if (!c1cs) {
        // 0x803337C8: nop
    
            goto L_80333818;
    }
    // 0x803337C8: nop

    // 0x803337CC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x803337D0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803337D4: sll         $t1, $t5, 1
    ctx->r9 = S32(ctx->r13 << 1);
    // 0x803337D8: addu        $t9, $t6, $t1
    ctx->r25 = ADD32(ctx->r14, ctx->r9);
    // 0x803337DC: lh          $t2, 0xE8($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XE8);
    // 0x803337E0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803337E4: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803337E8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803337EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803337F0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803337F4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803337F8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803337FC: addu        $t0, $t4, $t3
    ctx->r8 = ADD32(ctx->r12, ctx->r11);
    // 0x80333800: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80333804: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333808: lwc1        $f16, 0x40($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X40);
    // 0x8033380C: nop

    // 0x80333810: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80333814: swc1        $f18, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f18.u32l;
L_80333818:
    // 0x80333818: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033381C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333820: sll         $t5, $t8, 1
    ctx->r13 = S32(ctx->r24 << 1);
    // 0x80333824: addu        $t6, $t7, $t5
    ctx->r14 = ADD32(ctx->r15, ctx->r13);
    // 0x80333828: lh          $t1, 0xE8($t6)
    ctx->r9 = MEM_H(ctx->r14, 0XE8);
    // 0x8033382C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80333830: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80333834: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80333838: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033383C: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80333840: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333844: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80333848: addu        $t4, $t9, $t2
    ctx->r12 = ADD32(ctx->r25, ctx->r10);
    // 0x8033384C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80333850: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333854: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80333858: nop

    // 0x8033385C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80333860: swc1        $f8, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f8.u32l;
    // 0x80333864: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80333868: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033386C: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x80333870: addu        $t7, $t3, $t8
    ctx->r15 = ADD32(ctx->r11, ctx->r24);
    // 0x80333874: lh          $t5, 0xE8($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XE8);
    // 0x80333878: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033387C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80333880: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80333884: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333888: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033388C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333890: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333894: lwc1        $f10, 0x4168($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80333898: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033389C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803338A0: nop

    // 0x803338A4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x803338A8: nop

    // 0x803338AC: bc1f        L_80333900
    if (!c1cs) {
        // 0x803338B0: nop
    
            goto L_80333900;
    }
    // 0x803338B0: nop

    // 0x803338B4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x803338B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803338BC: sll         $t2, $t9, 1
    ctx->r10 = S32(ctx->r25 << 1);
    // 0x803338C0: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x803338C4: lh          $t0, 0xE8($t4)
    ctx->r8 = MEM_H(ctx->r12, 0XE8);
    // 0x803338C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803338CC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x803338D0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x803338D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803338D8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x803338DC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803338E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803338E4: addu        $t7, $t3, $t8
    ctx->r15 = ADD32(ctx->r11, ctx->r24);
    // 0x803338E8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803338EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803338F0: lwc1        $f18, 0x18($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X18);
    // 0x803338F4: nop

    // 0x803338F8: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x803338FC: swc1        $f4, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f4.u32l;
L_80333900:
    // 0x80333900: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80333904: nop

    // 0x80333908: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8033390C: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x80333910: bne         $at, $zero, L_803335E4
    if (ctx->r1 != 0) {
        // 0x80333914: sw          $t6, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r14;
            goto L_803335E4;
    }
    // 0x80333914: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80333918: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033391C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80333920: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x80333924: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x80333928: jal         0x80333BCC
    // 0x8033392C: nop

    func_80333BCC_unk_bin_15(rdram, ctx);
        goto after_2;
    // 0x8033392C: nop

    after_2:
    // 0x80333930: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333934: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333938: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x8033393C: nop

    // 0x80333940: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80333944: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333948: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033394C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333950: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333954: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333958: swc1        $f0, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f0.u32l;
    // 0x8033395C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80333960: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_80333964:
    // 0x80333964: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80333968: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033396C: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x80333970: addu        $t5, $t3, $t7
    ctx->r13 = ADD32(ctx->r11, ctx->r15);
    // 0x80333974: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x80333978: lh          $a1, 0xE6($t5)
    ctx->r5 = MEM_H(ctx->r13, 0XE6);
    // 0x8033397C: jal         0x80333BCC
    // 0x80333980: nop

    func_80333BCC_unk_bin_15(rdram, ctx);
        goto after_3;
    // 0x80333980: nop

    after_3:
    // 0x80333984: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80333988: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033398C: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x80333990: addu        $t2, $t6, $t1
    ctx->r10 = ADD32(ctx->r14, ctx->r9);
    // 0x80333994: lh          $t4, 0xE8($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XE8);
    // 0x80333998: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033399C: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x803339A0: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x803339A4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803339A8: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x803339AC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803339B0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803339B4: swc1        $f0, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f0.u32l;
    // 0x803339B8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x803339BC: nop

    // 0x803339C0: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x803339C4: slti        $at, $t3, 0x9
    ctx->r1 = SIGNED(ctx->r11) < 0X9 ? 1 : 0;
    // 0x803339C8: bne         $at, $zero, L_80333964
    if (ctx->r1 != 0) {
        // 0x803339CC: sw          $t3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r11;
            goto L_80333964;
    }
    // 0x803339CC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x803339D0: b           L_803339D8
    // 0x803339D4: nop

        goto L_803339D8;
    // 0x803339D4: nop

L_803339D8:
    // 0x803339D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803339DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803339E0: jr          $ra
    // 0x803339E4: nop

    return;
    // 0x803339E4: nop

;}
RECOMP_FUNC void func_80334540_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334540: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80334544: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334548: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033454C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334550: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334554: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334558: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033455C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334560: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334564: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334568: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033456C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334570: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80334574: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334578: nop

    // 0x8033457C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334580: nop

    // 0x80334584: bne         $t1, $zero, L_80334618
    if (ctx->r9 != 0) {
        // 0x80334588: nop
    
            goto L_80334618;
    }
    // 0x80334588: nop

    // 0x8033458C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80334590: nop

    // 0x80334594: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334598: nop

    // 0x8033459C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803345A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803345A4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803345A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803345AC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803345B0: nop

    // 0x803345B4: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x803345B8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803345BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803345C0: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x803345C4: nop

    // 0x803345C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803345CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803345D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803345D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803345D8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803345DC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803345E0: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803345E4: nop

    // 0x803345E8: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
    // 0x803345EC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803345F0: nop

    // 0x803345F4: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803345F8: nop

    // 0x803345FC: swc1        $f8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f8.u32l;
    // 0x80334600: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80334604: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x80334608: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x8033460C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80334610: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x80334614: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
L_80334618:
    // 0x80334618: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033461C: nop

    // 0x80334620: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x80334624: nop

    // 0x80334628: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x8033462C: bne         $at, $zero, L_8033478C
    if (ctx->r1 != 0) {
        // 0x80334630: nop
    
            goto L_8033478C;
    }
    // 0x80334630: nop

    // 0x80334634: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80334638: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8033463C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80334640: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80334644: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80334648: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8033464C: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80334650: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80334654: jal         0x800156C4
    // 0x80334658: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_0;
    // 0x80334658: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    after_0:
    // 0x8033465C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80334660: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334664: jal         0x80015744
    // 0x80334668: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_1;
    // 0x80334668: nop

    after_1:
    // 0x8033466C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80334670: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80334674: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334678: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x8033467C: jal         0x8002A800
    // 0x80334680: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8002A800(rdram, ctx);
        goto after_2;
    // 0x80334680: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_2:
    // 0x80334684: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80334688: nop

    // 0x8033468C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334690: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80334694: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80334698: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033469C: nop

    // 0x803346A0: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x803346A4: nop

    // 0x803346A8: bc1t        L_803346DC
    if (c1cs) {
        // 0x803346AC: nop
    
            goto L_803346DC;
    }
    // 0x803346AC: nop

    // 0x803346B0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803346B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803346B8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803346BC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803346C0: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x803346C4: mul.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x803346C8: jal         0x80015538
    // 0x803346CC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803346CC: nop

    after_3:
    // 0x803346D0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803346D4: nop

    // 0x803346D8: swc1        $f0, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f0.u32l;
L_803346DC:
    // 0x803346DC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803346E0: nop

    // 0x803346E4: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803346E8: nop

    // 0x803346EC: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x803346F0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803346F4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803346F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803346FC: lwc1        $f10, 0x40($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80334700: nop

    // 0x80334704: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80334708: swc1        $f16, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f16.u32l;
    // 0x8033470C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80334710: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80334714: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334718: lwc1        $f18, 0x18($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X18);
    // 0x8033471C: nop

    // 0x80334720: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80334724: nop

    // 0x80334728: bc1f        L_8033474C
    if (!c1cs) {
        // 0x8033472C: nop
    
            goto L_8033474C;
    }
    // 0x8033472C: nop

    // 0x80334730: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80334734: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80334738: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033473C: lwc1        $f6, 0x18($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X18);
    // 0x80334740: nop

    // 0x80334744: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80334748: swc1        $f10, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f10.u32l;
L_8033474C:
    // 0x8033474C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334750: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334754: jal         0x8002A8B4
    // 0x80334758: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x80334758: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x8033475C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80334760: nop

    // 0x80334764: lwc1        $f16, 0x3C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80334768: nop

    // 0x8033476C: swc1        $f16, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f16.u32l;
    // 0x80334770: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80334774: nop

    // 0x80334778: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033477C: nop

    // 0x80334780: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x80334784: b           L_803347A4
    // 0x80334788: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
        goto L_803347A4;
    // 0x80334788: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_8033478C:
    // 0x8033478C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80334790: nop

    // 0x80334794: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80334798: nop

    // 0x8033479C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x803347A0: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_803347A4:
    // 0x803347A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347AC: jal         0x80028FA0
    // 0x803347B0: nop

    func_80028FA0(rdram, ctx);
        goto after_5;
    // 0x803347B0: nop

    after_5:
    // 0x803347B4: beq         $v0, $zero, L_803347D4
    if (ctx->r2 == 0) {
        // 0x803347B8: nop
    
            goto L_803347D4;
    }
    // 0x803347B8: nop

    // 0x803347BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347C4: jal         0x8002B0E4
    // 0x803347C8: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x803347C8: nop

    after_6:
    // 0x803347CC: b           L_8033491C
    // 0x803347D0: nop

        goto L_8033491C;
    // 0x803347D0: nop

L_803347D4:
    // 0x803347D4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x803347D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803347DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803347E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347E8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x803347EC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x803347F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803347F4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803347F8: jal         0x800295C0
    // 0x803347FC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x803347FC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x80334800: beq         $v0, $zero, L_80334820
    if (ctx->r2 == 0) {
        // 0x80334804: nop
    
            goto L_80334820;
    }
    // 0x80334804: nop

    // 0x80334808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033480C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334810: jal         0x8002B0E4
    // 0x80334814: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x80334814: nop

    after_8:
    // 0x80334818: b           L_8033491C
    // 0x8033481C: nop

        goto L_8033491C;
    // 0x8033481C: nop

L_80334820:
    // 0x80334820: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80334824: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334828: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033482C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334834: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80334838: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8033483C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334840: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80334844: jal         0x800295C0
    // 0x80334848: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x80334848: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x8033484C: beq         $v0, $zero, L_8033486C
    if (ctx->r2 == 0) {
        // 0x80334850: nop
    
            goto L_8033486C;
    }
    // 0x80334850: nop

    // 0x80334854: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334858: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033485C: jal         0x8002B0E4
    // 0x80334860: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x80334860: nop

    after_10:
    // 0x80334864: b           L_8033491C
    // 0x80334868: nop

        goto L_8033491C;
    // 0x80334868: nop

L_8033486C:
    // 0x8033486C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334870: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334874: jal         0x80029D8C
    // 0x80334878: nop

    func_80029D8C(rdram, ctx);
        goto after_11;
    // 0x80334878: nop

    after_11:
    // 0x8033487C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334880: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334888: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033488C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334890: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80334894: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334898: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033489C: jal         0x80029018
    // 0x803348A0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_12;
    // 0x803348A0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x803348A4: beq         $v0, $zero, L_803348C4
    if (ctx->r2 == 0) {
        // 0x803348A8: nop
    
            goto L_803348C4;
    }
    // 0x803348A8: nop

    // 0x803348AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803348B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803348B4: jal         0x8002B0E4
    // 0x803348B8: nop

    func_8002B0E4(rdram, ctx);
        goto after_13;
    // 0x803348B8: nop

    after_13:
    // 0x803348BC: b           L_8033491C
    // 0x803348C0: nop

        goto L_8033491C;
    // 0x803348C0: nop

L_803348C4:
    // 0x803348C4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803348C8: nop

    // 0x803348CC: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x803348D0: nop

    // 0x803348D4: bne         $t4, $zero, L_803348FC
    if (ctx->r12 != 0) {
        // 0x803348D8: nop
    
            goto L_803348FC;
    }
    // 0x803348D8: nop

    // 0x803348DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803348E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803348E4: jal         0x8002B0E4
    // 0x803348E8: nop

    func_8002B0E4(rdram, ctx);
        goto after_14;
    // 0x803348E8: nop

    after_14:
    // 0x803348EC: b           L_8033491C
    // 0x803348F0: nop

        goto L_8033491C;
    // 0x803348F0: nop

    // 0x803348F4: b           L_80334914
    // 0x803348F8: nop

        goto L_80334914;
    // 0x803348F8: nop

L_803348FC:
    // 0x803348FC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80334900: nop

    // 0x80334904: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x80334908: nop

    // 0x8033490C: addiu       $t8, $t5, -0x1
    ctx->r24 = ADD32(ctx->r13, -0X1);
    // 0x80334910: sh          $t8, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r24;
L_80334914:
    // 0x80334914: b           L_8033491C
    // 0x80334918: nop

        goto L_8033491C;
    // 0x80334918: nop

L_8033491C:
    // 0x8033491C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334920: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80334924: jr          $ra
    // 0x80334928: nop

    return;
    // 0x80334928: nop

;}
RECOMP_FUNC void func_80334510_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80334514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334518: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033451C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334520: jal         0x8002B0E4
    // 0x80334524: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80334524: nop

    after_0:
    // 0x80334528: b           L_80334530
    // 0x8033452C: nop

        goto L_80334530;
    // 0x8033452C: nop

L_80334530:
    // 0x80334530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80334538: jr          $ra
    // 0x8033453C: nop

    return;
    // 0x8033453C: nop

;}
RECOMP_FUNC void func_80332C94_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332C98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332C9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332CA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332CA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332CA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332CAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332CB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332CBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332CC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332CC4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332CC8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CCC: nop

    // 0x80332CD0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332CD4: nop

    // 0x80332CD8: bne         $t1, $zero, L_80332F00
    if (ctx->r9 != 0) {
        // 0x80332CDC: nop
    
            goto L_80332F00;
    }
    // 0x80332CDC: nop

    // 0x80332CE0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CE4: nop

    // 0x80332CE8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332CEC: nop

    // 0x80332CF0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332CF4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332CF8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CFC: nop

    // 0x80332D00: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332D04: nop

    // 0x80332D08: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332D0C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D10: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80332D14: sh          $t7, 0xC2($t8)
    MEM_H(0XC2, ctx->r24) = ctx->r15;
    // 0x80332D18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332D1C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D20: nop

    // 0x80332D24: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
    // 0x80332D28: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332D2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D30: nop

    // 0x80332D34: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x80332D38: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332D3C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D40: nop

    // 0x80332D44: swc1        $f8, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f8.u32l;
    // 0x80332D48: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80332D4C:
    // 0x80332D4C: jal         0x80014E80
    // 0x80332D50: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80332D50: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x80332D54: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80332D58: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D5C: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x80332D60: addu        $t6, $t3, $t2
    ctx->r14 = ADD32(ctx->r11, ctx->r10);
    // 0x80332D64: lh          $t5, 0xE8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XE8);
    // 0x80332D68: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80332D6C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332D70: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332D74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332D78: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80332D7C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332D80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332D84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332D88: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332D8C: swc1        $f16, 0x4180($at)
    MEM_W(0X4180, ctx->r1) = ctx->f16.u32l;
    // 0x80332D90: jal         0x80014E80
    // 0x80332D94: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80332D94: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_1:
    // 0x80332D98: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80332D9C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DA0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80332DA4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80332DA8: lh          $t4, 0xE8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XE8);
    // 0x80332DAC: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80332DB0: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80332DB4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80332DB8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332DBC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80332DC0: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80332DC4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332DC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332DCC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332DD0: swc1        $f4, 0x4184($at)
    MEM_W(0X4184, ctx->r1) = ctx->f4.u32l;
    // 0x80332DD4: jal         0x80014E80
    // 0x80332DD8: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80332DD8: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_2:
    // 0x80332DDC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80332DE0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DE4: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80332DE8: addu        $t7, $t2, $t5
    ctx->r15 = ADD32(ctx->r10, ctx->r13);
    // 0x80332DEC: lh          $t9, 0xE8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XE8);
    // 0x80332DF0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80332DF4: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80332DF8: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80332DFC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332E00: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332E04: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80332E08: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332E0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E10: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332E14: swc1        $f8, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f8.u32l;
    // 0x80332E18: jal         0x80014E80
    // 0x80332E1C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80332E1C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x80332E20: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80332E24: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E28: sll         $t4, $t1, 1
    ctx->r12 = S32(ctx->r9 << 1);
    // 0x80332E2C: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x80332E30: lh          $t6, 0xE8($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XE8);
    // 0x80332E34: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80332E38: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80332E3C: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80332E40: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332E44: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80332E48: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80332E4C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332E50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E54: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332E58: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80332E5C: jal         0x80014E80
    // 0x80332E60: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x80332E60: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_4:
    // 0x80332E64: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80332E68: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E6C: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80332E70: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x80332E74: lh          $t1, 0xE8($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XE8);
    // 0x80332E78: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x80332E7C: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80332E80: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80332E84: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332E88: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80332E8C: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80332E90: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332E94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E98: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332E9C: swc1        $f4, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f4.u32l;
    // 0x80332EA0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80332EA4: nop

    // 0x80332EA8: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x80332EAC: slti        $at, $t3, 0x9
    ctx->r1 = SIGNED(ctx->r11) < 0X9 ? 1 : 0;
    // 0x80332EB0: bne         $at, $zero, L_80332D4C
    if (ctx->r1 != 0) {
        // 0x80332EB4: sw          $t3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r11;
            goto L_80332D4C;
    }
    // 0x80332EB4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80332EB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EC0: jal         0x80029D8C
    // 0x80332EC4: nop

    func_80029D8C(rdram, ctx);
        goto after_5;
    // 0x80332EC4: nop

    after_5:
    // 0x80332EC8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80332ECC:
    // 0x80332ECC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80332ED0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332ED4: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x80332ED8: addu        $t5, $t6, $t7
    ctx->r13 = ADD32(ctx->r14, ctx->r15);
    // 0x80332EDC: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x80332EE0: jal         0x80029D8C
    // 0x80332EE4: nop

    func_80029D8C(rdram, ctx);
        goto after_6;
    // 0x80332EE4: nop

    after_6:
    // 0x80332EE8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80332EEC: nop

    // 0x80332EF0: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x80332EF4: slti        $at, $t8, 0x9
    ctx->r1 = SIGNED(ctx->r24) < 0X9 ? 1 : 0;
    // 0x80332EF8: bne         $at, $zero, L_80332ECC
    if (ctx->r1 != 0) {
        // 0x80332EFC: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_80332ECC;
    }
    // 0x80332EFC: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_80332F00:
    // 0x80332F00: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80332F04:
    // 0x80332F04: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80332F08: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F0C: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x80332F10: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x80332F14: lh          $t2, 0xE8($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XE8);
    // 0x80332F18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332F1C: beq         $t2, $at, L_80332F64
    if (ctx->r10 == ctx->r1) {
        // 0x80332F20: nop
    
            goto L_80332F64;
    }
    // 0x80332F20: nop

    // 0x80332F24: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80332F28: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F2C: sll         $t5, $t7, 1
    ctx->r13 = S32(ctx->r15 << 1);
    // 0x80332F30: addu        $t9, $t6, $t5
    ctx->r25 = ADD32(ctx->r14, ctx->r13);
    // 0x80332F34: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x80332F38: jal         0x80028FA0
    // 0x80332F3C: nop

    func_80028FA0(rdram, ctx);
        goto after_7;
    // 0x80332F3C: nop

    after_7:
    // 0x80332F40: beq         $v0, $zero, L_80332F64
    if (ctx->r2 == 0) {
        // 0x80332F44: nop
    
            goto L_80332F64;
    }
    // 0x80332F44: nop

    // 0x80332F48: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80332F4C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F50: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80332F54: addu        $t4, $t8, $t1
    ctx->r12 = ADD32(ctx->r24, ctx->r9);
    // 0x80332F58: lh          $a0, 0xE8($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XE8);
    // 0x80332F5C: jal         0x80029B60
    // 0x80332F60: nop

    func_80029B60(rdram, ctx);
        goto after_8;
    // 0x80332F60: nop

    after_8:
L_80332F64:
    // 0x80332F64: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80332F68: nop

    // 0x80332F6C: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x80332F70: slti        $at, $t2, 0x9
    ctx->r1 = SIGNED(ctx->r10) < 0X9 ? 1 : 0;
    // 0x80332F74: bne         $at, $zero, L_80332F04
    if (ctx->r1 != 0) {
        // 0x80332F78: sw          $t2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r10;
            goto L_80332F04;
    }
    // 0x80332F78: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80332F7C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80332F80:
    // 0x80332F80: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80332F84: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F88: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80332F8C: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x80332F90: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x80332F94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332F98: beq         $t0, $at, L_80333000
    if (ctx->r8 == ctx->r1) {
        // 0x80332F9C: nop
    
            goto L_80333000;
    }
    // 0x80332F9C: nop

    // 0x80332FA0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80332FA4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FA8: sll         $t4, $t1, 1
    ctx->r12 = S32(ctx->r9 << 1);
    // 0x80332FAC: addu        $t3, $t8, $t4
    ctx->r11 = ADD32(ctx->r24, ctx->r12);
    // 0x80332FB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332FB4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332FB8: lh          $a0, 0xE8($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XE8);
    // 0x80332FBC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332FC0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80332FC4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332FC8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332FCC: jal         0x80029018
    // 0x80332FD0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x80332FD0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x80332FD4: beq         $v0, $zero, L_80333000
    if (ctx->r2 == 0) {
        // 0x80332FD8: nop
    
            goto L_80333000;
    }
    // 0x80332FD8: nop

    // 0x80332FDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332FE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332FE4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80332FE8: jal         0x800281A4
    // 0x80332FEC: nop

    func_800281A4(rdram, ctx);
        goto after_10;
    // 0x80332FEC: nop

    after_10:
    // 0x80332FF0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80332FF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80332FF8: jal         0x8002B0E4
    // 0x80332FFC: nop

    func_8002B0E4(rdram, ctx);
        goto after_11;
    // 0x80332FFC: nop

    after_11:
L_80333000:
    // 0x80333000: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80333004: nop

    // 0x80333008: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x8033300C: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x80333010: bne         $at, $zero, L_80332F80
    if (ctx->r1 != 0) {
        // 0x80333014: sw          $t6, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r14;
            goto L_80332F80;
    }
    // 0x80333014: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80333018: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033301C: nop

    // 0x80333020: lh          $t5, 0xC2($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XC2);
    // 0x80333024: nop

    // 0x80333028: bne         $t5, $zero, L_803330A8
    if (ctx->r13 != 0) {
        // 0x8033302C: nop
    
            goto L_803330A8;
    }
    // 0x8033302C: nop

    // 0x80333030: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80333034:
    // 0x80333034: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80333038: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033303C: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80333040: addu        $t8, $t9, $t1
    ctx->r24 = ADD32(ctx->r25, ctx->r9);
    // 0x80333044: lh          $t4, 0xE8($t8)
    ctx->r12 = MEM_H(ctx->r24, 0XE8);
    // 0x80333048: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033304C: beq         $t4, $at, L_80333078
    if (ctx->r12 == ctx->r1) {
        // 0x80333050: nop
    
            goto L_80333078;
    }
    // 0x80333050: nop

    // 0x80333054: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333058: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033305C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80333060: jal         0x800281A4
    // 0x80333064: nop

    func_800281A4(rdram, ctx);
        goto after_12;
    // 0x80333064: nop

    after_12:
    // 0x80333068: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033306C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80333070: jal         0x8002B0E4
    // 0x80333074: nop

    func_8002B0E4(rdram, ctx);
        goto after_13;
    // 0x80333074: nop

    after_13:
L_80333078:
    // 0x80333078: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8033307C: nop

    // 0x80333080: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x80333084: slti        $at, $t2, 0x9
    ctx->r1 = SIGNED(ctx->r10) < 0X9 ? 1 : 0;
    // 0x80333088: bne         $at, $zero, L_80333034
    if (ctx->r1 != 0) {
        // 0x8033308C: sw          $t2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r10;
            goto L_80333034;
    }
    // 0x8033308C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80333090: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333094: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333098: jal         0x8002B0E4
    // 0x8033309C: nop

    func_8002B0E4(rdram, ctx);
        goto after_14;
    // 0x8033309C: nop

    after_14:
    // 0x803330A0: b           L_803330C0
    // 0x803330A4: nop

        goto L_803330C0;
    // 0x803330A4: nop

L_803330A8:
    // 0x803330A8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803330AC: nop

    // 0x803330B0: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x803330B4: nop

    // 0x803330B8: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x803330BC: sh          $t5, 0xC2($t6)
    MEM_H(0XC2, ctx->r14) = ctx->r13;
L_803330C0:
    // 0x803330C0: b           L_803330C8
    // 0x803330C4: nop

        goto L_803330C8;
    // 0x803330C4: nop

L_803330C8:
    // 0x803330C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803330CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803330D0: jr          $ra
    // 0x803330D4: nop

    return;
    // 0x803330D4: nop

;}
RECOMP_FUNC void func_80334430_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334438: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033443C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334440: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334444: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334448: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033444C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334450: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334454: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334458: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033445C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334460: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334464: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334468: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033446C: nop

    // 0x80334470: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80334474: nop

    // 0x80334478: bne         $t1, $zero, L_80334498
    if (ctx->r9 != 0) {
        // 0x8033447C: nop
    
            goto L_80334498;
    }
    // 0x8033447C: nop

    // 0x80334480: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334488: jal         0x8001BB34
    // 0x8033448C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033448C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80334490: b           L_803344C0
    // 0x80334494: nop

        goto L_803344C0;
    // 0x80334494: nop

L_80334498:
    // 0x80334498: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033449C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803344A0: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x803344A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803344A8: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x803344AC: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803344B0: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803344B4: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x803344B8: jal         0x8001BB34
    // 0x803344BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803344BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_803344C0:
    // 0x803344C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803344C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803344C8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803344CC: nop

    // 0x803344D0: bne         $t6, $at, L_803344F0
    if (ctx->r14 != ctx->r1) {
        // 0x803344D4: nop
    
            goto L_803344F0;
    }
    // 0x803344D4: nop

    // 0x803344D8: b           L_803344E0
    // 0x803344DC: nop

        goto L_803344E0;
    // 0x803344DC: nop

L_803344E0:
    // 0x803344E0: jal         0x80334054
    // 0x803344E4: nop

    func_80334054_unk_bin_15(rdram, ctx);
        goto after_2;
    // 0x803344E4: nop

    after_2:
    // 0x803344E8: b           L_803344F8
    // 0x803344EC: nop

        goto L_803344F8;
    // 0x803344EC: nop

L_803344F0:
    // 0x803344F0: b           L_803344F8
    // 0x803344F4: nop

        goto L_803344F8;
    // 0x803344F4: nop

L_803344F8:
    // 0x803344F8: b           L_80334500
    // 0x803344FC: nop

        goto L_80334500;
    // 0x803344FC: nop

L_80334500:
    // 0x80334500: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334504: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334508: jr          $ra
    // 0x8033450C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033450C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803339E8_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803339E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803339EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803339F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803339F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803339F8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x803339FC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80333A00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333A08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333A0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333A10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333A14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333A18: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333A1C: lwc1        $f4, 0x418C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80333A20: nop

    // 0x80333A24: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80333A28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333A2C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80333A30: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80333A34: jal         0x80333AE4
    // 0x80333A38: nop

    func_80333AE4_unk_bin_15(rdram, ctx);
        goto after_0;
    // 0x80333A38: nop

    after_0:
    // 0x80333A3C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80333A40: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80333A44: nop

    // 0x80333A48: bgez        $t8, L_80333A68
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80333A4C: nop
    
            goto L_80333A68;
    }
    // 0x80333A4C: nop

    // 0x80333A50: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333A54: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333A58: jal         0x80015538
    // 0x80333A5C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80333A5C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x80333A60: b           L_80333AA4
    // 0x80333A64: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_80333AA4;
    // 0x80333A64: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_80333A68:
    // 0x80333A68: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80333A6C: nop

    // 0x80333A70: blez        $t9, L_80333A90
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80333A74: nop
    
            goto L_80333A90;
    }
    // 0x80333A74: nop

    // 0x80333A78: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333A7C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333A80: jal         0x80015538
    // 0x80333A84: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80333A84: nop

    after_2:
    // 0x80333A88: b           L_80333AA4
    // 0x80333A8C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_80333AA4;
    // 0x80333A8C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_80333A90:
    // 0x80333A90: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333A94: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80333A98: jal         0x80333BCC
    // 0x80333A9C: nop

    func_80333BCC_unk_bin_15(rdram, ctx);
        goto after_3;
    // 0x80333A9C: nop

    after_3:
    // 0x80333AA0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_80333AA4:
    // 0x80333AA4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80333AA8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333AAC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333AB0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333AB4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333AB8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333ABC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333AC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333AC4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333AC8: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x80333ACC: b           L_80333AD4
    // 0x80333AD0: nop

        goto L_80333AD4;
    // 0x80333AD0: nop

L_80333AD4:
    // 0x80333AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333AD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333ADC: jr          $ra
    // 0x80333AE0: nop

    return;
    // 0x80333AE0: nop

;}
RECOMP_FUNC void func_80330ABC_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330ABC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80330AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80330AC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330AC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330ACC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330AD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330AD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330AD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330ADC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330AE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330AE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330AE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330AEC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330AF0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AF4: nop

    // 0x80330AF8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330AFC: nop

    // 0x80330B00: bne         $t1, $zero, L_80330B34
    if (ctx->r9 != 0) {
        // 0x80330B04: nop
    
            goto L_80330B34;
    }
    // 0x80330B04: nop

    // 0x80330B08: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B0C: nop

    // 0x80330B10: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330B14: nop

    // 0x80330B18: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330B1C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330B20: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B24: nop

    // 0x80330B28: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330B2C: nop

    // 0x80330B30: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80330B34:
    // 0x80330B34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B3C: jal         0x8002A2EC
    // 0x80330B40: lui         $a1, 0x4516
    ctx->r5 = S32(0X4516 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x80330B40: lui         $a1, 0x4516
    ctx->r5 = S32(0X4516 << 16);
    after_0:
    // 0x80330B44: beq         $v0, $zero, L_80330B64
    if (ctx->r2 == 0) {
        // 0x80330B48: nop
    
            goto L_80330B64;
    }
    // 0x80330B48: nop

    // 0x80330B4C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B50: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80330B54: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80330B58: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B5C: b           L_80330BB8
    // 0x80330B60: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_80330BB8;
    // 0x80330B60: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80330B64:
    // 0x80330B64: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80330B68: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80330B6C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B70: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330B74: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80330B78: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330B7C: lwc1        $f10, 0x49D8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X49D8);
    // 0x80330B80: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330B84: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80330B88: nop

    // 0x80330B8C: bc1f        L_80330BB8
    if (!c1cs) {
        // 0x80330B90: nop
    
            goto L_80330BB8;
    }
    // 0x80330B90: nop

    // 0x80330B94: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80330B98: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80330B9C: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
    // 0x80330BA0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BA4: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x80330BA8: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80330BAC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BB0: nop

    // 0x80330BB4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80330BB8:
    // 0x80330BB8: b           L_80330BC0
    // 0x80330BBC: nop

        goto L_80330BC0;
    // 0x80330BBC: nop

L_80330BC0:
    // 0x80330BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330BC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330BC8: jr          $ra
    // 0x80330BCC: nop

    return;
    // 0x80330BCC: nop

;}
RECOMP_FUNC void func_80333ED4_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333ED4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333EDC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80333EE0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80333EE4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80333EE8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80333EEC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80333EF0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80333EF4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80333EF8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80333EFC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80333F00: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80333F04: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80333F08: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80333F0C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80333F10: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80333F14: addiu       $a1, $a1, 0x4930
    ctx->r5 = ADD32(ctx->r5, 0X4930);
    // 0x80333F18: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80333F1C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80333F20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333F24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80333F28: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80333F2C: jal         0x80027464
    // 0x80333F30: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80333F30: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80333F34: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80333F38: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333F40: beq         $t1, $at, L_80333FC0
    if (ctx->r9 == ctx->r1) {
        // 0x80333F44: nop
    
            goto L_80333FC0;
    }
    // 0x80333F44: nop

    // 0x80333F48: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80333F4C: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80333F50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333F54: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80333F58: nop

    // 0x80333F5C: bne         $t3, $at, L_80333F90
    if (ctx->r11 != ctx->r1) {
        // 0x80333F60: nop
    
            goto L_80333F90;
    }
    // 0x80333F60: nop

    // 0x80333F64: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F68: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333F6C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333F70: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333F74: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333F78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333F7C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333F80: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333F84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F88: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333F8C: swc1        $f4, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f4.u32l;
L_80333F90:
    // 0x80333F90: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F94: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80333F98: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80333F9C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333FA0: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80333FA4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333FA8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80333FAC: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x80333FB0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333FB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333FB8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333FBC: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
L_80333FC0:
    // 0x80333FC0: b           L_80333FC8
    // 0x80333FC4: nop

        goto L_80333FC8;
    // 0x80333FC4: nop

L_80333FC8:
    // 0x80333FC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333FCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80333FD0: jr          $ra
    // 0x80333FD4: nop

    return;
    // 0x80333FD4: nop

;}
RECOMP_FUNC void func_803330D8_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803330D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803330DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803330E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803330E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803330E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803330EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803330F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803330F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803330FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333100: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333104: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333108: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033310C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333110: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333114: nop

    // 0x80333118: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x8033311C: nop

    // 0x80333120: bne         $t1, $zero, L_80333178
    if (ctx->r9 != 0) {
        // 0x80333124: nop
    
            goto L_80333178;
    }
    // 0x80333124: nop

    // 0x80333128: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033312C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333130: jal         0x8001BB34
    // 0x80333134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80333134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80333138: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8033313C:
    // 0x8033313C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80333140: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333144: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80333148: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8033314C: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x80333150: jal         0x8001BB34
    // 0x80333154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80333154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333158: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8033315C: nop

    // 0x80333160: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80333164: slti        $at, $t7, 0x9
    ctx->r1 = SIGNED(ctx->r15) < 0X9 ? 1 : 0;
    // 0x80333168: bne         $at, $zero, L_8033313C
    if (ctx->r1 != 0) {
        // 0x8033316C: sw          $t7, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r15;
            goto L_8033313C;
    }
    // 0x8033316C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80333170: b           L_8033320C
    // 0x80333174: nop

        goto L_8033320C;
    // 0x80333174: nop

L_80333178:
    // 0x80333178: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033317C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333180: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80333184: nop

    // 0x80333188: bne         $t9, $at, L_80333198
    if (ctx->r25 != ctx->r1) {
        // 0x8033318C: nop
    
            goto L_80333198;
    }
    // 0x8033318C: nop

    // 0x80333190: b           L_8033320C
    // 0x80333194: nop

        goto L_8033320C;
    // 0x80333194: nop

L_80333198:
    // 0x80333198: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033319C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331A0: lh          $s0, 0x108($t0)
    ctx->r16 = MEM_H(ctx->r8, 0X108);
    // 0x803331A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331A8: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x803331AC: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x803331B0: sltiu       $t3, $s0, 0x1
    ctx->r11 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803331B4: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803331B8: jal         0x8001BB34
    // 0x803331BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x803331BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x803331C0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_803331C4:
    // 0x803331C4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803331C8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803331CC: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x803331D0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x803331D4: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x803331D8: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x803331DC: sltiu       $t5, $s0, 0x1
    ctx->r13 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803331E0: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x803331E4: lh          $a0, 0xE8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XE8);
    // 0x803331E8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x803331EC: jal         0x8001BB34
    // 0x803331F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x803331F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x803331F4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x803331F8: nop

    // 0x803331FC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80333200: slti        $at, $t0, 0x9
    ctx->r1 = SIGNED(ctx->r8) < 0X9 ? 1 : 0;
    // 0x80333204: bne         $at, $zero, L_803331C4
    if (ctx->r1 != 0) {
        // 0x80333208: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_803331C4;
    }
    // 0x80333208: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_8033320C:
    // 0x8033320C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333210: nop

    // 0x80333214: lh          $t3, 0xA4($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA4);
    // 0x80333218: nop

    // 0x8033321C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80333220: sltiu       $at, $t4, 0xA
    ctx->r1 = ctx->r12 < 0XA ? 1 : 0;
    // 0x80333224: beq         $at, $zero, L_803332E8
    if (ctx->r1 == 0) {
        // 0x80333228: nop
    
            goto L_803332E8;
    }
    // 0x80333228: nop

    // 0x8033322C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333230: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333234: addu        $at, $at, $t4
    gpr jr_addend_80333240 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333238: lw          $t4, 0x4A14($at)
    ctx->r12 = ADD32(ctx->r1, 0X4A14);
    // 0x8033323C: nop

    // 0x80333240: jr          $t4
    // 0x80333244: nop

    switch (jr_addend_80333240 >> 2) {
        case 0: goto L_80333248; break;
        case 1: goto L_80333258; break;
        case 2: goto L_80333268; break;
        case 3: goto L_80333278; break;
        case 4: goto L_80333288; break;
        case 5: goto L_80333298; break;
        case 6: goto L_803332A8; break;
        case 7: goto L_803332B8; break;
        case 8: goto L_803332C8; break;
        case 9: goto L_803332D8; break;
        default: switch_error(__func__, 0x80333240, 0x80334A14);
    }
    // 0x80333244: nop

L_80333248:
    // 0x80333248: jal         0x80330ABC
    // 0x8033324C: nop

    func_80330ABC_unk_bin_15(rdram, ctx);
        goto after_4;
    // 0x8033324C: nop

    after_4:
    // 0x80333250: b           L_803332F0
    // 0x80333254: nop

        goto L_803332F0;
    // 0x80333254: nop

L_80333258:
    // 0x80333258: jal         0x80330BD0
    // 0x8033325C: nop

    func_80330BD0_unk_bin_15(rdram, ctx);
        goto after_5;
    // 0x8033325C: nop

    after_5:
    // 0x80333260: b           L_803332F0
    // 0x80333264: nop

        goto L_803332F0;
    // 0x80333264: nop

L_80333268:
    // 0x80333268: jal         0x80330E40
    // 0x8033326C: nop

    func_80330E40_unk_bin_15(rdram, ctx);
        goto after_6;
    // 0x8033326C: nop

    after_6:
    // 0x80333270: b           L_803332F0
    // 0x80333274: nop

        goto L_803332F0;
    // 0x80333274: nop

L_80333278:
    // 0x80333278: jal         0x80331260
    // 0x8033327C: nop

    func_80331260_unk_bin_15(rdram, ctx);
        goto after_7;
    // 0x8033327C: nop

    after_7:
    // 0x80333280: b           L_803332F0
    // 0x80333284: nop

        goto L_803332F0;
    // 0x80333284: nop

L_80333288:
    // 0x80333288: jal         0x80331708
    // 0x8033328C: nop

    func_80331708_unk_bin_15(rdram, ctx);
        goto after_8;
    // 0x8033328C: nop

    after_8:
    // 0x80333290: b           L_803332F0
    // 0x80333294: nop

        goto L_803332F0;
    // 0x80333294: nop

L_80333298:
    // 0x80333298: jal         0x80331E70
    // 0x8033329C: nop

    func_80331E70_unk_bin_15(rdram, ctx);
        goto after_9;
    // 0x8033329C: nop

    after_9:
    // 0x803332A0: b           L_803332F0
    // 0x803332A4: nop

        goto L_803332F0;
    // 0x803332A4: nop

L_803332A8:
    // 0x803332A8: jal         0x80332058
    // 0x803332AC: nop

    func_80332058_unk_bin_15(rdram, ctx);
        goto after_10;
    // 0x803332AC: nop

    after_10:
    // 0x803332B0: b           L_803332F0
    // 0x803332B4: nop

        goto L_803332F0;
    // 0x803332B4: nop

L_803332B8:
    // 0x803332B8: jal         0x8033226C
    // 0x803332BC: nop

    func_8033226C_unk_bin_15(rdram, ctx);
        goto after_11;
    // 0x803332BC: nop

    after_11:
    // 0x803332C0: b           L_803332F0
    // 0x803332C4: nop

        goto L_803332F0;
    // 0x803332C4: nop

L_803332C8:
    // 0x803332C8: jal         0x803325F8
    // 0x803332CC: nop

    func_803325F8_unk_bin_15(rdram, ctx);
        goto after_12;
    // 0x803332CC: nop

    after_12:
    // 0x803332D0: b           L_803332F0
    // 0x803332D4: nop

        goto L_803332F0;
    // 0x803332D4: nop

L_803332D8:
    // 0x803332D8: jal         0x80332C94
    // 0x803332DC: nop

    func_80332C94_unk_bin_15(rdram, ctx);
        goto after_13;
    // 0x803332DC: nop

    after_13:
    // 0x803332E0: b           L_803332F0
    // 0x803332E4: nop

        goto L_803332F0;
    // 0x803332E4: nop

L_803332E8:
    // 0x803332E8: b           L_803332F0
    // 0x803332EC: nop

        goto L_803332F0;
    // 0x803332EC: nop

L_803332F0:
    // 0x803332F0: b           L_803332F8
    // 0x803332F4: nop

        goto L_803332F8;
    // 0x803332F4: nop

L_803332F8:
    // 0x803332F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803332FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333300: jr          $ra
    // 0x80333304: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80333304: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331260_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331268: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033126C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331270: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331274: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331278: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033127C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331280: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331284: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331288: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033128C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331290: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331294: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331298: nop

    // 0x8033129C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803312A0: nop

    // 0x803312A4: bne         $t1, $zero, L_803312D8
    if (ctx->r9 != 0) {
        // 0x803312A8: nop
    
            goto L_803312D8;
    }
    // 0x803312A8: nop

    // 0x803312AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803312B0: nop

    // 0x803312B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803312B8: nop

    // 0x803312BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803312C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803312C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803312C8: nop

    // 0x803312CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803312D0: nop

    // 0x803312D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_803312D8:
    // 0x803312D8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803312DC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x803312E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803312E4: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803312E8: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x803312EC: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x803312F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803312F4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803312F8: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x803312FC: nop

    // 0x80331300: bc1f        L_803313B0
    if (!c1cs) {
        // 0x80331304: nop
    
            goto L_803313B0;
    }
    // 0x80331304: nop

    // 0x80331308: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033130C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331310: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331314: nop

    // 0x80331318: swc1        $f16, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f16.u32l;
    // 0x8033131C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80331320:
    // 0x80331320: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80331324: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331328: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x8033132C: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x80331330: lh          $t2, 0xE8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XE8);
    // 0x80331334: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331338: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8033133C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80331340: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331344: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331348: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033134C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331350: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331354: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331358: swc1        $f18, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f18.u32l;
    // 0x8033135C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80331360: nop

    // 0x80331364: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80331368: slti        $at, $t7, 0x9
    ctx->r1 = SIGNED(ctx->r15) < 0X9 ? 1 : 0;
    // 0x8033136C: bne         $at, $zero, L_80331320
    if (ctx->r1 != 0) {
        // 0x80331370: sw          $t7, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r15;
            goto L_80331320;
    }
    // 0x80331370: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80331374: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331378: nop

    // 0x8033137C: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x80331380: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331384: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80331388: sh          $t9, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r25;
    // 0x8033138C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331390: nop

    // 0x80331394: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80331398: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033139C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313A0: jal         0x8001BBDC
    // 0x803313A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x803313A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803313A8: b           L_803316A0
    // 0x803313AC: nop

        goto L_803316A0;
    // 0x803313AC: nop

L_803313B0:
    // 0x803313B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803313B4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x803313B8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803313BC: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x803313C0: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803313C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803313C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803313CC: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x803313D0: nop

    // 0x803313D4: bc1f        L_80331490
    if (!c1cs) {
        // 0x803313D8: nop
    
            goto L_80331490;
    }
    // 0x803313D8: nop

    // 0x803313DC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803313E0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803313E4: nop

    // 0x803313E8: swc1        $f16, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f16.u32l;
    // 0x803313EC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803313F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803313F4: nop

    // 0x803313F8: swc1        $f18, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f18.u32l;
    // 0x803313FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331400: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331404: nop

    // 0x80331408: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
    // 0x8033140C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331410: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331414: nop

    // 0x80331418: swc1        $f6, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f6.u32l;
    // 0x8033141C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80331420: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331424: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331428: nop

    // 0x8033142C: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x80331430: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80331434:
    // 0x80331434: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80331438: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033143C: sll         $t0, $t1, 1
    ctx->r8 = S32(ctx->r9 << 1);
    // 0x80331440: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x80331444: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x80331448: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8033144C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80331450: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331454: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331458: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033145C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331460: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331464: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331468: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033146C: swc1        $f10, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f10.u32l;
    // 0x80331470: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80331474: nop

    // 0x80331478: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x8033147C: slti        $at, $t5, 0x9
    ctx->r1 = SIGNED(ctx->r13) < 0X9 ? 1 : 0;
    // 0x80331480: bne         $at, $zero, L_80331434
    if (ctx->r1 != 0) {
        // 0x80331484: sw          $t5, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r13;
            goto L_80331434;
    }
    // 0x80331484: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x80331488: b           L_803316A0
    // 0x8033148C: nop

        goto L_803316A0;
    // 0x8033148C: nop

L_80331490:
    // 0x80331490: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80331494: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80331498: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033149C: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x803314A0: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x803314A4: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803314A8: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803314AC: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x803314B0: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x803314B4: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x803314B8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803314BC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803314C0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803314C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803314C8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803314CC: addiu       $t1, $sp, 0x20
    ctx->r9 = ADD32(ctx->r29, 0X20);
    // 0x803314D0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803314D4: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x803314D8: jal         0x800158B4
    // 0x803314DC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800158B4(rdram, ctx);
        goto after_1;
    // 0x803314DC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_1:
    // 0x803314E0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803314E4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803314E8: nop

    // 0x803314EC: swc1        $f6, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f6.u32l;
    // 0x803314F0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803314F4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803314F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803314FC: lwc1        $f8, 0x40($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80331500: nop

    // 0x80331504: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80331508: nop

    // 0x8033150C: bc1f        L_80331550
    if (!c1cs) {
        // 0x80331510: nop
    
            goto L_80331550;
    }
    // 0x80331510: nop

    // 0x80331514: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331518: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033151C: nop

    // 0x80331520: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x80331524: nop

    // 0x80331528: bc1f        L_80331550
    if (!c1cs) {
        // 0x8033152C: nop
    
            goto L_80331550;
    }
    // 0x8033152C: nop

    // 0x80331530: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331534: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331538: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033153C: lwc1        $f4, 0x40($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80331540: nop

    // 0x80331544: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80331548: b           L_803315AC
    // 0x8033154C: swc1        $f6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f6.u32l;
        goto L_803315AC;
    // 0x8033154C: swc1        $f6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f6.u32l;
L_80331550:
    // 0x80331550: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331554: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331558: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033155C: lwc1        $f10, 0x40($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80331560: nop

    // 0x80331564: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80331568: nop

    // 0x8033156C: bc1f        L_803315AC
    if (!c1cs) {
        // 0x80331570: nop
    
            goto L_803315AC;
    }
    // 0x80331570: nop

    // 0x80331574: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80331578: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033157C: nop

    // 0x80331580: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80331584: nop

    // 0x80331588: bc1f        L_803315AC
    if (!c1cs) {
        // 0x8033158C: nop
    
            goto L_803315AC;
    }
    // 0x8033158C: nop

    // 0x80331590: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331594: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80331598: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033159C: lwc1        $f4, 0x40($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X40);
    // 0x803315A0: nop

    // 0x803315A4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803315A8: swc1        $f6, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f6.u32l;
L_803315AC:
    // 0x803315AC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803315B0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803315B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803315B8: lwc1        $f10, 0x40($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X40);
    // 0x803315BC: nop

    // 0x803315C0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x803315C4: swc1        $f16, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f16.u32l;
    // 0x803315C8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803315CC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803315D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803315D4: lwc1        $f18, 0x18($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X18);
    // 0x803315D8: nop

    // 0x803315DC: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x803315E0: nop

    // 0x803315E4: bc1f        L_80331608
    if (!c1cs) {
        // 0x803315E8: nop
    
            goto L_80331608;
    }
    // 0x803315E8: nop

    // 0x803315EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803315F0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803315F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803315F8: lwc1        $f6, 0x18($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X18);
    // 0x803315FC: nop

    // 0x80331600: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80331604: swc1        $f10, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f10.u32l;
L_80331608:
    // 0x80331608: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033160C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331610: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331614: lw          $a1, 0xD4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0XD4);
    // 0x80331618: jal         0x8002A8B4
    // 0x8033161C: nop

    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x8033161C: nop

    after_2:
    // 0x80331620: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331624: nop

    // 0x80331628: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8033162C: nop

    // 0x80331630: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    // 0x80331634: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331638: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033163C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331640: nop

    // 0x80331644: swc1        $f18, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f18.u32l;
    // 0x80331648: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8033164C:
    // 0x8033164C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80331650: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331654: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80331658: addu        $t2, $t0, $t4
    ctx->r10 = ADD32(ctx->r8, ctx->r12);
    // 0x8033165C: lh          $t6, 0xE8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XE8);
    // 0x80331660: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331664: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80331668: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033166C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331670: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331674: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331678: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033167C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331680: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331684: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x80331688: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8033168C: nop

    // 0x80331690: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331694: slti        $at, $t8, 0x9
    ctx->r1 = SIGNED(ctx->r24) < 0X9 ? 1 : 0;
    // 0x80331698: bne         $at, $zero, L_8033164C
    if (ctx->r1 != 0) {
        // 0x8033169C: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_8033164C;
    }
    // 0x8033169C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_803316A0:
    // 0x803316A0: jal         0x80333308
    // 0x803316A4: nop

    func_80333308_unk_bin_15(rdram, ctx);
        goto after_3;
    // 0x803316A4: nop

    after_3:
    // 0x803316A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316B0: jal         0x80029D8C
    // 0x803316B4: nop

    func_80029D8C(rdram, ctx);
        goto after_4;
    // 0x803316B4: nop

    after_4:
    // 0x803316B8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_803316BC:
    // 0x803316BC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x803316C0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803316C4: sll         $t3, $t9, 1
    ctx->r11 = S32(ctx->r25 << 1);
    // 0x803316C8: addu        $t0, $t1, $t3
    ctx->r8 = ADD32(ctx->r9, ctx->r11);
    // 0x803316CC: lh          $a0, 0xE8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XE8);
    // 0x803316D0: jal         0x80029D8C
    // 0x803316D4: nop

    func_80029D8C(rdram, ctx);
        goto after_5;
    // 0x803316D4: nop

    after_5:
    // 0x803316D8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x803316DC: nop

    // 0x803316E0: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x803316E4: slti        $at, $t2, 0x9
    ctx->r1 = SIGNED(ctx->r10) < 0X9 ? 1 : 0;
    // 0x803316E8: bne         $at, $zero, L_803316BC
    if (ctx->r1 != 0) {
        // 0x803316EC: sw          $t2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r10;
            goto L_803316BC;
    }
    // 0x803316EC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x803316F0: b           L_803316F8
    // 0x803316F4: nop

        goto L_803316F8;
    // 0x803316F4: nop

L_803316F8:
    // 0x803316F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803316FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331700: jr          $ra
    // 0x80331704: nop

    return;
    // 0x80331704: nop

;}
RECOMP_FUNC void func_803325F8_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803325F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803325FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332600: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332604: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332608: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033260C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332610: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332614: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332618: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033261C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332620: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332624: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332628: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033262C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332630: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80332634: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332638: nop

    // 0x8033263C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332640: nop

    // 0x80332644: bne         $t1, $zero, L_8033269C
    if (ctx->r9 != 0) {
        // 0x80332648: nop
    
            goto L_8033269C;
    }
    // 0x80332648: nop

    // 0x8033264C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332650: nop

    // 0x80332654: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332658: nop

    // 0x8033265C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332660: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332664: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332668: nop

    // 0x8033266C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332670: nop

    // 0x80332674: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332678: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033267C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332680: addiu       $t7, $t7, -0x52BC
    ctx->r15 = ADD32(ctx->r15, -0X52BC);
    // 0x80332684: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332688: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033268C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332690: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80332694: jal         0x8001C0EC
    // 0x80332698: addiu       $a3, $zero, 0x111
    ctx->r7 = ADD32(0, 0X111);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332698: addiu       $a3, $zero, 0x111
    ctx->r7 = ADD32(0, 0X111);
    after_0:
L_8033269C:
    // 0x8033269C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326A4: jal         0x8001BB34
    // 0x803326A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803326A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x803326AC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_803326B0:
    // 0x803326B0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x803326B4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803326B8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x803326BC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x803326C0: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x803326C4: jal         0x8001BB34
    // 0x803326C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x803326C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803326CC: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x803326D0: nop

    // 0x803326D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803326D8: slti        $at, $t4, 0x9
    ctx->r1 = SIGNED(ctx->r12) < 0X9 ? 1 : 0;
    // 0x803326DC: bne         $at, $zero, L_803326B0
    if (ctx->r1 != 0) {
        // 0x803326E0: sw          $t4, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r12;
            goto L_803326B0;
    }
    // 0x803326E0: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x803326E4: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x803326E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803326EC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803326F0: nop

    // 0x803326F4: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x803326F8: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x803326FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332700: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332704: nop

    // 0x80332708: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x8033270C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80332710: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80332714: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80332718: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033271C: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80332720: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332724: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80332728: swc1        $f16, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f16.u32l;
    // 0x8033272C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332730: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332734: nop

    // 0x80332738: swc1        $f18, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f18.u32l;
    // 0x8033273C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332740: nop

    // 0x80332744: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332748: nop

    // 0x8033274C: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x80332750: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332754: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332758: nop

    // 0x8033275C: swc1        $f6, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f6.u32l;
    // 0x80332760: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332764: nop

    // 0x80332768: lwc1        $f20, 0x20($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X20);
    // 0x8033276C: nop

    // 0x80332770: swc1        $f20, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f20.u32l;
    // 0x80332774: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332778: nop

    // 0x8033277C: swc1        $f20, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f20.u32l;
    // 0x80332780: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332784: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332788: nop

    // 0x8033278C: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
    // 0x80332790: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332794: nop

    // 0x80332798: sh          $zero, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = 0;
    // 0x8033279C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_803327A0:
    // 0x803327A0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x803327A4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803327A8: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x803327AC: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x803327B0: lh          $t8, 0xE8($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XE8);
    // 0x803327B4: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x803327B8: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x803327BC: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x803327C0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803327C4: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x803327C8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803327CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327D0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803327D4: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x803327D8: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x803327DC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803327E0: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x803327E4: addu        $t2, $t1, $t4
    ctx->r10 = ADD32(ctx->r9, ctx->r12);
    // 0x803327E8: lh          $t5, 0xE8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XE8);
    // 0x803327EC: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x803327F0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803327F4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803327F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803327FC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80332800: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332804: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332808: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033280C: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x80332810: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80332814: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332818: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x8033281C: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80332820: lh          $t3, 0xE8($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XE8);
    // 0x80332824: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80332828: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x8033282C: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80332830: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332834: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80332838: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033283C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332840: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332844: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80332848: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8033284C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332850: sll         $t5, $t2, 1
    ctx->r13 = S32(ctx->r10 << 1);
    // 0x80332854: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80332858: lh          $t9, 0xE8($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XE8);
    // 0x8033285C: lwc1        $f4, 0x18($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X18);
    // 0x80332860: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80332864: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80332868: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033286C: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80332870: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332874: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332878: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033287C: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
    // 0x80332880: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80332884: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332888: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x8033288C: addu        $t1, $t8, $t3
    ctx->r9 = ADD32(ctx->r24, ctx->r11);
    // 0x80332890: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x80332894: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332898: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8033289C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803328A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803328A4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803328A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803328AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803328B0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803328B4: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x803328B8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x803328BC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803328C0: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x803328C4: addu        $t7, $t5, $t9
    ctx->r15 = ADD32(ctx->r13, ctx->r25);
    // 0x803328C8: lh          $t0, 0xE8($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XE8);
    // 0x803328CC: lwc1        $f8, 0x20($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X20);
    // 0x803328D0: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x803328D4: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803328D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803328DC: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803328E0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803328E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803328E8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803328EC: swc1        $f8, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f8.u32l;
    // 0x803328F0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x803328F4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803328F8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x803328FC: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80332900: lh          $t6, 0xE8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XE8);
    // 0x80332904: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80332908: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8033290C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332910: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332914: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332918: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033291C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332920: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332924: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80332928: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8033292C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332930: sll         $t0, $t7, 1
    ctx->r8 = S32(ctx->r15 << 1);
    // 0x80332934: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80332938: lh          $t1, 0xE8($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XE8);
    // 0x8033293C: lwc1        $f16, 0x44($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80332940: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332944: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332948: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033294C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332950: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332954: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332958: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033295C: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80332960: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80332964: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332968: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x8033296C: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x80332970: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x80332974: lwc1        $f18, 0x40($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X40);
    // 0x80332978: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8033297C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332980: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332984: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332988: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033298C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332990: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332994: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x80332998: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8033299C: nop

    // 0x803329A0: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x803329A4: slti        $at, $t8, 0x9
    ctx->r1 = SIGNED(ctx->r24) < 0X9 ? 1 : 0;
    // 0x803329A8: bne         $at, $zero, L_803327A0
    if (ctx->r1 != 0) {
        // 0x803329AC: sw          $t8, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r24;
            goto L_803327A0;
    }
    // 0x803329AC: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x803329B0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803329B4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803329B8: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x803329BC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803329C0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803329C4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803329C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803329CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803329D0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803329D4: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x803329D8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x803329DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803329E0: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x803329E4: nop

    // 0x803329E8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803329EC: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x803329F0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803329F4: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803329F8: lh          $t7, 0xEA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEA);
    // 0x803329FC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80332A00: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332A04: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332A08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332A0C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332A10: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332A14: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80332A18: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80332A1C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332A20: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80332A24: nop

    // 0x80332A28: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80332A2C: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x80332A30: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332A34: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80332A38: lh          $t3, 0xEC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XEC);
    // 0x80332A3C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80332A40: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332A44: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332A48: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332A4C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332A50: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332A54: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x80332A58: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80332A5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332A60: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80332A64: nop

    // 0x80332A68: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332A6C: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x80332A70: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332A74: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332A78: lh          $t7, 0xEE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEE);
    // 0x80332A7C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80332A80: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332A84: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332A88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332A8C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332A90: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332A94: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80332A98: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332A9C: lwc1        $f16, 0x4A00($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A00);
    // 0x80332AA0: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80332AA4: nop

    // 0x80332AA8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80332AAC: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x80332AB0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332AB4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80332AB8: lh          $t3, 0xF0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XF0);
    // 0x80332ABC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80332AC0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332AC4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332AC8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332ACC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332AD0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332AD4: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x80332AD8: lui         $at, 0x443E
    ctx->r1 = S32(0X443E << 16);
    // 0x80332ADC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332AE0: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80332AE4: nop

    // 0x80332AE8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332AEC: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x80332AF0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332AF4: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332AF8: lh          $t7, 0xF2($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XF2);
    // 0x80332AFC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80332B00: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332B04: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332B08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332B0C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332B10: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332B14: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80332B18: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332B1C: lwc1        $f16, 0x4A04($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A04);
    // 0x80332B20: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80332B24: nop

    // 0x80332B28: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80332B2C: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x80332B30: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B34: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80332B38: lh          $t3, 0xF4($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XF4);
    // 0x80332B3C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80332B40: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332B44: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332B48: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332B4C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332B50: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332B54: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x80332B58: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332B5C: lwc1        $f6, 0x4A08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4A08);
    // 0x80332B60: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80332B64: nop

    // 0x80332B68: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332B6C: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x80332B70: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B74: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332B78: lh          $t7, 0xF6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XF6);
    // 0x80332B7C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80332B80: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332B84: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332B88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332B8C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332B90: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332B94: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80332B98: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332B9C: lwc1        $f16, 0x4A0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A0C);
    // 0x80332BA0: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80332BA4: nop

    // 0x80332BA8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80332BAC: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x80332BB0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332BB4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80332BB8: lh          $t3, 0xF8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XF8);
    // 0x80332BBC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80332BC0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332BC4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332BC8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332BCC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332BD0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332BD4: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x80332BD8: lui         $at, 0x44AA
    ctx->r1 = S32(0X44AA << 16);
    // 0x80332BDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332BE0: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80332BE4: nop

    // 0x80332BE8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332BEC: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x80332BF0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80332BF4: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80332BF8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332BFC: lwc1        $f16, 0x4A10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A10);
    // 0x80332C00: lwc1        $f10, 0x8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80332C04: nop

    // 0x80332C08: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80332C0C: nop

    // 0x80332C10: bc1f        L_80332C78
    if (!c1cs) {
        // 0x80332C14: nop
    
            goto L_80332C78;
    }
    // 0x80332C14: nop

    // 0x80332C18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C20: jal         0x8001BB34
    // 0x80332C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80332C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80332C28: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80332C2C:
    // 0x80332C2C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80332C30: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C34: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80332C38: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x80332C3C: lh          $a0, 0xE8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XE8);
    // 0x80332C40: jal         0x8001BB34
    // 0x80332C44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x80332C44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332C48: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80332C4C: nop

    // 0x80332C50: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80332C54: slti        $at, $t3, 0x9
    ctx->r1 = SIGNED(ctx->r11) < 0X9 ? 1 : 0;
    // 0x80332C58: bne         $at, $zero, L_80332C2C
    if (ctx->r1 != 0) {
        // 0x80332C5C: sw          $t3, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r11;
            goto L_80332C2C;
    }
    // 0x80332C5C: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x80332C60: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C64: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x80332C68: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80332C6C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C70: nop

    // 0x80332C74: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332C78:
    // 0x80332C78: b           L_80332C80
    // 0x80332C7C: nop

        goto L_80332C80;
    // 0x80332C7C: nop

L_80332C80:
    // 0x80332C80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332C84: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80332C88: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332C8C: jr          $ra
    // 0x80332C90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80332C90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80332058_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332058: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033205C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332060: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332064: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332068: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033206C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332070: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332074: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033207C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332080: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332084: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332088: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033208C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332090: nop

    // 0x80332094: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332098: nop

    // 0x8033209C: bne         $t1, $zero, L_803320D0
    if (ctx->r9 != 0) {
        // 0x803320A0: nop
    
            goto L_803320D0;
    }
    // 0x803320A0: nop

    // 0x803320A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803320A8: nop

    // 0x803320AC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803320B0: nop

    // 0x803320B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803320B8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803320BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803320C0: nop

    // 0x803320C4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803320C8: nop

    // 0x803320CC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_803320D0:
    // 0x803320D0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803320D4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803320D8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803320DC: lwc1        $f12, 0x40($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X40);
    // 0x803320E0: jal         0x80015538
    // 0x803320E4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803320E4: nop

    after_0:
    // 0x803320E8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803320EC: nop

    // 0x803320F0: swc1        $f0, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f0.u32l;
    // 0x803320F4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803320F8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803320FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332100: lwc1        $f6, 0x40($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X40);
    // 0x80332104: nop

    // 0x80332108: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033210C: swc1        $f8, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f8.u32l;
    // 0x80332110: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332114: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332118: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033211C: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80332120: nop

    // 0x80332124: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80332128: nop

    // 0x8033212C: bc1f        L_80332150
    if (!c1cs) {
        // 0x80332130: nop
    
            goto L_80332150;
    }
    // 0x80332130: nop

    // 0x80332134: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332138: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033213C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332140: lwc1        $f18, 0x18($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X18);
    // 0x80332144: nop

    // 0x80332148: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8033214C: swc1        $f6, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f6.u32l;
L_80332150:
    // 0x80332150: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332154: nop

    // 0x80332158: lwc1        $f8, 0x40($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X40);
    // 0x8033215C: nop

    // 0x80332160: swc1        $f8, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f8.u32l;
    // 0x80332164: jal         0x80333308
    // 0x80332168: nop

    func_80333308_unk_bin_15(rdram, ctx);
        goto after_1;
    // 0x80332168: nop

    after_1:
    // 0x8033216C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332170: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332174: jal         0x80029D8C
    // 0x80332178: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x80332178: nop

    after_2:
    // 0x8033217C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80332180:
    // 0x80332180: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80332184: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332188: sll         $t6, $t2, 1
    ctx->r14 = S32(ctx->r10 << 1);
    // 0x8033218C: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x80332190: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x80332194: jal         0x80029D8C
    // 0x80332198: nop

    func_80029D8C(rdram, ctx);
        goto after_3;
    // 0x80332198: nop

    after_3:
    // 0x8033219C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803321A0: nop

    // 0x803321A4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803321A8: slti        $at, $t8, 0x9
    ctx->r1 = SIGNED(ctx->r24) < 0X9 ? 1 : 0;
    // 0x803321AC: bne         $at, $zero, L_80332180
    if (ctx->r1 != 0) {
        // 0x803321B0: sw          $t8, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r24;
            goto L_80332180;
    }
    // 0x803321B0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x803321B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803321B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321BC: lh          $t0, 0xF8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XF8);
    // 0x803321C0: nop

    // 0x803321C4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803321C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803321CC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803321D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803321D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803321D8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803321DC: lwc1        $f12, 0x4168($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x803321E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803321E4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803321E8: jal         0x80015538
    // 0x803321EC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803321EC: nop

    after_4:
    // 0x803321F0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803321F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803321F8: lh          $t2, 0xF8($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XF8);
    // 0x803321FC: nop

    // 0x80332200: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80332204: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332208: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033220C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332210: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332214: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332218: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x8033221C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332220: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332224: lwc1        $f10, 0x40($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80332228: nop

    // 0x8033222C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80332230: nop

    // 0x80332234: bc1f        L_80332254
    if (!c1cs) {
        // 0x80332238: nop
    
            goto L_80332254;
    }
    // 0x80332238: nop

    // 0x8033223C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332240: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x80332244: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80332248: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033224C: nop

    // 0x80332250: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80332254:
    // 0x80332254: b           L_8033225C
    // 0x80332258: nop

        goto L_8033225C;
    // 0x80332258: nop

L_8033225C:
    // 0x8033225C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332260: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332264: jr          $ra
    // 0x80332268: nop

    return;
    // 0x80332268: nop

;}
RECOMP_FUNC void func_80331708_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331708: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8033170C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331710: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331714: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331718: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033171C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331720: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331724: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033172C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331730: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331734: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331738: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033173C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331740: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80331744: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331748: nop

    // 0x8033174C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331750: nop

    // 0x80331754: bne         $t1, $zero, L_80331CBC
    if (ctx->r9 != 0) {
        // 0x80331758: nop
    
            goto L_80331CBC;
    }
    // 0x80331758: nop

    // 0x8033175C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80331760: nop

    // 0x80331764: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331768: nop

    // 0x8033176C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331770: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331774: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331778: nop

    // 0x8033177C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331780: nop

    // 0x80331784: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033178C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331790: addiu       $t7, $t7, -0x52BC
    ctx->r15 = ADD32(ctx->r15, -0X52BC);
    // 0x80331794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331798: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033179C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803317A4: jal         0x8001C0EC
    // 0x803317A8: addiu       $a3, $zero, 0x111
    ctx->r7 = ADD32(0, 0X111);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803317A8: addiu       $a3, $zero, 0x111
    ctx->r7 = ADD32(0, 0X111);
    after_0:
    // 0x803317AC: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x803317B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803317B4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803317B8: nop

    // 0x803317BC: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x803317C0: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x803317C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803317C8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803317CC: nop

    // 0x803317D0: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x803317D4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803317D8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x803317DC: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x803317E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803317E4: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803317E8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803317EC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803317F0: swc1        $f16, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f16.u32l;
    // 0x803317F4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803317F8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803317FC: nop

    // 0x80331800: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x80331804: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80331808: nop

    // 0x8033180C: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80331810: nop

    // 0x80331814: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x80331818: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033181C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80331820: nop

    // 0x80331824: swc1        $f6, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f6.u32l;
    // 0x80331828: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8033182C: nop

    // 0x80331830: lwc1        $f20, 0x20($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80331834: nop

    // 0x80331838: swc1        $f20, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f20.u32l;
    // 0x8033183C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331840: nop

    // 0x80331844: swc1        $f20, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f20.u32l;
    // 0x80331848: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8033184C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331850: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331854: nop

    // 0x80331858: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
    // 0x8033185C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80331860: nop

    // 0x80331864: sh          $zero, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = 0;
    // 0x80331868: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_8033186C:
    // 0x8033186C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80331870: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80331874: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80331878: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x8033187C: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x80331880: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80331884: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80331888: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033188C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331890: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331894: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331898: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033189C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803318A0: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x803318A4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x803318A8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803318AC: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x803318B0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x803318B4: lh          $t0, 0xE8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XE8);
    // 0x803318B8: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x803318BC: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x803318C0: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803318C4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803318C8: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803318CC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803318D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803318D4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803318D8: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x803318DC: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x803318E0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803318E4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x803318E8: addu        $t2, $t1, $t4
    ctx->r10 = ADD32(ctx->r9, ctx->r12);
    // 0x803318EC: lh          $t5, 0xE8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XE8);
    // 0x803318F0: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803318F4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803318F8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803318FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331900: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331904: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331908: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033190C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331910: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x80331914: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80331918: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8033191C: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80331920: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80331924: lh          $t3, 0xE8($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XE8);
    // 0x80331928: lwc1        $f4, 0x18($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X18);
    // 0x8033192C: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80331930: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80331934: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331938: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8033193C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331940: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331944: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331948: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
    // 0x8033194C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331950: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80331954: sll         $t5, $t2, 1
    ctx->r13 = S32(ctx->r10 << 1);
    // 0x80331958: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8033195C: lh          $t8, 0xE8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XE8);
    // 0x80331960: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80331964: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80331968: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8033196C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331970: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80331974: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331978: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033197C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331980: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80331984: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80331988: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033198C: sll         $t3, $t9, 1
    ctx->r11 = S32(ctx->r25 << 1);
    // 0x80331990: addu        $t1, $t0, $t3
    ctx->r9 = ADD32(ctx->r8, ctx->r11);
    // 0x80331994: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x80331998: lwc1        $f8, 0x20($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X20);
    // 0x8033199C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803319A0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803319A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803319A8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803319AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803319B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319B4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803319B8: swc1        $f8, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f8.u32l;
    // 0x803319BC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x803319C0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803319C4: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x803319C8: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x803319CC: lh          $t9, 0xE8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XE8);
    // 0x803319D0: lwc1        $f10, 0x3C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x803319D4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803319D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803319DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803319E0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803319E4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803319E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319EC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803319F0: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x803319F4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x803319F8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803319FC: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80331A00: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80331A04: lh          $t6, 0xE8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XE8);
    // 0x80331A08: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80331A0C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80331A10: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331A14: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331A18: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331A1C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331A20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A24: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331A28: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80331A2C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80331A30: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80331A34: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80331A38: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80331A3C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80331A40: lwc1        $f18, 0x40($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X40);
    // 0x80331A44: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331A48: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331A4C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331A50: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331A54: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331A58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A5C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331A60: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x80331A64: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331A68: nop

    // 0x80331A6C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80331A70: slti        $at, $t4, 0x9
    ctx->r1 = SIGNED(ctx->r12) < 0X9 ? 1 : 0;
    // 0x80331A74: bne         $at, $zero, L_8033186C
    if (ctx->r1 != 0) {
        // 0x80331A78: sw          $t4, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r12;
            goto L_8033186C;
    }
    // 0x80331A78: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80331A7C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331A80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A84: lh          $t5, 0xE8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XE8);
    // 0x80331A88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A8C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331A90: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331A94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A98: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331A9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331AA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331AA4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80331AA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331AAC: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331AB0: nop

    // 0x80331AB4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331AB8: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x80331ABC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331AC0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331AC4: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x80331AC8: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331ACC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331AD0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331AD4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331AD8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331ADC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331AE0: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80331AE4: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80331AE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331AEC: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80331AF0: nop

    // 0x80331AF4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331AF8: swc1        $f18, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f18.u32l;
    // 0x80331AFC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331B00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331B04: lh          $t5, 0xEC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XEC);
    // 0x80331B08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331B0C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331B10: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331B14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331B18: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331B1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331B20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331B24: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80331B28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331B2C: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331B30: nop

    // 0x80331B34: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331B38: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x80331B3C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331B40: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331B44: lh          $t1, 0xEE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEE);
    // 0x80331B48: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331B4C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331B50: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331B54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331B58: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331B5C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331B60: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80331B64: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B68: lwc1        $f16, 0x49DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X49DC);
    // 0x80331B6C: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80331B70: nop

    // 0x80331B74: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331B78: swc1        $f18, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f18.u32l;
    // 0x80331B7C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331B80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331B84: lh          $t5, 0xF0($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XF0);
    // 0x80331B88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331B8C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331B90: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331B94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331B98: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331B9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331BA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331BA4: lui         $at, 0x443E
    ctx->r1 = S32(0X443E << 16);
    // 0x80331BA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331BAC: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331BB0: nop

    // 0x80331BB4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331BB8: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x80331BBC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331BC0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331BC4: lh          $t1, 0xF2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XF2);
    // 0x80331BC8: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331BCC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331BD0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331BD4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331BD8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331BDC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331BE0: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80331BE4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331BE8: lwc1        $f16, 0x49E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X49E0);
    // 0x80331BEC: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80331BF0: nop

    // 0x80331BF4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331BF8: swc1        $f18, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f18.u32l;
    // 0x80331BFC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331C00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331C04: lh          $t5, 0xF4($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XF4);
    // 0x80331C08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331C0C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331C10: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331C14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C18: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331C1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331C20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331C24: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C28: lwc1        $f6, 0x49E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X49E4);
    // 0x80331C2C: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331C30: nop

    // 0x80331C34: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331C38: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x80331C3C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331C40: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331C44: lh          $t1, 0xF6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XF6);
    // 0x80331C48: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80331C4C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331C50: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331C54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331C58: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331C5C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331C60: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x80331C64: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331C68: lwc1        $f16, 0x49E8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X49E8);
    // 0x80331C6C: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80331C70: nop

    // 0x80331C74: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331C78: swc1        $f18, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f18.u32l;
    // 0x80331C7C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331C80: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331C84: lh          $t5, 0xF8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XF8);
    // 0x80331C88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331C8C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331C90: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331C94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C98: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331C9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331CA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331CA4: lui         $at, 0x44AA
    ctx->r1 = S32(0X44AA << 16);
    // 0x80331CA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331CAC: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331CB0: nop

    // 0x80331CB4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331CB8: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
L_80331CBC:
    // 0x80331CBC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331CC0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331CC4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331CC8: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80331CCC: jal         0x80015538
    // 0x80331CD0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80331CD0: nop

    after_1:
    // 0x80331CD4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331CD8: nop

    // 0x80331CDC: swc1        $f0, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f0.u32l;
    // 0x80331CE0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331CE4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331CE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331CEC: lwc1        $f10, 0x40($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80331CF0: nop

    // 0x80331CF4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80331CF8: nop

    // 0x80331CFC: bc1f        L_80331D18
    if (!c1cs) {
        // 0x80331D00: nop
    
            goto L_80331D18;
    }
    // 0x80331D00: nop

    // 0x80331D04: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331D08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331D0C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80331D10: nop

    // 0x80331D14: swc1        $f18, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f18.u32l;
L_80331D18:
    // 0x80331D18: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80331D1C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331D20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331D24: lwc1        $f6, 0x40($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80331D28: nop

    // 0x80331D2C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331D30: swc1        $f8, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f8.u32l;
    // 0x80331D34: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331D38: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331D3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331D40: lwc1        $f10, 0x18($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X18);
    // 0x80331D44: nop

    // 0x80331D48: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80331D4C: nop

    // 0x80331D50: bc1f        L_80331D74
    if (!c1cs) {
        // 0x80331D54: nop
    
            goto L_80331D74;
    }
    // 0x80331D54: nop

    // 0x80331D58: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331D5C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331D60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331D64: lwc1        $f18, 0x18($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X18);
    // 0x80331D68: nop

    // 0x80331D6C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80331D70: swc1        $f6, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f6.u32l;
L_80331D74:
    // 0x80331D74: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331D78: nop

    // 0x80331D7C: lwc1        $f8, 0x40($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X40);
    // 0x80331D80: nop

    // 0x80331D84: swc1        $f8, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f8.u32l;
    // 0x80331D88: jal         0x80333308
    // 0x80331D8C: nop

    func_80333308_unk_bin_15(rdram, ctx);
        goto after_2;
    // 0x80331D8C: nop

    after_2:
    // 0x80331D90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D98: jal         0x80029D8C
    // 0x80331D9C: nop

    func_80029D8C(rdram, ctx);
        goto after_3;
    // 0x80331D9C: nop

    after_3:
    // 0x80331DA0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80331DA4:
    // 0x80331DA4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80331DA8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80331DAC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80331DB0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80331DB4: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x80331DB8: jal         0x80029D8C
    // 0x80331DBC: nop

    func_80029D8C(rdram, ctx);
        goto after_4;
    // 0x80331DBC: nop

    after_4:
    // 0x80331DC0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80331DC4: nop

    // 0x80331DC8: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x80331DCC: slti        $at, $t2, 0x9
    ctx->r1 = SIGNED(ctx->r10) < 0X9 ? 1 : 0;
    // 0x80331DD0: bne         $at, $zero, L_80331DA4
    if (ctx->r1 != 0) {
        // 0x80331DD4: sw          $t2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r10;
            goto L_80331DA4;
    }
    // 0x80331DD4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80331DD8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80331DDC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331DE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331DE4: lwc1        $f10, 0x40($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80331DE8: nop

    // 0x80331DEC: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80331DF0: nop

    // 0x80331DF4: bc1f        L_80331E14
    if (!c1cs) {
        // 0x80331DF8: nop
    
            goto L_80331E14;
    }
    // 0x80331DF8: nop

    // 0x80331DFC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331E00: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80331E04: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80331E08: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80331E0C: nop

    // 0x80331E10: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80331E14:
    // 0x80331E14: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80331E18: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80331E1C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331E20: lwc1        $f4, 0x49EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X49EC);
    // 0x80331E24: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331E28: nop

    // 0x80331E2C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80331E30: nop

    // 0x80331E34: bc1f        L_80331E54
    if (!c1cs) {
        // 0x80331E38: nop
    
            goto L_80331E54;
    }
    // 0x80331E38: nop

    // 0x80331E3C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331E40: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80331E44: sh          $t8, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r24;
    // 0x80331E48: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331E4C: nop

    // 0x80331E50: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331E54:
    // 0x80331E54: b           L_80331E5C
    // 0x80331E58: nop

        goto L_80331E5C;
    // 0x80331E58: nop

L_80331E5C:
    // 0x80331E5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331E60: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331E64: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331E68: jr          $ra
    // 0x80331E6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80331E6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80333FD8_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333FD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333FDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333FE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333FE4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333FE8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333FEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333FF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333FF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333FF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333FFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334000: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334004: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334008: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033400C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80334010: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80334014: nop

    // 0x80334018: bne         $t0, $zero, L_8033403C
    if (ctx->r8 != 0) {
        // 0x8033401C: nop
    
            goto L_8033403C;
    }
    // 0x8033401C: nop

    // 0x80334020: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80334024: nop

    // 0x80334028: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x8033402C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334030: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334034: jal         0x8002B0E4
    // 0x80334038: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80334038: nop

    after_0:
L_8033403C:
    // 0x8033403C: b           L_80334044
    // 0x80334040: nop

        goto L_80334044;
    // 0x80334040: nop

L_80334044:
    // 0x80334044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334048: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033404C: jr          $ra
    // 0x80334050: nop

    return;
    // 0x80334050: nop

;}
RECOMP_FUNC void func_80334054_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334054: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80334058: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033405C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334060: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334064: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334068: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033406C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334070: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334074: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334078: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033407C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334080: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334084: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80334088: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033408C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80334090: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334094: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80334098: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033409C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803340A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803340A4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803340A8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803340AC: nop

    // 0x803340B0: bc1f        L_80334418
    if (!c1cs) {
        // 0x803340B4: nop
    
            goto L_80334418;
    }
    // 0x803340B4: nop

    // 0x803340B8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803340BC: nop

    // 0x803340C0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803340C4: nop

    // 0x803340C8: bne         $t3, $zero, L_803343DC
    if (ctx->r11 != 0) {
        // 0x803340CC: nop
    
            goto L_803343DC;
    }
    // 0x803340CC: nop

    // 0x803340D0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803340D4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x803340D8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803340DC: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x803340E0: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803340E4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803340E8: lwc1        $f6, 0x4A3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4A3C);
    // 0x803340EC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803340F0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803340F4: nop

    // 0x803340F8: bc1f        L_803343D4
    if (!c1cs) {
        // 0x803340FC: nop
    
            goto L_803343D4;
    }
    // 0x803340FC: nop

    // 0x80334100: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80334104: nop

    // 0x80334108: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x8033410C: nop

    // 0x80334110: bne         $t7, $zero, L_80334138
    if (ctx->r15 != 0) {
        // 0x80334114: nop
    
            goto L_80334138;
    }
    // 0x80334114: nop

    // 0x80334118: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033411C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80334120: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334124: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80334128: nop

    // 0x8033412C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80334130: b           L_80334154
    // 0x80334134: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
        goto L_80334154;
    // 0x80334134: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_80334138:
    // 0x80334138: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033413C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80334140: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334144: lwc1        $f18, 0x4($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80334148: nop

    // 0x8033414C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80334150: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_80334154:
    // 0x80334154: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334158: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8033415C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80334160: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80334164: jal         0x80015538
    // 0x80334168: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80334168: nop

    after_0:
    // 0x8033416C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80334170: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80334174: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80334178: lwc1        $f17, 0x4A40($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4A40);
    // 0x8033417C: lwc1        $f16, 0x4A44($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A44);
    // 0x80334180: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80334184: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80334188: jal         0x80034970
    // 0x8033418C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x8033418C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_1:
    // 0x80334190: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80334194: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334198: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033419C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803341A0: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803341A4: nop

    // 0x803341A8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803341AC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x803341B0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803341B4: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803341B8: lwc1        $f5, 0x4A48($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4A48);
    // 0x803341BC: lwc1        $f4, 0x4A4C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4A4C);
    // 0x803341C0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x803341C4: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x803341C8: jal         0x80036570
    // 0x803341CC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x803341CC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_2:
    // 0x803341D0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803341D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803341D8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803341DC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x803341E0: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803341E4: nop

    // 0x803341E8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803341EC: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x803341F0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803341F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803341F8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803341FC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80334200: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80334204: addiu       $a1, $a1, 0x493C
    ctx->r5 = ADD32(ctx->r5, 0X493C);
    // 0x80334208: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033420C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334210: jal         0x80027464
    // 0x80334214: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80334214: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80334218: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8033421C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80334220: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334224: beq         $t3, $at, L_80334280
    if (ctx->r11 == ctx->r1) {
        // 0x80334228: nop
    
            goto L_80334280;
    }
    // 0x80334228: nop

    // 0x8033422C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80334230: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80334234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334238: jal         0x80019448
    // 0x8033423C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_4;
    // 0x8033423C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80334240: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80334244: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80334248: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033424C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334250: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80334254: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80334258: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x8033425C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80334260: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334264: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80334268: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x8033426C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334270: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334274: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80334278: jal         0x80026F10
    // 0x8033427C: nop

    func_80026F10(rdram, ctx);
        goto after_5;
    // 0x8033427C: nop

    after_5:
L_80334280:
    // 0x80334280: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80334284: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x80334288: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033428C: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80334290: jal         0x80015538
    // 0x80334294: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80334294: nop

    after_6:
    // 0x80334298: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8033429C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803342A0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803342A4: lwc1        $f17, 0x4A50($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4A50);
    // 0x803342A8: lwc1        $f16, 0x4A54($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A54);
    // 0x803342AC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803342B0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x803342B4: jal         0x80034970
    // 0x803342B8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x803342B8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_7:
    // 0x803342BC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803342C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803342C4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803342C8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803342CC: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x803342D0: nop

    // 0x803342D4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803342D8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x803342DC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803342E0: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803342E4: lwc1        $f5, 0x4A58($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4A58);
    // 0x803342E8: lwc1        $f4, 0x4A5C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4A5C);
    // 0x803342EC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x803342F0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x803342F4: jal         0x80036570
    // 0x803342F8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_8;
    // 0x803342F8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_8:
    // 0x803342FC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80334300: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334304: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80334308: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8033430C: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80334310: nop

    // 0x80334314: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80334318: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x8033431C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80334320: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334324: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80334328: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8033432C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80334330: addiu       $a1, $a1, 0x493C
    ctx->r5 = ADD32(ctx->r5, 0X493C);
    // 0x80334334: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334338: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033433C: jal         0x80027464
    // 0x80334340: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x80334340: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x80334344: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80334348: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8033434C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334350: beq         $t0, $at, L_803343AC
    if (ctx->r8 == ctx->r1) {
        // 0x80334354: nop
    
            goto L_803343AC;
    }
    // 0x80334354: nop

    // 0x80334358: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033435C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80334360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334364: jal         0x80019448
    // 0x80334368: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_10;
    // 0x80334368: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x8033436C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80334370: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80334374: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334378: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033437C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334380: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334384: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80334388: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033438C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334390: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334394: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80334398: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033439C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343A0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x803343A4: jal         0x80026F10
    // 0x803343A8: nop

    func_80026F10(rdram, ctx);
        goto after_11;
    // 0x803343A8: nop

    after_11:
L_803343AC:
    // 0x803343AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803343B8: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x803343BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803343C0: jal         0x800175F0
    // 0x803343C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_12;
    // 0x803343C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x803343C8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803343CC: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x803343D0: sb          $t5, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r13;
L_803343D4:
    // 0x803343D4: b           L_80334418
    // 0x803343D8: nop

        goto L_80334418;
    // 0x803343D8: nop

L_803343DC:
    // 0x803343DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343E4: jal         0x8002A8B4
    // 0x803343E8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_13;
    // 0x803343E8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_13:
    // 0x803343EC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803343F0: nop

    // 0x803343F4: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803343F8: nop

    // 0x803343FC: swc1        $f8, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f8.u32l;
    // 0x80334400: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80334404: nop

    // 0x80334408: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033440C: nop

    // 0x80334410: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80334414: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
L_80334418:
    // 0x80334418: b           L_80334420
    // 0x8033441C: nop

        goto L_80334420;
    // 0x8033441C: nop

L_80334420:
    // 0x80334420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334424: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80334428: jr          $ra
    // 0x8033442C: nop

    return;
    // 0x8033442C: nop

;}
RECOMP_FUNC void func_80333BCC_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80333BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333BD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80333BD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80333BDC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80333BE0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80333BE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333BE8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333BEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333BF0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333BF4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333BF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333BFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333C00: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333C04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333C0C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333C10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333C14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333C18: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x80333C1C: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80333C20: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80333C24: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80333C28: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80333C2C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80333C30: jal         0x80015634
    // 0x80333C34: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_0;
    // 0x80333C34: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x80333C38: b           L_80333C48
    // 0x80333C3C: nop

        goto L_80333C48;
    // 0x80333C3C: nop

    // 0x80333C40: b           L_80333C48
    // 0x80333C44: nop

        goto L_80333C48;
    // 0x80333C44: nop

L_80333C48:
    // 0x80333C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80333C50: jr          $ra
    // 0x80333C54: nop

    return;
    // 0x80333C54: nop

;}
RECOMP_FUNC void func_80333AE4_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333AE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333AEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80333AF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80333AF4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80333AF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333AFC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80333B00: jal         0x80333BCC
    // 0x80333B04: nop

    func_80333BCC_unk_bin_15(rdram, ctx);
        goto after_0;
    // 0x80333B04: nop

    after_0:
    // 0x80333B08: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80333B0C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80333B10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333B18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333B20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333B28: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333B2C: lwc1        $f14, 0x418C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80333B30: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333B34: jal         0x80015538
    // 0x80333B38: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80333B38: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x80333B3C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80333B40: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80333B44: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333B48: nop

    // 0x80333B4C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80333B50: nop

    // 0x80333B54: bc1t        L_80333B7C
    if (c1cs) {
        // 0x80333B58: nop
    
            goto L_80333B7C;
    }
    // 0x80333B58: nop

    // 0x80333B5C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80333B60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333B64: nop

    // 0x80333B68: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80333B6C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80333B70: nop

    // 0x80333B74: bc1f        L_80333B84
    if (!c1cs) {
        // 0x80333B78: nop
    
            goto L_80333B84;
    }
    // 0x80333B78: nop

L_80333B7C:
    // 0x80333B7C: b           L_80333BBC
    // 0x80333B80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80333BBC;
    // 0x80333B80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80333B84:
    // 0x80333B84: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333B88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333B8C: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80333B90: nop

    // 0x80333B94: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80333B98: nop

    // 0x80333B9C: bc1f        L_80333BAC
    if (!c1cs) {
        // 0x80333BA0: nop
    
            goto L_80333BAC;
    }
    // 0x80333BA0: nop

    // 0x80333BA4: b           L_80333BBC
    // 0x80333BA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80333BBC;
    // 0x80333BA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80333BAC:
    // 0x80333BAC: b           L_80333BBC
    // 0x80333BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80333BBC;
    // 0x80333BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80333BB4: b           L_80333BBC
    // 0x80333BB8: nop

        goto L_80333BBC;
    // 0x80333BB8: nop

L_80333BBC:
    // 0x80333BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333BC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333BC4: jr          $ra
    // 0x80333BC8: nop

    return;
    // 0x80333BC8: nop

;}
RECOMP_FUNC void func_80333E3C_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333E3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80333E40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333E44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80333E48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80333E4C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80333E50: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80333E54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333E58: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333E5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333E60: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333E64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333E68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333E6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333E70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333E74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333E78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333E7C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333E80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333E84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333E88: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x80333E8C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80333E90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333E94: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80333E98: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80333E9C: lwc1        $f18, 0x4($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80333EA0: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80333EA4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80333EA8: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80333EAC: jal         0x800156C4
    // 0x80333EB0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_0;
    // 0x80333EB0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80333EB4: b           L_80333EC4
    // 0x80333EB8: nop

        goto L_80333EC4;
    // 0x80333EB8: nop

    // 0x80333EBC: b           L_80333EC4
    // 0x80333EC0: nop

        goto L_80333EC4;
    // 0x80333EC0: nop

L_80333EC4:
    // 0x80333EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333EC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80333ECC: jr          $ra
    // 0x80333ED0: nop

    return;
    // 0x80333ED0: nop

;}
RECOMP_FUNC void func_80330E40_unk_bin_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330E44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330E48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330E4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330E50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330E54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330E58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330E5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330E64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330E68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330E6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330E70: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330E74: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E78: nop

    // 0x80330E7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330E80: nop

    // 0x80330E84: bne         $t1, $zero, L_80330F34
    if (ctx->r9 != 0) {
        // 0x80330E88: nop
    
            goto L_80330F34;
    }
    // 0x80330E88: nop

    // 0x80330E8C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E90: nop

    // 0x80330E94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330E98: nop

    // 0x80330E9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330EA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330EA4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EA8: nop

    // 0x80330EAC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330EB0: nop

    // 0x80330EB4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330EB8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330EBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330EC0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EC4: nop

    // 0x80330EC8: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80330ECC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80330ED0:
    // 0x80330ED0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80330ED4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330ED8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80330EDC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80330EE0: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x80330EE4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80330EE8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330EEC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330EF0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330EF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330EF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330EFC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330F00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F04: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330F08: swc1        $f6, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f6.u32l;
    // 0x80330F0C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80330F10: nop

    // 0x80330F14: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x80330F18: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x80330F1C: bne         $at, $zero, L_80330ED0
    if (ctx->r1 != 0) {
        // 0x80330F20: sw          $t6, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r14;
            goto L_80330ED0;
    }
    // 0x80330F20: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80330F24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330F28: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F2C: nop

    // 0x80330F30: swc1        $f8, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f8.u32l;
L_80330F34:
    // 0x80330F34: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F38: nop

    // 0x80330F3C: lh          $t9, 0xA6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA6);
    // 0x80330F40: nop

    // 0x80330F44: bne         $t9, $zero, L_80330FA8
    if (ctx->r25 != 0) {
        // 0x80330F48: nop
    
            goto L_80330FA8;
    }
    // 0x80330F48: nop

    // 0x80330F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F54: jal         0x8002A2EC
    // 0x80330F58: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x80330F58: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_0:
    // 0x80330F5C: beq         $v0, $zero, L_80330FA0
    if (ctx->r2 == 0) {
        // 0x80330F60: nop
    
            goto L_80330FA0;
    }
    // 0x80330F60: nop

    // 0x80330F64: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F68: nop

    // 0x80330F6C: lh          $t0, 0xA6($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA6);
    // 0x80330F70: nop

    // 0x80330F74: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80330F78: sh          $t1, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r9;
    // 0x80330F7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F80: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80330F84: addiu       $t3, $t3, -0x52BC
    ctx->r11 = ADD32(ctx->r11, -0X52BC);
    // 0x80330F88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F8C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80330F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80330F98: jal         0x8001C0EC
    // 0x80330F9C: addiu       $a3, $zero, 0x111
    ctx->r7 = ADD32(0, 0X111);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330F9C: addiu       $a3, $zero, 0x111
    ctx->r7 = ADD32(0, 0X111);
    after_1:
L_80330FA0:
    // 0x80330FA0: b           L_80330FE8
    // 0x80330FA4: nop

        goto L_80330FE8;
    // 0x80330FA4: nop

L_80330FA8:
    // 0x80330FA8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330FB0: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80330FB4: nop

    // 0x80330FB8: bne         $t2, $at, L_80330FE8
    if (ctx->r10 != ctx->r1) {
        // 0x80330FBC: nop
    
            goto L_80330FE8;
    }
    // 0x80330FBC: nop

    // 0x80330FC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FC8: jal         0x8001B4AC
    // 0x80330FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330FD0: beq         $v0, $zero, L_80330FE8
    if (ctx->r2 == 0) {
        // 0x80330FD4: nop
    
            goto L_80330FE8;
    }
    // 0x80330FD4: nop

    // 0x80330FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FE0: jal         0x8001BBDC
    // 0x80330FE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80330FE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80330FE8:
    // 0x80330FE8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330FF0: lbu         $t5, 0x132($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X132);
    // 0x80330FF4: nop

    // 0x80330FF8: bne         $t5, $at, L_803311E0
    if (ctx->r13 != ctx->r1) {
        // 0x80330FFC: nop
    
            goto L_803311E0;
    }
    // 0x80330FFC: nop

    // 0x80331000: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331004: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331008: jal         0x8002A2EC
    // 0x8033100C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_4;
    // 0x8033100C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_4:
    // 0x80331010: beq         $v0, $zero, L_80331034
    if (ctx->r2 == 0) {
        // 0x80331014: nop
    
            goto L_80331034;
    }
    // 0x80331014: nop

    // 0x80331018: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033101C: nop

    // 0x80331020: lbu         $t9, 0x132($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X132);
    // 0x80331024: nop

    // 0x80331028: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033102C: b           L_803311D8
    // 0x80331030: sb          $t0, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r8;
        goto L_803311D8;
    // 0x80331030: sb          $t0, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r8;
L_80331034:
    // 0x80331034: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80331038: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8033103C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331040: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80331044: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80331048: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8033104C: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331050: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80331054: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80331058: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033105C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80331060: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80331064: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331068: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033106C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80331070: addiu       $t3, $sp, 0x20
    ctx->r11 = ADD32(ctx->r29, 0X20);
    // 0x80331074: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80331078: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x8033107C: jal         0x800158B4
    // 0x80331080: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    func_800158B4(rdram, ctx);
        goto after_5;
    // 0x80331080: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_5:
    // 0x80331084: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331088: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033108C: nop

    // 0x80331090: swc1        $f4, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f4.u32l;
    // 0x80331094: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331098: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033109C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803310A0: lwc1        $f6, 0x40($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X40);
    // 0x803310A4: nop

    // 0x803310A8: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x803310AC: nop

    // 0x803310B0: bc1f        L_803310F4
    if (!c1cs) {
        // 0x803310B4: nop
    
            goto L_803310F4;
    }
    // 0x803310B4: nop

    // 0x803310B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803310BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803310C0: nop

    // 0x803310C4: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x803310C8: nop

    // 0x803310CC: bc1f        L_803310F4
    if (!c1cs) {
        // 0x803310D0: nop
    
            goto L_803310F4;
    }
    // 0x803310D0: nop

    // 0x803310D4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803310D8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803310DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803310E0: lwc1        $f18, 0x40($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X40);
    // 0x803310E4: nop

    // 0x803310E8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803310EC: b           L_80331150
    // 0x803310F0: swc1        $f4, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f4.u32l;
        goto L_80331150;
    // 0x803310F0: swc1        $f4, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f4.u32l;
L_803310F4:
    // 0x803310F4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803310F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803310FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331100: lwc1        $f8, 0x40($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X40);
    // 0x80331104: nop

    // 0x80331108: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8033110C: nop

    // 0x80331110: bc1f        L_80331150
    if (!c1cs) {
        // 0x80331114: nop
    
            goto L_80331150;
    }
    // 0x80331114: nop

    // 0x80331118: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8033111C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331120: nop

    // 0x80331124: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80331128: nop

    // 0x8033112C: bc1f        L_80331150
    if (!c1cs) {
        // 0x80331130: nop
    
            goto L_80331150;
    }
    // 0x80331130: nop

    // 0x80331134: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331138: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x8033113C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331140: lwc1        $f18, 0x40($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X40);
    // 0x80331144: nop

    // 0x80331148: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8033114C: swc1        $f4, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f4.u32l;
L_80331150:
    // 0x80331150: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331154: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331158: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033115C: lwc1        $f8, 0x40($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80331160: nop

    // 0x80331164: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80331168: swc1        $f10, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f10.u32l;
    // 0x8033116C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331170: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331174: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331178: lwc1        $f16, 0x18($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X18);
    // 0x8033117C: nop

    // 0x80331180: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80331184: nop

    // 0x80331188: bc1f        L_803311AC
    if (!c1cs) {
        // 0x8033118C: nop
    
            goto L_803311AC;
    }
    // 0x8033118C: nop

    // 0x80331190: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331194: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331198: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033119C: lwc1        $f4, 0x18($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X18);
    // 0x803311A0: nop

    // 0x803311A4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803311A8: swc1        $f8, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f8.u32l;
L_803311AC:
    // 0x803311AC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803311B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311B8: lw          $a1, 0xD4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0XD4);
    // 0x803311BC: jal         0x8002A8B4
    // 0x803311C0: nop

    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x803311C0: nop

    after_6:
    // 0x803311C4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803311C8: nop

    // 0x803311CC: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x803311D0: nop

    // 0x803311D4: swc1        $f10, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f10.u32l;
L_803311D8:
    // 0x803311D8: b           L_803311F8
    // 0x803311DC: nop

        goto L_803311F8;
    // 0x803311DC: nop

L_803311E0:
    // 0x803311E0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803311E4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x803311E8: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x803311EC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803311F0: nop

    // 0x803311F4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803311F8:
    // 0x803311F8: jal         0x80333308
    // 0x803311FC: nop

    func_80333308_unk_bin_15(rdram, ctx);
        goto after_7;
    // 0x803311FC: nop

    after_7:
    // 0x80331200: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331208: jal         0x80029D8C
    // 0x8033120C: nop

    func_80029D8C(rdram, ctx);
        goto after_8;
    // 0x8033120C: nop

    after_8:
    // 0x80331210: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80331214:
    // 0x80331214: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80331218: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033121C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80331220: addu        $t7, $t5, $t0
    ctx->r15 = ADD32(ctx->r13, ctx->r8);
    // 0x80331224: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80331228: jal         0x80029D8C
    // 0x8033122C: nop

    func_80029D8C(rdram, ctx);
        goto after_9;
    // 0x8033122C: nop

    after_9:
    // 0x80331230: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80331234: nop

    // 0x80331238: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x8033123C: slti        $at, $t8, 0x9
    ctx->r1 = SIGNED(ctx->r24) < 0X9 ? 1 : 0;
    // 0x80331240: bne         $at, $zero, L_80331214
    if (ctx->r1 != 0) {
        // 0x80331244: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_80331214;
    }
    // 0x80331244: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80331248: b           L_80331250
    // 0x8033124C: nop

        goto L_80331250;
    // 0x8033124C: nop

L_80331250:
    // 0x80331250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331254: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331258: jr          $ra
    // 0x8033125C: nop

    return;
    // 0x8033125C: nop

;}
