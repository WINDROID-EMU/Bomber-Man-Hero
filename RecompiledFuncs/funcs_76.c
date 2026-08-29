#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_bagular3_80339F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339F8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339F90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339F94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339F98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339F9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339FA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339FA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339FA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339FAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339FB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339FB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339FB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339FBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339FC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339FC4: nop

    // 0x80339FC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339FCC: nop

    // 0x80339FD0: bne         $t1, $zero, L_8033A028
    if (ctx->r9 != 0) {
        // 0x80339FD4: nop
    
            goto L_8033A028;
    }
    // 0x80339FD4: nop

    // 0x80339FD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339FDC: nop

    // 0x80339FE0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339FE4: nop

    // 0x80339FE8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339FEC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339FF0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339FF4: nop

    // 0x80339FF8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339FFC: nop

    // 0x8033A000: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A008: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A00C: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x8033A010: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A014: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A018: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A01C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8033A020: jal         0x8001C0EC
    // 0x8033A024: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A024: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_8033A028:
    // 0x8033A028: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A02C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A030: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033A034: nop

    // 0x8033A038: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A03C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A040: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A044: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A048: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A04C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A050: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033A054: nop

    // 0x8033A058: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033A05C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A060: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A064: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033A068: nop

    // 0x8033A06C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033A070: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A074: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A078: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A07C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A080: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A084: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033A088: nop

    // 0x8033A08C: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033A090: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A094: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A098: jal         0x8001B4AC
    // 0x8033A09C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A09C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A0A0: beq         $v0, $zero, L_8033A0C0
    if (ctx->r2 == 0) {
        // 0x8033A0A4: nop
    
            goto L_8033A0C0;
    }
    // 0x8033A0A4: nop

    // 0x8033A0A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033A0AC: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8033A0B0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033A0B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A0B8: nop

    // 0x8033A0BC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033A0C0:
    // 0x8033A0C0: b           L_8033A0C8
    // 0x8033A0C4: nop

        goto L_8033A0C8;
    // 0x8033A0C4: nop

L_8033A0C8:
    // 0x8033A0C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A0CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A0D0: jr          $ra
    // 0x8033A0D4: nop

    return;
    // 0x8033A0D4: nop

;}
RECOMP_FUNC void func_bagular3_803375AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803375AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803375B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803375B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803375B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803375BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803375C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803375C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803375C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803375CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803375D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803375D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803375D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803375DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803375E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803375E4: nop

    // 0x803375E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803375EC: nop

    // 0x803375F0: bne         $t1, $zero, L_80337648
    if (ctx->r9 != 0) {
        // 0x803375F4: nop
    
            goto L_80337648;
    }
    // 0x803375F4: nop

    // 0x803375F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803375FC: nop

    // 0x80337600: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337604: nop

    // 0x80337608: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033760C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337610: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337614: nop

    // 0x80337618: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033761C: nop

    // 0x80337620: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337624: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337628: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033762C: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80337630: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337634: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337638: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033763C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80337640: jal         0x8001C0EC
    // 0x80337644: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337644: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80337648:
    // 0x80337648: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033764C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337650: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337654: nop

    // 0x80337658: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033765C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337660: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337664: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337668: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033766C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337670: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337674: nop

    // 0x80337678: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033767C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80337680: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337684: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80337688: nop

    // 0x8033768C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337690: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337694: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337698: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033769C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803376A0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803376A4: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803376A8: nop

    // 0x803376AC: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803376B0: b           L_803376B8
    // 0x803376B4: nop

        goto L_803376B8;
    // 0x803376B4: nop

L_803376B8:
    // 0x803376B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803376BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803376C0: jr          $ra
    // 0x803376C4: nop

    return;
    // 0x803376C4: nop

;}
RECOMP_FUNC void func_bagular3_803356E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803356E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803356EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803356F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803356F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803356F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803356FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335700: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335704: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335708: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033570C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335710: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335714: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335718: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033571C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335720: nop

    // 0x80335724: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335728: nop

    // 0x8033572C: bne         $t1, $zero, L_80335784
    if (ctx->r9 != 0) {
        // 0x80335730: nop
    
            goto L_80335784;
    }
    // 0x80335730: nop

    // 0x80335734: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335738: nop

    // 0x8033573C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335740: nop

    // 0x80335744: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335748: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033574C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335750: nop

    // 0x80335754: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335758: nop

    // 0x8033575C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335760: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335764: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335768: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x8033576C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335770: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335778: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8033577C: jal         0x8001C0EC
    // 0x80335780: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335780: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80335784:
    // 0x80335784: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335788: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033578C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335790: nop

    // 0x80335794: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335798: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033579C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803357A0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803357A4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803357A8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803357AC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803357B0: nop

    // 0x803357B4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803357B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803357BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803357C0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803357C4: nop

    // 0x803357C8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803357CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803357D0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803357D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803357D8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803357DC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803357E0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803357E4: nop

    // 0x803357E8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803357EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803357F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803357F4: jal         0x8001B4AC
    // 0x803357F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803357F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803357FC: beq         $v0, $zero, L_8033581C
    if (ctx->r2 == 0) {
        // 0x80335800: nop
    
            goto L_8033581C;
    }
    // 0x80335800: nop

    // 0x80335804: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335808: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x8033580C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80335810: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335814: nop

    // 0x80335818: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033581C:
    // 0x8033581C: b           L_80335824
    // 0x80335820: nop

        goto L_80335824;
    // 0x80335820: nop

L_80335824:
    // 0x80335824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335828: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033582C: jr          $ra
    // 0x80335830: nop

    return;
    // 0x80335830: nop

;}
RECOMP_FUNC void func_bagular3_80336518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336518: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033651C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336520: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336524: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336528: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033652C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336530: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336534: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336538: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033653C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336540: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336544: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336548: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033654C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336550: nop

    // 0x80336554: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336558: nop

    // 0x8033655C: bne         $t1, $zero, L_803365B4
    if (ctx->r9 != 0) {
        // 0x80336560: nop
    
            goto L_803365B4;
    }
    // 0x80336560: nop

    // 0x80336564: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336568: nop

    // 0x8033656C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336570: nop

    // 0x80336574: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336578: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033657C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336580: nop

    // 0x80336584: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336588: nop

    // 0x8033658C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336590: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336594: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336598: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x8033659C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803365A0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803365A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803365A8: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x803365AC: jal         0x8001C0EC
    // 0x803365B0: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803365B0: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_803365B4:
    // 0x803365B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803365B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803365BC: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803365C0: nop

    // 0x803365C4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803365C8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803365CC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803365D0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803365D4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803365D8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803365DC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803365E0: nop

    // 0x803365E4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803365E8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803365EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803365F0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803365F4: nop

    // 0x803365F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803365FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336600: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80336604: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336608: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033660C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80336610: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80336614: nop

    // 0x80336618: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033661C: b           L_80336624
    // 0x80336620: nop

        goto L_80336624;
    // 0x80336620: nop

L_80336624:
    // 0x80336624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336628: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033662C: jr          $ra
    // 0x80336630: nop

    return;
    // 0x80336630: nop

;}
RECOMP_FUNC void func_bagular3_80335FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335FE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335FEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335FF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335FF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335FF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335FFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336000: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336004: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336008: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033600C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336010: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336014: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336018: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033601C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336020: nop

    // 0x80336024: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336028: nop

    // 0x8033602C: bne         $t1, $zero, L_80336084
    if (ctx->r9 != 0) {
        // 0x80336030: nop
    
            goto L_80336084;
    }
    // 0x80336030: nop

    // 0x80336034: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336038: nop

    // 0x8033603C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336040: nop

    // 0x80336044: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336048: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033604C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336050: nop

    // 0x80336054: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336058: nop

    // 0x8033605C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336060: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336064: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336068: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x8033606C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336070: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336078: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8033607C: jal         0x8001C0EC
    // 0x80336080: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336080: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80336084:
    // 0x80336084: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336088: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033608C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80336090: nop

    // 0x80336094: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80336098: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033609C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803360A0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803360A4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803360A8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803360AC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803360B0: nop

    // 0x803360B4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803360B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803360BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803360C0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803360C4: nop

    // 0x803360C8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803360CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803360D0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803360D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803360D8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803360DC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803360E0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803360E4: nop

    // 0x803360E8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803360EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803360F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803360F4: jal         0x8001B4AC
    // 0x803360F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803360F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803360FC: beq         $v0, $zero, L_8033611C
    if (ctx->r2 == 0) {
        // 0x80336100: nop
    
            goto L_8033611C;
    }
    // 0x80336100: nop

    // 0x80336104: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336108: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x8033610C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80336110: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336114: nop

    // 0x80336118: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033611C:
    // 0x8033611C: b           L_80336124
    // 0x80336120: nop

        goto L_80336124;
    // 0x80336120: nop

L_80336124:
    // 0x80336124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336128: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033612C: jr          $ra
    // 0x80336130: nop

    return;
    // 0x80336130: nop

;}
RECOMP_FUNC void func_bagular3_8033A754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A754: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A758: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A75C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A760: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A764: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A768: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A76C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A770: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A774: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A778: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A77C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A780: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A784: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A788: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A78C: nop

    // 0x8033A790: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A794: nop

    // 0x8033A798: bne         $t1, $zero, L_8033A7F0
    if (ctx->r9 != 0) {
        // 0x8033A79C: nop
    
            goto L_8033A7F0;
    }
    // 0x8033A79C: nop

    // 0x8033A7A0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A7A4: nop

    // 0x8033A7A8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A7AC: nop

    // 0x8033A7B0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A7B4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A7B8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A7BC: nop

    // 0x8033A7C0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A7C4: nop

    // 0x8033A7C8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A7CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A7D0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A7D4: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x8033A7D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A7DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A7E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A7E4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8033A7E8: jal         0x8001C0EC
    // 0x8033A7EC: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A7EC: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_8033A7F0:
    // 0x8033A7F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A7F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A7F8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033A7FC: nop

    // 0x8033A800: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A804: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A808: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A80C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A810: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A814: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A818: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033A81C: nop

    // 0x8033A820: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033A824: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A828: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A82C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033A830: nop

    // 0x8033A834: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033A838: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A83C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A840: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A844: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A848: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A84C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033A850: nop

    // 0x8033A854: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033A858: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A85C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A860: jal         0x8001B4AC
    // 0x8033A864: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A864: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A868: beq         $v0, $zero, L_8033A8AC
    if (ctx->r2 == 0) {
        // 0x8033A86C: nop
    
            goto L_8033A8AC;
    }
    // 0x8033A86C: nop

    // 0x8033A870: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A874: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A878: lw          $t6, 0xC4($t2)
    ctx->r14 = MEM_W(ctx->r10, 0XC4);
    // 0x8033A87C: nop

    // 0x8033A880: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8033A884: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033A888: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A88C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033A890: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A894: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033A898: sw          $zero, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = 0;
    // 0x8033A89C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A8A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A8A4: jal         0x8002B114
    // 0x8033A8A8: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033A8A8: nop

    after_2:
L_8033A8AC:
    // 0x8033A8AC: b           L_8033A8B4
    // 0x8033A8B0: nop

        goto L_8033A8B4;
    // 0x8033A8B0: nop

L_8033A8B4:
    // 0x8033A8B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A8B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A8BC: jr          $ra
    // 0x8033A8C0: nop

    return;
    // 0x8033A8C0: nop

;}
RECOMP_FUNC void func_bagular3_80335334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335334: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033533C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335340: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335344: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335348: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033534C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335350: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335354: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335358: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033535C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335360: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335364: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335368: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033536C: nop

    // 0x80335370: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335374: nop

    // 0x80335378: bne         $t1, $zero, L_803353D0
    if (ctx->r9 != 0) {
        // 0x8033537C: nop
    
            goto L_803353D0;
    }
    // 0x8033537C: nop

    // 0x80335380: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335384: nop

    // 0x80335388: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033538C: nop

    // 0x80335390: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335394: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335398: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033539C: nop

    // 0x803353A0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803353A4: nop

    // 0x803353A8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803353AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803353B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803353B4: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x803353B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803353BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803353C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803353C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x803353C8: jal         0x8001C0EC
    // 0x803353CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803353CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_803353D0:
    // 0x803353D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803353D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803353D8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803353DC: nop

    // 0x803353E0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803353E4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803353E8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803353EC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803353F0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803353F4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803353F8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803353FC: nop

    // 0x80335400: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80335404: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335408: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033540C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335410: nop

    // 0x80335414: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335418: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033541C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335420: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335424: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335428: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033542C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335430: nop

    // 0x80335434: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80335438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033543C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335440: jal         0x8001B4AC
    // 0x80335444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335448: beq         $v0, $zero, L_80335468
    if (ctx->r2 == 0) {
        // 0x8033544C: nop
    
            goto L_80335468;
    }
    // 0x8033544C: nop

    // 0x80335450: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335454: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80335458: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033545C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335460: nop

    // 0x80335464: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80335468:
    // 0x80335468: b           L_80335470
    // 0x8033546C: nop

        goto L_80335470;
    // 0x8033546C: nop

L_80335470:
    // 0x80335470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335478: jr          $ra
    // 0x8033547C: nop

    return;
    // 0x8033547C: nop

;}
RECOMP_FUNC void func_bagular3_80334C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334C88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334C90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334C94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334C98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334C9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334CA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334CA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334CA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334CAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334CB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334CB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334CB8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334CBC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334CC0: nop

    // 0x80334CC4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80334CC8: nop

    // 0x80334CCC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80334CD0: sltiu       $at, $t2, 0xF
    ctx->r1 = ctx->r10 < 0XF ? 1 : 0;
    // 0x80334CD4: beq         $at, $zero, L_80334DC8
    if (ctx->r1 == 0) {
        // 0x80334CD8: nop
    
            goto L_80334DC8;
    }
    // 0x80334CD8: nop

    // 0x80334CDC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334CE0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334CE4: addu        $at, $at, $t2
    gpr jr_addend_80334CF0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334CE8: lw          $t2, -0x3D7C($at)
    ctx->r10 = ADD32(ctx->r1, -0X3D7C);
    // 0x80334CEC: nop

    // 0x80334CF0: jr          $t2
    // 0x80334CF4: nop

    switch (jr_addend_80334CF0 >> 2) {
        case 0: goto L_80334CF8; break;
        case 1: goto L_80334D08; break;
        case 2: goto L_80334D18; break;
        case 3: goto L_80334D28; break;
        case 4: goto L_80334D38; break;
        case 5: goto L_80334D48; break;
        case 6: goto L_80334D58; break;
        case 7: goto L_80334D68; break;
        case 8: goto L_80334D78; break;
        case 9: goto L_80334D88; break;
        case 10: goto L_80334DC8; break;
        case 11: goto L_80334DC8; break;
        case 12: goto L_80334D98; break;
        case 13: goto L_80334DA8; break;
        case 14: goto L_80334DB8; break;
        default: switch_error(__func__, 0x80334CF0, 0x8033C284);
    }
    // 0x80334CF4: nop

L_80334CF8:
    // 0x80334CF8: jal         0x80331F40
    // 0x80334CFC: nop

    func_bagular3_80331F40(rdram, ctx);
        goto after_0;
    // 0x80334CFC: nop

    after_0:
    // 0x80334D00: b           L_80334DD0
    // 0x80334D04: nop

        goto L_80334DD0;
    // 0x80334D04: nop

L_80334D08:
    // 0x80334D08: jal         0x803321D8
    // 0x80334D0C: nop

    func_bagular3_803321D8(rdram, ctx);
        goto after_1;
    // 0x80334D0C: nop

    after_1:
    // 0x80334D10: b           L_80334DD0
    // 0x80334D14: nop

        goto L_80334DD0;
    // 0x80334D14: nop

L_80334D18:
    // 0x80334D18: jal         0x80332624
    // 0x80334D1C: nop

    func_bagular3_80332624(rdram, ctx);
        goto after_2;
    // 0x80334D1C: nop

    after_2:
    // 0x80334D20: b           L_80334DD0
    // 0x80334D24: nop

        goto L_80334DD0;
    // 0x80334D24: nop

L_80334D28:
    // 0x80334D28: jal         0x80332A68
    // 0x80334D2C: nop

    func_bagular3_80332A68(rdram, ctx);
        goto after_3;
    // 0x80334D2C: nop

    after_3:
    // 0x80334D30: b           L_80334DD0
    // 0x80334D34: nop

        goto L_80334DD0;
    // 0x80334D34: nop

L_80334D38:
    // 0x80334D38: jal         0x80332C08
    // 0x80334D3C: nop

    func_bagular3_80332C08(rdram, ctx);
        goto after_4;
    // 0x80334D3C: nop

    after_4:
    // 0x80334D40: b           L_80334DD0
    // 0x80334D44: nop

        goto L_80334DD0;
    // 0x80334D44: nop

L_80334D48:
    // 0x80334D48: jal         0x80332FF8
    // 0x80334D4C: nop

    func_bagular3_80332FF8(rdram, ctx);
        goto after_5;
    // 0x80334D4C: nop

    after_5:
    // 0x80334D50: b           L_80334DD0
    // 0x80334D54: nop

        goto L_80334DD0;
    // 0x80334D54: nop

L_80334D58:
    // 0x80334D58: jal         0x803333E0
    // 0x80334D5C: nop

    func_bagular3_803333E0(rdram, ctx);
        goto after_6;
    // 0x80334D5C: nop

    after_6:
    // 0x80334D60: b           L_80334DD0
    // 0x80334D64: nop

        goto L_80334DD0;
    // 0x80334D64: nop

L_80334D68:
    // 0x80334D68: jal         0x8033352C
    // 0x80334D6C: nop

    func_bagular3_8033352C(rdram, ctx);
        goto after_7;
    // 0x80334D6C: nop

    after_7:
    // 0x80334D70: b           L_80334DD0
    // 0x80334D74: nop

        goto L_80334DD0;
    // 0x80334D74: nop

L_80334D78:
    // 0x80334D78: jal         0x80333708
    // 0x80334D7C: nop

    func_bagular3_80333708(rdram, ctx);
        goto after_8;
    // 0x80334D7C: nop

    after_8:
    // 0x80334D80: b           L_80334DD0
    // 0x80334D84: nop

        goto L_80334DD0;
    // 0x80334D84: nop

L_80334D88:
    // 0x80334D88: jal         0x80333C54
    // 0x80334D8C: nop

    func_bagular3_80333C54(rdram, ctx);
        goto after_9;
    // 0x80334D8C: nop

    after_9:
    // 0x80334D90: b           L_80334DD0
    // 0x80334D94: nop

        goto L_80334DD0;
    // 0x80334D94: nop

L_80334D98:
    // 0x80334D98: jal         0x803341A0
    // 0x80334D9C: nop

    func_bagular3_803341A0(rdram, ctx);
        goto after_10;
    // 0x80334D9C: nop

    after_10:
    // 0x80334DA0: b           L_80334DD0
    // 0x80334DA4: nop

        goto L_80334DD0;
    // 0x80334DA4: nop

L_80334DA8:
    // 0x80334DA8: jal         0x80334714
    // 0x80334DAC: nop

    func_bagular3_80334714(rdram, ctx);
        goto after_11;
    // 0x80334DAC: nop

    after_11:
    // 0x80334DB0: b           L_80334DD0
    // 0x80334DB4: nop

        goto L_80334DD0;
    // 0x80334DB4: nop

L_80334DB8:
    // 0x80334DB8: jal         0x803348BC
    // 0x80334DBC: nop

    func_bagular3_803348BC(rdram, ctx);
        goto after_12;
    // 0x80334DBC: nop

    after_12:
    // 0x80334DC0: b           L_80334DD0
    // 0x80334DC4: nop

        goto L_80334DD0;
    // 0x80334DC4: nop

L_80334DC8:
    // 0x80334DC8: b           L_80334DD0
    // 0x80334DCC: nop

        goto L_80334DD0;
    // 0x80334DCC: nop

L_80334DD0:
    // 0x80334DD0: b           L_80334DD8
    // 0x80334DD4: nop

        goto L_80334DD8;
    // 0x80334DD4: nop

L_80334DD8:
    // 0x80334DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334DE0: jr          $ra
    // 0x80334DE4: nop

    return;
    // 0x80334DE4: nop

;}
RECOMP_FUNC void func_bagular3_80331270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331270: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331274: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331278: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033127C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331280: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331284: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331288: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033128C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331290: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331294: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331298: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033129C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803312A0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803312A4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803312A8: nop

    // 0x803312AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803312B0: nop

    // 0x803312B4: bne         $t1, $zero, L_803314AC
    if (ctx->r9 != 0) {
        // 0x803312B8: nop
    
            goto L_803314AC;
    }
    // 0x803312B8: nop

    // 0x803312BC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803312C0: nop

    // 0x803312C4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803312C8: nop

    // 0x803312CC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803312D0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803312D4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803312D8: nop

    // 0x803312DC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803312E0: nop

    // 0x803312E4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803312E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803312EC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803312F0: addiu       $t7, $t7, -0x4BE0
    ctx->r15 = ADD32(ctx->r15, -0X4BE0);
    // 0x803312F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803312F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803312FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331300: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80331304: jal         0x8001C0EC
    // 0x80331308: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331308: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    after_0:
    // 0x8033130C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331310: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80331314: addiu       $t9, $t9, -0x49F0
    ctx->r25 = ADD32(ctx->r25, -0X49F0);
    // 0x80331318: lh          $a0, 0xE8($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XE8);
    // 0x8033131C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80331320: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331324: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80331328: jal         0x8001C0EC
    // 0x8033132C: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033132C: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    after_1:
    // 0x80331330: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331334: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331338: lh          $t3, 0xBE($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBE);
    // 0x8033133C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x80331340: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331344: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331348: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033134C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331350: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331354: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331358: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x8033135C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331360: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331364: lh          $t6, 0xBE($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XBE);
    // 0x80331368: nop

    // 0x8033136C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80331370: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80331374: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331378: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033137C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331380: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331384: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80331388: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033138C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331390: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80331394: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x80331398: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x8033139C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803313A0: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803313A4: addiu       $a1, $a1, -0x3EBC
    ctx->r5 = ADD32(ctx->r5, -0X3EBC);
    // 0x803313A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803313AC: jal         0x80027464
    // 0x803313B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x803313B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x803313B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803313B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803313BC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803313C0: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x803313C4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803313C8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803313CC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803313D0: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x803313D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803313D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803313DC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803313E0: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x803313E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803313E8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803313EC: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803313F0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803313F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803313F8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803313FC: lh          $t0, 0xBE($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XBE);
    // 0x80331400: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331404: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331408: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033140C: sw          $t0, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = ctx->r8;
    // 0x80331410: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331414: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331418: lh          $t7, 0xBE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBE);
    // 0x8033141C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331420: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80331424: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331428: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033142C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331430: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331434: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331438: sw          $t6, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = ctx->r14;
    // 0x8033143C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331440: nop

    // 0x80331444: lh          $t1, 0xC0($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XC0);
    // 0x80331448: nop

    // 0x8033144C: beq         $t1, $zero, L_803314AC
    if (ctx->r9 == 0) {
        // 0x80331450: nop
    
            goto L_803314AC;
    }
    // 0x80331450: nop

    // 0x80331454: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331458: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033145C: lh          $t0, 0xC0($t4)
    ctx->r8 = MEM_H(ctx->r12, 0XC0);
    // 0x80331460: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x80331464: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80331468: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8033146C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331470: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331474: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331478: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033147C: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80331480: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331484: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331488: lh          $t7, 0xC0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XC0);
    // 0x8033148C: nop

    // 0x80331490: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80331494: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80331498: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033149C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x803314A0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803314A4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803314A8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803314AC:
    // 0x803314AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314B4: jal         0x8001B4AC
    // 0x803314B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803314B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803314BC: beq         $v0, $zero, L_803315A4
    if (ctx->r2 == 0) {
        // 0x803314C0: nop
    
            goto L_803315A4;
    }
    // 0x803314C0: nop

    // 0x803314C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803314C8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803314CC: sh          $t9, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r25;
    // 0x803314D0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803314D4: nop

    // 0x803314D8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803314DC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803314E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803314E4: lh          $t3, 0xBE($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XBE);
    // 0x803314E8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803314EC: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x803314F0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803314F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803314F8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x803314FC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331500: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331504: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
    // 0x80331508: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033150C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331510: lh          $t7, 0xBE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBE);
    // 0x80331514: nop

    // 0x80331518: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8033151C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80331520: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331524: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80331528: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033152C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331530: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80331534: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331538: nop

    // 0x8033153C: lh          $t8, 0xC0($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XC0);
    // 0x80331540: nop

    // 0x80331544: beq         $t8, $zero, L_803315A4
    if (ctx->r24 == 0) {
        // 0x80331548: nop
    
            goto L_803315A4;
    }
    // 0x80331548: nop

    // 0x8033154C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331550: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331554: lh          $t3, 0xC0($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XC0);
    // 0x80331558: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8033155C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331560: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331564: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331568: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033156C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331570: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331574: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x80331578: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033157C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331580: lh          $t5, 0xC0($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XC0);
    // 0x80331584: nop

    // 0x80331588: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033158C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331590: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331594: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331598: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033159C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803315A0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803315A4:
    // 0x803315A4: jal         0x8033BD74
    // 0x803315A8: nop

    func_bagular3_8033BD74(rdram, ctx);
        goto after_4;
    // 0x803315A8: nop

    after_4:
    // 0x803315AC: b           L_803315B4
    // 0x803315B0: nop

        goto L_803315B4;
    // 0x803315B0: nop

L_803315B4:
    // 0x803315B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803315B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803315BC: jr          $ra
    // 0x803315C0: nop

    return;
    // 0x803315C0: nop

;}
RECOMP_FUNC void func_bagular3_8033A224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A224: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A228: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A22C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A230: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A234: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A238: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A23C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A240: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A244: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A248: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A24C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A250: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A254: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A258: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A25C: nop

    // 0x8033A260: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A264: nop

    // 0x8033A268: bne         $t1, $zero, L_8033A2C0
    if (ctx->r9 != 0) {
        // 0x8033A26C: nop
    
            goto L_8033A2C0;
    }
    // 0x8033A26C: nop

    // 0x8033A270: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A274: nop

    // 0x8033A278: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A27C: nop

    // 0x8033A280: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A284: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A288: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A28C: nop

    // 0x8033A290: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A294: nop

    // 0x8033A298: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A29C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A2A0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A2A4: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x8033A2A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A2AC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A2B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A2B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8033A2B8: jal         0x8001C0EC
    // 0x8033A2BC: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A2BC: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_8033A2C0:
    // 0x8033A2C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A2C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A2C8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033A2CC: nop

    // 0x8033A2D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A2D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A2D8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A2DC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A2E0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A2E4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A2E8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033A2EC: nop

    // 0x8033A2F0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033A2F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A2F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A2FC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033A300: nop

    // 0x8033A304: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033A308: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A30C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A310: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A314: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A318: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A31C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033A320: nop

    // 0x8033A324: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033A328: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A32C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A330: jal         0x8001B4AC
    // 0x8033A334: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A334: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A338: beq         $v0, $zero, L_8033A358
    if (ctx->r2 == 0) {
        // 0x8033A33C: nop
    
            goto L_8033A358;
    }
    // 0x8033A33C: nop

    // 0x8033A340: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033A344: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8033A348: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033A34C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A350: nop

    // 0x8033A354: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033A358:
    // 0x8033A358: b           L_8033A360
    // 0x8033A35C: nop

        goto L_8033A360;
    // 0x8033A35C: nop

L_8033A360:
    // 0x8033A360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A368: jr          $ra
    // 0x8033A36C: nop

    return;
    // 0x8033A36C: nop

;}
RECOMP_FUNC void func_bagular3_80334714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334714: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033471C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334720: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334724: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334728: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033472C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334730: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334734: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334738: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033473C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334740: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334744: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334748: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033474C: nop

    // 0x80334750: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334754: nop

    // 0x80334758: bne         $t1, $zero, L_80334834
    if (ctx->r9 != 0) {
        // 0x8033475C: nop
    
            goto L_80334834;
    }
    // 0x8033475C: nop

    // 0x80334760: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334764: nop

    // 0x80334768: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033476C: nop

    // 0x80334770: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334774: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334778: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033477C: nop

    // 0x80334780: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334784: nop

    // 0x80334788: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033478C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334790: nop

    // 0x80334794: sh          $zero, 0x108($t7)
    MEM_H(0X108, ctx->r15) = 0;
    // 0x80334798: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033479C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803347A0: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x803347A4: nop

    // 0x803347A8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803347AC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803347B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803347B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803347B8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803347BC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803347C0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803347C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803347C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803347CC: lh          $t3, 0xEA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XEA);
    // 0x803347D0: nop

    // 0x803347D4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803347D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803347DC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803347E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803347E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803347E8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803347EC: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803347F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347F8: jal         0x8001BBDC
    // 0x803347FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x803347FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80334800: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334808: lh          $a0, 0xE8($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XE8);
    // 0x8033480C: jal         0x8001BBDC
    // 0x80334810: nop

    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80334810: nop

    after_1:
    // 0x80334814: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80334818: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033481C: lh          $a0, 0xEA($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XEA);
    // 0x80334820: jal         0x8001BBDC
    // 0x80334824: nop

    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80334824: nop

    after_2:
    // 0x80334828: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033482C: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x80334830: sh          $t5, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r13;
L_80334834:
    // 0x80334834: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334838: nop

    // 0x8033483C: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80334840: nop

    // 0x80334844: bne         $t9, $zero, L_8033488C
    if (ctx->r25 != 0) {
        // 0x80334848: nop
    
            goto L_8033488C;
    }
    // 0x80334848: nop

    // 0x8033484C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334850: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334854: jal         0x8001BB34
    // 0x80334858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80334858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8033485C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334860: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334864: lh          $a0, 0xE8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XE8);
    // 0x80334868: jal         0x8001BB34
    // 0x8033486C: nop

    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x8033486C: nop

    after_4:
    // 0x80334870: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334878: lh          $a0, 0xEA($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XEA);
    // 0x8033487C: jal         0x8001BB34
    // 0x80334880: nop

    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x80334880: nop

    after_5:
    // 0x80334884: b           L_803348A4
    // 0x80334888: nop

        goto L_803348A4;
    // 0x80334888: nop

L_8033488C:
    // 0x8033488C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334890: nop

    // 0x80334894: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80334898: nop

    // 0x8033489C: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x803348A0: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_803348A4:
    // 0x803348A4: b           L_803348AC
    // 0x803348A8: nop

        goto L_803348AC;
    // 0x803348A8: nop

L_803348AC:
    // 0x803348AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803348B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803348B4: jr          $ra
    // 0x803348B8: nop

    return;
    // 0x803348B8: nop

;}
RECOMP_FUNC void func_bagular3_80336280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336280: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336284: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336288: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033628C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336290: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336294: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336298: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033629C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803362A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803362A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803362A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803362AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803362B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803362B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803362B8: nop

    // 0x803362BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803362C0: nop

    // 0x803362C4: bne         $t1, $zero, L_8033631C
    if (ctx->r9 != 0) {
        // 0x803362C8: nop
    
            goto L_8033631C;
    }
    // 0x803362C8: nop

    // 0x803362CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803362D0: nop

    // 0x803362D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803362D8: nop

    // 0x803362DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803362E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803362E4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803362E8: nop

    // 0x803362EC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803362F0: nop

    // 0x803362F4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803362F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803362FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336300: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80336304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336308: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033630C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336310: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80336314: jal         0x8001C0EC
    // 0x80336318: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336318: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_8033631C:
    // 0x8033631C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336320: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336324: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80336328: nop

    // 0x8033632C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80336330: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336334: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336338: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033633C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80336340: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336344: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80336348: nop

    // 0x8033634C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80336350: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336354: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336358: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033635C: nop

    // 0x80336360: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80336364: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336368: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033636C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336370: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80336374: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80336378: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033637C: nop

    // 0x80336380: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80336384: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336388: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033638C: jal         0x8001B4AC
    // 0x80336390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80336390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80336394: beq         $v0, $zero, L_803363B4
    if (ctx->r2 == 0) {
        // 0x80336398: nop
    
            goto L_803363B4;
    }
    // 0x80336398: nop

    // 0x8033639C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803363A0: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x803363A4: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803363A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803363AC: nop

    // 0x803363B0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803363B4:
    // 0x803363B4: b           L_803363BC
    // 0x803363B8: nop

        goto L_803363BC;
    // 0x803363B8: nop

L_803363BC:
    // 0x803363BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803363C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803363C4: jr          $ra
    // 0x803363C8: nop

    return;
    // 0x803363C8: nop

;}
RECOMP_FUNC void func_bagular3_8033352C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033352C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333534: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333538: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033353C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333548: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033354C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333550: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333554: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333558: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033355C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333560: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333564: nop

    // 0x80333568: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033356C: nop

    // 0x80333570: bne         $t1, $zero, L_80333618
    if (ctx->r9 != 0) {
        // 0x80333574: nop
    
            goto L_80333618;
    }
    // 0x80333574: nop

    // 0x80333578: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033357C: nop

    // 0x80333580: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333584: nop

    // 0x80333588: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033358C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333590: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333594: nop

    // 0x80333598: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033359C: nop

    // 0x803335A0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803335A4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803335A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803335AC: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x803335B0: jal         0x8001BBDC
    // 0x803335B4: nop

    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x803335B4: nop

    after_0:
    // 0x803335B8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803335BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803335C0: lh          $a0, 0xEA($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XEA);
    // 0x803335C4: jal         0x8001BBDC
    // 0x803335C8: nop

    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803335C8: nop

    after_1:
    // 0x803335CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335D0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803335D4: addiu       $t9, $t9, -0x4910
    ctx->r25 = ADD32(ctx->r25, -0X4910);
    // 0x803335D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335DC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803335E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803335E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803335E8: jal         0x8001C0EC
    // 0x803335EC: addiu       $a3, $zero, 0x151
    ctx->r7 = ADD32(0, 0X151);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803335EC: addiu       $a3, $zero, 0x151
    ctx->r7 = ADD32(0, 0X151);
    after_2:
    // 0x803335F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335F8: jal         0x8001BBDC
    // 0x803335FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x803335FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80333600: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333604: nop

    // 0x80333608: sh          $zero, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = 0;
    // 0x8033360C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333610: nop

    // 0x80333614: sh          $zero, 0xAE($t1)
    MEM_H(0XAE, ctx->r9) = 0;
L_80333618:
    // 0x80333618: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033361C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333620: jal         0x8002A46C
    // 0x80333624: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x80333624: nop

    after_4:
    // 0x80333628: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8033362C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333630: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333634: lwc1        $f14, 0x1C($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80333638: jal         0x80015538
    // 0x8033363C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x8033363C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_5:
    // 0x80333640: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80333644: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80333648: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033364C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333650: nop

    // 0x80333654: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80333658: nop

    // 0x8033365C: bc1f        L_803336D8
    if (!c1cs) {
        // 0x80333660: nop
    
            goto L_803336D8;
    }
    // 0x80333660: nop

    // 0x80333664: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333668: lwc1        $f8, -0x3D8C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D8C);
    // 0x8033366C: nop

    // 0x80333670: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80333674: nop

    // 0x80333678: bc1f        L_803336D8
    if (!c1cs) {
        // 0x8033367C: nop
    
            goto L_803336D8;
    }
    // 0x8033367C: nop

    // 0x80333680: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333684: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333688: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033368C: nop

    // 0x80333690: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80333694: nop

    // 0x80333698: bc1f        L_803336B8
    if (!c1cs) {
        // 0x8033369C: nop
    
            goto L_803336B8;
    }
    // 0x8033369C: nop

    // 0x803336A0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803336A4: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x803336A8: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x803336AC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803336B0: b           L_803336D0
    // 0x803336B4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_803336D0;
    // 0x803336B4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803336B8:
    // 0x803336B8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803336BC: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x803336C0: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x803336C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803336C8: nop

    // 0x803336CC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803336D0:
    // 0x803336D0: b           L_803336F0
    // 0x803336D4: nop

        goto L_803336F0;
    // 0x803336D4: nop

L_803336D8:
    // 0x803336D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803336DC: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x803336E0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803336E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803336E8: nop

    // 0x803336EC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803336F0:
    // 0x803336F0: b           L_803336F8
    // 0x803336F4: nop

        goto L_803336F8;
    // 0x803336F4: nop

L_803336F8:
    // 0x803336F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803336FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80333700: jr          $ra
    // 0x80333704: nop

    return;
    // 0x80333704: nop

;}
RECOMP_FUNC void func_bagular3_80337BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337BF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337C00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337C04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337C08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337C0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337C10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337C14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337C18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337C1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337C20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337C24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337C28: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337C2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337C30: nop

    // 0x80337C34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337C38: nop

    // 0x80337C3C: bne         $t1, $zero, L_80337C94
    if (ctx->r9 != 0) {
        // 0x80337C40: nop
    
            goto L_80337C94;
    }
    // 0x80337C40: nop

    // 0x80337C44: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337C48: nop

    // 0x80337C4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337C50: nop

    // 0x80337C54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337C58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337C5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337C60: nop

    // 0x80337C64: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337C68: nop

    // 0x80337C6C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337C70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337C74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337C78: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80337C7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337C80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337C84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337C88: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80337C8C: jal         0x8001C0EC
    // 0x80337C90: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337C90: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80337C94:
    // 0x80337C94: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337C98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337C9C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337CA0: nop

    // 0x80337CA4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337CA8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337CAC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337CB0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337CB4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337CB8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337CBC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337CC0: nop

    // 0x80337CC4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80337CC8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80337CCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337CD0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80337CD4: nop

    // 0x80337CD8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337CDC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337CE0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337CE4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337CE8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80337CEC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337CF0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80337CF4: nop

    // 0x80337CF8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80337CFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337D00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337D04: jal         0x8001B4AC
    // 0x80337D08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337D08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337D0C: beq         $v0, $zero, L_80337D2C
    if (ctx->r2 == 0) {
        // 0x80337D10: nop
    
            goto L_80337D2C;
    }
    // 0x80337D10: nop

    // 0x80337D14: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337D18: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x80337D1C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80337D20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337D24: nop

    // 0x80337D28: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337D2C:
    // 0x80337D2C: b           L_80337D34
    // 0x80337D30: nop

        goto L_80337D34;
    // 0x80337D30: nop

L_80337D34:
    // 0x80337D34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337D38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337D3C: jr          $ra
    // 0x80337D40: nop

    return;
    // 0x80337D40: nop

;}
RECOMP_FUNC void func_bagular3_80338658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338658: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033865C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338660: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338664: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338668: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033866C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338670: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338674: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338678: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033867C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338680: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338684: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338688: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033868C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338690: nop

    // 0x80338694: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338698: nop

    // 0x8033869C: bne         $t1, $zero, L_803386F4
    if (ctx->r9 != 0) {
        // 0x803386A0: nop
    
            goto L_803386F4;
    }
    // 0x803386A0: nop

    // 0x803386A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803386A8: nop

    // 0x803386AC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803386B0: nop

    // 0x803386B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803386B8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803386BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803386C0: nop

    // 0x803386C4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803386C8: nop

    // 0x803386CC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803386D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803386D4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803386D8: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x803386DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803386E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803386E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803386E8: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x803386EC: jal         0x8001C0EC
    // 0x803386F0: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803386F0: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_803386F4:
    // 0x803386F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803386F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803386FC: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80338700: nop

    // 0x80338704: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80338708: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033870C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338710: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338714: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80338718: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033871C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80338720: nop

    // 0x80338724: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80338728: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033872C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338730: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80338734: nop

    // 0x80338738: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033873C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338740: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338744: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338748: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033874C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80338750: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80338754: nop

    // 0x80338758: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033875C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338760: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338764: jal         0x8001B4AC
    // 0x80338768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80338768: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033876C: beq         $v0, $zero, L_8033878C
    if (ctx->r2 == 0) {
        // 0x80338770: nop
    
            goto L_8033878C;
    }
    // 0x80338770: nop

    // 0x80338774: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80338778: addiu       $t2, $zero, 0x17
    ctx->r10 = ADD32(0, 0X17);
    // 0x8033877C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80338780: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338784: nop

    // 0x80338788: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033878C:
    // 0x8033878C: b           L_80338794
    // 0x80338790: nop

        goto L_80338794;
    // 0x80338790: nop

L_80338794:
    // 0x80338794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033879C: jr          $ra
    // 0x803387A0: nop

    return;
    // 0x803387A0: nop

;}
RECOMP_FUNC void func_bagular3_80337E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337E90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337E94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337E98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337E9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337EA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337EA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337EAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337EB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337EB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337EB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337EBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337EC0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337EC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337EC8: nop

    // 0x80337ECC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337ED0: nop

    // 0x80337ED4: bne         $t1, $zero, L_80337F2C
    if (ctx->r9 != 0) {
        // 0x80337ED8: nop
    
            goto L_80337F2C;
    }
    // 0x80337ED8: nop

    // 0x80337EDC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337EE0: nop

    // 0x80337EE4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337EE8: nop

    // 0x80337EEC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337EF0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337EF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337EF8: nop

    // 0x80337EFC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337F00: nop

    // 0x80337F04: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337F08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337F0C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337F10: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80337F14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337F18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337F20: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80337F24: jal         0x8001C0EC
    // 0x80337F28: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337F28: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80337F2C:
    // 0x80337F2C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337F30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337F34: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337F38: nop

    // 0x80337F3C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337F40: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337F44: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337F48: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337F4C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337F50: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337F54: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337F58: nop

    // 0x80337F5C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80337F60: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80337F64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337F68: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80337F6C: nop

    // 0x80337F70: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337F74: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337F78: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337F7C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337F80: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80337F84: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337F88: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80337F8C: nop

    // 0x80337F90: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80337F94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337F98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337F9C: jal         0x8001B4AC
    // 0x80337FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337FA4: beq         $v0, $zero, L_80337FC4
    if (ctx->r2 == 0) {
        // 0x80337FA8: nop
    
            goto L_80337FC4;
    }
    // 0x80337FA8: nop

    // 0x80337FAC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337FB0: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x80337FB4: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80337FB8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337FBC: nop

    // 0x80337FC0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337FC4:
    // 0x80337FC4: b           L_80337FCC
    // 0x80337FC8: nop

        goto L_80337FCC;
    // 0x80337FC8: nop

L_80337FCC:
    // 0x80337FCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337FD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337FD4: jr          $ra
    // 0x80337FD8: nop

    return;
    // 0x80337FD8: nop

;}
RECOMP_FUNC void func_bagular3_80332A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332A68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80332A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332A70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332A74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332A78: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332A7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332A80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332A88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332A8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332A90: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332A94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332A98: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332A9C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AA0: nop

    // 0x80332AA4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332AA8: nop

    // 0x80332AAC: bne         $t1, $zero, L_80332B2C
    if (ctx->r9 != 0) {
        // 0x80332AB0: nop
    
            goto L_80332B2C;
    }
    // 0x80332AB0: nop

    // 0x80332AB4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AB8: nop

    // 0x80332ABC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332AC0: nop

    // 0x80332AC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332AC8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332ACC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AD0: nop

    // 0x80332AD4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332AD8: nop

    // 0x80332ADC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332AE0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332AE8: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80332AEC: jal         0x8001BBDC
    // 0x80332AF0: nop

    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80332AF0: nop

    after_0:
    // 0x80332AF4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332AF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332AFC: lh          $a0, 0xEA($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XEA);
    // 0x80332B00: jal         0x8001BBDC
    // 0x80332B04: nop

    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80332B04: nop

    after_1:
    // 0x80332B08: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B0C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332B10: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332B14: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332B18: jal         0x80015538
    // 0x80332B1C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80332B1C: nop

    after_2:
    // 0x80332B20: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B24: nop

    // 0x80332B28: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
L_80332B2C:
    // 0x80332B2C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B30: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332B34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332B38: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80332B3C: nop

    // 0x80332B40: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80332B44: nop

    // 0x80332B48: bc1f        L_80332B68
    if (!c1cs) {
        // 0x80332B4C: nop
    
            goto L_80332B68;
    }
    // 0x80332B4C: nop

    // 0x80332B50: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B54: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80332B58: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332B5C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B60: b           L_80332B80
    // 0x80332B64: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_80332B80;
    // 0x80332B64: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80332B68:
    // 0x80332B68: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B6C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80332B70: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80332B74: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B78: nop

    // 0x80332B7C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80332B80:
    // 0x80332B80: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B88: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80332B8C: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332B90: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332B94: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332B98: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332B9C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332BA0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332BA4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332BA8: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80332BAC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80332BB0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332BB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332BB8: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80332BBC: jal         0x80015538
    // 0x80332BC0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80332BC0: nop

    after_3:
    // 0x80332BC4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80332BC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332BCC: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x80332BD0: nop

    // 0x80332BD4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332BD8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332BDC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332BE0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332BE4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332BE8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332BEC: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80332BF0: b           L_80332BF8
    // 0x80332BF4: nop

        goto L_80332BF8;
    // 0x80332BF4: nop

L_80332BF8:
    // 0x80332BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332BFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80332C00: jr          $ra
    // 0x80332C04: nop

    return;
    // 0x80332C04: nop

;}
RECOMP_FUNC void func_bagular3_80333C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333C54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333C58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333C5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333C60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333C64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333C68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333C6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333C74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333C7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333C80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333C84: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333C88: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C8C: nop

    // 0x80333C90: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333C94: nop

    // 0x80333C98: bne         $t1, $zero, L_80333D70
    if (ctx->r9 != 0) {
        // 0x80333C9C: nop
    
            goto L_80333D70;
    }
    // 0x80333C9C: nop

    // 0x80333CA0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CA4: nop

    // 0x80333CA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333CAC: nop

    // 0x80333CB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333CB4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333CB8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CBC: nop

    // 0x80333CC0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333CC4: nop

    // 0x80333CC8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333CCC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CD0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80333CD4: addiu       $t8, $t8, -0x4908
    ctx->r24 = ADD32(ctx->r24, -0X4908);
    // 0x80333CD8: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80333CDC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80333CE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333CE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333CE8: jal         0x8001C0EC
    // 0x80333CEC: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333CEC: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_0:
    // 0x80333CF0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CF4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80333CF8: addiu       $t0, $t0, -0x4908
    ctx->r8 = ADD32(ctx->r8, -0X4908);
    // 0x80333CFC: lh          $a0, 0xEA($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XEA);
    // 0x80333D00: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80333D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333D08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333D0C: jal         0x8001C0EC
    // 0x80333D10: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80333D10: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_1:
    // 0x80333D14: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333D1C: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x80333D20: jal         0x8001BBDC
    // 0x80333D24: nop

    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80333D24: nop

    after_2:
    // 0x80333D28: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333D30: lh          $a0, 0xEA($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XEA);
    // 0x80333D34: jal         0x8001BBDC
    // 0x80333D38: nop

    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80333D38: nop

    after_3:
    // 0x80333D3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333D40: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D44: nop

    // 0x80333D48: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x80333D4C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D50: nop

    // 0x80333D54: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80333D58: nop

    // 0x80333D5C: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x80333D60: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333D64: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D68: nop

    // 0x80333D6C: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
L_80333D70:
    // 0x80333D70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D78: jal         0x8002A8B4
    // 0x80333D7C: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x80333D7C: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_4:
    // 0x80333D80: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D84: nop

    // 0x80333D88: lwc1        $f10, 0x3C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80333D8C: nop

    // 0x80333D90: swc1        $f10, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f10.u32l;
    // 0x80333D94: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D9C: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x80333DA0: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80333DA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80333DA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333DAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333DB0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333DB4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333DB8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333DBC: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x80333DC0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333DC4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80333DC8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80333DCC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80333DD0: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80333DD4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333DD8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333DDC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333DE0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333DE4: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x80333DE8: lwc1        $f18, 0x1C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80333DEC: nop

    // 0x80333DF0: swc1        $f18, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f18.u32l;
    // 0x80333DF4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333DF8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333DFC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80333E00: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80333E04: jal         0x80015538
    // 0x80333E08: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80333E08: nop

    after_5:
    // 0x80333E0C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E14: lh          $t7, 0xEA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEA);
    // 0x80333E18: nop

    // 0x80333E1C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333E20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333E24: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333E28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333E2C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333E30: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333E34: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80333E38: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E3C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80333E40: lh          $t0, 0xEA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEA);
    // 0x80333E44: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80333E48: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333E4C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333E50: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333E54: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333E58: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333E5C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80333E60: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80333E64: nop

    // 0x80333E68: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x80333E6C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E70: nop

    // 0x80333E74: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80333E78: nop

    // 0x80333E7C: bne         $t6, $zero, L_80333F7C
    if (ctx->r14 != 0) {
        // 0x80333E80: nop
    
            goto L_80333F7C;
    }
    // 0x80333E80: nop

    // 0x80333E84: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E88: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80333E8C: sh          $t5, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r13;
    // 0x80333E90: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E98: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80333E9C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80333EA0: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80333EA4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80333EA8: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80333EAC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80333EB0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333EB4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333EB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333EBC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333EC0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333EC4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333EC8: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333ECC: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80333ED0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333ED4: jal         0x80027464
    // 0x80333ED8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80333ED8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80333EDC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80333EE0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333EE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333EE8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80333EEC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333EF0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333EF4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80333EF8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333EFC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333F00: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
    // 0x80333F04: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F0C: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80333F10: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x80333F14: lw          $a3, 0x4($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X4);
    // 0x80333F18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80333F1C: lh          $t2, 0xEA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XEA);
    // 0x80333F20: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80333F24: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80333F28: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80333F2C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333F30: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80333F34: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333F38: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333F3C: lwc1        $f16, 0x416C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333F40: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80333F44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333F48: jal         0x80027464
    // 0x80333F4C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80333F4C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x80333F50: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80333F54: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333F58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F5C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333F60: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333F64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333F68: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333F6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333F70: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333F74: b           L_80333F94
    // 0x80333F78: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
        goto L_80333F94;
    // 0x80333F78: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
L_80333F7C:
    // 0x80333F7C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F80: nop

    // 0x80333F84: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80333F88: nop

    // 0x80333F8C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80333F90: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_80333F94:
    // 0x80333F94: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F98: nop

    // 0x80333F9C: lh          $t3, 0xAE($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAE);
    // 0x80333FA0: nop

    // 0x80333FA4: bne         $t3, $zero, L_803340A8
    if (ctx->r11 != 0) {
        // 0x80333FA8: nop
    
            goto L_803340A8;
    }
    // 0x80333FA8: nop

    // 0x80333FAC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FB0: nop

    // 0x80333FB4: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x80333FB8: nop

    // 0x80333FBC: bne         $t2, $zero, L_803340A0
    if (ctx->r10 != 0) {
        // 0x80333FC0: nop
    
            goto L_803340A0;
    }
    // 0x80333FC0: nop

    // 0x80333FC4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FC8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80333FCC: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80333FD0: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80333FD4: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80333FD8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80333FDC: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80333FE0: addiu       $a1, $a1, -0x3E98
    ctx->r5 = ADD32(ctx->r5, -0X3E98);
    // 0x80333FE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333FE8: jal         0x80027464
    // 0x80333FEC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80333FEC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80333FF0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80333FF4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333FF8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80333FFC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80334000: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80334004: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334008: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8033400C: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80334010: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334014: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334018: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033401C: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x80334020: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334024: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334028: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033402C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334030: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334034: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334038: lh          $t8, 0xC2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XC2);
    // 0x8033403C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334040: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334044: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334048: sh          $t8, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r24;
    // 0x8033404C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334050: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334054: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80334058: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033405C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334060: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334064: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334068: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033406C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334070: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334074: sh          $t4, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r12;
    // 0x80334078: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033407C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334080: jal         0x8001BBDC
    // 0x80334084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x80334084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80334088: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033408C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80334090: sh          $t5, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r13;
    // 0x80334094: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334098: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033409C: sh          $t0, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = ctx->r8;
L_803340A0:
    // 0x803340A0: b           L_803340C0
    // 0x803340A4: nop

        goto L_803340C0;
    // 0x803340A4: nop

L_803340A8:
    // 0x803340A8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803340AC: nop

    // 0x803340B0: lh          $t3, 0xAE($t8)
    ctx->r11 = MEM_H(ctx->r24, 0XAE);
    // 0x803340B4: nop

    // 0x803340B8: addiu       $t2, $t3, -0x1
    ctx->r10 = ADD32(ctx->r11, -0X1);
    // 0x803340BC: sh          $t2, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = ctx->r10;
L_803340C0:
    // 0x803340C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803340C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803340C8: jal         0x8002A46C
    // 0x803340CC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_10;
    // 0x803340CC: nop

    after_10:
    // 0x803340D0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x803340D4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803340D8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803340DC: lwc1        $f14, 0x1C($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803340E0: jal         0x80015538
    // 0x803340E4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x803340E4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_11:
    // 0x803340E8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x803340EC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803340F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803340F4: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803340F8: nop

    // 0x803340FC: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80334100: nop

    // 0x80334104: bc1f        L_80334168
    if (!c1cs) {
        // 0x80334108: nop
    
            goto L_80334168;
    }
    // 0x80334108: nop

    // 0x8033410C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334110: lwc1        $f10, -0x3D84($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3D84);
    // 0x80334114: nop

    // 0x80334118: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8033411C: nop

    // 0x80334120: bc1f        L_80334168
    if (!c1cs) {
        // 0x80334124: nop
    
            goto L_80334168;
    }
    // 0x80334124: nop

    // 0x80334128: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033412C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80334130: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80334134: nop

    // 0x80334138: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8033413C: nop

    // 0x80334140: bc1f        L_80334160
    if (!c1cs) {
        // 0x80334144: nop
    
            goto L_80334160;
    }
    // 0x80334144: nop

    // 0x80334148: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033414C: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x80334150: sh          $t4, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r12;
    // 0x80334154: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334158: nop

    // 0x8033415C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80334160:
    // 0x80334160: b           L_80334180
    // 0x80334164: nop

        goto L_80334180;
    // 0x80334164: nop

L_80334168:
    // 0x80334168: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033416C: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x80334170: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80334174: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334178: nop

    // 0x8033417C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80334180:
    // 0x80334180: jal         0x8033BE7C
    // 0x80334184: nop

    func_bagular3_8033BE7C(rdram, ctx);
        goto after_12;
    // 0x80334184: nop

    after_12:
    // 0x80334188: b           L_80334190
    // 0x8033418C: nop

        goto L_80334190;
    // 0x8033418C: nop

L_80334190:
    // 0x80334190: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334194: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80334198: jr          $ra
    // 0x8033419C: nop

    return;
    // 0x8033419C: nop

;}
RECOMP_FUNC void func_bagular3_8033B180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B180: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B188: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B18C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B190: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B194: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B19C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B1A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B1A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B1A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B1AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B1B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B1B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B1B8: nop

    // 0x8033B1BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B1C0: nop

    // 0x8033B1C4: bne         $t1, $zero, L_8033B238
    if (ctx->r9 != 0) {
        // 0x8033B1C8: nop
    
            goto L_8033B238;
    }
    // 0x8033B1C8: nop

    // 0x8033B1CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B1D0: nop

    // 0x8033B1D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B1D8: nop

    // 0x8033B1DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B1E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B1E4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B1E8: nop

    // 0x8033B1EC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B1F0: nop

    // 0x8033B1F4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B1F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B1FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033B200: addiu       $t7, $t7, -0x4738
    ctx->r15 = ADD32(ctx->r15, -0X4738);
    // 0x8033B204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B208: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033B20C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033B210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033B214: jal         0x8001C0EC
    // 0x8033B218: addiu       $a3, $zero, 0x145
    ctx->r7 = ADD32(0, 0X145);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033B218: addiu       $a3, $zero, 0x145
    ctx->r7 = ADD32(0, 0X145);
    after_0:
    // 0x8033B21C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B220: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B228: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x8033B22C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033B230: jal         0x800175F0
    // 0x8033B234: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033B234: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8033B238:
    // 0x8033B238: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B23C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B240: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033B244: nop

    // 0x8033B248: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033B24C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033B250: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033B254: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033B258: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033B25C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033B260: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033B264: nop

    // 0x8033B268: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033B26C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B270: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B274: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033B278: nop

    // 0x8033B27C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033B280: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033B284: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033B288: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033B28C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033B290: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033B294: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033B298: nop

    // 0x8033B29C: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033B2A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B2A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B2A8: jal         0x8001B4AC
    // 0x8033B2AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033B2AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8033B2B0: beq         $v0, $zero, L_8033B2D0
    if (ctx->r2 == 0) {
        // 0x8033B2B4: nop
    
            goto L_8033B2D0;
    }
    // 0x8033B2B4: nop

    // 0x8033B2B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2BC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8033B2C0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033B2C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2C8: nop

    // 0x8033B2CC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033B2D0:
    // 0x8033B2D0: b           L_8033B2D8
    // 0x8033B2D4: nop

        goto L_8033B2D8;
    // 0x8033B2D4: nop

L_8033B2D8:
    // 0x8033B2D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B2DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B2E0: jr          $ra
    // 0x8033B2E4: nop

    return;
    // 0x8033B2E4: nop

;}
RECOMP_FUNC void func_bagular3_803371C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803371C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803371CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803371D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803371D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803371D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803371DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803371E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803371E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803371E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803371EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803371F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803371F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803371F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803371FC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337200: nop

    // 0x80337204: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337208: nop

    // 0x8033720C: bne         $t1, $zero, L_80337264
    if (ctx->r9 != 0) {
        // 0x80337210: nop
    
            goto L_80337264;
    }
    // 0x80337210: nop

    // 0x80337214: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337218: nop

    // 0x8033721C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337220: nop

    // 0x80337224: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337228: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033722C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337230: nop

    // 0x80337234: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337238: nop

    // 0x8033723C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337240: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337244: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337248: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x8033724C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337250: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337258: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8033725C: jal         0x8001C0EC
    // 0x80337260: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337260: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80337264:
    // 0x80337264: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337268: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033726C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337270: nop

    // 0x80337274: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337278: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033727C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337280: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337284: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337288: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033728C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337290: nop

    // 0x80337294: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80337298: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033729C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803372A0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803372A4: nop

    // 0x803372A8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803372AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803372B0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803372B4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803372B8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803372BC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803372C0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803372C4: nop

    // 0x803372C8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803372CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803372D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803372D4: jal         0x8001B4AC
    // 0x803372D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803372D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803372DC: beq         $v0, $zero, L_803372FC
    if (ctx->r2 == 0) {
        // 0x803372E0: nop
    
            goto L_803372FC;
    }
    // 0x803372E0: nop

    // 0x803372E4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803372E8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x803372EC: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803372F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803372F4: nop

    // 0x803372F8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803372FC:
    // 0x803372FC: b           L_80337304
    // 0x80337300: nop

        goto L_80337304;
    // 0x80337300: nop

L_80337304:
    // 0x80337304: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337308: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033730C: jr          $ra
    // 0x80337310: nop

    return;
    // 0x80337310: nop

;}
RECOMP_FUNC void func_80331D28_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331D2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331D30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331D48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331D54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331D58: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331D5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331D60: nop

    // 0x80331D64: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331D68: nop

    // 0x80331D6C: bne         $t1, $zero, L_80331DC4
    if (ctx->r9 != 0) {
        // 0x80331D70: nop
    
            goto L_80331DC4;
    }
    // 0x80331D70: nop

    // 0x80331D74: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331D78: nop

    // 0x80331D7C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331D80: nop

    // 0x80331D84: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331D88: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331D8C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331D90: nop

    // 0x80331D94: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331D98: nop

    // 0x80331D9C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331DA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DA4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331DA8: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331DAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DB0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331DB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80331DBC: jal         0x8001C0EC
    // 0x80331DC0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331DC0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80331DC4:
    // 0x80331DC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DCC: jal         0x8001B4AC
    // 0x80331DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331DD4: beq         $v0, $zero, L_80331DF4
    if (ctx->r2 == 0) {
        // 0x80331DD8: nop
    
            goto L_80331DF4;
    }
    // 0x80331DD8: nop

    // 0x80331DDC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331DE0: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x80331DE4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331DE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331DEC: nop

    // 0x80331DF0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331DF4:
    // 0x80331DF4: b           L_80331DFC
    // 0x80331DF8: nop

        goto L_80331DFC;
    // 0x80331DF8: nop

L_80331DFC:
    // 0x80331DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331E04: jr          $ra
    // 0x80331E08: nop

    return;
    // 0x80331E08: nop

;}
RECOMP_FUNC void func_80331518_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331518: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033151C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331520: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331524: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331528: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033152C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331530: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331534: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331538: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033153C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331540: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331544: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331548: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033154C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331550: nop

    // 0x80331554: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331558: nop

    // 0x8033155C: bne         $t1, $zero, L_80331668
    if (ctx->r9 != 0) {
        // 0x80331560: nop
    
            goto L_80331668;
    }
    // 0x80331560: nop

    // 0x80331564: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331568: nop

    // 0x8033156C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331570: nop

    // 0x80331574: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331578: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033157C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331580: nop

    // 0x80331584: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331588: nop

    // 0x8033158C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331590: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331594: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331598: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033159C: nop

    // 0x803315A0: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x803315A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315A8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803315AC: addiu       $t8, $t8, -0x6380
    ctx->r24 = ADD32(ctx->r24, -0X6380);
    // 0x803315B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315B4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803315B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803315BC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x803315C0: jal         0x8001C0EC
    // 0x803315C4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803315C4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x803315C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803315D0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803315D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315D8: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x803315DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803315E0: jal         0x8001ABF4
    // 0x803315E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803315E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803315E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803315F0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803315F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315F8: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x803315FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331600: jal         0x8001ABF4
    // 0x80331604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80331608: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033160C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331610: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80331614: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331618: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x8033161C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331620: jal         0x8001ABF4
    // 0x80331624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80331624: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80331628: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033162C: nop

    // 0x80331630: lh          $t0, 0x100($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X100);
    // 0x80331634: nop

    // 0x80331638: slti        $at, $t0, 0x7
    ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
    // 0x8033163C: beq         $at, $zero, L_80331654
    if (ctx->r1 == 0) {
        // 0x80331640: nop
    
            goto L_80331654;
    }
    // 0x80331640: nop

    // 0x80331644: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331648: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8033164C: b           L_80331660
    // 0x80331650: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
        goto L_80331660;
    // 0x80331650: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
L_80331654:
    // 0x80331654: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331658: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8033165C: sh          $t4, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r12;
L_80331660:
    // 0x80331660: b           L_803316C4
    // 0x80331664: nop

        goto L_803316C4;
    // 0x80331664: nop

L_80331668:
    // 0x80331668: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033166C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331670: lbu         $t5, 0x132($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X132);
    // 0x80331674: nop

    // 0x80331678: bne         $t5, $at, L_803316C4
    if (ctx->r13 != ctx->r1) {
        // 0x8033167C: nop
    
            goto L_803316C4;
    }
    // 0x8033167C: nop

    // 0x80331680: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331684: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80331688: sb          $t7, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r15;
    // 0x8033168C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80331690: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331694: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331698: nop

    // 0x8033169C: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x803316A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316A4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803316A8: addiu       $t0, $t0, -0x6380
    ctx->r8 = ADD32(ctx->r8, -0X6380);
    // 0x803316AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316B0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803316B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803316B8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x803316BC: jal         0x8001C0EC
    // 0x803316C0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x803316C0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_4:
L_803316C4:
    // 0x803316C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316CC: jal         0x8002A8B4
    // 0x803316D0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x803316D0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_5:
    // 0x803316D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803316D8: nop

    // 0x803316DC: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803316E0: nop

    // 0x803316E4: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
    // 0x803316E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316F0: jal         0x80029C40
    // 0x803316F4: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x803316F4: nop

    after_6:
    // 0x803316F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803316FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331700: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331704: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033170C: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x80331710: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331714: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331718: jal         0x80029018
    // 0x8033171C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x8033171C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x80331720: beq         $v0, $zero, L_8033177C
    if (ctx->r2 == 0) {
        // 0x80331724: nop
    
            goto L_8033177C;
    }
    // 0x80331724: nop

    // 0x80331728: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033172C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331730: nop

    // 0x80331734: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
    // 0x80331738: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033173C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331740: nop

    // 0x80331744: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x80331748: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033174C: nop

    // 0x80331750: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80331754: nop

    // 0x80331758: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
    // 0x8033175C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331760: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80331764: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80331768: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033176C: nop

    // 0x80331770: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80331774: b           L_803317B4
    // 0x80331778: nop

        goto L_803317B4;
    // 0x80331778: nop

L_8033177C:
    // 0x8033177C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331780: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331784: jal         0x8001B4AC
    // 0x80331788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x80331788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8033178C: beq         $v0, $zero, L_803317AC
    if (ctx->r2 == 0) {
        // 0x80331790: nop
    
            goto L_803317AC;
    }
    // 0x80331790: nop

    // 0x80331794: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331798: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x8033179C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803317A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803317A4: nop

    // 0x803317A8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803317AC:
    // 0x803317AC: b           L_803317B4
    // 0x803317B0: nop

        goto L_803317B4;
    // 0x803317B0: nop

L_803317B4:
    // 0x803317B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803317B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803317BC: jr          $ra
    // 0x803317C0: nop

    return;
    // 0x803317C0: nop

;}
RECOMP_FUNC void func_80330B00_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330B00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330B04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330B08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330B0C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330B10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330B18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330B2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330B30: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330B34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330B38: nop

    // 0x80330B3C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330B40: nop

    // 0x80330B44: bne         $t1, $zero, L_80330B9C
    if (ctx->r9 != 0) {
        // 0x80330B48: nop
    
            goto L_80330B9C;
    }
    // 0x80330B48: nop

    // 0x80330B4C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330B50: nop

    // 0x80330B54: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330B58: nop

    // 0x80330B5C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330B60: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330B64: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330B68: nop

    // 0x80330B6C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330B70: nop

    // 0x80330B74: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330B78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B7C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330B80: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330B84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330B90: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80330B94: jal         0x8001C0EC
    // 0x80330B98: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330B98: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80330B9C:
    // 0x80330B9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BA4: jal         0x8002A8B4
    // 0x80330BA8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330BA8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x80330BAC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330BB0: nop

    // 0x80330BB4: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330BB8: nop

    // 0x80330BBC: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330BC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BC8: jal         0x8001B4AC
    // 0x80330BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330BD0: beq         $v0, $zero, L_80330BF0
    if (ctx->r2 == 0) {
        // 0x80330BD4: nop
    
            goto L_80330BF0;
    }
    // 0x80330BD4: nop

    // 0x80330BD8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330BDC: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80330BE0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330BE4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330BE8: nop

    // 0x80330BEC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330BF0:
    // 0x80330BF0: b           L_80330BF8
    // 0x80330BF4: nop

        goto L_80330BF8;
    // 0x80330BF4: nop

L_80330BF8:
    // 0x80330BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330C00: jr          $ra
    // 0x80330C04: nop

    return;
    // 0x80330C04: nop

;}
RECOMP_FUNC void func_803325B4_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803325B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803325B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803325BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803325C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803325C4: jal         0x8002B0E4
    // 0x803325C8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803325C8: nop

    after_0:
    // 0x803325CC: b           L_803325D4
    // 0x803325D0: nop

        goto L_803325D4;
    // 0x803325D0: nop

L_803325D4:
    // 0x803325D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803325D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803325DC: jr          $ra
    // 0x803325E0: nop

    return;
    // 0x803325E0: nop

;}
RECOMP_FUNC void func_8033055C_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033055C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330560: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330564: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330568: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033056C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330570: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330578: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033057C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330580: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330584: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330588: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033058C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330590: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330594: nop

    // 0x80330598: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033059C: nop

    // 0x803305A0: bne         $t1, $zero, L_80330604
    if (ctx->r9 != 0) {
        // 0x803305A4: nop
    
            goto L_80330604;
    }
    // 0x803305A4: nop

    // 0x803305A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803305AC: nop

    // 0x803305B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803305B4: nop

    // 0x803305B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803305BC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803305C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803305C4: nop

    // 0x803305C8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803305CC: nop

    // 0x803305D0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803305D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803305D8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803305DC: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803305E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803305E4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803305E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803305EC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803305F0: jal         0x8001C0EC
    // 0x803305F4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803305F4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x803305F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803305FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80330600: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_80330604:
    // 0x80330604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033060C: jal         0x8001B4AC
    // 0x80330610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80330610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330614: beq         $v0, $zero, L_8033074C
    if (ctx->r2 == 0) {
        // 0x80330618: nop
    
            goto L_8033074C;
    }
    // 0x80330618: nop

    // 0x8033061C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330620: nop

    // 0x80330624: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x80330628: nop

    // 0x8033062C: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x80330630: beq         $at, $zero, L_8033071C
    if (ctx->r1 == 0) {
        // 0x80330634: nop
    
            goto L_8033071C;
    }
    // 0x80330634: nop

    // 0x80330638: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033063C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330640: jal         0x8002A2EC
    // 0x80330644: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x80330644: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_2:
    // 0x80330648: beq         $v0, $zero, L_80330668
    if (ctx->r2 == 0) {
        // 0x8033064C: nop
    
            goto L_80330668;
    }
    // 0x8033064C: nop

    // 0x80330650: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330654: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80330658: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033065C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330660: b           L_80330680
    // 0x80330664: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_80330680;
    // 0x80330664: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80330668:
    // 0x80330668: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033066C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80330670: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80330674: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330678: nop

    // 0x8033067C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80330680:
    // 0x80330680: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330684: nop

    // 0x80330688: lh          $t9, 0xBC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBC);
    // 0x8033068C: nop

    // 0x80330690: bne         $t9, $zero, L_80330700
    if (ctx->r25 != 0) {
        // 0x80330694: nop
    
            goto L_80330700;
    }
    // 0x80330694: nop

    // 0x80330698: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033069C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803306A0: sh          $t0, 0xBC($t1)
    MEM_H(0XBC, ctx->r9) = ctx->r8;
    // 0x803306A4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803306A8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803306AC: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803306B0: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x803306B4: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x803306B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803306BC: lwc1        $f6, 0x1C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803306C0: addiu       $a1, $a1, 0x31C8
    ctx->r5 = ADD32(ctx->r5, 0X31C8);
    // 0x803306C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803306C8: jal         0x80027464
    // 0x803306CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x803306CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x803306D0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803306D4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x803306D8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803306DC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803306E0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803306E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803306E8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803306EC: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x803306F0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803306F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306F8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803306FC: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
L_80330700:
    // 0x80330700: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330704: nop

    // 0x80330708: lh          $t7, 0xB4($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB4);
    // 0x8033070C: nop

    // 0x80330710: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80330714: b           L_8033074C
    // 0x80330718: sh          $t8, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r24;
        goto L_8033074C;
    // 0x80330718: sh          $t8, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r24;
L_8033071C:
    // 0x8033071C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330720: nop

    // 0x80330724: lh          $t0, 0xB4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB4);
    // 0x80330728: nop

    // 0x8033072C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80330730: sh          $t1, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r9;
    // 0x80330734: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330738: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033073C: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
    // 0x80330740: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330744: nop

    // 0x80330748: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033074C:
    // 0x8033074C: b           L_80330754
    // 0x80330750: nop

        goto L_80330754;
    // 0x80330750: nop

L_80330754:
    // 0x80330754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330758: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033075C: jr          $ra
    // 0x80330760: nop

    return;
    // 0x80330760: nop

;}
RECOMP_FUNC void func_80330478_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330478: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033047C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330480: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330484: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330488: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033048C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330490: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330494: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330498: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033049C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803304A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803304A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803304A8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803304AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803304B0: nop

    // 0x803304B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803304B8: nop

    // 0x803304BC: bne         $t1, $zero, L_80330514
    if (ctx->r9 != 0) {
        // 0x803304C0: nop
    
            goto L_80330514;
    }
    // 0x803304C0: nop

    // 0x803304C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803304C8: nop

    // 0x803304CC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803304D0: nop

    // 0x803304D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803304D8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803304DC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803304E0: nop

    // 0x803304E4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803304E8: nop

    // 0x803304EC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803304F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304F4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803304F8: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803304FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330500: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330508: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033050C: jal         0x8001C0EC
    // 0x80330510: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330510: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80330514:
    // 0x80330514: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033051C: jal         0x8001B4AC
    // 0x80330520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80330520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330524: beq         $v0, $zero, L_80330544
    if (ctx->r2 == 0) {
        // 0x80330528: nop
    
            goto L_80330544;
    }
    // 0x80330528: nop

    // 0x8033052C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330530: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80330534: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330538: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033053C: nop

    // 0x80330540: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330544:
    // 0x80330544: b           L_8033054C
    // 0x80330548: nop

        goto L_8033054C;
    // 0x80330548: nop

L_8033054C:
    // 0x8033054C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330550: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330554: jr          $ra
    // 0x80330558: nop

    return;
    // 0x80330558: nop

;}
RECOMP_FUNC void func_80332EDC_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332EDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332EE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332EE4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332EE8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332EEC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332EF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332EF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332EF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332EFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332F00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332F04: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332F08: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332F0C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332F10: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332F14: nop

    // 0x80332F18: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332F1C: nop

    // 0x80332F20: bne         $t1, $zero, L_80332F78
    if (ctx->r9 != 0) {
        // 0x80332F24: nop
    
            goto L_80332F78;
    }
    // 0x80332F24: nop

    // 0x80332F28: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332F2C: nop

    // 0x80332F30: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332F34: nop

    // 0x80332F38: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332F3C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332F40: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332F44: nop

    // 0x80332F48: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332F4C: nop

    // 0x80332F50: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332F54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F58: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332F5C: addiu       $t7, $t7, -0x4324
    ctx->r15 = ADD32(ctx->r15, -0X4324);
    // 0x80332F60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332F68: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332F6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332F70: jal         0x8001C0EC
    // 0x80332F74: addiu       $a3, $zero, 0x155
    ctx->r7 = ADD32(0, 0X155);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332F74: addiu       $a3, $zero, 0x155
    ctx->r7 = ADD32(0, 0X155);
    after_0:
L_80332F78:
    // 0x80332F78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F80: jal         0x8001B62C
    // 0x80332F84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80332F84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80332F88: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x80332F8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332F90: nop

    // 0x80332F94: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80332F98: nop

    // 0x80332F9C: bc1f        L_8033305C
    if (!c1cs) {
        // 0x80332FA0: nop
    
            goto L_8033305C;
    }
    // 0x80332FA0: nop

    // 0x80332FA4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332FA8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80332FAC: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80332FB0: nop

    // 0x80332FB4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332FB8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332FBC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332FC0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332FC4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332FC8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332FCC: lh          $t1, 0x4258($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4258);
    // 0x80332FD0: nop

    // 0x80332FD4: beq         $t1, $zero, L_8033305C
    if (ctx->r9 == 0) {
        // 0x80332FD8: nop
    
            goto L_8033305C;
    }
    // 0x80332FD8: nop

    // 0x80332FDC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332FE0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80332FE4: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80332FE8: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80332FEC: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332FF0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332FF4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332FF8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332FFC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333000: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x80333004: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80333008: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x8033300C: lw          $a3, 0x4($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X4);
    // 0x80333010: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80333014: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80333018: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033301C: addiu       $a1, $a1, 0x31C8
    ctx->r5 = ADD32(ctx->r5, 0X31C8);
    // 0x80333020: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333024: jal         0x80027464
    // 0x80333028: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80333028: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8033302C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80333030: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80333034: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333038: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033303C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333040: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333044: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333048: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x8033304C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333050: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333054: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333058: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
L_8033305C:
    // 0x8033305C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333060: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333064: jal         0x8001B4AC
    // 0x80333068: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80333068: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8033306C: beq         $v0, $zero, L_80333084
    if (ctx->r2 == 0) {
        // 0x80333070: nop
    
            goto L_80333084;
    }
    // 0x80333070: nop

    // 0x80333074: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033307C: jal         0x8002B114
    // 0x80333080: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x80333080: nop

    after_4:
L_80333084:
    // 0x80333084: b           L_8033308C
    // 0x80333088: nop

        goto L_8033308C;
    // 0x80333088: nop

L_8033308C:
    // 0x8033308C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333094: jr          $ra
    // 0x80333098: nop

    return;
    // 0x80333098: nop

;}
RECOMP_FUNC void func_80331434_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331434: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331438: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033143C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331440: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331444: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331448: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033144C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331450: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331454: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331458: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033145C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331460: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331464: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331468: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033146C: nop

    // 0x80331470: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331474: nop

    // 0x80331478: bne         $t1, $zero, L_803314D0
    if (ctx->r9 != 0) {
        // 0x8033147C: nop
    
            goto L_803314D0;
    }
    // 0x8033147C: nop

    // 0x80331480: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331484: nop

    // 0x80331488: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033148C: nop

    // 0x80331490: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331494: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331498: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033149C: nop

    // 0x803314A0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803314A4: nop

    // 0x803314A8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803314AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803314B4: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803314B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803314C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803314C4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x803314C8: jal         0x8001C0EC
    // 0x803314CC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803314CC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_803314D0:
    // 0x803314D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314D8: jal         0x8001B4AC
    // 0x803314DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803314DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803314E0: beq         $v0, $zero, L_80331500
    if (ctx->r2 == 0) {
        // 0x803314E4: nop
    
            goto L_80331500;
    }
    // 0x803314E4: nop

    // 0x803314E8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803314EC: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x803314F0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803314F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803314F8: nop

    // 0x803314FC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331500:
    // 0x80331500: b           L_80331508
    // 0x80331504: nop

        goto L_80331508;
    // 0x80331504: nop

L_80331508:
    // 0x80331508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033150C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331510: jr          $ra
    // 0x80331514: nop

    return;
    // 0x80331514: nop

;}
RECOMP_FUNC void func_803300E8_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803300EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803300F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803300F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803300F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803300FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330104: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330108: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033010C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330110: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330114: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330118: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033011C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330120: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330124: nop

    // 0x80330128: bne         $t0, $zero, L_803301C0
    if (ctx->r8 != 0) {
        // 0x8033012C: nop
    
            goto L_803301C0;
    }
    // 0x8033012C: nop

    // 0x80330130: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330134: nop

    // 0x80330138: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x8033013C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330140: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330144: jal         0x80017B3C
    // 0x80330148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80017B3C(rdram, ctx);
        goto after_0;
    // 0x80330148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033014C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80330150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330154: jal         0x80069E60
    // 0x80330158: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_1;
    // 0x80330158: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_1:
    // 0x8033015C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80330160: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x80330164: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80330168: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033016C: nop

    // 0x80330170: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80330174: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330178: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033017C: nop

    // 0x80330180: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80330184: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330188: nop

    // 0x8033018C: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80330190: nop

    // 0x80330194: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80330198: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033019C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803301A0: nop

    // 0x803301A4: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
    // 0x803301A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803301AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803301B0: jal         0x8001BBDC
    // 0x803301B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803301B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803301B8: b           L_803301F4
    // 0x803301BC: nop

        goto L_803301F4;
    // 0x803301BC: nop

L_803301C0:
    // 0x803301C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803301C4: lw          $t8, 0x7A64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A64);
    // 0x803301C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803301CC: bne         $t8, $at, L_803301F4
    if (ctx->r24 != ctx->r1) {
        // 0x803301D0: nop
    
            goto L_803301F4;
    }
    // 0x803301D0: nop

    // 0x803301D4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803301D8: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x803301DC: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x803301E0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803301E4: nop

    // 0x803301E8: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x803301EC: nop

    // 0x803301F0: sh          $t2, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r10;
L_803301F4:
    // 0x803301F4: b           L_803301FC
    // 0x803301F8: nop

        goto L_803301FC;
    // 0x803301F8: nop

L_803301FC:
    // 0x803301FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330200: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330204: jr          $ra
    // 0x80330208: nop

    return;
    // 0x80330208: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
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
    // 0x80330040: addiu       $a1, $a1, 0x31F8
    ctx->r5 = ADD32(ctx->r5, 0X31F8);
    // 0x80330044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033004C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
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
    // 0x80330060: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80330064: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330068: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033006C: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330074: jal         0x8001ABF4
    // 0x80330078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033007C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330080: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330084: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330088: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8033008C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330090: jal         0x8001ABF4
    // 0x80330094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330094: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330098: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033009C: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803300A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803300A4: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x803300A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803300AC: jal         0x8001ABF4
    // 0x803300B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803300B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803300B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803300B8: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803300BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803300C0: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x803300C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803300C8: jal         0x8001ABF4
    // 0x803300CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803300CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x803300D0: b           L_803300D8
    // 0x803300D4: nop

        goto L_803300D8;
    // 0x803300D4: nop

L_803300D8:
    // 0x803300D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803300DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803300E0: jr          $ra
    // 0x803300E4: nop

    return;
    // 0x803300E4: nop

;}
RECOMP_FUNC void func_803309F8_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803309F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803309FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330A00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330A04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330A08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330A0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330A10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330A18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330A20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330A24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330A28: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330A2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330A30: nop

    // 0x80330A34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330A38: nop

    // 0x80330A3C: bne         $t1, $zero, L_80330A94
    if (ctx->r9 != 0) {
        // 0x80330A40: nop
    
            goto L_80330A94;
    }
    // 0x80330A40: nop

    // 0x80330A44: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330A48: nop

    // 0x80330A4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330A50: nop

    // 0x80330A54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330A58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330A5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330A60: nop

    // 0x80330A64: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330A68: nop

    // 0x80330A6C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330A70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330A78: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330A7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330A84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330A88: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80330A8C: jal         0x8001C0EC
    // 0x80330A90: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330A90: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80330A94:
    // 0x80330A94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A9C: jal         0x8002A8B4
    // 0x80330AA0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330AA0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x80330AA4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330AA8: nop

    // 0x80330AAC: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330AB0: nop

    // 0x80330AB4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330ABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330AC0: jal         0x8001B4AC
    // 0x80330AC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330AC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330AC8: beq         $v0, $zero, L_80330AE8
    if (ctx->r2 == 0) {
        // 0x80330ACC: nop
    
            goto L_80330AE8;
    }
    // 0x80330ACC: nop

    // 0x80330AD0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330AD4: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80330AD8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330ADC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330AE0: nop

    // 0x80330AE4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330AE8:
    // 0x80330AE8: b           L_80330AF0
    // 0x80330AEC: nop

        goto L_80330AF0;
    // 0x80330AEC: nop

L_80330AF0:
    // 0x80330AF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330AF8: jr          $ra
    // 0x80330AFC: nop

    return;
    // 0x80330AFC: nop

;}
RECOMP_FUNC void func_80331C44_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331C44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331C48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331C4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331C50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331C54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331C58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331C5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331C6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331C70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331C74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331C78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331C7C: nop

    // 0x80331C80: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331C84: nop

    // 0x80331C88: bne         $t1, $zero, L_80331CE0
    if (ctx->r9 != 0) {
        // 0x80331C8C: nop
    
            goto L_80331CE0;
    }
    // 0x80331C8C: nop

    // 0x80331C90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331C94: nop

    // 0x80331C98: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331C9C: nop

    // 0x80331CA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331CA4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331CA8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331CAC: nop

    // 0x80331CB0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331CB4: nop

    // 0x80331CB8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331CBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331CC0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331CC4: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331CC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CCC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331CD4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80331CD8: jal         0x8001C0EC
    // 0x80331CDC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331CDC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80331CE0:
    // 0x80331CE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331CE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CE8: jal         0x8001B4AC
    // 0x80331CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331CF0: beq         $v0, $zero, L_80331D10
    if (ctx->r2 == 0) {
        // 0x80331CF4: nop
    
            goto L_80331D10;
    }
    // 0x80331CF4: nop

    // 0x80331CF8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331CFC: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x80331D00: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331D04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331D08: nop

    // 0x80331D0C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331D10:
    // 0x80331D10: b           L_80331D18
    // 0x80331D14: nop

        goto L_80331D18;
    // 0x80331D14: nop

L_80331D18:
    // 0x80331D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331D20: jr          $ra
    // 0x80331D24: nop

    return;
    // 0x80331D24: nop

;}
RECOMP_FUNC void func_80332C24_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332C28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332C2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332C30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332C34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332C38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332C3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332C40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332C44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332C48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332C4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332C50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332C54: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332C58: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332C5C: nop

    // 0x80332C60: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332C64: nop

    // 0x80332C68: bne         $t1, $zero, L_80332CCC
    if (ctx->r9 != 0) {
        // 0x80332C6C: nop
    
            goto L_80332CCC;
    }
    // 0x80332C6C: nop

    // 0x80332C70: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332C74: nop

    // 0x80332C78: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332C7C: nop

    // 0x80332C80: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332C84: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332C88: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332C8C: nop

    // 0x80332C90: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332C94: nop

    // 0x80332C98: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332C9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CA0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332CA4: addiu       $t7, $t7, -0x4330
    ctx->r15 = ADD32(ctx->r15, -0X4330);
    // 0x80332CA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332CB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332CB8: jal         0x8001C0EC
    // 0x80332CBC: addiu       $a3, $zero, 0x153
    ctx->r7 = ADD32(0, 0X153);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332CBC: addiu       $a3, $zero, 0x153
    ctx->r7 = ADD32(0, 0X153);
    after_0:
    // 0x80332CC0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332CC4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80332CC8: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_80332CCC:
    // 0x80332CCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CD4: jal         0x8001B4AC
    // 0x80332CD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80332CD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332CDC: beq         $v0, $zero, L_80332DE8
    if (ctx->r2 == 0) {
        // 0x80332CE0: nop
    
            goto L_80332DE8;
    }
    // 0x80332CE0: nop

    // 0x80332CE4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332CE8: nop

    // 0x80332CEC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332CF0: nop

    // 0x80332CF4: bne         $t1, $zero, L_80332DD0
    if (ctx->r9 != 0) {
        // 0x80332CF8: nop
    
            goto L_80332DD0;
    }
    // 0x80332CF8: nop

    // 0x80332CFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332D00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332D04: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332D08: addiu       $a1, $a1, 0x31E0
    ctx->r5 = ADD32(ctx->r5, 0X31E0);
    // 0x80332D0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332D10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332D14: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80332D18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332D1C: jal         0x80027464
    // 0x80332D20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80332D20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80332D24: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80332D28: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80332D2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332D30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332D34: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332D38: addiu       $a1, $a1, 0x31E0
    ctx->r5 = ADD32(ctx->r5, 0X31E0);
    // 0x80332D3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332D40: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332D44: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80332D48: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80332D4C: jal         0x80027464
    // 0x80332D50: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80332D50: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80332D54: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80332D58: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332D5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332D60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332D64: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332D68: addiu       $a1, $a1, 0x31E0
    ctx->r5 = ADD32(ctx->r5, 0X31E0);
    // 0x80332D6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332D70: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332D74: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80332D78: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80332D7C: jal         0x80027464
    // 0x80332D80: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80332D80: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x80332D84: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80332D88: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80332D8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332D90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332D94: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332D98: addiu       $a1, $a1, 0x31E0
    ctx->r5 = ADD32(ctx->r5, 0X31E0);
    // 0x80332D9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332DA0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332DA4: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80332DA8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80332DAC: jal         0x80027464
    // 0x80332DB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80332DB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80332DB4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80332DB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DC0: jal         0x8002B114
    // 0x80332DC4: nop

    func_8002B114(rdram, ctx);
        goto after_6;
    // 0x80332DC4: nop

    after_6:
    // 0x80332DC8: b           L_80332DE8
    // 0x80332DCC: nop

        goto L_80332DE8;
    // 0x80332DCC: nop

L_80332DD0:
    // 0x80332DD0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332DD4: nop

    // 0x80332DD8: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80332DDC: nop

    // 0x80332DE0: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80332DE4: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_80332DE8:
    // 0x80332DE8: b           L_80332DF0
    // 0x80332DEC: nop

        goto L_80332DF0;
    // 0x80332DEC: nop

L_80332DF0:
    // 0x80332DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332DF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332DF8: jr          $ra
    // 0x80332DFC: nop

    return;
    // 0x80332DFC: nop

;}
RECOMP_FUNC void func_80331EF0_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331EF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331EF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331EF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331EFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331F00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331F04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331F08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331F10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331F18: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331F1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331F20: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331F24: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331F28: nop

    // 0x80331F2C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F30: nop

    // 0x80331F34: bne         $t1, $zero, L_80331F8C
    if (ctx->r9 != 0) {
        // 0x80331F38: nop
    
            goto L_80331F8C;
    }
    // 0x80331F38: nop

    // 0x80331F3C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331F40: nop

    // 0x80331F44: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331F48: nop

    // 0x80331F4C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331F50: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331F54: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331F58: nop

    // 0x80331F5C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331F60: nop

    // 0x80331F64: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331F68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F6C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331F70: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331F74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331F7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F80: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80331F84: jal         0x8001C0EC
    // 0x80331F88: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331F88: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80331F8C:
    // 0x80331F8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F94: jal         0x8001B62C
    // 0x80331F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80331F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331F9C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80331FA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331FA4: nop

    // 0x80331FA8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80331FAC: nop

    // 0x80331FB0: bc1f        L_803320FC
    if (!c1cs) {
        // 0x80331FB4: nop
    
            goto L_803320FC;
    }
    // 0x80331FB4: nop

    // 0x80331FB8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331FBC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331FC0: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80331FC4: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80331FC8: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80331FCC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331FD0: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331FD4: addiu       $a1, $a1, 0x31BC
    ctx->r5 = ADD32(ctx->r5, 0X31BC);
    // 0x80331FD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331FDC: jal         0x80027464
    // 0x80331FE0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80331FE0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80331FE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331FE8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331FEC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331FF0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331FF4: addiu       $a1, $a1, 0x31D4
    ctx->r5 = ADD32(ctx->r5, 0X31D4);
    // 0x80331FF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331FFC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332000: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80332004: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332008: jal         0x80027464
    // 0x8033200C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x8033200C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80332010: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80332014: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033201C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80332020: jal         0x80026F10
    // 0x80332024: nop

    func_80026F10(rdram, ctx);
        goto after_4;
    // 0x80332024: nop

    after_4:
    // 0x80332028: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033202C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332030: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332034: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332038: addiu       $a1, $a1, 0x31D4
    ctx->r5 = ADD32(ctx->r5, 0X31D4);
    // 0x8033203C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332040: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332044: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80332048: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8033204C: jal         0x80027464
    // 0x80332050: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80332050: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80332054: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80332058: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033205C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332060: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80332064: jal         0x80026F10
    // 0x80332068: nop

    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x80332068: nop

    after_6:
    // 0x8033206C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332070: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332074: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332078: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033207C: addiu       $a1, $a1, 0x31D4
    ctx->r5 = ADD32(ctx->r5, 0X31D4);
    // 0x80332080: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332084: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332088: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x8033208C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80332090: jal         0x80027464
    // 0x80332094: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80332094: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x80332098: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033209C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320A4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803320A8: jal         0x80026F10
    // 0x803320AC: nop

    func_80026F10(rdram, ctx);
        goto after_8;
    // 0x803320AC: nop

    after_8:
    // 0x803320B0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803320B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803320B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803320BC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803320C0: addiu       $a1, $a1, 0x31D4
    ctx->r5 = ADD32(ctx->r5, 0X31D4);
    // 0x803320C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803320C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803320CC: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x803320D0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x803320D4: jal         0x80027464
    // 0x803320D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x803320D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x803320DC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803320E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803320E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320E8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803320EC: jal         0x80026F10
    // 0x803320F0: nop

    func_80026F10(rdram, ctx);
        goto after_10;
    // 0x803320F0: nop

    after_10:
    // 0x803320F4: b           L_8033219C
    // 0x803320F8: nop

        goto L_8033219C;
    // 0x803320F8: nop

L_803320FC:
    // 0x803320FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332104: jal         0x8001B62C
    // 0x80332108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_11;
    // 0x80332108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8033210C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80332110: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332114: nop

    // 0x80332118: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x8033211C: nop

    // 0x80332120: bc1f        L_80332150
    if (!c1cs) {
        // 0x80332124: nop
    
            goto L_80332150;
    }
    // 0x80332124: nop

    // 0x80332128: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033212C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332130: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80332134: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332138: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x8033213C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332140: jal         0x8001ABF4
    // 0x80332144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_12;
    // 0x80332144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80332148: b           L_8033219C
    // 0x8033214C: nop

        goto L_8033219C;
    // 0x8033214C: nop

L_80332150:
    // 0x80332150: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332154: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332158: jal         0x8001B62C
    // 0x8033215C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_13;
    // 0x8033215C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80332160: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80332164: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332168: nop

    // 0x8033216C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80332170: nop

    // 0x80332174: bc1f        L_8033219C
    if (!c1cs) {
        // 0x80332178: nop
    
            goto L_8033219C;
    }
    // 0x80332178: nop

    // 0x8033217C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332180: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332184: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80332188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033218C: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x80332190: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332194: jal         0x8001ABF4
    // 0x80332198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_14;
    // 0x80332198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
L_8033219C:
    // 0x8033219C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321A4: jal         0x8001B4AC
    // 0x803321A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_15;
    // 0x803321A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x803321AC: beq         $v0, $zero, L_803321CC
    if (ctx->r2 == 0) {
        // 0x803321B0: nop
    
            goto L_803321CC;
    }
    // 0x803321B0: nop

    // 0x803321B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803321B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803321BC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803321C0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803321C4: nop

    // 0x803321C8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803321CC:
    // 0x803321CC: b           L_803321D4
    // 0x803321D0: nop

        goto L_803321D4;
    // 0x803321D0: nop

L_803321D4:
    // 0x803321D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803321D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803321DC: jr          $ra
    // 0x803321E0: nop

    return;
    // 0x803321E0: nop

;}
RECOMP_FUNC void func_803325E4_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803325E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803325E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803325EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803325F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803325F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803325F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803325FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332600: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332604: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332608: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033260C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332610: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332614: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80332618: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033261C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332620: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80332624: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80332628: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033262C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332630: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332634: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332638: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033263C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332640: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x80332644: nop

    // 0x80332648: bne         $t3, $at, L_8033275C
    if (ctx->r11 != ctx->r1) {
        // 0x8033264C: nop
    
            goto L_8033275C;
    }
    // 0x8033264C: nop

    // 0x80332650: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80332654: nop

    // 0x80332658: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x8033265C: nop

    // 0x80332660: bne         $t5, $zero, L_803326B4
    if (ctx->r13 != 0) {
        // 0x80332664: nop
    
            goto L_803326B4;
    }
    // 0x80332664: nop

    // 0x80332668: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033266C: nop

    // 0x80332670: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80332674: nop

    // 0x80332678: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8033267C: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80332680: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80332684: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332688: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033268C: nop

    // 0x80332690: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
    // 0x80332694: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332698: nop

    // 0x8033269C: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803326A0: nop

    // 0x803326A4: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x803326A8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803326AC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803326B0: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
L_803326B4:
    // 0x803326B4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803326B8: nop

    // 0x803326BC: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x803326C0: nop

    // 0x803326C4: bne         $t4, $zero, L_80332718
    if (ctx->r12 != 0) {
        // 0x803326C8: nop
    
            goto L_80332718;
    }
    // 0x803326C8: nop

    // 0x803326CC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803326D0: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x803326D4: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x803326D8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803326DC: nop

    // 0x803326E0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x803326E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803326E8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803326EC: nop

    // 0x803326F0: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x803326F4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803326F8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803326FC: nop

    // 0x80332700: swc1        $f10, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f10.u32l;
    // 0x80332704: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332708: nop

    // 0x8033270C: lwc1        $f16, 0x2C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80332710: b           L_8033275C
    // 0x80332714: swc1        $f16, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f16.u32l;
        goto L_8033275C;
    // 0x80332714: swc1        $f16, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f16.u32l;
L_80332718:
    // 0x80332718: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033271C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332720: jal         0x80029C40
    // 0x80332724: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80332724: nop

    after_0:
    // 0x80332728: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033272C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80332730: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332734: lwc1        $f18, 0x44($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80332738: nop

    // 0x8033273C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80332740: swc1        $f6, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f6.u32l;
    // 0x80332744: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80332748: nop

    // 0x8033274C: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80332750: nop

    // 0x80332754: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80332758: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_8033275C:
    // 0x8033275C: b           L_80332764
    // 0x80332760: nop

        goto L_80332764;
    // 0x80332760: nop

L_80332764:
    // 0x80332764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332768: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033276C: jr          $ra
    // 0x80332770: nop

    return;
    // 0x80332770: nop

;}
RECOMP_FUNC void func_80332908_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332908: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033290C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332910: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332914: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332918: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033291C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332924: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332928: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033292C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332930: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332934: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332938: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033293C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332940: nop

    // 0x80332944: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332948: nop

    // 0x8033294C: bne         $t1, $zero, L_803329A0
    if (ctx->r9 != 0) {
        // 0x80332950: nop
    
            goto L_803329A0;
    }
    // 0x80332950: nop

    // 0x80332954: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332958: nop

    // 0x8033295C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332960: nop

    // 0x80332964: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332968: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033296C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332970: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332974: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332978: nop

    // 0x8033297C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80332980: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332984: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80332988: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x8033298C: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x80332990: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332994: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332998: nop

    // 0x8033299C: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
L_803329A0:
    // 0x803329A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329A8: jal         0x80029C40
    // 0x803329AC: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x803329AC: nop

    after_0:
    // 0x803329B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803329B4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x803329B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803329BC: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x803329C0: nop

    // 0x803329C4: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x803329C8: swc1        $f16, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f16.u32l;
    // 0x803329CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803329D0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803329D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803329D8: lwc1        $f18, 0x28($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X28);
    // 0x803329DC: nop

    // 0x803329E0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803329E4: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
    // 0x803329E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803329EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803329F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803329FC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80332A00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332A04: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80332A08: jal         0x80029018
    // 0x80332A0C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_1;
    // 0x80332A0C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80332A10: beq         $v0, $zero, L_80332A30
    if (ctx->r2 == 0) {
        // 0x80332A14: nop
    
            goto L_80332A30;
    }
    // 0x80332A14: nop

    // 0x80332A18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A20: jal         0x8002B0E4
    // 0x80332A24: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x80332A24: nop

    after_2:
    // 0x80332A28: b           L_80332A70
    // 0x80332A2C: nop

        goto L_80332A70;
    // 0x80332A2C: nop

L_80332A30:
    // 0x80332A30: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332A34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332A38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A40: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80332A44: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80332A48: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    // 0x80332A4C: jal         0x80029F58
    // 0x80332A50: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_3;
    // 0x80332A50: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80332A54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332A58: bne         $v0, $at, L_80332A70
    if (ctx->r2 != ctx->r1) {
        // 0x80332A5C: nop
    
            goto L_80332A70;
    }
    // 0x80332A5C: nop

    // 0x80332A60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A68: jal         0x8002B0E4
    // 0x80332A6C: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x80332A6C: nop

    after_4:
L_80332A70:
    // 0x80332A70: b           L_80332A78
    // 0x80332A74: nop

        goto L_80332A78;
    // 0x80332A74: nop

L_80332A78:
    // 0x80332A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332A80: jr          $ra
    // 0x80332A84: nop

    return;
    // 0x80332A84: nop

;}
RECOMP_FUNC void func_80331E0C_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331E10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331E14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331E18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331E1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331E20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331E24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331E2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331E34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331E38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331E3C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331E40: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331E44: nop

    // 0x80331E48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331E4C: nop

    // 0x80331E50: bne         $t1, $zero, L_80331EA8
    if (ctx->r9 != 0) {
        // 0x80331E54: nop
    
            goto L_80331EA8;
    }
    // 0x80331E54: nop

    // 0x80331E58: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331E5C: nop

    // 0x80331E60: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331E64: nop

    // 0x80331E68: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331E6C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331E70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331E74: nop

    // 0x80331E78: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331E7C: nop

    // 0x80331E80: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331E84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331E88: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331E8C: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331E90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E94: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331E98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331E9C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80331EA0: jal         0x8001C0EC
    // 0x80331EA4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331EA4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80331EA8:
    // 0x80331EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EB0: jal         0x8001B4AC
    // 0x80331EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331EB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331EB8: beq         $v0, $zero, L_80331ED8
    if (ctx->r2 == 0) {
        // 0x80331EBC: nop
    
            goto L_80331ED8;
    }
    // 0x80331EBC: nop

    // 0x80331EC0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331EC4: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80331EC8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331ECC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331ED0: nop

    // 0x80331ED4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80331ED8:
    // 0x80331ED8: b           L_80331EE0
    // 0x80331EDC: nop

        goto L_80331EE0;
    // 0x80331EDC: nop

L_80331EE0:
    // 0x80331EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331EE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331EE8: jr          $ra
    // 0x80331EEC: nop

    return;
    // 0x80331EEC: nop

;}
RECOMP_FUNC void func_80332B48_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332B48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332B4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332B50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332B54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332B58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332B5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332B60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B78: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332B7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332B80: nop

    // 0x80332B84: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332B88: nop

    // 0x80332B8C: bne         $t1, $zero, L_80332BE4
    if (ctx->r9 != 0) {
        // 0x80332B90: nop
    
            goto L_80332BE4;
    }
    // 0x80332B90: nop

    // 0x80332B94: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332B98: nop

    // 0x80332B9C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332BA0: nop

    // 0x80332BA4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332BA8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332BAC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332BB0: nop

    // 0x80332BB4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332BB8: nop

    // 0x80332BBC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332BC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332BC4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332BC8: addiu       $t7, $t7, -0x4328
    ctx->r15 = ADD32(ctx->r15, -0X4328);
    // 0x80332BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BD0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332BD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332BD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332BDC: jal         0x8001C0EC
    // 0x80332BE0: addiu       $a3, $zero, 0x154
    ctx->r7 = ADD32(0, 0X154);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332BE0: addiu       $a3, $zero, 0x154
    ctx->r7 = ADD32(0, 0X154);
    after_0:
L_80332BE4:
    // 0x80332BE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332BE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BEC: jal         0x8001B4AC
    // 0x80332BF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80332BF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80332BF4: beq         $v0, $zero, L_80332C0C
    if (ctx->r2 == 0) {
        // 0x80332BF8: nop
    
            goto L_80332C0C;
    }
    // 0x80332BF8: nop

    // 0x80332BFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C04: jal         0x8002B114
    // 0x80332C08: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80332C08: nop

    after_2:
L_80332C0C:
    // 0x80332C0C: b           L_80332C14
    // 0x80332C10: nop

        goto L_80332C14;
    // 0x80332C10: nop

L_80332C14:
    // 0x80332C14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332C18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332C1C: jr          $ra
    // 0x80332C20: nop

    return;
    // 0x80332C20: nop

;}
RECOMP_FUNC void func_803308F0_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803308F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803308F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803308F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803308FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330900: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330904: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330908: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033090C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330910: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330914: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330918: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033091C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330920: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330924: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330928: nop

    // 0x8033092C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330930: nop

    // 0x80330934: bne         $t1, $zero, L_8033098C
    if (ctx->r9 != 0) {
        // 0x80330938: nop
    
            goto L_8033098C;
    }
    // 0x80330938: nop

    // 0x8033093C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330940: nop

    // 0x80330944: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330948: nop

    // 0x8033094C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330950: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330954: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330958: nop

    // 0x8033095C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330960: nop

    // 0x80330964: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330968: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033096C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330970: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330974: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330978: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033097C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330980: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80330984: jal         0x8001C0EC
    // 0x80330988: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330988: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_8033098C:
    // 0x8033098C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330990: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330994: jal         0x8002A8B4
    // 0x80330998: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330998: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x8033099C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803309A0: nop

    // 0x803309A4: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803309A8: nop

    // 0x803309AC: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803309B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309B8: jal         0x8001B4AC
    // 0x803309BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803309BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803309C0: beq         $v0, $zero, L_803309E0
    if (ctx->r2 == 0) {
        // 0x803309C4: nop
    
            goto L_803309E0;
    }
    // 0x803309C4: nop

    // 0x803309C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803309CC: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x803309D0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803309D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803309D8: nop

    // 0x803309DC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803309E0:
    // 0x803309E0: b           L_803309E8
    // 0x803309E4: nop

        goto L_803309E8;
    // 0x803309E4: nop

L_803309E8:
    // 0x803309E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803309EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803309F0: jr          $ra
    // 0x803309F4: nop

    return;
    // 0x803309F4: nop

;}
RECOMP_FUNC void func_80332A88_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332A88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332A8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332A90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332A94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332A98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332A9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332AA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332AA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332AAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332AB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332AB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332AB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332ABC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332AC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332AC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332AC8: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80332ACC: nop

    // 0x80332AD0: beq         $s0, $at, L_80332AF8
    if (ctx->r16 == ctx->r1) {
        // 0x80332AD4: nop
    
            goto L_80332AF8;
    }
    // 0x80332AD4: nop

    // 0x80332AD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332ADC: beq         $s0, $at, L_80332B08
    if (ctx->r16 == ctx->r1) {
        // 0x80332AE0: nop
    
            goto L_80332B08;
    }
    // 0x80332AE0: nop

    // 0x80332AE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80332AE8: beq         $s0, $at, L_80332B18
    if (ctx->r16 == ctx->r1) {
        // 0x80332AEC: nop
    
            goto L_80332B18;
    }
    // 0x80332AEC: nop

    // 0x80332AF0: b           L_80332B28
    // 0x80332AF4: nop

        goto L_80332B28;
    // 0x80332AF4: nop

L_80332AF8:
    // 0x80332AF8: jal         0x803325E4
    // 0x80332AFC: nop

    func_803325E4_unk_bin_20(rdram, ctx);
        goto after_0;
    // 0x80332AFC: nop

    after_0:
    // 0x80332B00: b           L_80332B30
    // 0x80332B04: nop

        goto L_80332B30;
    // 0x80332B04: nop

L_80332B08:
    // 0x80332B08: jal         0x80332774
    // 0x80332B0C: nop

    func_80332774_unk_bin_20(rdram, ctx);
        goto after_1;
    // 0x80332B0C: nop

    after_1:
    // 0x80332B10: b           L_80332B30
    // 0x80332B14: nop

        goto L_80332B30;
    // 0x80332B14: nop

L_80332B18:
    // 0x80332B18: jal         0x80332908
    // 0x80332B1C: nop

    func_80332908_unk_bin_20(rdram, ctx);
        goto after_2;
    // 0x80332B1C: nop

    after_2:
    // 0x80332B20: b           L_80332B30
    // 0x80332B24: nop

        goto L_80332B30;
    // 0x80332B24: nop

L_80332B28:
    // 0x80332B28: b           L_80332B30
    // 0x80332B2C: nop

        goto L_80332B30;
    // 0x80332B2C: nop

L_80332B30:
    // 0x80332B30: b           L_80332B38
    // 0x80332B34: nop

        goto L_80332B38;
    // 0x80332B34: nop

L_80332B38:
    // 0x80332B38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80332B40: jr          $ra
    // 0x80332B44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80332B44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330D10_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330D10: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80330D14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330D18: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330D1C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330D20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330D24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330D28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330D2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330D30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330D44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330D48: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80330D4C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80330D50: nop

    // 0x80330D54: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330D58: nop

    // 0x80330D5C: bne         $t1, $zero, L_80330DD4
    if (ctx->r9 != 0) {
        // 0x80330D60: nop
    
            goto L_80330DD4;
    }
    // 0x80330D60: nop

    // 0x80330D64: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80330D68: nop

    // 0x80330D6C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330D70: nop

    // 0x80330D74: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330D78: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330D7C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80330D80: nop

    // 0x80330D84: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330D88: nop

    // 0x80330D8C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330D90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D94: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330D98: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330D9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DA0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330DA8: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80330DAC: jal         0x8001C0EC
    // 0x80330DB0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330DB0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80330DB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DB8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330DBC: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330DC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DC4: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x80330DC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330DCC: jal         0x8001ABF4
    // 0x80330DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80330DD4:
    // 0x80330DD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DDC: jal         0x8001B62C
    // 0x80330DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80330DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330DE4: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80330DE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330DEC: nop

    // 0x80330DF0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80330DF4: nop

    // 0x80330DF8: bc1f        L_80330E24
    if (!c1cs) {
        // 0x80330DFC: nop
    
            goto L_80330E24;
    }
    // 0x80330DFC: nop

    // 0x80330E00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E08: jal         0x8002A8B4
    // 0x80330E0C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80330E0C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x80330E10: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80330E14: nop

    // 0x80330E18: lwc1        $f6, 0x3C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330E1C: b           L_80331200
    // 0x80330E20: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
        goto L_80331200;
    // 0x80330E20: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
L_80330E24:
    // 0x80330E24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E2C: jal         0x8001B62C
    // 0x80330E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x80330E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80330E34: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80330E38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330E3C: nop

    // 0x80330E40: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80330E44: nop

    // 0x80330E48: bc1f        L_80331200
    if (!c1cs) {
        // 0x80330E4C: nop
    
            goto L_80331200;
    }
    // 0x80330E4C: nop

    // 0x80330E50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E5C: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x80330E60: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330E64: jal         0x800175F0
    // 0x80330E68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x80330E68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80330E6C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80330E70: lui         $at, 0x4184
    ctx->r1 = S32(0X4184 << 16);
    // 0x80330E74: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330E78: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80330E7C: jal         0x80015538
    // 0x80330E80: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80330E80: nop

    after_6:
    // 0x80330E84: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80330E88: lui         $at, 0x4765
    ctx->r1 = S32(0X4765 << 16);
    // 0x80330E8C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330E90: jal         0x800366E0
    // 0x80330E94: nop

    sqrtf_recomp(rdram, ctx);
        goto after_7;
    // 0x80330E94: nop

    after_7:
    // 0x80330E98: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80330E9C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330EA0: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330EA4: lwc1        $f19, 0x3210($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X3210);
    // 0x80330EA8: lwc1        $f18, 0x3214($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3214);
    // 0x80330EAC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330EB0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80330EB4: jal         0x80034970
    // 0x80330EB8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x80330EB8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_8:
    // 0x80330EBC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330EC0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80330EC4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330EC8: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330ECC: nop

    // 0x80330ED0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330ED4: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80330ED8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330EDC: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330EE0: lwc1        $f7, 0x3218($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3218);
    // 0x80330EE4: lwc1        $f6, 0x321C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X321C);
    // 0x80330EE8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80330EEC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80330EF0: jal         0x80036570
    // 0x80330EF4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_9;
    // 0x80330EF4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_9:
    // 0x80330EF8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80330EFC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80330F00: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80330F04: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330F08: nop

    // 0x80330F0C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330F10: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80330F14: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80330F18: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80330F1C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330F20: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80330F24: jal         0x80015538
    // 0x80330F28: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x80330F28: nop

    after_10:
    // 0x80330F2C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80330F30: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80330F34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330F38: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330F3C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80330F40: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330F44: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330F48: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80330F4C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80330F50: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80330F54: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80330F58: addiu       $a1, $a1, 0x31B0
    ctx->r5 = ADD32(ctx->r5, 0X31B0);
    // 0x80330F5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330F60: jal         0x80027464
    // 0x80330F64: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x80330F64: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x80330F68: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80330F6C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80330F70: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330F74: addiu       $a3, $a3, -0x605C
    ctx->r7 = ADD32(ctx->r7, -0X605C);
    // 0x80330F78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F7C: jal         0x8001ABF4
    // 0x80330F80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_12;
    // 0x80330F80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80330F84: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80330F88: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330F8C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80330F90: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80330F94: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330F98: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80330F9C: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80330FA0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330FA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FA8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330FAC: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x80330FB0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80330FB4: lui         $at, 0xC184
    ctx->r1 = S32(0XC184 << 16);
    // 0x80330FB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330FBC: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80330FC0: jal         0x80015538
    // 0x80330FC4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_13;
    // 0x80330FC4: nop

    after_13:
    // 0x80330FC8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80330FCC: lui         $at, 0x4765
    ctx->r1 = S32(0X4765 << 16);
    // 0x80330FD0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330FD4: jal         0x800366E0
    // 0x80330FD8: nop

    sqrtf_recomp(rdram, ctx);
        goto after_14;
    // 0x80330FD8: nop

    after_14:
    // 0x80330FDC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80330FE0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330FE4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80330FE8: lwc1        $f7, 0x3220($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3220);
    // 0x80330FEC: lwc1        $f6, 0x3224($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3224);
    // 0x80330FF0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80330FF4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80330FF8: jal         0x80034970
    // 0x80330FFC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_15;
    // 0x80330FFC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_15:
    // 0x80331000: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80331004: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331008: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8033100C: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80331010: nop

    // 0x80331014: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331018: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8033101C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331020: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80331024: lwc1        $f11, 0x3228($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3228);
    // 0x80331028: lwc1        $f10, 0x322C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X322C);
    // 0x8033102C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80331030: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80331034: jal         0x80036570
    // 0x80331038: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_16;
    // 0x80331038: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_16:
    // 0x8033103C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80331040: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80331044: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80331048: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033104C: nop

    // 0x80331050: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331054: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x80331058: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033105C: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x80331060: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331064: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80331068: jal         0x80015538
    // 0x8033106C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_17;
    // 0x8033106C: nop

    after_17:
    // 0x80331070: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331074: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80331078: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033107C: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80331080: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80331084: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80331088: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033108C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80331090: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80331094: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80331098: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8033109C: addiu       $a1, $a1, 0x31B0
    ctx->r5 = ADD32(ctx->r5, 0X31B0);
    // 0x803310A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803310A4: jal         0x80027464
    // 0x803310A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_18;
    // 0x803310A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_18:
    // 0x803310AC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x803310B0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x803310B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803310B8: addiu       $a3, $a3, -0x605C
    ctx->r7 = ADD32(ctx->r7, -0X605C);
    // 0x803310BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803310C0: jal         0x8001ABF4
    // 0x803310C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_19;
    // 0x803310C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x803310C8: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x803310CC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803310D0: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x803310D4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803310D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803310DC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x803310E0: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x803310E4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803310E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310EC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803310F0: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x803310F4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803310F8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803310FC: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331100: lwc1        $f11, 0x3230($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3230);
    // 0x80331104: lwc1        $f10, 0x3234($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3234);
    // 0x80331108: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033110C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80331110: jal         0x80034970
    // 0x80331114: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_20;
    // 0x80331114: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_20:
    // 0x80331118: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8033111C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331120: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331124: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80331128: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8033112C: nop

    // 0x80331130: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331134: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80331138: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033113C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331140: lwc1        $f10, 0x1C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80331144: lwc1        $f19, 0x3238($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X3238);
    // 0x80331148: lwc1        $f18, 0x323C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X323C);
    // 0x8033114C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331150: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80331154: jal         0x80036570
    // 0x80331158: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    cosf_game(rdram, ctx);
        goto after_21;
    // 0x80331158: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_21:
    // 0x8033115C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80331160: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331164: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331168: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8033116C: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80331170: nop

    // 0x80331174: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80331178: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x8033117C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80331180: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80331184: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331188: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033118C: lwc1        $f18, 0x4($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80331190: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331194: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331198: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033119C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803311A0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803311A4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x803311A8: addiu       $a1, $a1, 0x31B0
    ctx->r5 = ADD32(ctx->r5, 0X31B0);
    // 0x803311AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803311B0: jal         0x80027464
    // 0x803311B4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_22;
    // 0x803311B4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_22:
    // 0x803311B8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x803311BC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x803311C0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803311C4: addiu       $a3, $a3, -0x605C
    ctx->r7 = ADD32(ctx->r7, -0X605C);
    // 0x803311C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803311CC: jal         0x8001ABF4
    // 0x803311D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_23;
    // 0x803311D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x803311D4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x803311D8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803311DC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x803311E0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803311E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803311E8: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803311EC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x803311F0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803311F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803311F8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803311FC: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
L_80331200:
    // 0x80331200: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331208: jal         0x8001B4AC
    // 0x8033120C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_24;
    // 0x8033120C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x80331210: beq         $v0, $zero, L_80331230
    if (ctx->r2 == 0) {
        // 0x80331214: nop
    
            goto L_80331230;
    }
    // 0x80331214: nop

    // 0x80331218: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033121C: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x80331220: sh          $t3, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r11;
    // 0x80331224: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331228: nop

    // 0x8033122C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80331230:
    // 0x80331230: b           L_80331238
    // 0x80331234: nop

        goto L_80331238;
    // 0x80331234: nop

L_80331238:
    // 0x80331238: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033123C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331240: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331244: jr          $ra
    // 0x80331248: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80331248: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80330C08_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330C0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330C10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330C14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330C18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330C1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330C34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330C38: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330C3C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330C40: nop

    // 0x80330C44: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330C48: nop

    // 0x80330C4C: bne         $t1, $zero, L_80330CA4
    if (ctx->r9 != 0) {
        // 0x80330C50: nop
    
            goto L_80330CA4;
    }
    // 0x80330C50: nop

    // 0x80330C54: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330C58: nop

    // 0x80330C5C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330C60: nop

    // 0x80330C64: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330C68: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330C6C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330C70: nop

    // 0x80330C74: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330C78: nop

    // 0x80330C7C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330C80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C84: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330C88: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330C8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C90: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330C94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330C98: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80330C9C: jal         0x8001C0EC
    // 0x80330CA0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330CA0: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80330CA4:
    // 0x80330CA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CAC: jal         0x8002A8B4
    // 0x80330CB0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330CB0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x80330CB4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330CB8: nop

    // 0x80330CBC: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330CC0: nop

    // 0x80330CC4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330CC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CD0: jal         0x8001B4AC
    // 0x80330CD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330CD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330CD8: beq         $v0, $zero, L_80330CF8
    if (ctx->r2 == 0) {
        // 0x80330CDC: nop
    
            goto L_80330CF8;
    }
    // 0x80330CDC: nop

    // 0x80330CE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330CE4: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80330CE8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330CEC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330CF0: nop

    // 0x80330CF4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330CF8:
    // 0x80330CF8: b           L_80330D00
    // 0x80330CFC: nop

        goto L_80330D00;
    // 0x80330CFC: nop

L_80330D00:
    // 0x80330D00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330D08: jr          $ra
    // 0x80330D0C: nop

    return;
    // 0x80330D0C: nop

;}
RECOMP_FUNC void func_80331330_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331330: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331334: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331338: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033133C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331340: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331344: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331348: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033134C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331350: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331354: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331358: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033135C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331360: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331364: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331368: nop

    // 0x8033136C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331370: nop

    // 0x80331374: bne         $t1, $zero, L_803313EC
    if (ctx->r9 != 0) {
        // 0x80331378: nop
    
            goto L_803313EC;
    }
    // 0x80331378: nop

    // 0x8033137C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331380: nop

    // 0x80331384: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331388: nop

    // 0x8033138C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331390: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331394: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331398: nop

    // 0x8033139C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803313A0: nop

    // 0x803313A4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803313A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313AC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803313B0: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803313B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803313BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803313C0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x803313C4: jal         0x8001C0EC
    // 0x803313C8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803313C8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x803313CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803313D4: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803313D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313DC: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x803313E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803313E4: jal         0x8001ABF4
    // 0x803313E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803313E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_803313EC:
    // 0x803313EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803313F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803313F4: jal         0x8001B4AC
    // 0x803313F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803313F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803313FC: beq         $v0, $zero, L_8033141C
    if (ctx->r2 == 0) {
        // 0x80331400: nop
    
            goto L_8033141C;
    }
    // 0x80331400: nop

    // 0x80331404: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331408: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x8033140C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331410: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331414: nop

    // 0x80331418: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033141C:
    // 0x8033141C: b           L_80331424
    // 0x80331420: nop

        goto L_80331424;
    // 0x80331420: nop

L_80331424:
    // 0x80331424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331428: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033142C: jr          $ra
    // 0x80331430: nop

    return;
    // 0x80331430: nop

;}
RECOMP_FUNC void func_80332774_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332774: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332778: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033277C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80332780: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332784: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332788: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033278C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332790: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332794: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332798: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033279C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803327A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803327A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803327A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803327AC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803327B0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803327B4: nop

    // 0x803327B8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803327BC: nop

    // 0x803327C0: bne         $t1, $zero, L_80332814
    if (ctx->r9 != 0) {
        // 0x803327C4: nop
    
            goto L_80332814;
    }
    // 0x803327C4: nop

    // 0x803327C8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803327CC: nop

    // 0x803327D0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803327D4: nop

    // 0x803327D8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803327DC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803327E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803327E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803327E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803327EC: nop

    // 0x803327F0: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x803327F4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803327F8: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x803327FC: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80332800: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x80332804: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332808: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033280C: nop

    // 0x80332810: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
L_80332814:
    // 0x80332814: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332818: nop

    // 0x8033281C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80332820: nop

    // 0x80332824: bne         $t0, $zero, L_80332884
    if (ctx->r8 != 0) {
        // 0x80332828: nop
    
            goto L_80332884;
    }
    // 0x80332828: nop

    // 0x8033282C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332830: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80332834: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80332838: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033283C: nop

    // 0x80332840: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80332844: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332848: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033284C: nop

    // 0x80332850: swc1        $f8, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f8.u32l;
    // 0x80332854: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332858: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033285C: nop

    // 0x80332860: swc1        $f10, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f10.u32l;
    // 0x80332864: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332868: nop

    // 0x8033286C: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80332870: nop

    // 0x80332874: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80332878: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033287C: b           L_803328AC
    // 0x80332880: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
        goto L_803328AC;
    // 0x80332880: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
L_80332884:
    // 0x80332884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332888: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033288C: jal         0x80029C40
    // 0x80332890: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80332890: nop

    after_0:
    // 0x80332894: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332898: nop

    // 0x8033289C: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x803328A0: nop

    // 0x803328A4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x803328A8: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_803328AC:
    // 0x803328AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803328B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803328B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803328B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803328C0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x803328C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803328C8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803328CC: jal         0x80029018
    // 0x803328D0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_1;
    // 0x803328D0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x803328D4: beq         $v0, $zero, L_803328EC
    if (ctx->r2 == 0) {
        // 0x803328D8: nop
    
            goto L_803328EC;
    }
    // 0x803328D8: nop

    // 0x803328DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803328E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328E4: jal         0x8002B0E4
    // 0x803328E8: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x803328E8: nop

    after_2:
L_803328EC:
    // 0x803328EC: b           L_803328F4
    // 0x803328F0: nop

        goto L_803328F4;
    // 0x803328F0: nop

L_803328F4:
    // 0x803328F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803328F8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803328FC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332900: jr          $ra
    // 0x80332904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80332904: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803317C4_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803317C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803317C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803317CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803317D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803317D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803317D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803317DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803317E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803317E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803317E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803317EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803317F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803317F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803317F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803317FC: nop

    // 0x80331800: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331804: nop

    // 0x80331808: bne         $t1, $zero, L_80331860
    if (ctx->r9 != 0) {
        // 0x8033180C: nop
    
            goto L_80331860;
    }
    // 0x8033180C: nop

    // 0x80331810: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331814: nop

    // 0x80331818: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033181C: nop

    // 0x80331820: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331824: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331828: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033182C: nop

    // 0x80331830: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331834: nop

    // 0x80331838: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033183C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331840: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331844: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331848: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033184C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331854: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80331858: jal         0x8001C0EC
    // 0x8033185C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033185C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80331860:
    // 0x80331860: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331864: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331868: jal         0x8002A8B4
    // 0x8033186C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x8033186C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331870: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331874: nop

    // 0x80331878: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033187C: nop

    // 0x80331880: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331888: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033188C: jal         0x80029C40
    // 0x80331890: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80331890: nop

    after_2:
    // 0x80331894: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331898: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033189C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803318A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803318A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803318A8: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x803318AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803318B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803318B4: jal         0x80029018
    // 0x803318B8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x803318B8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x803318BC: beq         $v0, $zero, L_80331918
    if (ctx->r2 == 0) {
        // 0x803318C0: nop
    
            goto L_80331918;
    }
    // 0x803318C0: nop

    // 0x803318C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803318C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803318CC: nop

    // 0x803318D0: swc1        $f10, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f10.u32l;
    // 0x803318D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803318D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803318DC: nop

    // 0x803318E0: swc1        $f16, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f16.u32l;
    // 0x803318E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803318E8: nop

    // 0x803318EC: lwc1        $f18, 0x2C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x803318F0: nop

    // 0x803318F4: swc1        $f18, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f18.u32l;
    // 0x803318F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803318FC: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80331900: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80331904: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331908: nop

    // 0x8033190C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80331910: b           L_80331A30
    // 0x80331914: nop

        goto L_80331A30;
    // 0x80331914: nop

L_80331918:
    // 0x80331918: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033191C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331920: jal         0x8001B4AC
    // 0x80331924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80331924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80331928: beq         $v0, $zero, L_80331A28
    if (ctx->r2 == 0) {
        // 0x8033192C: nop
    
            goto L_80331A28;
    }
    // 0x8033192C: nop

    // 0x80331930: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331934: nop

    // 0x80331938: lh          $t5, 0xA8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA8);
    // 0x8033193C: nop

    // 0x80331940: bne         $t5, $zero, L_80331994
    if (ctx->r13 != 0) {
        // 0x80331944: nop
    
            goto L_80331994;
    }
    // 0x80331944: nop

    // 0x80331948: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033194C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80331950: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80331954: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331958: nop

    // 0x8033195C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80331960: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331964: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331968: nop

    // 0x8033196C: swc1        $f4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f4.u32l;
    // 0x80331970: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331974: nop

    // 0x80331978: lwc1        $f6, 0x2C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x8033197C: nop

    // 0x80331980: swc1        $f6, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f6.u32l;
    // 0x80331984: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331988: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033198C: b           L_80331A28
    // 0x80331990: swc1        $f8, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f8.u32l;
        goto L_80331A28;
    // 0x80331990: swc1        $f8, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f8.u32l;
L_80331994:
    // 0x80331994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331998: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033199C: jal         0x8002A1FC
    // 0x803319A0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x803319A0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_5:
    // 0x803319A4: beq         $v0, $zero, L_803319F8
    if (ctx->r2 == 0) {
        // 0x803319A8: nop
    
            goto L_803319F8;
    }
    // 0x803319A8: nop

    // 0x803319AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803319B0: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x803319B4: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x803319B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803319BC: nop

    // 0x803319C0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x803319C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803319C8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803319CC: nop

    // 0x803319D0: swc1        $f10, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f10.u32l;
    // 0x803319D4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803319D8: nop

    // 0x803319DC: lwc1        $f16, 0x2C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x803319E0: nop

    // 0x803319E4: swc1        $f16, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f16.u32l;
    // 0x803319E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803319EC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803319F0: b           L_80331A28
    // 0x803319F4: swc1        $f18, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f18.u32l;
        goto L_80331A28;
    // 0x803319F4: swc1        $f18, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f18.u32l;
L_803319F8:
    // 0x803319F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803319FC: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x80331A00: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331A04: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331A08: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80331A0C: sb          $t1, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r9;
    // 0x80331A10: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331A14: nop

    // 0x80331A18: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x80331A1C: nop

    // 0x80331A20: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x80331A24: sh          $t6, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r14;
L_80331A28:
    // 0x80331A28: b           L_80331A30
    // 0x80331A2C: nop

        goto L_80331A30;
    // 0x80331A2C: nop

L_80331A30:
    // 0x80331A30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331A38: jr          $ra
    // 0x80331A3C: nop

    return;
    // 0x80331A3C: nop

;}
RECOMP_FUNC void func_8033020C_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033020C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330214: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330218: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033021C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330220: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330224: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330228: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033022C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330230: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330234: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330238: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033023C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330240: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330244: nop

    // 0x80330248: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033024C: nop

    // 0x80330250: bne         $t1, $zero, L_8033034C
    if (ctx->r9 != 0) {
        // 0x80330254: nop
    
            goto L_8033034C;
    }
    // 0x80330254: nop

    // 0x80330258: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033025C: nop

    // 0x80330260: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330264: nop

    // 0x80330268: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033026C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330270: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330274: nop

    // 0x80330278: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033027C: nop

    // 0x80330280: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330284: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330288: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033028C: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330290: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330294: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033029C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803302A0: jal         0x8001C0EC
    // 0x803302A4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803302A4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x803302A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803302AC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803302B0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803302B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803302B8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x803302BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803302C0: jal         0x8001ABF4
    // 0x803302C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803302C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x803302C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803302CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803302D0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803302D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803302D8: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x803302DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803302E0: jal         0x8001ABF4
    // 0x803302E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803302E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803302E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803302EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803302F0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803302F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803302F8: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x803302FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330300: jal         0x8001ABF4
    // 0x80330304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80330304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80330308: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033030C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330310: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80330314: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330318: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x8033031C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330320: jal         0x8001ABF4
    // 0x80330324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80330324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80330328: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033032C: nop

    // 0x80330330: lh          $t9, 0xB4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB4);
    // 0x80330334: nop

    // 0x80330338: bne         $t9, $zero, L_8033034C
    if (ctx->r25 != 0) {
        // 0x8033033C: nop
    
            goto L_8033034C;
    }
    // 0x8033033C: nop

    // 0x80330340: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330344: nop

    // 0x80330348: sh          $zero, 0xB4($t0)
    MEM_H(0XB4, ctx->r8) = 0;
L_8033034C:
    // 0x8033034C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330350: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330354: jal         0x8001B4AC
    // 0x80330358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80330358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8033035C: beq         $v0, $zero, L_8033037C
    if (ctx->r2 == 0) {
        // 0x80330360: nop
    
            goto L_8033037C;
    }
    // 0x80330360: nop

    // 0x80330364: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330368: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033036C: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80330370: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330374: nop

    // 0x80330378: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033037C:
    // 0x8033037C: b           L_80330384
    // 0x80330380: nop

        goto L_80330384;
    // 0x80330380: nop

L_80330384:
    // 0x80330384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033038C: jr          $ra
    // 0x80330390: nop

    return;
    // 0x80330390: nop

;}
RECOMP_FUNC void func_80331A40_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331A48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A70: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331A74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A78: nop

    // 0x80331A7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331A80: nop

    // 0x80331A84: bne         $t1, $zero, L_80331B7C
    if (ctx->r9 != 0) {
        // 0x80331A88: nop
    
            goto L_80331B7C;
    }
    // 0x80331A88: nop

    // 0x80331A8C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331A90: nop

    // 0x80331A94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331A98: nop

    // 0x80331A9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331AA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331AA4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331AA8: nop

    // 0x80331AAC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331AB0: nop

    // 0x80331AB4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ABC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331AC0: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331AC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331ACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331AD0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80331AD4: jal         0x8001C0EC
    // 0x80331AD8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331AD8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80331ADC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331AE0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331AE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331AE8: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331AEC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80331AF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331AF4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331AF8: nop

    // 0x80331AFC: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80331B00: swc1        $f16, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f16.u32l;
    // 0x80331B04: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331B08: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331B0C: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331B10: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x80331B14: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x80331B18: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80331B1C: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80331B20: addiu       $a1, $a1, 0x31EC
    ctx->r5 = ADD32(ctx->r5, 0X31EC);
    // 0x80331B24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331B28: jal         0x80027464
    // 0x80331B2C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80331B2C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80331B30: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331B34: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80331B38: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80331B3C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331B40: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331B44: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331B48: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331B4C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331B50: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331B54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B58: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331B5C: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
    // 0x80331B60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B6C: addiu       $a2, $zero, 0x71
    ctx->r6 = ADD32(0, 0X71);
    // 0x80331B70: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331B74: jal         0x800175F0
    // 0x80331B78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x80331B78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_80331B7C:
    // 0x80331B7C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331B80: nop

    // 0x80331B84: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80331B88: lwc1        $f14, 0xD4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x80331B8C: jal         0x80015538
    // 0x80331B90: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80331B90: nop

    after_3:
    // 0x80331B94: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331B98: nop

    // 0x80331B9C: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x80331BA0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331BA4: nop

    // 0x80331BA8: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80331BAC: nop

    // 0x80331BB0: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x80331BB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BBC: jal         0x8001B4AC
    // 0x80331BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80331BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80331BC4: beq         $v0, $zero, L_80331C2C
    if (ctx->r2 == 0) {
        // 0x80331BC8: nop
    
            goto L_80331C2C;
    }
    // 0x80331BC8: nop

    // 0x80331BCC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331BD0: addiu       $t5, $zero, 0x11
    ctx->r13 = ADD32(0, 0X11);
    // 0x80331BD4: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80331BD8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331BDC: nop

    // 0x80331BE0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80331BE4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331BE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331BEC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331BF0: nop

    // 0x80331BF4: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x80331BF8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331BFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331C00: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331C04: nop

    // 0x80331C08: swc1        $f10, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f10.u32l;
    // 0x80331C0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C10: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331C14: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80331C18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C1C: addiu       $a3, $a3, 0x118
    ctx->r7 = ADD32(ctx->r7, 0X118);
    // 0x80331C20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331C24: jal         0x8001ABF4
    // 0x80331C28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x80331C28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_80331C2C:
    // 0x80331C2C: b           L_80331C34
    // 0x80331C30: nop

        goto L_80331C34;
    // 0x80331C30: nop

L_80331C34:
    // 0x80331C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331C3C: jr          $ra
    // 0x80331C40: nop

    return;
    // 0x80331C40: nop

;}
RECOMP_FUNC void func_80330394_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330394: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033039C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803303A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803303A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803303A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803303AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803303B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803303BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803303C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803303C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803303C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803303CC: nop

    // 0x803303D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803303D4: nop

    // 0x803303D8: bne         $t1, $zero, L_80330430
    if (ctx->r9 != 0) {
        // 0x803303DC: nop
    
            goto L_80330430;
    }
    // 0x803303DC: nop

    // 0x803303E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803303E4: nop

    // 0x803303E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803303EC: nop

    // 0x803303F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803303F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803303F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803303FC: nop

    // 0x80330400: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330404: nop

    // 0x80330408: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033040C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330410: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330414: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330418: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033041C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330420: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330424: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330428: jal         0x8001C0EC
    // 0x8033042C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033042C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80330430:
    // 0x80330430: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330434: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330438: jal         0x8001B4AC
    // 0x8033043C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033043C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330440: beq         $v0, $zero, L_80330460
    if (ctx->r2 == 0) {
        // 0x80330444: nop
    
            goto L_80330460;
    }
    // 0x80330444: nop

    // 0x80330448: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033044C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80330450: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330454: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330458: nop

    // 0x8033045C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330460:
    // 0x80330460: b           L_80330468
    // 0x80330464: nop

        goto L_80330468;
    // 0x80330464: nop

L_80330468:
    // 0x80330468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033046C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330470: jr          $ra
    // 0x80330474: nop

    return;
    // 0x80330474: nop

;}
RECOMP_FUNC void func_803321E4_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803321E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803321E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803321EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803321F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803321F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803321F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803321FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332200: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332208: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033220C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332210: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332214: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332218: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033221C: nop

    // 0x80332220: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332224: nop

    // 0x80332228: bne         $t1, $zero, L_80332278
    if (ctx->r9 != 0) {
        // 0x8033222C: nop
    
            goto L_80332278;
    }
    // 0x8033222C: nop

    // 0x80332230: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332234: nop

    // 0x80332238: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033223C: nop

    // 0x80332240: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332244: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332248: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033224C: nop

    // 0x80332250: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332254: nop

    // 0x80332258: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033225C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332260: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80332264: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80332268: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033226C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332270: jal         0x80069E60
    // 0x80332274: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80332274: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_0:
L_80332278:
    // 0x80332278: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033227C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80332280: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80332284: nop

    // 0x80332288: bne         $t0, $at, L_803322CC
    if (ctx->r8 != ctx->r1) {
        // 0x8033228C: nop
    
            goto L_803322CC;
    }
    // 0x8033228C: nop

    // 0x80332290: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332294: nop

    // 0x80332298: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x8033229C: nop

    // 0x803322A0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x803322A4: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
    // 0x803322A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803322AC: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x803322B0: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x803322B4: lwc1        $f14, 0x4($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X4);
    // 0x803322B8: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x803322BC: jal         0x8007F070
    // 0x803322C0: nop

    func_8007F070(rdram, ctx);
        goto after_1;
    // 0x803322C0: nop

    after_1:
    // 0x803322C4: b           L_80332360
    // 0x803322C8: nop

        goto L_80332360;
    // 0x803322C8: nop

L_803322CC:
    // 0x803322CC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803322D0: nop

    // 0x803322D4: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x803322D8: nop

    // 0x803322DC: bne         $t5, $zero, L_80332348
    if (ctx->r13 != 0) {
        // 0x803322E0: nop
    
            goto L_80332348;
    }
    // 0x803322E0: nop

    // 0x803322E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803322E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803322EC: jal         0x8001BB34
    // 0x803322F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x803322F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803322F4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803322F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803322FC: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80332300: nop

    // 0x80332304: bne         $t8, $at, L_80332340
    if (ctx->r24 != ctx->r1) {
        // 0x80332308: nop
    
            goto L_80332340;
    }
    // 0x80332308: nop

    // 0x8033230C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332318: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x8033231C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332320: jal         0x800175F0
    // 0x80332324: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x80332324: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80332328: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033232C: nop

    // 0x80332330: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80332334: nop

    // 0x80332338: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x8033233C: sb          $t3, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r11;
L_80332340:
    // 0x80332340: b           L_80332360
    // 0x80332344: nop

        goto L_80332360;
    // 0x80332344: nop

L_80332348:
    // 0x80332348: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033234C: nop

    // 0x80332350: lh          $t1, 0xA6($t4)
    ctx->r9 = MEM_H(ctx->r12, 0XA6);
    // 0x80332354: nop

    // 0x80332358: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8033235C: sh          $t2, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r10;
L_80332360:
    // 0x80332360: b           L_80332368
    // 0x80332364: nop

        goto L_80332368;
    // 0x80332364: nop

L_80332368:
    // 0x80332368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033236C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332370: jr          $ra
    // 0x80332374: nop

    return;
    // 0x80332374: nop

;}
RECOMP_FUNC void func_80330764_unk_bin_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330764: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330768: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033076C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330770: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330774: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330778: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033077C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330780: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330784: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330788: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033078C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330790: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330794: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330798: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033079C: nop

    // 0x803307A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803307A4: nop

    // 0x803307A8: bne         $t1, $zero, L_80330820
    if (ctx->r9 != 0) {
        // 0x803307AC: nop
    
            goto L_80330820;
    }
    // 0x803307AC: nop

    // 0x803307B0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803307B4: nop

    // 0x803307B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803307BC: nop

    // 0x803307C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803307C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803307C8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803307CC: nop

    // 0x803307D0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803307D4: nop

    // 0x803307D8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803307DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803307E0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803307E4: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803307E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803307EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803307F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803307F4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x803307F8: jal         0x8001C0EC
    // 0x803307FC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803307FC: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80330800: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330804: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330808: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x8033080C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330810: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80330814: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330818: jal         0x8001ABF4
    // 0x8033081C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033081C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80330820:
    // 0x80330820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330824: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330828: jal         0x8001B4AC
    // 0x8033082C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033082C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330830: beq         $v0, $zero, L_803308D8
    if (ctx->r2 == 0) {
        // 0x80330834: nop
    
            goto L_803308D8;
    }
    // 0x80330834: nop

    // 0x80330838: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033083C: nop

    // 0x80330840: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80330844: nop

    // 0x80330848: bne         $t9, $zero, L_803308A8
    if (ctx->r25 != 0) {
        // 0x8033084C: nop
    
            goto L_803308A8;
    }
    // 0x8033084C: nop

    // 0x80330850: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330854: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80330858: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033085C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330860: nop

    // 0x80330864: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80330868: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033086C: nop

    // 0x80330870: lh          $t2, 0x100($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X100);
    // 0x80330874: nop

    // 0x80330878: slti        $at, $t2, 0x7
    ctx->r1 = SIGNED(ctx->r10) < 0X7 ? 1 : 0;
    // 0x8033087C: bne         $at, $zero, L_80330894
    if (ctx->r1 != 0) {
        // 0x80330880: nop
    
            goto L_80330894;
    }
    // 0x80330880: nop

    // 0x80330884: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330888: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033088C: b           L_803308A0
    // 0x80330890: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
        goto L_803308A0;
    // 0x80330890: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
L_80330894:
    // 0x80330894: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330898: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033089C: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_803308A0:
    // 0x803308A0: b           L_803308D8
    // 0x803308A4: nop

        goto L_803308D8;
    // 0x803308A4: nop

L_803308A8:
    // 0x803308A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803308AC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x803308B0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803308B4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803308B8: nop

    // 0x803308BC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803308C0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803308C4: nop

    // 0x803308C8: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x803308CC: nop

    // 0x803308D0: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x803308D4: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_803308D8:
    // 0x803308D8: b           L_803308E0
    // 0x803308DC: nop

        goto L_803308E0;
    // 0x803308DC: nop

L_803308E0:
    // 0x803308E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803308E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803308E8: jr          $ra
    // 0x803308EC: nop

    return;
    // 0x803308EC: nop

;}
