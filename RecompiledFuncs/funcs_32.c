#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80098E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098E60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80098E64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80098E68: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80098E6C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80098E70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80098E74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80098E78: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80098E7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80098E80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80098E84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80098E88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80098E8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80098E90: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80098E94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80098E98: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80098E9C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80098EA0: nop

    // 0x80098EA4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80098EA8: nop

    // 0x80098EAC: bne         $t1, $zero, L_80098EF8
    if (ctx->r9 != 0) {
        // 0x80098EB0: nop
    
            goto L_80098EF8;
    }
    // 0x80098EB0: nop

    // 0x80098EB4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80098EB8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80098EBC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80098EC0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80098EC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80098EC8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80098ECC: nop

    // 0x80098ED0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80098ED4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80098ED8: nop

    // 0x80098EDC: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80098EE0: nop

    // 0x80098EE4: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80098EE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80098EEC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80098EF0: nop

    // 0x80098EF4: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
L_80098EF8:
    // 0x80098EF8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80098EFC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80098F00: lwc1        $f10, 0xC($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80098F04: lwc1        $f19, 0x48D8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X48D8);
    // 0x80098F08: lwc1        $f18, 0x48DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X48DC);
    // 0x80098F0C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80098F10: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80098F14: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80098F18: swc1        $f6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f6.u32l;
    // 0x80098F1C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80098F20: nop

    // 0x80098F24: lwc1        $f20, 0xC($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80098F28: nop

    // 0x80098F2C: swc1        $f20, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f20.u32l;
    // 0x80098F30: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80098F34: nop

    // 0x80098F38: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x80098F3C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80098F40: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80098F44: nop

    // 0x80098F48: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80098F4C: nop

    // 0x80098F50: slti        $at, $t1, 0x3C
    ctx->r1 = SIGNED(ctx->r9) < 0X3C ? 1 : 0;
    // 0x80098F54: bne         $at, $zero, L_80098F68
    if (ctx->r1 != 0) {
        // 0x80098F58: nop
    
            goto L_80098F68;
    }
    // 0x80098F58: nop

    // 0x80098F5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80098F60: b           L_80098F80
    // 0x80098F64: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
        goto L_80098F80;
    // 0x80098F64: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
L_80098F68:
    // 0x80098F68: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80098F6C: nop

    // 0x80098F70: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80098F74: nop

    // 0x80098F78: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80098F7C: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
L_80098F80:
    // 0x80098F80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098F84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098F88: jal         0x80029D8C
    // 0x80098F8C: nop

    func_80029D8C(rdram, ctx);
        goto after_0;
    // 0x80098F8C: nop

    after_0:
    // 0x80098F90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80098F94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80098F98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098F9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098FA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80098FA4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80098FA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80098FAC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80098FB0: jal         0x80029018
    // 0x80098FB4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_1;
    // 0x80098FB4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80098FB8: beq         $v0, $zero, L_80098FC8
    if (ctx->r2 == 0) {
        // 0x80098FBC: nop
    
            goto L_80098FC8;
    }
    // 0x80098FBC: nop

    // 0x80098FC0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80098FC4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
L_80098FC8:
    // 0x80098FC8: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80098FCC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80098FD0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80098FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098FD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098FDC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80098FE0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80098FE4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80098FE8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80098FEC: jal         0x800295C0
    // 0x80098FF0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x80098FF0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80098FF4: beq         $v0, $zero, L_80099004
    if (ctx->r2 == 0) {
        // 0x80098FF8: nop
    
            goto L_80099004;
    }
    // 0x80098FF8: nop

    // 0x80098FFC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80099000: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_80099004:
    // 0x80099004: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80099008: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009900C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80099010: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099014: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099018: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8009901C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80099020: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80099024: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80099028: jal         0x800295C0
    // 0x8009902C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x8009902C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80099030: beq         $v0, $zero, L_80099040
    if (ctx->r2 == 0) {
        // 0x80099034: nop
    
            goto L_80099040;
    }
    // 0x80099034: nop

    // 0x80099038: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8009903C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
L_80099040:
    // 0x80099040: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80099044: nop

    // 0x80099048: beq         $t9, $zero, L_80099068
    if (ctx->r25 == 0) {
        // 0x8009904C: nop
    
            goto L_80099068;
    }
    // 0x8009904C: nop

    // 0x80099050: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099054: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099058: jal         0x8002B0E4
    // 0x8009905C: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x8009905C: nop

    after_4:
    // 0x80099060: b           L_80099070
    // 0x80099064: nop

        goto L_80099070;
    // 0x80099064: nop

L_80099068:
    // 0x80099068: b           L_80099070
    // 0x8009906C: nop

        goto L_80099070;
    // 0x8009906C: nop

L_80099070:
    // 0x80099070: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80099074: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80099078: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009907C: jr          $ra
    // 0x80099080: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80099080: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8008DC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DC8C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008DC90: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008DC94: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008DC98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008DC9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008DCA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008DCA4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008DCA8: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008DCAC: nop

    // 0x8008DCB0: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008DCB4: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008DCB8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008DCBC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008DCC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008DCC4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008DCC8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008DCCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008DCD0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008DCD4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008DCD8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008DCDC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008DCE0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008DCE4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008DCE8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008DCEC: swc1        $f10, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f10.u32l;
    // 0x8008DCF0: lh          $t2, 0x4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X4);
    // 0x8008DCF4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008DCF8: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8008DCFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008DD00: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008DD04: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8008DD08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008DD0C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8008DD10: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008DD14: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008DD18: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008DD1C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008DD20: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008DD24: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008DD28: swc1        $f6, 0x419C($at)
    MEM_W(0X419C, ctx->r1) = ctx->f6.u32l;
    // 0x8008DD2C: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008DD30: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008DD34: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8008DD38: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008DD3C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8008DD40: sh          $t5, 0x4D18($at)
    MEM_H(0X4D18, ctx->r1) = ctx->r13;
    // 0x8008DD44: b           L_8008DD4C
    // 0x8008DD48: nop

        goto L_8008DD4C;
    // 0x8008DD48: nop

L_8008DD4C:
    // 0x8008DD4C: jr          $ra
    // 0x8008DD50: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008DD50: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80090F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090F48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090F4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090F50: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090F54: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090F58: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090F5C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090F60: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090F64: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090F68: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090F6C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090F70: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090F74: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090F78: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090F7C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090F80: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090F84: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090F88: addiu       $a1, $a1, 0x14E0
    ctx->r5 = ADD32(ctx->r5, 0X14E0);
    // 0x80090F8C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090F90: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090F94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090F98: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090F9C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090FA0: jal         0x80027464
    // 0x80090FA4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090FA4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090FA8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090FAC: b           L_80090FB4
    // 0x80090FB0: nop

        goto L_80090FB4;
    // 0x80090FB0: nop

L_80090FB4:
    // 0x80090FB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090FB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090FBC: jr          $ra
    // 0x80090FC0: nop

    return;
    // 0x80090FC0: nop

;}
RECOMP_FUNC void func_800A3034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3034: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A3038: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800A303C: nop

    // 0x800A3040: beq         $t6, $zero, L_800A305C
    if (ctx->r14 == 0) {
        // 0x800A3044: nop
    
            goto L_800A305C;
    }
    // 0x800A3044: nop

    // 0x800A3048: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A304C: beq         $t6, $at, L_800A305C
    if (ctx->r14 == ctx->r1) {
        // 0x800A3050: nop
    
            goto L_800A305C;
    }
    // 0x800A3050: nop

    // 0x800A3054: jr          $ra
    // 0x800A3058: nop

    return;
    // 0x800A3058: nop

L_800A305C:
    // 0x800A305C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800A3060: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800A3064: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3068: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A306C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A3070: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A3074: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A3078: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A307C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A3080: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800A3084: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800A3088: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800A308C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800A3090: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A3094: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A3098: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A309C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A30A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A30A4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A30A8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A30AC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A30B0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800A30B4: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800A30B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A30BC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A30C0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A30C4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A30C8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A30CC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A30D0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A30D4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800A30D8: jr          $ra
    // 0x800A30DC: nop

    return;
    // 0x800A30DC: nop

    // 0x800A30E0: jr          $ra
    // 0x800A30E4: nop

    return;
    // 0x800A30E4: nop

;}
RECOMP_FUNC void func_80092568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092568: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009256C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092570: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092574: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092578: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009257C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092580: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092584: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092588: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009258C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092590: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092594: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092598: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009259C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800925A0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800925A4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800925A8: addiu       $a1, $a1, 0x16CC
    ctx->r5 = ADD32(ctx->r5, 0X16CC);
    // 0x800925AC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800925B0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800925B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800925B8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800925BC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800925C0: jal         0x80027464
    // 0x800925C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800925C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800925C8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800925CC: b           L_800925D4
    // 0x800925D0: nop

        goto L_800925D4;
    // 0x800925D0: nop

L_800925D4:
    // 0x800925D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800925D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800925DC: jr          $ra
    // 0x800925E0: nop

    return;
    // 0x800925E0: nop

;}
RECOMP_FUNC void func_800B49C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B49C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B49C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B49C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B49CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B49D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B49D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B49D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B49DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B49E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B49E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B49E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B49EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B49F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B49F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B49F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B49FC: nop

    // 0x800B4A00: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B4A04: nop

    // 0x800B4A08: bne         $t1, $zero, L_800B4A58
    if (ctx->r9 != 0) {
        // 0x800B4A0C: nop
    
            goto L_800B4A58;
    }
    // 0x800B4A0C: nop

    // 0x800B4A10: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B4A14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B4A18: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B4A1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B4A20: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B4A24: nop

    // 0x800B4A28: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B4A2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B4A30: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B4A34: nop

    // 0x800B4A38: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B4A3C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B4A40: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800B4A44: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800B4A48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4A4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4A50: jal         0x8001BBDC
    // 0x800B4A54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800B4A54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_800B4A58:
    // 0x800B4A58: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B4A5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4A60: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x800B4A64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4A68: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x800B4A6C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800B4A70: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800B4A74: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800B4A78: jal         0x8001BB34
    // 0x800B4A7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800B4A7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800B4A80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4A84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4A88: jal         0x80029C40
    // 0x800B4A8C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B4A8C: nop

    after_2:
    // 0x800B4A90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4A94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4A98: jal         0x80029D04
    // 0x800B4A9C: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B4A9C: nop

    after_3:
    // 0x800B4AA0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800B4AA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B4AA8: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x800B4AAC: nop

    // 0x800B4AB0: bne         $t2, $at, L_800B4AF0
    if (ctx->r10 != ctx->r1) {
        // 0x800B4AB4: nop
    
            goto L_800B4AF0;
    }
    // 0x800B4AB4: nop

    // 0x800B4AB8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B4ABC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800B4AC0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B4AC4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B4AC8: nop

    // 0x800B4ACC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800B4AD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4AD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4AD8: jal         0x8001BB34
    // 0x800B4ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x800B4ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800B4AE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B4AE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B4AE8: jal         0x8001BBDC
    // 0x800B4AEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800B4AEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_800B4AF0:
    // 0x800B4AF0: b           L_800B4AF8
    // 0x800B4AF4: nop

        goto L_800B4AF8;
    // 0x800B4AF4: nop

L_800B4AF8:
    // 0x800B4AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B4AFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B4B00: jr          $ra
    // 0x800B4B04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800B4B04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80074DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074DFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80074E00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80074E04: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80074E08: nop

    // 0x80074E0C: addiu       $t7, $t6, -0xF
    ctx->r15 = ADD32(ctx->r14, -0XF);
    // 0x80074E10: sltiu       $at, $t7, 0x5E
    ctx->r1 = ctx->r15 < 0X5E ? 1 : 0;
    // 0x80074E14: beq         $at, $zero, L_80075278
    if (ctx->r1 == 0) {
        // 0x80074E18: nop
    
            goto L_80075278;
    }
    // 0x80074E18: nop

    // 0x80074E1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80074E20: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80074E24: addu        $at, $at, $t7
    gpr jr_addend_80074E30 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80074E28: lw          $t7, 0x5658($at)
    ctx->r15 = ADD32(ctx->r1, 0X5658);
    // 0x80074E2C: nop

    // 0x80074E30: jr          $t7
    // 0x80074E34: nop

    switch (jr_addend_80074E30 >> 2) {
        case 0: goto L_80075220; break;
        case 1: goto L_80075278; break;
        case 2: goto L_80075278; break;
        case 3: goto L_80075278; break;
        case 4: goto L_80074E60; break;
        case 5: goto L_80075278; break;
        case 6: goto L_80075278; break;
        case 7: goto L_80075278; break;
        case 8: goto L_80075278; break;
        case 9: goto L_80075278; break;
        case 10: goto L_80075278; break;
        case 11: goto L_80075278; break;
        case 12: goto L_80075278; break;
        case 13: goto L_80075278; break;
        case 14: goto L_80075278; break;
        case 15: goto L_80075278; break;
        case 16: goto L_80075278; break;
        case 17: goto L_80075278; break;
        case 18: goto L_80075278; break;
        case 19: goto L_80074E38; break;
        case 20: goto L_80075278; break;
        case 21: goto L_80075278; break;
        case 22: goto L_80074E90; break;
        case 23: goto L_80075278; break;
        case 24: goto L_80075278; break;
        case 25: goto L_80075278; break;
        case 26: goto L_80075278; break;
        case 27: goto L_80075278; break;
        case 28: goto L_80075278; break;
        case 29: goto L_80075278; break;
        case 30: goto L_80075278; break;
        case 31: goto L_80075278; break;
        case 32: goto L_80075278; break;
        case 33: goto L_80075278; break;
        case 34: goto L_80075278; break;
        case 35: goto L_80075278; break;
        case 36: goto L_80075278; break;
        case 37: goto L_80075278; break;
        case 38: goto L_80075278; break;
        case 39: goto L_80075278; break;
        case 40: goto L_80075278; break;
        case 41: goto L_80075278; break;
        case 42: goto L_80074F04; break;
        case 43: goto L_80075278; break;
        case 44: goto L_80075278; break;
        case 45: goto L_80075278; break;
        case 46: goto L_80075278; break;
        case 47: goto L_80075278; break;
        case 48: goto L_80075278; break;
        case 49: goto L_80075278; break;
        case 50: goto L_80075278; break;
        case 51: goto L_80075278; break;
        case 52: goto L_80075278; break;
        case 53: goto L_80075278; break;
        case 54: goto L_80075278; break;
        case 55: goto L_80075278; break;
        case 56: goto L_80075278; break;
        case 57: goto L_80075278; break;
        case 58: goto L_80075278; break;
        case 59: goto L_80075278; break;
        case 60: goto L_80075278; break;
        case 61: goto L_80074FE0; break;
        case 62: goto L_80075038; break;
        case 63: goto L_800750AC; break;
        case 64: goto L_80075220; break;
        case 65: goto L_80075278; break;
        case 66: goto L_800750E0; break;
        case 67: goto L_80075110; break;
        case 68: goto L_80075170; break;
        case 69: goto L_80075278; break;
        case 70: goto L_800751C8; break;
        case 71: goto L_80075278; break;
        case 72: goto L_80075220; break;
        case 73: goto L_80075220; break;
        case 74: goto L_80075220; break;
        case 75: goto L_80074F5C; break;
        case 76: goto L_80075278; break;
        case 77: goto L_80075278; break;
        case 78: goto L_80075278; break;
        case 79: goto L_80075278; break;
        case 80: goto L_80075278; break;
        case 81: goto L_80075278; break;
        case 82: goto L_80075278; break;
        case 83: goto L_80075278; break;
        case 84: goto L_80075278; break;
        case 85: goto L_80075278; break;
        case 86: goto L_80075278; break;
        case 87: goto L_80075278; break;
        case 88: goto L_80075278; break;
        case 89: goto L_80075278; break;
        case 90: goto L_80075278; break;
        case 91: goto L_80075278; break;
        case 92: goto L_80075278; break;
        case 93: goto L_80075140; break;
        default: switch_error(__func__, 0x80074E30, 0x80105658);
    }
    // 0x80074E34: nop

L_80074E38:
    // 0x80074E38: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80074E3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80074E40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074E44: swc1        $f4, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f4.u32l;
    // 0x80074E48: lui         $at, 0xC3F0
    ctx->r1 = S32(0XC3F0 << 16);
    // 0x80074E4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80074E50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074E54: swc1        $f6, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f6.u32l;
    // 0x80074E58: b           L_80075278
    // 0x80074E5C: nop

        goto L_80075278;
    // 0x80074E5C: nop

L_80074E60:
    // 0x80074E60: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80074E64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074E68: swc1        $f8, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f8.u32l;
    // 0x80074E6C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80074E70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80074E74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074E78: swc1        $f10, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->f10.u32l;
    // 0x80074E7C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80074E80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074E84: swc1        $f16, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f16.u32l;
    // 0x80074E88: b           L_80075278
    // 0x80074E8C: nop

        goto L_80075278;
    // 0x80074E8C: nop

L_80074E90:
    // 0x80074E90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80074E94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80074E98: addiu       $t9, $t8, 0x1260
    ctx->r25 = ADD32(ctx->r24, 0X1260);
    // 0x80074E9C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80074EA0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80074EA4: nop

    // 0x80074EA8: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80074EAC: nop

    // 0x80074EB0: beq         $t1, $zero, L_80074EFC
    if (ctx->r9 == 0) {
        // 0x80074EB4: nop
    
            goto L_80074EFC;
    }
    // 0x80074EB4: nop

    // 0x80074EB8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80074EBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074EC0: lwc1        $f18, 0x0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80074EC4: nop

    // 0x80074EC8: swc1        $f18, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f18.u32l;
    // 0x80074ECC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80074ED0: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x80074ED4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80074ED8: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80074EDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074EE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80074EE4: swc1        $f8, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->f8.u32l;
    // 0x80074EE8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80074EEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074EF0: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80074EF4: nop

    // 0x80074EF8: swc1        $f10, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f10.u32l;
L_80074EFC:
    // 0x80074EFC: b           L_80075278
    // 0x80074F00: nop

        goto L_80075278;
    // 0x80074F00: nop

L_80074F04:
    // 0x80074F04: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80074F08: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80074F0C: addiu       $t6, $t5, 0x1260
    ctx->r14 = ADD32(ctx->r13, 0X1260);
    // 0x80074F10: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80074F14: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80074F18: nop

    // 0x80074F1C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80074F20: nop

    // 0x80074F24: beq         $t8, $zero, L_80074F54
    if (ctx->r24 == 0) {
        // 0x80074F28: nop
    
            goto L_80074F54;
    }
    // 0x80074F28: nop

    // 0x80074F2C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80074F30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074F34: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80074F38: nop

    // 0x80074F3C: swc1        $f16, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f16.u32l;
    // 0x80074F40: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80074F44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074F48: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80074F4C: nop

    // 0x80074F50: swc1        $f18, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f18.u32l;
L_80074F54:
    // 0x80074F54: b           L_80075278
    // 0x80074F58: nop

        goto L_80075278;
    // 0x80074F58: nop

L_80074F5C:
    // 0x80074F5C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80074F60: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80074F64: addiu       $t2, $t1, 0x1260
    ctx->r10 = ADD32(ctx->r9, 0X1260);
    // 0x80074F68: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x80074F6C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80074F70: nop

    // 0x80074F74: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x80074F78: nop

    // 0x80074F7C: beq         $t4, $zero, L_80074FC0
    if (ctx->r12 == 0) {
        // 0x80074F80: nop
    
            goto L_80074FC0;
    }
    // 0x80074F80: nop

    // 0x80074F84: lh          $t5, 0xE4($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XE4);
    // 0x80074F88: addiu       $at, $zero, 0x1B8
    ctx->r1 = ADD32(0, 0X1B8);
    // 0x80074F8C: bne         $t5, $at, L_80074FC0
    if (ctx->r13 != ctx->r1) {
        // 0x80074F90: nop
    
            goto L_80074FC0;
    }
    // 0x80074F90: nop

    // 0x80074F94: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80074F98: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80074F9C: lwc1        $f4, 0x1260($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1260);
    // 0x80074FA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074FA4: swc1        $f4, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f4.u32l;
    // 0x80074FA8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80074FAC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80074FB0: lwc1        $f6, 0x1268($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1268);
    // 0x80074FB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074FB8: b           L_80074FD8
    // 0x80074FBC: swc1        $f6, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f6.u32l;
        goto L_80074FD8;
    // 0x80074FBC: swc1        $f6, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f6.u32l;
L_80074FC0:
    // 0x80074FC0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80074FC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074FC8: swc1        $f8, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f8.u32l;
    // 0x80074FCC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80074FD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074FD4: swc1        $f10, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f10.u32l;
L_80074FD8:
    // 0x80074FD8: b           L_80075278
    // 0x80074FDC: nop

        goto L_80075278;
    // 0x80074FDC: nop

L_80074FE0:
    // 0x80074FE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80074FE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80074FE8: addiu       $t9, $t8, 0x1260
    ctx->r25 = ADD32(ctx->r24, 0X1260);
    // 0x80074FEC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80074FF0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80074FF4: nop

    // 0x80074FF8: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80074FFC: nop

    // 0x80075000: beq         $t1, $zero, L_80075030
    if (ctx->r9 == 0) {
        // 0x80075004: nop
    
            goto L_80075030;
    }
    // 0x80075004: nop

    // 0x80075008: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8007500C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075010: lwc1        $f16, 0x0($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80075014: nop

    // 0x80075018: swc1        $f16, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f16.u32l;
    // 0x8007501C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80075020: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075024: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80075028: nop

    // 0x8007502C: swc1        $f18, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f18.u32l;
L_80075030:
    // 0x80075030: b           L_80075278
    // 0x80075034: nop

        goto L_80075278;
    // 0x80075034: nop

L_80075038:
    // 0x80075038: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8007503C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80075040: addiu       $t5, $t3, 0x1260
    ctx->r13 = ADD32(ctx->r11, 0X1260);
    // 0x80075044: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80075048: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8007504C: nop

    // 0x80075050: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80075054: nop

    // 0x80075058: beq         $t7, $zero, L_800750A4
    if (ctx->r15 == 0) {
        // 0x8007505C: nop
    
            goto L_800750A4;
    }
    // 0x8007505C: nop

    // 0x80075060: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80075064: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075068: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8007506C: nop

    // 0x80075070: swc1        $f4, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f4.u32l;
    // 0x80075074: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80075078: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x8007507C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80075080: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80075084: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075088: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8007508C: swc1        $f10, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->f10.u32l;
    // 0x80075090: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80075094: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075098: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8007509C: nop

    // 0x800750A0: swc1        $f16, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f16.u32l;
L_800750A4:
    // 0x800750A4: b           L_80075278
    // 0x800750A8: nop

        goto L_80075278;
    // 0x800750A8: nop

L_800750AC:
    // 0x800750AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800750B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800750B4: swc1        $f18, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f18.u32l;
    // 0x800750B8: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x800750BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800750C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800750C4: swc1        $f4, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->f4.u32l;
    // 0x800750C8: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x800750CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800750D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800750D4: swc1        $f6, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f6.u32l;
    // 0x800750D8: b           L_80075278
    // 0x800750DC: nop

        goto L_80075278;
    // 0x800750DC: nop

L_800750E0:
    // 0x800750E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800750E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800750E8: swc1        $f8, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f8.u32l;
    // 0x800750EC: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x800750F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800750F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800750F8: swc1        $f10, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->f10.u32l;
    // 0x800750FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80075100: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075104: swc1        $f16, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f16.u32l;
    // 0x80075108: b           L_80075278
    // 0x8007510C: nop

        goto L_80075278;
    // 0x8007510C: nop

L_80075110:
    // 0x80075110: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80075114: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075118: swc1        $f18, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f18.u32l;
    // 0x8007511C: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x80075120: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80075124: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075128: swc1        $f4, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->f4.u32l;
    // 0x8007512C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80075130: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075134: swc1        $f6, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f6.u32l;
    // 0x80075138: b           L_80075278
    // 0x8007513C: nop

        goto L_80075278;
    // 0x8007513C: nop

L_80075140:
    // 0x80075140: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80075144: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075148: swc1        $f8, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f8.u32l;
    // 0x8007514C: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x80075150: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80075154: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075158: swc1        $f10, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->f10.u32l;
    // 0x8007515C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80075160: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075164: swc1        $f16, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f16.u32l;
    // 0x80075168: b           L_80075278
    // 0x8007516C: nop

        goto L_80075278;
    // 0x8007516C: nop

L_80075170:
    // 0x80075170: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80075174: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80075178: addiu       $t2, $t1, 0x1260
    ctx->r10 = ADD32(ctx->r9, 0X1260);
    // 0x8007517C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x80075180: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80075184: nop

    // 0x80075188: lh          $t3, 0xA4($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XA4);
    // 0x8007518C: nop

    // 0x80075190: beq         $t3, $zero, L_800751C0
    if (ctx->r11 == 0) {
        // 0x80075194: nop
    
            goto L_800751C0;
    }
    // 0x80075194: nop

    // 0x80075198: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8007519C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800751A0: lwc1        $f18, 0x0($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800751A4: nop

    // 0x800751A8: swc1        $f18, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f18.u32l;
    // 0x800751AC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800751B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800751B4: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800751B8: nop

    // 0x800751BC: swc1        $f4, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f4.u32l;
L_800751C0:
    // 0x800751C0: b           L_80075278
    // 0x800751C4: nop

        goto L_80075278;
    // 0x800751C4: nop

L_800751C8:
    // 0x800751C8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800751CC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800751D0: addiu       $t8, $t7, 0x1260
    ctx->r24 = ADD32(ctx->r15, 0X1260);
    // 0x800751D4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800751D8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800751DC: nop

    // 0x800751E0: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x800751E4: nop

    // 0x800751E8: beq         $t0, $zero, L_80075218
    if (ctx->r8 == 0) {
        // 0x800751EC: nop
    
            goto L_80075218;
    }
    // 0x800751EC: nop

    // 0x800751F0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800751F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800751F8: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800751FC: nop

    // 0x80075200: swc1        $f6, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f6.u32l;
    // 0x80075204: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80075208: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007520C: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80075210: nop

    // 0x80075214: swc1        $f8, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f8.u32l;
L_80075218:
    // 0x80075218: b           L_80075278
    // 0x8007521C: nop

        goto L_80075278;
    // 0x8007521C: nop

L_80075220:
    // 0x80075220: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80075224: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80075228: addiu       $t3, $t4, 0x1260
    ctx->r11 = ADD32(ctx->r12, 0X1260);
    // 0x8007522C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80075230: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80075234: nop

    // 0x80075238: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8007523C: nop

    // 0x80075240: beq         $t6, $zero, L_80075270
    if (ctx->r14 == 0) {
        // 0x80075244: nop
    
            goto L_80075270;
    }
    // 0x80075244: nop

    // 0x80075248: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8007524C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075250: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80075254: nop

    // 0x80075258: swc1        $f10, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f10.u32l;
    // 0x8007525C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80075260: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075264: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80075268: nop

    // 0x8007526C: swc1        $f16, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f16.u32l;
L_80075270:
    // 0x80075270: b           L_80075278
    // 0x80075274: nop

        goto L_80075278;
    // 0x80075274: nop

L_80075278:
    // 0x80075278: b           L_80075280
    // 0x8007527C: nop

        goto L_80075280;
    // 0x8007527C: nop

L_80075280:
    // 0x80075280: jr          $ra
    // 0x80075284: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80075284: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800BAE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAE94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BAE98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BAE9C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800BAEA0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800BAEA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BAEA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BAEAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BAEB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BAEB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BAEB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BAEBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BAEC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BAEC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BAEC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BAECC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BAED0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BAED4: nop

    // 0x800BAED8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BAEDC: nop

    // 0x800BAEE0: bne         $t1, $zero, L_800BAF34
    if (ctx->r9 != 0) {
        // 0x800BAEE4: nop
    
            goto L_800BAF34;
    }
    // 0x800BAEE4: nop

    // 0x800BAEE8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BAEEC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BAEF0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BAEF4: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x800BAEF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BAEFC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BAF00: nop

    // 0x800BAF04: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BAF08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BAF0C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BAF10: nop

    // 0x800BAF14: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BAF18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BAF1C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BAF20: nop

    // 0x800BAF24: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x800BAF28: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BAF2C: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x800BAF30: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_800BAF34:
    // 0x800BAF34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BAF38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BAF3C: jal         0x80029C40
    // 0x800BAF40: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BAF40: nop

    after_0:
    // 0x800BAF44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BAF48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BAF4C: jal         0x80029D04
    // 0x800BAF50: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BAF50: nop

    after_1:
    // 0x800BAF54: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BAF58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800BAF5C: lwc1        $f10, 0xC($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800BAF60: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800BAF64: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800BAF68: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800BAF6C: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x800BAF70: nop

    // 0x800BAF74: bc1f        L_800BAFC4
    if (!c1cs) {
        // 0x800BAF78: nop
    
            goto L_800BAFC4;
    }
    // 0x800BAF78: nop

    // 0x800BAF7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BAF80: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BAF84: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800BAF88: lwc1        $f9, 0x4C48($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4C48);
    // 0x800BAF8C: lwc1        $f8, 0x4C4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4C4C);
    // 0x800BAF90: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800BAF94: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800BAF98: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800BAF9C: swc1        $f16, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f16.u32l;
    // 0x800BAFA0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BAFA4: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x800BAFA8: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800BAFAC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800BAFB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BAFB4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800BAFB8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800BAFBC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800BAFC0: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
L_800BAFC4:
    // 0x800BAFC4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BAFC8: nop

    // 0x800BAFCC: lwc1        $f20, 0xC($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0XC);
    // 0x800BAFD0: nop

    // 0x800BAFD4: swc1        $f20, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f20.u32l;
    // 0x800BAFD8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BAFDC: nop

    // 0x800BAFE0: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x800BAFE4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BAFE8: nop

    // 0x800BAFEC: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800BAFF0: nop

    // 0x800BAFF4: slti        $at, $t5, 0x9
    ctx->r1 = SIGNED(ctx->r13) < 0X9 ? 1 : 0;
    // 0x800BAFF8: beq         $at, $zero, L_800BB01C
    if (ctx->r1 == 0) {
        // 0x800BAFFC: nop
    
            goto L_800BB01C;
    }
    // 0x800BAFFC: nop

    // 0x800BB000: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BB004: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800BB008: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800BB00C: lwc1        $f16, 0x44($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800BB010: nop

    // 0x800BB014: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800BB018: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
L_800BB01C:
    // 0x800BB01C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BB020: nop

    // 0x800BB024: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800BB028: nop

    // 0x800BB02C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800BB030: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x800BB034: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BB038: nop

    // 0x800BB03C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800BB040: nop

    // 0x800BB044: bgtz        $t1, L_800BB064
    if (SIGNED(ctx->r9) > 0) {
        // 0x800BB048: nop
    
            goto L_800BB064;
    }
    // 0x800BB048: nop

    // 0x800BB04C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BB050: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800BB054: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800BB058: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BB05C: nop

    // 0x800BB060: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800BB064:
    // 0x800BB064: b           L_800BB06C
    // 0x800BB068: nop

        goto L_800BB06C;
    // 0x800BB068: nop

L_800BB06C:
    // 0x800BB06C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB070: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800BB074: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800BB078: jr          $ra
    // 0x800BB07C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BB07C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800DA128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DA12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DA130: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DA134: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DA138: jal         0x8002B0E4
    // 0x800DA13C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800DA13C: nop

    after_0:
    // 0x800DA140: b           L_800DA148
    // 0x800DA144: nop

        goto L_800DA148;
    // 0x800DA144: nop

L_800DA148:
    // 0x800DA148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DA14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DA150: jr          $ra
    // 0x800DA154: nop

    return;
    // 0x800DA154: nop

;}
RECOMP_FUNC void func_8005FBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FBD0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8005FBD4: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8005FBD8:
    // 0x8005FBD8: sh          $zero, 0x4($sp)
    MEM_H(0X4, ctx->r29) = 0;
L_8005FBDC:
    // 0x8005FBDC: sh          $zero, 0x2($sp)
    MEM_H(0X2, ctx->r29) = 0;
L_8005FBE0:
    // 0x8005FBE0: lh          $t6, 0x6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6);
    // 0x8005FBE4: lh          $t8, 0x4($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4);
    // 0x8005FBE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8005FBEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8005FBF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005FBF4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8005FBF8: lh          $t1, 0x2($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2);
    // 0x8005FBFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8005FC00: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8005FC04: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8005FC08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005FC0C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8005FC10: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8005FC14: sb          $zero, 0x4808($at)
    MEM_B(0X4808, ctx->r1) = 0;
    // 0x8005FC18: lh          $t3, 0x2($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2);
    // 0x8005FC1C: nop

    // 0x8005FC20: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8005FC24: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x8005FC28: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8005FC2C: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x8005FC30: bne         $at, $zero, L_8005FBE0
    if (ctx->r1 != 0) {
        // 0x8005FC34: sh          $t4, 0x2($sp)
        MEM_H(0X2, ctx->r29) = ctx->r12;
            goto L_8005FBE0;
    }
    // 0x8005FC34: sh          $t4, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r12;
    // 0x8005FC38: lh          $t8, 0x4($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4);
    // 0x8005FC3C: nop

    // 0x8005FC40: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x8005FC44: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x8005FC48: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8005FC4C: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x8005FC50: bne         $at, $zero, L_8005FBDC
    if (ctx->r1 != 0) {
        // 0x8005FC54: sh          $t7, 0x4($sp)
        MEM_H(0X4, ctx->r29) = ctx->r15;
            goto L_8005FBDC;
    }
    // 0x8005FC54: sh          $t7, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r15;
    // 0x8005FC58: lh          $t1, 0x6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X6);
    // 0x8005FC5C: nop

    // 0x8005FC60: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8005FC64: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8005FC68: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8005FC6C: slti        $at, $t4, 0x6
    ctx->r1 = SIGNED(ctx->r12) < 0X6 ? 1 : 0;
    // 0x8005FC70: bne         $at, $zero, L_8005FBD8
    if (ctx->r1 != 0) {
        // 0x8005FC74: sh          $t2, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r10;
            goto L_8005FBD8;
    }
    // 0x8005FC74: sh          $t2, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r10;
    // 0x8005FC78: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005FC7C: addiu       $t6, $t6, 0x4808
    ctx->r14 = ADD32(ctx->r14, 0X4808);
    // 0x8005FC80: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8005FC84: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x8005FC88: b           L_8005FC90
    // 0x8005FC8C: nop

        goto L_8005FC90;
    // 0x8005FC8C: nop

L_8005FC90:
    // 0x8005FC90: jr          $ra
    // 0x8005FC94: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8005FC94: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800D8E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D8E30: jr          $ra
    // 0x800D8E34: nop

    return;
    // 0x800D8E34: nop

    // 0x800D8E38: jr          $ra
    // 0x800D8E3C: nop

    return;
    // 0x800D8E3C: nop

;}
RECOMP_FUNC void func_800AB65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AB65C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AB660: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800AB664: nop

    // 0x800AB668: bne         $t6, $zero, L_800AB6A0
    if (ctx->r14 != 0) {
        // 0x800AB66C: nop
    
            goto L_800AB6A0;
    }
    // 0x800AB66C: nop

    // 0x800AB670: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800AB674: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800AB678: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AB67C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800AB680: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AB684: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800AB688: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800AB68C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800AB690: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800AB694: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800AB698: b           L_800AB710
    // 0x800AB69C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800AB710;
    // 0x800AB69C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800AB6A0:
    // 0x800AB6A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800AB6A4: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800AB6A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AB6AC: bne         $t0, $at, L_800AB6E4
    if (ctx->r8 != ctx->r1) {
        // 0x800AB6B0: nop
    
            goto L_800AB6E4;
    }
    // 0x800AB6B0: nop

    // 0x800AB6B4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800AB6B8: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800AB6BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AB6C0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800AB6C4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AB6C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800AB6CC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800AB6D0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800AB6D4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800AB6D8: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800AB6DC: b           L_800AB710
    // 0x800AB6E0: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_800AB710;
    // 0x800AB6E0: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_800AB6E4:
    // 0x800AB6E4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800AB6E8: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x800AB6EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AB6F0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800AB6F4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800AB6F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800AB6FC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800AB700: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800AB704: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800AB708: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x800AB70C: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
L_800AB710:
    // 0x800AB710: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800AB714: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800AB718: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AB71C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800AB720: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800AB724: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AB728: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800AB72C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AB730: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800AB734: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AB738: jr          $ra
    // 0x800AB73C: nop

    return;
    // 0x800AB73C: nop

    // 0x800AB740: jr          $ra
    // 0x800AB744: nop

    return;
    // 0x800AB744: nop

;}
RECOMP_FUNC void func_80087B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80087B20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087B24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80087B28: jal         0x8001BB34
    // 0x80087B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80087B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80087B30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087B34: jal         0x8001BB34
    // 0x80087B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80087B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80087B3C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80087B40: lb          $t6, 0x523E($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X523E);
    // 0x80087B44: nop

    // 0x80087B48: bne         $t6, $zero, L_80087B60
    if (ctx->r14 != 0) {
        // 0x80087B4C: nop
    
            goto L_80087B60;
    }
    // 0x80087B4C: nop

    // 0x80087B50: jal         0x8028ADB0
    // 0x80087B54: nop

    func_8028ADB0_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80087B54: nop

    after_2:
    // 0x80087B58: b           L_80087C30
    // 0x80087B5C: nop

        goto L_80087C30;
    // 0x80087B5C: nop

L_80087B60:
    // 0x80087B60: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80087B64: lb          $t7, 0x523E($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X523E);
    // 0x80087B68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087B6C: bne         $t7, $at, L_80087B84
    if (ctx->r15 != ctx->r1) {
        // 0x80087B70: nop
    
            goto L_80087B84;
    }
    // 0x80087B70: nop

    // 0x80087B74: jal         0x80283A40
    // 0x80087B78: nop

    LOOKUP_FUNC(0x80283A40)(rdram, ctx);
        goto after_3;
    // 0x80087B78: nop

    after_3:
    // 0x80087B7C: b           L_80087C30
    // 0x80087B80: nop

        goto L_80087C30;
    // 0x80087B80: nop

L_80087B84:
    // 0x80087B84: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80087B88: lb          $t8, 0x523E($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X523E);
    // 0x80087B8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80087B90: bne         $t8, $at, L_80087BA8
    if (ctx->r24 != ctx->r1) {
        // 0x80087B94: nop
    
            goto L_80087BA8;
    }
    // 0x80087B94: nop

    // 0x80087B98: jal         0x802824DC
    // 0x80087B9C: nop

    func_802824DC_code_extra_2(rdram, ctx);
        goto after_4;
    // 0x80087B9C: nop

    after_4:
    // 0x80087BA0: b           L_80087C30
    // 0x80087BA4: nop

        goto L_80087C30;
    // 0x80087BA4: nop

L_80087BA8:
    // 0x80087BA8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80087BAC: lb          $t9, 0x523E($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X523E);
    // 0x80087BB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80087BB4: bne         $t9, $at, L_80087BCC
    if (ctx->r25 != ctx->r1) {
        // 0x80087BB8: nop
    
            goto L_80087BCC;
    }
    // 0x80087BB8: nop

    // 0x80087BBC: jal         0x802813E4
    // 0x80087BC0: nop

    func_802813E4_code_extra_3(rdram, ctx);
        goto after_5;
    // 0x80087BC0: nop

    after_5:
    // 0x80087BC4: b           L_80087C30
    // 0x80087BC8: nop

        goto L_80087C30;
    // 0x80087BC8: nop

L_80087BCC:
    // 0x80087BCC: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80087BD0: lb          $t0, 0x523E($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X523E);
    // 0x80087BD4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80087BD8: bne         $t0, $at, L_80087BF0
    if (ctx->r8 != ctx->r1) {
        // 0x80087BDC: nop
    
            goto L_80087BF0;
    }
    // 0x80087BDC: nop

    // 0x80087BE0: jal         0x802812AC
    // 0x80087BE4: nop

    func_802812AC_code_extra_4(rdram, ctx);
        goto after_6;
    // 0x80087BE4: nop

    after_6:
    // 0x80087BE8: b           L_80087C30
    // 0x80087BEC: nop

        goto L_80087C30;
    // 0x80087BEC: nop

L_80087BF0:
    // 0x80087BF0: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80087BF4: lb          $t1, 0x523E($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X523E);
    // 0x80087BF8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80087BFC: bne         $t1, $at, L_80087C14
    if (ctx->r9 != ctx->r1) {
        // 0x80087C00: nop
    
            goto L_80087C14;
    }
    // 0x80087C00: nop

    // 0x80087C04: jal         0x80286374
    // 0x80087C08: nop

    func_80286374_code_extra_5(rdram, ctx);
        goto after_7;
    // 0x80087C08: nop

    after_7:
    // 0x80087C0C: b           L_80087C30
    // 0x80087C10: nop

        goto L_80087C30;
    // 0x80087C10: nop

L_80087C14:
    // 0x80087C14: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80087C18: lb          $t2, 0x523E($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X523E);
    // 0x80087C1C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80087C20: bne         $t2, $at, L_80087C30
    if (ctx->r10 != ctx->r1) {
        // 0x80087C24: nop
    
            goto L_80087C30;
    }
    // 0x80087C24: nop

    // 0x80087C28: jal         0x802831BC
    // 0x80087C2C: nop

    func_802831BC_code_extra_6(rdram, ctx);
        goto after_8;
    // 0x80087C2C: nop

    after_8:
L_80087C30:
    // 0x80087C30: jal         0x80086D50
    // 0x80087C34: nop

    func_80086D50(rdram, ctx);
        goto after_9;
    // 0x80087C34: nop

    after_9:
    // 0x80087C38: jal         0x80086ECC
    // 0x80087C3C: nop

    func_80086ECC(rdram, ctx);
        goto after_10;
    // 0x80087C3C: nop

    after_10:
    // 0x80087C40: b           L_80087C48
    // 0x80087C44: nop

        goto L_80087C48;
    // 0x80087C44: nop

L_80087C48:
    // 0x80087C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80087C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80087C50: jr          $ra
    // 0x80087C54: nop

    return;
    // 0x80087C54: nop

;}
RECOMP_FUNC void func_800EC7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC7B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EC7B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC7BC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800EC7C0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800EC7C4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EC7C8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800EC7CC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800EC7D0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800EC7D4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800EC7D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EC7DC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800EC7E0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800EC7E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EC7E8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800EC7EC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EC7F0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800EC7F4: addiu       $a1, $a1, 0x44E0
    ctx->r5 = ADD32(ctx->r5, 0X44E0);
    // 0x800EC7F8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EC7FC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800EC800: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800EC804: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EC808: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800EC80C: jal         0x80027464
    // 0x800EC810: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800EC810: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800EC814: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800EC818: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800EC81C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EC820: beq         $t1, $at, L_800EC870
    if (ctx->r9 == ctx->r1) {
        // 0x800EC824: nop
    
            goto L_800EC870;
    }
    // 0x800EC824: nop

    // 0x800EC828: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EC82C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EC830: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800EC834: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EC838: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EC83C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EC840: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EC844: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800EC848: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x800EC84C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800EC850: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EC854: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800EC858: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800EC85C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EC860: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800EC864: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EC868: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800EC86C: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
L_800EC870:
    // 0x800EC870: b           L_800EC878
    // 0x800EC874: nop

        goto L_800EC878;
    // 0x800EC874: nop

L_800EC878:
    // 0x800EC878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC87C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EC880: jr          $ra
    // 0x800EC884: nop

    return;
    // 0x800EC884: nop

;}
RECOMP_FUNC void func_8008D530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D530: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008D534: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008D538: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008D53C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008D540: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008D544: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008D548: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008D54C: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008D550: nop

    // 0x8008D554: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008D558: lh          $t9, 0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8);
    // 0x8008D55C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008D560: bne         $t9, $at, L_8008D688
    if (ctx->r25 != ctx->r1) {
        // 0x8008D564: nop
    
            goto L_8008D688;
    }
    // 0x8008D564: nop

    // 0x8008D568: lh          $t0, 0x2($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2);
    // 0x8008D56C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D570: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8008D574: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008D578: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008D57C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8008D580: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008D584: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008D588: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008D58C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008D590: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008D594: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008D598: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8008D59C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008D5A0: lwc1        $f16, 0x4168($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x8008D5A4: nop

    // 0x8008D5A8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8008D5AC: nop

    // 0x8008D5B0: bc1f        L_8008D624
    if (!c1cs) {
        // 0x8008D5B4: nop
    
            goto L_8008D624;
    }
    // 0x8008D5B4: nop

    // 0x8008D5B8: lh          $t3, 0x2($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X2);
    // 0x8008D5BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D5C0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8008D5C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008D5C8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008D5CC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8008D5D0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8008D5D4: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8008D5D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008D5DC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008D5E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008D5E4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008D5E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008D5EC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8008D5F0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8008D5F4: lwc1        $f10, 0x18($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X18);
    // 0x8008D5F8: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x8008D5FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8008D600: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8008D604: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8008D608: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8008D60C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008D610: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8008D614: nop

    // 0x8008D618: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8008D61C: b           L_8008D680
    // 0x8008D620: swc1        $f10, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f10.u32l;
        goto L_8008D680;
    // 0x8008D620: swc1        $f10, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f10.u32l;
L_8008D624:
    // 0x8008D624: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008D628: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D62C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8008D630: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008D634: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008D638: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008D63C: lh          $t4, 0x6($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X6);
    // 0x8008D640: div.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8008D644: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008D648: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008D64C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008D650: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8008D654: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008D658: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008D65C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8008D660: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x8008D664: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8008D668: lwc1        $f8, 0x18($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X18);
    // 0x8008D66C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008D670: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8008D674: nop

    // 0x8008D678: div.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8008D67C: swc1        $f6, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->f6.u32l;
L_8008D680:
    // 0x8008D680: b           L_8008D7A8
    // 0x8008D684: nop

        goto L_8008D7A8;
    // 0x8008D684: nop

L_8008D688:
    // 0x8008D688: lh          $t5, 0x2($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X2);
    // 0x8008D68C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D690: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8008D694: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008D698: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008D69C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8008D6A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008D6A4: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8008D6A8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8008D6AC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008D6B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008D6B4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008D6B8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008D6BC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008D6C0: lwc1        $f18, 0x4168($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x8008D6C4: nop

    // 0x8008D6C8: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x8008D6CC: nop

    // 0x8008D6D0: bc1f        L_8008D738
    if (!c1cs) {
        // 0x8008D6D4: nop
    
            goto L_8008D738;
    }
    // 0x8008D6D4: nop

    // 0x8008D6D8: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x8008D6DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D6E0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8008D6E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008D6E8: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008D6EC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8008D6F0: lh          $t4, 0x6($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X6);
    // 0x8008D6F4: div.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8008D6F8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008D6FC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008D700: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008D704: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8008D708: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008D70C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008D710: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8008D714: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8008D718: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008D71C: lwc1        $f10, 0x18($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X18);
    // 0x8008D720: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008D724: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8008D728: nop

    // 0x8008D72C: div.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8008D730: b           L_8008D7A8
    // 0x8008D734: swc1        $f8, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f8.u32l;
        goto L_8008D7A8;
    // 0x8008D734: swc1        $f8, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f8.u32l;
L_8008D738:
    // 0x8008D738: lh          $t3, 0x2($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X2);
    // 0x8008D73C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D740: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8008D744: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008D748: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008D74C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8008D750: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8008D754: div.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8008D758: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008D75C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008D760: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008D764: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008D768: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008D76C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8008D770: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x8008D774: lwc1        $f4, 0x18($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X18);
    // 0x8008D778: lh          $t9, 0x6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X6);
    // 0x8008D77C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8008D780: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8008D784: sub.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8008D788: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008D78C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008D790: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8008D794: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8008D798: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008D79C: div.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8008D7A0: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8008D7A4: swc1        $f16, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f16.u32l;
L_8008D7A8:
    // 0x8008D7A8: lh          $t0, 0xA($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XA);
    // 0x8008D7AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008D7B0: bne         $t0, $at, L_8008D8D8
    if (ctx->r8 != ctx->r1) {
        // 0x8008D7B4: nop
    
            goto L_8008D8D8;
    }
    // 0x8008D7B4: nop

    // 0x8008D7B8: lh          $t1, 0x4($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X4);
    // 0x8008D7BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D7C0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8008D7C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008D7C8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008D7CC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8008D7D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008D7D4: div.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8008D7D8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8008D7DC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8008D7E0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008D7E4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8008D7E8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8008D7EC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008D7F0: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8008D7F4: nop

    // 0x8008D7F8: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x8008D7FC: nop

    // 0x8008D800: bc1f        L_8008D874
    if (!c1cs) {
        // 0x8008D804: nop
    
            goto L_8008D874;
    }
    // 0x8008D804: nop

    // 0x8008D808: lh          $t3, 0x4($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X4);
    // 0x8008D80C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D810: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8008D814: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008D818: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008D81C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8008D820: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8008D824: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8008D828: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008D82C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008D830: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008D834: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008D838: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008D83C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8008D840: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8008D844: lwc1        $f18, 0x1C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8008D848: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8008D84C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8008D850: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8008D854: sub.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8008D858: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008D85C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008D860: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8008D864: nop

    // 0x8008D868: div.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8008D86C: b           L_8008D8D0
    // 0x8008D870: swc1        $f18, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->f18.u32l;
        goto L_8008D8D0;
    // 0x8008D870: swc1        $f18, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->f18.u32l;
L_8008D874:
    // 0x8008D874: lh          $t0, 0x4($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X4);
    // 0x8008D878: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D87C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8008D880: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008D884: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008D888: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8008D88C: lh          $t5, 0x6($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X6);
    // 0x8008D890: div.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8008D894: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8008D898: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8008D89C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008D8A0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8008D8A4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8008D8A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008D8AC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8008D8B0: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8008D8B4: addu        $t3, $t4, $t2
    ctx->r11 = ADD32(ctx->r12, ctx->r10);
    // 0x8008D8B8: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8008D8BC: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008D8C0: sub.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8008D8C4: nop

    // 0x8008D8C8: div.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8008D8CC: swc1        $f10, 0x34($t3)
    MEM_W(0X34, ctx->r11) = ctx->f10.u32l;
L_8008D8D0:
    // 0x8008D8D0: b           L_8008D9F8
    // 0x8008D8D4: nop

        goto L_8008D9F8;
    // 0x8008D8D4: nop

L_8008D8D8:
    // 0x8008D8D8: lh          $t6, 0x4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X4);
    // 0x8008D8DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D8E0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8008D8E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008D8E8: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008D8EC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8008D8F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008D8F4: div.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8008D8F8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8008D8FC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008D900: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008D904: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008D908: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008D90C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008D910: lwc1        $f16, 0x416C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8008D914: nop

    // 0x8008D918: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8008D91C: nop

    // 0x8008D920: bc1f        L_8008D988
    if (!c1cs) {
        // 0x8008D924: nop
    
            goto L_8008D988;
    }
    // 0x8008D924: nop

    // 0x8008D928: lh          $t9, 0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4);
    // 0x8008D92C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D930: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8008D934: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008D938: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008D93C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008D940: lh          $t5, 0x6($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X6);
    // 0x8008D944: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8008D948: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008D94C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008D950: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008D954: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8008D958: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008D95C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008D960: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8008D964: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8008D968: addu        $t2, $t1, $t4
    ctx->r10 = ADD32(ctx->r9, ctx->r12);
    // 0x8008D96C: lwc1        $f18, 0x1C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8008D970: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008D974: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8008D978: nop

    // 0x8008D97C: div.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8008D980: b           L_8008D9F8
    // 0x8008D984: swc1        $f4, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->f4.u32l;
        goto L_8008D9F8;
    // 0x8008D984: swc1        $f4, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->f4.u32l;
L_8008D988:
    // 0x8008D988: lh          $t3, 0x4($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X4);
    // 0x8008D98C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008D990: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8008D994: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008D998: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008D99C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8008D9A0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008D9A4: div.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8008D9A8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8008D9AC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008D9B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008D9B4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008D9B8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008D9BC: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8008D9C0: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8008D9C4: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8008D9C8: lh          $t0, 0x6($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X6);
    // 0x8008D9CC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8008D9D0: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8008D9D4: sub.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8008D9D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008D9DC: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008D9E0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8008D9E4: add.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8008D9E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008D9EC: div.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8008D9F0: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8008D9F4: swc1        $f8, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->f8.u32l;
L_8008D9F8:
    // 0x8008D9F8: lh          $t4, 0x0($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X0);
    // 0x8008D9FC: lh          $t1, 0x6($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X6);
    // 0x8008DA00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008DA04: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8008DA08: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008DA0C: sh          $t1, 0x4C88($at)
    MEM_H(0X4C88, ctx->r1) = ctx->r9;
    // 0x8008DA10: b           L_8008DA18
    // 0x8008DA14: nop

        goto L_8008DA18;
    // 0x8008DA14: nop

L_8008DA18:
    // 0x8008DA18: jr          $ra
    // 0x8008DA1C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008DA1C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8008EAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EAE4: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008EAE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008EAEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008EAF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008EAF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008EAF8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008EAFC: sh          $zero, 0x4D56($at)
    MEM_H(0X4D56, ctx->r1) = 0;
    // 0x8008EB00: jr          $ra
    // 0x8008EB04: nop

    return;
    // 0x8008EB04: nop

    // 0x8008EB08: jr          $ra
    // 0x8008EB0C: nop

    return;
    // 0x8008EB0C: nop

;}
RECOMP_FUNC void func_800D47C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D47C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800D47C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D47C8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D47CC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D47D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D47D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D47D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D47DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D47E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D47E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D47E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D47EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D47F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D47F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D47F8: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800D47FC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4800: nop

    // 0x800D4804: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D4808: nop

    // 0x800D480C: bne         $t1, $zero, L_800D4844
    if (ctx->r9 != 0) {
        // 0x800D4810: nop
    
            goto L_800D4844;
    }
    // 0x800D4810: nop

    // 0x800D4814: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4818: nop

    // 0x800D481C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D4820: nop

    // 0x800D4824: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D4828: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D482C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4830: nop

    // 0x800D4834: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x800D4838: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D483C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x800D4840: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
L_800D4844:
    // 0x800D4844: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4848: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800D484C: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x800D4850: nop

    // 0x800D4854: bne         $t9, $at, L_800D49A8
    if (ctx->r25 != ctx->r1) {
        // 0x800D4858: nop
    
            goto L_800D49A8;
    }
    // 0x800D4858: nop

    // 0x800D485C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4860: nop

    // 0x800D4864: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800D4868: nop

    // 0x800D486C: bne         $t1, $zero, L_800D4918
    if (ctx->r9 != 0) {
        // 0x800D4870: nop
    
            goto L_800D4918;
    }
    // 0x800D4870: nop

    // 0x800D4874: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4878: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D487C: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800D4880: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x800D4884: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x800D4888: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D488C: addiu       $a1, $a1, 0x4150
    ctx->r5 = ADD32(ctx->r5, 0X4150);
    // 0x800D4890: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D4894: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800D4898: jal         0x80027464
    // 0x800D489C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D489C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800D48A0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800D48A4: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800D48A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D48AC: beq         $t4, $at, L_800D4910
    if (ctx->r12 == ctx->r1) {
        // 0x800D48B0: nop
    
            goto L_800D4910;
    }
    // 0x800D48B0: nop

    // 0x800D48B4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800D48B8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800D48BC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800D48C0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D48C4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D48C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D48CC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D48D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D48D4: lwc1        $f20, 0x1C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x800D48D8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800D48DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D48E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D48E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D48E8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D48EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D48F0: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
    // 0x800D48F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D48F8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D48FC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D4900: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800D4904: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4908: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x800D490C: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_800D4910:
    // 0x800D4910: b           L_800D4930
    // 0x800D4914: nop

        goto L_800D4930;
    // 0x800D4914: nop

L_800D4918:
    // 0x800D4918: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D491C: nop

    // 0x800D4920: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800D4924: nop

    // 0x800D4928: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800D492C: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_800D4930:
    // 0x800D4930: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800D4934: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x800D4938: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D493C: lwc1        $f10, 0x50B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X50B4);
    // 0x800D4940: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4944: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800D4948: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800D494C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800D4950: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800D4954: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x800D4958: lui         $at, 0xC448
    ctx->r1 = S32(0XC448 << 16);
    // 0x800D495C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D4960: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800D4964: nop

    // 0x800D4968: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x800D496C: nop

    // 0x800D4970: bc1t        L_800D4994
    if (c1cs) {
        // 0x800D4974: nop
    
            goto L_800D4994;
    }
    // 0x800D4974: nop

    // 0x800D4978: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800D497C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D4980: nop

    // 0x800D4984: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x800D4988: nop

    // 0x800D498C: bc1f        L_800D49A0
    if (!c1cs) {
        // 0x800D4990: nop
    
            goto L_800D49A0;
    }
    // 0x800D4990: nop

L_800D4994:
    // 0x800D4994: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D4998: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x800D499C: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
L_800D49A0:
    // 0x800D49A0: b           L_800D49F4
    // 0x800D49A4: nop

        goto L_800D49F4;
    // 0x800D49A4: nop

L_800D49A8:
    // 0x800D49A8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D49AC: nop

    // 0x800D49B0: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x800D49B4: nop

    // 0x800D49B8: beq         $t9, $zero, L_800D49DC
    if (ctx->r25 == 0) {
        // 0x800D49BC: nop
    
            goto L_800D49DC;
    }
    // 0x800D49BC: nop

    // 0x800D49C0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D49C4: nop

    // 0x800D49C8: lh          $t3, 0xAA($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XAA);
    // 0x800D49CC: nop

    // 0x800D49D0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800D49D4: b           L_800D49F4
    // 0x800D49D8: sh          $t4, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r12;
        goto L_800D49F4;
    // 0x800D49D8: sh          $t4, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r12;
L_800D49DC:
    // 0x800D49DC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D49E0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800D49E4: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800D49E8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D49EC: nop

    // 0x800D49F0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800D49F4:
    // 0x800D49F4: b           L_800D49FC
    // 0x800D49F8: nop

        goto L_800D49FC;
    // 0x800D49F8: nop

L_800D49FC:
    // 0x800D49FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D4A00: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D4A04: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D4A08: jr          $ra
    // 0x800D4A0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800D4A0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800A488C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A488C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A4890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A4894: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A4898: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800A489C: nop

    // 0x800A48A0: beq         $t6, $zero, L_800A48F8
    if (ctx->r14 == 0) {
        // 0x800A48A4: nop
    
            goto L_800A48F8;
    }
    // 0x800A48A4: nop

    // 0x800A48A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A48AC: beq         $t6, $at, L_800A48F8
    if (ctx->r14 == ctx->r1) {
        // 0x800A48B0: nop
    
            goto L_800A48F8;
    }
    // 0x800A48B0: nop

    // 0x800A48B4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800A48B8: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800A48BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A48C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800A48C4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A48C8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A48CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A48D0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A48D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A48D8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A48DC: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x800A48E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A48E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A48E8: jal         0x80029C40
    // 0x800A48EC: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800A48EC: nop

    after_0:
    // 0x800A48F0: b           L_800A4954
    // 0x800A48F4: nop

        goto L_800A4954;
    // 0x800A48F4: nop

L_800A48F8:
    // 0x800A48F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800A48FC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800A4900: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A4904: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A4908: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A490C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A4910: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A4914: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A4918: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A491C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x800A4920: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x800A4924: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800A4928: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800A492C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A4930: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A4934: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A4938: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A493C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A4940: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A4944: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A4948: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A494C: b           L_800A4954
    // 0x800A4950: nop

        goto L_800A4954;
    // 0x800A4950: nop

L_800A4954:
    // 0x800A4954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A4958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A495C: jr          $ra
    // 0x800A4960: nop

    return;
    // 0x800A4960: nop

;}
RECOMP_FUNC void func_800A038C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A038C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A0390: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A0394: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A0398: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A039C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A03A0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800A03A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A03A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A03AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A03B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A03B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A03B8: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800A03BC: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800A03C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A03C4: beq         $s0, $at, L_800A03E0
    if (ctx->r16 == ctx->r1) {
        // 0x800A03C8: nop
    
            goto L_800A03E0;
    }
    // 0x800A03C8: nop

    // 0x800A03CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A03D0: beq         $s0, $at, L_800A03F0
    if (ctx->r16 == ctx->r1) {
        // 0x800A03D4: nop
    
            goto L_800A03F0;
    }
    // 0x800A03D4: nop

    // 0x800A03D8: b           L_800A0400
    // 0x800A03DC: nop

        goto L_800A0400;
    // 0x800A03DC: nop

L_800A03E0:
    // 0x800A03E0: jal         0x800A0034
    // 0x800A03E4: nop

    func_800A0034(rdram, ctx);
        goto after_0;
    // 0x800A03E4: nop

    after_0:
    // 0x800A03E8: b           L_800A0400
    // 0x800A03EC: nop

        goto L_800A0400;
    // 0x800A03EC: nop

L_800A03F0:
    // 0x800A03F0: jal         0x800A0298
    // 0x800A03F4: nop

    func_800A0298(rdram, ctx);
        goto after_1;
    // 0x800A03F4: nop

    after_1:
    // 0x800A03F8: b           L_800A0400
    // 0x800A03FC: nop

        goto L_800A0400;
    // 0x800A03FC: nop

L_800A0400:
    // 0x800A0400: b           L_800A0408
    // 0x800A0404: nop

        goto L_800A0408;
    // 0x800A0404: nop

L_800A0408:
    // 0x800A0408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A040C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A0410: jr          $ra
    // 0x800A0414: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A0414: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void _stub0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B7388: jr          $ra
    // 0x800B738C: nop

    return;
    // 0x800B738C: nop

    // 0x800B7390: jr          $ra
    // 0x800B7394: nop

    return;
    // 0x800B7394: nop

;}
RECOMP_FUNC void func_800DE894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DE894: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DE898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DE89C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DE8A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DE8A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DE8A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DE8AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE8B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DE8B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE8B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DE8BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DE8C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DE8C4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DE8C8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DE8CC: nop

    // 0x800DE8D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DE8D4: nop

    // 0x800DE8D8: bne         $t1, $zero, L_800DE914
    if (ctx->r9 != 0) {
        // 0x800DE8DC: nop
    
            goto L_800DE914;
    }
    // 0x800DE8DC: nop

    // 0x800DE8E0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800DE8E4: nop

    // 0x800DE8E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DE8EC: nop

    // 0x800DE8F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DE8F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DE8F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE8FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE900: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DE904: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DE908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DE90C: jal         0x8001ABF4
    // 0x800DE910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800DE910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800DE914:
    // 0x800DE914: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE91C: jal         0x8002A1FC
    // 0x800DE920: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x800DE920: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_1:
    // 0x800DE924: beq         $v0, $zero, L_800DE944
    if (ctx->r2 == 0) {
        // 0x800DE928: nop
    
            goto L_800DE944;
    }
    // 0x800DE928: nop

    // 0x800DE92C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800DE930: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800DE934: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800DE938: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800DE93C: nop

    // 0x800DE940: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800DE944:
    // 0x800DE944: b           L_800DE94C
    // 0x800DE948: nop

        goto L_800DE94C;
    // 0x800DE948: nop

L_800DE94C:
    // 0x800DE94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DE950: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DE954: jr          $ra
    // 0x800DE958: nop

    return;
    // 0x800DE958: nop

;}
RECOMP_FUNC void func_800BCF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCF08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BCF0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BCF10: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BCF14: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800BCF18: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800BCF1C: sb          $zero, 0x26($sp)
    MEM_B(0X26, ctx->r29) = 0;
L_800BCF20:
    // 0x800BCF20: lb          $t6, 0x2B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2B);
    // 0x800BCF24: lb          $t8, 0x26($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X26);
    // 0x800BCF28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BCF2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BCF30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BCF34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BCF38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BCF3C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800BCF40: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800BCF44: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800BCF48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BCF4C: lh          $t1, 0x4238($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4238);
    // 0x800BCF50: nop

    // 0x800BCF54: sb          $t1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r9;
    // 0x800BCF58: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x800BCF5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BCF60: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BCF64: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BCF68: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BCF6C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BCF70: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BCF74: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800BCF78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BCF7C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800BCF80: lb          $t5, 0x27($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X27);
    // 0x800BCF84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BCF88: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BCF8C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BCF90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BCF94: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BCF98: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BCF9C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BCFA0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BCFA4: lb          $t8, 0x2B($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2B);
    // 0x800BCFA8: lb          $t5, 0x27($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X27);
    // 0x800BCFAC: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800BCFB0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800BCFB4: lb          $t9, 0x26($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X26);
    // 0x800BCFB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BCFBC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800BCFC0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BCFC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BCFC8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800BCFCC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BCFD0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800BCFD4: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x800BCFD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BCFDC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800BCFE0: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x800BCFE4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BCFE8: lh          $t4, 0xE6($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XE6);
    // 0x800BCFEC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BCFF0: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x800BCFF4: sh          $t4, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r12;
    // 0x800BCFF8: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800BCFFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD000: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x800BD004: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800BD008: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800BD00C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800BD010: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800BD014: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800BD018: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800BD01C: sh          $t9, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r25;
    // 0x800BD020: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x800BD024: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BD028: addiu       $a3, $a3, 0x7E48
    ctx->r7 = ADD32(ctx->r7, 0X7E48);
    // 0x800BD02C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BD030: jal         0x8001ABF4
    // 0x800BD034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800BD034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800BD038: lb          $t1, 0x26($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X26);
    // 0x800BD03C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BD040: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800BD044: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800BD048: lwc1        $f9, 0x4CA0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4CA0);
    // 0x800BD04C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x800BD050: lwc1        $f8, 0x4CA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4CA4);
    // 0x800BD054: lb          $t5, 0x27($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X27);
    // 0x800BD058: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800BD05C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BD060: lwc1        $f17, 0x4CA8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4CA8);
    // 0x800BD064: lwc1        $f16, 0x4CAC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4CAC);
    // 0x800BD068: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BD06C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BD070: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800BD074: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BD078: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BD07C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800BD080: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BD084: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD088: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BD08C: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800BD090: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x800BD094: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BD098: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BD09C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BD0A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BD0A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BD0A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BD0AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BD0B0: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x800BD0B4: lwc1        $f20, 0xC($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0XC);
    // 0x800BD0B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD0BC: swc1        $f20, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f20.u32l;
    // 0x800BD0C0: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x800BD0C4: nop

    // 0x800BD0C8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800BD0CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800BD0D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800BD0D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800BD0D8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800BD0DC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800BD0E0: swc1        $f20, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f20.u32l;
    // 0x800BD0E4: lb          $t1, 0x26($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X26);
    // 0x800BD0E8: nop

    // 0x800BD0EC: bne         $t1, $zero, L_800BD11C
    if (ctx->r9 != 0) {
        // 0x800BD0F0: nop
    
            goto L_800BD11C;
    }
    // 0x800BD0F0: nop

    // 0x800BD0F4: lb          $t5, 0x27($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X27);
    // 0x800BD0F8: lb          $t2, 0x2B($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2B);
    // 0x800BD0FC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BD100: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BD104: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BD108: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BD10C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BD110: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BD114: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BD118: sh          $t2, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r10;
L_800BD11C:
    // 0x800BD11C: lb          $t3, 0x26($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X26);
    // 0x800BD120: nop

    // 0x800BD124: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800BD128: sll         $t8, $t4, 24
    ctx->r24 = S32(ctx->r12 << 24);
    // 0x800BD12C: sra         $t7, $t8, 24
    ctx->r15 = S32(SIGNED(ctx->r24) >> 24);
    // 0x800BD130: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x800BD134: bne         $at, $zero, L_800BCF20
    if (ctx->r1 != 0) {
        // 0x800BD138: sb          $t4, 0x26($sp)
        MEM_B(0X26, ctx->r29) = ctx->r12;
            goto L_800BCF20;
    }
    // 0x800BD138: sb          $t4, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r12;
    // 0x800BD13C: lb          $v0, 0x26($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X26);
    // 0x800BD140: b           L_800BD150
    // 0x800BD144: nop

        goto L_800BD150;
    // 0x800BD144: nop

    // 0x800BD148: b           L_800BD150
    // 0x800BD14C: nop

        goto L_800BD150;
    // 0x800BD14C: nop

L_800BD150:
    // 0x800BD150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD154: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800BD158: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800BD15C: jr          $ra
    // 0x800BD160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BD160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006A898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A898: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006A89C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006A8A0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006A8A4: lh          $t7, 0x7608($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7608);
    // 0x8006A8A8: lh          $t6, 0x7600($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7600);
    // 0x8006A8AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A8B0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8006A8B4: sh          $t8, 0x7600($at)
    MEM_H(0X7600, ctx->r1) = ctx->r24;
    // 0x8006A8B8: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8006A8BC:
    // 0x8006A8BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006A8C0: lw          $t0, -0x1BD8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1BD8);
    // 0x8006A8C4: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x8006A8C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8006A8CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8006A8D0: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8006A8D4: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8006A8D8: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8006A8DC: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8006A8E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8006A8E4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006A8E8: lh          $t9, 0x7608($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7608);
    // 0x8006A8EC: lh          $t5, -0x4900($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X4900);
    // 0x8006A8F0: nop

    // 0x8006A8F4: slt         $at, $t9, $t5
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8006A8F8: bne         $at, $zero, L_8006A908
    if (ctx->r1 != 0) {
        // 0x8006A8FC: nop
    
            goto L_8006A908;
    }
    // 0x8006A8FC: nop

    // 0x8006A900: b           L_8006A920
    // 0x8006A904: nop

        goto L_8006A920;
    // 0x8006A904: nop

L_8006A908:
    // 0x8006A908: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8006A90C: nop

    // 0x8006A910: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8006A914: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8006A918: bne         $at, $zero, L_8006A8BC
    if (ctx->r1 != 0) {
        // 0x8006A91C: sw          $t7, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r15;
            goto L_8006A8BC;
    }
    // 0x8006A91C: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
L_8006A920:
    // 0x8006A920: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8006A924: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8006A928: subu        $t2, $t0, $t8
    ctx->r10 = SUB32(ctx->r8, ctx->r24);
    // 0x8006A92C: sh          $t2, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r10;
    // 0x8006A930: lh          $v0, 0x6($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X6);
    // 0x8006A934: nop

    // 0x8006A938: andi        $t1, $v0, 0xF
    ctx->r9 = ctx->r2 & 0XF;
    // 0x8006A93C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8006A940: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8006A944: b           L_8006A954
    // 0x8006A948: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_8006A954;
    // 0x8006A948: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x8006A94C: b           L_8006A954
    // 0x8006A950: nop

        goto L_8006A954;
    // 0x8006A950: nop

L_8006A954:
    // 0x8006A954: jr          $ra
    // 0x8006A958: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8006A958: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008C684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C684: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008C688: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8008C68C:
    // 0x8008C68C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8008C690: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8008C694: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008C698: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008C69C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008C6A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008C6A4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008C6A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008C6AC: lh          $t9, 0x4234($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4234);
    // 0x8008C6B0: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008C6B4: nop

    // 0x8008C6B8: bne         $t6, $t9, L_8008C750
    if (ctx->r14 != ctx->r25) {
        // 0x8008C6BC: nop
    
            goto L_8008C750;
    }
    // 0x8008C6BC: nop

    // 0x8008C6C0: lh          $t1, 0x2($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X2);
    // 0x8008C6C4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008C6C8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008C6CC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008C6D0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008C6D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C6D8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008C6DC: sw          $t0, 0x4D48($at)
    MEM_W(0X4D48, ctx->r1) = ctx->r8;
    // 0x8008C6E0: lh          $t3, 0x4($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X4);
    // 0x8008C6E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008C6E8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8008C6EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008C6F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008C6F4: lh          $t4, 0x2($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X2);
    // 0x8008C6F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C6FC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008C700: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008C704: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008C708: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008C70C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008C710: swc1        $f10, 0x4D4C($at)
    MEM_W(0X4D4C, ctx->r1) = ctx->f10.u32l;
    // 0x8008C714: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8008C718: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008C71C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8008C720: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008C724: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008C728: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x8008C72C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C730: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8008C734: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8008C738: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x8008C73C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008C740: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008C744: swc1        $f6, 0x4D50($at)
    MEM_W(0X4D50, ctx->r1) = ctx->f6.u32l;
    // 0x8008C748: b           L_8008C768
    // 0x8008C74C: nop

        goto L_8008C768;
    // 0x8008C74C: nop

L_8008C750:
    // 0x8008C750: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8008C754: nop

    // 0x8008C758: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8008C75C: slti        $at, $t1, 0x4E
    ctx->r1 = SIGNED(ctx->r9) < 0X4E ? 1 : 0;
    // 0x8008C760: bne         $at, $zero, L_8008C68C
    if (ctx->r1 != 0) {
        // 0x8008C764: sw          $t1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r9;
            goto L_8008C68C;
    }
    // 0x8008C764: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
L_8008C768:
    // 0x8008C768: b           L_8008C770
    // 0x8008C76C: nop

        goto L_8008C770;
    // 0x8008C76C: nop

L_8008C770:
    // 0x8008C770: jr          $ra
    // 0x8008C774: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008C774: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800E64D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E64D0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E64D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E64D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E64DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E64E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E64E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E64E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E64EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E64F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E64F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E64F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E64FC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E6500: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800E6504: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800E6508: nop

    // 0x800E650C: bne         $t0, $zero, L_800E6554
    if (ctx->r8 != 0) {
        // 0x800E6510: nop
    
            goto L_800E6554;
    }
    // 0x800E6510: nop

    // 0x800E6514: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E6518: nop

    // 0x800E651C: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800E6520: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E6524: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800E6528: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800E652C: nop

    // 0x800E6530: beq         $t3, $at, L_800E6544
    if (ctx->r11 == ctx->r1) {
        // 0x800E6534: nop
    
            goto L_800E6544;
    }
    // 0x800E6534: nop

    // 0x800E6538: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E653C: nop

    // 0x800E6540: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E6544:
    // 0x800E6544: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E6548: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x800E654C: b           L_800E65FC
    // 0x800E6550: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
        goto L_800E65FC;
    // 0x800E6550: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_800E6554:
    // 0x800E6554: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800E6558: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x800E655C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E6560: bne         $t7, $at, L_800E6588
    if (ctx->r15 != ctx->r1) {
        // 0x800E6564: nop
    
            goto L_800E6588;
    }
    // 0x800E6564: nop

    // 0x800E6568: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800E656C: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x800E6570: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x800E6574: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800E6578: nop

    // 0x800E657C: lh          $t1, 0xB2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB2);
    // 0x800E6580: b           L_800E65FC
    // 0x800E6584: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
        goto L_800E65FC;
    // 0x800E6584: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
L_800E6588:
    // 0x800E6588: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E658C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800E6590: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800E6594: nop

    // 0x800E6598: bne         $t3, $at, L_800E65AC
    if (ctx->r11 != ctx->r1) {
        // 0x800E659C: nop
    
            goto L_800E65AC;
    }
    // 0x800E659C: nop

    // 0x800E65A0: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800E65A4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800E65A8: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
L_800E65AC:
    // 0x800E65AC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E65B0: nop

    // 0x800E65B4: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x800E65B8: nop

    // 0x800E65BC: sh          $t7, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r15;
    // 0x800E65C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E65C4: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800E65C8: nop

    // 0x800E65CC: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x800E65D0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800E65D4: nop

    // 0x800E65D8: lwc1        $f12, 0x44($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X44);
    // 0x800E65DC: nop

    // 0x800E65E0: swc1        $f12, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f12.u32l;
    // 0x800E65E4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E65E8: nop

    // 0x800E65EC: swc1        $f12, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f12.u32l;
    // 0x800E65F0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800E65F4: nop

    // 0x800E65F8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E65FC:
    // 0x800E65FC: b           L_800E6604
    // 0x800E6600: nop

        goto L_800E6604;
    // 0x800E6600: nop

L_800E6604:
    // 0x800E6604: jr          $ra
    // 0x800E6608: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E6608: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80098AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098AA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80098AA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80098AAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80098AB0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80098AB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80098AB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80098ABC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80098AC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80098AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80098AC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80098ACC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80098AD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80098AD4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80098AD8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80098ADC: nop

    // 0x80098AE0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80098AE4: nop

    // 0x80098AE8: bne         $t1, $zero, L_80098B4C
    if (ctx->r9 != 0) {
        // 0x80098AEC: nop
    
            goto L_80098B4C;
    }
    // 0x80098AEC: nop

    // 0x80098AF0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80098AF4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80098AF8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80098AFC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80098B00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80098B04: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80098B08: nop

    // 0x80098B0C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80098B10: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80098B14: nop

    // 0x80098B18: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80098B1C: nop

    // 0x80098B20: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80098B24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80098B28: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80098B2C: nop

    // 0x80098B30: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x80098B34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098B38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098B3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80098B40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80098B44: jal         0x80019448
    // 0x80098B48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x80098B48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
L_80098B4C:
    // 0x80098B4C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80098B50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098B54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098B58: jal         0x8002A1FC
    // 0x80098B5C: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x80098B5C: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_1:
    // 0x80098B60: beq         $v0, $zero, L_80098C68
    if (ctx->r2 == 0) {
        // 0x80098B64: nop
    
            goto L_80098C68;
    }
    // 0x80098B64: nop

    // 0x80098B68: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80098B6C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80098B70: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80098B74: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80098B78: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80098B7C: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80098B80: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80098B84: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80098B88: jal         0x80015634
    // 0x80098B8C: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_2;
    // 0x80098B8C: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    after_2:
    // 0x80098B90: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80098B94: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80098B98: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80098B9C: lwc1        $f12, 0x3C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80098BA0: jal         0x8002A800
    // 0x80098BA4: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8002A800(rdram, ctx);
        goto after_3;
    // 0x80098BA4: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_3:
    // 0x80098BA8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80098BAC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80098BB0: nop

    // 0x80098BB4: beq         $t0, $zero, L_80098BE0
    if (ctx->r8 == 0) {
        // 0x80098BB8: nop
    
            goto L_80098BE0;
    }
    // 0x80098BB8: nop

    // 0x80098BBC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80098BC0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80098BC4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80098BC8: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80098BCC: jal         0x80015538
    // 0x80098BD0: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80098BD0: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x80098BD4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80098BD8: nop

    // 0x80098BDC: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
L_80098BE0:
    // 0x80098BE0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80098BE4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80098BE8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80098BEC: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80098BF0: lwc1        $f16, 0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80098BF4: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80098BF8: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80098BFC: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80098C00: jal         0x800156C4
    // 0x80098C04: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_5;
    // 0x80098C04: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_5:
    // 0x80098C08: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80098C0C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80098C10: jal         0x80015744
    // 0x80098C14: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_6;
    // 0x80098C14: nop

    after_6:
    // 0x80098C18: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80098C1C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80098C20: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80098C24: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80098C28: jal         0x8002A800
    // 0x80098C2C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8002A800(rdram, ctx);
        goto after_7;
    // 0x80098C2C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_7:
    // 0x80098C30: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80098C34: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80098C38: nop

    // 0x80098C3C: beq         $t7, $zero, L_80098C68
    if (ctx->r15 == 0) {
        // 0x80098C40: nop
    
            goto L_80098C68;
    }
    // 0x80098C40: nop

    // 0x80098C44: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80098C48: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80098C4C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80098C50: lwc1        $f12, 0x40($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X40);
    // 0x80098C54: jal         0x80015538
    // 0x80098C58: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x80098C58: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_8:
    // 0x80098C5C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80098C60: nop

    // 0x80098C64: swc1        $f0, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f0.u32l;
L_80098C68:
    // 0x80098C68: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80098C6C: nop

    // 0x80098C70: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80098C74: nop

    // 0x80098C78: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x80098C7C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80098C80: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80098C84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80098C88: lwc1        $f10, 0x40($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X40);
    // 0x80098C8C: nop

    // 0x80098C90: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80098C94: swc1        $f16, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f16.u32l;
    // 0x80098C98: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80098C9C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80098CA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80098CA4: lwc1        $f18, 0x18($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X18);
    // 0x80098CA8: nop

    // 0x80098CAC: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80098CB0: nop

    // 0x80098CB4: bc1f        L_80098CD8
    if (!c1cs) {
        // 0x80098CB8: nop
    
            goto L_80098CD8;
    }
    // 0x80098CB8: nop

    // 0x80098CBC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80098CC0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80098CC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80098CC8: lwc1        $f6, 0x18($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X18);
    // 0x80098CCC: nop

    // 0x80098CD0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80098CD4: swc1        $f10, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f10.u32l;
L_80098CD8:
    // 0x80098CD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098CDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098CE0: jal         0x80028FA0
    // 0x80098CE4: nop

    func_80028FA0(rdram, ctx);
        goto after_9;
    // 0x80098CE4: nop

    after_9:
    // 0x80098CE8: beq         $v0, $zero, L_80098CF8
    if (ctx->r2 == 0) {
        // 0x80098CEC: nop
    
            goto L_80098CF8;
    }
    // 0x80098CEC: nop

    // 0x80098CF0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80098CF4: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
L_80098CF8:
    // 0x80098CF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098CFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098D00: jal         0x80029D8C
    // 0x80098D04: nop

    func_80029D8C(rdram, ctx);
        goto after_10;
    // 0x80098D04: nop

    after_10:
    // 0x80098D08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80098D0C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80098D10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098D14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098D18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80098D1C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80098D20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80098D24: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80098D28: jal         0x80029018
    // 0x80098D2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_11;
    // 0x80098D2C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_11:
    // 0x80098D30: beq         $v0, $zero, L_80098D40
    if (ctx->r2 == 0) {
        // 0x80098D34: nop
    
            goto L_80098D40;
    }
    // 0x80098D34: nop

    // 0x80098D38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80098D3C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_80098D40:
    // 0x80098D40: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80098D44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80098D48: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80098D4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098D50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098D54: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80098D58: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80098D5C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80098D60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80098D64: jal         0x800295C0
    // 0x80098D68: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_12;
    // 0x80098D68: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x80098D6C: beq         $v0, $zero, L_80098D7C
    if (ctx->r2 == 0) {
        // 0x80098D70: nop
    
            goto L_80098D7C;
    }
    // 0x80098D70: nop

    // 0x80098D74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80098D78: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_80098D7C:
    // 0x80098D7C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80098D80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80098D84: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80098D88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098D8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098D90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80098D94: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80098D98: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80098D9C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80098DA0: jal         0x800295C0
    // 0x80098DA4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_13;
    // 0x80098DA4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x80098DA8: beq         $v0, $zero, L_80098DB8
    if (ctx->r2 == 0) {
        // 0x80098DAC: nop
    
            goto L_80098DB8;
    }
    // 0x80098DAC: nop

    // 0x80098DB0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80098DB4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_80098DB8:
    // 0x80098DB8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80098DBC: nop

    // 0x80098DC0: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80098DC4: nop

    // 0x80098DC8: beq         $t0, $zero, L_80098DD8
    if (ctx->r8 == 0) {
        // 0x80098DCC: nop
    
            goto L_80098DD8;
    }
    // 0x80098DCC: nop

    // 0x80098DD0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80098DD4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_80098DD8:
    // 0x80098DD8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80098DDC: nop

    // 0x80098DE0: beq         $t2, $zero, L_80098E00
    if (ctx->r10 == 0) {
        // 0x80098DE4: nop
    
            goto L_80098E00;
    }
    // 0x80098DE4: nop

    // 0x80098DE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098DEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098DF0: jal         0x8002B0E4
    // 0x80098DF4: nop

    func_8002B0E4(rdram, ctx);
        goto after_14;
    // 0x80098DF4: nop

    after_14:
    // 0x80098DF8: b           L_80098E08
    // 0x80098DFC: nop

        goto L_80098E08;
    // 0x80098DFC: nop

L_80098E00:
    // 0x80098E00: b           L_80098E08
    // 0x80098E04: nop

        goto L_80098E08;
    // 0x80098E04: nop

L_80098E08:
    // 0x80098E08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80098E0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80098E10: jr          $ra
    // 0x80098E14: nop

    return;
    // 0x80098E14: nop

;}
RECOMP_FUNC void func_800CD528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD528: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800CD52C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CD530: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CD534: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CD538: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CD53C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD540: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CD544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD548: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CD54C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CD550: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CD554: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800CD558: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CD55C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CD560: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800CD564: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CD568: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CD56C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CD570: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CD574: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CD578: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CD57C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800CD580: nop

    // 0x800CD584: sw          $t2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r10;
    // 0x800CD588: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800CD58C: nop

    // 0x800CD590: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x800CD594: nop

    // 0x800CD598: bne         $t4, $zero, L_800CD5D0
    if (ctx->r12 != 0) {
        // 0x800CD59C: nop
    
            goto L_800CD5D0;
    }
    // 0x800CD59C: nop

    // 0x800CD5A0: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800CD5A4: nop

    // 0x800CD5A8: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x800CD5AC: nop

    // 0x800CD5B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800CD5B4: sb          $t7, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r15;
    // 0x800CD5B8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800CD5BC: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x800CD5C0: sh          $t8, 0xBC($t9)
    MEM_H(0XBC, ctx->r25) = ctx->r24;
    // 0x800CD5C4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800CD5C8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800CD5CC: sh          $t0, 0xBE($t1)
    MEM_H(0XBE, ctx->r9) = ctx->r8;
L_800CD5D0:
    // 0x800CD5D0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800CD5D4: nop

    // 0x800CD5D8: lh          $t3, 0xBC($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBC);
    // 0x800CD5DC: nop

    // 0x800CD5E0: beq         $t3, $zero, L_800CD658
    if (ctx->r11 == 0) {
        // 0x800CD5E4: nop
    
            goto L_800CD658;
    }
    // 0x800CD5E4: nop

    // 0x800CD5E8: lh          $t4, 0xC0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XC0);
    // 0x800CD5EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CD5F0: bne         $t4, $at, L_800CD658
    if (ctx->r12 != ctx->r1) {
        // 0x800CD5F4: nop
    
            goto L_800CD658;
    }
    // 0x800CD5F4: nop

    // 0x800CD5F8: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x800CD5FC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800CD600: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CD604: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD608: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CD60C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD610: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CD614: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800CD618: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x800CD61C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800CD620: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CD624: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800CD628: nop

    // 0x800CD62C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800CD630: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
    // 0x800CD634: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800CD638: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x800CD63C: lh          $t0, 0xBC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBC);
    // 0x800CD640: nop

    // 0x800CD644: bne         $t0, $at, L_800CD658
    if (ctx->r8 != ctx->r1) {
        // 0x800CD648: nop
    
            goto L_800CD658;
    }
    // 0x800CD648: nop

    // 0x800CD64C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800CD650: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800CD654: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
L_800CD658:
    // 0x800CD658: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800CD65C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x800CD660: lh          $t4, 0xBC($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XBC);
    // 0x800CD664: nop

    // 0x800CD668: beq         $t4, $at, L_800CD6E0
    if (ctx->r12 == ctx->r1) {
        // 0x800CD66C: nop
    
            goto L_800CD6E0;
    }
    // 0x800CD66C: nop

    // 0x800CD670: lh          $t6, 0xC0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC0);
    // 0x800CD674: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CD678: bne         $t6, $at, L_800CD6E0
    if (ctx->r14 != ctx->r1) {
        // 0x800CD67C: nop
    
            goto L_800CD6E0;
    }
    // 0x800CD67C: nop

    // 0x800CD680: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x800CD684: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CD688: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800CD68C: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800CD690: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800CD694: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800CD698: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800CD69C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CD6A0: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x800CD6A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800CD6A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CD6AC: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800CD6B0: nop

    // 0x800CD6B4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800CD6B8: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x800CD6BC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800CD6C0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800CD6C4: lh          $t1, 0xBC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBC);
    // 0x800CD6C8: nop

    // 0x800CD6CC: bne         $t1, $at, L_800CD6E0
    if (ctx->r9 != ctx->r1) {
        // 0x800CD6D0: nop
    
            goto L_800CD6E0;
    }
    // 0x800CD6D0: nop

    // 0x800CD6D4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800CD6D8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800CD6DC: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_800CD6E0:
    // 0x800CD6E0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800CD6E4: nop

    // 0x800CD6E8: lh          $t6, 0xBC($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XBC);
    // 0x800CD6EC: nop

    // 0x800CD6F0: bne         $t6, $zero, L_800CD710
    if (ctx->r14 != 0) {
        // 0x800CD6F4: nop
    
            goto L_800CD710;
    }
    // 0x800CD6F4: nop

    // 0x800CD6F8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800CD6FC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800CD700: sh          $t7, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r15;
    // 0x800CD704: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800CD708: b           L_800CD728
    // 0x800CD70C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_800CD728;
    // 0x800CD70C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800CD710:
    // 0x800CD710: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800CD714: nop

    // 0x800CD718: lh          $t0, 0xBC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBC);
    // 0x800CD71C: nop

    // 0x800CD720: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800CD724: sh          $t1, 0xBC($t9)
    MEM_H(0XBC, ctx->r25) = ctx->r9;
L_800CD728:
    // 0x800CD728: b           L_800CD730
    // 0x800CD72C: nop

        goto L_800CD730;
    // 0x800CD72C: nop

L_800CD730:
    // 0x800CD730: jr          $ra
    // 0x800CD734: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800CD734: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007121C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007121C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80071220: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071224: sb          $t6, 0x7A20($at)
    MEM_B(0X7A20, ctx->r1) = ctx->r14;
    // 0x80071228: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007122C: sh          $zero, 0x7A30($at)
    MEM_H(0X7A30, ctx->r1) = 0;
    // 0x80071230: jr          $ra
    // 0x80071234: nop

    return;
    // 0x80071234: nop

    // 0x80071238: jr          $ra
    // 0x8007123C: nop

    return;
    // 0x8007123C: nop

;}
RECOMP_FUNC void Unused_DebugPrint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FAF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005FAF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005FAFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8005FB00: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8005FB04: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8005FB08: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8005FB0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005FB10: jal         0x8005F96C
    // 0x8005FB14: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    Debug_SetTextColor(rdram, ctx);
        goto after_0;
    // 0x8005FB14: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x8005FB18: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_8005FB1C:
    // 0x8005FB1C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8005FB20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8005FB24: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x8005FB28: lbu         $a2, 0x0($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X0);
    // 0x8005FB2C: addiu       $a1, $a1, 0x39C4
    ctx->r5 = ADD32(ctx->r5, 0X39C4);
    // 0x8005FB30: jal         0x80036BE4
    // 0x8005FB34: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x8005FB34: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_1:
    // 0x8005FB38: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8005FB3C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8005FB40: jal         0x8005F9EC
    // 0x8005FB44: nop

    Debug_PrintXY(rdram, ctx);
        goto after_2;
    // 0x8005FB44: nop

    after_2:
    // 0x8005FB48: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8005FB4C: nop

    // 0x8005FB50: addiu       $t8, $t7, 0x12
    ctx->r24 = ADD32(ctx->r15, 0X12);
    // 0x8005FB54: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8005FB58: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8005FB5C: nop

    // 0x8005FB60: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8005FB64: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8005FB68: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x8005FB6C: nop

    // 0x8005FB70: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8005FB74: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8005FB78: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x8005FB7C: bne         $at, $zero, L_8005FB1C
    if (ctx->r1 != 0) {
        // 0x8005FB80: sb          $t2, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r10;
            goto L_8005FB1C;
    }
    // 0x8005FB80: sb          $t2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r10;
    // 0x8005FB84: jal         0x8005FA90
    // 0x8005FB88: nop

    stub_8005FA90(rdram, ctx);
        goto after_3;
    // 0x8005FB88: nop

    after_3:
    // 0x8005FB8C: b           L_8005FB94
    // 0x8005FB90: nop

        goto L_8005FB94;
    // 0x8005FB90: nop

L_8005FB94:
    // 0x8005FB94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005FB98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005FB9C: jr          $ra
    // 0x8005FBA0: nop

    return;
    // 0x8005FBA0: nop

;}
RECOMP_FUNC void func_800D0B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D0B48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D0B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D0B50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D0B54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D0B58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D0B5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D0B60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D0B64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D0B68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D0B6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D0B70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D0B74: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800D0B78: nop

    // 0x800D0B7C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800D0B80: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x800D0B84: beq         $at, $zero, L_800D0C08
    if (ctx->r1 == 0) {
        // 0x800D0B88: nop
    
            goto L_800D0C08;
    }
    // 0x800D0B88: nop

    // 0x800D0B8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D0B90: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D0B94: addu        $at, $at, $t9
    gpr jr_addend_800D0BA0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D0B98: lw          $t9, 0x505C($at)
    ctx->r25 = ADD32(ctx->r1, 0X505C);
    // 0x800D0B9C: nop

    // 0x800D0BA0: jr          $t9
    // 0x800D0BA4: nop

    switch (jr_addend_800D0BA0 >> 2) {
        case 0: goto L_800D0BA8; break;
        case 1: goto L_800D0BB8; break;
        case 2: goto L_800D0BC8; break;
        case 3: goto L_800D0BD8; break;
        case 4: goto L_800D0BE8; break;
        case 5: goto L_800D0BF8; break;
        default: switch_error(__func__, 0x800D0BA0, 0x8011505C);
    }
    // 0x800D0BA4: nop

L_800D0BA8:
    // 0x800D0BA8: jal         0x800CFD38
    // 0x800D0BAC: nop

    func_800CFD38(rdram, ctx);
        goto after_0;
    // 0x800D0BAC: nop

    after_0:
    // 0x800D0BB0: b           L_800D0C10
    // 0x800D0BB4: nop

        goto L_800D0C10;
    // 0x800D0BB4: nop

L_800D0BB8:
    // 0x800D0BB8: jal         0x800CFEC4
    // 0x800D0BBC: nop

    func_800CFEC4(rdram, ctx);
        goto after_1;
    // 0x800D0BBC: nop

    after_1:
    // 0x800D0BC0: b           L_800D0C10
    // 0x800D0BC4: nop

        goto L_800D0C10;
    // 0x800D0BC4: nop

L_800D0BC8:
    // 0x800D0BC8: jal         0x800D0194
    // 0x800D0BCC: nop

    func_800D0194(rdram, ctx);
        goto after_2;
    // 0x800D0BCC: nop

    after_2:
    // 0x800D0BD0: b           L_800D0C10
    // 0x800D0BD4: nop

        goto L_800D0C10;
    // 0x800D0BD4: nop

L_800D0BD8:
    // 0x800D0BD8: jal         0x800D02AC
    // 0x800D0BDC: nop

    func_800D02AC(rdram, ctx);
        goto after_3;
    // 0x800D0BDC: nop

    after_3:
    // 0x800D0BE0: b           L_800D0C10
    // 0x800D0BE4: nop

        goto L_800D0C10;
    // 0x800D0BE4: nop

L_800D0BE8:
    // 0x800D0BE8: jal         0x800D03EC
    // 0x800D0BEC: nop

    func_800D03EC(rdram, ctx);
        goto after_4;
    // 0x800D0BEC: nop

    after_4:
    // 0x800D0BF0: b           L_800D0C10
    // 0x800D0BF4: nop

        goto L_800D0C10;
    // 0x800D0BF4: nop

L_800D0BF8:
    // 0x800D0BF8: jal         0x800D06CC
    // 0x800D0BFC: nop

    func_800D06CC(rdram, ctx);
        goto after_5;
    // 0x800D0BFC: nop

    after_5:
    // 0x800D0C00: b           L_800D0C10
    // 0x800D0C04: nop

        goto L_800D0C10;
    // 0x800D0C04: nop

L_800D0C08:
    // 0x800D0C08: b           L_800D0C10
    // 0x800D0C0C: nop

        goto L_800D0C10;
    // 0x800D0C0C: nop

L_800D0C10:
    // 0x800D0C10: b           L_800D0C18
    // 0x800D0C14: nop

        goto L_800D0C18;
    // 0x800D0C14: nop

L_800D0C18:
    // 0x800D0C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D0C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D0C20: jr          $ra
    // 0x800D0C24: nop

    return;
    // 0x800D0C24: nop

;}
RECOMP_FUNC void func_8006BAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BAC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006BAC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006BACC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006BAD0: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006BAD4: nop

    // 0x8006BAD8: bne         $t6, $zero, L_8006BB04
    if (ctx->r14 != 0) {
        // 0x8006BADC: nop
    
            goto L_8006BB04;
    }
    // 0x8006BADC: nop

    // 0x8006BAE0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006BAE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BAE8: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006BAEC: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x8006BAF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BAF4: sh          $t8, 0x7942($at)
    MEM_H(0X7942, ctx->r1) = ctx->r24;
    // 0x8006BAF8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8006BAFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BB00: sh          $t9, 0x7946($at)
    MEM_H(0X7946, ctx->r1) = ctx->r25;
L_8006BB04:
    // 0x8006BB04: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x8006BB08: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8006BB0C:
    // 0x8006BB0C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BB10: jal         0x80026E58
    // 0x8006BB14: addiu       $a0, $zero, 0x267
    ctx->r4 = ADD32(0, 0X267);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_0;
    // 0x8006BB14: addiu       $a0, $zero, 0x267
    ctx->r4 = ADD32(0, 0X267);
    after_0:
    // 0x8006BB18: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8006BB1C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BB20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006BB24: bne         $t1, $at, L_8006BB3C
    if (ctx->r9 != ctx->r1) {
        // 0x8006BB28: nop
    
            goto L_8006BB3C;
    }
    // 0x8006BB28: nop

    // 0x8006BB2C: b           L_8006BBDC
    // 0x8006BB30: nop

        goto L_8006BBDC;
    // 0x8006BB30: nop

    // 0x8006BB34: b           L_8006BBD4
    // 0x8006BB38: nop

        goto L_8006BBD4;
    // 0x8006BB38: nop

L_8006BB3C:
    // 0x8006BB3C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006BB40: lhu         $t2, 0x7942($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X7942);
    // 0x8006BB44: nop

    // 0x8006BB48: bne         $t2, $zero, L_8006BBB8
    if (ctx->r10 != 0) {
        // 0x8006BB4C: nop
    
            goto L_8006BBB8;
    }
    // 0x8006BB4C: nop

    // 0x8006BB50: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006BB54: lhu         $t3, 0x7946($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X7946);
    // 0x8006BB58: nop

    // 0x8006BB5C: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8006BB60: bne         $t4, $zero, L_8006BBA0
    if (ctx->r12 != 0) {
        // 0x8006BB64: nop
    
            goto L_8006BBA0;
    }
    // 0x8006BB64: nop

    // 0x8006BB68: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BB6C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8006BB70: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8006BB74: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006BB78: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006BB7C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006BB80: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8006BB84: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8006BB88: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8006BB8C: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x8006BB90: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x8006BB94: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x8006BB98: jal         0x80081468
    // 0x8006BB9C: addiu       $a0, $zero, 0x2C7
    ctx->r4 = ADD32(0, 0X2C7);
    func_80081468(rdram, ctx);
        goto after_1;
    // 0x8006BB9C: addiu       $a0, $zero, 0x2C7
    ctx->r4 = ADD32(0, 0X2C7);
    after_1:
L_8006BBA0:
    // 0x8006BBA0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006BBA4: lhu         $t9, 0x7946($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7946);
    // 0x8006BBA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BBAC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8006BBB0: b           L_8006BBCC
    // 0x8006BBB4: sh          $t0, 0x7946($at)
    MEM_H(0X7946, ctx->r1) = ctx->r8;
        goto L_8006BBCC;
    // 0x8006BBB4: sh          $t0, 0x7946($at)
    MEM_H(0X7946, ctx->r1) = ctx->r8;
L_8006BBB8:
    // 0x8006BBB8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006BBBC: lhu         $t1, 0x7942($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X7942);
    // 0x8006BBC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BBC4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8006BBC8: sh          $t2, 0x7942($at)
    MEM_H(0X7942, ctx->r1) = ctx->r10;
L_8006BBCC:
    // 0x8006BBCC: b           L_8006BBDC
    // 0x8006BBD0: nop

        goto L_8006BBDC;
    // 0x8006BBD0: nop

L_8006BBD4:
    // 0x8006BBD4: b           L_8006BB0C
    // 0x8006BBD8: nop

        goto L_8006BB0C;
    // 0x8006BBD8: nop

L_8006BBDC:
    // 0x8006BBDC: b           L_8006BBE4
    // 0x8006BBE0: nop

        goto L_8006BBE4;
    // 0x8006BBE0: nop

L_8006BBE4:
    // 0x8006BBE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006BBE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006BBEC: jr          $ra
    // 0x8006BBF0: nop

    return;
    // 0x8006BBF0: nop

;}
RECOMP_FUNC void Debug_Action_Menu(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FDD48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FDD4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FDD50: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x800FDD54: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x800FDD58: jal         0x8005F96C
    // 0x800FDD5C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    Debug_SetTextColor(rdram, ctx);
        goto after_0;
    // 0x800FDD5C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x800FDD60: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FDD64: lw          $a2, -0x1DBC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1DBC);
    // 0x800FDD68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDD6C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDD70: addiu       $a1, $a1, 0x4230
    ctx->r5 = ADD32(ctx->r5, 0X4230);
    // 0x800FDD74: jal         0x80036BE4
    // 0x800FDD78: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x800FDD78: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_1:
    // 0x800FDD7C: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x800FDD80: jal         0x8005F9EC
    // 0x800FDD84: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    Debug_PrintXY(rdram, ctx);
        goto after_2;
    // 0x800FDD84: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    after_2:
    // 0x800FDD88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDD8C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDD90: addiu       $a1, $a1, 0x4234
    ctx->r5 = ADD32(ctx->r5, 0X4234);
    // 0x800FDD94: jal         0x80036BE4
    // 0x800FDD98: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_3;
    // 0x800FDD98: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_3:
    // 0x800FDD9C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDDA0: jal         0x8005F9EC
    // 0x800FDDA4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_4;
    // 0x800FDDA4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x800FDDA8: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800FDDAC: lw          $a2, 0x4228($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4228);
    // 0x800FDDB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDDB4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDDB8: addiu       $a1, $a1, 0x424C
    ctx->r5 = ADD32(ctx->r5, 0X424C);
    // 0x800FDDBC: jal         0x80036BE4
    // 0x800FDDC0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x800FDDC0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_5:
    // 0x800FDDC4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDDC8: jal         0x8005F9EC
    // 0x800FDDCC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_6;
    // 0x800FDDCC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_6:
    // 0x800FDDD0: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FDDD4: lw          $a2, -0x1BD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1BD8);
    // 0x800FDDD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDDDC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDDE0: addiu       $a1, $a1, 0x4260
    ctx->r5 = ADD32(ctx->r5, 0X4260);
    // 0x800FDDE4: jal         0x80036BE4
    // 0x800FDDE8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x800FDDE8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_7:
    // 0x800FDDEC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDDF0: jal         0x8005F9EC
    // 0x800FDDF4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    Debug_PrintXY(rdram, ctx);
        goto after_8;
    // 0x800FDDF4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_8:
    // 0x800FDDF8: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FDDFC: lw          $a2, -0x1BD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1BD8);
    // 0x800FDE00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDE04: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDE08: addiu       $a1, $a1, 0x4278
    ctx->r5 = ADD32(ctx->r5, 0X4278);
    // 0x800FDE0C: jal         0x80036BE4
    // 0x800FDE10: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x800FDE10: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_9:
    // 0x800FDE14: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDE18: jal         0x8005F9EC
    // 0x800FDE1C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_10;
    // 0x800FDE1C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_10:
    // 0x800FDE20: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FDE24: lw          $a2, 0x65EC($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X65EC);
    // 0x800FDE28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDE2C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDE30: addiu       $a1, $a1, 0x4290
    ctx->r5 = ADD32(ctx->r5, 0X4290);
    // 0x800FDE34: jal         0x80036BE4
    // 0x800FDE38: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_11;
    // 0x800FDE38: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_11:
    // 0x800FDE3C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDE40: jal         0x8005F9EC
    // 0x800FDE44: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    Debug_PrintXY(rdram, ctx);
        goto after_12;
    // 0x800FDE44: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_12:
    // 0x800FDE48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDE4C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDE50: addiu       $a1, $a1, 0x42A4
    ctx->r5 = ADD32(ctx->r5, 0X42A4);
    // 0x800FDE54: jal         0x80036BE4
    // 0x800FDE58: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_13;
    // 0x800FDE58: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_13:
    // 0x800FDE5C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDE60: jal         0x8005F9EC
    // 0x800FDE64: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    Debug_PrintXY(rdram, ctx);
        goto after_14;
    // 0x800FDE64: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_14:
    // 0x800FDE68: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FDE6C: lw          $a2, -0x1BD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1BD8);
    // 0x800FDE70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDE74: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDE78: addiu       $a1, $a1, 0x42B4
    ctx->r5 = ADD32(ctx->r5, 0X42B4);
    // 0x800FDE7C: jal         0x80036BE4
    // 0x800FDE80: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_15;
    // 0x800FDE80: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_15:
    // 0x800FDE84: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDE88: jal         0x8005F9EC
    // 0x800FDE8C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    Debug_PrintXY(rdram, ctx);
        goto after_16;
    // 0x800FDE8C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_16:
    // 0x800FDE90: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800FDE94: lw          $a2, 0x421C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X421C);
    // 0x800FDE98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDE9C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDEA0: addiu       $a1, $a1, 0x42CC
    ctx->r5 = ADD32(ctx->r5, 0X42CC);
    // 0x800FDEA4: jal         0x80036BE4
    // 0x800FDEA8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_17;
    // 0x800FDEA8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_17:
    // 0x800FDEAC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDEB0: jal         0x8005F9EC
    // 0x800FDEB4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    Debug_PrintXY(rdram, ctx);
        goto after_18;
    // 0x800FDEB4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_18:
    // 0x800FDEB8: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800FDEBC: lw          $a2, 0x4220($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4220);
    // 0x800FDEC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDEC4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDEC8: addiu       $a1, $a1, 0x42E4
    ctx->r5 = ADD32(ctx->r5, 0X42E4);
    // 0x800FDECC: jal         0x80036BE4
    // 0x800FDED0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_19;
    // 0x800FDED0: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_19:
    // 0x800FDED4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDED8: jal         0x8005F9EC
    // 0x800FDEDC: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    Debug_PrintXY(rdram, ctx);
        goto after_20;
    // 0x800FDEDC: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    after_20:
    // 0x800FDEE0: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800FDEE4: lw          $a2, 0x4224($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4224);
    // 0x800FDEE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDEEC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDEF0: addiu       $a1, $a1, 0x42FC
    ctx->r5 = ADD32(ctx->r5, 0X42FC);
    // 0x800FDEF4: jal         0x80036BE4
    // 0x800FDEF8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_21;
    // 0x800FDEF8: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_21:
    // 0x800FDEFC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDF00: jal         0x8005F9EC
    // 0x800FDF04: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    Debug_PrintXY(rdram, ctx);
        goto after_22;
    // 0x800FDF04: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_22:
    // 0x800FDF08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDF0C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDF10: addiu       $a1, $a1, 0x430C
    ctx->r5 = ADD32(ctx->r5, 0X430C);
    // 0x800FDF14: jal         0x80036BE4
    // 0x800FDF18: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_23;
    // 0x800FDF18: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_23:
    // 0x800FDF1C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FDF20: jal         0x8005F9EC
    // 0x800FDF24: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    Debug_PrintXY(rdram, ctx);
        goto after_24;
    // 0x800FDF24: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    after_24:
    // 0x800FDF28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDF2C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDF30: addiu       $a1, $a1, 0x431C
    ctx->r5 = ADD32(ctx->r5, 0X431C);
    // 0x800FDF34: jal         0x80036BE4
    // 0x800FDF38: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_25;
    // 0x800FDF38: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_25:
    // 0x800FDF3C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDF40: lw          $a1, 0x4210($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4210);
    // 0x800FDF44: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x800FDF48: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x800FDF4C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800FDF50: jal         0x8005F9EC
    // 0x800FDF54: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_26;
    // 0x800FDF54: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    after_26:
    // 0x800FDF58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FDF5C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FDF60: addiu       $a1, $a1, 0x4320
    ctx->r5 = ADD32(ctx->r5, 0X4320);
    // 0x800FDF64: jal         0x80036BE4
    // 0x800FDF68: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_27;
    // 0x800FDF68: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_27:
    // 0x800FDF6C: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    // 0x800FDF70: jal         0x8005F9EC
    // 0x800FDF74: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    Debug_PrintXY(rdram, ctx);
        goto after_28;
    // 0x800FDF74: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    after_28:
    // 0x800FDF78: jal         0x8005FA90
    // 0x800FDF7C: nop

    stub_8005FA90(rdram, ctx);
        goto after_29;
    // 0x800FDF7C: nop

    after_29:
    // 0x800FDF80: b           L_800FDF88
    // 0x800FDF84: nop

        goto L_800FDF88;
    // 0x800FDF84: nop

L_800FDF88:
    // 0x800FDF88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FDF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FDF90: jr          $ra
    // 0x800FDF94: nop

    return;
    // 0x800FDF94: nop

;}
RECOMP_FUNC void func_80093968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093968: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009396C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80093970: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80093974: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80093978: nop

    // 0x8009397C: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    // 0x80093980: jal         0x80093940
    // 0x80093984: nop

    func_80093940(rdram, ctx);
        goto after_0;
    // 0x80093984: nop

    after_0:
    // 0x80093988: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009398C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80093990: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x80093994: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80093998: lh          $t0, 0x6($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X6);
    // 0x8009399C: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x800939A0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800939A4: lh          $t9, 0x4($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X4);
    // 0x800939A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800939AC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800939B0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800939B4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800939B8: lh          $t1, 0x8($t7)
    ctx->r9 = MEM_H(ctx->r15, 0X8);
    // 0x800939BC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800939C0: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800939C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800939C8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800939CC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800939D0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800939D4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800939D8: jal         0x80027464
    // 0x800939DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x800939DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x800939E0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800939E4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800939E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800939EC: beq         $t2, $at, L_80093AA0
    if (ctx->r10 == ctx->r1) {
        // 0x800939F0: nop
    
            goto L_80093AA0;
    }
    // 0x800939F0: nop

    // 0x800939F4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800939F8: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x800939FC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80093A00: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80093A04: lw          $t3, 0x5100($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5100);
    // 0x80093A08: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80093A0C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80093A10: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x80093A14: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80093A18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80093A1C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80093A20: sh          $t4, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r12;
    // 0x80093A24: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80093A28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80093A2C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80093A30: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80093A34: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80093A38: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80093A3C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80093A40: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80093A44: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x80093A48: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80093A4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80093A50: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80093A54: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80093A58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80093A5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80093A60: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80093A64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80093A68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80093A6C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80093A70: swc1        $f4, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f4.u32l;
    // 0x80093A74: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80093A78: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x80093A7C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80093A80: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80093A84: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80093A88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80093A8C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80093A90: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80093A94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80093A98: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80093A9C: swc1        $f6, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f6.u32l;
L_80093AA0:
    // 0x80093AA0: b           L_80093AA8
    // 0x80093AA4: nop

        goto L_80093AA8;
    // 0x80093AA4: nop

L_80093AA8:
    // 0x80093AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80093AB0: jr          $ra
    // 0x80093AB4: nop

    return;
    // 0x80093AB4: nop

;}
RECOMP_FUNC void func_80082E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082E38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80082E3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80082E40: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80082E44: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80082E48: nop

    // 0x80082E4C: bne         $t6, $zero, L_80082E5C
    if (ctx->r14 != 0) {
        // 0x80082E50: nop
    
            goto L_80082E5C;
    }
    // 0x80082E50: nop

    // 0x80082E54: b           L_80083170
    // 0x80082E58: nop

        goto L_80083170;
    // 0x80082E58: nop

L_80082E5C:
    // 0x80082E5C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80082E60: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80082E64: sb          $t7, 0x488C($at)
    MEM_B(0X488C, ctx->r1) = ctx->r15;
    // 0x80082E68: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80082E6C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80082E70: jal         0x80025D4C
    // 0x80082E74: nop

    func_80025D4C(rdram, ctx);
        goto after_0;
    // 0x80082E74: nop

    after_0:
    // 0x80082E78: jal         0x8005FBD0
    // 0x80082E7C: nop

    func_8005FBD0(rdram, ctx);
        goto after_1;
    // 0x80082E7C: nop

    after_1:
    // 0x80082E80: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80082E84: nop

    // 0x80082E88: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x80082E8C: beq         $at, $zero, L_80082F10
    if (ctx->r1 == 0) {
        // 0x80082E90: nop
    
            goto L_80082F10;
    }
    // 0x80082E90: nop

    // 0x80082E94: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80082E98: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80082E9C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80082EA0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80082EA4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80082EA8: lb          $t1, -0x3433($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X3433);
    // 0x80082EAC: nop

    // 0x80082EB0: sb          $t1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r9;
    // 0x80082EB4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80082EB8: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80082EBC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80082EC0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80082EC4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80082EC8: lb          $t4, -0x3432($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X3432);
    // 0x80082ECC: nop

    // 0x80082ED0: sb          $t4, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r12;
    // 0x80082ED4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80082ED8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80082EDC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80082EE0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80082EE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80082EE8: lb          $t7, -0x3431($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X3431);
    // 0x80082EEC: nop

    // 0x80082EF0: sb          $t7, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r15;
    // 0x80082EF4: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80082EF8: lb          $a1, 0x26($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X26);
    // 0x80082EFC: lb          $a2, 0x25($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X25);
    // 0x80082F00: jal         0x8005FC98
    // 0x80082F04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8005FC98(rdram, ctx);
        goto after_2;
    // 0x80082F04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80082F08: b           L_80083104
    // 0x80082F0C: nop

        goto L_80083104;
    // 0x80082F0C: nop

L_80082F10:
    // 0x80082F10: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80082F14: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80082F18: bne         $t8, $at, L_80082FD8
    if (ctx->r24 != ctx->r1) {
        // 0x80082F1C: nop
    
            goto L_80082FD8;
    }
    // 0x80082F1C: nop

    // 0x80082F20: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80082F24: sb          $t9, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r25;
    // 0x80082F28: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80082F2C: sb          $t0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r8;
    // 0x80082F30: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80082F34: sb          $t1, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r9;
    // 0x80082F38: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80082F3C: lb          $a1, 0x26($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X26);
    // 0x80082F40: lb          $a2, 0x25($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X25);
    // 0x80082F44: jal         0x8005FC98
    // 0x80082F48: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8005FC98(rdram, ctx);
        goto after_3;
    // 0x80082F48: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_3:
    // 0x80082F4C: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x80082F50: lb          $t5, 0x26($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X26);
    // 0x80082F54: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80082F58: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80082F5C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80082F60: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80082F64: lb          $t8, 0x25($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X25);
    // 0x80082F68: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80082F6C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80082F70: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x80082F74: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80082F78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80082F7C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80082F80: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80082F84: sb          $t2, 0x47EB($at)
    MEM_B(0X47EB, ctx->r1) = ctx->r10;
    // 0x80082F88: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80082F8C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80082F90: jal         0x80025428
    // 0x80082F94: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80025428(rdram, ctx);
        goto after_4;
    // 0x80082F94: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_4:
    // 0x80082F98: sb          $zero, 0x24($sp)
    MEM_B(0X24, ctx->r29) = 0;
L_80082F9C:
    // 0x80082F9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80082FA0: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80082FA4: lb          $a1, 0x24($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X24);
    // 0x80082FA8: jal         0x80025568
    // 0x80082FAC: nop

    func_80025568(rdram, ctx);
        goto after_5;
    // 0x80082FAC: nop

    after_5:
    // 0x80082FB0: lb          $t0, 0x24($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X24);
    // 0x80082FB4: nop

    // 0x80082FB8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80082FBC: sll         $t3, $t1, 24
    ctx->r11 = S32(ctx->r9 << 24);
    // 0x80082FC0: sra         $t5, $t3, 24
    ctx->r13 = S32(SIGNED(ctx->r11) >> 24);
    // 0x80082FC4: slti        $at, $t5, 0x18
    ctx->r1 = SIGNED(ctx->r13) < 0X18 ? 1 : 0;
    // 0x80082FC8: bne         $at, $zero, L_80082F9C
    if (ctx->r1 != 0) {
        // 0x80082FCC: sb          $t1, 0x24($sp)
        MEM_B(0X24, ctx->r29) = ctx->r9;
            goto L_80082F9C;
    }
    // 0x80082FCC: sb          $t1, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r9;
    // 0x80082FD0: b           L_80083104
    // 0x80082FD4: nop

        goto L_80083104;
    // 0x80082FD4: nop

L_80082FD8:
    // 0x80082FD8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80082FDC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80082FE0: bne         $t4, $at, L_80083054
    if (ctx->r12 != ctx->r1) {
        // 0x80082FE4: nop
    
            goto L_80083054;
    }
    // 0x80082FE4: nop

    // 0x80082FE8: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80082FEC: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x80082FF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80082FF4: sb          $t7, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r15;
    // 0x80082FF8: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x80082FFC: sb          $t8, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r24;
    // 0x80083000: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x80083004: lb          $a1, 0x26($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X26);
    // 0x80083008: lb          $a2, 0x25($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X25);
    // 0x8008300C: jal         0x8005FC98
    // 0x80083010: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8005FC98(rdram, ctx);
        goto after_6;
    // 0x80083010: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_6:
    // 0x80083014: sb          $zero, 0x24($sp)
    MEM_B(0X24, ctx->r29) = 0;
L_80083018:
    // 0x80083018: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008301C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083020: lb          $a1, 0x24($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X24);
    // 0x80083024: jal         0x80025568
    // 0x80083028: nop

    func_80025568(rdram, ctx);
        goto after_7;
    // 0x80083028: nop

    after_7:
    // 0x8008302C: lb          $t2, 0x24($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X24);
    // 0x80083030: nop

    // 0x80083034: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x80083038: sll         $t0, $t9, 24
    ctx->r8 = S32(ctx->r25 << 24);
    // 0x8008303C: sra         $t1, $t0, 24
    ctx->r9 = S32(SIGNED(ctx->r8) >> 24);
    // 0x80083040: slti        $at, $t1, 0x17
    ctx->r1 = SIGNED(ctx->r9) < 0X17 ? 1 : 0;
    // 0x80083044: bne         $at, $zero, L_80083018
    if (ctx->r1 != 0) {
        // 0x80083048: sb          $t9, 0x24($sp)
        MEM_B(0X24, ctx->r29) = ctx->r25;
            goto L_80083018;
    }
    // 0x80083048: sb          $t9, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r25;
    // 0x8008304C: b           L_80083104
    // 0x80083050: nop

        goto L_80083104;
    // 0x80083050: nop

L_80083054:
    // 0x80083054: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80083058: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x8008305C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80083060: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80083064: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80083068: lw          $t4, -0x4C04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4C04);
    // 0x8008306C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083070: lb          $t6, 0x0($t4)
    ctx->r14 = MEM_B(ctx->r12, 0X0);
    // 0x80083074: nop

    // 0x80083078: sb          $t6, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = ctx->r14;
    // 0x8008307C: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x80083080: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80083084: lw          $t7, -0x1BD8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1BD8);
    // 0x80083088: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8008308C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80083090: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80083094: lw          $t2, -0x4C04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4C04);
    // 0x80083098: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008309C: lb          $t9, 0x1($t2)
    ctx->r25 = MEM_B(ctx->r10, 0X1);
    // 0x800830A0: nop

    // 0x800830A4: sb          $t9, 0x4802($at)
    MEM_B(0X4802, ctx->r1) = ctx->r25;
    // 0x800830A8: sb          $t9, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r25;
    // 0x800830AC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800830B0: lw          $t0, -0x1BD8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1BD8);
    // 0x800830B4: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800830B8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800830BC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800830C0: lw          $t3, -0x4C04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4C04);
    // 0x800830C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800830C8: lb          $t5, 0x2($t3)
    ctx->r13 = MEM_B(ctx->r11, 0X2);
    // 0x800830CC: nop

    // 0x800830D0: sb          $t5, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = ctx->r13;
    // 0x800830D4: sb          $t5, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r13;
    // 0x800830D8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800830DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800830E0: sb          $t4, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = ctx->r12;
    // 0x800830E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800830E8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800830EC: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800830F0: lb          $a2, 0x4803($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X4803);
    // 0x800830F4: lb          $a1, 0x4802($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4802);
    // 0x800830F8: lb          $a0, 0x4801($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4801);
    // 0x800830FC: jal         0x8005FC98
    // 0x80083100: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8005FC98(rdram, ctx);
        goto after_8;
    // 0x80083100: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_8:
L_80083104:
    // 0x80083104: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083108: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8008310C: jal         0x800250A0
    // 0x80083110: nop

    func_800250A0(rdram, ctx);
        goto after_9;
    // 0x80083110: nop

    after_9:
    // 0x80083114: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80083118: lb          $a2, 0x26($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X26);
    // 0x8008311C: lb          $a3, 0x25($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X25);
    // 0x80083120: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083124: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083128: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8008312C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80083130: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80083134: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80083138: jal         0x8002536C
    // 0x8008313C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    func_8002536C(rdram, ctx);
        goto after_10;
    // 0x8008313C: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    after_10:
    // 0x80083140: jal         0x800880E4
    // 0x80083144: nop

    func_800880E4(rdram, ctx);
        goto after_11;
    // 0x80083144: nop

    after_11:
    // 0x80083148: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008314C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083150: jal         0x8002598C
    // 0x80083154: nop

    func_8002598C(rdram, ctx);
        goto after_12;
    // 0x80083154: nop

    after_12:
    // 0x80083158: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008315C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083160: jal         0x80024EF4
    // 0x80083164: nop

    func_80024EF4(rdram, ctx);
        goto after_13;
    // 0x80083164: nop

    after_13:
    // 0x80083168: b           L_80083170
    // 0x8008316C: nop

        goto L_80083170;
    // 0x8008316C: nop

L_80083170:
    // 0x80083170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80083174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80083178: jr          $ra
    // 0x8008317C: nop

    return;
    // 0x8008317C: nop

;}
RECOMP_FUNC void func_800C1D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1D38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C1D3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C1D40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C1D44: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C1D48: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C1D4C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C1D50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1D54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C1D58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1D5C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C1D60: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C1D64: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C1D68: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C1D6C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C1D70: nop

    // 0x800C1D74: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C1D78: nop

    // 0x800C1D7C: bne         $t1, $zero, L_800C1DF0
    if (ctx->r9 != 0) {
        // 0x800C1D80: nop
    
            goto L_800C1DF0;
    }
    // 0x800C1D80: nop

    // 0x800C1D84: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C1D88: nop

    // 0x800C1D8C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C1D90: nop

    // 0x800C1D94: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C1D98: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C1D9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C1DA0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C1DA4: nop

    // 0x800C1DA8: swc1        $f4, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f4.u32l;
    // 0x800C1DAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C1DB0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C1DB4: nop

    // 0x800C1DB8: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x800C1DBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C1DC0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C1DC4: nop

    // 0x800C1DC8: swc1        $f8, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f8.u32l;
    // 0x800C1DCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1DD0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800C1DD4: addiu       $t8, $t8, 0x7FF0
    ctx->r24 = ADD32(ctx->r24, 0X7FF0);
    // 0x800C1DD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1DDC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800C1DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C1DE4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800C1DE8: jal         0x8001C0EC
    // 0x800C1DEC: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C1DEC: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_0:
L_800C1DF0:
    // 0x800C1DF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1DF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1DF8: jal         0x8001B44C
    // 0x800C1DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x800C1DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C1E00: beq         $v0, $zero, L_800C1E3C
    if (ctx->r2 == 0) {
        // 0x800C1E04: nop
    
            goto L_800C1E3C;
    }
    // 0x800C1E04: nop

    // 0x800C1E08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C1E0C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800C1E10: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x800C1E14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1E18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1E1C: jal         0x8001BBDC
    // 0x800C1E20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800C1E20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800C1E24: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C1E28: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C1E2C: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800C1E30: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C1E34: nop

    // 0x800C1E38: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800C1E3C:
    // 0x800C1E3C: b           L_800C1E44
    // 0x800C1E40: nop

        goto L_800C1E44;
    // 0x800C1E40: nop

L_800C1E44:
    // 0x800C1E44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C1E48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C1E4C: jr          $ra
    // 0x800C1E50: nop

    return;
    // 0x800C1E50: nop

;}
RECOMP_FUNC void func_800AAAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AAAA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AAAA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AAAA8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AAAAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AAAB0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AAAB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AAAB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AAABC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AAAC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AAAC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AAAC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AAACC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AAAD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AAAD4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AAAD8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAADC: nop

    // 0x800AAAE0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AAAE4: nop

    // 0x800AAAE8: bne         $t1, $zero, L_800AAB44
    if (ctx->r9 != 0) {
        // 0x800AAAEC: nop
    
            goto L_800AAB44;
    }
    // 0x800AAAEC: nop

    // 0x800AAAF0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAAF4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AAAF8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AAAFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AAB00: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAB04: nop

    // 0x800AAB08: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AAB0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AAB10: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAB14: nop

    // 0x800AAB18: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AAB1C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAB20: nop

    // 0x800AAB24: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800AAB28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAB2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAB30: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AAB34: addiu       $a3, $a3, 0x7620
    ctx->r7 = ADD32(ctx->r7, 0X7620);
    // 0x800AAB38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AAB3C: jal         0x8001ABF4
    // 0x800AAB40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800AAB40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800AAB44:
    // 0x800AAB44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAB48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAB4C: jal         0x8002A8B4
    // 0x800AAB50: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800AAB50: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_1:
    // 0x800AAB54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAB58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAB5C: jal         0x80028FA0
    // 0x800AAB60: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800AAB60: nop

    after_2:
    // 0x800AAB64: beq         $v0, $zero, L_800AAB7C
    if (ctx->r2 == 0) {
        // 0x800AAB68: nop
    
            goto L_800AAB7C;
    }
    // 0x800AAB68: nop

    // 0x800AAB6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAB70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAB74: jal         0x80029B60
    // 0x800AAB78: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800AAB78: nop

    after_3:
L_800AAB7C:
    // 0x800AAB7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAB80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAB84: jal         0x80029C40
    // 0x800AAB88: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800AAB88: nop

    after_4:
    // 0x800AAB8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAB90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAB94: jal         0x80029D04
    // 0x800AAB98: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800AAB98: nop

    after_5:
    // 0x800AAB9C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AABA0: nop

    // 0x800AABA4: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800AABA8: nop

    // 0x800AABAC: swc1        $f8, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f8.u32l;
    // 0x800AABB0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AABB4: nop

    // 0x800AABB8: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800AABBC: nop

    // 0x800AABC0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800AABC4: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
    // 0x800AABC8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800AABCC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800AABD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AABD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AABD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800AABDC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800AABE0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800AABE4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800AABE8: jal         0x80029018
    // 0x800AABEC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800AABEC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x800AABF0: beq         $v0, $zero, L_800AAC14
    if (ctx->r2 == 0) {
        // 0x800AABF4: nop
    
            goto L_800AAC14;
    }
    // 0x800AABF4: nop

    // 0x800AABF8: jal         0x800297DC
    // 0x800AABFC: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800AABFC: nop

    after_7:
    // 0x800AAC00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAC04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAC08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AAC0C: jal         0x80029824
    // 0x800AAC10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800AAC10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800AAC14:
    // 0x800AAC14: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAC18: nop

    // 0x800AAC1C: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800AAC20: nop

    // 0x800AAC24: slti        $at, $t2, 0x28
    ctx->r1 = SIGNED(ctx->r10) < 0X28 ? 1 : 0;
    // 0x800AAC28: bne         $at, $zero, L_800AAC48
    if (ctx->r1 != 0) {
        // 0x800AAC2C: nop
    
            goto L_800AAC48;
    }
    // 0x800AAC2C: nop

    // 0x800AAC30: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAC34: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800AAC38: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800AAC3C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAC40: nop

    // 0x800AAC44: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800AAC48:
    // 0x800AAC48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAC4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAC50: jal         0x8002A560
    // 0x800AAC54: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    func_8002A560(rdram, ctx);
        goto after_9;
    // 0x800AAC54: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_9:
    // 0x800AAC58: bne         $v0, $zero, L_800AAC78
    if (ctx->r2 != 0) {
        // 0x800AAC5C: nop
    
            goto L_800AAC78;
    }
    // 0x800AAC5C: nop

    // 0x800AAC60: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAC64: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800AAC68: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800AAC6C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAC70: nop

    // 0x800AAC74: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800AAC78:
    // 0x800AAC78: b           L_800AAC80
    // 0x800AAC7C: nop

        goto L_800AAC80;
    // 0x800AAC7C: nop

L_800AAC80:
    // 0x800AAC80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AAC84: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800AAC88: jr          $ra
    // 0x800AAC8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AAC8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800ACDCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ACDCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800ACDD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800ACDD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ACDD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ACDDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ACDE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ACDE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ACDE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ACDEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ACDF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ACDF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ACDF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ACDFC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800ACE00: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACE04: nop

    // 0x800ACE08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ACE0C: nop

    // 0x800ACE10: bne         $t1, $zero, L_800ACEE8
    if (ctx->r9 != 0) {
        // 0x800ACE14: nop
    
            goto L_800ACEE8;
    }
    // 0x800ACE14: nop

    // 0x800ACE18: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACE1C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ACE20: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800ACE24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800ACE28: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACE2C: nop

    // 0x800ACE30: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800ACE34: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800ACE38: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACE3C: nop

    // 0x800ACE40: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800ACE44: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACE48: nop

    // 0x800ACE4C: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800ACE50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACE54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACE58: jal         0x8002A560
    // 0x800ACE5C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A560(rdram, ctx);
        goto after_0;
    // 0x800ACE5C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_0:
    // 0x800ACE60: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACE64: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800ACE68: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x800ACE6C: sh          $t7, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = ctx->r15;
    // 0x800ACE70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACE74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACE78: jal         0x8002A46C
    // 0x800ACE7C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x800ACE7C: nop

    after_1:
    // 0x800ACE80: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACE84: nop

    // 0x800ACE88: swc1        $f0, 0xD4($t9)
    MEM_W(0XD4, ctx->r25) = ctx->f0.u32l;
    // 0x800ACE8C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACE90: nop

    // 0x800ACE94: lwc1        $f8, 0xD4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x800ACE98: lwc1        $f10, 0xD8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XD8);
    // 0x800ACE9C: nop

    // 0x800ACEA0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800ACEA4: nop

    // 0x800ACEA8: bc1f        L_800ACEDC
    if (!c1cs) {
        // 0x800ACEAC: nop
    
            goto L_800ACEDC;
    }
    // 0x800ACEAC: nop

    // 0x800ACEB0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACEB4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800ACEB8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800ACEBC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACEC0: nop

    // 0x800ACEC4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800ACEC8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACECC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800ACED0: sh          $t4, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r12;
    // 0x800ACED4: b           L_800AD024
    // 0x800ACED8: nop

        goto L_800AD024;
    // 0x800ACED8: nop

L_800ACEDC:
    // 0x800ACEDC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACEE0: nop

    // 0x800ACEE4: sh          $zero, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = 0;
L_800ACEE8:
    // 0x800ACEE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACEEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACEF0: jal         0x80029C40
    // 0x800ACEF4: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800ACEF4: nop

    after_2:
    // 0x800ACEF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACEFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACF00: jal         0x80029D04
    // 0x800ACF04: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800ACF04: nop

    after_3:
    // 0x800ACF08: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACF0C: nop

    // 0x800ACF10: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800ACF14: nop

    // 0x800ACF18: bgez        $t8, L_800ACF2C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800ACF1C: andi        $t9, $t8, 0x1
        ctx->r25 = ctx->r24 & 0X1;
            goto L_800ACF2C;
    }
    // 0x800ACF1C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800ACF20: beq         $t9, $zero, L_800ACF2C
    if (ctx->r25 == 0) {
        // 0x800ACF24: nop
    
            goto L_800ACF2C;
    }
    // 0x800ACF24: nop

    // 0x800ACF28: addiu       $t9, $t9, -0x2
    ctx->r25 = ADD32(ctx->r25, -0X2);
L_800ACF2C:
    // 0x800ACF2C: beq         $t9, $zero, L_800ACF84
    if (ctx->r25 == 0) {
        // 0x800ACF30: nop
    
            goto L_800ACF84;
    }
    // 0x800ACF30: nop

    // 0x800ACF34: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACF38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ACF3C: lh          $t1, 0xAE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAE);
    // 0x800ACF40: lw          $a2, 0xD4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XD4);
    // 0x800ACF44: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800ACF48: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800ACF4C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800ACF50: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800ACF54: jal         0x800BFFCC
    // 0x800ACF58: nop

    func_800BFFCC(rdram, ctx);
        goto after_4;
    // 0x800ACF58: nop

    after_4:
    // 0x800ACF5C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x800ACF60: lh          $t2, 0x18($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X18);
    // 0x800ACF64: nop

    // 0x800ACF68: bne         $t2, $zero, L_800ACF7C
    if (ctx->r10 != 0) {
        // 0x800ACF6C: nop
    
            goto L_800ACF7C;
    }
    // 0x800ACF6C: nop

    // 0x800ACF70: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACF74: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800ACF78: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
L_800ACF7C:
    // 0x800ACF7C: b           L_800ACFC0
    // 0x800ACF80: nop

        goto L_800ACFC0;
    // 0x800ACF80: nop

L_800ACF84:
    // 0x800ACF84: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACF88: nop

    // 0x800ACF8C: lh          $t6, 0xAE($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAE);
    // 0x800ACF90: lwc1        $f12, 0x3C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800ACF94: bgez        $t6, L_800ACFA4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800ACF98: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_800ACFA4;
    }
    // 0x800ACF98: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x800ACF9C: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x800ACFA0: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_800ACFA4:
    // 0x800ACFA4: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x800ACFA8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800ACFAC: jal         0x80015538
    // 0x800ACFB0: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800ACFB0: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_5:
    // 0x800ACFB4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACFB8: nop

    // 0x800ACFBC: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
L_800ACFC0:
    // 0x800ACFC0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACFC4: nop

    // 0x800ACFC8: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800ACFCC: nop

    // 0x800ACFD0: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x800ACFD4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACFD8: nop

    // 0x800ACFDC: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800ACFE0: nop

    // 0x800ACFE4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800ACFE8: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
    // 0x800ACFEC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACFF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800ACFF4: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800ACFF8: nop

    // 0x800ACFFC: bne         $t5, $at, L_800AD01C
    if (ctx->r13 != ctx->r1) {
        // 0x800AD000: nop
    
            goto L_800AD01C;
    }
    // 0x800AD000: nop

    // 0x800AD004: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD008: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800AD00C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800AD010: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800AD014: nop

    // 0x800AD018: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800AD01C:
    // 0x800AD01C: b           L_800AD024
    // 0x800AD020: nop

        goto L_800AD024;
    // 0x800AD020: nop

L_800AD024:
    // 0x800AD024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AD028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800AD02C: jr          $ra
    // 0x800AD030: nop

    return;
    // 0x800AD030: nop

;}
RECOMP_FUNC void func_800C0CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0CC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C0CC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C0CC8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C0CCC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C0CD0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C0CD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C0CD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C0CDC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C0CE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C0CE4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C0CE8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C0CEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C0CF0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C0CF4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C0CF8: nop

    // 0x800C0CFC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C0D00: nop

    // 0x800C0D04: bne         $t1, $zero, L_800C0D60
    if (ctx->r9 != 0) {
        // 0x800C0D08: nop
    
            goto L_800C0D60;
    }
    // 0x800C0D08: nop

    // 0x800C0D0C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C0D10: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C0D14: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800C0D18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C0D1C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C0D20: nop

    // 0x800C0D24: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800C0D28: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C0D2C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C0D30: nop

    // 0x800C0D34: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800C0D38: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C0D3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C0D40: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800C0D44: addiu       $t7, $t7, 0x7F08
    ctx->r15 = ADD32(ctx->r15, 0X7F08);
    // 0x800C0D48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C0D4C: lh          $a2, 0xA8($t6)
    ctx->r6 = MEM_H(ctx->r14, 0XA8);
    // 0x800C0D50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800C0D54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C0D58: jal         0x8001C0EC
    // 0x800C0D5C: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C0D5C: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    after_0:
L_800C0D60:
    // 0x800C0D60: b           L_800C0D68
    // 0x800C0D64: nop

        goto L_800C0D68;
    // 0x800C0D64: nop

L_800C0D68:
    // 0x800C0D68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0D6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C0D70: jr          $ra
    // 0x800C0D74: nop

    return;
    // 0x800C0D74: nop

;}
RECOMP_FUNC void func_8007B4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B4BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007B4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B4C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007B4C8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007B4CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007B4D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007B4D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B4D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007B4DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B4E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007B4E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007B4E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007B4EC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007B4F0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B4F4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8007B4F8: lh          $t1, 0xE4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE4);
    // 0x8007B4FC: nop

    // 0x8007B500: bne         $t1, $at, L_8007B53C
    if (ctx->r9 != ctx->r1) {
        // 0x8007B504: nop
    
            goto L_8007B53C;
    }
    // 0x8007B504: nop

    // 0x8007B508: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007B50C: lhu         $t2, -0x1C7C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C7C);
    // 0x8007B510: nop

    // 0x8007B514: andi        $t3, $t2, 0x2000
    ctx->r11 = ctx->r10 & 0X2000;
    // 0x8007B518: beq         $t3, $zero, L_8007B534
    if (ctx->r11 == 0) {
        // 0x8007B51C: nop
    
            goto L_8007B534;
    }
    // 0x8007B51C: nop

    // 0x8007B520: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007B524: jal         0x800795C8
    // 0x8007B528: nop

    func_800795C8(rdram, ctx);
        goto after_0;
    // 0x8007B528: nop

    after_0:
    // 0x8007B52C: b           L_8007B590
    // 0x8007B530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007B590;
    // 0x8007B530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007B534:
    // 0x8007B534: b           L_8007B580
    // 0x8007B538: nop

        goto L_8007B580;
    // 0x8007B538: nop

L_8007B53C:
    // 0x8007B53C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B540: nop

    // 0x8007B544: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x8007B548: nop

    // 0x8007B54C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8007B550: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
    // 0x8007B554: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B558: nop

    // 0x8007B55C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8007B560: nop

    // 0x8007B564: bne         $t8, $zero, L_8007B580
    if (ctx->r24 != 0) {
        // 0x8007B568: nop
    
            goto L_8007B580;
    }
    // 0x8007B568: nop

    // 0x8007B56C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007B570: jal         0x800795C8
    // 0x8007B574: nop

    func_800795C8(rdram, ctx);
        goto after_1;
    // 0x8007B574: nop

    after_1:
    // 0x8007B578: b           L_8007B590
    // 0x8007B57C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007B590;
    // 0x8007B57C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007B580:
    // 0x8007B580: b           L_8007B590
    // 0x8007B584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8007B590;
    // 0x8007B584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007B588: b           L_8007B590
    // 0x8007B58C: nop

        goto L_8007B590;
    // 0x8007B58C: nop

L_8007B590:
    // 0x8007B590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B594: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007B598: jr          $ra
    // 0x8007B59C: nop

    return;
    // 0x8007B59C: nop

;}
RECOMP_FUNC void func_8007E678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E678: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007E67C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E680: jal         0x8001838C
    // 0x8007E684: nop

    func_8001838C(rdram, ctx);
        goto after_0;
    // 0x8007E684: nop

    after_0:
    // 0x8007E688: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8007E68C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8007E690:
    // 0x8007E690: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E694: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007E698: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007E69C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007E6A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007E6A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007E6A8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007E6AC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8007E6B0: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8007E6B4: nop

    // 0x8007E6B8: beq         $t9, $zero, L_8007E6EC
    if (ctx->r25 == 0) {
        // 0x8007E6BC: nop
    
            goto L_8007E6EC;
    }
    // 0x8007E6BC: nop

    // 0x8007E6C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E6C4: jal         0x8001C1A8
    // 0x8007E6C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C1A8(rdram, ctx);
        goto after_1;
    // 0x8007E6C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007E6CC: beq         $v0, $zero, L_8007E6EC
    if (ctx->r2 == 0) {
        // 0x8007E6D0: nop
    
            goto L_8007E6EC;
    }
    // 0x8007E6D0: nop

    // 0x8007E6D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E6D8: jal         0x8001B014
    // 0x8007E6DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B014(rdram, ctx);
        goto after_2;
    // 0x8007E6DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8007E6E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E6E4: jal         0x8001C384
    // 0x8007E6E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C384(rdram, ctx);
        goto after_3;
    // 0x8007E6E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_8007E6EC:
    // 0x8007E6EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E6F0: nop

    // 0x8007E6F4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007E6F8: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x8007E6FC: bne         $at, $zero, L_8007E690
    if (ctx->r1 != 0) {
        // 0x8007E700: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_8007E690;
    }
    // 0x8007E700: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8007E704: b           L_8007E70C
    // 0x8007E708: nop

        goto L_8007E70C;
    // 0x8007E708: nop

L_8007E70C:
    // 0x8007E70C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007E714: jr          $ra
    // 0x8007E718: nop

    return;
    // 0x8007E718: nop

;}
RECOMP_FUNC void func_800E450C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E450C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E4510: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E4514: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E4518: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E451C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E4520: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E4524: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E4528: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E452C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E4530: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E4534: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E4538: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E453C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800E4540: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800E4544: nop

    // 0x800E4548: bne         $t0, $zero, L_800E456C
    if (ctx->r8 != 0) {
        // 0x800E454C: nop
    
            goto L_800E456C;
    }
    // 0x800E454C: nop

    // 0x800E4550: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E4554: nop

    // 0x800E4558: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800E455C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E4560: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x800E4564: b           L_800E45A8
    // 0x800E4568: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_800E45A8;
    // 0x800E4568: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_800E456C:
    // 0x800E456C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E4570: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E4574: nop

    // 0x800E4578: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800E457C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800E4580: nop

    // 0x800E4584: lwc1        $f12, 0x2C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800E4588: nop

    // 0x800E458C: swc1        $f12, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f12.u32l;
    // 0x800E4590: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E4594: nop

    // 0x800E4598: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x800E459C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800E45A0: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x800E45A4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
L_800E45A8:
    // 0x800E45A8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800E45AC: nop

    // 0x800E45B0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800E45B4: b           L_800E45BC
    // 0x800E45B8: nop

        goto L_800E45BC;
    // 0x800E45B8: nop

L_800E45BC:
    // 0x800E45BC: jr          $ra
    // 0x800E45C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E45C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800C5F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5F80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800C5F84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C5F88: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C5F8C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C5F90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C5F94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C5F98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C5F9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C5FA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5FA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C5FA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5FAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C5FB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C5FB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C5FB8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800C5FBC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5FC0: nop

    // 0x800C5FC4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C5FC8: nop

    // 0x800C5FCC: bne         $t1, $zero, L_800C6050
    if (ctx->r9 != 0) {
        // 0x800C5FD0: nop
    
            goto L_800C6050;
    }
    // 0x800C5FD0: nop

    // 0x800C5FD4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5FD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C5FDC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800C5FE0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5FE4: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x800C5FE8: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800C5FEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C5FF0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5FF4: nop

    // 0x800C5FF8: swc1        $f4, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f4.u32l;
    // 0x800C5FFC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6000: nop

    // 0x800C6004: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800C6008: nop

    // 0x800C600C: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800C6010: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6014: nop

    // 0x800C6018: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800C601C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6020: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6024: jal         0x8001BBDC
    // 0x800C6028: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C6028: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800C602C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6030: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800C6034: addiu       $t9, $t9, -0x7E90
    ctx->r25 = ADD32(ctx->r25, -0X7E90);
    // 0x800C6038: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C603C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800C6040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C6044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C6048: jal         0x8001C0EC
    // 0x800C604C: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C604C: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    after_1:
L_800C6050:
    // 0x800C6050: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6054: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6058: jal         0x8002A1FC
    // 0x800C605C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800C605C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_2:
    // 0x800C6060: beq         $v0, $zero, L_800C6080
    if (ctx->r2 == 0) {
        // 0x800C6064: nop
    
            goto L_800C6080;
    }
    // 0x800C6064: nop

    // 0x800C6068: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800C606C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800C6070: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800C6074: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6078: b           L_800C60D4
    // 0x800C607C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_800C60D4;
    // 0x800C607C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800C6080:
    // 0x800C6080: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6084: nop

    // 0x800C6088: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800C608C: nop

    // 0x800C6090: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800C6094: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x800C6098: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C609C: nop

    // 0x800C60A0: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800C60A4: nop

    // 0x800C60A8: bne         $t7, $zero, L_800C60D4
    if (ctx->r15 != 0) {
        // 0x800C60AC: nop
    
            goto L_800C60D4;
    }
    // 0x800C60AC: nop

    // 0x800C60B0: jal         0x80014E80
    // 0x800C60B4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x800C60B4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x800C60B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C60BC: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x800C60C0: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x800C60C4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800C60C8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800C60CC: nop

    // 0x800C60D0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800C60D4:
    // 0x800C60D4: b           L_800C60DC
    // 0x800C60D8: nop

        goto L_800C60DC;
    // 0x800C60D8: nop

L_800C60DC:
    // 0x800C60DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C60E0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C60E4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C60E8: jr          $ra
    // 0x800C60EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800C60EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C639C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C639C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C63A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C63A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C63A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C63AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C63B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C63B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C63B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C63BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C63C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C63C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C63C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C63CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C63D0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C63D4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C63D8: nop

    // 0x800C63DC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C63E0: nop

    // 0x800C63E4: bne         $t1, $zero, L_800C643C
    if (ctx->r9 != 0) {
        // 0x800C63E8: nop
    
            goto L_800C643C;
    }
    // 0x800C63E8: nop

    // 0x800C63EC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C63F0: nop

    // 0x800C63F4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C63F8: nop

    // 0x800C63FC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C6400: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C6404: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800C6408: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C640C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C6410: nop

    // 0x800C6414: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C6418: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C641C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C6420: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800C6424: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C6428: nop

    // 0x800C642C: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x800C6430: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C6434: nop

    // 0x800C6438: sh          $zero, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = 0;
L_800C643C:
    // 0x800C643C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6440: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6444: jal         0x80028FA0
    // 0x800C6448: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800C6448: nop

    after_0:
    // 0x800C644C: beq         $v0, $zero, L_800C6470
    if (ctx->r2 == 0) {
        // 0x800C6450: nop
    
            goto L_800C6470;
    }
    // 0x800C6450: nop

    // 0x800C6454: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6458: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C645C: jal         0x80029B60
    // 0x800C6460: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x800C6460: nop

    after_1:
    // 0x800C6464: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C6468: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x800C646C: sh          $t0, 0xB0($t1)
    MEM_H(0XB0, ctx->r9) = ctx->r8;
L_800C6470:
    // 0x800C6470: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C6474: nop

    // 0x800C6478: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800C647C: nop

    // 0x800C6480: beq         $t4, $zero, L_800C64D0
    if (ctx->r12 == 0) {
        // 0x800C6484: nop
    
            goto L_800C64D0;
    }
    // 0x800C6484: nop

    // 0x800C6488: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C648C: nop

    // 0x800C6490: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x800C6494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C649C: lui         $a2, 0x3F0B
    ctx->r6 = S32(0X3F0B << 16);
    // 0x800C64A0: ori         $a2, $a2, 0xA2F0
    ctx->r6 = ctx->r6 | 0XA2F0;
    // 0x800C64A4: jal         0x80029EF8
    // 0x800C64A8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x800C64A8: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x800C64AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C64B0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800C64B4: addiu       $t5, $t5, -0x7E90
    ctx->r13 = ADD32(ctx->r13, -0X7E90);
    // 0x800C64B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C64BC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800C64C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C64C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C64C8: jal         0x8001C0EC
    // 0x800C64CC: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800C64CC: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    after_3:
L_800C64D0:
    // 0x800C64D0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C64D4: nop

    // 0x800C64D8: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x800C64DC: nop

    // 0x800C64E0: bne         $t7, $zero, L_800C6540
    if (ctx->r15 != 0) {
        // 0x800C64E4: nop
    
            goto L_800C6540;
    }
    // 0x800C64E4: nop

    // 0x800C64E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C64EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C64F0: jal         0x8002A640
    // 0x800C64F4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_4;
    // 0x800C64F4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_4:
    // 0x800C64F8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800C64FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C6500: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C6504: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800C6508: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C650C: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x800C6510: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800C6514: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800C6518: jal         0x80015538
    // 0x800C651C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800C651C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x800C6520: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C6524: nop

    // 0x800C6528: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x800C652C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C6530: nop

    // 0x800C6534: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800C6538: b           L_800C6558
    // 0x800C653C: swc1        $f8, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f8.u32l;
        goto L_800C6558;
    // 0x800C653C: swc1        $f8, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f8.u32l;
L_800C6540:
    // 0x800C6540: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C6544: nop

    // 0x800C6548: lh          $t2, 0xB0($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB0);
    // 0x800C654C: nop

    // 0x800C6550: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x800C6554: sh          $t5, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = ctx->r13;
L_800C6558:
    // 0x800C6558: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C655C: nop

    // 0x800C6560: lwc1        $f10, 0x28($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800C6564: nop

    // 0x800C6568: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x800C656C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C6570: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C6574: nop

    // 0x800C6578: swc1        $f16, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f16.u32l;
    // 0x800C657C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6584: jal         0x80029C40
    // 0x800C6588: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800C6588: nop

    after_6:
    // 0x800C658C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C6590: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C6594: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6598: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C659C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C65A0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800C65A4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C65A8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800C65AC: jal         0x80029018
    // 0x800C65B0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800C65B0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x800C65B4: beq         $v0, $zero, L_800C65D8
    if (ctx->r2 == 0) {
        // 0x800C65B8: nop
    
            goto L_800C65D8;
    }
    // 0x800C65B8: nop

    // 0x800C65BC: jal         0x800297DC
    // 0x800C65C0: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800C65C0: nop

    after_8:
    // 0x800C65C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C65C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C65CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C65D0: jal         0x80029824
    // 0x800C65D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800C65D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_800C65D8:
    // 0x800C65D8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C65DC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C65E0: nop

    // 0x800C65E4: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
    // 0x800C65E8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C65EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C65F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C65F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C65F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C65FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C6600: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C6604: jal         0x80029F58
    // 0x800C6608: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_10;
    // 0x800C6608: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x800C660C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C6610: bne         $v0, $at, L_800C669C
    if (ctx->r2 != ctx->r1) {
        // 0x800C6614: nop
    
            goto L_800C669C;
    }
    // 0x800C6614: nop

    // 0x800C6618: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C661C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6620: jal         0x8002A1FC
    // 0x800C6624: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_11;
    // 0x800C6624: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_11:
    // 0x800C6628: beq         $v0, $zero, L_800C6648
    if (ctx->r2 == 0) {
        // 0x800C662C: nop
    
            goto L_800C6648;
    }
    // 0x800C662C: nop

    // 0x800C6630: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C6634: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800C6638: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800C663C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C6640: b           L_800C669C
    // 0x800C6644: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_800C669C;
    // 0x800C6644: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800C6648:
    // 0x800C6648: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C664C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C6650: lh          $t2, 0xA8($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XA8);
    // 0x800C6654: nop

    // 0x800C6658: bne         $t2, $at, L_800C6678
    if (ctx->r10 != ctx->r1) {
        // 0x800C665C: nop
    
            goto L_800C6678;
    }
    // 0x800C665C: nop

    // 0x800C6660: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C6664: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800C6668: sh          $t5, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r13;
    // 0x800C666C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C6670: b           L_800C669C
    // 0x800C6674: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_800C669C;
    // 0x800C6674: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800C6678:
    // 0x800C6678: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C667C: nop

    // 0x800C6680: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800C6684: nop

    // 0x800C6688: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800C668C: sh          $t9, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r25;
    // 0x800C6690: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C6694: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800C6698: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
L_800C669C:
    // 0x800C669C: b           L_800C66A4
    // 0x800C66A0: nop

        goto L_800C66A4;
    // 0x800C66A0: nop

L_800C66A4:
    // 0x800C66A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C66A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C66AC: jr          $ra
    // 0x800C66B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C66B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009E068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E068: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8009E06C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009E070: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009E074: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009E078: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009E07C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E080: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009E084: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E088: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009E08C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009E090: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009E094: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8009E098: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8009E09C: nop

    // 0x8009E0A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009E0A4: nop

    // 0x8009E0A8: bne         $t1, $zero, L_8009E0BC
    if (ctx->r9 != 0) {
        // 0x8009E0AC: nop
    
            goto L_8009E0BC;
    }
    // 0x8009E0AC: nop

    // 0x8009E0B0: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8009E0B4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009E0B8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_8009E0BC:
    // 0x8009E0BC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8009E0C0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8009E0C4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009E0C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009E0CC: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8009E0D0: nop

    // 0x8009E0D4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8009E0D8: nop

    // 0x8009E0DC: bc1f        L_8009E0FC
    if (!c1cs) {
        // 0x8009E0E0: nop
    
            goto L_8009E0FC;
    }
    // 0x8009E0E0: nop

    // 0x8009E0E4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8009E0E8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8009E0EC: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x8009E0F0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8009E0F4: nop

    // 0x8009E0F8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8009E0FC:
    // 0x8009E0FC: b           L_8009E104
    // 0x8009E100: nop

        goto L_8009E104;
    // 0x8009E100: nop

L_8009E104:
    // 0x8009E104: jr          $ra
    // 0x8009E108: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8009E108: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80063BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063BF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80063BF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80063BF8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80063BFC: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x80063C00: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80063C04: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80063C08: bgez        $t6, L_80063C1C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80063C0C: andi        $a2, $t6, 0x1F
        ctx->r6 = ctx->r14 & 0X1F;
            goto L_80063C1C;
    }
    // 0x80063C0C: andi        $a2, $t6, 0x1F
    ctx->r6 = ctx->r14 & 0X1F;
    // 0x80063C10: beq         $a2, $zero, L_80063C1C
    if (ctx->r6 == 0) {
        // 0x80063C14: nop
    
            goto L_80063C1C;
    }
    // 0x80063C14: nop

    // 0x80063C18: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80063C1C:
    // 0x80063C1C: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x80063C20: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80063C24: bgez        $t6, L_80063C34
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80063C28: sra         $a3, $t6, 5
        ctx->r7 = S32(SIGNED(ctx->r14) >> 5);
            goto L_80063C34;
    }
    // 0x80063C28: sra         $a3, $t6, 5
    ctx->r7 = S32(SIGNED(ctx->r14) >> 5);
    // 0x80063C2C: addiu       $at, $t6, 0x1F
    ctx->r1 = ADD32(ctx->r14, 0X1F);
    // 0x80063C30: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_80063C34:
    // 0x80063C34: sll         $t8, $a3, 4
    ctx->r24 = S32(ctx->r7 << 4);
    // 0x80063C38: jal         0x8006389C
    // 0x80063C3C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    func_8006389C(rdram, ctx);
        goto after_0;
    // 0x80063C3C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    after_0:
    // 0x80063C40: b           L_80063C48
    // 0x80063C44: nop

        goto L_80063C48;
    // 0x80063C44: nop

L_80063C48:
    // 0x80063C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80063C50: jr          $ra
    // 0x80063C54: nop

    return;
    // 0x80063C54: nop

;}
RECOMP_FUNC void func_800E1670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1670: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E1674: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E1678: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E167C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E1680: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E1684: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E1688: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E168C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E1690: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1694: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E1698: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E169C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E16A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E16A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E16A8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E16AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E16B0: nop

    // 0x800E16B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E16B8: nop

    // 0x800E16BC: bne         $t1, $zero, L_800E1720
    if (ctx->r9 != 0) {
        // 0x800E16C0: nop
    
            goto L_800E1720;
    }
    // 0x800E16C0: nop

    // 0x800E16C4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E16C8: nop

    // 0x800E16CC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E16D0: nop

    // 0x800E16D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E16D8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E16DC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E16E0: nop

    // 0x800E16E4: lwc1        $f4, 0x28($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X28);
    // 0x800E16E8: nop

    // 0x800E16EC: swc1        $f4, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f4.u32l;
    // 0x800E16F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E16F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E16F8: jal         0x8001BBDC
    // 0x800E16FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800E16FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800E1700: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1704: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E1708: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E170C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1710: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800E1714: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E1718: jal         0x8001ABF4
    // 0x800E171C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E171C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E1720:
    // 0x800E1720: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E1724: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1728: nop

    // 0x800E172C: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x800E1730: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1734: nop

    // 0x800E1738: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800E173C: nop

    // 0x800E1740: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800E1744: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1748: nop

    // 0x800E174C: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800E1750: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1754: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E1758: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x800E175C: nop

    // 0x800E1760: bne         $t0, $at, L_800E195C
    if (ctx->r8 != ctx->r1) {
        // 0x800E1764: nop
    
            goto L_800E195C;
    }
    // 0x800E1764: nop

    // 0x800E1768: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E176C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1770: jal         0x8001BBDC
    // 0x800E1774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800E1774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E1778: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E177C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E1780: lh          $t3, 0xB2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB2);
    // 0x800E1784: nop

    // 0x800E1788: bne         $t3, $at, L_800E1858
    if (ctx->r11 != ctx->r1) {
        // 0x800E178C: nop
    
            goto L_800E1858;
    }
    // 0x800E178C: nop

    // 0x800E1790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1798: jal         0x8001B4AC
    // 0x800E179C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x800E179C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800E17A0: beq         $v0, $zero, L_800E1824
    if (ctx->r2 == 0) {
        // 0x800E17A4: nop
    
            goto L_800E1824;
    }
    // 0x800E17A4: nop

    // 0x800E17A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E17AC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800E17B0: addiu       $t4, $t4, -0x700C
    ctx->r12 = ADD32(ctx->r12, -0X700C);
    // 0x800E17B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E17B8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800E17BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E17C0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800E17C4: jal         0x8001C0EC
    // 0x800E17C8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800E17C8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_4:
    // 0x800E17CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E17D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E17D4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E17D8: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E17DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E17E0: jal         0x8001ABF4
    // 0x800E17E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800E17E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x800E17E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E17EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E17F0: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E17F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E17F8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E17FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E1800: jal         0x8001ABF4
    // 0x800E1804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800E1804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800E1808: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E180C: nop

    // 0x800E1810: sh          $zero, 0xB2($t2)
    MEM_H(0XB2, ctx->r10) = 0;
    // 0x800E1814: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1818: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800E181C: b           L_800E1850
    // 0x800E1820: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
        goto L_800E1850;
    // 0x800E1820: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
L_800E1824:
    // 0x800E1824: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1828: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800E182C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800E1830: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1834: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800E1838: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
    // 0x800E183C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1840: nop

    // 0x800E1844: lwc1        $f8, 0xD4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x800E1848: nop

    // 0x800E184C: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
L_800E1850:
    // 0x800E1850: b           L_800E195C
    // 0x800E1854: nop

        goto L_800E195C;
    // 0x800E1854: nop

L_800E1858:
    // 0x800E1858: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E185C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E1860: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800E1864: nop

    // 0x800E1868: bne         $t4, $at, L_800E1938
    if (ctx->r12 != ctx->r1) {
        // 0x800E186C: nop
    
            goto L_800E1938;
    }
    // 0x800E186C: nop

    // 0x800E1870: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E1874: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1878: jal         0x8001B4AC
    // 0x800E187C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x800E187C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800E1880: beq         $v0, $zero, L_800E1904
    if (ctx->r2 == 0) {
        // 0x800E1884: nop
    
            goto L_800E1904;
    }
    // 0x800E1884: nop

    // 0x800E1888: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E188C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800E1890: addiu       $t2, $t2, -0x700C
    ctx->r10 = ADD32(ctx->r10, -0X700C);
    // 0x800E1894: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E1898: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800E189C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E18A0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800E18A4: jal         0x8001C0EC
    // 0x800E18A8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800E18A8: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_8:
    // 0x800E18AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E18B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E18B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E18B8: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E18BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E18C0: jal         0x8001ABF4
    // 0x800E18C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x800E18C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800E18C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E18CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E18D0: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E18D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E18D8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E18DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E18E0: jal         0x8001ABF4
    // 0x800E18E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x800E18E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x800E18E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E18EC: nop

    // 0x800E18F0: sh          $zero, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = 0;
    // 0x800E18F4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E18F8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800E18FC: b           L_800E1930
    // 0x800E1900: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
        goto L_800E1930;
    // 0x800E1900: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
L_800E1904:
    // 0x800E1904: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1908: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x800E190C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E1910: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1914: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800E1918: sh          $t0, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r8;
    // 0x800E191C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1920: nop

    // 0x800E1924: lwc1        $f10, 0xD4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x800E1928: nop

    // 0x800E192C: swc1        $f10, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f10.u32l;
L_800E1930:
    // 0x800E1930: b           L_800E195C
    // 0x800E1934: nop

        goto L_800E195C;
    // 0x800E1934: nop

L_800E1938:
    // 0x800E1938: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E193C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800E1940: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800E1944: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1948: nop

    // 0x800E194C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800E1950: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E1954: nop

    // 0x800E1958: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800E195C:
    // 0x800E195C: b           L_800E1964
    // 0x800E1960: nop

        goto L_800E1964;
    // 0x800E1960: nop

L_800E1964:
    // 0x800E1964: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E1968: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E196C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E1970: jr          $ra
    // 0x800E1974: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E1974: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800F3E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F3E44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F3E48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F3E4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F3E50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F3E54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F3E58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F3E5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F3E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F3E64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F3E68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F3E6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F3E70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F3E74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F3E78: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F3E7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F3E80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F3E84: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x800F3E88: nop

    // 0x800F3E8C: beq         $s0, $at, L_800F3EA8
    if (ctx->r16 == ctx->r1) {
        // 0x800F3E90: nop
    
            goto L_800F3EA8;
    }
    // 0x800F3E90: nop

    // 0x800F3E94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F3E98: beq         $s0, $at, L_800F3EB8
    if (ctx->r16 == ctx->r1) {
        // 0x800F3E9C: nop
    
            goto L_800F3EB8;
    }
    // 0x800F3E9C: nop

    // 0x800F3EA0: b           L_800F3EC8
    // 0x800F3EA4: nop

        goto L_800F3EC8;
    // 0x800F3EA4: nop

L_800F3EA8:
    // 0x800F3EA8: jal         0x800F38AC
    // 0x800F3EAC: nop

    func_800F38AC(rdram, ctx);
        goto after_0;
    // 0x800F3EAC: nop

    after_0:
    // 0x800F3EB0: b           L_800F3ED0
    // 0x800F3EB4: nop

        goto L_800F3ED0;
    // 0x800F3EB4: nop

L_800F3EB8:
    // 0x800F3EB8: jal         0x800F3A68
    // 0x800F3EBC: nop

    func_800F3A68(rdram, ctx);
        goto after_1;
    // 0x800F3EBC: nop

    after_1:
    // 0x800F3EC0: b           L_800F3ED0
    // 0x800F3EC4: nop

        goto L_800F3ED0;
    // 0x800F3EC4: nop

L_800F3EC8:
    // 0x800F3EC8: b           L_800F3ED0
    // 0x800F3ECC: nop

        goto L_800F3ED0;
    // 0x800F3ECC: nop

L_800F3ED0:
    // 0x800F3ED0: b           L_800F3ED8
    // 0x800F3ED4: nop

        goto L_800F3ED8;
    // 0x800F3ED4: nop

L_800F3ED8:
    // 0x800F3ED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F3EDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F3EE0: jr          $ra
    // 0x800F3EE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F3EE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A8144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8144: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A8148: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A814C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A8150: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A8154: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A8158: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A815C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8160: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8164: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A8168: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A816C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A8170: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A8174: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A8178: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A817C: nop

    // 0x800A8180: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A8184: nop

    // 0x800A8188: bne         $t1, $zero, L_800A8214
    if (ctx->r9 != 0) {
        // 0x800A818C: nop
    
            goto L_800A8214;
    }
    // 0x800A818C: nop

    // 0x800A8190: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A8194: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A8198: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A819C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A81A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A81A4: nop

    // 0x800A81A8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A81AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A81B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A81B4: nop

    // 0x800A81B8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A81BC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A81C0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A81C4: sh          $t6, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = ctx->r14;
    // 0x800A81C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A81CC: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x800A81D0: sh          $t8, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = ctx->r24;
    // 0x800A81D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A81D8: nop

    // 0x800A81DC: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
    // 0x800A81E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A81E4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800A81E8: addiu       $t1, $t1, 0x72A0
    ctx->r9 = ADD32(ctx->r9, 0X72A0);
    // 0x800A81EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A81F0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800A81F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A81F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A81FC: jal         0x8001C0EC
    // 0x800A8200: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A8200: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    after_0:
    // 0x800A8204: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8208: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A820C: jal         0x8001BB34
    // 0x800A8210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800A8210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800A8214:
    // 0x800A8214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A821C: jal         0x80029C40
    // 0x800A8220: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A8220: nop

    after_2:
    // 0x800A8224: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8228: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A822C: jal         0x80029D04
    // 0x800A8230: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800A8230: nop

    after_3:
    // 0x800A8234: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A8238: nop

    // 0x800A823C: lh          $t3, 0xB0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB0);
    // 0x800A8240: nop

    // 0x800A8244: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800A8248: sh          $t4, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r12;
    // 0x800A824C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8250: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8254: jal         0x8001B44C
    // 0x800A8258: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800A8258: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x800A825C: bne         $v0, $zero, L_800A827C
    if (ctx->r2 != 0) {
        // 0x800A8260: nop
    
            goto L_800A827C;
    }
    // 0x800A8260: nop

    // 0x800A8264: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A8268: nop

    // 0x800A826C: lh          $t6, 0xB0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB0);
    // 0x800A8270: nop

    // 0x800A8274: bgtz        $t6, L_800A8404
    if (SIGNED(ctx->r14) > 0) {
        // 0x800A8278: nop
    
            goto L_800A8404;
    }
    // 0x800A8278: nop

L_800A827C:
    // 0x800A827C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A8280: nop

    // 0x800A8284: lh          $t8, 0xAE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAE);
    // 0x800A8288: nop

    // 0x800A828C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800A8290: sh          $t9, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = ctx->r25;
    // 0x800A8294: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A8298: nop

    // 0x800A829C: lh          $t1, 0xAE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAE);
    // 0x800A82A0: nop

    // 0x800A82A4: bgtz        $t1, L_800A8404
    if (SIGNED(ctx->r9) > 0) {
        // 0x800A82A8: nop
    
            goto L_800A8404;
    }
    // 0x800A82A8: nop

    // 0x800A82AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A82B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A82B4: jal         0x8001BBDC
    // 0x800A82B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800A82B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800A82BC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A82C0: nop

    // 0x800A82C4: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x800A82C8: nop

    // 0x800A82CC: sh          $t4, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r12;
    // 0x800A82D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A82D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A82D8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A82DC: addiu       $a3, $a3, 0x72D0
    ctx->r7 = ADD32(ctx->r7, 0X72D0);
    // 0x800A82E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A82E4: jal         0x8001ABF4
    // 0x800A82E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800A82E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x800A82EC: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x800A82F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A82F4: beq         $t2, $at, L_800A83F4
    if (ctx->r10 == ctx->r1) {
        // 0x800A82F8: nop
    
            goto L_800A83F4;
    }
    // 0x800A82F8: nop

    // 0x800A82FC: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x800A8300: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8304: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800A8308: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800A830C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A8310: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800A8314: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A8318: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800A831C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800A8320: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x800A8324: lh          $t9, 0x22($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X22);
    // 0x800A8328: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A832C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x800A8330: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x800A8334: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8338: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x800A833C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A8340: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A8344: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A8348: lh          $t0, 0x22($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X22);
    // 0x800A834C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A8350: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A8354: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A8358: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A835C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A8360: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A8364: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8368: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A836C: swc1        $f8, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f8.u32l;
    // 0x800A8370: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x800A8374: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A8378: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A837C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A8380: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A8384: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A8388: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A838C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8390: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A8394: swc1        $f10, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f10.u32l;
    // 0x800A8398: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x800A839C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A83A0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800A83A4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800A83A8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A83AC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800A83B0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800A83B4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800A83B8: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x800A83BC: sh          $t2, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = ctx->r10;
    // 0x800A83C0: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x800A83C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A83C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A83CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A83D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A83D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A83D8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A83DC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A83E0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800A83E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A83E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A83EC: jal         0x800281A4
    // 0x800A83F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_7;
    // 0x800A83F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_800A83F4:
    // 0x800A83F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A83F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A83FC: jal         0x8002B0E4
    // 0x800A8400: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x800A8400: nop

    after_8:
L_800A8404:
    // 0x800A8404: b           L_800A840C
    // 0x800A8408: nop

        goto L_800A840C;
    // 0x800A8408: nop

L_800A840C:
    // 0x800A840C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8410: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A8414: jr          $ra
    // 0x800A8418: nop

    return;
    // 0x800A8418: nop

;}
RECOMP_FUNC void func_800F8888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8888: jr          $ra
    // 0x800F888C: nop

    return;
    // 0x800F888C: nop

    // 0x800F8890: jr          $ra
    // 0x800F8894: nop

    return;
    // 0x800F8894: nop

;}
RECOMP_FUNC void func_80071A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071A88: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80071A8C: lb          $t6, 0x0($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X0);
    // 0x80071A90: nop

    // 0x80071A94: bne         $t6, $zero, L_80071AA4
    if (ctx->r14 != 0) {
        // 0x80071A98: nop
    
            goto L_80071AA4;
    }
    // 0x80071A98: nop

    // 0x80071A9C: b           L_80071B34
    // 0x80071AA0: swc1        $f14, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f14.u32l;
        goto L_80071B34;
    // 0x80071AA0: swc1        $f14, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f14.u32l;
L_80071AA4:
    // 0x80071AA4: sub.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80071AA8: swc1        $f4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f4.u32l;
    // 0x80071AAC: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80071AB0: nop

    // 0x80071AB4: swc1        $f6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f6.u32l;
    // 0x80071AB8: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80071ABC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80071AC0: nop

    // 0x80071AC4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80071AC8: nop

    // 0x80071ACC: bc1f        L_80071AE4
    if (!c1cs) {
        // 0x80071AD0: nop
    
            goto L_80071AE4;
    }
    // 0x80071AD0: nop

    // 0x80071AD4: lwc1        $f16, 0xC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80071AD8: nop

    // 0x80071ADC: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x80071AE0: swc1        $f18, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f18.u32l;
L_80071AE4:
    // 0x80071AE4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80071AE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80071AEC: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80071AF0: nop

    // 0x80071AF4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80071AF8: nop

    // 0x80071AFC: bc1f        L_80071B10
    if (!c1cs) {
        // 0x80071B00: nop
    
            goto L_80071B10;
    }
    // 0x80071B00: nop

    // 0x80071B04: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x80071B08: b           L_80071B34
    // 0x80071B0C: swc1        $f14, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f14.u32l;
        goto L_80071B34;
    // 0x80071B0C: swc1        $f14, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f14.u32l;
L_80071B10:
    // 0x80071B10: lb          $t7, 0x0($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X0);
    // 0x80071B14: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80071B18: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80071B1C: nop

    // 0x80071B20: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80071B24: nop

    // 0x80071B28: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80071B2C: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x80071B30: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
L_80071B34:
    // 0x80071B34: lwc1        $f0, 0x4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80071B38: b           L_80071B48
    // 0x80071B3C: nop

        goto L_80071B48;
    // 0x80071B3C: nop

    // 0x80071B40: b           L_80071B48
    // 0x80071B44: nop

        goto L_80071B48;
    // 0x80071B44: nop

L_80071B48:
    // 0x80071B48: jr          $ra
    // 0x80071B4C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80071B4C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
