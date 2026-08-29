#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800E1640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E1644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E1648: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E164C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1650: jal         0x8002B0E4
    // 0x800E1654: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800E1654: nop

    after_0:
    // 0x800E1658: b           L_800E1660
    // 0x800E165C: nop

        goto L_800E1660;
    // 0x800E165C: nop

L_800E1660:
    // 0x800E1660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E1664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E1668: jr          $ra
    // 0x800E166C: nop

    return;
    // 0x800E166C: nop

;}
RECOMP_FUNC void func_800C0D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0D78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C0D7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C0D80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C0D84: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C0D88: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C0D8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C0D90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C0D94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C0D98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C0D9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C0DA0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C0DA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C0DA8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C0DAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C0DB0: nop

    // 0x800C0DB4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C0DB8: nop

    // 0x800C0DBC: bne         $t1, $zero, L_800C0E5C
    if (ctx->r9 != 0) {
        // 0x800C0DC0: nop
    
            goto L_800C0E5C;
    }
    // 0x800C0DC0: nop

    // 0x800C0DC4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C0DC8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C0DCC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800C0DD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C0DD4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C0DD8: nop

    // 0x800C0DDC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800C0DE0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C0DE4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C0DE8: nop

    // 0x800C0DEC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800C0DF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0DF4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800C0DF8: addiu       $t6, $t6, 0x7F08
    ctx->r14 = ADD32(ctx->r14, 0X7F08);
    // 0x800C0DFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0E00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800C0E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C0E08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C0E0C: jal         0x8001C0EC
    // 0x800C0E10: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C0E10: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    after_0:
    // 0x800C0E14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0E18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0E1C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800C0E20: addiu       $a3, $a3, 0x7F7C
    ctx->r7 = ADD32(ctx->r7, 0X7F7C);
    // 0x800C0E24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C0E28: jal         0x8001ABF4
    // 0x800C0E2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C0E2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C0E30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0E34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0E38: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800C0E3C: addiu       $a3, $a3, 0x7F98
    ctx->r7 = ADD32(ctx->r7, 0X7F98);
    // 0x800C0E40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C0E44: jal         0x8001ABF4
    // 0x800C0E48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800C0E48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800C0E4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0E50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0E54: jal         0x80029C40
    // 0x800C0E58: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800C0E58: nop

    after_3:
L_800C0E5C:
    // 0x800C0E5C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C0E60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C0E64: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x800C0E68: nop

    // 0x800C0E6C: bne         $t8, $at, L_800C0F00
    if (ctx->r24 != ctx->r1) {
        // 0x800C0E70: nop
    
            goto L_800C0F00;
    }
    // 0x800C0E70: nop

    // 0x800C0E74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0E78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0E7C: jal         0x8001B44C
    // 0x800C0E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800C0E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800C0E84: beq         $v0, $zero, L_800C0F00
    if (ctx->r2 == 0) {
        // 0x800C0E88: nop
    
            goto L_800C0F00;
    }
    // 0x800C0E88: nop

    // 0x800C0E8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0E90: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800C0E94: addiu       $t9, $t9, 0x7F08
    ctx->r25 = ADD32(ctx->r25, 0X7F08);
    // 0x800C0E98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0E9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800C0EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C0EA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800C0EA8: jal         0x8001C0EC
    // 0x800C0EAC: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800C0EAC: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    after_5:
    // 0x800C0EB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0EB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0EB8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800C0EBC: addiu       $a3, $a3, 0x7FB4
    ctx->r7 = ADD32(ctx->r7, 0X7FB4);
    // 0x800C0EC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C0EC4: jal         0x8001ABF4
    // 0x800C0EC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800C0EC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800C0ECC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0ED0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0ED4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800C0ED8: addiu       $a3, $a3, 0x7FD0
    ctx->r7 = ADD32(ctx->r7, 0X7FD0);
    // 0x800C0EDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C0EE0: jal         0x8001ABF4
    // 0x800C0EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x800C0EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x800C0EE8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C0EEC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800C0EF0: sb          $t0, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r8;
    // 0x800C0EF4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800C0EF8: jal         0x80069D04
    // 0x800C0EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069D04(rdram, ctx);
        goto after_8;
    // 0x800C0EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_800C0F00:
    // 0x800C0F00: b           L_800C0F08
    // 0x800C0F04: nop

        goto L_800C0F08;
    // 0x800C0F04: nop

L_800C0F08:
    // 0x800C0F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0F0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C0F10: jr          $ra
    // 0x800C0F14: nop

    return;
    // 0x800C0F14: nop

;}
RECOMP_FUNC void func_80093F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093F30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80093F34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093F38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80093F3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80093F40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80093F44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80093F48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80093F4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80093F50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80093F54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80093F58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80093F5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80093F60: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80093F64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80093F68: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x80093F6C: lh          $t1, 0xE4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE4);
    // 0x80093F70: nop

    // 0x80093F74: bne         $t1, $at, L_80094074
    if (ctx->r9 != ctx->r1) {
        // 0x80093F78: nop
    
            goto L_80094074;
    }
    // 0x80093F78: nop

    // 0x80093F7C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80093F80: nop

    // 0x80093F84: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80093F88: nop

    // 0x80093F8C: bne         $t3, $zero, L_80094004
    if (ctx->r11 != 0) {
        // 0x80093F90: nop
    
            goto L_80094004;
    }
    // 0x80093F90: nop

    // 0x80093F94: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80093F98: nop

    // 0x80093F9C: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80093FA0: nop

    // 0x80093FA4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80093FA8: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x80093FAC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80093FB0: nop

    // 0x80093FB4: sh          $zero, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = 0;
    // 0x80093FB8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80093FBC: nop

    // 0x80093FC0: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x80093FC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80093FC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80093FCC: jal         0x8001BB34
    // 0x80093FD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80093FD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80093FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80093FD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80093FDC: jal         0x8001BB04
    // 0x80093FE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x80093FE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80093FE4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80093FE8: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x80093FEC: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80093FF0: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80093FF4: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x80093FF8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80093FFC: jal         0x8002AE38
    // 0x80094000: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_8002AE38(rdram, ctx);
        goto after_2;
    // 0x80094000: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
L_80094004:
    // 0x80094004: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80094008: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8009400C: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x80094010: nop

    // 0x80094014: bne         $t2, $at, L_80094054
    if (ctx->r10 != ctx->r1) {
        // 0x80094018: nop
    
            goto L_80094054;
    }
    // 0x80094018: nop

    // 0x8009401C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80094020: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80094024: sh          $t3, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r11;
    // 0x80094028: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8009402C: nop

    // 0x80094030: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80094034: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80094038: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8009403C: nop

    // 0x80094040: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
    // 0x80094044: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80094048: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8009404C: b           L_8009406C
    // 0x80094050: swc1        $f6, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f6.u32l;
        goto L_8009406C;
    // 0x80094050: swc1        $f6, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f6.u32l;
L_80094054:
    // 0x80094054: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80094058: nop

    // 0x8009405C: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x80094060: nop

    // 0x80094064: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80094068: sh          $t0, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r8;
L_8009406C:
    // 0x8009406C: b           L_80094084
    // 0x80094070: nop

        goto L_80094084;
    // 0x80094070: nop

L_80094074:
    // 0x80094074: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009407C: jal         0x8002B0E4
    // 0x80094080: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x80094080: nop

    after_3:
L_80094084:
    // 0x80094084: b           L_8009408C
    // 0x80094088: nop

        goto L_8009408C;
    // 0x80094088: nop

L_8009408C:
    // 0x8009408C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80094090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80094094: jr          $ra
    // 0x80094098: nop

    return;
    // 0x80094098: nop

;}
RECOMP_FUNC void func_800E2068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2068: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800E206C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800E2070: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800E2074: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E2078: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800E207C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E2080: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E2084: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E2088: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E208C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2090: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E2094: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2098: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E209C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E20A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E20A4: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800E20A8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E20AC: nop

    // 0x800E20B0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E20B4: nop

    // 0x800E20B8: bne         $t1, $zero, L_800E21A0
    if (ctx->r9 != 0) {
        // 0x800E20BC: nop
    
            goto L_800E21A0;
    }
    // 0x800E20BC: nop

    // 0x800E20C0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E20C4: nop

    // 0x800E20C8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E20CC: nop

    // 0x800E20D0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E20D4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E20D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E20DC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E20E0: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800E20E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E20E8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E20EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E20F0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x800E20F4: jal         0x8001C0EC
    // 0x800E20F8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E20F8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800E20FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2104: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E2108: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E210C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E2110: jal         0x8001ABF4
    // 0x800E2114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E2114: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E2118: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E211C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E2120: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E2124: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2128: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E212C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E2130: jal         0x8001ABF4
    // 0x800E2134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E2134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E2138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E213C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2140: jal         0x8002A46C
    // 0x800E2144: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800E2144: nop

    after_3:
    // 0x800E2148: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E214C: nop

    // 0x800E2150: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800E2154: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E2158: nop

    // 0x800E215C: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800E2160: nop

    // 0x800E2164: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x800E2168: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800E216C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E2170: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800E2174: nop

    // 0x800E2178: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800E217C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E2180: nop

    // 0x800E2184: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800E2188: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E218C: nop

    // 0x800E2190: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x800E2194: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E2198: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800E219C: sh          $t1, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r9;
L_800E21A0:
    // 0x800E21A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E21A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E21A8: jal         0x80028FA0
    // 0x800E21AC: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800E21AC: nop

    after_4:
    // 0x800E21B0: beq         $v0, $zero, L_800E21C8
    if (ctx->r2 == 0) {
        // 0x800E21B4: nop
    
            goto L_800E21C8;
    }
    // 0x800E21B4: nop

    // 0x800E21B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E21BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E21C0: jal         0x80029B60
    // 0x800E21C4: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800E21C4: nop

    after_5:
L_800E21C8:
    // 0x800E21C8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E21CC: nop

    // 0x800E21D0: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x800E21D4: nop

    // 0x800E21D8: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x800E21DC: beq         $at, $zero, L_800E23BC
    if (ctx->r1 == 0) {
        // 0x800E21E0: nop
    
            goto L_800E23BC;
    }
    // 0x800E21E0: nop

    // 0x800E21E4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E21E8: nop

    // 0x800E21EC: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800E21F0: nop

    // 0x800E21F4: bne         $t6, $zero, L_800E221C
    if (ctx->r14 != 0) {
        // 0x800E21F8: nop
    
            goto L_800E221C;
    }
    // 0x800E21F8: nop

    // 0x800E21FC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800E2200: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800E2204: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800E2208: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E220C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2210: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x800E2214: jal         0x80029EF8
    // 0x800E2218: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_6;
    // 0x800E2218: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_6:
L_800E221C:
    // 0x800E221C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E2220: nop

    // 0x800E2224: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800E2228: nop

    // 0x800E222C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x800E2230: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E2234: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E2238: nop

    // 0x800E223C: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
    // 0x800E2240: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2248: jal         0x80029C40
    // 0x800E224C: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800E224C: nop

    after_7:
    // 0x800E2250: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E2254: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E2258: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E225C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E2264: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800E2268: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E226C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800E2270: jal         0x80029018
    // 0x800E2274: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800E2274: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x800E2278: beq         $v0, $zero, L_800E229C
    if (ctx->r2 == 0) {
        // 0x800E227C: nop
    
            goto L_800E229C;
    }
    // 0x800E227C: nop

    // 0x800E2280: jal         0x800297DC
    // 0x800E2284: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800E2284: nop

    after_9:
    // 0x800E2288: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E228C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2290: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E2294: jal         0x80029824
    // 0x800E2298: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800E2298: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
L_800E229C:
    // 0x800E229C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800E22A0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800E22A4: nop

    // 0x800E22A8: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x800E22AC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800E22B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E22B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E22B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E22BC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E22C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E22C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E22C8: jal         0x80029F58
    // 0x800E22CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_11;
    // 0x800E22CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x800E22D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E22D4: bne         $v0, $at, L_800E23B4
    if (ctx->r2 != ctx->r1) {
        // 0x800E22D8: nop
    
            goto L_800E23B4;
    }
    // 0x800E22D8: nop

    // 0x800E22DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E22E0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800E22E4: nop

    // 0x800E22E8: swc1        $f8, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f8.u32l;
    // 0x800E22EC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800E22F0: nop

    // 0x800E22F4: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800E22F8: nop

    // 0x800E22FC: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800E2300: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E2304: nop

    // 0x800E2308: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x800E230C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2314: jal         0x8001B4AC
    // 0x800E2318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_12;
    // 0x800E2318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x800E231C: beq         $v0, $zero, L_800E2390
    if (ctx->r2 == 0) {
        // 0x800E2320: nop
    
            goto L_800E2390;
    }
    // 0x800E2320: nop

    // 0x800E2324: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2328: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E232C: jal         0x8002A1FC
    // 0x800E2330: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_13;
    // 0x800E2330: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_13:
    // 0x800E2334: beq         $v0, $zero, L_800E236C
    if (ctx->r2 == 0) {
        // 0x800E2338: nop
    
            goto L_800E236C;
    }
    // 0x800E2338: nop

    // 0x800E233C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E2340: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800E2344: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800E2348: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800E234C: nop

    // 0x800E2350: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x800E2354: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E2358: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800E235C: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
    // 0x800E2360: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E2364: b           L_800E2384
    // 0x800E2368: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_800E2384;
    // 0x800E2368: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E236C:
    // 0x800E236C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800E2370: nop

    // 0x800E2374: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x800E2378: nop

    // 0x800E237C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E2380: sh          $t4, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r12;
L_800E2384:
    // 0x800E2384: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800E2388: b           L_800E23B4
    // 0x800E238C: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
        goto L_800E23B4;
    // 0x800E238C: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
L_800E2390:
    // 0x800E2390: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E2394: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800E2398: nop

    // 0x800E239C: swc1        $f10, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f10.u32l;
    // 0x800E23A0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800E23A4: nop

    // 0x800E23A8: lwc1        $f16, 0x2C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800E23AC: nop

    // 0x800E23B0: swc1        $f16, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f16.u32l;
L_800E23B4:
    // 0x800E23B4: b           L_800E23E0
    // 0x800E23B8: nop

        goto L_800E23E0;
    // 0x800E23B8: nop

L_800E23BC:
    // 0x800E23BC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800E23C0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800E23C4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800E23C8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800E23CC: nop

    // 0x800E23D0: sh          $zero, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = 0;
    // 0x800E23D4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800E23D8: nop

    // 0x800E23DC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E23E0:
    // 0x800E23E0: b           L_800E23E8
    // 0x800E23E4: nop

        goto L_800E23E8;
    // 0x800E23E4: nop

L_800E23E8:
    // 0x800E23E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800E23EC: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800E23F0: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800E23F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800E23F8: jr          $ra
    // 0x800E23FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800E23FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8006B64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B64C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006B650: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006B654: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B658: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B65C: nop

    // 0x8006B660: bne         $t6, $zero, L_8006B67C
    if (ctx->r14 != 0) {
        // 0x8006B664: nop
    
            goto L_8006B67C;
    }
    // 0x8006B664: nop

    // 0x8006B668: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B66C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B670: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006B674: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B678: sb          $zero, 0x793F($at)
    MEM_B(0X793F, ctx->r1) = 0;
L_8006B67C:
    // 0x8006B67C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006B680: lb          $t8, 0x793F($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X793F);
    // 0x8006B684: nop

    // 0x8006B688: bne         $t8, $zero, L_8006B73C
    if (ctx->r24 != 0) {
        // 0x8006B68C: nop
    
            goto L_8006B73C;
    }
    // 0x8006B68C: nop

    // 0x8006B690: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8006B694: lb          $t9, 0x5242($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X5242);
    // 0x8006B698: nop

    // 0x8006B69C: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8006B6A0: bne         $at, $zero, L_8006B73C
    if (ctx->r1 != 0) {
        // 0x8006B6A4: nop
    
            goto L_8006B73C;
    }
    // 0x8006B6A4: nop

    // 0x8006B6A8: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x8006B6AC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8006B6B0:
    // 0x8006B6B0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8006B6B4: jal         0x80026E58
    // 0x8006B6B8: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_0;
    // 0x8006B6B8: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_0:
    // 0x8006B6BC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8006B6C0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8006B6C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006B6C8: bne         $t1, $at, L_8006B6E0
    if (ctx->r9 != ctx->r1) {
        // 0x8006B6CC: nop
    
            goto L_8006B6E0;
    }
    // 0x8006B6CC: nop

    // 0x8006B6D0: b           L_8006B73C
    // 0x8006B6D4: nop

        goto L_8006B73C;
    // 0x8006B6D4: nop

    // 0x8006B6D8: b           L_8006B734
    // 0x8006B6DC: nop

        goto L_8006B734;
    // 0x8006B6DC: nop

L_8006B6E0:
    // 0x8006B6E0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8006B6E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8006B6E8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006B6EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006B6F0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8006B6F4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006B6F8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8006B6FC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8006B700: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8006B704: sh          $t2, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r10;
    // 0x8006B708: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8006B70C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006B710: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x8006B714: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8006B718: jal         0x800178D4
    // 0x8006B71C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x8006B71C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8006B720: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8006B724: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B728: sb          $t5, 0x793F($at)
    MEM_B(0X793F, ctx->r1) = ctx->r13;
    // 0x8006B72C: b           L_8006B73C
    // 0x8006B730: nop

        goto L_8006B73C;
    // 0x8006B730: nop

L_8006B734:
    // 0x8006B734: b           L_8006B6B0
    // 0x8006B738: nop

        goto L_8006B6B0;
    // 0x8006B738: nop

L_8006B73C:
    // 0x8006B73C: b           L_8006B744
    // 0x8006B740: nop

        goto L_8006B744;
    // 0x8006B740: nop

L_8006B744:
    // 0x8006B744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B748: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006B74C: jr          $ra
    // 0x8006B750: nop

    return;
    // 0x8006B750: nop

;}
RECOMP_FUNC void func_80090B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090B00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090B04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090B08: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090B0C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090B10: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090B14: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090B18: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090B1C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090B20: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090B24: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090B28: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090B2C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090B30: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090B34: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090B38: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090B3C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090B40: addiu       $a1, $a1, 0x1480
    ctx->r5 = ADD32(ctx->r5, 0X1480);
    // 0x80090B44: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090B48: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090B4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090B50: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090B54: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090B58: jal         0x80027464
    // 0x80090B5C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090B5C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090B60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090B64: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090B68: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090B6C: addiu       $a3, $a3, 0x2414
    ctx->r7 = ADD32(ctx->r7, 0X2414);
    // 0x80090B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80090B74: jal         0x8001ABF4
    // 0x80090B78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80090B78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80090B7C: b           L_80090B84
    // 0x80090B80: nop

        goto L_80090B84;
    // 0x80090B80: nop

L_80090B84:
    // 0x80090B84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090B8C: jr          $ra
    // 0x80090B90: nop

    return;
    // 0x80090B90: nop

;}
RECOMP_FUNC void func_80080228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080228: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008022C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080230: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080234: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080238: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8008023C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080240: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080244: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080248: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008024C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080250: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080254: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080258: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8008025C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80080260: nop

    // 0x80080264: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80080268: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8008026C: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80080270: nop

    // 0x80080274: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80080278: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8008027C: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
    // 0x80080280: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80080284: lwc1        $f18, -0x1EBC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80080288: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8008028C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80080290: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80080294: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80080298: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8008029C: nop

    // 0x800802A0: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x800802A4: nop

    // 0x800802A8: bc1t        L_80080360
    if (c1cs) {
        // 0x800802AC: nop
    
            goto L_80080360;
    }
    // 0x800802AC: nop

    // 0x800802B0: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x800802B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800802B8: nop

    // 0x800802BC: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800802C0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800802C4: nop

    // 0x800802C8: bc1t        L_80080360
    if (c1cs) {
        // 0x800802CC: nop
    
            goto L_80080360;
    }
    // 0x800802CC: nop

    // 0x800802D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800802D4: lwc1        $f4, -0x1EC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x800802D8: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x800802DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800802E0: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800802E4: sub.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x800802E8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800802EC: nop

    // 0x800802F0: bc1t        L_80080360
    if (c1cs) {
        // 0x800802F4: nop
    
            goto L_80080360;
    }
    // 0x800802F4: nop

    // 0x800802F8: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x800802FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80080300: nop

    // 0x80080304: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80080308: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x8008030C: nop

    // 0x80080310: bc1t        L_80080360
    if (c1cs) {
        // 0x80080314: nop
    
            goto L_80080360;
    }
    // 0x80080314: nop

    // 0x80080318: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008031C: lwc1        $f8, -0x1EB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x80080320: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80080324: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80080328: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8008032C: sub.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80080330: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80080334: nop

    // 0x80080338: bc1t        L_80080360
    if (c1cs) {
        // 0x8008033C: nop
    
            goto L_80080360;
    }
    // 0x8008033C: nop

    // 0x80080340: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80080344: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80080348: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8008034C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80080350: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80080354: nop

    // 0x80080358: bc1f        L_80080370
    if (!c1cs) {
        // 0x8008035C: nop
    
            goto L_80080370;
    }
    // 0x8008035C: nop

L_80080360:
    // 0x80080360: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80080364: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80080368: jal         0x8001A928
    // 0x8008036C: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8008036C: nop

    after_0:
L_80080370:
    // 0x80080370: b           L_80080378
    // 0x80080374: nop

        goto L_80080378;
    // 0x80080374: nop

L_80080378:
    // 0x80080378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008037C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80080380: jr          $ra
    // 0x80080384: nop

    return;
    // 0x80080384: nop

;}
RECOMP_FUNC void func_8007D2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D2C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007D2CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D2D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007D2D4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007D2D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007D2DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007D2E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D2E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007D2E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D2EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007D2F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007D2F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007D2F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007D2FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007D300: jal         0x8001B62C
    // 0x8007D304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8007D304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007D308: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007D30C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007D310: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007D314: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8007D318: nop

    // 0x8007D31C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007D320: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8007D324: nop

    // 0x8007D328: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8007D32C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007D330: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007D334: nop

    // 0x8007D338: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8007D33C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8007D340: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8007D344: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8007D348: nop

    // 0x8007D34C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8007D350: nop

    // 0x8007D354: bgez        $t2, L_8007D3A4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8007D358: nop
    
            goto L_8007D3A4;
    }
    // 0x8007D358: nop

    // 0x8007D35C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007D360: jal         0x8001B580
    // 0x8007D364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_1;
    // 0x8007D364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007D368: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007D36C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007D370: nop

    // 0x8007D374: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8007D378: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8007D37C: nop

    // 0x8007D380: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8007D384: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007D388: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007D38C: nop

    // 0x8007D390: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007D394: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8007D398: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8007D39C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8007D3A0: nop

L_8007D3A4:
    // 0x8007D3A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8007D3A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007D3AC: jal         0x8001B880
    // 0x8007D3B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_2;
    // 0x8007D3B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8007D3B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007D3B8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007D3BC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8007D3C0: bne         $t5, $at, L_8007D3DC
    if (ctx->r13 != ctx->r1) {
        // 0x8007D3C4: nop
    
            goto L_8007D3DC;
    }
    // 0x8007D3C4: nop

    // 0x8007D3C8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8007D3CC: addiu       $t6, $t6, -0x3A04
    ctx->r14 = ADD32(ctx->r14, -0X3A04);
    // 0x8007D3D0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007D3D4: b           L_8007D45C
    // 0x8007D3D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
        goto L_8007D45C;
    // 0x8007D3D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8007D3DC:
    // 0x8007D3DC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007D3E0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007D3E4: bne         $t7, $at, L_8007D400
    if (ctx->r15 != ctx->r1) {
        // 0x8007D3E8: nop
    
            goto L_8007D400;
    }
    // 0x8007D3E8: nop

    // 0x8007D3EC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007D3F0: addiu       $t8, $t8, -0x39C0
    ctx->r24 = ADD32(ctx->r24, -0X39C0);
    // 0x8007D3F4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8007D3F8: b           L_8007D45C
    // 0x8007D3FC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
        goto L_8007D45C;
    // 0x8007D3FC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8007D400:
    // 0x8007D400: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8007D404: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8007D408: bne         $t9, $at, L_8007D420
    if (ctx->r25 != ctx->r1) {
        // 0x8007D40C: nop
    
            goto L_8007D420;
    }
    // 0x8007D40C: nop

    // 0x8007D410: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8007D414: addiu       $t0, $t0, -0x3A04
    ctx->r8 = ADD32(ctx->r8, -0X3A04);
    // 0x8007D418: b           L_8007D45C
    // 0x8007D41C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_8007D45C;
    // 0x8007D41C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8007D420:
    // 0x8007D420: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8007D424: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8007D428: bne         $t1, $at, L_8007D440
    if (ctx->r9 != ctx->r1) {
        // 0x8007D42C: nop
    
            goto L_8007D440;
    }
    // 0x8007D42C: nop

    // 0x8007D430: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8007D434: addiu       $t2, $t2, -0x39C0
    ctx->r10 = ADD32(ctx->r10, -0X39C0);
    // 0x8007D438: b           L_8007D45C
    // 0x8007D43C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
        goto L_8007D45C;
    // 0x8007D43C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_8007D440:
    // 0x8007D440: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8007D444: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8007D448: bne         $t3, $at, L_8007D45C
    if (ctx->r11 != ctx->r1) {
        // 0x8007D44C: nop
    
            goto L_8007D45C;
    }
    // 0x8007D44C: nop

    // 0x8007D450: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8007D454: addiu       $t4, $t4, -0x397C
    ctx->r12 = ADD32(ctx->r12, -0X397C);
    // 0x8007D458: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_8007D45C:
    // 0x8007D45C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D460: nop

    // 0x8007D464: beq         $t5, $zero, L_8007D488
    if (ctx->r13 == 0) {
        // 0x8007D468: nop
    
            goto L_8007D488;
    }
    // 0x8007D468: nop

    // 0x8007D46C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8007D470: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D474: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D478: jal         0x80079BEC
    // 0x8007D47C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80079BEC(rdram, ctx);
        goto after_3;
    // 0x8007D47C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x8007D480: b           L_8007D4A0
    // 0x8007D484: nop

        goto L_8007D4A0;
    // 0x8007D484: nop

L_8007D488:
    // 0x8007D488: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007D48C: jal         0x80079874
    // 0x8007D490: nop

    func_80079874(rdram, ctx);
        goto after_4;
    // 0x8007D490: nop

    after_4:
    // 0x8007D494: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007D498: jal         0x80079960
    // 0x8007D49C: nop

    func_80079960(rdram, ctx);
        goto after_5;
    // 0x8007D49C: nop

    after_5:
L_8007D4A0:
    // 0x8007D4A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007D4A4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8007D4A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8007D4AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8007D4B0: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8007D4B4: jal         0x80015538
    // 0x8007D4B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x8007D4B8: nop

    after_6:
    // 0x8007D4BC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007D4C0: nop

    // 0x8007D4C4: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x8007D4C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007D4CC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8007D4D0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8007D4D4: lwc1        $f14, 0x18($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X18);
    // 0x8007D4D8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8007D4DC: jal         0x80015538
    // 0x8007D4E0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x8007D4E0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_7:
    // 0x8007D4E4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007D4E8: nop

    // 0x8007D4EC: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
    // 0x8007D4F0: b           L_8007D4F8
    // 0x8007D4F4: nop

        goto L_8007D4F8;
    // 0x8007D4F4: nop

L_8007D4F8:
    // 0x8007D4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D4FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007D500: jr          $ra
    // 0x8007D504: nop

    return;
    // 0x8007D504: nop

;}
RECOMP_FUNC void func_800697F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800697F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800697F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800697F8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800697FC: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x80069800: jal         0x800600B8
    // 0x80069804: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800600B8(rdram, ctx);
        goto after_0;
    // 0x80069804: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80069808: bne         $v0, $zero, L_80069818
    if (ctx->r2 != 0) {
        // 0x8006980C: nop
    
            goto L_80069818;
    }
    // 0x8006980C: nop

    // 0x80069810: b           L_800699A0
    // 0x80069814: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_800699A0;
    // 0x80069814: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80069818:
    // 0x80069818: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8006981C: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x80069820: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80069824: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80069828: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006982C: lbu         $t8, 0x39D4($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39D4);
    // 0x80069830: nop

    // 0x80069834: sb          $t8, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r24;
    // 0x80069838: lbu         $t9, 0x25($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X25);
    // 0x8006983C: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x80069840: blez        $t9, L_80069934
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80069844: nop
    
            goto L_80069934;
    }
    // 0x80069844: nop

L_80069848:
    // 0x80069848: lbu         $t0, 0x2B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006984C: lbu         $t2, 0x27($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X27);
    // 0x80069850: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80069854: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80069858: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8006985C: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80069860: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80069864: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80069868: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8006986C: lbu         $t5, 0x3B3C($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3B3C);
    // 0x80069870: nop

    // 0x80069874: sb          $t5, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r13;
    // 0x80069878: lbu         $t6, 0x24($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X24);
    // 0x8006987C: sb          $zero, 0x26($sp)
    MEM_B(0X26, ctx->r29) = 0;
    // 0x80069880: blez        $t6, L_80069918
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80069884: nop
    
            goto L_80069918;
    }
    // 0x80069884: nop

L_80069888:
    // 0x80069888: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006988C: lbu         $t9, 0x27($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X27);
    // 0x80069890: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80069894: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80069898: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8006989C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x800698A0: lbu         $t1, 0x26($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X26);
    // 0x800698A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800698A8: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800698AC: addu        $t2, $t8, $t0
    ctx->r10 = ADD32(ctx->r24, ctx->r8);
    // 0x800698B0: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x800698B4: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x800698B8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800698BC: lbu         $t4, 0x4808($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X4808);
    // 0x800698C0: nop

    // 0x800698C4: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x800698C8: sb          $t5, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r13;
    // 0x800698CC: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x800698D0: nop

    // 0x800698D4: blez        $t6, L_800698FC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800698D8: nop
    
            goto L_800698FC;
    }
    // 0x800698D8: nop

    // 0x800698DC: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x800698E0: beq         $at, $zero, L_800698FC
    if (ctx->r1 == 0) {
        // 0x800698E4: nop
    
            goto L_800698FC;
    }
    // 0x800698E4: nop

    // 0x800698E8: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x800698EC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800698F0: nop

    // 0x800698F4: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x800698F8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_800698FC:
    // 0x800698FC: lbu         $t0, 0x26($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X26);
    // 0x80069900: lbu         $t3, 0x24($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X24);
    // 0x80069904: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80069908: andi        $t1, $t2, 0xFF
    ctx->r9 = ctx->r10 & 0XFF;
    // 0x8006990C: slt         $at, $t1, $t3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80069910: bne         $at, $zero, L_80069888
    if (ctx->r1 != 0) {
        // 0x80069914: sb          $t2, 0x26($sp)
        MEM_B(0X26, ctx->r29) = ctx->r10;
            goto L_80069888;
    }
    // 0x80069914: sb          $t2, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r10;
L_80069918:
    // 0x80069918: lbu         $t4, 0x27($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X27);
    // 0x8006991C: lbu         $t7, 0x25($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X25);
    // 0x80069920: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80069924: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x80069928: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8006992C: bne         $at, $zero, L_80069848
    if (ctx->r1 != 0) {
        // 0x80069930: sb          $t5, 0x27($sp)
        MEM_B(0X27, ctx->r29) = ctx->r13;
            goto L_80069848;
    }
    // 0x80069930: sb          $t5, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r13;
L_80069934:
    // 0x80069934: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80069938:
    // 0x80069938: lbu         $t8, 0x2B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2B);
    // 0x8006993C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80069940: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x80069944: sll         $t1, $t2, 1
    ctx->r9 = S32(ctx->r10 << 1);
    // 0x80069948: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x8006994C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80069950: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80069954: lh          $t4, -0x4400($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X4400);
    // 0x80069958: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8006995C: nop

    // 0x80069960: slt         $at, $t9, $t4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80069964: bne         $at, $zero, L_80069974
    if (ctx->r1 != 0) {
        // 0x80069968: nop
    
            goto L_80069974;
    }
    // 0x80069968: nop

    // 0x8006996C: b           L_8006998C
    // 0x80069970: nop

        goto L_8006998C;
    // 0x80069970: nop

L_80069974:
    // 0x80069974: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80069978: nop

    // 0x8006997C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80069980: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80069984: bne         $at, $zero, L_80069938
    if (ctx->r1 != 0) {
        // 0x80069988: sw          $t6, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r14;
            goto L_80069938;
    }
    // 0x80069988: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
L_8006998C:
    // 0x8006998C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80069990: b           L_800699A0
    // 0x80069994: nop

        goto L_800699A0;
    // 0x80069994: nop

    // 0x80069998: b           L_800699A0
    // 0x8006999C: nop

        goto L_800699A0;
    // 0x8006999C: nop

L_800699A0:
    // 0x800699A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800699A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800699A8: jr          $ra
    // 0x800699AC: nop

    return;
    // 0x800699AC: nop

;}
RECOMP_FUNC void func_800B3C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B3C5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B3C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B3C64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B3C68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B3C6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B3C70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B3C74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3C78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B3C7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B3C80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B3C84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B3C88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B3C8C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B3C90: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3C94: nop

    // 0x800B3C98: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B3C9C: nop

    // 0x800B3CA0: bne         $t1, $zero, L_800B3CF8
    if (ctx->r9 != 0) {
        // 0x800B3CA4: nop
    
            goto L_800B3CF8;
    }
    // 0x800B3CA4: nop

    // 0x800B3CA8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3CAC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B3CB0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B3CB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B3CB8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3CBC: nop

    // 0x800B3CC0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B3CC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B3CC8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3CCC: nop

    // 0x800B3CD0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B3CD4: jal         0x80014E80
    // 0x800B3CD8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800B3CD8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x800B3CDC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3CE0: addiu       $t6, $v0, 0x3C
    ctx->r14 = ADD32(ctx->r2, 0X3C);
    // 0x800B3CE4: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800B3CE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3CEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3CF0: jal         0x8001BBDC
    // 0x800B3CF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800B3CF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800B3CF8:
    // 0x800B3CF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3CFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3D00: jal         0x80029C40
    // 0x800B3D04: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B3D04: nop

    after_2:
    // 0x800B3D08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3D0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3D10: jal         0x80029D04
    // 0x800B3D14: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B3D14: nop

    after_3:
    // 0x800B3D18: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3D1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B3D20: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800B3D24: nop

    // 0x800B3D28: bne         $t9, $at, L_800B3D54
    if (ctx->r25 != ctx->r1) {
        // 0x800B3D2C: nop
    
            goto L_800B3D54;
    }
    // 0x800B3D2C: nop

    // 0x800B3D30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3D34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3D38: jal         0x8001B44C
    // 0x800B3D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800B3D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800B3D40: beq         $v0, $zero, L_800B3D54
    if (ctx->r2 == 0) {
        // 0x800B3D44: nop
    
            goto L_800B3D54;
    }
    // 0x800B3D44: nop

    // 0x800B3D48: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3D4C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800B3D50: sb          $t0, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r8;
L_800B3D54:
    // 0x800B3D54: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3D58: nop

    // 0x800B3D5C: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800B3D60: nop

    // 0x800B3D64: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800B3D68: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x800B3D6C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3D70: nop

    // 0x800B3D74: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800B3D78: nop

    // 0x800B3D7C: bgtz        $t6, L_800B3DB4
    if (SIGNED(ctx->r14) > 0) {
        // 0x800B3D80: nop
    
            goto L_800B3DB4;
    }
    // 0x800B3D80: nop

    // 0x800B3D84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B3D88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B3D8C: jal         0x8002A1FC
    // 0x800B3D90: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800B3D90: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_5:
    // 0x800B3D94: beq         $v0, $zero, L_800B3DB4
    if (ctx->r2 == 0) {
        // 0x800B3D98: nop
    
            goto L_800B3DB4;
    }
    // 0x800B3D98: nop

    // 0x800B3D9C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3DA0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800B3DA4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800B3DA8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B3DAC: nop

    // 0x800B3DB0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800B3DB4:
    // 0x800B3DB4: b           L_800B3DBC
    // 0x800B3DB8: nop

        goto L_800B3DBC;
    // 0x800B3DB8: nop

L_800B3DBC:
    // 0x800B3DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B3DC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B3DC4: jr          $ra
    // 0x800B3DC8: nop

    return;
    // 0x800B3DC8: nop

;}
RECOMP_FUNC void func_800A9260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9260: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A9264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A9268: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A926C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A9270: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A9274: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A9278: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A927C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A9280: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9284: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A9288: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A928C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A9290: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A9294: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A9298: nop

    // 0x800A929C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A92A0: nop

    // 0x800A92A4: bne         $t1, $zero, L_800A933C
    if (ctx->r9 != 0) {
        // 0x800A92A8: nop
    
            goto L_800A933C;
    }
    // 0x800A92A8: nop

    // 0x800A92AC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A92B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A92B4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A92B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A92BC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A92C0: nop

    // 0x800A92C4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A92C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A92CC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A92D0: nop

    // 0x800A92D4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A92D8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A92DC: nop

    // 0x800A92E0: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800A92E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A92E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A92EC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A92F0: addiu       $a3, $a3, 0x7620
    ctx->r7 = ADD32(ctx->r7, 0X7620);
    // 0x800A92F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A92F8: jal         0x8001ABF4
    // 0x800A92FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800A92FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800A9300: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A9304: nop

    // 0x800A9308: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800A930C: nop

    // 0x800A9310: bne         $t8, $zero, L_800A933C
    if (ctx->r24 != 0) {
        // 0x800A9314: nop
    
            goto L_800A933C;
    }
    // 0x800A9314: nop

    // 0x800A9318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A931C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800A9320: addiu       $t9, $t9, 0x75D0
    ctx->r25 = ADD32(ctx->r25, 0X75D0);
    // 0x800A9324: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9328: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A932C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A9334: jal         0x8001C0EC
    // 0x800A9338: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800A9338: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_1:
L_800A933C:
    // 0x800A933C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9340: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9344: jal         0x80029C40
    // 0x800A9348: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A9348: nop

    after_2:
    // 0x800A934C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9350: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9354: jal         0x80029D04
    // 0x800A9358: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800A9358: nop

    after_3:
    // 0x800A935C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A9360: nop

    // 0x800A9364: lwc1        $f8, 0x3C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800A9368: nop

    // 0x800A936C: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
    // 0x800A9370: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A9374: nop

    // 0x800A9378: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800A937C: nop

    // 0x800A9380: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800A9384: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x800A9388: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A938C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800A9390: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800A9394: nop

    // 0x800A9398: bne         $t5, $at, L_800A93DC
    if (ctx->r13 != ctx->r1) {
        // 0x800A939C: nop
    
            goto L_800A93DC;
    }
    // 0x800A939C: nop

    // 0x800A93A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A93A4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x800A93A8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800A93AC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A93B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A93B4: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800A93B8: nop

    // 0x800A93BC: bne         $t9, $at, L_800A93D0
    if (ctx->r25 != ctx->r1) {
        // 0x800A93C0: nop
    
            goto L_800A93D0;
    }
    // 0x800A93C0: nop

    // 0x800A93C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A93C8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800A93CC: sh          $t0, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r8;
L_800A93D0:
    // 0x800A93D0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A93D4: nop

    // 0x800A93D8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800A93DC:
    // 0x800A93DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A93E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A93E4: jal         0x8002A1FC
    // 0x800A93E8: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x800A93E8: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_4:
    // 0x800A93EC: beq         $v0, $zero, L_800A940C
    if (ctx->r2 == 0) {
        // 0x800A93F0: nop
    
            goto L_800A940C;
    }
    // 0x800A93F0: nop

    // 0x800A93F4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A93F8: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x800A93FC: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x800A9400: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A9404: nop

    // 0x800A9408: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800A940C:
    // 0x800A940C: b           L_800A9414
    // 0x800A9410: nop

        goto L_800A9414;
    // 0x800A9410: nop

L_800A9414:
    // 0x800A9414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A941C: jr          $ra
    // 0x800A9420: nop

    return;
    // 0x800A9420: nop

;}
RECOMP_FUNC void func_80085D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085D54: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80085D58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085D5C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80085D60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80085D64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80085D68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80085D6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80085D70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80085D74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80085D78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80085D7C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80085D80: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80085D84: nop

    // 0x80085D88: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x80085D8C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80085D90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80085D94: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80085D98: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80085D9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80085DA0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80085DA4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80085DA8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80085DAC: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80085DB0: nop

    // 0x80085DB4: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x80085DB8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80085DBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80085DC0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80085DC4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80085DC8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80085DCC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80085DD0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80085DD4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80085DD8: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80085DDC: nop

    // 0x80085DE0: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x80085DE4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80085DE8: lb          $t2, 0x523E($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X523E);
    // 0x80085DEC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80085DF0: bne         $t2, $at, L_80085E18
    if (ctx->r10 != ctx->r1) {
        // 0x80085DF4: nop
    
            goto L_80085E18;
    }
    // 0x80085DF4: nop

    // 0x80085DF8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80085DFC: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80085E00: lwc1        $f19, -0x3360($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X3360);
    // 0x80085E04: lwc1        $f18, -0x335C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X335C);
    // 0x80085E08: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80085E0C: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80085E10: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80085E14: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
L_80085E18:
    // 0x80085E18: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80085E1C: lb          $t3, 0x523E($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X523E);
    // 0x80085E20: nop

    // 0x80085E24: bne         $t3, $zero, L_80085F44
    if (ctx->r11 != 0) {
        // 0x80085E28: nop
    
            goto L_80085F44;
    }
    // 0x80085E28: nop

    // 0x80085E2C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80085E30: lh          $t4, 0x5270($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X5270);
    // 0x80085E34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80085E38: beq         $t4, $at, L_80085F44
    if (ctx->r12 == ctx->r1) {
        // 0x80085E3C: nop
    
            goto L_80085F44;
    }
    // 0x80085E3C: nop

    // 0x80085E40: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80085E44: lh          $t5, 0x5280($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X5280);
    // 0x80085E48: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    // 0x80085E4C: bne         $t5, $at, L_80085F44
    if (ctx->r13 != ctx->r1) {
        // 0x80085E50: nop
    
            goto L_80085F44;
    }
    // 0x80085E50: nop

    // 0x80085E54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80085E58: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80085E5C: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x80085E60: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80085E64: nop

    // 0x80085E68: beq         $t7, $at, L_80085F44
    if (ctx->r15 == ctx->r1) {
        // 0x80085E6C: nop
    
            goto L_80085F44;
    }
    // 0x80085E6C: nop

    // 0x80085E70: beq         $t7, $zero, L_80085F44
    if (ctx->r15 == 0) {
        // 0x80085E74: nop
    
            goto L_80085F44;
    }
    // 0x80085E74: nop

    // 0x80085E78: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80085E7C: lh          $t8, 0x5270($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X5270);
    // 0x80085E80: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80085E84: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80085E88: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80085E8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80085E90: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80085E94: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80085E98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80085E9C: lh          $t0, 0x41F6($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X41F6);
    // 0x80085EA0: nop

    // 0x80085EA4: bne         $t0, $zero, L_80085F44
    if (ctx->r8 != 0) {
        // 0x80085EA8: nop
    
            goto L_80085F44;
    }
    // 0x80085EA8: nop

    // 0x80085EAC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80085EB0: lh          $t2, 0x5270($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X5270);
    // 0x80085EB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80085EB8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80085EBC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80085EC0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80085EC4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80085EC8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80085ECC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80085ED0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80085ED4: sh          $t1, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r9;
    // 0x80085ED8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80085EDC: lh          $t5, 0x5270($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X5270);
    // 0x80085EE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80085EE4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80085EE8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80085EEC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80085EF0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80085EF4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80085EF8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80085EFC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80085F00: sh          $t4, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r12;
    // 0x80085F04: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80085F08: lh          $t7, -0x1F00($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1F00);
    // 0x80085F0C: nop

    // 0x80085F10: beq         $t7, $zero, L_80085F20
    if (ctx->r15 == 0) {
        // 0x80085F14: nop
    
            goto L_80085F20;
    }
    // 0x80085F14: nop

    // 0x80085F18: jal         0x8007A6DC
    // 0x80085F1C: nop

    func_8007A6DC(rdram, ctx);
        goto after_0;
    // 0x80085F1C: nop

    after_0:
L_80085F20:
    // 0x80085F20: jal         0x802828C0
    // 0x80085F24: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_1;
    // 0x80085F24: nop

    after_1:
    // 0x80085F28: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80085F2C: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x80085F30: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085F34: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x80085F38: sw          $t9, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r25;
    // 0x80085F3C: b           L_80086AC0
    // 0x80085F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80086AC0;
    // 0x80085F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80085F44:
    // 0x80085F44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085F48: sb          $zero, -0x1CC8($at)
    MEM_B(-0X1CC8, ctx->r1) = 0;
    // 0x80085F4C: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80085F50: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80085F54: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80085F58: jal         0x800843CC
    // 0x80085F5C: nop

    func_800843CC(rdram, ctx);
        goto after_2;
    // 0x80085F5C: nop

    after_2:
    // 0x80085F60: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80085F64: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80085F68: nop

    // 0x80085F6C: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x80085F70: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80085F74: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80085F78: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80085F7C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80085F80: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80085F84: lw          $t5, 0x7740($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7740);
    // 0x80085F88: nop

    // 0x80085F8C: sb          $t5, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r13;
    // 0x80085F90: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80085F94: lbu         $t4, -0x1F6C($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1F6C);
    // 0x80085F98: nop

    // 0x80085F9C: beq         $t4, $zero, L_80085FC4
    if (ctx->r12 == 0) {
        // 0x80085FA0: nop
    
            goto L_80085FC4;
    }
    // 0x80085FA0: nop

    // 0x80085FA4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80085FA8: lbu         $t7, -0x1F6C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F6C);
    // 0x80085FAC: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x80085FB0: nop

    // 0x80085FB4: beq         $t6, $t7, L_80085FC4
    if (ctx->r14 == ctx->r15) {
        // 0x80085FB8: nop
    
            goto L_80085FC4;
    }
    // 0x80085FB8: nop

    // 0x80085FBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085FC0: sb          $zero, -0x1F6C($at)
    MEM_B(-0X1F6C, ctx->r1) = 0;
L_80085FC4:
    // 0x80085FC4: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x80085FC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085FCC: sb          $t8, -0x1BEC($at)
    MEM_B(-0X1BEC, ctx->r1) = ctx->r24;
    // 0x80085FD0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80085FD4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80085FD8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80085FDC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80085FE0: lw          $t2, 0x7750($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7750);
    // 0x80085FE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085FE8: sh          $t2, -0x1BE4($at)
    MEM_H(-0X1BE4, ctx->r1) = ctx->r10;
    // 0x80085FEC: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x80085FF0: nop

    // 0x80085FF4: addiu       $t3, $t1, -0xD7
    ctx->r11 = ADD32(ctx->r9, -0XD7);
    // 0x80085FF8: sltiu       $at, $t3, 0x29
    ctx->r1 = ctx->r11 < 0X29 ? 1 : 0;
    // 0x80085FFC: beq         $at, $zero, L_80086AB0
    if (ctx->r1 == 0) {
        // 0x80086000: nop
    
            goto L_80086AB0;
    }
    // 0x80086000: nop

    // 0x80086004: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80086008: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8008600C: addu        $at, $at, $t3
    gpr jr_addend_80086018 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80086010: lw          $t3, -0x3358($at)
    ctx->r11 = ADD32(ctx->r1, -0X3358);
    // 0x80086014: nop

    // 0x80086018: jr          $t3
    // 0x8008601C: nop

    switch (jr_addend_80086018 >> 2) {
        case 0: goto L_80086754; break;
        case 1: goto L_80086AB0; break;
        case 2: goto L_80086AB0; break;
        case 3: goto L_80086440; break;
        case 4: goto L_80086AB0; break;
        case 5: goto L_80086AB0; break;
        case 6: goto L_80086AB0; break;
        case 7: goto L_80086AB0; break;
        case 8: goto L_80086AB0; break;
        case 9: goto L_80086AB0; break;
        case 10: goto L_80086AB0; break;
        case 11: goto L_80086AB0; break;
        case 12: goto L_80086860; break;
        case 13: goto L_80086AB0; break;
        case 14: goto L_80086AB0; break;
        case 15: goto L_80086028; break;
        case 16: goto L_80086028; break;
        case 17: goto L_80086754; break;
        case 18: goto L_800868C4; break;
        case 19: goto L_80086AB0; break;
        case 20: goto L_80086AB0; break;
        case 21: goto L_80086754; break;
        case 22: goto L_80086754; break;
        case 23: goto L_80086170; break;
        case 24: goto L_8008668C; break;
        case 25: goto L_800865A0; break;
        case 26: goto L_80086170; break;
        case 27: goto L_80086AB0; break;
        case 28: goto L_80086AB0; break;
        case 29: goto L_80086AB0; break;
        case 30: goto L_80086AB0; break;
        case 31: goto L_80086028; break;
        case 32: goto L_80086AB0; break;
        case 33: goto L_80086AB0; break;
        case 34: goto L_80086AB0; break;
        case 35: goto L_80086AB0; break;
        case 36: goto L_80086AB0; break;
        case 37: goto L_8008661C; break;
        case 38: goto L_80086AB0; break;
        case 39: goto L_80086028; break;
        case 40: goto L_80086020; break;
        default: switch_error(__func__, 0x80086018, 0x8010CCA8);
    }
    // 0x8008601C: nop

L_80086020:
    // 0x80086020: b           L_80086AC0
    // 0x80086024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x80086024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80086028:
    // 0x80086028: jal         0x8006AA24
    // 0x8008602C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006AA24(rdram, ctx);
        goto after_3;
    // 0x8008602C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80086030: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80086034: lb          $t5, -0x1BFC($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1BFC);
    // 0x80086038: nop

    // 0x8008603C: beq         $t5, $zero, L_8008604C
    if (ctx->r13 == 0) {
        // 0x80086040: nop
    
            goto L_8008604C;
    }
    // 0x80086040: nop

    // 0x80086044: b           L_80086AC0
    // 0x80086048: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x80086048: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008604C:
    // 0x8008604C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80086050: lbu         $t4, 0x1F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X1F);
    // 0x80086054: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80086058: beq         $t4, $at, L_8008606C
    if (ctx->r12 == ctx->r1) {
        // 0x8008605C: nop
    
            goto L_8008606C;
    }
    // 0x8008605C: nop

    // 0x80086060: addiu       $at, $zero, 0xE7
    ctx->r1 = ADD32(0, 0XE7);
    // 0x80086064: bne         $t4, $at, L_800860A8
    if (ctx->r12 != ctx->r1) {
        // 0x80086068: nop
    
            goto L_800860A8;
    }
    // 0x80086068: nop

L_8008606C:
    // 0x8008606C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80086070: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086074: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80086078: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008607C: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80086080: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80086084: nop

    // 0x80086088: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x8008608C: nop

    // 0x80086090: bc1f        L_800860A0
    if (!c1cs) {
        // 0x80086094: nop
    
            goto L_800860A0;
    }
    // 0x80086094: nop

    // 0x80086098: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8008609C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_800860A0:
    // 0x800860A0: b           L_800860B0
    // 0x800860A4: nop

        goto L_800860B0;
    // 0x800860A4: nop

L_800860A8:
    // 0x800860A8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800860AC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_800860B0:
    // 0x800860B0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800860B4: nop

    // 0x800860B8: beq         $t0, $zero, L_80086168
    if (ctx->r8 == 0) {
        // 0x800860BC: nop
    
            goto L_80086168;
    }
    // 0x800860BC: nop

    // 0x800860C0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800860C4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800860C8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800860CC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800860D0: lw          $t3, 0x7750($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7750);
    // 0x800860D4: nop

    // 0x800860D8: bgez        $t3, L_800860EC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800860DC: andi        $t5, $t3, 0xFF
        ctx->r13 = ctx->r11 & 0XFF;
            goto L_800860EC;
    }
    // 0x800860DC: andi        $t5, $t3, 0xFF
    ctx->r13 = ctx->r11 & 0XFF;
    // 0x800860E0: beq         $t5, $zero, L_800860EC
    if (ctx->r13 == 0) {
        // 0x800860E4: nop
    
            goto L_800860EC;
    }
    // 0x800860E4: nop

    // 0x800860E8: addiu       $t5, $t5, -0x100
    ctx->r13 = ADD32(ctx->r13, -0X100);
L_800860EC:
    // 0x800860EC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x800860F0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800860F4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800860F8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800860FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80086100: lw          $t7, 0x7750($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7750);
    // 0x80086104: nop

    // 0x80086108: bgez        $t7, L_80086118
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8008610C: sra         $t8, $t7, 8
        ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
            goto L_80086118;
    }
    // 0x8008610C: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x80086110: addiu       $at, $t7, 0xFF
    ctx->r1 = ADD32(ctx->r15, 0XFF);
    // 0x80086114: sra         $t8, $at, 8
    ctx->r24 = S32(SIGNED(ctx->r1) >> 8);
L_80086118:
    // 0x80086118: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8008611C: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x80086120: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x80086124: beq         $t9, $at, L_80086138
    if (ctx->r25 == ctx->r1) {
        // 0x80086128: nop
    
            goto L_80086138;
    }
    // 0x80086128: nop

    // 0x8008612C: addiu       $at, $zero, 0xF6
    ctx->r1 = ADD32(0, 0XF6);
    // 0x80086130: bne         $t9, $at, L_80086154
    if (ctx->r25 != ctx->r1) {
        // 0x80086134: nop
    
            goto L_80086154;
    }
    // 0x80086134: nop

L_80086138:
    // 0x80086138: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8008613C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80086140: xori        $t0, $a1, 0x1
    ctx->r8 = ctx->r5 ^ 0X1;
    // 0x80086144: jal         0x80069D88
    // 0x80086148: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_80069D88(rdram, ctx);
        goto after_4;
    // 0x80086148: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_4:
    // 0x8008614C: b           L_80086160
    // 0x80086150: nop

        goto L_80086160;
    // 0x80086150: nop

L_80086154:
    // 0x80086154: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80086158: jal         0x80069D04
    // 0x8008615C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069D04(rdram, ctx);
        goto after_5;
    // 0x8008615C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80086160:
    // 0x80086160: b           L_80086AC0
    // 0x80086164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x80086164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80086168:
    // 0x80086168: b           L_80086AB0
    // 0x8008616C: nop

        goto L_80086AB0;
    // 0x8008616C: nop

L_80086170:
    // 0x80086170: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80086174: lb          $t2, -0x1BFC($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X1BFC);
    // 0x80086178: nop

    // 0x8008617C: beq         $t2, $zero, L_8008618C
    if (ctx->r10 == 0) {
        // 0x80086180: nop
    
            goto L_8008618C;
    }
    // 0x80086180: nop

    // 0x80086184: b           L_80086AB0
    // 0x80086188: nop

        goto L_80086AB0;
    // 0x80086188: nop

L_8008618C:
    // 0x8008618C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80086190: lbu         $t1, -0x1F6C($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1F6C);
    // 0x80086194: nop

    // 0x80086198: beq         $t1, $zero, L_800861A8
    if (ctx->r9 == 0) {
        // 0x8008619C: nop
    
            goto L_800861A8;
    }
    // 0x8008619C: nop

    // 0x800861A0: b           L_80086AB0
    // 0x800861A4: nop

        goto L_80086AB0;
    // 0x800861A4: nop

L_800861A8:
    // 0x800861A8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x800861AC: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800861B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800861B4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800861B8: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x800861BC: lw          $t4, 0x7740($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7740);
    // 0x800861C0: addiu       $at, $zero, 0xF1
    ctx->r1 = ADD32(0, 0XF1);
    // 0x800861C4: bne         $t4, $at, L_80086208
    if (ctx->r12 != ctx->r1) {
        // 0x800861C8: nop
    
            goto L_80086208;
    }
    // 0x800861C8: nop

    // 0x800861CC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800861D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800861D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800861D8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800861DC: lwc1        $f18, 0x7760($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800861E0: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800861E4: nop

    // 0x800861E8: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x800861EC: nop

    // 0x800861F0: bc1f        L_80086200
    if (!c1cs) {
        // 0x800861F4: nop
    
            goto L_80086200;
    }
    // 0x800861F4: nop

    // 0x800861F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800861FC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_80086200:
    // 0x80086200: b           L_80086210
    // 0x80086204: nop

        goto L_80086210;
    // 0x80086204: nop

L_80086208:
    // 0x80086208: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008620C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_80086210:
    // 0x80086210: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80086214: nop

    // 0x80086218: beq         $t0, $zero, L_80086438
    if (ctx->r8 == 0) {
        // 0x8008621C: nop
    
            goto L_80086438;
    }
    // 0x8008621C: nop

    // 0x80086220: lbu         $t2, 0x1F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1F);
    // 0x80086224: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086228: sb          $t2, -0x1F6C($at)
    MEM_B(-0X1F6C, ctx->r1) = ctx->r10;
    // 0x8008622C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80086230: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80086234: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80086238: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8008623C: lw          $t5, 0x7750($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7750);
    // 0x80086240: nop

    // 0x80086244: bgez        $t5, L_80086258
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80086248: andi        $t4, $t5, 0xFF
        ctx->r12 = ctx->r13 & 0XFF;
            goto L_80086258;
    }
    // 0x80086248: andi        $t4, $t5, 0xFF
    ctx->r12 = ctx->r13 & 0XFF;
    // 0x8008624C: beq         $t4, $zero, L_80086258
    if (ctx->r12 == 0) {
        // 0x80086250: nop
    
            goto L_80086258;
    }
    // 0x80086250: nop

    // 0x80086254: addiu       $t4, $t4, -0x100
    ctx->r12 = ADD32(ctx->r12, -0X100);
L_80086258:
    // 0x80086258: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8008625C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80086260: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80086264: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80086268: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008626C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80086270: lw          $t8, -0x4C04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4C04);
    // 0x80086274: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80086278: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8008627C: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x80086280: addu        $t1, $t9, $t2
    ctx->r9 = ADD32(ctx->r25, ctx->r10);
    // 0x80086284: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x80086288: nop

    // 0x8008628C: sb          $t3, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r11;
    // 0x80086290: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80086294: lw          $t5, -0x1BD8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1BD8);
    // 0x80086298: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8008629C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x800862A0: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800862A4: lw          $t6, -0x4C04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4C04);
    // 0x800862A8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800862AC: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x800862B0: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x800862B4: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x800862B8: lbu         $t2, 0x1($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X1);
    // 0x800862BC: nop

    // 0x800862C0: sb          $t2, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r10;
    // 0x800862C4: lbu         $t1, 0x1E($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1E);
    // 0x800862C8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800862CC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800862D0: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800862D4: lw          $t5, -0x7DC8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7DC8);
    // 0x800862D8: lbu         $t6, 0x1D($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1D);
    // 0x800862DC: lw          $t4, 0x0($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X0);
    // 0x800862E0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800862E4: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x800862E8: addu        $t0, $t4, $t7
    ctx->r8 = ADD32(ctx->r12, ctx->r15);
    // 0x800862EC: lh          $t9, 0x0($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X0);
    // 0x800862F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800862F4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800862F8: nop

    // 0x800862FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80086300: swc1        $f6, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f6.u32l;
    // 0x80086304: lbu         $t2, 0x1E($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1E);
    // 0x80086308: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8008630C: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80086310: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80086314: lw          $t3, -0x7DC8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X7DC8);
    // 0x80086318: lbu         $t6, 0x1D($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1D);
    // 0x8008631C: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x80086320: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80086324: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x80086328: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x8008632C: lh          $t0, 0x2($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X2);
    // 0x80086330: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086334: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80086338: nop

    // 0x8008633C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80086340: swc1        $f10, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f10.u32l;
    // 0x80086344: lbu         $t9, 0x1E($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1E);
    // 0x80086348: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8008634C: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80086350: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80086354: lw          $t1, -0x7DC8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X7DC8);
    // 0x80086358: lbu         $t6, 0x1D($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1D);
    // 0x8008635C: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x80086360: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80086364: sll         $t5, $t8, 1
    ctx->r13 = S32(ctx->r24 << 1);
    // 0x80086368: addu        $t4, $t3, $t5
    ctx->r12 = ADD32(ctx->r11, ctx->r13);
    // 0x8008636C: lh          $t7, 0x4($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X4);
    // 0x80086370: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086374: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80086378: nop

    // 0x8008637C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80086380: swc1        $f18, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f18.u32l;
    // 0x80086384: lbu         $t0, 0x1E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1E);
    // 0x80086388: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8008638C: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80086390: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80086394: lw          $t2, -0x7DC8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X7DC8);
    // 0x80086398: lbu         $t6, 0x1D($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1D);
    // 0x8008639C: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x800863A0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800863A4: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x800863A8: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x800863AC: lh          $t4, 0x6($t5)
    ctx->r12 = MEM_H(ctx->r13, 0X6);
    // 0x800863B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800863B4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x800863B8: nop

    // 0x800863BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800863C0: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x800863C4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800863C8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800863CC: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x800863D0: lh          $t0, 0x108($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X108);
    // 0x800863D4: nop

    // 0x800863D8: beq         $t0, $at, L_80086438
    if (ctx->r8 == ctx->r1) {
        // 0x800863DC: nop
    
            goto L_80086438;
    }
    // 0x800863DC: nop

    // 0x800863E0: beq         $t0, $zero, L_80086438
    if (ctx->r8 == 0) {
        // 0x800863E4: nop
    
            goto L_80086438;
    }
    // 0x800863E4: nop

    // 0x800863E8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800863EC: lb          $t9, 0x523E($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X523E);
    // 0x800863F0: nop

    // 0x800863F4: bne         $t9, $zero, L_80086414
    if (ctx->r25 != 0) {
        // 0x800863F8: nop
    
            goto L_80086414;
    }
    // 0x800863F8: nop

    // 0x800863FC: jal         0x802845C4
    // 0x80086400: nop

    func_802845C4_code_extra_0(rdram, ctx);
        goto after_6;
    // 0x80086400: nop

    after_6:
    // 0x80086404: b           L_80086AC0
    // 0x80086408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80086AC0;
    // 0x80086408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008640C: b           L_80086438
    // 0x80086410: nop

        goto L_80086438;
    // 0x80086410: nop

L_80086414:
    // 0x80086414: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80086418: lb          $t2, 0x523E($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X523E);
    // 0x8008641C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80086420: bne         $t2, $at, L_80086438
    if (ctx->r10 != ctx->r1) {
        // 0x80086424: nop
    
            goto L_80086438;
    }
    // 0x80086424: nop

    // 0x80086428: jal         0x80282198
    // 0x8008642C: nop

    func_80282198_code_extra_1(rdram, ctx);
        goto after_7;
    // 0x8008642C: nop

    after_7:
    // 0x80086430: b           L_80086AC0
    // 0x80086434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80086AC0;
    // 0x80086434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80086438:
    // 0x80086438: b           L_80086AB0
    // 0x8008643C: nop

        goto L_80086AB0;
    // 0x8008643C: nop

L_80086440:
    // 0x80086440: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80086444: lb          $t6, -0x1BFC($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1BFC);
    // 0x80086448: nop

    // 0x8008644C: beq         $t6, $zero, L_8008645C
    if (ctx->r14 == 0) {
        // 0x80086450: nop
    
            goto L_8008645C;
    }
    // 0x80086450: nop

    // 0x80086454: b           L_80086AC0
    // 0x80086458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x80086458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008645C:
    // 0x8008645C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80086460: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086464: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80086468: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008646C: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80086470: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80086474: nop

    // 0x80086478: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x8008647C: nop

    // 0x80086480: bc1f        L_80086590
    if (!c1cs) {
        // 0x80086484: nop
    
            goto L_80086590;
    }
    // 0x80086484: nop

    // 0x80086488: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8008648C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80086490: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80086494: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80086498: lw          $t4, 0x7750($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7750);
    // 0x8008649C: nop

    // 0x800864A0: bgez        $t4, L_800864B4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800864A4: andi        $t7, $t4, 0xFF
        ctx->r15 = ctx->r12 & 0XFF;
            goto L_800864B4;
    }
    // 0x800864A4: andi        $t7, $t4, 0xFF
    ctx->r15 = ctx->r12 & 0XFF;
    // 0x800864A8: beq         $t7, $zero, L_800864B4
    if (ctx->r15 == 0) {
        // 0x800864AC: nop
    
            goto L_800864B4;
    }
    // 0x800864AC: nop

    // 0x800864B0: addiu       $t7, $t7, -0x100
    ctx->r15 = ADD32(ctx->r15, -0X100);
L_800864B4:
    // 0x800864B4: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x800864B8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800864BC: nop

    // 0x800864C0: bne         $t0, $zero, L_800864F0
    if (ctx->r8 != 0) {
        // 0x800864C4: nop
    
            goto L_800864F0;
    }
    // 0x800864C4: nop

    // 0x800864C8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800864CC: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x800864D0: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x800864D4: bne         $t9, $at, L_800864F0
    if (ctx->r25 != ctx->r1) {
        // 0x800864D8: nop
    
            goto L_800864F0;
    }
    // 0x800864D8: nop

    // 0x800864DC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800864E0: jal         0x80069D04
    // 0x800864E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069D04(rdram, ctx);
        goto after_8;
    // 0x800864E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800864E8: b           L_80086590
    // 0x800864EC: nop

        goto L_80086590;
    // 0x800864EC: nop

L_800864F0:
    // 0x800864F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800864F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800864F8: bne         $t2, $at, L_80086528
    if (ctx->r10 != ctx->r1) {
        // 0x800864FC: nop
    
            goto L_80086528;
    }
    // 0x800864FC: nop

    // 0x80086500: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80086504: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80086508: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x8008650C: bne         $t6, $at, L_80086528
    if (ctx->r14 != ctx->r1) {
        // 0x80086510: nop
    
            goto L_80086528;
    }
    // 0x80086510: nop

    // 0x80086514: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80086518: jal         0x80069D04
    // 0x8008651C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069D04(rdram, ctx);
        goto after_9;
    // 0x8008651C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80086520: b           L_80086590
    // 0x80086524: nop

        goto L_80086590;
    // 0x80086524: nop

L_80086528:
    // 0x80086528: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8008652C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80086530: bne         $t8, $at, L_80086560
    if (ctx->r24 != ctx->r1) {
        // 0x80086534: nop
    
            goto L_80086560;
    }
    // 0x80086534: nop

    // 0x80086538: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008653C: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x80086540: addiu       $at, $zero, 0x6A
    ctx->r1 = ADD32(0, 0X6A);
    // 0x80086544: bne         $t1, $at, L_80086560
    if (ctx->r9 != ctx->r1) {
        // 0x80086548: nop
    
            goto L_80086560;
    }
    // 0x80086548: nop

    // 0x8008654C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80086550: jal         0x80069D04
    // 0x80086554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069D04(rdram, ctx);
        goto after_10;
    // 0x80086554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80086558: b           L_80086590
    // 0x8008655C: nop

        goto L_80086590;
    // 0x8008655C: nop

L_80086560:
    // 0x80086560: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80086564: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80086568: bne         $t3, $at, L_80086590
    if (ctx->r11 != ctx->r1) {
        // 0x8008656C: nop
    
            goto L_80086590;
    }
    // 0x8008656C: nop

    // 0x80086570: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80086574: lw          $t5, -0x1BD8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1BD8);
    // 0x80086578: addiu       $at, $zero, 0x6B
    ctx->r1 = ADD32(0, 0X6B);
    // 0x8008657C: bne         $t5, $at, L_80086590
    if (ctx->r13 != ctx->r1) {
        // 0x80086580: nop
    
            goto L_80086590;
    }
    // 0x80086580: nop

    // 0x80086584: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80086588: jal         0x80069D88
    // 0x8008658C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069D88(rdram, ctx);
        goto after_11;
    // 0x8008658C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
L_80086590:
    // 0x80086590: b           L_80086AC0
    // 0x80086594: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x80086594: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80086598: b           L_80086AB0
    // 0x8008659C: nop

        goto L_80086AB0;
    // 0x8008659C: nop

L_800865A0:
    // 0x800865A0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800865A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800865A8: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800865AC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800865B0: lwc1        $f18, 0x7760($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800865B4: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800865B8: nop

    // 0x800865BC: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x800865C0: nop

    // 0x800865C4: bc1f        L_80086614
    if (!c1cs) {
        // 0x800865C8: nop
    
            goto L_80086614;
    }
    // 0x800865C8: nop

    // 0x800865CC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800865D0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x800865D4: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x800865D8: lh          $t9, 0x108($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X108);
    // 0x800865DC: nop

    // 0x800865E0: beq         $t9, $at, L_80086614
    if (ctx->r25 == ctx->r1) {
        // 0x800865E4: nop
    
            goto L_80086614;
    }
    // 0x800865E4: nop

    // 0x800865E8: beq         $t9, $zero, L_80086614
    if (ctx->r25 == 0) {
        // 0x800865EC: nop
    
            goto L_80086614;
    }
    // 0x800865EC: nop

    // 0x800865F0: jal         0x802828C0
    // 0x800865F4: nop

    func_802828C0_code_extra_0(rdram, ctx);
        goto after_12;
    // 0x800865F4: nop

    after_12:
    // 0x800865F8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800865FC: lw          $t2, 0x51A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51A4);
    // 0x80086600: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80086604: ori         $t6, $t2, 0x4
    ctx->r14 = ctx->r10 | 0X4;
    // 0x80086608: sw          $t6, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r14;
    // 0x8008660C: b           L_80086AC0
    // 0x80086610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80086AC0;
    // 0x80086610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80086614:
    // 0x80086614: b           L_80086AB0
    // 0x80086618: nop

        goto L_80086AB0;
    // 0x80086618: nop

L_8008661C:
    // 0x8008661C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80086620: lb          $t8, -0x1BFC($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1BFC);
    // 0x80086624: nop

    // 0x80086628: beq         $t8, $zero, L_80086638
    if (ctx->r24 == 0) {
        // 0x8008662C: nop
    
            goto L_80086638;
    }
    // 0x8008662C: nop

    // 0x80086630: b           L_80086AC0
    // 0x80086634: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x80086634: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80086638:
    // 0x80086638: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8008663C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086640: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80086644: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80086648: lwc1        $f6, 0x7760($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8008664C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80086650: nop

    // 0x80086654: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80086658: nop

    // 0x8008665C: bc1f        L_80086684
    if (!c1cs) {
        // 0x80086660: nop
    
            goto L_80086684;
    }
    // 0x80086660: nop

    // 0x80086664: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80086668: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008666C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80086670: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80086674: lw          $t7, 0x7750($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7750);
    // 0x80086678: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008667C: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x80086680: sb          $t0, -0x1D83($at)
    MEM_B(-0X1D83, ctx->r1) = ctx->r8;
L_80086684:
    // 0x80086684: b           L_80086AB0
    // 0x80086688: nop

        goto L_80086AB0;
    // 0x80086688: nop

L_8008668C:
    // 0x8008668C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80086690: lb          $t9, -0x1BFC($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1BFC);
    // 0x80086694: nop

    // 0x80086698: beq         $t9, $zero, L_800866A8
    if (ctx->r25 == 0) {
        // 0x8008669C: nop
    
            goto L_800866A8;
    }
    // 0x8008669C: nop

    // 0x800866A0: b           L_80086AC0
    // 0x800866A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x800866A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800866A8:
    // 0x800866A8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800866AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800866B0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800866B4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800866B8: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x800866BC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800866C0: nop

    // 0x800866C4: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x800866C8: nop

    // 0x800866CC: bc1f        L_8008674C
    if (!c1cs) {
        // 0x800866D0: nop
    
            goto L_8008674C;
    }
    // 0x800866D0: nop

    // 0x800866D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800866D8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800866DC: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x800866E0: lh          $t1, 0x108($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X108);
    // 0x800866E4: nop

    // 0x800866E8: beq         $t1, $at, L_8008674C
    if (ctx->r9 == ctx->r1) {
        // 0x800866EC: nop
    
            goto L_8008674C;
    }
    // 0x800866EC: nop

    // 0x800866F0: beq         $t1, $zero, L_8008674C
    if (ctx->r9 == 0) {
        // 0x800866F4: nop
    
            goto L_8008674C;
    }
    // 0x800866F4: nop

    // 0x800866F8: jal         0x802844D4
    // 0x800866FC: nop

    func_802844D4_code_extra_0(rdram, ctx);
        goto after_13;
    // 0x800866FC: nop

    after_13:
    // 0x80086700: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80086704: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80086708: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8008670C: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80086710: lw          $t4, 0x7750($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7750);
    // 0x80086714: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80086718: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x8008671C: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x80086720: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80086724: subu        $t7, $t7, $t4
    ctx->r15 = SUB32(ctx->r15, ctx->r12);
    // 0x80086728: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008672C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80086730: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80086734: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80086738: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8008673C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80086740: swc1        $f18, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f18.u32l;
    // 0x80086744: b           L_80086AC0
    // 0x80086748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80086AC0;
    // 0x80086748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008674C:
    // 0x8008674C: b           L_80086AB0
    // 0x80086750: nop

        goto L_80086AB0;
    // 0x80086750: nop

L_80086754:
    // 0x80086754: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80086758: lb          $t9, -0x1BFC($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1BFC);
    // 0x8008675C: nop

    // 0x80086760: beq         $t9, $zero, L_80086770
    if (ctx->r25 == 0) {
        // 0x80086764: nop
    
            goto L_80086770;
    }
    // 0x80086764: nop

    // 0x80086768: b           L_80086AC0
    // 0x8008676C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x8008676C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80086770:
    // 0x80086770: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80086774: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086778: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8008677C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80086780: lwc1        $f6, 0x7760($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80086784: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80086788: nop

    // 0x8008678C: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80086790: nop

    // 0x80086794: bc1f        L_80086858
    if (!c1cs) {
        // 0x80086798: nop
    
            goto L_80086858;
    }
    // 0x80086798: nop

    // 0x8008679C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800867A0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800867A4: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800867A8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800867AC: lw          $t3, 0x7740($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7740);
    // 0x800867B0: addiu       $at, $zero, 0xED
    ctx->r1 = ADD32(0, 0XED);
    // 0x800867B4: bne         $t3, $at, L_800867CC
    if (ctx->r11 != ctx->r1) {
        // 0x800867B8: nop
    
            goto L_800867CC;
    }
    // 0x800867B8: nop

    // 0x800867BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800867C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800867C4: b           L_80086858
    // 0x800867C8: sb          $t5, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = ctx->r13;
        goto L_80086858;
    // 0x800867C8: sb          $t5, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = ctx->r13;
L_800867CC:
    // 0x800867CC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800867D0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800867D4: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800867D8: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800867DC: lw          $t0, 0x7740($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7740);
    // 0x800867E0: addiu       $at, $zero, 0xEC
    ctx->r1 = ADD32(0, 0XEC);
    // 0x800867E4: bne         $t0, $at, L_800867FC
    if (ctx->r8 != ctx->r1) {
        // 0x800867E8: nop
    
            goto L_800867FC;
    }
    // 0x800867E8: nop

    // 0x800867EC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800867F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800867F4: b           L_80086858
    // 0x800867F8: sb          $t9, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = ctx->r25;
        goto L_80086858;
    // 0x800867F8: sb          $t9, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = ctx->r25;
L_800867FC:
    // 0x800867FC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80086800: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80086804: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80086808: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008680C: lw          $t8, 0x7740($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7740);
    // 0x80086810: addiu       $at, $zero, 0xE8
    ctx->r1 = ADD32(0, 0XE8);
    // 0x80086814: bne         $t8, $at, L_8008682C
    if (ctx->r24 != ctx->r1) {
        // 0x80086818: nop
    
            goto L_8008682C;
    }
    // 0x80086818: nop

    // 0x8008681C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80086820: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086824: b           L_80086858
    // 0x80086828: sb          $t1, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = ctx->r9;
        goto L_80086858;
    // 0x80086828: sb          $t1, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = ctx->r9;
L_8008682C:
    // 0x8008682C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80086830: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80086834: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80086838: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8008683C: lw          $t4, 0x7740($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7740);
    // 0x80086840: addiu       $at, $zero, 0xD7
    ctx->r1 = ADD32(0, 0XD7);
    // 0x80086844: bne         $t4, $at, L_80086858
    if (ctx->r12 != ctx->r1) {
        // 0x80086848: nop
    
            goto L_80086858;
    }
    // 0x80086848: nop

    // 0x8008684C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80086850: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086854: sb          $t7, -0x1D78($at)
    MEM_B(-0X1D78, ctx->r1) = ctx->r15;
L_80086858:
    // 0x80086858: b           L_80086AB0
    // 0x8008685C: nop

        goto L_80086AB0;
    // 0x8008685C: nop

L_80086860:
    // 0x80086860: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80086864: lb          $t0, -0x1BFC($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1BFC);
    // 0x80086868: nop

    // 0x8008686C: beq         $t0, $zero, L_8008687C
    if (ctx->r8 == 0) {
        // 0x80086870: nop
    
            goto L_8008687C;
    }
    // 0x80086870: nop

    // 0x80086874: b           L_80086AC0
    // 0x80086878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x80086878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008687C:
    // 0x8008687C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80086880: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086884: sb          $t9, -0x1CC8($at)
    MEM_B(-0X1CC8, ctx->r1) = ctx->r25;
    // 0x80086888: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008688C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80086890: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x80086894: lh          $t6, 0x108($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X108);
    // 0x80086898: nop

    // 0x8008689C: beq         $t6, $at, L_800868C4
    if (ctx->r14 == ctx->r1) {
        // 0x800868A0: nop
    
            goto L_800868C4;
    }
    // 0x800868A0: nop

    // 0x800868A4: beq         $t6, $zero, L_800868C4
    if (ctx->r14 == 0) {
        // 0x800868A8: nop
    
            goto L_800868C4;
    }
    // 0x800868A8: nop

    // 0x800868AC: jal         0x80284840
    // 0x800868B0: nop

    func_80284840_code_extra_0(rdram, ctx);
        goto after_14;
    // 0x800868B0: nop

    after_14:
    // 0x800868B4: b           L_80086AC0
    // 0x800868B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80086AC0;
    // 0x800868B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800868BC: b           L_80086AB0
    // 0x800868C0: nop

        goto L_80086AB0;
    // 0x800868C0: nop

L_800868C4:
    // 0x800868C4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800868C8: lb          $t8, -0x1BFC($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1BFC);
    // 0x800868CC: nop

    // 0x800868D0: beq         $t8, $zero, L_800868E0
    if (ctx->r24 == 0) {
        // 0x800868D4: nop
    
            goto L_800868E0;
    }
    // 0x800868D4: nop

    // 0x800868D8: b           L_80086AC0
    // 0x800868DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x800868DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800868E0:
    // 0x800868E0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800868E4: lbu         $t1, -0x1F6C($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1F6C);
    // 0x800868E8: nop

    // 0x800868EC: beq         $t1, $zero, L_800868FC
    if (ctx->r9 == 0) {
        // 0x800868F0: nop
    
            goto L_800868FC;
    }
    // 0x800868F0: nop

    // 0x800868F4: b           L_80086AB0
    // 0x800868F8: nop

        goto L_80086AB0;
    // 0x800868F8: nop

L_800868FC:
    // 0x800868FC: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80086900: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086904: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80086908: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008690C: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80086910: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80086914: nop

    // 0x80086918: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x8008691C: nop

    // 0x80086920: bc1f        L_80086AA8
    if (!c1cs) {
        // 0x80086924: nop
    
            goto L_80086AA8;
    }
    // 0x80086924: nop

    // 0x80086928: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8008692C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80086930: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80086934: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80086938: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8008693C: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80086940: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80086944: jal         0x800843CC
    // 0x80086948: nop

    func_800843CC(rdram, ctx);
        goto after_15;
    // 0x80086948: nop

    after_15:
    // 0x8008694C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80086950: lbu         $t4, 0x76E0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X76E0);
    // 0x80086954: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80086958: andi        $t7, $t4, 0x1
    ctx->r15 = ctx->r12 & 0X1;
    // 0x8008695C: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80086960: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80086964: lw          $t9, 0x7740($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7740);
    // 0x80086968: addiu       $at, $zero, 0xE9
    ctx->r1 = ADD32(0, 0XE9);
    // 0x8008696C: beq         $t9, $at, L_8008697C
    if (ctx->r25 == ctx->r1) {
        // 0x80086970: nop
    
            goto L_8008697C;
    }
    // 0x80086970: nop

    // 0x80086974: b           L_80086AB0
    // 0x80086978: nop

        goto L_80086AB0;
    // 0x80086978: nop

L_8008697C:
    // 0x8008697C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80086980: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80086984: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80086988: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8008698C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80086990: jal         0x800843CC
    // 0x80086994: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_800843CC(rdram, ctx);
        goto after_16;
    // 0x80086994: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_16:
    // 0x80086998: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008699C: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x800869A0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800869A4: andi        $t6, $t2, 0x1
    ctx->r14 = ctx->r10 & 0X1;
    // 0x800869A8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800869AC: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800869B0: lw          $t1, 0x7740($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7740);
    // 0x800869B4: addiu       $at, $zero, 0xE9
    ctx->r1 = ADD32(0, 0XE9);
    // 0x800869B8: beq         $t1, $at, L_800869C8
    if (ctx->r9 == ctx->r1) {
        // 0x800869BC: nop
    
            goto L_800869C8;
    }
    // 0x800869BC: nop

    // 0x800869C0: b           L_80086AB0
    // 0x800869C4: nop

        goto L_80086AB0;
    // 0x800869C4: nop

L_800869C8:
    // 0x800869C8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x800869CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800869D0: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800869D4: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800869D8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800869DC: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800869E0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x800869E4: jal         0x800843CC
    // 0x800869E8: nop

    func_800843CC(rdram, ctx);
        goto after_17;
    // 0x800869E8: nop

    after_17:
    // 0x800869EC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800869F0: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x800869F4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800869F8: andi        $t5, $t3, 0x1
    ctx->r13 = ctx->r11 & 0X1;
    // 0x800869FC: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80086A00: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80086A04: lw          $t7, 0x7740($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7740);
    // 0x80086A08: addiu       $at, $zero, 0xE9
    ctx->r1 = ADD32(0, 0XE9);
    // 0x80086A0C: beq         $t7, $at, L_80086A1C
    if (ctx->r15 == ctx->r1) {
        // 0x80086A10: nop
    
            goto L_80086A1C;
    }
    // 0x80086A10: nop

    // 0x80086A14: b           L_80086AB0
    // 0x80086A18: nop

        goto L_80086AB0;
    // 0x80086A18: nop

L_80086A1C:
    // 0x80086A1C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80086A20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80086A24: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80086A28: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80086A2C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80086A30: jal         0x800843CC
    // 0x80086A34: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800843CC(rdram, ctx);
        goto after_18;
    // 0x80086A34: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_18:
    // 0x80086A38: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80086A3C: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80086A40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80086A44: andi        $t9, $t0, 0x1
    ctx->r25 = ctx->r8 & 0X1;
    // 0x80086A48: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80086A4C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80086A50: lw          $t6, 0x7740($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7740);
    // 0x80086A54: addiu       $at, $zero, 0xE9
    ctx->r1 = ADD32(0, 0XE9);
    // 0x80086A58: beq         $t6, $at, L_80086A68
    if (ctx->r14 == ctx->r1) {
        // 0x80086A5C: nop
    
            goto L_80086A68;
    }
    // 0x80086A5C: nop

    // 0x80086A60: b           L_80086AB0
    // 0x80086A64: nop

        goto L_80086AB0;
    // 0x80086A64: nop

L_80086A68:
    // 0x80086A68: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80086A6C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80086A70: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x80086A74: lh          $t1, 0x108($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X108);
    // 0x80086A78: nop

    // 0x80086A7C: beq         $t1, $at, L_80086AA8
    if (ctx->r9 == ctx->r1) {
        // 0x80086A80: nop
    
            goto L_80086AA8;
    }
    // 0x80086A80: nop

    // 0x80086A84: beq         $t1, $zero, L_80086AA8
    if (ctx->r9 == 0) {
        // 0x80086A88: nop
    
            goto L_80086AA8;
    }
    // 0x80086A88: nop

    // 0x80086A8C: jal         0x80284758
    // 0x80086A90: nop

    func_80284758_code_extra_0(rdram, ctx);
        goto after_19;
    // 0x80086A90: nop

    after_19:
    // 0x80086A94: lbu         $t3, 0x1F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1F);
    // 0x80086A98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80086A9C: sb          $t3, -0x1F6C($at)
    MEM_B(-0X1F6C, ctx->r1) = ctx->r11;
    // 0x80086AA0: b           L_80086AC0
    // 0x80086AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80086AC0;
    // 0x80086AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80086AA8:
    // 0x80086AA8: b           L_80086AB0
    // 0x80086AAC: nop

        goto L_80086AB0;
    // 0x80086AAC: nop

L_80086AB0:
    // 0x80086AB0: b           L_80086AC0
    // 0x80086AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80086AC0;
    // 0x80086AB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80086AB8: b           L_80086AC0
    // 0x80086ABC: nop

        goto L_80086AC0;
    // 0x80086ABC: nop

L_80086AC0:
    // 0x80086AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80086AC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80086AC8: jr          $ra
    // 0x80086ACC: nop

    return;
    // 0x80086ACC: nop

;}
RECOMP_FUNC void func_800A5760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5760: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A5764: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A5768: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A576C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800A5770: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A5774: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A5778: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A577C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A5780: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A5784: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A5788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A578C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A5790: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A5794: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A5798: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800A579C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A57A0: nop

    // 0x800A57A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A57A8: nop

    // 0x800A57AC: bne         $t1, $zero, L_800A5858
    if (ctx->r9 != 0) {
        // 0x800A57B0: nop
    
            goto L_800A5858;
    }
    // 0x800A57B0: nop

    // 0x800A57B4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A57B8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A57BC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A57C0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800A57C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A57C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A57CC: nop

    // 0x800A57D0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A57D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A57D8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A57DC: nop

    // 0x800A57E0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A57E4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800A57E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A57EC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A57F0: nop

    // 0x800A57F4: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800A57F8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A57FC: nop

    // 0x800A5800: sh          $zero, 0x108($t7)
    MEM_H(0X108, ctx->r15) = 0;
    // 0x800A5804: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5808: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x800A580C: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800A5810: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5814: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5818: jal         0x80029D04
    // 0x800A581C: nop

    func_80029D04(rdram, ctx);
        goto after_0;
    // 0x800A581C: nop

    after_0:
    // 0x800A5820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5824: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5828: jal         0x8001BBDC
    // 0x800A582C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800A582C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800A5830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5834: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5838: jal         0x8001BB34
    // 0x800A583C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x800A583C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800A5840: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5844: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5848: lui         $a2, 0x3E0F
    ctx->r6 = S32(0X3E0F << 16);
    // 0x800A584C: ori         $a2, $a2, 0x5C29
    ctx->r6 = ctx->r6 | 0X5C29;
    // 0x800A5850: jal         0x80029EF8
    // 0x800A5854: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800A5854: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
L_800A5858:
    // 0x800A5858: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A585C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800A5860: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A5864: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800A5868: jal         0x80015538
    // 0x800A586C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800A586C: nop

    after_4:
    // 0x800A5870: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5874: nop

    // 0x800A5878: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x800A587C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5880: nop

    // 0x800A5884: lwc1        $f10, 0x3C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800A5888: nop

    // 0x800A588C: swc1        $f10, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f10.u32l;
    // 0x800A5890: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5894: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A5898: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800A589C: lwc1        $f5, 0x4990($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4990);
    // 0x800A58A0: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800A58A4: lwc1        $f4, 0x4994($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4994);
    // 0x800A58A8: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x800A58AC: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800A58B0: jal         0x80034970
    // 0x800A58B4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x800A58B4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_5:
    // 0x800A58B8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x800A58BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A58C0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800A58C4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800A58C8: swc1        $f10, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f10.u32l;
    // 0x800A58CC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A58D0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A58D4: lwc1        $f16, 0x44($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800A58D8: nop

    // 0x800A58DC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800A58E0: nop

    // 0x800A58E4: bc1f        L_800A590C
    if (!c1cs) {
        // 0x800A58E8: nop
    
            goto L_800A590C;
    }
    // 0x800A58E8: nop

    // 0x800A58EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800A58F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A58F4: lwc1        $f6, 0x4998($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4998);
    // 0x800A58F8: lwc1        $f4, 0x44($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X44);
    // 0x800A58FC: nop

    // 0x800A5900: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800A5904: b           L_800A591C
    // 0x800A5908: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
        goto L_800A591C;
    // 0x800A5908: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
L_800A590C:
    // 0x800A590C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A5910: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5914: nop

    // 0x800A5918: swc1        $f10, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f10.u32l;
L_800A591C:
    // 0x800A591C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5920: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5924: jal         0x80029C40
    // 0x800A5928: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800A5928: nop

    after_6:
    // 0x800A592C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5930: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A5934: lwc1        $f18, 0x499C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X499C);
    // 0x800A5938: lwc1        $f16, 0xC($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800A593C: nop

    // 0x800A5940: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x800A5944: nop

    // 0x800A5948: bc1f        L_800A598C
    if (!c1cs) {
        // 0x800A594C: nop
    
            goto L_800A598C;
    }
    // 0x800A594C: nop

    // 0x800A5950: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5954: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A5958: lwc1        $f6, 0x49A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X49A0);
    // 0x800A595C: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800A5960: nop

    // 0x800A5964: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800A5968: swc1        $f8, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f8.u32l;
    // 0x800A596C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5970: nop

    // 0x800A5974: lwc1        $f20, 0xC($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0XC);
    // 0x800A5978: nop

    // 0x800A597C: swc1        $f20, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f20.u32l;
    // 0x800A5980: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5984: nop

    // 0x800A5988: swc1        $f20, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f20.u32l;
L_800A598C:
    // 0x800A598C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5990: nop

    // 0x800A5994: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800A5998: nop

    // 0x800A599C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800A59A0: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x800A59A4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800A59A8: nop

    // 0x800A59AC: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800A59B0: nop

    // 0x800A59B4: bgtz        $t7, L_800A59E4
    if (SIGNED(ctx->r15) > 0) {
        // 0x800A59B8: nop
    
            goto L_800A59E4;
    }
    // 0x800A59B8: nop

    // 0x800A59BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A59C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A59C4: jal         0x8001BB34
    // 0x800A59C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_7;
    // 0x800A59C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800A59CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A59D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A59D4: jal         0x8002B0E4
    // 0x800A59D8: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x800A59D8: nop

    after_8:
    // 0x800A59DC: b           L_800A5A6C
    // 0x800A59E0: nop

        goto L_800A5A6C;
    // 0x800A59E0: nop

L_800A59E4:
    // 0x800A59E4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800A59E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A59EC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800A59F0: nop

    // 0x800A59F4: bne         $t9, $at, L_800A5A64
    if (ctx->r25 != ctx->r1) {
        // 0x800A59F8: nop
    
            goto L_800A5A64;
    }
    // 0x800A59F8: nop

    // 0x800A59FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A5A00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5A04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5A08: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A5A0C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A5A10: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A5A14: jal         0x80029F58
    // 0x800A5A18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_9;
    // 0x800A5A18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x800A5A1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A5A20: bne         $v0, $at, L_800A5A64
    if (ctx->r2 != ctx->r1) {
        // 0x800A5A24: nop
    
            goto L_800A5A64;
    }
    // 0x800A5A24: nop

    // 0x800A5A28: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A5A2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5A30: nop

    // 0x800A5A34: swc1        $f16, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f16.u32l;
    // 0x800A5A38: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A5A3C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5A40: nop

    // 0x800A5A44: swc1        $f18, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f18.u32l;
    // 0x800A5A48: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800A5A4C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800A5A50: sb          $t2, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r10;
    // 0x800A5A54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A5A58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A5A5C: jal         0x80029D04
    // 0x800A5A60: nop

    func_80029D04(rdram, ctx);
        goto after_10;
    // 0x800A5A60: nop

    after_10:
L_800A5A64:
    // 0x800A5A64: b           L_800A5A6C
    // 0x800A5A68: nop

        goto L_800A5A6C;
    // 0x800A5A68: nop

L_800A5A6C:
    // 0x800A5A6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A5A70: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800A5A74: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A5A78: jr          $ra
    // 0x800A5A7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A5A7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80091594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091594: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091598: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009159C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800915A0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800915A4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800915A8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800915AC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800915B0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800915B4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800915B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800915BC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800915C0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800915C4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800915C8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800915CC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800915D0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800915D4: addiu       $a1, $a1, 0x157C
    ctx->r5 = ADD32(ctx->r5, 0X157C);
    // 0x800915D8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800915DC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800915E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800915E4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800915E8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800915EC: jal         0x80027464
    // 0x800915F0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800915F0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800915F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800915F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800915FC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091600: addiu       $a3, $a3, 0x1C80
    ctx->r7 = ADD32(ctx->r7, 0X1C80);
    // 0x80091604: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80091608: jal         0x8001ABF4
    // 0x8009160C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009160C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80091610: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091614: addiu       $a3, $a3, 0x1C80
    ctx->r7 = ADD32(ctx->r7, 0X1C80);
    // 0x80091618: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009161C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80091620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80091624: jal         0x8001ABF4
    // 0x80091628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80091628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8009162C: b           L_80091634
    // 0x80091630: nop

        goto L_80091634;
    // 0x80091630: nop

L_80091634:
    // 0x80091634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009163C: jr          $ra
    // 0x80091640: nop

    return;
    // 0x80091640: nop

;}
RECOMP_FUNC void func_8005F0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F0F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F0F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F0FC: jal         0x8003C940
    // 0x8005F100: nop

    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F100: nop

    after_0:
    // 0x8005F104: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F108: sw          $v0, -0x1DA4($at)
    MEM_W(-0X1DA4, ctx->r1) = ctx->r2;
    // 0x8005F10C: b           L_8005F114
    // 0x8005F110: nop

        goto L_8005F114;
    // 0x8005F110: nop

L_8005F114:
    // 0x8005F114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F11C: jr          $ra
    // 0x8005F120: nop

    return;
    // 0x8005F120: nop

;}
RECOMP_FUNC void func_800C5DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5DC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C5DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C5DD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C5DD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C5DD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C5DDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C5DE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5DE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C5DE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5DEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C5DF0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C5DF4: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800C5DF8: nop

    // 0x800C5DFC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800C5E00: sltiu       $at, $t9, 0x7
    ctx->r1 = ctx->r25 < 0X7 ? 1 : 0;
    // 0x800C5E04: beq         $at, $zero, L_800C5E98
    if (ctx->r1 == 0) {
        // 0x800C5E08: nop
    
            goto L_800C5E98;
    }
    // 0x800C5E08: nop

    // 0x800C5E0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C5E10: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C5E14: addu        $at, $at, $t9
    gpr jr_addend_800C5E20 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C5E18: lw          $t9, 0x4D7C($at)
    ctx->r25 = ADD32(ctx->r1, 0X4D7C);
    // 0x800C5E1C: nop

    // 0x800C5E20: jr          $t9
    // 0x800C5E24: nop

    switch (jr_addend_800C5E20 >> 2) {
        case 0: goto L_800C5E28; break;
        case 1: goto L_800C5E38; break;
        case 2: goto L_800C5E48; break;
        case 3: goto L_800C5E58; break;
        case 4: goto L_800C5E68; break;
        case 5: goto L_800C5E78; break;
        case 6: goto L_800C5E88; break;
        default: switch_error(__func__, 0x800C5E20, 0x80114D7C);
    }
    // 0x800C5E24: nop

L_800C5E28:
    // 0x800C5E28: jal         0x800C4358
    // 0x800C5E2C: nop

    func_800C4358(rdram, ctx);
        goto after_0;
    // 0x800C5E2C: nop

    after_0:
    // 0x800C5E30: b           L_800C5EA0
    // 0x800C5E34: nop

        goto L_800C5EA0;
    // 0x800C5E34: nop

L_800C5E38:
    // 0x800C5E38: jal         0x800C4584
    // 0x800C5E3C: nop

    func_800C4584(rdram, ctx);
        goto after_1;
    // 0x800C5E3C: nop

    after_1:
    // 0x800C5E40: b           L_800C5EA0
    // 0x800C5E44: nop

        goto L_800C5EA0;
    // 0x800C5E44: nop

L_800C5E48:
    // 0x800C5E48: jal         0x800C4C08
    // 0x800C5E4C: nop

    func_800C4C08(rdram, ctx);
        goto after_2;
    // 0x800C5E4C: nop

    after_2:
    // 0x800C5E50: b           L_800C5EA0
    // 0x800C5E54: nop

        goto L_800C5EA0;
    // 0x800C5E54: nop

L_800C5E58:
    // 0x800C5E58: jal         0x800C4F64
    // 0x800C5E5C: nop

    func_800C4F64(rdram, ctx);
        goto after_3;
    // 0x800C5E5C: nop

    after_3:
    // 0x800C5E60: b           L_800C5EA0
    // 0x800C5E64: nop

        goto L_800C5EA0;
    // 0x800C5E64: nop

L_800C5E68:
    // 0x800C5E68: jal         0x800C5148
    // 0x800C5E6C: nop

    func_800C5148(rdram, ctx);
        goto after_4;
    // 0x800C5E6C: nop

    after_4:
    // 0x800C5E70: b           L_800C5EA0
    // 0x800C5E74: nop

        goto L_800C5EA0;
    // 0x800C5E74: nop

L_800C5E78:
    // 0x800C5E78: jal         0x800C5888
    // 0x800C5E7C: nop

    func_800C5888(rdram, ctx);
        goto after_5;
    // 0x800C5E7C: nop

    after_5:
    // 0x800C5E80: b           L_800C5EA0
    // 0x800C5E84: nop

        goto L_800C5EA0;
    // 0x800C5E84: nop

L_800C5E88:
    // 0x800C5E88: jal         0x800C5BE4
    // 0x800C5E8C: nop

    func_800C5BE4(rdram, ctx);
        goto after_6;
    // 0x800C5E8C: nop

    after_6:
    // 0x800C5E90: b           L_800C5EA0
    // 0x800C5E94: nop

        goto L_800C5EA0;
    // 0x800C5E94: nop

L_800C5E98:
    // 0x800C5E98: b           L_800C5EA0
    // 0x800C5E9C: nop

        goto L_800C5EA0;
    // 0x800C5E9C: nop

L_800C5EA0:
    // 0x800C5EA0: b           L_800C5EA8
    // 0x800C5EA4: nop

        goto L_800C5EA8;
    // 0x800C5EA4: nop

L_800C5EA8:
    // 0x800C5EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C5EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C5EB0: jr          $ra
    // 0x800C5EB4: nop

    return;
    // 0x800C5EB4: nop

;}
RECOMP_FUNC void func_800DA4D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA4D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DA4DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DA4E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800DA4E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA4E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA4EC: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800DA4F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA4F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA4F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA4FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA500: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA504: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800DA508: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800DA50C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DA510: beq         $s0, $at, L_800DA52C
    if (ctx->r16 == ctx->r1) {
        // 0x800DA514: nop
    
            goto L_800DA52C;
    }
    // 0x800DA514: nop

    // 0x800DA518: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800DA51C: beq         $s0, $at, L_800DA53C
    if (ctx->r16 == ctx->r1) {
        // 0x800DA520: nop
    
            goto L_800DA53C;
    }
    // 0x800DA520: nop

    // 0x800DA524: b           L_800DA54C
    // 0x800DA528: nop

        goto L_800DA54C;
    // 0x800DA528: nop

L_800DA52C:
    // 0x800DA52C: jal         0x800DA304
    // 0x800DA530: nop

    func_800DA304(rdram, ctx);
        goto after_0;
    // 0x800DA530: nop

    after_0:
    // 0x800DA534: b           L_800DA554
    // 0x800DA538: nop

        goto L_800DA554;
    // 0x800DA538: nop

L_800DA53C:
    // 0x800DA53C: jal         0x800DA3B0
    // 0x800DA540: nop

    func_800DA3B0(rdram, ctx);
        goto after_1;
    // 0x800DA540: nop

    after_1:
    // 0x800DA544: b           L_800DA554
    // 0x800DA548: nop

        goto L_800DA554;
    // 0x800DA548: nop

L_800DA54C:
    // 0x800DA54C: b           L_800DA554
    // 0x800DA550: nop

        goto L_800DA554;
    // 0x800DA550: nop

L_800DA554:
    // 0x800DA554: b           L_800DA55C
    // 0x800DA558: nop

        goto L_800DA55C;
    // 0x800DA558: nop

L_800DA55C:
    // 0x800DA55C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DA560: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800DA564: jr          $ra
    // 0x800DA568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800DA568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8009FB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FB08: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8009FB0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009FB10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009FB14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009FB18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009FB1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009FB20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009FB24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009FB28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009FB2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009FB30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009FB34: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8009FB38: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8009FB3C: nop

    // 0x8009FB40: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009FB44: nop

    // 0x8009FB48: bne         $t1, $zero, L_8009FB74
    if (ctx->r9 != 0) {
        // 0x8009FB4C: nop
    
            goto L_8009FB74;
    }
    // 0x8009FB4C: nop

    // 0x8009FB50: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8009FB54: nop

    // 0x8009FB58: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009FB5C: nop

    // 0x8009FB60: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009FB64: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009FB68: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8009FB6C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8009FB70: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
L_8009FB74:
    // 0x8009FB74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FB78: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8009FB7C: nop

    // 0x8009FB80: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x8009FB84: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8009FB88: nop

    // 0x8009FB8C: lwc1        $f12, 0x2C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8009FB90: nop

    // 0x8009FB94: swc1        $f12, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f12.u32l;
    // 0x8009FB98: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8009FB9C: nop

    // 0x8009FBA0: swc1        $f12, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f12.u32l;
    // 0x8009FBA4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8009FBA8: nop

    // 0x8009FBAC: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x8009FBB0: nop

    // 0x8009FBB4: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8009FBB8: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
    // 0x8009FBBC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8009FBC0: nop

    // 0x8009FBC4: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x8009FBC8: nop

    // 0x8009FBCC: blez        $t2, L_8009FBE4
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8009FBD0: nop
    
            goto L_8009FBE4;
    }
    // 0x8009FBD0: nop

    // 0x8009FBD4: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x8009FBD8: nop

    // 0x8009FBDC: beq         $t5, $zero, L_8009FBFC
    if (ctx->r13 == 0) {
        // 0x8009FBE0: nop
    
            goto L_8009FBFC;
    }
    // 0x8009FBE0: nop

L_8009FBE4:
    // 0x8009FBE4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8009FBE8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009FBEC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x8009FBF0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8009FBF4: nop

    // 0x8009FBF8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_8009FBFC:
    // 0x8009FBFC: b           L_8009FC04
    // 0x8009FC00: nop

        goto L_8009FC04;
    // 0x8009FC00: nop

L_8009FC04:
    // 0x8009FC04: jr          $ra
    // 0x8009FC08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8009FC08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8009CBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CBE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009CBE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009CBEC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009CBF0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009CBF4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009CBF8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009CBFC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009CC00: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009CC04: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009CC08: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009CC0C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009CC10: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009CC14: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009CC18: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009CC1C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009CC20: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009CC24: addiu       $a1, $a1, 0x35A4
    ctx->r5 = ADD32(ctx->r5, 0X35A4);
    // 0x8009CC28: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009CC2C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009CC30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009CC34: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009CC38: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009CC3C: jal         0x80027464
    // 0x8009CC40: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009CC40: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009CC44: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009CC48: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009CC4C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009CC50: addiu       $a3, $a3, 0x6AB8
    ctx->r7 = ADD32(ctx->r7, 0X6AB8);
    // 0x8009CC54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009CC58: jal         0x8001ABF4
    // 0x8009CC5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009CC5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009CC60: b           L_8009CC68
    // 0x8009CC64: nop

        goto L_8009CC68;
    // 0x8009CC64: nop

L_8009CC68:
    // 0x8009CC68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009CC6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009CC70: jr          $ra
    // 0x8009CC74: nop

    return;
    // 0x8009CC74: nop

;}
RECOMP_FUNC void func_8008B5D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B5D4: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008B5D8: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x8008B5DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8008B5E0: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8008B5E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008B5E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B5EC: lwc1        $f8, 0x4F40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F40);
    // 0x8008B5F0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008B5F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B5F8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8008B5FC: nop

    // 0x8008B600: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8008B604: swc1        $f4, 0x4F74($at)
    MEM_W(0X4F74, ctx->r1) = ctx->f4.u32l;
    // 0x8008B608: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x8008B60C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B610: sh          $t8, 0x4C1A($at)
    MEM_H(0X4C1A, ctx->r1) = ctx->r24;
    // 0x8008B614: jr          $ra
    // 0x8008B618: nop

    return;
    // 0x8008B618: nop

    // 0x8008B61C: jr          $ra
    // 0x8008B620: nop

    return;
    // 0x8008B620: nop

;}
RECOMP_FUNC void func_800BB91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BB91C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BB920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BB924: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BB928: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BB92C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BB930: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BB934: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB938: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BB93C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BB940: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BB944: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BB948: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BB94C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BB950: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB954: nop

    // 0x800BB958: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BB95C: nop

    // 0x800BB960: bne         $t1, $zero, L_800BB994
    if (ctx->r9 != 0) {
        // 0x800BB964: nop
    
            goto L_800BB994;
    }
    // 0x800BB964: nop

    // 0x800BB968: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB96C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BB970: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BB974: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BB978: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB97C: nop

    // 0x800BB980: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BB984: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BB988: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB98C: nop

    // 0x800BB990: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_800BB994:
    // 0x800BB994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB998: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB99C: jal         0x80029C40
    // 0x800BB9A0: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BB9A0: nop

    after_0:
    // 0x800BB9A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB9A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB9AC: jal         0x80029D04
    // 0x800BB9B0: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BB9B0: nop

    after_1:
    // 0x800BB9B4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB9B8: nop

    // 0x800BB9BC: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x800BB9C0: nop

    // 0x800BB9C4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800BB9C8: sh          $t8, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r24;
    // 0x800BB9CC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB9D0: nop

    // 0x800BB9D4: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x800BB9D8: nop

    // 0x800BB9DC: bgtz        $t0, L_800BB9F4
    if (SIGNED(ctx->r8) > 0) {
        // 0x800BB9E0: nop
    
            goto L_800BB9F4;
    }
    // 0x800BB9E0: nop

    // 0x800BB9E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BB9E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BB9EC: jal         0x8002B0E4
    // 0x800BB9F0: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800BB9F0: nop

    after_2:
L_800BB9F4:
    // 0x800BB9F4: b           L_800BB9FC
    // 0x800BB9F8: nop

        goto L_800BB9FC;
    // 0x800BB9F8: nop

L_800BB9FC:
    // 0x800BB9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BBA00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BBA04: jr          $ra
    // 0x800BBA08: nop

    return;
    // 0x800BBA08: nop

;}
RECOMP_FUNC void func_800FAE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAE00: jr          $ra
    // 0x800FAE04: nop

    return;
    // 0x800FAE04: nop

    // 0x800FAE08: jr          $ra
    // 0x800FAE0C: nop

    return;
    // 0x800FAE0C: nop

;}
RECOMP_FUNC void func_800CDFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CDFD4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800CDFD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CDFDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CDFE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CDFE4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CDFE8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CDFEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CDFF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CDFF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CDFF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CDFFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CE000: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CE004: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CE008: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800CE00C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CE010: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CE014: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800CE018: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CE01C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CE020: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CE024: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CE028: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CE02C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CE030: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800CE034: nop

    // 0x800CE038: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x800CE03C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800CE040: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800CE044: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800CE048: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CE04C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CE050: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CE054: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CE058: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CE05C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CE060: lh          $t5, 0x423C($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423C);
    // 0x800CE064: nop

    // 0x800CE068: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x800CE06C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE070: nop

    // 0x800CE074: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800CE078: nop

    // 0x800CE07C: bne         $t7, $zero, L_800CE0C8
    if (ctx->r15 != 0) {
        // 0x800CE080: nop
    
            goto L_800CE0C8;
    }
    // 0x800CE080: nop

    // 0x800CE084: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE088: nop

    // 0x800CE08C: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800CE090: nop

    // 0x800CE094: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800CE098: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800CE09C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE0A0: nop

    // 0x800CE0A4: sh          $zero, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = 0;
    // 0x800CE0A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE0AC: nop

    // 0x800CE0B0: lh          $s0, 0xAA($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XAA);
    // 0x800CE0B4: nop

    // 0x800CE0B8: sh          $s0, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r16;
    // 0x800CE0BC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE0C0: nop

    // 0x800CE0C4: sh          $s0, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r16;
L_800CE0C8:
    // 0x800CE0C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE0CC: nop

    // 0x800CE0D0: lh          $t5, 0xAA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAA);
    // 0x800CE0D4: nop

    // 0x800CE0D8: beq         $t5, $zero, L_800CE408
    if (ctx->r13 == 0) {
        // 0x800CE0DC: nop
    
            goto L_800CE408;
    }
    // 0x800CE0DC: nop

    // 0x800CE0E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE0E4: nop

    // 0x800CE0E8: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800CE0EC: nop

    // 0x800CE0F0: bne         $t7, $zero, L_800CE170
    if (ctx->r15 != 0) {
        // 0x800CE0F4: nop
    
            goto L_800CE170;
    }
    // 0x800CE0F4: nop

    // 0x800CE0F8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE0FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800CE100: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CE104: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800CE108: nop

    // 0x800CE10C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800CE110: nop

    // 0x800CE114: bc1f        L_800CE138
    if (!c1cs) {
        // 0x800CE118: nop
    
            goto L_800CE138;
    }
    // 0x800CE118: nop

    // 0x800CE11C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE120: nop

    // 0x800CE124: lh          $t8, 0xA8($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA8);
    // 0x800CE128: nop

    // 0x800CE12C: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x800CE130: b           L_800CE168
    // 0x800CE134: sh          $t1, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r9;
        goto L_800CE168;
    // 0x800CE134: sh          $t1, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r9;
L_800CE138:
    // 0x800CE138: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE13C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CE140: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CE144: lwc1        $f8, 0x3C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800CE148: nop

    // 0x800CE14C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800CE150: swc1        $f16, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f16.u32l;
    // 0x800CE154: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE158: nop

    // 0x800CE15C: lwc1        $f18, 0x3C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800CE160: nop

    // 0x800CE164: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
L_800CE168:
    // 0x800CE168: b           L_800CE358
    // 0x800CE16C: nop

        goto L_800CE358;
    // 0x800CE16C: nop

L_800CE170:
    // 0x800CE170: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE174: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CE178: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800CE17C: nop

    // 0x800CE180: bne         $t5, $at, L_800CE220
    if (ctx->r13 != ctx->r1) {
        // 0x800CE184: nop
    
            goto L_800CE220;
    }
    // 0x800CE184: nop

    // 0x800CE188: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE18C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CE190: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800CE194: nop

    // 0x800CE198: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800CE19C: nop

    // 0x800CE1A0: bc1f        L_800CE1E8
    if (!c1cs) {
        // 0x800CE1A4: nop
    
            goto L_800CE1E8;
    }
    // 0x800CE1A4: nop

    // 0x800CE1A8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE1AC: nop

    // 0x800CE1B0: lh          $t9, 0xA8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA8);
    // 0x800CE1B4: nop

    // 0x800CE1B8: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x800CE1BC: sh          $t8, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r24;
    // 0x800CE1C0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CE1C4: lwc1        $f8, 0x5010($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5010);
    // 0x800CE1C8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE1CC: nop

    // 0x800CE1D0: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
    // 0x800CE1D4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE1D8: nop

    // 0x800CE1DC: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800CE1E0: b           L_800CE218
    // 0x800CE1E4: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
        goto L_800CE218;
    // 0x800CE1E4: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
L_800CE1E8:
    // 0x800CE1E8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE1EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CE1F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800CE1F4: lwc1        $f16, 0x3C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800CE1F8: nop

    // 0x800CE1FC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800CE200: swc1        $f4, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f4.u32l;
    // 0x800CE204: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE208: nop

    // 0x800CE20C: lwc1        $f6, 0x3C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800CE210: nop

    // 0x800CE214: swc1        $f6, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f6.u32l;
L_800CE218:
    // 0x800CE218: b           L_800CE358
    // 0x800CE21C: nop

        goto L_800CE358;
    // 0x800CE21C: nop

L_800CE220:
    // 0x800CE220: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE224: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CE228: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800CE22C: nop

    // 0x800CE230: bne         $t5, $at, L_800CE2B0
    if (ctx->r13 != ctx->r1) {
        // 0x800CE234: nop
    
            goto L_800CE2B0;
    }
    // 0x800CE234: nop

    // 0x800CE238: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE23C: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x800CE240: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CE244: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800CE248: nop

    // 0x800CE24C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800CE250: nop

    // 0x800CE254: bc1f        L_800CE278
    if (!c1cs) {
        // 0x800CE258: nop
    
            goto L_800CE278;
    }
    // 0x800CE258: nop

    // 0x800CE25C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE260: nop

    // 0x800CE264: lh          $t8, 0xA8($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XA8);
    // 0x800CE268: nop

    // 0x800CE26C: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x800CE270: b           L_800CE2A8
    // 0x800CE274: sh          $t7, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r15;
        goto L_800CE2A8;
    // 0x800CE274: sh          $t7, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r15;
L_800CE278:
    // 0x800CE278: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE27C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CE280: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800CE284: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800CE288: nop

    // 0x800CE28C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800CE290: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
    // 0x800CE294: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE298: nop

    // 0x800CE29C: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800CE2A0: nop

    // 0x800CE2A4: swc1        $f6, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f6.u32l;
L_800CE2A8:
    // 0x800CE2A8: b           L_800CE358
    // 0x800CE2AC: nop

        goto L_800CE358;
    // 0x800CE2AC: nop

L_800CE2B0:
    // 0x800CE2B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE2B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800CE2B8: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800CE2BC: nop

    // 0x800CE2C0: bne         $t3, $at, L_800CE358
    if (ctx->r11 != ctx->r1) {
        // 0x800CE2C4: nop
    
            goto L_800CE358;
    }
    // 0x800CE2C4: nop

    // 0x800CE2C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE2CC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CE2D0: lwc1        $f10, 0x5014($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5014);
    // 0x800CE2D4: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800CE2D8: nop

    // 0x800CE2DC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800CE2E0: nop

    // 0x800CE2E4: bc1f        L_800CE328
    if (!c1cs) {
        // 0x800CE2E8: nop
    
            goto L_800CE328;
    }
    // 0x800CE2E8: nop

    // 0x800CE2EC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE2F0: nop

    // 0x800CE2F4: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800CE2F8: nop

    // 0x800CE2FC: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x800CE300: sh          $t8, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r24;
    // 0x800CE304: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CE308: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE30C: nop

    // 0x800CE310: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x800CE314: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE318: nop

    // 0x800CE31C: lwc1        $f18, 0x1C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800CE320: b           L_800CE358
    // 0x800CE324: swc1        $f18, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f18.u32l;
        goto L_800CE358;
    // 0x800CE324: swc1        $f18, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f18.u32l;
L_800CE328:
    // 0x800CE328: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE32C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800CE330: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CE334: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800CE338: nop

    // 0x800CE33C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800CE340: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x800CE344: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE348: nop

    // 0x800CE34C: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800CE350: nop

    // 0x800CE354: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
L_800CE358:
    // 0x800CE358: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800CE35C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE360: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CE364: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CE368: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CE36C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CE370: lwc1        $f16, 0x3C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800CE374: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CE378: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE37C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800CE380: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
    // 0x800CE384: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800CE388: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE38C: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x800CE390: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x800CE394: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800CE398: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x800CE39C: lwc1        $f18, 0x1C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800CE3A0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800CE3A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE3A8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800CE3AC: swc1        $f18, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f18.u32l;
    // 0x800CE3B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800CE3B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE3B8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800CE3BC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CE3C0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CE3C4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CE3C8: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800CE3CC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CE3D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE3D4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CE3D8: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x800CE3DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CE3E0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE3E4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800CE3E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800CE3EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CE3F0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800CE3F4: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800CE3F8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CE3FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE400: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CE404: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
L_800CE408:
    // 0x800CE408: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CE40C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CE410: jal         0x8001B4AC
    // 0x800CE414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x800CE414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800CE418: beq         $v0, $zero, L_800CE504
    if (ctx->r2 == 0) {
        // 0x800CE41C: nop
    
            goto L_800CE504;
    }
    // 0x800CE41C: nop

    // 0x800CE420: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE424: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800CE428: lh          $t6, 0xA8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XA8);
    // 0x800CE42C: nop

    // 0x800CE430: bne         $t6, $at, L_800CE4A0
    if (ctx->r14 != ctx->r1) {
        // 0x800CE434: nop
    
            goto L_800CE4A0;
    }
    // 0x800CE434: nop

    // 0x800CE438: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE43C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x800CE440: sh          $t8, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r24;
    // 0x800CE444: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE448: nop

    // 0x800CE44C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800CE450: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CE454: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CE458: jal         0x8001BBDC
    // 0x800CE45C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800CE45C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800CE460: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800CE464: jal         0x8001BBDC
    // 0x800CE468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800CE468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800CE46C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800CE470: jal         0x8001BB34
    // 0x800CE474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800CE474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800CE478: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800CE47C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE480: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800CE484: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CE488: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CE48C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CE490: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CE494: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CE498: b           L_800CE504
    // 0x800CE49C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
        goto L_800CE504;
    // 0x800CE49C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800CE4A0:
    // 0x800CE4A0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE4A4: nop

    // 0x800CE4A8: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x800CE4AC: nop

    // 0x800CE4B0: bne         $t2, $zero, L_800CE504
    if (ctx->r10 != 0) {
        // 0x800CE4B4: nop
    
            goto L_800CE504;
    }
    // 0x800CE4B4: nop

    // 0x800CE4B8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800CE4BC: jal         0x8001BBDC
    // 0x800CE4C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x800CE4C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800CE4C4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800CE4C8: jal         0x8001BB34
    // 0x800CE4CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800CE4CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800CE4D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CE4D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CE4D8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800CE4DC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800CE4E0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CE4E4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800CE4E8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CE4EC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800CE4F0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800CE4F4: sh          $t3, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r11;
    // 0x800CE4F8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800CE4FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800CE500: sh          $t8, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r24;
L_800CE504:
    // 0x800CE504: b           L_800CE50C
    // 0x800CE508: nop

        goto L_800CE50C;
    // 0x800CE508: nop

L_800CE50C:
    // 0x800CE50C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CE510: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CE514: jr          $ra
    // 0x800CE518: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800CE518: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800D9720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9720: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D9724: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D9728: nop

    // 0x800D972C: beq         $t6, $zero, L_800D9740
    if (ctx->r14 == 0) {
        // 0x800D9730: nop
    
            goto L_800D9740;
    }
    // 0x800D9730: nop

    // 0x800D9734: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D9738: bne         $t6, $at, L_800D9794
    if (ctx->r14 != ctx->r1) {
        // 0x800D973C: nop
    
            goto L_800D9794;
    }
    // 0x800D973C: nop

L_800D9740:
    // 0x800D9740: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800D9744: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800D9748: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D974C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D9750: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D9754: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D9758: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D975C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800D9760: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D9764: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800D9768: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800D976C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D9770: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D9774: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D9778: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D977C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D9780: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D9784: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D9788: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D978C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D9790: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800D9794:
    // 0x800D9794: jr          $ra
    // 0x800D9798: nop

    return;
    // 0x800D9798: nop

    // 0x800D979C: jr          $ra
    // 0x800D97A0: nop

    return;
    // 0x800D97A0: nop

;}
RECOMP_FUNC void func_800E5364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5364: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E5368: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E536C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E5370: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E5374: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E5378: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E537C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5380: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E5384: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5388: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E538C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E5390: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5394: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E5398: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E539C: nop

    // 0x800E53A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E53A4: nop

    // 0x800E53A8: bne         $t1, $zero, L_800E5434
    if (ctx->r9 != 0) {
        // 0x800E53AC: nop
    
            goto L_800E5434;
    }
    // 0x800E53AC: nop

    // 0x800E53B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E53B4: nop

    // 0x800E53B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E53BC: nop

    // 0x800E53C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E53C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E53C8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E53CC: nop

    // 0x800E53D0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E53D4: nop

    // 0x800E53D8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E53DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E53E0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E53E4: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E53E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E53EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E53F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E53F4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x800E53F8: jal         0x8001C0EC
    // 0x800E53FC: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E53FC: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E5400: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5404: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5408: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E540C: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E5410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E5414: jal         0x8001ABF4
    // 0x800E5418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E5418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E541C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5420: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800E5424: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x800E5428: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E542C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800E5430: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_800E5434:
    // 0x800E5434: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E543C: jal         0x8001B4AC
    // 0x800E5440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E5440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E5444: beq         $v0, $zero, L_800E54E0
    if (ctx->r2 == 0) {
        // 0x800E5448: nop
    
            goto L_800E54E0;
    }
    // 0x800E5448: nop

    // 0x800E544C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5450: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5454: jal         0x8002A46C
    // 0x800E5458: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800E5458: nop

    after_3:
    // 0x800E545C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5460: nop

    // 0x800E5464: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x800E5468: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800E546C: nop

    // 0x800E5470: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x800E5474: nop

    // 0x800E5478: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x800E547C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5480: nop

    // 0x800E5484: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x800E5488: nop

    // 0x800E548C: bne         $t6, $zero, L_800E54C8
    if (ctx->r14 != 0) {
        // 0x800E5490: nop
    
            goto L_800E54C8;
    }
    // 0x800E5490: nop

    // 0x800E5494: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5498: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800E549C: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800E54A0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E54A4: nop

    // 0x800E54A8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800E54AC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E54B0: nop

    // 0x800E54B4: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800E54B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E54BC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800E54C0: b           L_800E54E0
    // 0x800E54C4: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
        goto L_800E54E0;
    // 0x800E54C4: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
L_800E54C8:
    // 0x800E54C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E54CC: nop

    // 0x800E54D0: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800E54D4: nop

    // 0x800E54D8: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x800E54DC: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
L_800E54E0:
    // 0x800E54E0: b           L_800E54E8
    // 0x800E54E4: nop

        goto L_800E54E8;
    // 0x800E54E4: nop

L_800E54E8:
    // 0x800E54E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E54EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E54F0: jr          $ra
    // 0x800E54F4: nop

    return;
    // 0x800E54F4: nop

;}
RECOMP_FUNC void func_80078AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078AEC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80078AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078AF4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80078AF8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80078AFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80078B00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80078B04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80078B08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80078B0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80078B10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80078B14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80078B18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80078B1C: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80078B20: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80078B24: nop

    // 0x80078B28: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80078B2C: nop

    // 0x80078B30: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x80078B34: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80078B38: nop

    // 0x80078B3C: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80078B40: nop

    // 0x80078B44: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80078B48: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80078B4C: nop

    // 0x80078B50: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80078B54: nop

    // 0x80078B58: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80078B5C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80078B60: nop

    // 0x80078B64: lwc1        $f10, 0x24($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X24);
    // 0x80078B68: nop

    // 0x80078B6C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x80078B70: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80078B74: nop

    // 0x80078B78: lwc1        $f16, 0x28($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80078B7C: nop

    // 0x80078B80: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x80078B84: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80078B88: nop

    // 0x80078B8C: lwc1        $f18, 0x2C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80078B90: nop

    // 0x80078B94: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x80078B98: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80078B9C: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80078BA0: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80078BA4: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80078BA8: jal         0x80078168
    // 0x80078BAC: nop

    func_80078168(rdram, ctx);
        goto after_0;
    // 0x80078BAC: nop

    after_0:
    // 0x80078BB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80078BB4: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x80078BB8: nop

    // 0x80078BBC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80078BC0: beq         $t7, $zero, L_80078BD0
    if (ctx->r15 == 0) {
        // 0x80078BC4: nop
    
            goto L_80078BD0;
    }
    // 0x80078BC4: nop

    // 0x80078BC8: b           L_8007943C
    // 0x80078BCC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8007943C;
    // 0x80078BCC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80078BD0:
    // 0x80078BD0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80078BD4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80078BD8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80078BDC: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x80078BE0: nop

    // 0x80078BE4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80078BE8: bne         $t9, $zero, L_80078C78
    if (ctx->r25 != 0) {
        // 0x80078BEC: nop
    
            goto L_80078C78;
    }
    // 0x80078BEC: nop

    // 0x80078BF0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80078BF4: addiu       $t0, $t0, 0x7760
    ctx->r8 = ADD32(ctx->r8, 0X7760);
    // 0x80078BF8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80078BFC: lwc1        $f6, -0x3660($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3660);
    // 0x80078C00: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80078C04: nop

    // 0x80078C08: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80078C0C: nop

    // 0x80078C10: bc1f        L_80078C78
    if (!c1cs) {
        // 0x80078C14: nop
    
            goto L_80078C78;
    }
    // 0x80078C14: nop

    // 0x80078C18: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80078C1C: lbu         $t1, 0x76E4($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E4);
    // 0x80078C20: nop

    // 0x80078C24: beq         $t1, $zero, L_80078C78
    if (ctx->r9 == 0) {
        // 0x80078C28: nop
    
            goto L_80078C78;
    }
    // 0x80078C28: nop

    // 0x80078C2C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80078C30: lbu         $t2, 0x76E4($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E4);
    // 0x80078C34: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80078C38: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80078C3C: lbu         $t3, 0x791B($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X791B);
    // 0x80078C40: nop

    // 0x80078C44: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80078C48: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80078C4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80078C50: bne         $t4, $at, L_80078C78
    if (ctx->r12 != ctx->r1) {
        // 0x80078C54: nop
    
            goto L_80078C78;
    }
    // 0x80078C54: nop

    // 0x80078C58: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80078C5C: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x80078C60: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80078C64: nop

    // 0x80078C68: bne         $t6, $at, L_80078C78
    if (ctx->r14 != ctx->r1) {
        // 0x80078C6C: nop
    
            goto L_80078C78;
    }
    // 0x80078C6C: nop

    // 0x80078C70: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80078C74: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
L_80078C78:
    // 0x80078C78: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80078C7C: nop

    // 0x80078C80: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x80078C84: beq         $at, $zero, L_80078DF0
    if (ctx->r1 == 0) {
        // 0x80078C88: nop
    
            goto L_80078DF0;
    }
    // 0x80078C88: nop

    // 0x80078C8C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80078C90: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80078C94: nop

    // 0x80078C98: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80078C9C: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x80078CA0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80078CA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80078CA8: beq         $t9, $at, L_80078D98
    if (ctx->r25 == ctx->r1) {
        // 0x80078CAC: nop
    
            goto L_80078D98;
    }
    // 0x80078CAC: nop

    // 0x80078CB0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80078CB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80078CB8: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80078CBC: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80078CC0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80078CC4: jal         0x80078168
    // 0x80078CC8: add.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f4.fl;
    func_80078168(rdram, ctx);
        goto after_1;
    // 0x80078CC8: add.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f4.fl;
    after_1:
    // 0x80078CCC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80078CD0: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80078CD4: nop

    // 0x80078CD8: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80078CDC: beq         $t1, $zero, L_80078D14
    if (ctx->r9 == 0) {
        // 0x80078CE0: nop
    
            goto L_80078D14;
    }
    // 0x80078CE0: nop

    // 0x80078CE4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80078CE8: addiu       $t2, $t2, 0x7760
    ctx->r10 = ADD32(ctx->r10, 0X7760);
    // 0x80078CEC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80078CF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80078CF4: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80078CF8: nop

    // 0x80078CFC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80078D00: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80078D04: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80078D08: nop

    // 0x80078D0C: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x80078D10: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_80078D14:
    // 0x80078D14: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80078D18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80078D1C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80078D20: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80078D24: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80078D28: jal         0x80078168
    // 0x80078D2C: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    func_80078168(rdram, ctx);
        goto after_2;
    // 0x80078D2C: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_2:
    // 0x80078D30: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80078D34: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x80078D38: nop

    // 0x80078D3C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80078D40: beq         $t6, $zero, L_80078D90
    if (ctx->r14 == 0) {
        // 0x80078D44: nop
    
            goto L_80078D90;
    }
    // 0x80078D44: nop

    // 0x80078D48: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80078D4C: addiu       $t7, $t7, 0x7760
    ctx->r15 = ADD32(ctx->r15, 0X7760);
    // 0x80078D50: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80078D54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80078D58: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80078D5C: nop

    // 0x80078D60: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80078D64: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80078D68: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80078D6C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80078D70: nop

    // 0x80078D74: swc1        $f10, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f10.u32l;
    // 0x80078D78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80078D7C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80078D80: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80078D84: nop

    // 0x80078D88: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x80078D8C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_80078D90:
    // 0x80078D90: b           L_80078DF0
    // 0x80078D94: nop

        goto L_80078DF0;
    // 0x80078D94: nop

L_80078D98:
    // 0x80078D98: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80078D9C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80078DA0: lwc1        $f18, 0xD4($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x80078DA4: nop

    // 0x80078DA8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80078DAC: nop

    // 0x80078DB0: bc1f        L_80078DF0
    if (!c1cs) {
        // 0x80078DB4: nop
    
            goto L_80078DF0;
    }
    // 0x80078DB4: nop

    // 0x80078DB8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80078DBC: nop

    // 0x80078DC0: lwc1        $f4, 0xD4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x80078DC4: nop

    // 0x80078DC8: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x80078DCC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80078DD0: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80078DD4: nop

    // 0x80078DD8: swc1        $f6, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f6.u32l;
    // 0x80078DDC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80078DE0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80078DE4: nop

    // 0x80078DE8: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x80078DEC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_80078DF0:
    // 0x80078DF0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80078DF4: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80078DF8: nop

    // 0x80078DFC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80078E00: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x80078E04: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80078E08: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80078E0C: nop

    // 0x80078E10: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80078E14: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x80078E18: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80078E1C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80078E20: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80078E24: lwc1        $f17, -0x3658($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X3658);
    // 0x80078E28: lwc1        $f16, -0x3654($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3654);
    // 0x80078E2C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80078E30: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80078E34: jal         0x80034970
    // 0x80078E38: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x80078E38: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x80078E3C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80078E40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80078E44: nop

    // 0x80078E48: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80078E4C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80078E50: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80078E54: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80078E58: lwc1        $f8, 0x3C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80078E5C: lwc1        $f17, -0x3650($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X3650);
    // 0x80078E60: lwc1        $f16, -0x364C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X364C);
    // 0x80078E64: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80078E68: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80078E6C: jal         0x80036570
    // 0x80078E70: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x80078E70: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_4:
    // 0x80078E74: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80078E78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80078E7C: nop

    // 0x80078E80: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80078E84: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80078E88: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80078E8C: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80078E90: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80078E94: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80078E98: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80078E9C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80078EA0: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80078EA4: jal         0x800781D4
    // 0x80078EA8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_800781D4(rdram, ctx);
        goto after_5;
    // 0x80078EA8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_5:
    // 0x80078EAC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80078EB0: bne         $v0, $at, L_80078F30
    if (ctx->r2 != ctx->r1) {
        // 0x80078EB4: nop
    
            goto L_80078F30;
    }
    // 0x80078EB4: nop

    // 0x80078EB8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80078EBC: nop

    // 0x80078EC0: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x80078EC4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80078EC8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80078ECC: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x80078ED0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80078ED4: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80078ED8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80078EDC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80078EE0: lw          $t4, 0x7770($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7770);
    // 0x80078EE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80078EE8: beq         $t4, $at, L_80078F08
    if (ctx->r12 == ctx->r1) {
        // 0x80078EEC: nop
    
            goto L_80078F08;
    }
    // 0x80078EEC: nop

    // 0x80078EF0: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80078EF4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80078EF8: lh          $t6, 0xE4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE4);
    // 0x80078EFC: nop

    // 0x80078F00: bne         $t6, $at, L_80078F30
    if (ctx->r14 != ctx->r1) {
        // 0x80078F04: nop
    
            goto L_80078F30;
    }
    // 0x80078F04: nop

L_80078F08:
    // 0x80078F08: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80078F0C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80078F10: nop

    // 0x80078F14: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80078F18: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x80078F1C: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80078F20: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80078F24: nop

    // 0x80078F28: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80078F2C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
L_80078F30:
    // 0x80078F30: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80078F34: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80078F38: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80078F3C: jal         0x800781D4
    // 0x80078F40: nop

    func_800781D4(rdram, ctx);
        goto after_6;
    // 0x80078F40: nop

    after_6:
    // 0x80078F44: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80078F48: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80078F4C: nop

    // 0x80078F50: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80078F54: beq         $at, $zero, L_80079148
    if (ctx->r1 == 0) {
        // 0x80078F58: nop
    
            goto L_80079148;
    }
    // 0x80078F58: nop

    // 0x80078F5C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80078F60: nop

    // 0x80078F64: beq         $t8, $zero, L_80079148
    if (ctx->r24 == 0) {
        // 0x80078F68: nop
    
            goto L_80079148;
    }
    // 0x80078F68: nop

    // 0x80078F6C: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80078F70: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80078F74: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80078F78: jal         0x80078168
    // 0x80078F7C: nop

    func_80078168(rdram, ctx);
        goto after_7;
    // 0x80078F7C: nop

    after_7:
    // 0x80078F80: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80078F84: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x80078F88: nop

    // 0x80078F8C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80078F90: bne         $t0, $zero, L_80078FB8
    if (ctx->r8 != 0) {
        // 0x80078F94: nop
    
            goto L_80078FB8;
    }
    // 0x80078F94: nop

    // 0x80078F98: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80078F9C: addiu       $t1, $t1, 0x7760
    ctx->r9 = ADD32(ctx->r9, 0X7760);
    // 0x80078FA0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80078FA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80078FA8: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80078FAC: nop

    // 0x80078FB0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80078FB4: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
L_80078FB8:
    // 0x80078FB8: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80078FBC: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80078FC0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80078FC4: jal         0x80078168
    // 0x80078FC8: nop

    func_80078168(rdram, ctx);
        goto after_8;
    // 0x80078FC8: nop

    after_8:
    // 0x80078FCC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80078FD0: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x80078FD4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80078FD8: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80078FDC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80078FE0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80078FE4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80078FE8: lw          $t5, 0x7770($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7770);
    // 0x80078FEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80078FF0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80078FF4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80078FF8: sh          $t5, 0x79AC($at)
    MEM_H(0X79AC, ctx->r1) = ctx->r13;
    // 0x80078FFC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80079000: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80079004: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80079008: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8007900C: lh          $t0, 0x79AC($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X79AC);
    // 0x80079010: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80079014: beq         $t0, $at, L_80079140
    if (ctx->r8 == ctx->r1) {
        // 0x80079018: nop
    
            goto L_80079140;
    }
    // 0x80079018: nop

    // 0x8007901C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80079020: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80079024: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80079028: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007902C: lh          $t3, 0x79AC($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X79AC);
    // 0x80079030: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80079034: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80079038: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007903C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80079040: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80079044: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80079048: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8007904C: lh          $t6, 0x4234($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4234);
    // 0x80079050: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80079054: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80079058: sh          $t6, 0x79BC($at)
    MEM_H(0X79BC, ctx->r1) = ctx->r14;
    // 0x8007905C: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80079060: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80079064: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x80079068: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007906C: lh          $t8, 0x79AC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X79AC);
    // 0x80079070: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80079074: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80079078: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8007907C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80079080: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80079084: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80079088: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8007908C: lwc1        $f18, 0x4150($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80079090: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80079094: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80079098: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8007909C: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x800790A0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800790A4: swc1        $f4, 0x79C8($at)
    MEM_W(0X79C8, ctx->r1) = ctx->f4.u32l;
    // 0x800790A8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x800790AC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800790B0: sll         $t3, $t1, 1
    ctx->r11 = S32(ctx->r9 << 1);
    // 0x800790B4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800790B8: lh          $t4, 0x79AC($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X79AC);
    // 0x800790BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800790C0: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800790C4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800790C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800790CC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800790D0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800790D4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800790D8: lwc1        $f8, 0x4154($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x800790DC: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800790E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800790E4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800790E8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800790EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800790F0: swc1        $f10, 0x79E0($at)
    MEM_W(0X79E0, ctx->r1) = ctx->f10.u32l;
    // 0x800790F4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x800790F8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800790FC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80079100: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80079104: lh          $t9, 0x79AC($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X79AC);
    // 0x80079108: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007910C: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80079110: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80079114: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80079118: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x8007911C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80079120: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80079124: lwc1        $f18, 0x4158($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80079128: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007912C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80079130: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80079134: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80079138: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8007913C: swc1        $f4, 0x79F8($at)
    MEM_W(0X79F8, ctx->r1) = ctx->f4.u32l;
L_80079140:
    // 0x80079140: b           L_80079160
    // 0x80079144: nop

        goto L_80079160;
    // 0x80079144: nop

L_80079148:
    // 0x80079148: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8007914C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80079150: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x80079154: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80079158: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8007915C: sh          $t3, 0x79AC($at)
    MEM_H(0X79AC, ctx->r1) = ctx->r11;
L_80079160:
    // 0x80079160: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80079164: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80079168: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8007916C: jal         0x80078168
    // 0x80079170: nop

    func_80078168(rdram, ctx);
        goto after_9;
    // 0x80079170: nop

    after_9:
    // 0x80079174: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80079178: lbu         $t1, 0x76E0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X76E0);
    // 0x8007917C: nop

    // 0x80079180: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80079184: bne         $t2, $zero, L_800791E0
    if (ctx->r10 != 0) {
        // 0x80079188: nop
    
            goto L_800791E0;
    }
    // 0x80079188: nop

    // 0x8007918C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80079190: addiu       $t8, $t8, 0x7760
    ctx->r24 = ADD32(ctx->r24, 0X7760);
    // 0x80079194: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80079198: lwc1        $f8, -0x3648($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3648);
    // 0x8007919C: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800791A0: nop

    // 0x800791A4: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800791A8: nop

    // 0x800791AC: bc1f        L_800791E0
    if (!c1cs) {
        // 0x800791B0: nop
    
            goto L_800791E0;
    }
    // 0x800791B0: nop

    // 0x800791B4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800791B8: nop

    // 0x800791BC: lh          $t5, 0xAC($t9)
    ctx->r13 = MEM_H(ctx->r25, 0XAC);
    // 0x800791C0: nop

    // 0x800791C4: bne         $t5, $zero, L_800791D8
    if (ctx->r13 != 0) {
        // 0x800791C8: nop
    
            goto L_800791D8;
    }
    // 0x800791C8: nop

    // 0x800791CC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800791D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800791D4: sh          $t7, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r15;
L_800791D8:
    // 0x800791D8: b           L_80079254
    // 0x800791DC: nop

        goto L_80079254;
    // 0x800791DC: nop

L_800791E0:
    // 0x800791E0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800791E4: lbu         $t4, 0x76E0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X76E0);
    // 0x800791E8: nop

    // 0x800791EC: andi        $t3, $t4, 0x1
    ctx->r11 = ctx->r12 & 0X1;
    // 0x800791F0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800791F4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800791F8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800791FC: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80079200: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80079204: lw          $t2, 0x7740($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7740);
    // 0x80079208: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8007920C: nop

    // 0x80079210: sh          $t2, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = ctx->r10;
    // 0x80079214: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80079218: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007921C: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80079220: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80079224: lw          $t7, 0x7750($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7750);
    // 0x80079228: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8007922C: nop

    // 0x80079230: sh          $t7, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r15;
    // 0x80079234: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80079238: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007923C: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80079240: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80079244: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80079248: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x8007924C: nop

    // 0x80079250: swc1        $f10, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f10.u32l;
L_80079254:
    // 0x80079254: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80079258: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8007925C: lh          $t2, 0xAE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAE);
    // 0x80079260: nop

    // 0x80079264: beq         $t2, $at, L_800793F8
    if (ctx->r10 == ctx->r1) {
        // 0x80079268: nop
    
            goto L_800793F8;
    }
    // 0x80079268: nop

    // 0x8007926C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80079270: addiu       $at, $zero, 0xF8
    ctx->r1 = ADD32(0, 0XF8);
    // 0x80079274: lh          $t9, 0xAE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAE);
    // 0x80079278: nop

    // 0x8007927C: bne         $t9, $at, L_800792BC
    if (ctx->r25 != ctx->r1) {
        // 0x80079280: nop
    
            goto L_800792BC;
    }
    // 0x80079280: nop

    // 0x80079284: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80079288: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007928C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80079290: lwc1        $f6, 0xD4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x80079294: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80079298: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x8007929C: nop

    // 0x800792A0: bc1f        L_800792BC
    if (!c1cs) {
        // 0x800792A4: nop
    
            goto L_800792BC;
    }
    // 0x800792A4: nop

    // 0x800792A8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800792AC: nop

    // 0x800792B0: ori         $t7, $t5, 0x8
    ctx->r15 = ctx->r13 | 0X8;
    // 0x800792B4: b           L_800793F8
    // 0x800792B8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
        goto L_800793F8;
    // 0x800792B8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_800792BC:
    // 0x800792BC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800792C0: addiu       $at, $zero, 0xF7
    ctx->r1 = ADD32(0, 0XF7);
    // 0x800792C4: lh          $t4, 0xAE($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XAE);
    // 0x800792C8: nop

    // 0x800792CC: bne         $t4, $at, L_8007930C
    if (ctx->r12 != ctx->r1) {
        // 0x800792D0: nop
    
            goto L_8007930C;
    }
    // 0x800792D0: nop

    // 0x800792D4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800792D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800792DC: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800792E0: lwc1        $f18, 0xD4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x800792E4: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800792E8: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x800792EC: nop

    // 0x800792F0: bc1f        L_8007930C
    if (!c1cs) {
        // 0x800792F4: nop
    
            goto L_8007930C;
    }
    // 0x800792F4: nop

    // 0x800792F8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800792FC: nop

    // 0x80079300: ori         $t6, $t3, 0x8
    ctx->r14 = ctx->r11 | 0X8;
    // 0x80079304: b           L_800793F8
    // 0x80079308: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
        goto L_800793F8;
    // 0x80079308: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_8007930C:
    // 0x8007930C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80079310: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x80079314: lh          $t2, 0xAE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAE);
    // 0x80079318: nop

    // 0x8007931C: beq         $t2, $at, L_80079330
    if (ctx->r10 == ctx->r1) {
        // 0x80079320: nop
    
            goto L_80079330;
    }
    // 0x80079320: nop

    // 0x80079324: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x80079328: bne         $t2, $at, L_800793F8
    if (ctx->r10 != ctx->r1) {
        // 0x8007932C: nop
    
            goto L_800793F8;
    }
    // 0x8007932C: nop

L_80079330:
    // 0x80079330: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80079334: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80079338: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007933C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80079340: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80079344: lwc1        $f10, 0xD4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0XD4);
    // 0x80079348: nop

    // 0x8007934C: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80079350: nop

    // 0x80079354: bc1f        L_800793F8
    if (!c1cs) {
        // 0x80079358: nop
    
            goto L_800793F8;
    }
    // 0x80079358: nop

    // 0x8007935C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80079360: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80079364: lh          $t5, 0xB0($t8)
    ctx->r13 = MEM_H(ctx->r24, 0XB0);
    // 0x80079368: nop

    // 0x8007936C: bne         $t5, $at, L_800793AC
    if (ctx->r13 != ctx->r1) {
        // 0x80079370: nop
    
            goto L_800793AC;
    }
    // 0x80079370: nop

    // 0x80079374: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80079378: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007937C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80079380: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80079384: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80079388: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8007938C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80079390: jal         0x80081468
    // 0x80079394: addiu       $a0, $zero, 0x2CB
    ctx->r4 = ADD32(0, 0X2CB);
    func_80081468(rdram, ctx);
        goto after_10;
    // 0x80079394: addiu       $a0, $zero, 0x2CB
    ctx->r4 = ADD32(0, 0X2CB);
    after_10:
    // 0x80079398: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8007939C: nop

    // 0x800793A0: ori         $t4, $t7, 0x8
    ctx->r12 = ctx->r15 | 0X8;
    // 0x800793A4: b           L_800793F8
    // 0x800793A8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
        goto L_800793F8;
    // 0x800793A8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_800793AC:
    // 0x800793AC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800793B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800793B4: lh          $t3, 0xB0($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XB0);
    // 0x800793B8: nop

    // 0x800793BC: bne         $t3, $at, L_800793F8
    if (ctx->r11 != ctx->r1) {
        // 0x800793C0: nop
    
            goto L_800793F8;
    }
    // 0x800793C0: nop

    // 0x800793C4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800793C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800793CC: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800793D0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x800793D4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800793D8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800793DC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800793E0: jal         0x80081468
    // 0x800793E4: addiu       $a0, $zero, 0x2CC
    ctx->r4 = ADD32(0, 0X2CC);
    func_80081468(rdram, ctx);
        goto after_11;
    // 0x800793E4: addiu       $a0, $zero, 0x2CC
    ctx->r4 = ADD32(0, 0X2CC);
    after_11:
    // 0x800793E8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800793EC: nop

    // 0x800793F0: ori         $t1, $t6, 0x8
    ctx->r9 = ctx->r14 | 0X8;
    // 0x800793F4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_800793F8:
    // 0x800793F8: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800793FC: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80079400: nop

    // 0x80079404: swc1        $f16, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f16.u32l;
    // 0x80079408: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007940C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80079410: nop

    // 0x80079414: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x80079418: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007941C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80079420: nop

    // 0x80079424: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    // 0x80079428: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8007942C: b           L_8007943C
    // 0x80079430: nop

        goto L_8007943C;
    // 0x80079430: nop

    // 0x80079434: b           L_8007943C
    // 0x80079438: nop

        goto L_8007943C;
    // 0x80079438: nop

L_8007943C:
    // 0x8007943C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079440: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80079444: jr          $ra
    // 0x80079448: nop

    return;
    // 0x80079448: nop

;}
RECOMP_FUNC void func_800A1658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1658: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A165C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1660: jal         0x800A169C
    // 0x800A1664: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800A169C(rdram, ctx);
        goto after_0;
    // 0x800A1664: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800A1668: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x800A166C: jal         0x800A169C
    // 0x800A1670: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800A169C(rdram, ctx);
        goto after_1;
    // 0x800A1670: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800A1674: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x800A1678: jal         0x800A169C
    // 0x800A167C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800A169C(rdram, ctx);
        goto after_2;
    // 0x800A167C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x800A1680: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x800A1684: b           L_800A168C
    // 0x800A1688: nop

        goto L_800A168C;
    // 0x800A1688: nop

L_800A168C:
    // 0x800A168C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A1694: jr          $ra
    // 0x800A1698: nop

    return;
    // 0x800A1698: nop

;}
RECOMP_FUNC void func_800DB788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB788: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DB78C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DB790: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DB794: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DB798: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DB79C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB7A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DB7A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB7A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DB7AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DB7B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DB7B4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DB7B8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800DB7BC: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800DB7C0: nop

    // 0x800DB7C4: bne         $t0, $zero, L_800DB7E8
    if (ctx->r8 != 0) {
        // 0x800DB7C8: nop
    
            goto L_800DB7E8;
    }
    // 0x800DB7C8: nop

    // 0x800DB7CC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DB7D0: nop

    // 0x800DB7D4: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800DB7D8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DB7DC: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800DB7E0: b           L_800DB824
    // 0x800DB7E4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_800DB824;
    // 0x800DB7E4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_800DB7E8:
    // 0x800DB7E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DB7EC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800DB7F0: nop

    // 0x800DB7F4: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800DB7F8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DB7FC: nop

    // 0x800DB800: lwc1        $f12, 0x2C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800DB804: nop

    // 0x800DB808: swc1        $f12, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f12.u32l;
    // 0x800DB80C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DB810: nop

    // 0x800DB814: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x800DB818: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800DB81C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x800DB820: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
L_800DB824:
    // 0x800DB824: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800DB828: nop

    // 0x800DB82C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800DB830: b           L_800DB838
    // 0x800DB834: nop

        goto L_800DB838;
    // 0x800DB834: nop

L_800DB838:
    // 0x800DB838: jr          $ra
    // 0x800DB83C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DB83C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Skybox_MoveY(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D964: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006D968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006D96C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D970: lwc1        $f4, -0x1EA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x8006D974: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8006D978: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006D97C: lui         $at, 0x44A0
    ctx->r1 = S32(0X44A0 << 16);
    // 0x8006D980: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8006D984: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006D988: lui         $at, 0x4420
    ctx->r1 = S32(0X4420 << 16);
    // 0x8006D98C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006D990: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8006D994: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8006D998: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8006D99C: lui         $at, 0x44A0
    ctx->r1 = S32(0X44A0 << 16);
    // 0x8006D9A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006D9A4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006D9A8: nop

    // 0x8006D9AC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8006D9B0: nop

    // 0x8006D9B4: bc1f        L_8006D9D4
    if (!c1cs) {
        // 0x8006D9B8: nop
    
            goto L_8006D9D4;
    }
    // 0x8006D9B8: nop

    // 0x8006D9BC: lui         $at, 0x44A0
    ctx->r1 = S32(0X44A0 << 16);
    // 0x8006D9C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006D9C4: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006D9C8: nop

    // 0x8006D9CC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8006D9D0: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
L_8006D9D4:
    // 0x8006D9D4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006D9D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D9DC: swc1        $f4, 0x759C($at)
    MEM_W(0X759C, ctx->r1) = ctx->f4.u32l;
    // 0x8006D9E0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8006D9E4: jal         0x8006C3D0
    // 0x8006D9E8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    Skybox_GetWidthHeight(rdram, ctx);
        goto after_0;
    // 0x8006D9E8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8006D9EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006D9F0: lh          $t6, 0x78F0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X78F0);
    // 0x8006D9F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D9F8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8006D9FC: lwc1        $f6, -0x1EBC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8006DA00: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006DA04: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DA08: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8006DA0C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006DA10: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8006DA14: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006DA18: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8006DA1C: addiu       $t9, $t8, -0x12C
    ctx->r25 = ADD32(ctx->r24, -0X12C);
    // 0x8006DA20: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x8006DA24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006DA28: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8006DA2C: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8006DA30: bgez        $t9, L_8006DA48
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8006DA34: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8006DA48;
    }
    // 0x8006DA34: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006DA38: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8006DA3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006DA40: nop

    // 0x8006DA44: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_8006DA48:
    // 0x8006DA48: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8006DA4C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8006DA50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DA54: lwc1        $f8, -0x1EA8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8006DA58: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8006DA5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006DA60: nop

    // 0x8006DA64: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8006DA68: nop

    // 0x8006DA6C: bc1f        L_8006DA94
    if (!c1cs) {
        // 0x8006DA70: nop
    
            goto L_8006DA94;
    }
    // 0x8006DA70: nop

    // 0x8006DA74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DA78: lwc1        $f16, -0x1EA8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8006DA7C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8006DA80: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006DA84: nop

    // 0x8006DA88: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8006DA8C: b           L_8006DAA4
    // 0x8006DA90: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
        goto L_8006DAA4;
    // 0x8006DA90: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
L_8006DA94:
    // 0x8006DA94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DA98: lwc1        $f4, -0x1EA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8006DA9C: nop

    // 0x8006DAA0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_8006DAA4:
    // 0x8006DAA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DAA8: lwc1        $f10, 0x7A58($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x8006DAAC: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006DAB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006DAB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006DAB8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8006DABC: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8006DAC0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8006DAC4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8006DAC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006DACC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006DAD0: nop

    // 0x8006DAD4: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x8006DAD8: nop

    // 0x8006DADC: bc1f        L_8006DAF4
    if (!c1cs) {
        // 0x8006DAE0: nop
    
            goto L_8006DAF4;
    }
    // 0x8006DAE0: nop

    // 0x8006DAE4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8006DAE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006DAEC: b           L_8006DB24
    // 0x8006DAF0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
        goto L_8006DB24;
    // 0x8006DAF0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_8006DAF4:
    // 0x8006DAF4: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x8006DAF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006DAFC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006DB00: nop

    // 0x8006DB04: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x8006DB08: nop

    // 0x8006DB0C: bc1f        L_8006DB24
    if (!c1cs) {
        // 0x8006DB10: nop
    
            goto L_8006DB24;
    }
    // 0x8006DB10: nop

    // 0x8006DB14: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x8006DB18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006DB1C: nop

    // 0x8006DB20: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
L_8006DB24:
    // 0x8006DB24: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8006DB28: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006DB2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DB30: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8006DB34: swc1        $f10, 0x75A4($at)
    MEM_W(0X75A4, ctx->r1) = ctx->f10.u32l;
    // 0x8006DB38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DB3C: lwc1        $f16, 0x75A4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75A4);
    // 0x8006DB40: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8006DB44: nop

    // 0x8006DB48: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x8006DB4C: nop

    // 0x8006DB50: bc1f        L_8006DB64
    if (!c1cs) {
        // 0x8006DB54: nop
    
            goto L_8006DB64;
    }
    // 0x8006DB54: nop

    // 0x8006DB58: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8006DB5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DB60: swc1        $f6, 0x75A4($at)
    MEM_W(0X75A4, ctx->r1) = ctx->f6.u32l;
L_8006DB64:
    // 0x8006DB64: b           L_8006DB6C
    // 0x8006DB68: nop

        goto L_8006DB6C;
    // 0x8006DB68: nop

L_8006DB6C:
    // 0x8006DB6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DB70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8006DB74: jr          $ra
    // 0x8006DB78: nop

    return;
    // 0x8006DB78: nop

;}
RECOMP_FUNC void func_80100148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010014C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80100150: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80100154: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x80100158: nop

    // 0x8010015C: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x80100160: beq         $t7, $zero, L_80100190
    if (ctx->r15 == 0) {
        // 0x80100164: nop
    
            goto L_80100190;
    }
    // 0x80100164: nop

    // 0x80100168: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8010016C: sb          $zero, -0x1C12($at)
    MEM_B(-0X1C12, ctx->r1) = 0;
    // 0x80100170: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80100174: lb          $t8, -0x1C09($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C09);
    // 0x80100178: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8010017C: sb          $t8, -0x1C14($at)
    MEM_B(-0X1C14, ctx->r1) = ctx->r24;
    // 0x80100180: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80100184: sw          $zero, 0x65F4($at)
    MEM_W(0X65F4, ctx->r1) = 0;
    // 0x80100188: b           L_80100250
    // 0x8010018C: nop

        goto L_80100250;
    // 0x8010018C: nop

L_80100190:
    // 0x80100190: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80100194: lhu         $t9, -0x1C7C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C7C);
    // 0x80100198: nop

    // 0x8010019C: andi        $t0, $t9, 0x20
    ctx->r8 = ctx->r25 & 0X20;
    // 0x801001A0: beq         $t0, $zero, L_801001E4
    if (ctx->r8 == 0) {
        // 0x801001A4: nop
    
            goto L_801001E4;
    }
    // 0x801001A4: nop

    // 0x801001A8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x801001AC: lb          $t1, -0x1C14($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1C14);
    // 0x801001B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801001B4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x801001B8: sb          $t2, -0x1C14($at)
    MEM_B(-0X1C14, ctx->r1) = ctx->r10;
    // 0x801001BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801001C0: sh          $zero, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = 0;
    // 0x801001C4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x801001C8: lb          $t3, -0x1C14($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1C14);
    // 0x801001CC: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x801001D0: bne         $t3, $at, L_801001E4
    if (ctx->r11 != ctx->r1) {
        // 0x801001D4: nop
    
            goto L_801001E4;
    }
    // 0x801001D4: nop

    // 0x801001D8: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x801001DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801001E0: sb          $t4, -0x1C14($at)
    MEM_B(-0X1C14, ctx->r1) = ctx->r12;
L_801001E4:
    // 0x801001E4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x801001E8: lb          $t5, -0x1C14($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1C14);
    // 0x801001EC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801001F0: bne         $t5, $at, L_80100208
    if (ctx->r13 != ctx->r1) {
        // 0x801001F4: nop
    
            goto L_80100208;
    }
    // 0x801001F4: nop

    // 0x801001F8: jal         0x800FF88C
    // 0x801001FC: nop

    func_800FF88C(rdram, ctx);
        goto after_0;
    // 0x801001FC: nop

    after_0:
    // 0x80100200: b           L_80100248
    // 0x80100204: nop

        goto L_80100248;
    // 0x80100204: nop

L_80100208:
    // 0x80100208: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8010020C: lb          $t6, -0x1C14($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C14);
    // 0x80100210: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x80100214: bne         $t6, $at, L_8010022C
    if (ctx->r14 != ctx->r1) {
        // 0x80100218: nop
    
            goto L_8010022C;
    }
    // 0x80100218: nop

    // 0x8010021C: jal         0x800FFD30
    // 0x80100220: nop

    func_800FFD30(rdram, ctx);
        goto after_1;
    // 0x80100220: nop

    after_1:
    // 0x80100224: b           L_80100248
    // 0x80100228: nop

        goto L_80100248;
    // 0x80100228: nop

L_8010022C:
    // 0x8010022C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80100230: lb          $t7, -0x1C14($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C14);
    // 0x80100234: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x80100238: bne         $t7, $at, L_80100248
    if (ctx->r15 != ctx->r1) {
        // 0x8010023C: nop
    
            goto L_80100248;
    }
    // 0x8010023C: nop

    // 0x80100240: jal         0x800FFF40
    // 0x80100244: nop

    func_800FFF40(rdram, ctx);
        goto after_2;
    // 0x80100244: nop

    after_2:
L_80100248:
    // 0x80100248: b           L_80100250
    // 0x8010024C: nop

        goto L_80100250;
    // 0x8010024C: nop

L_80100250:
    // 0x80100250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80100254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80100258: jr          $ra
    // 0x8010025C: nop

    return;
    // 0x8010025C: nop

;}
RECOMP_FUNC void func_800F7A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7A0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F7A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F7A14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7A18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7A1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F7A20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F7A24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7A28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F7A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7A30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F7A34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F7A38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F7A3C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F7A40: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A44: nop

    // 0x800F7A48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F7A4C: nop

    // 0x800F7A50: bne         $t1, $zero, L_800F7B1C
    if (ctx->r9 != 0) {
        // 0x800F7A54: nop
    
            goto L_800F7B1C;
    }
    // 0x800F7A54: nop

    // 0x800F7A58: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F7A60: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F7A64: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A68: nop

    // 0x800F7A6C: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800F7A70: nop

    // 0x800F7A74: beq         $t5, $zero, L_800F7AC8
    if (ctx->r13 == 0) {
        // 0x800F7A78: nop
    
            goto L_800F7AC8;
    }
    // 0x800F7A78: nop

    // 0x800F7A7C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A80: nop

    // 0x800F7A84: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800F7A88: nop

    // 0x800F7A8C: sh          $t7, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r15;
    // 0x800F7A90: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7A94: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800F7A98: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F7A9C: lwc1        $f12, 0x40($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X40);
    // 0x800F7AA0: jal         0x80015538
    // 0x800F7AA4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800F7AA4: nop

    after_0:
    // 0x800F7AA8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7AAC: nop

    // 0x800F7AB0: swc1        $f0, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f0.u32l;
    // 0x800F7AB4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800F7AB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F7ABC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7AC0: b           L_800F7AEC
    // 0x800F7AC4: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
        goto L_800F7AEC;
    // 0x800F7AC4: swc1        $f4, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f4.u32l;
L_800F7AC8:
    // 0x800F7AC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F7ACC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7AD0: nop

    // 0x800F7AD4: swc1        $f6, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f6.u32l;
    // 0x800F7AD8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7ADC: nop

    // 0x800F7AE0: lwc1        $f8, 0x48($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X48);
    // 0x800F7AE4: nop

    // 0x800F7AE8: swc1        $f8, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f8.u32l;
L_800F7AEC:
    // 0x800F7AEC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F7AF0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7AF4: nop

    // 0x800F7AF8: swc1        $f10, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f10.u32l;
    // 0x800F7AFC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7B00: nop

    // 0x800F7B04: lwc1        $f16, 0x44($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X44);
    // 0x800F7B08: nop

    // 0x800F7B0C: swc1        $f16, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f16.u32l;
    // 0x800F7B10: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7B14: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800F7B18: sh          $t5, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r13;
L_800F7B1C:
    // 0x800F7B1C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7B20: nop

    // 0x800F7B24: lh          $t8, 0xA6($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA6);
    // 0x800F7B28: nop

    // 0x800F7B2C: bne         $t8, $zero, L_800F7B3C
    if (ctx->r24 != 0) {
        // 0x800F7B30: nop
    
            goto L_800F7B3C;
    }
    // 0x800F7B30: nop

    // 0x800F7B34: b           L_800F7BE4
    // 0x800F7B38: nop

        goto L_800F7BE4;
    // 0x800F7B38: nop

L_800F7B3C:
    // 0x800F7B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7B44: jal         0x80029D04
    // 0x800F7B48: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800F7B48: nop

    after_1:
    // 0x800F7B4C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7B50: nop

    // 0x800F7B54: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800F7B58: lwc1        $f6, 0x48($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X48);
    // 0x800F7B5C: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x800F7B60: nop

    // 0x800F7B64: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800F7B68: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800F7B6C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800F7B70: nop

    // 0x800F7B74: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800F7B78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800F7B7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800F7B80: nop

    // 0x800F7B84: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800F7B88: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x800F7B8C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800F7B90: sh          $t2, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r10;
    // 0x800F7B94: nop

    // 0x800F7B98: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7B9C: nop

    // 0x800F7BA0: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800F7BA4: nop

    // 0x800F7BA8: bgtz        $t4, L_800F7BDC
    if (SIGNED(ctx->r12) > 0) {
        // 0x800F7BAC: nop
    
            goto L_800F7BDC;
    }
    // 0x800F7BAC: nop

    // 0x800F7BB0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7BB4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800F7BB8: sh          $t5, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r13;
    // 0x800F7BBC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7BC0: nop

    // 0x800F7BC4: lh          $t8, 0xB0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XB0);
    // 0x800F7BC8: nop

    // 0x800F7BCC: sh          $t8, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r24;
    // 0x800F7BD0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F7BD4: nop

    // 0x800F7BD8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800F7BDC:
    // 0x800F7BDC: b           L_800F7BE4
    // 0x800F7BE0: nop

        goto L_800F7BE4;
    // 0x800F7BE0: nop

L_800F7BE4:
    // 0x800F7BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F7BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7BEC: jr          $ra
    // 0x800F7BF0: nop

    return;
    // 0x800F7BF0: nop

;}
RECOMP_FUNC void func_800F32C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F32C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F32C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F32CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F32D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F32D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F32D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F32DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F32E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F32E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F32E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F32EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F32F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F32F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F32F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F32FC: nop

    // 0x800F3300: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F3304: nop

    // 0x800F3308: bne         $t1, $zero, L_800F3360
    if (ctx->r9 != 0) {
        // 0x800F330C: nop
    
            goto L_800F3360;
    }
    // 0x800F330C: nop

    // 0x800F3310: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F3314: nop

    // 0x800F3318: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F331C: nop

    // 0x800F3320: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F3324: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F3328: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F332C: nop

    // 0x800F3330: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800F3334: nop

    // 0x800F3338: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800F333C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3340: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800F3344: addiu       $t7, $t7, -0x64D0
    ctx->r15 = ADD32(ctx->r15, -0X64D0);
    // 0x800F3348: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F334C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800F3350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F3354: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F3358: jal         0x8001C0EC
    // 0x800F335C: addiu       $a3, $zero, 0x188
    ctx->r7 = ADD32(0, 0X188);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F335C: addiu       $a3, $zero, 0x188
    ctx->r7 = ADD32(0, 0X188);
    after_0:
L_800F3360:
    // 0x800F3360: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F3364: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F3368: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x800F336C: jal         0x8002A2EC
    // 0x800F3370: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A2EC(rdram, ctx);
        goto after_1;
    // 0x800F3370: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_1:
    // 0x800F3374: beq         $v0, $zero, L_800F3394
    if (ctx->r2 == 0) {
        // 0x800F3378: nop
    
            goto L_800F3394;
    }
    // 0x800F3378: nop

    // 0x800F337C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F3380: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800F3384: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800F3388: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F338C: nop

    // 0x800F3390: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800F3394:
    // 0x800F3394: b           L_800F339C
    // 0x800F3398: nop

        goto L_800F339C;
    // 0x800F3398: nop

L_800F339C:
    // 0x800F339C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F33A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F33A4: jr          $ra
    // 0x800F33A8: nop

    return;
    // 0x800F33A8: nop

;}
RECOMP_FUNC void func_800EB61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EB61C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800EB620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EB624: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EB628: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EB62C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EB630: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EB634: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EB638: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EB63C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EB640: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EB644: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EB648: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EB64C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800EB650: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EB654: nop

    // 0x800EB658: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EB65C: nop

    // 0x800EB660: bne         $t1, $zero, L_800EB704
    if (ctx->r9 != 0) {
        // 0x800EB664: nop
    
            goto L_800EB704;
    }
    // 0x800EB664: nop

    // 0x800EB668: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EB66C: nop

    // 0x800EB670: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EB674: nop

    // 0x800EB678: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EB67C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EB680: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EB684: nop

    // 0x800EB688: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800EB68C: nop

    // 0x800EB690: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800EB694: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800EB698: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EB69C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800EB6A0: nop

    // 0x800EB6A4: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x800EB6A8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800EB6AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EB6B0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EB6B4: nop

    // 0x800EB6B8: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800EB6BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB6C0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800EB6C4: addiu       $t9, $t9, -0x6714
    ctx->r25 = ADD32(ctx->r25, -0X6714);
    // 0x800EB6C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB6CC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800EB6D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EB6D4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800EB6D8: jal         0x8001C0EC
    // 0x800EB6DC: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EB6DC: addiu       $a3, $zero, 0xC3
    ctx->r7 = ADD32(0, 0XC3);
    after_0:
    // 0x800EB6E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800EB6E4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800EB6E8: addiu       $t1, $t1, -0x66F4
    ctx->r9 = ADD32(ctx->r9, -0X66F4);
    // 0x800EB6EC: lh          $a0, 0xEC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XEC);
    // 0x800EB6F0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800EB6F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EB6F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800EB6FC: jal         0x8001C0EC
    // 0x800EB700: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EB700: addiu       $a3, $zero, 0xC5
    ctx->r7 = ADD32(0, 0XC5);
    after_1:
L_800EB704:
    // 0x800EB704: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB708: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB70C: jal         0x80029C40
    // 0x800EB710: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800EB710: nop

    after_2:
    // 0x800EB714: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EB718: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EB71C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB720: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EB728: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800EB72C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EB730: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800EB734: jal         0x80029018
    // 0x800EB738: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800EB738: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x800EB73C: beq         $v0, $zero, L_800EB768
    if (ctx->r2 == 0) {
        // 0x800EB740: nop
    
            goto L_800EB768;
    }
    // 0x800EB740: nop

    // 0x800EB744: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800EB748: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EB74C: nop

    // 0x800EB750: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x800EB754: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800EB758: nop

    // 0x800EB75C: lwc1        $f18, 0x2C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800EB760: nop

    // 0x800EB764: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
L_800EB768:
    // 0x800EB768: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EB76C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EB770: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB774: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB778: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EB77C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EB780: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EB784: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EB788: jal         0x800295C0
    // 0x800EB78C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800EB78C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800EB790: beq         $v0, $zero, L_800EB7A8
    if (ctx->r2 == 0) {
        // 0x800EB794: nop
    
            goto L_800EB7A8;
    }
    // 0x800EB794: nop

    // 0x800EB798: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EB79C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EB7A0: b           L_800EB7B8
    // 0x800EB7A4: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
        goto L_800EB7B8;
    // 0x800EB7A4: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
L_800EB7A8:
    // 0x800EB7A8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EB7AC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EB7B0: nop

    // 0x800EB7B4: swc1        $f10, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f10.u32l;
L_800EB7B8:
    // 0x800EB7B8: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_800EB7BC:
    // 0x800EB7BC: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x800EB7C0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800EB7C4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800EB7C8: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x800EB7CC: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x800EB7D0: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800EB7D4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EB7D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EB7DC: lwc1        $f18, 0x24($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X24);
    // 0x800EB7E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EB7E4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EB7E8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EB7EC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EB7F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB7F4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EB7F8: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x800EB7FC: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800EB800: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EB804: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x800EB808: addu        $t6, $t3, $t2
    ctx->r14 = ADD32(ctx->r11, ctx->r10);
    // 0x800EB80C: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x800EB810: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800EB814: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800EB818: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800EB81C: lwc1        $f8, 0x28($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X28);
    // 0x800EB820: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EB824: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800EB828: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EB82C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EB830: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB834: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800EB838: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x800EB83C: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x800EB840: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800EB844: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800EB848: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800EB84C: lh          $t4, 0xE8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XE8);
    // 0x800EB850: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800EB854: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x800EB858: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800EB85C: lwc1        $f18, 0x2C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800EB860: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EB864: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800EB868: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EB86C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EB870: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EB874: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800EB878: swc1        $f4, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f4.u32l;
    // 0x800EB87C: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800EB880: nop

    // 0x800EB884: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x800EB888: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800EB88C: sra         $t5, $t7, 16
    ctx->r13 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800EB890: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x800EB894: bne         $at, $zero, L_800EB7BC
    if (ctx->r1 != 0) {
        // 0x800EB898: sh          $t6, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r14;
            goto L_800EB7BC;
    }
    // 0x800EB898: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x800EB89C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EB8A0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800EB8A4: lh          $t8, 0xE8($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XE8);
    // 0x800EB8A8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800EB8AC: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800EB8B0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800EB8B4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800EB8B8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800EB8BC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800EB8C0: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x800EB8C4: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EB8C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EB8CC: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800EB8D0: nop

    // 0x800EB8D4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EB8D8: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
    // 0x800EB8DC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800EB8E0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800EB8E4: lh          $t2, 0xEA($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XEA);
    // 0x800EB8E8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800EB8EC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800EB8F0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800EB8F4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EB8F8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800EB8FC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800EB900: addu        $t5, $t6, $t7
    ctx->r13 = ADD32(ctx->r14, ctx->r15);
    // 0x800EB904: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800EB908: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EB90C: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800EB910: nop

    // 0x800EB914: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EB918: swc1        $f4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f4.u32l;
    // 0x800EB91C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800EB920: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800EB924: lh          $t8, 0xEC($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XEC);
    // 0x800EB928: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800EB92C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800EB930: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800EB934: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800EB938: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800EB93C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800EB940: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x800EB944: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800EB948: lwc1        $f8, 0x5560($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5560);
    // 0x800EB94C: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800EB950: nop

    // 0x800EB954: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800EB958: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
    // 0x800EB95C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EB960: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EB964: jal         0x8001B4AC
    // 0x800EB968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x800EB968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800EB96C: beq         $v0, $zero, L_800EB98C
    if (ctx->r2 == 0) {
        // 0x800EB970: nop
    
            goto L_800EB98C;
    }
    // 0x800EB970: nop

    // 0x800EB974: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800EB978: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800EB97C: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
    // 0x800EB980: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800EB984: nop

    // 0x800EB988: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800EB98C:
    // 0x800EB98C: b           L_800EB994
    // 0x800EB990: nop

        goto L_800EB994;
    // 0x800EB990: nop

L_800EB994:
    // 0x800EB994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EB998: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800EB99C: jr          $ra
    // 0x800EB9A0: nop

    return;
    // 0x800EB9A0: nop

;}
RECOMP_FUNC void func_800C410C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C410C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C4110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C4114: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C4118: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C411C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C4120: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C4124: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C4128: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C412C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C4130: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C4134: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C4138: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C413C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C4140: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C4144: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4148: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C414C: addiu       $a1, $a1, 0x3F1C
    ctx->r5 = ADD32(ctx->r5, 0X3F1C);
    // 0x800C4150: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C4154: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C4158: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800C415C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C4160: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C4164: jal         0x80027464
    // 0x800C4168: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C4168: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C416C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800C4170: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4174: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C4178: beq         $t1, $at, L_800C4330
    if (ctx->r9 == ctx->r1) {
        // 0x800C417C: nop
    
            goto L_800C4330;
    }
    // 0x800C417C: nop

    // 0x800C4180: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4184: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800C4188: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C418C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C4190: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C4194: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C4198: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C419C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C41A0: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x800C41A4: nop

    // 0x800C41A8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x800C41AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C41B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C41B4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800C41B8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800C41BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C41C0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800C41C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C41C8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C41CC: lh          $t8, 0x423A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423A);
    // 0x800C41D0: nop

    // 0x800C41D4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800C41D8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800C41DC: lui         $at, 0x44D2
    ctx->r1 = S32(0X44D2 << 16);
    // 0x800C41E0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800C41E4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C41E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C41EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C41F0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C41F4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C41F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C41FC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C4200: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x800C4204: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C4208: lui         $at, 0x4491
    ctx->r1 = S32(0X4491 << 16);
    // 0x800C420C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C4210: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C4214: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C4218: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C421C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C4220: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4224: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4228: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C422C: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x800C4230: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800C4234: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C4238: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C423C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C4240: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C4244: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C4248: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C424C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4250: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C4254: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x800C4258: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800C425C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C4260: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C4264: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C4268: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C426C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C4270: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C4274: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4278: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C427C: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x800C4280: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C4284: lui         $at, 0x44FF
    ctx->r1 = S32(0X44FF << 16);
    // 0x800C4288: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C428C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C4290: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C4294: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800C4298: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C429C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C42A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C42A4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C42A8: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x800C42AC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C42B0: lui         $at, 0x4491
    ctx->r1 = S32(0X4491 << 16);
    // 0x800C42B4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800C42B8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C42BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C42C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C42C4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C42C8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C42CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C42D0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C42D4: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
    // 0x800C42D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C42DC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800C42E0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C42E4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C42E8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C42EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C42F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C42F4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C42F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C42FC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C4300: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x800C4304: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C4308: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800C430C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C4310: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C4314: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C4318: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C431C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C4320: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C4324: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4328: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C432C: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
L_800C4330:
    // 0x800C4330: b           L_800C4338
    // 0x800C4334: nop

        goto L_800C4338;
    // 0x800C4334: nop

L_800C4338:
    // 0x800C4338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C433C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800C4340: jr          $ra
    // 0x800C4344: nop

    return;
    // 0x800C4344: nop

;}
RECOMP_FUNC void func_800D9B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9B84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D9B88: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D9B8C: nop

    // 0x800D9B90: bne         $t6, $zero, L_800D9BC4
    if (ctx->r14 != 0) {
        // 0x800D9B94: nop
    
            goto L_800D9BC4;
    }
    // 0x800D9B94: nop

    // 0x800D9B98: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800D9B9C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800D9BA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D9BA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D9BA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D9BAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D9BB0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D9BB4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800D9BB8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D9BBC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800D9BC0: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800D9BC4:
    // 0x800D9BC4: jr          $ra
    // 0x800D9BC8: nop

    return;
    // 0x800D9BC8: nop

    // 0x800D9BCC: jr          $ra
    // 0x800D9BD0: nop

    return;
    // 0x800D9BD0: nop

;}
RECOMP_FUNC void func_800930F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800930F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800930F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800930F8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800930FC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093100: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80093104: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80093108: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009310C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80093110: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80093114: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80093118: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009311C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80093120: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80093124: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80093128: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009312C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093130: addiu       $a1, $a1, 0x17BC
    ctx->r5 = ADD32(ctx->r5, 0X17BC);
    // 0x80093134: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80093138: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009313C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80093140: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80093144: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80093148: jal         0x80027464
    // 0x8009314C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009314C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093150: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80093154: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80093158: addiu       $t1, $t1, 0x31B8
    ctx->r9 = ADD32(ctx->r9, 0X31B8);
    // 0x8009315C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80093160: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80093164: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80093168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009316C: jal         0x8001C0EC
    // 0x80093170: addiu       $a3, $zero, 0x284
    ctx->r7 = ADD32(0, 0X284);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80093170: addiu       $a3, $zero, 0x284
    ctx->r7 = ADD32(0, 0X284);
    after_1:
    // 0x80093174: b           L_8009317C
    // 0x80093178: nop

        goto L_8009317C;
    // 0x80093178: nop

L_8009317C:
    // 0x8009317C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093180: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80093184: jr          $ra
    // 0x80093188: nop

    return;
    // 0x80093188: nop

;}
RECOMP_FUNC void func_800B2E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B2E6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B2E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B2E74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B2E78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B2E7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B2E80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B2E84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B2E88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B2E8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B2E90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B2E94: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B2E98: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800B2E9C: nop

    // 0x800B2EA0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800B2EA4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800B2EA8: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800B2EAC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800B2EB0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800B2EB4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B2EB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B2EBC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B2EC0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B2EC4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B2EC8: lh          $t1, 0x4250($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4250);
    // 0x800B2ECC: nop

    // 0x800B2ED0: bgtz        $t1, L_800B2FB0
    if (SIGNED(ctx->r9) > 0) {
        // 0x800B2ED4: nop
    
            goto L_800B2FB0;
    }
    // 0x800B2ED4: nop

    // 0x800B2ED8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800B2EDC: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800B2EE0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800B2EE4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800B2EE8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B2EEC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800B2EF0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800B2EF4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800B2EF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B2EFC: lh          $t4, 0x41F4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X41F4);
    // 0x800B2F00: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800B2F04: beq         $t4, $at, L_800B2FB0
    if (ctx->r12 == ctx->r1) {
        // 0x800B2F08: nop
    
            goto L_800B2FB0;
    }
    // 0x800B2F08: nop

    // 0x800B2F0C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800B2F10: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x800B2F14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B2F18: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800B2F1C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800B2F20: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800B2F24: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800B2F28: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800B2F2C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800B2F30: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800B2F34: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800B2F38: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800B2F3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B2F40: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B2F44: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B2F48: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B2F4C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B2F50: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B2F54: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800B2F58: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800B2F5C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800B2F60: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800B2F64: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800B2F68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B2F6C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800B2F70: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B2F74: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800B2F78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B2F7C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800B2F80: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800B2F84: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B2F88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2F8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2F90: jal         0x8001BB34
    // 0x800B2F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800B2F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B2F98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2F9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2FA0: jal         0x8002B0E4
    // 0x800B2FA4: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800B2FA4: nop

    after_1:
    // 0x800B2FA8: b           L_800B3094
    // 0x800B2FAC: nop

        goto L_800B3094;
    // 0x800B2FAC: nop

L_800B2FB0:
    // 0x800B2FB0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800B2FB4: nop

    // 0x800B2FB8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800B2FBC: sltiu       $at, $t3, 0xB
    ctx->r1 = ctx->r11 < 0XB ? 1 : 0;
    // 0x800B2FC0: beq         $at, $zero, L_800B3084
    if (ctx->r1 == 0) {
        // 0x800B2FC4: nop
    
            goto L_800B3084;
    }
    // 0x800B2FC4: nop

    // 0x800B2FC8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800B2FCC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B2FD0: addu        $at, $at, $t3
    gpr jr_addend_800B2FDC = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800B2FD4: lw          $t3, 0x4B54($at)
    ctx->r11 = ADD32(ctx->r1, 0X4B54);
    // 0x800B2FD8: nop

    // 0x800B2FDC: jr          $t3
    // 0x800B2FE0: nop

    switch (jr_addend_800B2FDC >> 2) {
        case 0: goto L_800B2FE4; break;
        case 1: goto L_800B3004; break;
        case 2: goto L_800B3024; break;
        case 3: goto L_800B3074; break;
        case 4: goto L_800B3064; break;
        case 5: goto L_800B3014; break;
        case 6: goto L_800B3044; break;
        case 7: goto L_800B3054; break;
        case 8: goto L_800B3084; break;
        case 9: goto L_800B3034; break;
        case 10: goto L_800B2FF4; break;
        default: switch_error(__func__, 0x800B2FDC, 0x80114B54);
    }
    // 0x800B2FE0: nop

L_800B2FE4:
    // 0x800B2FE4: jal         0x800B1048
    // 0x800B2FE8: nop

    func_800B1048(rdram, ctx);
        goto after_2;
    // 0x800B2FE8: nop

    after_2:
    // 0x800B2FEC: b           L_800B308C
    // 0x800B2FF0: nop

        goto L_800B308C;
    // 0x800B2FF0: nop

L_800B2FF4:
    // 0x800B2FF4: jal         0x800B1248
    // 0x800B2FF8: nop

    func_800B1248(rdram, ctx);
        goto after_3;
    // 0x800B2FF8: nop

    after_3:
    // 0x800B2FFC: b           L_800B308C
    // 0x800B3000: nop

        goto L_800B308C;
    // 0x800B3000: nop

L_800B3004:
    // 0x800B3004: jal         0x800B15A0
    // 0x800B3008: nop

    func_800B15A0(rdram, ctx);
        goto after_4;
    // 0x800B3008: nop

    after_4:
    // 0x800B300C: b           L_800B308C
    // 0x800B3010: nop

        goto L_800B308C;
    // 0x800B3010: nop

L_800B3014:
    // 0x800B3014: jal         0x800B1B7C
    // 0x800B3018: nop

    func_800B1B7C(rdram, ctx);
        goto after_5;
    // 0x800B3018: nop

    after_5:
    // 0x800B301C: b           L_800B308C
    // 0x800B3020: nop

        goto L_800B308C;
    // 0x800B3020: nop

L_800B3024:
    // 0x800B3024: jal         0x800B1914
    // 0x800B3028: nop

    func_800B1914(rdram, ctx);
        goto after_6;
    // 0x800B3028: nop

    after_6:
    // 0x800B302C: b           L_800B308C
    // 0x800B3030: nop

        goto L_800B308C;
    // 0x800B3030: nop

L_800B3034:
    // 0x800B3034: jal         0x800B1FA8
    // 0x800B3038: nop

    func_800B1FA8(rdram, ctx);
        goto after_7;
    // 0x800B3038: nop

    after_7:
    // 0x800B303C: b           L_800B308C
    // 0x800B3040: nop

        goto L_800B308C;
    // 0x800B3040: nop

L_800B3044:
    // 0x800B3044: jal         0x800B2250
    // 0x800B3048: nop

    func_800B2250(rdram, ctx);
        goto after_8;
    // 0x800B3048: nop

    after_8:
    // 0x800B304C: b           L_800B308C
    // 0x800B3050: nop

        goto L_800B308C;
    // 0x800B3050: nop

L_800B3054:
    // 0x800B3054: jal         0x800B271C
    // 0x800B3058: nop

    func_800B271C(rdram, ctx);
        goto after_9;
    // 0x800B3058: nop

    after_9:
    // 0x800B305C: b           L_800B308C
    // 0x800B3060: nop

        goto L_800B308C;
    // 0x800B3060: nop

L_800B3064:
    // 0x800B3064: jal         0x800B2C54
    // 0x800B3068: nop

    func_800B2C54(rdram, ctx);
        goto after_10;
    // 0x800B3068: nop

    after_10:
    // 0x800B306C: b           L_800B308C
    // 0x800B3070: nop

        goto L_800B308C;
    // 0x800B3070: nop

L_800B3074:
    // 0x800B3074: jal         0x800B2AAC
    // 0x800B3078: nop

    func_800B2AAC(rdram, ctx);
        goto after_11;
    // 0x800B3078: nop

    after_11:
    // 0x800B307C: b           L_800B308C
    // 0x800B3080: nop

        goto L_800B308C;
    // 0x800B3080: nop

L_800B3084:
    // 0x800B3084: b           L_800B308C
    // 0x800B3088: nop

        goto L_800B308C;
    // 0x800B3088: nop

L_800B308C:
    // 0x800B308C: b           L_800B3094
    // 0x800B3090: nop

        goto L_800B3094;
    // 0x800B3090: nop

L_800B3094:
    // 0x800B3094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B3098: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B309C: jr          $ra
    // 0x800B30A0: nop

    return;
    // 0x800B30A0: nop

;}
RECOMP_FUNC void func_80091BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091BC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091BCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091BD0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091BD4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091BD8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091BDC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091BE0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091BE4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091BE8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091BEC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091BF0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091BF4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091BF8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091BFC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091C00: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091C04: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091C08: addiu       $a1, $a1, 0x1600
    ctx->r5 = ADD32(ctx->r5, 0X1600);
    // 0x80091C0C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091C10: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091C14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091C18: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091C1C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091C20: jal         0x80027464
    // 0x80091C24: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091C24: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091C28: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091C2C: b           L_80091C34
    // 0x80091C30: nop

        goto L_80091C34;
    // 0x80091C30: nop

L_80091C34:
    // 0x80091C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091C38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091C3C: jr          $ra
    // 0x80091C40: nop

    return;
    // 0x80091C40: nop

;}
RECOMP_FUNC void func_80063C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063C58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80063C5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80063C60: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80063C64: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80063C68: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80063C6C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80063C70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80063C74: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80063C78: nop

    // 0x80063C7C: beq         $t6, $zero, L_80063CD8
    if (ctx->r14 == 0) {
        // 0x80063C80: nop
    
            goto L_80063CD8;
    }
    // 0x80063C80: nop

L_80063C84:
    // 0x80063C84: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80063C88: nop

    // 0x80063C8C: lh          $s0, 0x0($t7)
    ctx->r16 = MEM_H(ctx->r15, 0X0);
    // 0x80063C90: addiu       $t9, $t7, 0x2
    ctx->r25 = ADD32(ctx->r15, 0X2);
    // 0x80063C94: addiu       $t8, $s0, 0x1
    ctx->r24 = ADD32(ctx->r16, 0X1);
    // 0x80063C98: sltiu       $t8, $t8, 0x1
    ctx->r24 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x80063C9C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80063CA0: beq         $s0, $zero, L_80063CD0
    if (ctx->r16 == 0) {
        // 0x80063CA4: sw          $t9, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r25;
            goto L_80063CD0;
    }
    // 0x80063CA4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80063CA8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80063CAC: nop

    // 0x80063CB0: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80063CB4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80063CB8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80063CBC: nop

    // 0x80063CC0: bne         $t2, $zero, L_80063CD0
    if (ctx->r10 != 0) {
        // 0x80063CC4: nop
    
            goto L_80063CD0;
    }
    // 0x80063CC4: nop

    // 0x80063CC8: b           L_80063CD8
    // 0x80063CCC: nop

        goto L_80063CD8;
    // 0x80063CCC: nop

L_80063CD0:
    // 0x80063CD0: b           L_80063C84
    // 0x80063CD4: nop

        goto L_80063C84;
    // 0x80063CD4: nop

L_80063CD8:
    // 0x80063CD8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80063CDC: nop

    // 0x80063CE0: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x80063CE4: addiu       $t5, $t3, 0x2
    ctx->r13 = ADD32(ctx->r11, 0X2);
    // 0x80063CE8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80063CEC: sh          $t4, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r12;
    // 0x80063CF0: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x80063CF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80063CF8: bne         $t6, $at, L_80063D08
    if (ctx->r14 != ctx->r1) {
        // 0x80063CFC: nop
    
            goto L_80063D08;
    }
    // 0x80063CFC: nop

    // 0x80063D00: b           L_80063D64
    // 0x80063D04: nop

        goto L_80063D64;
    // 0x80063D04: nop

L_80063D08:
    // 0x80063D08: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x80063D0C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80063D10: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80063D14: bgez        $t8, L_80063D28
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80063D18: andi        $a2, $t8, 0x1F
        ctx->r6 = ctx->r24 & 0X1F;
            goto L_80063D28;
    }
    // 0x80063D18: andi        $a2, $t8, 0x1F
    ctx->r6 = ctx->r24 & 0X1F;
    // 0x80063D1C: beq         $a2, $zero, L_80063D28
    if (ctx->r6 == 0) {
        // 0x80063D20: nop
    
            goto L_80063D28;
    }
    // 0x80063D20: nop

    // 0x80063D24: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80063D28:
    // 0x80063D28: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x80063D2C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80063D30: bgez        $t8, L_80063D40
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80063D34: sra         $a3, $t8, 5
        ctx->r7 = S32(SIGNED(ctx->r24) >> 5);
            goto L_80063D40;
    }
    // 0x80063D34: sra         $a3, $t8, 5
    ctx->r7 = S32(SIGNED(ctx->r24) >> 5);
    // 0x80063D38: addiu       $at, $t8, 0x1F
    ctx->r1 = ADD32(ctx->r24, 0X1F);
    // 0x80063D3C: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_80063D40:
    // 0x80063D40: sll         $t9, $a3, 4
    ctx->r25 = S32(ctx->r7 << 4);
    // 0x80063D44: jal         0x8006389C
    // 0x80063D48: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    func_8006389C(rdram, ctx);
        goto after_0;
    // 0x80063D48: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    after_0:
    // 0x80063D4C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80063D50: nop

    // 0x80063D54: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80063D58: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80063D5C: b           L_80063CD8
    // 0x80063D60: nop

        goto L_80063CD8;
    // 0x80063D60: nop

L_80063D64:
    // 0x80063D64: b           L_80063D6C
    // 0x80063D68: nop

        goto L_80063D6C;
    // 0x80063D68: nop

L_80063D6C:
    // 0x80063D6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80063D70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80063D74: jr          $ra
    // 0x80063D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80063D78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800BAD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAD34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BAD38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BAD3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BAD40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BAD44: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BAD48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BAD4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BAD50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BAD54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BAD58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BAD5C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BAD60: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BAD64: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BAD68: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAD6C: nop

    // 0x800BAD70: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BAD74: nop

    // 0x800BAD78: bne         $t1, $zero, L_800BADDC
    if (ctx->r9 != 0) {
        // 0x800BAD7C: nop
    
            goto L_800BADDC;
    }
    // 0x800BAD7C: nop

    // 0x800BAD80: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAD84: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BAD88: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BAD8C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BAD90: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAD94: nop

    // 0x800BAD98: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BAD9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BADA0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BADA4: nop

    // 0x800BADA8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BADAC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800BADB0: addiu       $t6, $zero, 0x23
    ctx->r14 = ADD32(0, 0X23);
    // 0x800BADB4: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800BADB8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BADBC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800BADC0: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800BADC4: nop

    // 0x800BADC8: bne         $t9, $at, L_800BADDC
    if (ctx->r25 != ctx->r1) {
        // 0x800BADCC: nop
    
            goto L_800BADDC;
    }
    // 0x800BADCC: nop

    // 0x800BADD0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BADD4: nop

    // 0x800BADD8: sh          $zero, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = 0;
L_800BADDC:
    // 0x800BADDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BADE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BADE4: jal         0x80029C40
    // 0x800BADE8: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BADE8: nop

    after_0:
    // 0x800BADEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BADF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BADF4: jal         0x80029D04
    // 0x800BADF8: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BADF8: nop

    after_1:
    // 0x800BADFC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAE00: nop

    // 0x800BAE04: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800BAE08: nop

    // 0x800BAE0C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800BAE10: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x800BAE14: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAE18: nop

    // 0x800BAE1C: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800BAE20: nop

    // 0x800BAE24: bgtz        $t5, L_800BAE7C
    if (SIGNED(ctx->r13) > 0) {
        // 0x800BAE28: nop
    
            goto L_800BAE7C;
    }
    // 0x800BAE28: nop

    // 0x800BAE2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BAE30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BAE34: jal         0x8002A3A8
    // 0x800BAE38: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A3A8(rdram, ctx);
        goto after_2;
    // 0x800BAE38: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_2:
    // 0x800BAE3C: beq         $v0, $zero, L_800BAE7C
    if (ctx->r2 == 0) {
        // 0x800BAE40: nop
    
            goto L_800BAE7C;
    }
    // 0x800BAE40: nop

    // 0x800BAE44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BAE48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BAE4C: jal         0x8002A2EC
    // 0x800BAE50: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_3;
    // 0x800BAE50: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_3:
    // 0x800BAE54: beq         $v0, $zero, L_800BAE7C
    if (ctx->r2 == 0) {
        // 0x800BAE58: nop
    
            goto L_800BAE7C;
    }
    // 0x800BAE58: nop

    // 0x800BAE5C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAE60: nop

    // 0x800BAE64: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800BAE68: nop

    // 0x800BAE6C: sh          $t7, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r15;
    // 0x800BAE70: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAE74: nop

    // 0x800BAE78: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800BAE7C:
    // 0x800BAE7C: b           L_800BAE84
    // 0x800BAE80: nop

        goto L_800BAE84;
    // 0x800BAE80: nop

L_800BAE84:
    // 0x800BAE84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BAE88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BAE8C: jr          $ra
    // 0x800BAE90: nop

    return;
    // 0x800BAE90: nop

;}
RECOMP_FUNC void func_80069E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069E00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069E08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80069E0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80069E10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80069E14: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80069E18: jal         0x80069AD8
    // 0x80069E1C: nop

    func_80069AD8(rdram, ctx);
        goto after_0;
    // 0x80069E1C: nop

    after_0:
    // 0x80069E20: b           L_80069E28
    // 0x80069E24: nop

        goto L_80069E28;
    // 0x80069E24: nop

L_80069E28:
    // 0x80069E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069E2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80069E30: jr          $ra
    // 0x80069E34: nop

    return;
    // 0x80069E34: nop

;}
RECOMP_FUNC void Demo_HandleSetAnimTextures(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C950: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005C954: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005C958: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005C95C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005C960: lb          $t6, 0x4799($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4799);
    // 0x8005C964: nop

    // 0x8005C968: bne         $t6, $zero, L_8005CA8C
    if (ctx->r14 != 0) {
        // 0x8005C96C: nop
    
            goto L_8005CA8C;
    }
    // 0x8005C96C: nop

    // 0x8005C970: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005C974: lb          $t7, 0x4798($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X4798);
    // 0x8005C978: nop

    // 0x8005C97C: addiu       $t8, $t7, -0x9
    ctx->r24 = ADD32(ctx->r15, -0X9);
    // 0x8005C980: sltiu       $at, $t8, 0xD
    ctx->r1 = ctx->r24 < 0XD ? 1 : 0;
    // 0x8005C984: beq         $at, $zero, L_8005CA7C
    if (ctx->r1 == 0) {
        // 0x8005C988: nop
    
            goto L_8005CA7C;
    }
    // 0x8005C988: nop

    // 0x8005C98C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005C990: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8005C994: addu        $at, $at, $t8
    gpr jr_addend_8005C9A0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8005C998: lw          $t8, 0x28C0($at)
    ctx->r24 = ADD32(ctx->r1, 0X28C0);
    // 0x8005C99C: nop

    // 0x8005C9A0: jr          $t8
    // 0x8005C9A4: nop

    switch (jr_addend_8005C9A0 >> 2) {
        case 0: goto L_8005C9A8; break;
        case 1: goto L_8005CA7C; break;
        case 2: goto L_8005C9C8; break;
        case 3: goto L_8005CA7C; break;
        case 4: goto L_8005CA7C; break;
        case 5: goto L_8005C9EC; break;
        case 6: goto L_8005CA7C; break;
        case 7: goto L_8005CA7C; break;
        case 8: goto L_8005CA7C; break;
        case 9: goto L_8005CA7C; break;
        case 10: goto L_8005CA10; break;
        case 11: goto L_8005CA34; break;
        case 12: goto L_8005CA58; break;
        default: switch_error(__func__, 0x8005C9A0, 0x801028C0);
    }
    // 0x8005C9A4: nop

L_8005C9A8:
    // 0x8005C9A8: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005C9AC: addiu       $a3, $a3, 0x1E8C
    ctx->r7 = ADD32(ctx->r7, 0X1E8C);
    // 0x8005C9B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005C9B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005C9B8: jal         0x8001ABF4
    // 0x8005C9BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8005C9BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8005C9C0: b           L_8005CA84
    // 0x8005C9C4: nop

        goto L_8005CA84;
    // 0x8005C9C4: nop

L_8005C9C8:
    // 0x8005C9C8: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005C9CC: addiu       $a3, $a3, 0x1E8C
    ctx->r7 = ADD32(ctx->r7, 0X1E8C);
    // 0x8005C9D0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005C9D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005C9D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005C9DC: jal         0x8001ABF4
    // 0x8005C9E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8005C9E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8005C9E4: b           L_8005CA84
    // 0x8005C9E8: nop

        goto L_8005CA84;
    // 0x8005C9E8: nop

L_8005C9EC:
    // 0x8005C9EC: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005C9F0: addiu       $a3, $a3, 0x1E8C
    ctx->r7 = ADD32(ctx->r7, 0X1E8C);
    // 0x8005C9F4: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005C9F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005C9FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CA00: jal         0x8001ABF4
    // 0x8005CA04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8005CA04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8005CA08: b           L_8005CA84
    // 0x8005CA0C: nop

        goto L_8005CA84;
    // 0x8005CA0C: nop

L_8005CA10:
    // 0x8005CA10: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CA14: addiu       $a3, $a3, 0x1E8C
    ctx->r7 = ADD32(ctx->r7, 0X1E8C);
    // 0x8005CA18: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x8005CA1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CA20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CA24: jal         0x8001ABF4
    // 0x8005CA28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8005CA28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8005CA2C: b           L_8005CA84
    // 0x8005CA30: nop

        goto L_8005CA84;
    // 0x8005CA30: nop

L_8005CA34:
    // 0x8005CA34: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CA38: addiu       $a3, $a3, 0x1E8C
    ctx->r7 = ADD32(ctx->r7, 0X1E8C);
    // 0x8005CA3C: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x8005CA40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CA44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CA48: jal         0x8001ABF4
    // 0x8005CA4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x8005CA4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8005CA50: b           L_8005CA84
    // 0x8005CA54: nop

        goto L_8005CA84;
    // 0x8005CA54: nop

L_8005CA58:
    // 0x8005CA58: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CA5C: addiu       $a3, $a3, 0x1E8C
    ctx->r7 = ADD32(ctx->r7, 0X1E8C);
    // 0x8005CA60: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005CA64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CA68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CA6C: jal         0x8001ABF4
    // 0x8005CA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x8005CA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8005CA74: b           L_8005CA84
    // 0x8005CA78: nop

        goto L_8005CA84;
    // 0x8005CA78: nop

L_8005CA7C:
    // 0x8005CA7C: b           L_8005CA84
    // 0x8005CA80: nop

        goto L_8005CA84;
    // 0x8005CA80: nop

L_8005CA84:
    // 0x8005CA84: b           L_8005D2B8
    // 0x8005CA88: nop

        goto L_8005D2B8;
    // 0x8005CA88: nop

L_8005CA8C:
    // 0x8005CA8C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005CA90: lb          $t9, 0x4799($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4799);
    // 0x8005CA94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005CA98: bne         $t9, $at, L_8005CDE0
    if (ctx->r25 != ctx->r1) {
        // 0x8005CA9C: nop
    
            goto L_8005CDE0;
    }
    // 0x8005CA9C: nop

    // 0x8005CAA0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005CAA4: lb          $t0, 0x4798($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4798);
    // 0x8005CAA8: nop

    // 0x8005CAAC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8005CAB0: sltiu       $at, $t1, 0x9
    ctx->r1 = ctx->r9 < 0X9 ? 1 : 0;
    // 0x8005CAB4: beq         $at, $zero, L_8005CDD8
    if (ctx->r1 == 0) {
        // 0x8005CAB8: nop
    
            goto L_8005CDD8;
    }
    // 0x8005CAB8: nop

    // 0x8005CABC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8005CAC0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8005CAC4: addu        $at, $at, $t1
    gpr jr_addend_8005CAD0 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8005CAC8: lw          $t1, 0x28F4($at)
    ctx->r9 = ADD32(ctx->r1, 0X28F4);
    // 0x8005CACC: nop

    // 0x8005CAD0: jr          $t1
    // 0x8005CAD4: nop

    switch (jr_addend_8005CAD0 >> 2) {
        case 0: goto L_8005CAD8; break;
        case 1: goto L_8005CB30; break;
        case 2: goto L_8005CB8C; break;
        case 3: goto L_8005CC04; break;
        case 4: goto L_8005CC60; break;
        case 5: goto L_8005CC84; break;
        case 6: goto L_8005CCC4; break;
        case 7: goto L_8005CD20; break;
        case 8: goto L_8005CD7C; break;
        default: switch_error(__func__, 0x8005CAD0, 0x801028F4);
    }
    // 0x8005CAD4: nop

L_8005CAD8:
    // 0x8005CAD8: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CADC: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CAE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CAE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CAE8: jal         0x8001ABF4
    // 0x8005CAEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x8005CAEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8005CAF0: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CAF4: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CAF8: addiu       $a3, $a3, 0xE0
    ctx->r7 = ADD32(ctx->r7, 0XE0);
    // 0x8005CAFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CB00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CB04: jal         0x8001ABF4
    // 0x8005CB08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x8005CB08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8005CB0C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CB10: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CB14: addiu       $a3, $a3, 0x1C0
    ctx->r7 = ADD32(ctx->r7, 0X1C0);
    // 0x8005CB18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CB1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CB20: jal         0x8001ABF4
    // 0x8005CB24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x8005CB24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8005CB28: b           L_8005CDD8
    // 0x8005CB2C: nop

        goto L_8005CDD8;
    // 0x8005CB2C: nop

L_8005CB30:
    // 0x8005CB30: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CB34: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CB38: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005CB3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CB40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CB44: jal         0x8001ABF4
    // 0x8005CB48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x8005CB48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x8005CB4C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CB50: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CB54: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x8005CB58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CB5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CB60: jal         0x8001ABF4
    // 0x8005CB64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x8005CB64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x8005CB68: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CB6C: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CB70: addiu       $a3, $a3, 0x1DC
    ctx->r7 = ADD32(ctx->r7, 0X1DC);
    // 0x8005CB74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CB78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CB7C: jal         0x8001ABF4
    // 0x8005CB80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x8005CB80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x8005CB84: b           L_8005CDD8
    // 0x8005CB88: nop

        goto L_8005CDD8;
    // 0x8005CB88: nop

L_8005CB8C:
    // 0x8005CB8C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CB90: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CB94: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005CB98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CB9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CBA0: jal         0x8001ABF4
    // 0x8005CBA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_12;
    // 0x8005CBA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x8005CBA8: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CBAC: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CBB0: addiu       $a3, $a3, 0x118
    ctx->r7 = ADD32(ctx->r7, 0X118);
    // 0x8005CBB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CBB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CBBC: jal         0x8001ABF4
    // 0x8005CBC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_13;
    // 0x8005CBC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x8005CBC4: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CBC8: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CBCC: addiu       $a3, $a3, 0x1F8
    ctx->r7 = ADD32(ctx->r7, 0X1F8);
    // 0x8005CBD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CBD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CBD8: jal         0x8001ABF4
    // 0x8005CBDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_14;
    // 0x8005CBDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x8005CBE0: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CBE4: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CBE8: addiu       $a3, $a3, 0x2A0
    ctx->r7 = ADD32(ctx->r7, 0X2A0);
    // 0x8005CBEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CBF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005CBF4: jal         0x8001ABF4
    // 0x8005CBF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_15;
    // 0x8005CBF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x8005CBFC: b           L_8005CDD8
    // 0x8005CC00: nop

        goto L_8005CDD8;
    // 0x8005CC00: nop

L_8005CC04:
    // 0x8005CC04: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CC08: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CC0C: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005CC10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CC14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CC18: jal         0x8001ABF4
    // 0x8005CC1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_16;
    // 0x8005CC1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x8005CC20: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CC24: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CC28: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8005CC2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CC30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CC34: jal         0x8001ABF4
    // 0x8005CC38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_17;
    // 0x8005CC38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x8005CC3C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CC40: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CC44: addiu       $a3, $a3, 0x214
    ctx->r7 = ADD32(ctx->r7, 0X214);
    // 0x8005CC48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CC4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CC50: jal         0x8001ABF4
    // 0x8005CC54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_18;
    // 0x8005CC54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x8005CC58: b           L_8005CDD8
    // 0x8005CC5C: nop

        goto L_8005CDD8;
    // 0x8005CC5C: nop

L_8005CC60:
    // 0x8005CC60: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CC64: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CC68: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x8005CC6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CC70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CC74: jal         0x8001ABF4
    // 0x8005CC78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_19;
    // 0x8005CC78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x8005CC7C: b           L_8005CDD8
    // 0x8005CC80: nop

        goto L_8005CDD8;
    // 0x8005CC80: nop

L_8005CC84:
    // 0x8005CC84: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CC88: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CC8C: addiu       $a3, $a3, 0x150
    ctx->r7 = ADD32(ctx->r7, 0X150);
    // 0x8005CC90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CC94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CC98: jal         0x8001ABF4
    // 0x8005CC9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_20;
    // 0x8005CC9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
    // 0x8005CCA0: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CCA4: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CCA8: addiu       $a3, $a3, 0x230
    ctx->r7 = ADD32(ctx->r7, 0X230);
    // 0x8005CCAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CCB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CCB4: jal         0x8001ABF4
    // 0x8005CCB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_21;
    // 0x8005CCB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x8005CCBC: b           L_8005CDD8
    // 0x8005CCC0: nop

        goto L_8005CDD8;
    // 0x8005CCC0: nop

L_8005CCC4:
    // 0x8005CCC4: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CCC8: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CCCC: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x8005CCD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CCD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CCD8: jal         0x8001ABF4
    // 0x8005CCDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_22;
    // 0x8005CCDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x8005CCE0: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CCE4: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CCE8: addiu       $a3, $a3, 0x16C
    ctx->r7 = ADD32(ctx->r7, 0X16C);
    // 0x8005CCEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CCF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CCF4: jal         0x8001ABF4
    // 0x8005CCF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_23;
    // 0x8005CCF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x8005CCFC: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CD00: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CD04: addiu       $a3, $a3, 0x24C
    ctx->r7 = ADD32(ctx->r7, 0X24C);
    // 0x8005CD08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CD0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CD10: jal         0x8001ABF4
    // 0x8005CD14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_24;
    // 0x8005CD14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_24:
    // 0x8005CD18: b           L_8005CDD8
    // 0x8005CD1C: nop

        goto L_8005CDD8;
    // 0x8005CD1C: nop

L_8005CD20:
    // 0x8005CD20: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CD24: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CD28: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8005CD2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CD30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CD34: jal         0x8001ABF4
    // 0x8005CD38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_25;
    // 0x8005CD38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_25:
    // 0x8005CD3C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CD40: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CD44: addiu       $a3, $a3, 0x188
    ctx->r7 = ADD32(ctx->r7, 0X188);
    // 0x8005CD48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CD4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CD50: jal         0x8001ABF4
    // 0x8005CD54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_26;
    // 0x8005CD54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_26:
    // 0x8005CD58: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CD5C: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CD60: addiu       $a3, $a3, 0x268
    ctx->r7 = ADD32(ctx->r7, 0X268);
    // 0x8005CD64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CD68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CD6C: jal         0x8001ABF4
    // 0x8005CD70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_27;
    // 0x8005CD70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x8005CD74: b           L_8005CDD8
    // 0x8005CD78: nop

        goto L_8005CDD8;
    // 0x8005CD78: nop

L_8005CD7C:
    // 0x8005CD7C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CD80: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CD84: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    // 0x8005CD88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CD8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CD90: jal         0x8001ABF4
    // 0x8005CD94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_28;
    // 0x8005CD94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_28:
    // 0x8005CD98: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CD9C: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CDA0: addiu       $a3, $a3, 0x1A4
    ctx->r7 = ADD32(ctx->r7, 0X1A4);
    // 0x8005CDA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CDA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CDAC: jal         0x8001ABF4
    // 0x8005CDB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_29;
    // 0x8005CDB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_29:
    // 0x8005CDB4: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CDB8: addiu       $a3, $a3, 0x1758
    ctx->r7 = ADD32(ctx->r7, 0X1758);
    // 0x8005CDBC: addiu       $a3, $a3, 0x284
    ctx->r7 = ADD32(ctx->r7, 0X284);
    // 0x8005CDC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CDC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CDC8: jal         0x8001ABF4
    // 0x8005CDCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_30;
    // 0x8005CDCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_30:
    // 0x8005CDD0: b           L_8005CDD8
    // 0x8005CDD4: nop

        goto L_8005CDD8;
    // 0x8005CDD4: nop

L_8005CDD8:
    // 0x8005CDD8: b           L_8005D2B8
    // 0x8005CDDC: nop

        goto L_8005D2B8;
    // 0x8005CDDC: nop

L_8005CDE0:
    // 0x8005CDE0: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005CDE4: lb          $t2, 0x4799($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4799);
    // 0x8005CDE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005CDEC: beq         $t2, $at, L_8005CE00
    if (ctx->r10 == ctx->r1) {
        // 0x8005CDF0: nop
    
            goto L_8005CE00;
    }
    // 0x8005CDF0: nop

    // 0x8005CDF4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8005CDF8: bne         $t2, $at, L_8005CF18
    if (ctx->r10 != ctx->r1) {
        // 0x8005CDFC: nop
    
            goto L_8005CF18;
    }
    // 0x8005CDFC: nop

L_8005CE00:
    // 0x8005CE00: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8005CE04: lb          $s0, 0x4798($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X4798);
    // 0x8005CE08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005CE0C: beq         $s0, $at, L_8005CE28
    if (ctx->r16 == ctx->r1) {
        // 0x8005CE10: nop
    
            goto L_8005CE28;
    }
    // 0x8005CE10: nop

    // 0x8005CE14: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005CE18: beq         $s0, $at, L_8005CE9C
    if (ctx->r16 == ctx->r1) {
        // 0x8005CE1C: nop
    
            goto L_8005CE9C;
    }
    // 0x8005CE1C: nop

    // 0x8005CE20: b           L_8005CF10
    // 0x8005CE24: nop

        goto L_8005CF10;
    // 0x8005CE24: nop

L_8005CE28:
    // 0x8005CE28: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CE2C: addiu       $a3, $a3, 0x560
    ctx->r7 = ADD32(ctx->r7, 0X560);
    // 0x8005CE30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CE34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CE38: jal         0x8001ABF4
    // 0x8005CE3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_31;
    // 0x8005CE3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_31:
    // 0x8005CE40: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CE44: addiu       $a3, $a3, 0x5D0
    ctx->r7 = ADD32(ctx->r7, 0X5D0);
    // 0x8005CE48: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005CE4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CE50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CE54: jal         0x8001ABF4
    // 0x8005CE58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_32;
    // 0x8005CE58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_32:
    // 0x8005CE5C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CE60: addiu       $a3, $a3, 0x640
    ctx->r7 = ADD32(ctx->r7, 0X640);
    // 0x8005CE64: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005CE68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CE6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CE70: jal         0x8001ABF4
    // 0x8005CE74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_33;
    // 0x8005CE74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_33:
    // 0x8005CE78: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CE7C: addiu       $a3, $a3, 0x6B0
    ctx->r7 = ADD32(ctx->r7, 0X6B0);
    // 0x8005CE80: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005CE84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CE88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005CE8C: jal         0x8001ABF4
    // 0x8005CE90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_34;
    // 0x8005CE90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_34:
    // 0x8005CE94: b           L_8005CF10
    // 0x8005CE98: nop

        goto L_8005CF10;
    // 0x8005CE98: nop

L_8005CE9C:
    // 0x8005CE9C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CEA0: addiu       $a3, $a3, 0x560
    ctx->r7 = ADD32(ctx->r7, 0X560);
    // 0x8005CEA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CEA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CEAC: jal         0x8001ABF4
    // 0x8005CEB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_35;
    // 0x8005CEB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_35:
    // 0x8005CEB4: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CEB8: addiu       $a3, $a3, 0x5D0
    ctx->r7 = ADD32(ctx->r7, 0X5D0);
    // 0x8005CEBC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005CEC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CEC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CEC8: jal         0x8001ABF4
    // 0x8005CECC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_36;
    // 0x8005CECC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_36:
    // 0x8005CED0: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CED4: addiu       $a3, $a3, 0x640
    ctx->r7 = ADD32(ctx->r7, 0X640);
    // 0x8005CED8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005CEDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CEE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CEE4: jal         0x8001ABF4
    // 0x8005CEE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_37;
    // 0x8005CEE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_37:
    // 0x8005CEEC: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CEF0: addiu       $a3, $a3, 0x6B0
    ctx->r7 = ADD32(ctx->r7, 0X6B0);
    // 0x8005CEF4: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005CEF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CEFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005CF00: jal         0x8001ABF4
    // 0x8005CF04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_38;
    // 0x8005CF04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_38:
    // 0x8005CF08: b           L_8005CF10
    // 0x8005CF0C: nop

        goto L_8005CF10;
    // 0x8005CF0C: nop

L_8005CF10:
    // 0x8005CF10: b           L_8005D2B8
    // 0x8005CF14: nop

        goto L_8005D2B8;
    // 0x8005CF14: nop

L_8005CF18:
    // 0x8005CF18: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005CF1C: lb          $t3, 0x4799($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4799);
    // 0x8005CF20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005CF24: beq         $t3, $at, L_8005CF38
    if (ctx->r11 == ctx->r1) {
        // 0x8005CF28: nop
    
            goto L_8005CF38;
    }
    // 0x8005CF28: nop

    // 0x8005CF2C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8005CF30: bne         $t3, $at, L_8005D050
    if (ctx->r11 != ctx->r1) {
        // 0x8005CF34: nop
    
            goto L_8005D050;
    }
    // 0x8005CF34: nop

L_8005CF38:
    // 0x8005CF38: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8005CF3C: lb          $s0, 0x4798($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X4798);
    // 0x8005CF40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005CF44: beq         $s0, $at, L_8005CF60
    if (ctx->r16 == ctx->r1) {
        // 0x8005CF48: nop
    
            goto L_8005CF60;
    }
    // 0x8005CF48: nop

    // 0x8005CF4C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005CF50: beq         $s0, $at, L_8005CFD4
    if (ctx->r16 == ctx->r1) {
        // 0x8005CF54: nop
    
            goto L_8005CFD4;
    }
    // 0x8005CF54: nop

    // 0x8005CF58: b           L_8005D048
    // 0x8005CF5C: nop

        goto L_8005D048;
    // 0x8005CF5C: nop

L_8005CF60:
    // 0x8005CF60: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CF64: addiu       $a3, $a3, 0x560
    ctx->r7 = ADD32(ctx->r7, 0X560);
    // 0x8005CF68: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005CF6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CF70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005CF74: jal         0x8001ABF4
    // 0x8005CF78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_39;
    // 0x8005CF78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_39:
    // 0x8005CF7C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CF80: addiu       $a3, $a3, 0x5D0
    ctx->r7 = ADD32(ctx->r7, 0X5D0);
    // 0x8005CF84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CF88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005CF8C: jal         0x8001ABF4
    // 0x8005CF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_40;
    // 0x8005CF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_40:
    // 0x8005CF94: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CF98: addiu       $a3, $a3, 0x640
    ctx->r7 = ADD32(ctx->r7, 0X640);
    // 0x8005CF9C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005CFA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CFA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005CFA8: jal         0x8001ABF4
    // 0x8005CFAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_41;
    // 0x8005CFAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_41:
    // 0x8005CFB0: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CFB4: addiu       $a3, $a3, 0x6B0
    ctx->r7 = ADD32(ctx->r7, 0X6B0);
    // 0x8005CFB8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005CFBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CFC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005CFC4: jal         0x8001ABF4
    // 0x8005CFC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_42;
    // 0x8005CFC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_42:
    // 0x8005CFCC: b           L_8005D048
    // 0x8005CFD0: nop

        goto L_8005D048;
    // 0x8005CFD0: nop

L_8005CFD4:
    // 0x8005CFD4: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CFD8: addiu       $a3, $a3, 0x560
    ctx->r7 = ADD32(ctx->r7, 0X560);
    // 0x8005CFDC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005CFE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CFE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005CFE8: jal         0x8001ABF4
    // 0x8005CFEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_43;
    // 0x8005CFEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_43:
    // 0x8005CFF0: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005CFF4: addiu       $a3, $a3, 0x5D0
    ctx->r7 = ADD32(ctx->r7, 0X5D0);
    // 0x8005CFF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005CFFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D000: jal         0x8001ABF4
    // 0x8005D004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_44;
    // 0x8005D004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_44:
    // 0x8005D008: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D00C: addiu       $a3, $a3, 0x640
    ctx->r7 = ADD32(ctx->r7, 0X640);
    // 0x8005D010: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005D014: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D018: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D01C: jal         0x8001ABF4
    // 0x8005D020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_45;
    // 0x8005D020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_45:
    // 0x8005D024: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D028: addiu       $a3, $a3, 0x6B0
    ctx->r7 = ADD32(ctx->r7, 0X6B0);
    // 0x8005D02C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005D030: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D034: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005D038: jal         0x8001ABF4
    // 0x8005D03C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_46;
    // 0x8005D03C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_46:
    // 0x8005D040: b           L_8005D048
    // 0x8005D044: nop

        goto L_8005D048;
    // 0x8005D044: nop

L_8005D048:
    // 0x8005D048: b           L_8005D2B8
    // 0x8005D04C: nop

        goto L_8005D2B8;
    // 0x8005D04C: nop

L_8005D050:
    // 0x8005D050: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8005D054: lb          $t4, 0x4799($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4799);
    // 0x8005D058: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005D05C: beq         $t4, $at, L_8005D070
    if (ctx->r12 == ctx->r1) {
        // 0x8005D060: nop
    
            goto L_8005D070;
    }
    // 0x8005D060: nop

    // 0x8005D064: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8005D068: bne         $t4, $at, L_8005D188
    if (ctx->r12 != ctx->r1) {
        // 0x8005D06C: nop
    
            goto L_8005D188;
    }
    // 0x8005D06C: nop

L_8005D070:
    // 0x8005D070: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8005D074: lb          $s0, 0x4798($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X4798);
    // 0x8005D078: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005D07C: beq         $s0, $at, L_8005D098
    if (ctx->r16 == ctx->r1) {
        // 0x8005D080: nop
    
            goto L_8005D098;
    }
    // 0x8005D080: nop

    // 0x8005D084: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005D088: beq         $s0, $at, L_8005D10C
    if (ctx->r16 == ctx->r1) {
        // 0x8005D08C: nop
    
            goto L_8005D10C;
    }
    // 0x8005D08C: nop

    // 0x8005D090: b           L_8005D180
    // 0x8005D094: nop

        goto L_8005D180;
    // 0x8005D094: nop

L_8005D098:
    // 0x8005D098: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D09C: addiu       $a3, $a3, 0x560
    ctx->r7 = ADD32(ctx->r7, 0X560);
    // 0x8005D0A0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005D0A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D0A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005D0AC: jal         0x8001ABF4
    // 0x8005D0B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_47;
    // 0x8005D0B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_47:
    // 0x8005D0B4: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D0B8: addiu       $a3, $a3, 0x5D0
    ctx->r7 = ADD32(ctx->r7, 0X5D0);
    // 0x8005D0BC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005D0C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D0C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005D0C8: jal         0x8001ABF4
    // 0x8005D0CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_48;
    // 0x8005D0CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_48:
    // 0x8005D0D0: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D0D4: addiu       $a3, $a3, 0x640
    ctx->r7 = ADD32(ctx->r7, 0X640);
    // 0x8005D0D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D0DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D0E0: jal         0x8001ABF4
    // 0x8005D0E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_49;
    // 0x8005D0E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_49:
    // 0x8005D0E8: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D0EC: addiu       $a3, $a3, 0x6B0
    ctx->r7 = ADD32(ctx->r7, 0X6B0);
    // 0x8005D0F0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005D0F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D0F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D0FC: jal         0x8001ABF4
    // 0x8005D100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_50;
    // 0x8005D100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_50:
    // 0x8005D104: b           L_8005D180
    // 0x8005D108: nop

        goto L_8005D180;
    // 0x8005D108: nop

L_8005D10C:
    // 0x8005D10C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D110: addiu       $a3, $a3, 0x560
    ctx->r7 = ADD32(ctx->r7, 0X560);
    // 0x8005D114: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005D118: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D11C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005D120: jal         0x8001ABF4
    // 0x8005D124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_51;
    // 0x8005D124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_51:
    // 0x8005D128: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D12C: addiu       $a3, $a3, 0x5D0
    ctx->r7 = ADD32(ctx->r7, 0X5D0);
    // 0x8005D130: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005D134: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D138: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005D13C: jal         0x8001ABF4
    // 0x8005D140: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_52;
    // 0x8005D140: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_52:
    // 0x8005D144: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D148: addiu       $a3, $a3, 0x640
    ctx->r7 = ADD32(ctx->r7, 0X640);
    // 0x8005D14C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D154: jal         0x8001ABF4
    // 0x8005D158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_53;
    // 0x8005D158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_53:
    // 0x8005D15C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D160: addiu       $a3, $a3, 0x6B0
    ctx->r7 = ADD32(ctx->r7, 0X6B0);
    // 0x8005D164: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005D168: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D16C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D170: jal         0x8001ABF4
    // 0x8005D174: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_54;
    // 0x8005D174: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_54:
    // 0x8005D178: b           L_8005D180
    // 0x8005D17C: nop

        goto L_8005D180;
    // 0x8005D17C: nop

L_8005D180:
    // 0x8005D180: b           L_8005D2B8
    // 0x8005D184: nop

        goto L_8005D2B8;
    // 0x8005D184: nop

L_8005D188:
    // 0x8005D188: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8005D18C: lb          $t5, 0x4799($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4799);
    // 0x8005D190: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8005D194: beq         $t5, $at, L_8005D1A8
    if (ctx->r13 == ctx->r1) {
        // 0x8005D198: nop
    
            goto L_8005D1A8;
    }
    // 0x8005D198: nop

    // 0x8005D19C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8005D1A0: bne         $t5, $at, L_8005D2B8
    if (ctx->r13 != ctx->r1) {
        // 0x8005D1A4: nop
    
            goto L_8005D2B8;
    }
    // 0x8005D1A4: nop

L_8005D1A8:
    // 0x8005D1A8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8005D1AC: lb          $s0, 0x4798($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X4798);
    // 0x8005D1B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005D1B4: beq         $s0, $at, L_8005D1D0
    if (ctx->r16 == ctx->r1) {
        // 0x8005D1B8: nop
    
            goto L_8005D1D0;
    }
    // 0x8005D1B8: nop

    // 0x8005D1BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005D1C0: beq         $s0, $at, L_8005D244
    if (ctx->r16 == ctx->r1) {
        // 0x8005D1C4: nop
    
            goto L_8005D244;
    }
    // 0x8005D1C4: nop

    // 0x8005D1C8: b           L_8005D2B8
    // 0x8005D1CC: nop

        goto L_8005D2B8;
    // 0x8005D1CC: nop

L_8005D1D0:
    // 0x8005D1D0: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D1D4: addiu       $a3, $a3, 0x560
    ctx->r7 = ADD32(ctx->r7, 0X560);
    // 0x8005D1D8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005D1DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D1E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D1E4: jal         0x8001ABF4
    // 0x8005D1E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_55;
    // 0x8005D1E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_55:
    // 0x8005D1EC: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D1F0: addiu       $a3, $a3, 0x5D0
    ctx->r7 = ADD32(ctx->r7, 0X5D0);
    // 0x8005D1F4: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005D1F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D1FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005D200: jal         0x8001ABF4
    // 0x8005D204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_56;
    // 0x8005D204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_56:
    // 0x8005D208: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D20C: addiu       $a3, $a3, 0x640
    ctx->r7 = ADD32(ctx->r7, 0X640);
    // 0x8005D210: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005D214: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D218: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005D21C: jal         0x8001ABF4
    // 0x8005D220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_57;
    // 0x8005D220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_57:
    // 0x8005D224: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D228: addiu       $a3, $a3, 0x6B0
    ctx->r7 = ADD32(ctx->r7, 0X6B0);
    // 0x8005D22C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D234: jal         0x8001ABF4
    // 0x8005D238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_58;
    // 0x8005D238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_58:
    // 0x8005D23C: b           L_8005D2B8
    // 0x8005D240: nop

        goto L_8005D2B8;
    // 0x8005D240: nop

L_8005D244:
    // 0x8005D244: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D248: addiu       $a3, $a3, 0x560
    ctx->r7 = ADD32(ctx->r7, 0X560);
    // 0x8005D24C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8005D250: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D254: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D258: jal         0x8001ABF4
    // 0x8005D25C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_59;
    // 0x8005D25C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_59:
    // 0x8005D260: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D264: addiu       $a3, $a3, 0x5D0
    ctx->r7 = ADD32(ctx->r7, 0X5D0);
    // 0x8005D268: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8005D26C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D270: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005D274: jal         0x8001ABF4
    // 0x8005D278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_60;
    // 0x8005D278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_60:
    // 0x8005D27C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D280: addiu       $a3, $a3, 0x640
    ctx->r7 = ADD32(ctx->r7, 0X640);
    // 0x8005D284: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8005D288: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D28C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005D290: jal         0x8001ABF4
    // 0x8005D294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_61;
    // 0x8005D294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_61:
    // 0x8005D298: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x8005D29C: addiu       $a3, $a3, 0x6B0
    ctx->r7 = ADD32(ctx->r7, 0X6B0);
    // 0x8005D2A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005D2A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D2A8: jal         0x8001ABF4
    // 0x8005D2AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_62;
    // 0x8005D2AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_62:
    // 0x8005D2B0: b           L_8005D2B8
    // 0x8005D2B4: nop

        goto L_8005D2B8;
    // 0x8005D2B4: nop

L_8005D2B8:
    // 0x8005D2B8: b           L_8005D2C0
    // 0x8005D2BC: nop

        goto L_8005D2C0;
    // 0x8005D2BC: nop

L_8005D2C0:
    // 0x8005D2C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005D2C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005D2C8: jr          $ra
    // 0x8005D2CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005D2CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006A0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A0E4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006A0E8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8006A0EC: lb          $t6, 0x4801($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4801);
    // 0x8006A0F0: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8006A0F4: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x8006A0F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006A0FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006A100: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006A104: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8006A108: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8006A10C: lb          $t1, 0x4803($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X4803);
    // 0x8006A110: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006A114: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8006A118: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8006A11C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8006A120: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8006A124: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006A128: lbu         $t3, 0x4808($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X4808);
    // 0x8006A12C: nop

    // 0x8006A130: andi        $t4, $t3, 0xF
    ctx->r12 = ctx->r11 & 0XF;
    // 0x8006A134: sb          $t4, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r12;
    // 0x8006A138: lbu         $t5, 0x7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X7);
    // 0x8006A13C: nop

    // 0x8006A140: bne         $t5, $zero, L_8006A150
    if (ctx->r13 != 0) {
        // 0x8006A144: nop
    
            goto L_8006A150;
    }
    // 0x8006A144: nop

    // 0x8006A148: b           L_8006A160
    // 0x8006A14C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006A160;
    // 0x8006A14C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006A150:
    // 0x8006A150: b           L_8006A160
    // 0x8006A154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006A160;
    // 0x8006A154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A158: b           L_8006A160
    // 0x8006A15C: nop

        goto L_8006A160;
    // 0x8006A15C: nop

L_8006A160:
    // 0x8006A160: jr          $ra
    // 0x8006A164: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006A164: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Debug_FogEdit_Menu(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FEE34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FEE38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FEE3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEE40: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEE44: addiu       $a1, $a1, 0x44D0
    ctx->r5 = ADD32(ctx->r5, 0X44D0);
    // 0x800FEE48: jal         0x80036BE4
    // 0x800FEE4C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x800FEE4C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_0:
    // 0x800FEE50: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEE54: jal         0x8005F9EC
    // 0x800FEE58: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_1;
    // 0x800FEE58: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800FEE5C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEE60: lbu         $a2, 0x793A($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X793A);
    // 0x800FEE64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEE68: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEE6C: addiu       $a1, $a1, 0x44DC
    ctx->r5 = ADD32(ctx->r5, 0X44DC);
    // 0x800FEE70: jal         0x80036BE4
    // 0x800FEE74: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x800FEE74: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_2:
    // 0x800FEE78: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEE7C: jal         0x8005F9EC
    // 0x800FEE80: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_3;
    // 0x800FEE80: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x800FEE84: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEE88: lbu         $a2, 0x793E($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X793E);
    // 0x800FEE8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEE90: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEE94: addiu       $a1, $a1, 0x44F0
    ctx->r5 = ADD32(ctx->r5, 0X44F0);
    // 0x800FEE98: jal         0x80036BE4
    // 0x800FEE9C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x800FEE9C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_4:
    // 0x800FEEA0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEEA4: jal         0x8005F9EC
    // 0x800FEEA8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    Debug_PrintXY(rdram, ctx);
        goto after_5;
    // 0x800FEEA8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_5:
    // 0x800FEEAC: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEEB0: lbu         $a2, 0x7940($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7940);
    // 0x800FEEB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEEB8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEEBC: addiu       $a1, $a1, 0x4504
    ctx->r5 = ADD32(ctx->r5, 0X4504);
    // 0x800FEEC0: jal         0x80036BE4
    // 0x800FEEC4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_6;
    // 0x800FEEC4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_6:
    // 0x800FEEC8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEECC: jal         0x8005F9EC
    // 0x800FEED0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_7;
    // 0x800FEED0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_7:
    // 0x800FEED4: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEED8: lh          $a2, 0x7944($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X7944);
    // 0x800FEEDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEEE0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEEE4: addiu       $a1, $a1, 0x4518
    ctx->r5 = ADD32(ctx->r5, 0X4518);
    // 0x800FEEE8: jal         0x80036BE4
    // 0x800FEEEC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x800FEEEC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_8:
    // 0x800FEEF0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEEF4: jal         0x8005F9EC
    // 0x800FEEF8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    Debug_PrintXY(rdram, ctx);
        goto after_9;
    // 0x800FEEF8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_9:
    // 0x800FEEFC: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEF00: lh          $a2, 0x7948($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X7948);
    // 0x800FEF04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEF08: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEF0C: addiu       $a1, $a1, 0x452C
    ctx->r5 = ADD32(ctx->r5, 0X452C);
    // 0x800FEF10: jal         0x80036BE4
    // 0x800FEF14: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_10;
    // 0x800FEF14: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_10:
    // 0x800FEF18: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEF1C: jal         0x8005F9EC
    // 0x800FEF20: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    Debug_PrintXY(rdram, ctx);
        goto after_11;
    // 0x800FEF20: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_11:
    // 0x800FEF24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800FEF28: lwc1        $f4, 0x79C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X79C8);
    // 0x800FEF2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEF30: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800FEF34: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800FEF38: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x800FEF3C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEF40: addiu       $a1, $a1, 0x4540
    ctx->r5 = ADD32(ctx->r5, 0X4540);
    // 0x800FEF44: jal         0x80036BE4
    // 0x800FEF48: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_12;
    // 0x800FEF48: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_12:
    // 0x800FEF4C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEF50: jal         0x8005F9EC
    // 0x800FEF54: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    Debug_PrintXY(rdram, ctx);
        goto after_13;
    // 0x800FEF54: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_13:
    // 0x800FEF58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEF5C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEF60: addiu       $a1, $a1, 0x4554
    ctx->r5 = ADD32(ctx->r5, 0X4554);
    // 0x800FEF64: jal         0x80036BE4
    // 0x800FEF68: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_14;
    // 0x800FEF68: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_14:
    // 0x800FEF6C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800FEF70: lh          $a1, -0x1C0C($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X1C0C);
    // 0x800FEF74: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x800FEF78: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x800FEF7C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800FEF80: jal         0x8005F9EC
    // 0x800FEF84: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_15;
    // 0x800FEF84: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    after_15:
    // 0x800FEF88: b           L_800FEF90
    // 0x800FEF8C: nop

        goto L_800FEF90;
    // 0x800FEF8C: nop

L_800FEF90:
    // 0x800FEF90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FEF94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FEF98: jr          $ra
    // 0x800FEF9C: nop

    return;
    // 0x800FEF9C: nop

;}
RECOMP_FUNC void func_800F11F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F11F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800F11F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F11FC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800F1200: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800F1204: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F1208: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F120C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F1210: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F1214: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F1218: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F121C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F1220: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F1224: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F1228: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F122C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800F1230: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F1234: nop

    // 0x800F1238: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F123C: nop

    // 0x800F1240: bne         $t1, $zero, L_800F1288
    if (ctx->r9 != 0) {
        // 0x800F1244: nop
    
            goto L_800F1288;
    }
    // 0x800F1244: nop

    // 0x800F1248: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F124C: nop

    // 0x800F1250: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F1254: nop

    // 0x800F1258: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F125C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F1260: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1264: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1268: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F126C: jal         0x80029EF8
    // 0x800F1270: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800F1270: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x800F1274: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800F1278: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F127C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F1280: nop

    // 0x800F1284: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
L_800F1288:
    // 0x800F1288: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F128C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1290: jal         0x80028FA0
    // 0x800F1294: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800F1294: nop

    after_1:
    // 0x800F1298: beq         $v0, $zero, L_800F12B0
    if (ctx->r2 == 0) {
        // 0x800F129C: nop
    
            goto L_800F12B0;
    }
    // 0x800F129C: nop

    // 0x800F12A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F12A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F12A8: jal         0x8002B114
    // 0x800F12AC: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x800F12AC: nop

    after_2:
L_800F12B0:
    // 0x800F12B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F12B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F12B8: jal         0x8002A8B4
    // 0x800F12BC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800F12BC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_3:
    // 0x800F12C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F12C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F12C8: jal         0x80029C40
    // 0x800F12CC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800F12CC: nop

    after_4:
    // 0x800F12D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F12D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F12D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F12DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F12E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F12E4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800F12E8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F12EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800F12F0: jal         0x80029018
    // 0x800F12F4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800F12F4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x800F12F8: beq         $v0, $zero, L_800F133C
    if (ctx->r2 == 0) {
        // 0x800F12FC: nop
    
            goto L_800F133C;
    }
    // 0x800F12FC: nop

    // 0x800F1300: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F1304: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F1308: nop

    // 0x800F130C: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
    // 0x800F1310: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F1314: nop

    // 0x800F1318: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800F131C: nop

    // 0x800F1320: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800F1324: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F1328: nop

    // 0x800F132C: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800F1330: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F1334: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800F1338: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
L_800F133C:
    // 0x800F133C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F1340: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F1344: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x800F1348: nop

    // 0x800F134C: bne         $t3, $at, L_800F13A4
    if (ctx->r11 != ctx->r1) {
        // 0x800F1350: nop
    
            goto L_800F13A4;
    }
    // 0x800F1350: nop

    // 0x800F1354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F135C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800F1360: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800F1364: jal         0x8002A0D0
    // 0x800F1368: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_6;
    // 0x800F1368: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    after_6:
    // 0x800F136C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F1370: bne         $v0, $at, L_800F139C
    if (ctx->r2 != ctx->r1) {
        // 0x800F1374: nop
    
            goto L_800F139C;
    }
    // 0x800F1374: nop

    // 0x800F1378: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F137C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F1380: sh          $t4, 0xC2($t2)
    MEM_H(0XC2, ctx->r10) = ctx->r12;
    // 0x800F1384: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F1388: nop

    // 0x800F138C: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x800F1390: nop

    // 0x800F1394: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800F1398: sb          $t7, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r15;
L_800F139C:
    // 0x800F139C: b           L_800F1410
    // 0x800F13A0: nop

        goto L_800F1410;
    // 0x800F13A0: nop

L_800F13A4:
    // 0x800F13A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F13A8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F13AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F13B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F13B4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800F13B8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800F13BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F13C0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800F13C4: jal         0x800295C0
    // 0x800F13C8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x800F13C8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x800F13CC: beq         $v0, $zero, L_800F13E4
    if (ctx->r2 == 0) {
        // 0x800F13D0: nop
    
            goto L_800F13E4;
    }
    // 0x800F13D0: nop

    // 0x800F13D4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800F13D8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F13DC: b           L_800F13F4
    // 0x800F13E0: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
        goto L_800F13F4;
    // 0x800F13E0: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
L_800F13E4:
    // 0x800F13E4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800F13E8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F13EC: nop

    // 0x800F13F0: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
L_800F13F4:
    // 0x800F13F4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F13F8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800F13FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F1400: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800F1404: nop

    // 0x800F1408: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800F140C: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
L_800F1410:
    // 0x800F1410: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F1414: nop

    // 0x800F1418: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800F141C: nop

    // 0x800F1420: slti        $at, $t3, 0x3D
    ctx->r1 = SIGNED(ctx->r11) < 0X3D ? 1 : 0;
    // 0x800F1424: bne         $at, $zero, L_800F1444
    if (ctx->r1 != 0) {
        // 0x800F1428: nop
    
            goto L_800F1444;
    }
    // 0x800F1428: nop

    // 0x800F142C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F1430: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800F1434: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800F1438: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F143C: b           L_800F145C
    // 0x800F1440: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_800F145C;
    // 0x800F1440: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800F1444:
    // 0x800F1444: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F1448: nop

    // 0x800F144C: lh          $t5, 0xA6($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XA6);
    // 0x800F1450: nop

    // 0x800F1454: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x800F1458: sh          $t8, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r24;
L_800F145C:
    // 0x800F145C: b           L_800F1464
    // 0x800F1460: nop

        goto L_800F1464;
    // 0x800F1460: nop

L_800F1464:
    // 0x800F1464: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F1468: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800F146C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F1470: jr          $ra
    // 0x800F1474: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800F1474: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800C2624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2624: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C2628: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C262C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C2630: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C2634: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C2638: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C263C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2640: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C2644: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2648: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C264C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C2650: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C2654: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C2658: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C265C: nop

    // 0x800C2660: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C2664: nop

    // 0x800C2668: bne         $t1, $zero, L_800C26C4
    if (ctx->r9 != 0) {
        // 0x800C266C: nop
    
            goto L_800C26C4;
    }
    // 0x800C266C: nop

    // 0x800C2670: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C2674: nop

    // 0x800C2678: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C267C: nop

    // 0x800C2680: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C2684: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C2688: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C268C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C2690: nop

    // 0x800C2694: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C2698: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C269C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C26A0: lui         $a1, 0x4189
    ctx->r5 = S32(0X4189 << 16);
    // 0x800C26A4: lui         $a2, 0x4009
    ctx->r6 = S32(0X4009 << 16);
    // 0x800C26A8: ori         $a2, $a2, 0x2492
    ctx->r6 = ctx->r6 | 0X2492;
    // 0x800C26AC: jal         0x80029EF8
    // 0x800C26B0: ori         $a1, $a1, 0x2492
    ctx->r5 = ctx->r5 | 0X2492;
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800C26B0: ori         $a1, $a1, 0x2492
    ctx->r5 = ctx->r5 | 0X2492;
    after_0:
    // 0x800C26B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C26B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C26BC: jal         0x8001BBDC
    // 0x800C26C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800C26C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800C26C4:
    // 0x800C26C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C26C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C26CC: jal         0x8002A640
    // 0x800C26D0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_2;
    // 0x800C26D0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x800C26D4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800C26D8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800C26DC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C26E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C26E4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C26E8: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x800C26EC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C26F0: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800C26F4: jal         0x80015538
    // 0x800C26F8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800C26F8: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_3:
    // 0x800C26FC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C2700: nop

    // 0x800C2704: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x800C2708: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C270C: nop

    // 0x800C2710: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800C2714: nop

    // 0x800C2718: swc1        $f8, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f8.u32l;
    // 0x800C271C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C2720: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C2724: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2728: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C272C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C2730: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C2734: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C2738: jal         0x80029F58
    // 0x800C273C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800C273C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x800C2740: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C2744: bne         $v0, $at, L_800C2798
    if (ctx->r2 != ctx->r1) {
        // 0x800C2748: nop
    
            goto L_800C2798;
    }
    // 0x800C2748: nop

    // 0x800C274C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2750: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2754: jal         0x8001B44C
    // 0x800C2758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x800C2758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800C275C: beq         $v0, $zero, L_800C2798
    if (ctx->r2 == 0) {
        // 0x800C2760: nop
    
            goto L_800C2798;
    }
    // 0x800C2760: nop

    // 0x800C2764: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C2768: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C276C: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
    // 0x800C2770: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2774: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2778: jal         0x8001BBDC
    // 0x800C277C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x800C277C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x800C2780: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C2784: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800C2788: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800C278C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C2790: nop

    // 0x800C2794: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800C2798:
    // 0x800C2798: b           L_800C27A0
    // 0x800C279C: nop

        goto L_800C27A0;
    // 0x800C279C: nop

L_800C27A0:
    // 0x800C27A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C27A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C27A8: jr          $ra
    // 0x800C27AC: nop

    return;
    // 0x800C27AC: nop

;}
RECOMP_FUNC void func_80082AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082AB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80082AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80082ABC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80082AC0: lh          $t6, -0x1BD0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1BD0);
    // 0x80082AC4: nop

    // 0x80082AC8: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80082ACC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80082AD0: lh          $t7, -0x1BCE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1BCE);
    // 0x80082AD4: nop

    // 0x80082AD8: sh          $t7, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r15;
    // 0x80082ADC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80082AE0: lh          $t8, -0x1BCC($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1BCC);
    // 0x80082AE4: nop

    // 0x80082AE8: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x80082AEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082AF0: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x80082AF4: nop

    // 0x80082AF8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80082AFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B00: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x80082B04: nop

    // 0x80082B08: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80082B0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B10: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x80082B14: nop

    // 0x80082B18: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80082B1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B20: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x80082B24: nop

    // 0x80082B28: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80082B2C: addiu       $t9, $zero, 0xB0
    ctx->r25 = ADD32(0, 0XB0);
    // 0x80082B30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B34: sw          $t9, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r25;
    // 0x80082B38: jal         0x80081C50
    // 0x80082B3C: nop

    func_80081C50(rdram, ctx);
        goto after_0;
    // 0x80082B3C: nop

    after_0:
    // 0x80082B40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B44: sb          $zero, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = 0;
    // 0x80082B48: jal         0x800824A8
    // 0x80082B4C: nop

    func_800824A8(rdram, ctx);
        goto after_1;
    // 0x80082B4C: nop

    after_1:
    // 0x80082B50: lh          $t0, 0x18($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X18);
    // 0x80082B54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B58: sh          $t0, -0x1BD0($at)
    MEM_H(-0X1BD0, ctx->r1) = ctx->r8;
    // 0x80082B5C: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x80082B60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B64: sh          $t1, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r9;
    // 0x80082B68: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x80082B6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B70: sh          $t2, -0x1BCC($at)
    MEM_H(-0X1BCC, ctx->r1) = ctx->r10;
    // 0x80082B74: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80082B78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B7C: swc1        $f16, -0x1BC8($at)
    MEM_W(-0X1BC8, ctx->r1) = ctx->f16.u32l;
    // 0x80082B80: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80082B84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B88: swc1        $f18, -0x1BC4($at)
    MEM_W(-0X1BC4, ctx->r1) = ctx->f18.u32l;
    // 0x80082B8C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80082B90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082B94: swc1        $f4, -0x1BC0($at)
    MEM_W(-0X1BC0, ctx->r1) = ctx->f4.u32l;
    // 0x80082B98: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80082B9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80082BA0: swc1        $f6, -0x1BBC($at)
    MEM_W(-0X1BBC, ctx->r1) = ctx->f6.u32l;
    // 0x80082BA4: b           L_80082BAC
    // 0x80082BA8: nop

        goto L_80082BAC;
    // 0x80082BA8: nop

L_80082BAC:
    // 0x80082BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80082BB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80082BB4: jr          $ra
    // 0x80082BB8: nop

    return;
    // 0x80082BB8: nop

;}
RECOMP_FUNC void func_8009E954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E954: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009E958: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8009E95C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009E960: bne         $t6, $at, L_8009E9F0
    if (ctx->r14 != ctx->r1) {
        // 0x8009E964: nop
    
            goto L_8009E9F0;
    }
    // 0x8009E964: nop

    // 0x8009E968: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8009E96C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x8009E970: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8009E974: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8009E978: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009E97C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009E980: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009E984: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8009E988: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8009E98C: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8009E990: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009E994: bne         $t9, $at, L_8009E9F0
    if (ctx->r25 != ctx->r1) {
        // 0x8009E998: nop
    
            goto L_8009E9F0;
    }
    // 0x8009E998: nop

    // 0x8009E99C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8009E9A0: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x8009E9A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009E9A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8009E9AC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009E9B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8009E9B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009E9B8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8009E9BC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8009E9C0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8009E9C4: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x8009E9C8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8009E9CC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x8009E9D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009E9D4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8009E9D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009E9DC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8009E9E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009E9E4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8009E9E8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8009E9EC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8009E9F0:
    // 0x8009E9F0: jr          $ra
    // 0x8009E9F4: nop

    return;
    // 0x8009E9F4: nop

    // 0x8009E9F8: jr          $ra
    // 0x8009E9FC: nop

    return;
    // 0x8009E9FC: nop

;}
RECOMP_FUNC void func_80081024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081024: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80081028: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008102C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80081030: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80081034: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80081038: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008103C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80081040: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80081044: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80081048: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008104C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80081050: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80081054: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80081058: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008105C: nop

    // 0x80081060: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80081064: nop

    // 0x80081068: bne         $t1, $zero, L_800810C8
    if (ctx->r9 != 0) {
        // 0x8008106C: nop
    
            goto L_800810C8;
    }
    // 0x8008106C: nop

    // 0x80081070: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80081074: nop

    // 0x80081078: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8008107C: nop

    // 0x80081080: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80081084: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80081088: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8008108C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80081090: addiu       $t5, $t5, 0x6EDC
    ctx->r13 = ADD32(ctx->r13, 0X6EDC);
    // 0x80081094: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80081098: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8008109C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800810A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800810A4: jal         0x8001C0EC
    // 0x800810A8: addiu       $a3, $zero, 0x29
    ctx->r7 = ADD32(0, 0X29);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800810A8: addiu       $a3, $zero, 0x29
    ctx->r7 = ADD32(0, 0X29);
    after_0:
    // 0x800810AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800810B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800810B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800810B8: addiu       $a2, $zero, 0x6A
    ctx->r6 = ADD32(0, 0X6A);
    // 0x800810BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800810C0: jal         0x800175F0
    // 0x800810C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800810C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800810C8:
    // 0x800810C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800810CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800810D0: jal         0x8001B44C
    // 0x800810D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x800810D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800810D8: beq         $v0, $zero, L_800810F8
    if (ctx->r2 == 0) {
        // 0x800810DC: nop
    
            goto L_800810F8;
    }
    // 0x800810DC: nop

    // 0x800810E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800810E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800810E8: jal         0x8001A928
    // 0x800810EC: nop

    func_8001A928(rdram, ctx);
        goto after_3;
    // 0x800810EC: nop

    after_3:
    // 0x800810F0: b           L_80081110
    // 0x800810F4: nop

        goto L_80081110;
    // 0x800810F4: nop

L_800810F8:
    // 0x800810F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800810FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80081100: jal         0x8001CD20
    // 0x80081104: nop

    func_8001CD20(rdram, ctx);
        goto after_4;
    // 0x80081104: nop

    after_4:
    // 0x80081108: b           L_80081110
    // 0x8008110C: nop

        goto L_80081110;
    // 0x8008110C: nop

L_80081110:
    // 0x80081110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80081114: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80081118: jr          $ra
    // 0x8008111C: nop

    return;
    // 0x8008111C: nop

;}
RECOMP_FUNC void func_800991D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800991D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800991D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800991D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800991DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800991E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800991E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800991E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800991EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800991F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800991F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800991F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800991FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80099200: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80099204: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80099208: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8009920C: nop

    // 0x80099210: bne         $t0, $zero, L_800993A4
    if (ctx->r8 != 0) {
        // 0x80099214: nop
    
            goto L_800993A4;
    }
    // 0x80099214: nop

    // 0x80099218: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009921C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80099220: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80099224: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80099228: nop

    // 0x8009922C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80099230: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80099234: nop

    // 0x80099238: sh          $zero, 0x108($t4)
    MEM_H(0X108, ctx->r12) = 0;
    // 0x8009923C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80099240:
    // 0x80099240: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80099244: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80099248: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8009924C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80099250: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80099254: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80099258: beq         $t9, $at, L_80099284
    if (ctx->r25 == ctx->r1) {
        // 0x8009925C: sw          $t9, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r25;
            goto L_80099284;
    }
    // 0x8009925C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80099260: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80099264: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80099268: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009926C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80099270: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80099274: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80099278: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009927C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80099280: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80099284:
    // 0x80099284: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80099288: nop

    // 0x8009928C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80099290: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x80099294: bne         $at, $zero, L_80099240
    if (ctx->r1 != 0) {
        // 0x80099298: sw          $t3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r11;
            goto L_80099240;
    }
    // 0x80099298: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8009929C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800992A0: nop

    // 0x800992A4: lh          $t6, 0xE8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XE8);
    // 0x800992A8: nop

    // 0x800992AC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800992B0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800992B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800992B8: beq         $t5, $at, L_800992DC
    if (ctx->r13 == ctx->r1) {
        // 0x800992BC: nop
    
            goto L_800992DC;
    }
    // 0x800992BC: nop

    // 0x800992C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800992C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800992C8: jal         0x800281A4
    // 0x800992CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800992CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800992D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800992D4: jal         0x8002B0E4
    // 0x800992D8: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800992D8: nop

    after_1:
L_800992DC:
    // 0x800992DC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800992E0: nop

    // 0x800992E4: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x800992E8: nop

    // 0x800992EC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800992F0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800992F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800992F8: beq         $t9, $at, L_8009931C
    if (ctx->r25 == ctx->r1) {
        // 0x800992FC: nop
    
            goto L_8009931C;
    }
    // 0x800992FC: nop

    // 0x80099300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099308: jal         0x800281A4
    // 0x8009930C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x8009930C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80099310: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80099314: jal         0x8002B0E4
    // 0x80099318: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x80099318: nop

    after_3:
L_8009931C:
    // 0x8009931C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80099320: nop

    // 0x80099324: lh          $t1, 0xEC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEC);
    // 0x80099328: nop

    // 0x8009932C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80099330: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80099334: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80099338: beq         $t2, $at, L_8009935C
    if (ctx->r10 == ctx->r1) {
        // 0x8009933C: nop
    
            goto L_8009935C;
    }
    // 0x8009933C: nop

    // 0x80099340: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099344: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099348: jal         0x800281A4
    // 0x8009934C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800281A4(rdram, ctx);
        goto after_4;
    // 0x8009934C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x80099350: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80099354: jal         0x8002B0E4
    // 0x80099358: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x80099358: nop

    after_5:
L_8009935C:
    // 0x8009935C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80099360: nop

    // 0x80099364: lh          $t4, 0xEE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEE);
    // 0x80099368: nop

    // 0x8009936C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80099370: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80099374: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80099378: beq         $t6, $at, L_8009939C
    if (ctx->r14 == ctx->r1) {
        // 0x8009937C: nop
    
            goto L_8009939C;
    }
    // 0x8009937C: nop

    // 0x80099380: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099384: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099388: jal         0x800281A4
    // 0x8009938C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800281A4(rdram, ctx);
        goto after_6;
    // 0x8009938C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x80099390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80099394: jal         0x8002B0E4
    // 0x80099398: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x80099398: nop

    after_7:
L_8009939C:
    // 0x8009939C: b           L_8009943C
    // 0x800993A0: nop

        goto L_8009943C;
    // 0x800993A0: nop

L_800993A4:
    // 0x800993A4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800993A8: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x800993AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800993B0: bne         $t5, $at, L_8009943C
    if (ctx->r13 != ctx->r1) {
        // 0x800993B4: nop
    
            goto L_8009943C;
    }
    // 0x800993B4: nop

    // 0x800993B8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800993BC: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x800993C0: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x800993C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800993C8:
    // 0x800993C8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800993CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800993D0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x800993D4: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x800993D8: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x800993DC: nop

    // 0x800993E0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800993E4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800993E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800993EC: beq         $t4, $at, L_8009941C
    if (ctx->r12 == ctx->r1) {
        // 0x800993F0: nop
    
            goto L_8009941C;
    }
    // 0x800993F0: nop

    // 0x800993F4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800993F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800993FC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80099400: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80099404: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80099408: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8009940C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80099410: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80099414: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x80099418: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
L_8009941C:
    // 0x8009941C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80099420: nop

    // 0x80099424: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x80099428: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8009942C: bne         $at, $zero, L_800993C8
    if (ctx->r1 != 0) {
        // 0x80099430: sw          $t0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r8;
            goto L_800993C8;
    }
    // 0x80099430: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80099434: b           L_8009943C
    // 0x80099438: nop

        goto L_8009943C;
    // 0x80099438: nop

L_8009943C:
    // 0x8009943C: b           L_80099444
    // 0x80099440: nop

        goto L_80099444;
    // 0x80099440: nop

L_80099444:
    // 0x80099444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80099448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009944C: jr          $ra
    // 0x80099450: nop

    return;
    // 0x80099450: nop

;}
